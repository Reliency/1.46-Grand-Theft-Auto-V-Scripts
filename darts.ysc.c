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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_34 = 0f;
	vector3 vLocal_35 = { 0f, 0f, 0f };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<9> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57 = NULL;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
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
	bool bLocal_88 = 0;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	int iLocal_106[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_107 = 0;
	struct<68> Local_108 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	var uLocal_129 = 10;
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
	var uLocal_140 = 2;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 8;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 8;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	float fLocal_162 = 0f;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	vector3 vLocal_169 = { 0f, 0f, 0f };
	int iLocal_170[2] = { 0, 0 };
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = 0;
	bool bLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	bool bLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = 0;
	bool bLocal_187 = 0;
	bool bLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	var uLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	var uLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
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
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	float fLocal_245 = 0f;
	float fLocal_246 = 0f;
	float fLocal_247 = 0f;
	float fLocal_248 = 0f;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	int iLocal_253 = 0;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	char* sLocal_256[3] = { NULL, NULL, NULL };
	char* sLocal_257[3] = { NULL, NULL, NULL };
	char* sLocal_258[3] = { NULL, NULL, NULL };
	char* sLocal_259[3] = { NULL, NULL, NULL };
	struct<5> Local_260 = { 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
#endregion

void __EntryFunction__()
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	vector3 vVar3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	vector3 vVar17;
	vector3 vVar18;
	vector3 vVar19;
	vector3 vVar20;
	vector3 vVar21;
	char* sVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26[20];
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
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
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_34 = 0.063f;
	vLocal_35 = { -0.0035f, 0f, -0.001f };
	iLocal_37 = joaat("prop_target_bull");
	vLocal_42 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_47 = 0.1f;
	iLocal_58 = 3;
	fLocal_61 = 80f;
	fLocal_62 = 140f;
	fLocal_63 = 180f;
	iLocal_69 = 1;
	iLocal_70 = 65;
	iLocal_71 = 49;
	iLocal_72 = 64;
	iLocal_95 = 65;
	iLocal_97 = 660;
	fLocal_102 = 0.27f;
	fLocal_103 = 0.1f;
	fLocal_104 = -120f;
	fLocal_105 = 127f;
	fLocal_162 = ((0.05f + 0.275f) - 0.01f);
	vLocal_169 = { 500f, 500f, 500f };
	bLocal_180 = true;
	vLocal_241 = { -573.1373f, 294.0269f, 78.1765f };
	vLocal_242 = { -574.1169f, 292.7964f, 78.1766f };
	vLocal_243 = { 1995.295f, 3050.084f, 46.91535f };
	vLocal_244 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_245 = 172.6813f;
	fLocal_246 = 274.5094f;
	fLocal_247 = 142.6717f;
	fLocal_248 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_12 = 8;
	Var5.f_21 = 4;
	Var5.f_26.f_3 = 8;
	Var5.f_26.f_12 = 8;
	Var5.f_26.f_21 = 4;
	Var5.f_72 = 3;
	Var5.f_72.f_44.f_3.f_1 = 4;
	Var5.f_72.f_113 = 2;
	Var5.f_72.f_113.f_1.f_1 = 4;
	Var5.f_72.f_113.f_1.f_66.f_1 = 4;
	Var5.f_72.f_246.f_6 = 12;
	Var5.f_72.f_246.f_187 = 3;
	Var5.f_509.f_2 = 8;
	Var5.f_509.f_2.f_1.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_681 = 2;
	Var6.f_32 = 3;
	Var6.f_36 = 1;
	Var6.f_53 = 2;
	Var6.f_57 = 13;
	Var6.f_71 = 13;
	Var6.f_280 = 13;
	Var6.f_489 = 13;
	Var6.f_503 = 13;
	Var6.f_517 = 13;
	Var6.f_531 = 13;
	iVar13 = 0;
	sLocal_254 = "facials@gen_female@variations@happy";
	switch (func_493(unk_0xA19140A5C42D8715()))
	{
		case 0:
			sLocal_255 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_255 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_255 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_256[0] = "mood_happy_1";
	sLocal_256[1] = "mood_happy_2";
	sLocal_256[2] = "mood_happy_3";
	sLocal_257[0] = "darts_outro_01_guy1";
	sLocal_257[1] = "darts_outro_02_guy2";
	sLocal_257[2] = "darts_outro_03_guy2";
	sLocal_258[0] = "darts_outro_01_guy2";
	sLocal_258[1] = "darts_outro_02_guy1";
	sLocal_258[2] = "darts_outro_03_guy1";
	sLocal_259[0] = "darts_outro_01_cam";
	sLocal_259[1] = "darts_outro_02_cam";
	sLocal_259[2] = "darts_outro_03_cam";
	iLocal_170[0] = unk_0xA19140A5C42D8715();
	bLocal_183 = true;
	vVar17 = { 1992.293f, 3050.583f, 47.98973f };
	vVar18 = { -572.0406f, 294.1958f, 79.9374f };
	func_492();
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		iLocal_207 = 1;
		switch (unk_0x22C775856F4633CA(0, 2))
		{
			case 0:
				iLocal_204 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_204 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_202 = 10;
		unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
	}
	if (!unk_0xDC5D81351D6A4DDB(ScriptParam_260.f_4))
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (iLocal_207 == 2)
			{
				ScriptParam_260 = { vVar18 };
				ScriptParam_260.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_260 = { vVar17 };
				ScriptParam_260.f_3 = 57.78315f;
			}
			if (unk_0x37A8EF89184DBA23(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_260.f_4 = unk_0x78CED56884DEF3D7(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0xA16F72B04C2B4F71(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_260, &vVar19, 0);
				ScriptParam_260.f_3 = vVar19.z;
			}
		}
	}
	else
	{
		vVar19 = { unk_0xE2BBD32891C18569(ScriptParam_260.f_4, true) };
	}
	if (!unk_0x7112137033807390(func_491(), 0))
	{
		func_489(iLocal_202, 1);
		if (unk_0x5D7DFE2058701942(func_491(), 0))
		{
			unk_0xCB482EF95FAE4D73(func_491(), 0, 0);
		}
		iLocal_170[1] = func_491();
	}
	else
	{
		unk_0xD07EE91CE9B6D4CF(1);
	}
	if (unk_0x5EBD03AF78E7B4DB(67))
	{
		func_480();
		func_462(&Var0, &Var5, &Var6);
	}
	unk_0x67D84F81A1CB7EF8(0);
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
	func_460(1);
	iLocal_198 = func_457(func_493(iLocal_170[0]), 1);
	fVar15 = (to_float(iLocal_198) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_97 = round(fVar16);
	if (iLocal_97 < 660)
	{
		iLocal_97 = 660;
	}
	func_456(23, 1);
	while (true)
	{
		wait(0);
		unk_0xD8C147DA332E7F06(2);
		unk_0x74BF5F6EEF62D5A9();
		unk_0xACDF25AEEEFD68FD(15, 0f, -0.0375f);
		if (iLocal_190 && Var0 < 13)
		{
			unk_0x8F2BD06E52270B69(Var4, Var4.f_18, Var4.f_21, Var4.f_24, Var4.f_24, 2);
		}
		if ((unk_0x4915F4759304D5CF(ScriptParam_260.f_5) && !unk_0xDC5D81351D6A4DDB(func_491())) || (unk_0xDC5D81351D6A4DDB(func_491()) && unk_0x4915F4759304D5CF(func_491())))
		{
			func_462(&Var0, &Var5, &Var6);
		}
		if (!unk_0x4915F4759304D5CF(iLocal_170[0]))
		{
			unk_0xB0D7019224A3A443(iLocal_170[0], 239, 1);
			unk_0xB0D7019224A3A443(iLocal_170[0], 124, 1);
			func_455();
			unk_0xDB3170D9CA83AF72(0);
			unk_0xDB3170D9CA83AF72(2);
			iVar14 = 0;
			while (iVar14 < unk_0x751DA0D8357E8793(unk_0xA19140A5C42D8715(), &uVar26, -1))
			{
				if (uVar26[iVar14] != iLocal_170[1])
				{
					if (!unk_0x4915F4759304D5CF(uVar26[iVar14]))
					{
						unk_0xB0D7019224A3A443(uVar26[iVar14], 240, 1);
					}
				}
				iVar14++;
			}
			switch (Var0)
			{
				case 0:
					unk_0x135C61E339DABBAC(1);
					func_454(&(Var0.f_243), &ScriptParam_260);
					func_453(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xDC5D81351D6A4DDB(Var0.f_243))
					{
						vLocal_239 = { unk_0x3201284584C7CD83(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						vLocal_240 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						iLocal_84 = unk_0x74677C414DD7F53C(26379945, vLocal_239, vLocal_240, 65f, 0, 2);
						unk_0xF62A5A3CB8DB2402(iLocal_84, 30f);
					}
					func_452();
					settimera(0);
					Var0 = 1;
					break;
				
				case 1:
					if (timera() > 500 && !unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
					{
						unk_0xFDD15D670AD33E10(ScriptParam_260, 0.5f, 1, 0, 0, false);
						if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
						{
							unk_0x3A95A0A3221D4208(&uLocal_205);
							unk_0x2F89329397A277BC(&uLocal_205);
							unk_0xCB482EF95FAE4D73(0, 0, 0);
							unk_0x301F42EEE3C40328(uLocal_205);
							unk_0xE1072FA2FECBAD96(unk_0xA19140A5C42D8715(), uLocal_205);
						}
						vLocal_42 = { vLocal_42 };
						Var0 = 2;
					}
					break;
				
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_451(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_451(&(Var0.f_164[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_450(0);
					func_448(&Var4, iLocal_207, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xDC5D81351D6A4DDB(Var0.f_243))
					{
						vVar19 = { unk_0x61141C81AF57CBDC(Var0.f_243, Var4.f_18) };
					}
					func_445(&Var4, &Var5);
					unk_0x789152CB302E8726(0);
					Var0 = 3;
					break;
				
				case 3:
					if (func_442(&Var4, &Var5))
					{
						func_439(&(Var0.f_243), &Var2, &vVar3, 0);
						iLocal_249 = func_493(iLocal_170[0]);
						switch (iLocal_249)
						{
							case 0:
								sLocal_251 = func_438("MICHAEL");
								if (!unk_0x05EFB6A616B6FADE(Global_106031, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_251 = func_438("FRANKLIN");
								bLocal_187 = true;
								if (!unk_0x05EFB6A616B6FADE(Global_106031, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_251 = func_438("TREVOR");
								if (!unk_0x05EFB6A616B6FADE(Global_106031, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0x7112137033807390(func_491(), 0))
						{
							iLocal_250 = func_493(func_491());
							if (iLocal_250 == 145)
							{
								iLocal_250 = func_436(func_491());
							}
							switch (iLocal_250)
							{
								case 0:
									sLocal_252 = func_438("MICHAEL");
									break;
								
								case 1:
									sLocal_252 = func_438("FRANKLIN");
									break;
								
								case 2:
									sLocal_252 = func_438("TREVOR");
									break;
								
								case 19:
									sLocal_252 = func_438("LAMAR");
									unk_0x72A0FF8C49CFFC0D(func_491(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_252 = func_438("JIMMY");
									break;
								
								default:
									sLocal_252 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = unk_0x22C775856F4633CA(0, 200);
							if (iLocal_207 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_252 = func_438("RAYMOND");
									iLocal_253 = 954610991;
								}
								else if (iVar12 < 101)
								{
									sLocal_252 = func_438("JOHAN");
									iLocal_253 = 94453331;
								}
								else if (iVar12 < 151)
								{
									sLocal_252 = func_438("STAN");
									iLocal_253 = 1891555423;
								}
								else
								{
									sLocal_252 = func_438("VINCE");
									iLocal_253 = -1067630349;
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_252 = func_438("KRISTY");
								iLocal_253 = 885327384;
							}
							else if (iVar12 < 101)
							{
								sLocal_252 = func_438("MARLENE");
								iLocal_253 = -1791000994;
							}
							else if (iVar12 < 151)
							{
								sLocal_252 = func_438("LORIE");
								iLocal_253 = 1954368234;
							}
							else
							{
								sLocal_252 = func_438("SHELLEY");
								iLocal_253 = -863218904;
							}
						}
						iLocal_36 = unk_0xFCFC8CC5FF74580D(iLocal_37, vVar3, 1, true, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0x583578754C1716A1())
					{
						iVar27 = unk_0xFCFC8CC5FF74580D(joaat("prop_dart_1"), vVar3, 1, true, 0);
						func_433(Var0.f_243.f_4, Var2, &uVar26, &ScriptParam_260);
						func_432(&Var4, sLocal_251, sLocal_252);
						unk_0x9568B1B58F78FF36(iLocal_170[1]);
						iLocal_206 = unk_0x74677C414DD7F53C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
						{
							unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), -1871534317, 0, 0, 0);
						}
						func_431(&(Var0.f_257), 0, unk_0xA19140A5C42D8715(), sLocal_251, 0, 1);
						if (unk_0x7112137033807390(func_491(), 0))
						{
							if (iLocal_207 == 2)
							{
								func_431(&(Var0.f_257), 3, iLocal_170[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_431(&(Var0.f_257), 3, iLocal_170[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = -1;
						}
						else
						{
							func_431(&(Var0.f_257), 3, func_491(), sLocal_252, 0, 1);
							func_429(&iVar25);
							iVar13 = 6;
						}
						if (!unk_0x05EFB6A616B6FADE(Global_106031, 0))
						{
							iVar13 = -1;
						}
						else
						{
							iVar13 = 3;
						}
						func_428(&Var4, 0);
						Var0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x4915F4759304D5CF(iLocal_170[1]) && unk_0x2206F47E5C82D52C(iLocal_170[0])) && !unk_0x5D7DFE2058701942(iLocal_170[0], 1)) && unk_0x2206F47E5C82D52C(iLocal_170[1])) && !unk_0x5D7DFE2058701942(iLocal_170[1], 1))
					{
						bLocal_178 = func_426(&uLocal_194);
						if ((func_425() && unk_0xFD34717937104F1C() >= iLocal_196 + 1000) && iVar13 != 9)
						{
							if (!unk_0x71364F510A1CB69F() && !unk_0x607776744A243309())
							{
								unk_0x9662BE461F9FDF9E(500);
							}
						}
						if (unk_0x71364F510A1CB69F() && iVar13 != 9)
						{
							func_422(0);
							func_420();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case -1:
								if (!unk_0x4915F4759304D5CF(iLocal_170[1]))
								{
									iLocal_200 = unk_0x70788DC3D80C9DEB(unk_0x3201284584C7CD83(ScriptParam_260.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x552C823E1D2A019C(ScriptParam_260.f_4) - 3.783146f), 2);
									iLocal_206 = unk_0x57FC10C74CC15F22("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xF84EE501E63C86CF(iLocal_206, iLocal_200, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x930701157A4B9374(iLocal_206, true);
									unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
									unk_0x53FF9BDD8529ACD2(iLocal_170[0]);
									unk_0x53FF9BDD8529ACD2(iLocal_170[1]);
									unk_0x836A6A722DEA63F1(iLocal_170[0]);
									unk_0x836A6A722DEA63F1(iLocal_170[1]);
									unk_0xE5565DEAABF9D588(iLocal_170[1], iLocal_200, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xE5565DEAABF9D588(iLocal_170[0], iLocal_200, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x3F01127ECD227890(iLocal_170[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x3F01127ECD227890(iLocal_170[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x341C49A9159E80FB(iVar27, iLocal_200, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 8f, 0, 1148846080);
									func_419(&iVar25);
									iVar13++;
								}
								break;
							
							case 0:
								if (unk_0xFE5DE0C3200E00F2(iLocal_200))
								{
									if (!bVar9)
									{
										if (func_418(&iVar25) > 1.5f)
										{
											func_417(iLocal_170[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_416(&iVar25);
										}
									}
									else if (!unk_0xF59ACE94F067B46D(iLocal_170[0]))
									{
										if (!bVar10)
										{
											if (!func_415(&iVar25))
											{
												func_429(&iVar25);
											}
											else if (func_418(&iVar25) > 0.5f)
											{
												func_414(iLocal_170[1]);
												func_416(&iVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_419(&iVar25);
											func_413("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0x33CECDD9E141E18E(iLocal_200) > 0.25f)
											{
												func_419(&iVar25);
												func_413("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0x33CECDD9E141E18E(iLocal_200) > 0.55f)
											{
												func_413("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0x33CECDD9E141E18E(iLocal_200) > 0.85f)
											{
												func_413("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0x33CECDD9E141E18E(iLocal_200) > 0.95f)
									{
										iLocal_190 = 1;
										iVar13++;
									}
									else if ((unk_0xFD34717937104F1C() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x33CECDD9E141E18E(iLocal_200) > 0.99f)
								{
									if (!unk_0x4915F4759304D5CF(iLocal_170[1]))
									{
										func_410(Var0.f_243.f_1, Var0.f_243.f_4, func_412(2), func_411(0), 0, 1);
										iLocal_31 = 0;
										unk_0x135C61E339DABBAC(1);
										unk_0x77F0486CE0E598D5(iLocal_206, 0);
										unk_0x9568B1B58F78FF36(iLocal_170[0]);
										unk_0x9568B1B58F78FF36(iLocal_170[1]);
										unk_0x6AE6C20282990E48(iVar27, -1000f, 0);
										unk_0xC0AC848E56940C34(&iVar27);
										unk_0x5AD7D03C214BDA88(func_409(0));
										func_416(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x4915F4759304D5CF(iLocal_170[1]))
								{
									iLocal_200 = unk_0x70788DC3D80C9DEB(unk_0x3201284584C7CD83(ScriptParam_260.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x552C823E1D2A019C(ScriptParam_260.f_4) - 3.783146f), 2);
									iLocal_206 = unk_0x57FC10C74CC15F22("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xF84EE501E63C86CF(iLocal_206, iLocal_200, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x930701157A4B9374(iLocal_206, true);
									unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
									unk_0x53FF9BDD8529ACD2(iLocal_170[0]);
									unk_0x53FF9BDD8529ACD2(iLocal_170[1]);
									unk_0x836A6A722DEA63F1(iLocal_170[0]);
									unk_0x836A6A722DEA63F1(iLocal_170[1]);
									unk_0xE5565DEAABF9D588(iLocal_170[1], iLocal_200, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xE5565DEAABF9D588(iLocal_170[0], iLocal_200, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x3F01127ECD227890(iLocal_170[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x3F01127ECD227890(iLocal_170[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x341C49A9159E80FB(iVar27, iLocal_200, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 8f, 0, 1148846080);
									func_419(&iVar25);
									iVar13++;
								}
								break;
							
							case 4:
								if (unk_0xFE5DE0C3200E00F2(iLocal_200))
								{
									if (!bVar9)
									{
										if (func_418(&iVar25) > 0.5f)
										{
											func_417(iLocal_170[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_416(&iVar25);
										}
									}
									else if (!unk_0xF59ACE94F067B46D(iLocal_170[0]))
									{
										if (!bVar10)
										{
											if (!func_415(&iVar25))
											{
												func_429(&iVar25);
											}
											else if (func_418(&iVar25) > 0.25f)
											{
												func_414(iLocal_170[1]);
												func_416(&iVar25);
												bVar10 = true;
											}
										}
									}
									if (unk_0x33CECDD9E141E18E(iLocal_200) > 0.95f)
									{
										iLocal_190 = 1;
										iVar13++;
									}
									else if ((unk_0xFD34717937104F1C() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x33CECDD9E141E18E(iLocal_200) > 0.99f)
								{
									if (!unk_0x4915F4759304D5CF(iLocal_170[1]))
									{
										func_408();
										unk_0x77F0486CE0E598D5(iLocal_206, 0);
										unk_0x9568B1B58F78FF36(iLocal_170[0]);
										unk_0x9568B1B58F78FF36(iLocal_170[1]);
										unk_0x6AE6C20282990E48(iVar27, -1000f, 0);
										unk_0xC0AC848E56940C34(&iVar27);
										unk_0x5AD7D03C214BDA88(func_409(0));
										func_416(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0x71364F510A1CB69F())
								{
									iLocal_190 = 1;
									iLocal_31 = 0;
									unk_0x135C61E339DABBAC(1);
									if (!unk_0x4915F4759304D5CF(iLocal_170[1]))
									{
										unk_0x4299736016AECE26(iLocal_170[0], Var2, 1, 0, 0, 1);
										unk_0x92DDCF53AA47A63D(iLocal_170[0], Var0.f_243.f_4);
										unk_0x4299736016AECE26(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
										unk_0x92DDCF53AA47A63D(iLocal_170[1], Var0.f_243.f_4);
										unk_0x9568B1B58F78FF36(iLocal_170[0]);
										unk_0x9568B1B58F78FF36(iLocal_170[1]);
									}
									unk_0x77F0486CE0E598D5(iLocal_206, 0);
									unk_0x6AE6C20282990E48(iVar27, -1000f, 0);
									unk_0xC0AC848E56940C34(&iVar27);
									if (!unk_0x05EFB6A616B6FADE(Global_106031, 0))
									{
										func_410(Var0.f_243.f_1, Var0.f_243.f_4, func_412(2), func_411(0), 0, 1);
									}
									else
									{
										func_408();
									}
									unk_0x5AD7D03C214BDA88(func_409(0));
									func_416(&iVar25);
									unk_0x70C1F5AA59767FE6(500);
									Var0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_196 = unk_0xFD34717937104F1C();
							if (!unk_0x4915F4759304D5CF(iLocal_170[1]))
							{
								unk_0x4299736016AECE26(iLocal_170[0], Var2, 1, 0, 0, 1);
								unk_0x92DDCF53AA47A63D(iLocal_170[0], Var0.f_243.f_4);
								unk_0x4299736016AECE26(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
								unk_0x92DDCF53AA47A63D(iLocal_170[1], Var0.f_243.f_4);
							}
							unk_0x8969D02DEDC106D2(func_409(1));
							iVar13 = 0;
							Var0 = 7;
							break;
						
						case 1:
							if ((unk_0xFD34717937104F1C() - iLocal_196) > 1500)
							{
								func_406(&(Var5.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						
						case 2:
							if (!func_405(&(Var5.f_57), 1, 0))
							{
								unk_0x8969D02DEDC106D2(func_409(1));
								iVar13 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0x05EFB6A616B6FADE(Global_106031, 0))
					{
						if (func_402(&iVar1, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &iVar24))
						{
							unk_0x2BCFB39E86340DAA(&Global_106031, 0);
							Var0 = 8;
						}
					}
					else
					{
						unk_0x930701157A4B9374(iLocal_75, true);
						Var0 = 8;
					}
					break;
				
				case 8:
					if (unk_0x71364F510A1CB69F())
					{
						unk_0x70C1F5AA59767FE6(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!unk_0xDC5D81351D6A4DDB(func_491()))
							{
								if (!unk_0x05EFB6A616B6FADE(Global_106031, 10))
								{
									unk_0x2BCFB39E86340DAA(&Global_106031, 10);
								}
								else
								{
									unk_0xFA57C719261AA55D(&Global_106031, 10);
								}
								func_400(&Var5);
								iVar13++;
							}
							else
							{
								func_400(&Var5);
								iVar13++;
							}
							break;
						
						case 1:
							if (unk_0x47C01C0E6F4C1D06())
							{
								if (fLocal_89 != unk_0xA0B98358F89CB4ED(0))
								{
									fLocal_89 = unk_0xA0B98358F89CB4ED(0);
									unk_0xF62A5A3CB8DB2402(iLocal_75, func_399(fLocal_89));
									unk_0xF62A5A3CB8DB2402(iLocal_76, func_399(fLocal_89));
								}
							}
							if (func_339(&Var5, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0x5AD7D03C214BDA88(func_409(1));
								if (Var0.f_452 > 0)
								{
									iVar13 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_338(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									func_335(1, -1);
									Var0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_328(&Var0, &Var4, &Var5))
					{
						Var0.f_249.f_4 = 1;
						if (Global_106070.f_18942.f_5 >= 5 && Global_106070.f_18942.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_106070.f_18942.f_5 >= 3 && Global_106070.f_18942.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_327(Global_106070.f_18942.f_5, &iLocal_199))
						{
							func_326(&(Var5.f_666), 24, 1);
						}
						fLocal_45 = func_325(Global_106070.f_18942.f_5);
						fLocal_46 = func_324(Global_106070.f_18942.f_5);
						fLocal_43 = fLocal_45;
						fLocal_44 = fLocal_46;
						iLocal_106[4]++;
						if (!unk_0x4915F4759304D5CF(iLocal_170[1]))
						{
							unk_0x836A6A722DEA63F1(iLocal_170[1]);
							unk_0x4299736016AECE26(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
							unk_0x92DDCF53AA47A63D(iLocal_170[1], Var0.f_243.f_4);
						}
						if (func_415(&iVar23))
						{
							func_416(&iVar23);
						}
						unk_0x8969D02DEDC106D2(func_409(2));
						func_323(iLocal_170[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0x47C01C0E6F4C1D06())
					{
						if (fLocal_89 != unk_0xA0B98358F89CB4ED(0))
						{
							fLocal_89 = unk_0xA0B98358F89CB4ED(0);
							unk_0xF62A5A3CB8DB2402(iLocal_75, func_399(fLocal_89));
							unk_0xF62A5A3CB8DB2402(iLocal_76, func_399(fLocal_89));
						}
					}
					if (!bLocal_188)
					{
						unk_0x6D68030C791111E0("mini@dartsoutro");
						bLocal_188 = true;
					}
					if (!iLocal_189)
					{
						if (bLocal_188)
						{
							if (!unk_0x39C2D9AB77873F84("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_189 = 1;
							}
						}
					}
					func_241(&Var0, &vVar3, &Var4, &Var5, &iVar23);
					break;
				
				case 11:
					switch (iVar13)
					{
						case 0:
							if (func_418(&(Var0.f_254)) > 0.5f)
							{
								unk_0x135C61E339DABBAC(1);
								unk_0x4F93066CECE72793();
								func_240(unk_0xA19140A5C42D8715());
								func_338(&Var4, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar31 = 0;
								while (iVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										func_239(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_238(&Var4, iVar31);
									iVar31++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_236(&(Var5.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_236(&(Var5.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_236(&(Var5.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_236(&(Var5.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = unk_0xA0B98358F89CB4ED(1);
								if (fVar34 > 2f)
								{
									vVar20 = { 1992.294f, 3047.577f, 46.21517f };
									vVar21 = { 0f, 0f, 138.74f };
								}
								else
								{
									vVar20 = { 1992.336f, 3047.924f, 46.21517f };
									vVar21 = { 0f, 0f, 136.74f };
								}
								iVar33 = func_235();
								iLocal_200 = unk_0x70788DC3D80C9DEB(vVar20, vVar21, 2);
								iLocal_206 = unk_0x57FC10C74CC15F22("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xF84EE501E63C86CF(iLocal_206, iLocal_200, sLocal_259[iVar33], "mini@dartsoutro");
								unk_0x930701157A4B9374(iLocal_206, true);
								unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
								if (!unk_0x4915F4759304D5CF(iLocal_170[0]) && !unk_0x4915F4759304D5CF(iLocal_170[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										unk_0xE11F00B4AC919F45(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_234(&iLocal_170, iVar35);
										unk_0xE5565DEAABF9D588(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_257[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xE5565DEAABF9D588(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_258[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), sLocal_255, sLocal_256[unk_0x22C775856F4633CA(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0xE11F00B4AC919F45(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_233(&iLocal_170);
										unk_0xE5565DEAABF9D588(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_257[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xE5565DEAABF9D588(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_258[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x3F01127ECD227890(iLocal_170[1], sLocal_254, sLocal_256[unk_0x22C775856F4633CA(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar13++;
							}
							break;
						
						case 1:
							if (!func_231(&(Var5.f_62), 1))
							{
								iVar13++;
							}
							break;
						
						case 2:
							func_416(&(Var0.f_254));
							iLocal_184 = 0;
							unk_0x5AD7D03C214BDA88(func_409(3));
							func_408();
							if (unk_0x37B568B777BC65F9(iLocal_206))
							{
								unk_0x77F0486CE0E598D5(iLocal_206, 0);
							}
							iVar13 = 0;
							Var0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_418(&(Var0.f_254)) > 0.92f)
					{
						func_41(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				
				case 13:
					uVar11 = func_10(&Var6, 0, 1065353216, 0, 0, 0);
					if (!unk_0x7112137033807390(func_491(), 0))
					{
						unk_0x9568B1B58F78FF36(iLocal_170[1]);
						Var0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							unk_0x9568B1B58F78FF36(iLocal_170[0]);
							if (!bLocal_186)
							{
								unk_0x8E88E73F74A9FF79(false, bLocal_186, 3000, 1, 0, 0);
							}
							else
							{
								unk_0xCE2F428A0EEBBE18(0, 0, 3, 0);
							}
							unk_0xD87B76260C547F31(0f);
							unk_0xAA32DD4848CF93E0(0f, 1065353216);
							unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
							unk_0x4F93066CECE72793();
							unk_0x22DD1D053CFF9707(iLocal_170[0], iLocal_170[1], 5000, 2049, 3);
							func_429(&iVar25);
							iVar13++;
							break;
						
						case 1:
							if (func_7(&iVar25) > 0.1f)
							{
								if (!bVar7)
								{
								}
								func_429(&iVar25);
								iVar13++;
							}
							break;
						
						case 2:
							if (func_7(&iVar25) > 0.3f)
							{
								if (!unk_0x4915F4759304D5CF(iLocal_170[1]))
								{
									if (!bVar7)
									{
										func_4(iLocal_170[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_429(&iVar25);
								iVar13++;
							}
							break;
						
						case 3:
							if (uVar11 || bVar7)
							{
								Var0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var5);
					if (unk_0x4E6A396CA4DB68F6(2, 201))
					{
						func_1(iLocal_170[1]);
						iLocal_203 = 2;
						bVar7 = true;
						if (unk_0x2F8EAF18929E1E59(func_409(2)))
						{
							unk_0x5AD7D03C214BDA88(func_409(2));
						}
						Var0 = 13;
					}
					if (unk_0x4E6A396CA4DB68F6(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_55 = 0;
						}
						func_326(&(Var5.f_666), 8, 0);
						Var0 = 10;
					}
					break;
				
				case 15:
					func_462(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0xD1ABB20CFF127CCC())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_326(&(uParam0->f_666), 8, 1);
			func_326(&(uParam0->f_666), 15, 0);
			func_326(&(uParam0->f_666), 16, 0);
			func_326(&(uParam0->f_666), 17, 0);
		}
		unk_0xDF4B3D0EF01223F1();
		_set_warning_message_2("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_326(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0x7112137033807390(func_491(), 0) || iParam2)
	{
		func_417(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x4915F4759304D5CF(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_57, iParam3);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x85AF6DC3641E2442(iParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)
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

float func_7(int iParam0)
{
	if (func_415(iParam0))
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

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
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
	func_38(0);
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
		switch (func_493(unk_0xEE978C39384D834F(unk_0xA6580F898F4E801C())))
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
		uParam0->f_560 = (uParam0->f_560 + func_37(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_37(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_37((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_37(30f) - func_37(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_36(1);
		uParam0->f_572 = (uParam0->f_572 + round((0f + (1000f * timestep()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * timestep())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
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
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
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
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x1BFD4084A40BF7E1(2))
			{
				if (unk_0x0FA486DE15EB3004(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
				func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
				uParam0->f_559 = func_14((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * timestep())), 0f, 1f);
				uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_14((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * timestep())), 0f, 1f);
			uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
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
				func_36(0);
			}
			return !bVar0;
		}
	}
	func_36(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
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
	func_13(unk_0x7391BCD755BD8577(2, 215, true));
	func_12("ES_HELP");
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
		func_13(unk_0x7391BCD755BD8577(2, 216, true));
		func_12("ES_XPAND");
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

void func_12(char* sParam0)
{
	unk_0x390B339C943A8A54(sParam0);
	unk_0xD481829E3E36543B();
}

void func_13(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)
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

void func_15(var uParam0, float fParam1, bool bParam2)
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
	fVar1 = (func_35() * 0.25f);
	if (unk_0x0FA486DE15EB3004(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x31A9E530D137684F(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_34(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
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
		func_33();
		unk_0xE9F9BA9108F437C7(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_37((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
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
	fVar1 = (0.3f * func_35());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_32(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0xA0B98358F89CB4ED(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_32(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_35()) / 2.5f);
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
						func_29((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
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
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
		func_33();
		unk_0xFF35427AF9343886(0.5f, (fVar1 - (func_37((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_37((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_37(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_37(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_37((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_37(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
					func_33();
					unk_0xFF35427AF9343886(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_37((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_37((25f * 0.2f)));
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
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_37(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
			func_33();
			unk_0xFF35427AF9343886(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			unk_0xA6D7328EAA8CB61E(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x346268472B5F4E43() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_35()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_35()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_35()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_35()) / 2.5f));
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
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			unk_0x8EF82530113D7244(fVar20, fVar21);
			unk_0x38DFCC31D902E792(2);
			unk_0xFD5A6B90A46ACED0(1f, 0.4f);
			unk_0x2D2243C8547A3F8B(0);
			func_33();
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
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x7C25BC565D364568("FO_TWO_NUM");
					unk_0xCDA87E1DA52C8C9D(uParam0->f_554);
					unk_0xCDA87E1DA52C8C9D(uParam0->f_555);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x7C25BC565D364568("MTPHPER_XPNO");
					unk_0xCDA87E1DA52C8C9D(uParam0->f_554);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x7C25BC565D364568("ESDOLLA");
					unk_0x976BD422410BF38A(uParam0->f_554, 1);
					unk_0xB435CE12BEF0DBF7(fVar20, (fVar1 + func_37((2f * 2f))), 0);
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
				fVar32 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_37(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0xE56EDA9982C42132(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_37(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x2D2243C8547A3F8B(iParam3);
	unk_0x6F2FE3F2B8CE9390(iParam5);
	func_33();
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

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_24(iParam0), 64);
	StringCopy(&cVar1, func_21(iParam0, bParam1), 64);
	if (unk_0xFEB6EEC0545AF7AA(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x359669D87D0E343F(&iVar2, &iVar3);
			fVar5 = unk_0xA0B98358F89CB4ED(0);
			if (func_20())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_20())
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
		vVar7.x = (vVar7.x * (func_19(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_19(iParam0) / fVar4));
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

float func_19(int iParam0)
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

int func_20()
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

var func_21(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6863[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_23(unk_0xD4E735F4B6A956AC()) };
			if (unk_0x686DAB3ED67144AB(&Var2, &uVar1))
			{
				return func_22(&uVar1);
			}
		}
		else
		{
			return func_22(&(Global_17367.f_6863[iParam0 /*16*/]));
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

var func_22(var uParam0)
{
	return uParam0;
}

struct<13> func_23(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x429D45A6C6520026(&(Global_17367.f_6014[iParam0 /*16*/])))
	{
		if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6014[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_23(unk_0xD4E735F4B6A956AC()) };
			unk_0x686DAB3ED67144AB(&Var1, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_17367.f_6014[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_25(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
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
	unk_0xFD5A6B90A46ACED0(1f, func_27(14f));
	unk_0x2D2243C8547A3F8B(0);
	unk_0x6F2FE3F2B8CE9390(0);
	func_33();
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
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE56EDA9982C42132("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE56EDA9982C42132("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xE56EDA9982C42132("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
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
	unk_0xFD5A6B90A46ACED0(1f, func_27(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x8EF82530113D7244(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x8EF82530113D7244(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xA6D7328EAA8CB61E(iVar0, iVar1, iVar2, iParam5);
	func_26(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_26(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
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
	func_33();
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
			unk_0xFD5A6B90A46ACED0(1f, func_27(18f));
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
			unk_0xFD5A6B90A46ACED0(1f, func_27(14f));
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
			unk_0xFD5A6B90A46ACED0(1f, func_27(18f));
		
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
			unk_0xFD5A6B90A46ACED0(1f, func_27(14f));
		}
		else
		{
			unk_0xB435CE12BEF0DBF7(fParam2, fParam3, 0);
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_28(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_30(7, iVar0);
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

void func_30(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_31(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

float func_32(char* sParam0)
{
	unk_0xC42A779360572EA7(sParam0);
	return (unk_0x4E0DD18900B7ACAE(1) / 2f);
}

void func_33()
{
	unk_0x0A74F1E9CF777638(1);
	if (unk_0x607776744A243309() || unk_0x71364F510A1CB69F())
	{
		unk_0x0A74F1E9CF777638(7);
	}
	unk_0xF997724AC8A71261(0);
}

void func_34(char* sParam0)
{
	unk_0x0BAAED7962F122D5(sParam0);
}

float func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x47C01C0E6F4C1D06())
	{
	}
	return fVar0;
}

void func_36(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

float func_37(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_38(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_39(0))
		{
			func_422(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

int func_39(int iParam0)
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

bool func_40()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x0B9F814BC8D14042(2))
	{
		unk_0xD481A812073CCF02(2, 199, 1);
	}
	if (unk_0x65A878D380D59179())
	{
		if (!iLocal_191)
		{
			if (func_208(uParam1, 0, &iLocal_192))
			{
				func_326(&(uParam1->f_666), 9, 0);
				iLocal_191 = 1;
			}
		}
	}
	if (iLocal_173)
	{
		if (unk_0x0B9F814BC8D14042(2))
		{
			unk_0x238F4C0DD5EC6FE7();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0x65A878D380D59179())
			{
				uParam1->f_646 = func_199(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_326(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_121(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_117(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0xDF0ADAD7E584090D(2, 202))
				{
					uParam1->f_680 = 0;
					func_326(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0xDF0ADAD7E584090D(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0xDF0ADAD7E584090D(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_116(&(uParam1->f_72)))
			{
				if (!bLocal_193)
				{
					bLocal_193 = true;
					func_115(&(uParam1->f_509), 0, 0, 1, 1);
					func_114(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_114(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_114(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_114(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_111(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_104(uParam1, 0, 0, iLocal_191);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0xFE5DE0C3200E00F2(iLocal_200) && unk_0x33CECDD9E141E18E(iLocal_200) >= 0.995f) || !unk_0xFE5DE0C3200E00F2(iLocal_200))
		{
			bLocal_186 = true;
			if (unk_0x37B568B777BC65F9(iLocal_206))
			{
				unk_0x77F0486CE0E598D5(iLocal_206, 0);
				if (!unk_0x4915F4759304D5CF(iLocal_170[0]) && !unk_0x4915F4759304D5CF(iLocal_170[1]))
				{
					unk_0x836A6A722DEA63F1(iLocal_170[0]);
					unk_0x836A6A722DEA63F1(iLocal_170[1]);
					unk_0x3A3E4B7C6FBE305D(iLocal_170[0], 0, 0);
					unk_0x3A3E4B7C6FBE305D(iLocal_170[1], 0, 0);
				}
			}
			func_103();
		}
		if (func_418(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_184)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_234(&iLocal_170, iVar2);
				}
				else
				{
					func_233(&iLocal_170);
				}
				iLocal_184 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x135C61E339DABBAC(1);
			unk_0x5AD7D03C214BDA88(func_409(3));
			if (!unk_0x4915F4759304D5CF(iLocal_170[0]) && !unk_0x4915F4759304D5CF(iLocal_170[1]))
			{
				unk_0x53FF9BDD8529ACD2(iLocal_170[0]);
				unk_0x53FF9BDD8529ACD2(iLocal_170[1]);
			}
			func_102(uParam3);
			if (bParam4)
			{
				func_338(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_416(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_184 = 0;
			iLocal_182 = 0;
			bLocal_186 = false;
			func_99();
			iLocal_191 = 0;
			iLocal_166 = 0;
			uParam1->f_680 = 0;
			iLocal_192 = 0;
			bLocal_193 = false;
			func_91(&(uParam1->f_72), 0);
			func_452();
		}
		else if (iVar0 == 2)
		{
			func_90(uParam3);
			unk_0x5AD7D03C214BDA88(func_409(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_53(func_86(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0x4F93066CECE72793();
			*uParam0 = 13;
		}
		else if (((unk_0xDF0ADAD7E584090D(0, 234) || unk_0xDF0ADAD7E584090D(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_172)
			{
				vVar3 = { unk_0xE2BBD32891C18569(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_52(vVar3, 0, iLocal_172);
				iLocal_172 = 0;
			}
			else if (unk_0xDF0ADAD7E584090D(2, 190))
			{
				iLocal_195++;
				if (iLocal_195 >= uParam0->f_436)
				{
					iLocal_195 = 0;
				}
				vVar3 = { unk_0xE2BBD32891C18569(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_50(vVar3);
			}
			else if (unk_0xDF0ADAD7E584090D(2, 189))
			{
				iLocal_195 = (iLocal_195 - 1);
				if (iLocal_195 < 0)
				{
					iLocal_195 = (uParam0->f_436 - 1);
				}
				vVar3 = { unk_0xE2BBD32891C18569(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_50(vVar3);
			}
		}
		else if (((unk_0xDF0ADAD7E584090D(0, 211) || unk_0x53E955948D35BDB5(0, 211)) && bVar1) && (iLocal_191 || !unk_0x65A878D380D59179()))
		{
			uParam1->f_680 = 1;
			func_115(&(uParam1->f_509), 0, 0, 1, 1);
			func_114(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_114(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_114(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_193)
			{
				func_114(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_111(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x135C61E339DABBAC(1);
		unk_0x4F93066CECE72793();
		func_46(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_106[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar4 = unk_0xA0B98358F89CB4ED(1);
		if (fVar4 > 2f)
		{
			vVar5 = { 1992.294f, 3047.577f, 46.21517f };
			vVar6 = { 0f, 0f, 138.74f };
		}
		else
		{
			vVar5 = { 1992.336f, 3047.924f, 46.21517f };
			vVar6 = { 0f, 0f, 136.74f };
		}
		iVar7 = func_235();
		iLocal_200 = unk_0x70788DC3D80C9DEB(vVar5, vVar6, 2);
		iLocal_206 = unk_0x57FC10C74CC15F22("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0xF84EE501E63C86CF(iLocal_206, iLocal_200, sLocal_259[iVar7], "mini@dartsoutro");
		unk_0x930701157A4B9374(iLocal_206, true);
		unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
		if (!unk_0x4915F4759304D5CF(iLocal_170[0]) && !unk_0x4915F4759304D5CF(iLocal_170[1]))
		{
			if (uParam0->f_454)
			{
				unk_0xE5565DEAABF9D588(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_257[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xE5565DEAABF9D588(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_258[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), sLocal_255, sLocal_256[unk_0x22C775856F4633CA(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0xE5565DEAABF9D588(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_257[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xE5565DEAABF9D588(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_258[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x3F01127ECD227890(iLocal_170[1], sLocal_254, sLocal_256[unk_0x22C775856F4633CA(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_186 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0xFD34717937104F1C();
		iVar8 = 0;
		while (iVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				func_239(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_238(uParam2, iVar8);
			iVar8++;
		}
	}
	else if ((unk_0xFD34717937104F1C() - uParam1->f_671) > 400 && func_42(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0xE11F00B4AC919F45(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_173 = 1;
	}
}

int func_42(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_45(uParam0);
	func_44(uParam0);
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
			func_43(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_71466 = 1;
	return 1;
}

void func_43(var uParam0)
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
	func_13(unk_0x7391BCD755BD8577(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(1);
	func_13(unk_0x7391BCD755BD8577(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x380580A1A1667F69(0);
	func_13(unk_0x7391BCD755BD8577(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271C1332F482646C();
}

void func_44(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x38DFCC31D902E792(0);
	unk_0xFD5A6B90A46ACED0(1f, func_27(16f));
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

void func_45(var uParam0)
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

void func_46(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		func_49(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_49(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_48(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_48(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_48(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_48(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_47(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_36(1);
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_48(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
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
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_49(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_50(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_51(vParam0) };
	if (bLocal_88)
	{
		unk_0x057123F3A835FE47(iLocal_86, vVar0);
		unk_0xD21CD2A6F93F44A6(iLocal_86, iLocal_85, 500, 1, 1);
		bLocal_88 = false;
	}
	else
	{
		unk_0x057123F3A835FE47(iLocal_85, vVar0);
		unk_0xD21CD2A6F93F44A6(iLocal_85, iLocal_86, 500, 1, 1);
		bLocal_88 = true;
	}
}

Vector3 func_51(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 0.3495f, -0.0276f, -0.0114f };
	vVar0 = { vParam0 - vVar1 };
	return vVar0;
}

void func_52(vector3 vParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	
	vVar0 = { func_51(vParam0) };
	if (bParam1)
	{
		unk_0x057123F3A835FE47(iLocal_85, vVar0);
		unk_0xD21CD2A6F93F44A6(iLocal_85, iLocal_84, 1500, 1, 1);
		unk_0x930701157A4B9374(iLocal_84, false);
		unk_0x057123F3A835FE47(iLocal_86, vVar0);
		bLocal_88 = true;
	}
	else if (bParam2)
	{
		unk_0x057123F3A835FE47(iLocal_85, vVar0);
		unk_0xD21CD2A6F93F44A6(iLocal_85, iLocal_77, 2000, 1, 1);
		bLocal_88 = true;
	}
	else
	{
		if (bLocal_88)
		{
			unk_0xD21CD2A6F93F44A6(iLocal_84, iLocal_85, 1500, 1, 1);
		}
		else
		{
			unk_0xD21CD2A6F93F44A6(iLocal_84, iLocal_86, 1500, 1, 1);
		}
		unk_0x930701157A4B9374(iLocal_85, false);
	}
}

void func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_54(Global_106070.f_28022[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_85();
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
					func_84(99, 1);
					func_83(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_67(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_63(5))
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
							func_83(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_63(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_83(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_83(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_83(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_83(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_83(joaat("sp2_money_spent_property"), iParam3);
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
									func_83(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_63(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_83(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_83(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_83(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_62(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_84(95, iParam3);
					break;
				
				case 1:
					func_84(97, iParam3);
					break;
				
				case 2:
					func_84(96, iParam3);
					break;
			}
			func_84(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_57(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_57(iVar1);
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
					func_83(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_83(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_83(joaat("sp2_total_cash_earned"), iParam3);
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
	func_56(iParam0);
	if (Global_36117 == 15)
	{
		func_55(0);
	}
	return 1;
}

void func_55(bool bParam0)
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

void func_56(int iParam0)
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

void func_57(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_60(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_60(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_60(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_60(137, 0, -1, 1);
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
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_59() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_59() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_58(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_58(int iParam0)
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

int func_59()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_60(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_61();
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

int func_61()
{
	return Global_1312736;
}

void func_62(int iParam0)
{
	func_84(93, iParam0);
	func_84(29, iParam0);
	func_84(30, iParam0);
}

bool func_63(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_64(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_64(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_64(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_64(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_59() /*12745*/].f_8178.f_10, iParam0);
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_61();
	}
	iVar1 = func_66(iParam0, iParam1);
	uVar2 = func_65(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_65(int iParam0)
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

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_61();
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

int func_67(bool bParam0)
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
		func_82(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_68(27, 1);
	return 1;
}

int func_68(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_69(iParam0, iParam1);
}

int func_69(int iParam0, int iParam1)
{
	if (func_81(14) && !func_80(iParam0))
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
	if (func_79(&Global_4268566))
	{
		if (func_77(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_70(&Global_4268566, iParam0))
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

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_81(14) && !func_80(iParam1))
	{
		return 0;
	}
	if (func_77(uParam0, iParam1))
	{
		return 0;
	}
	if (func_76(uParam0) < 0f)
	{
		func_75(uParam0, 0);
	}
	func_73(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_71(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_71(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_81(14) && !func_80(iParam1))
	{
		return 0;
	}
	if (func_77(uParam0, iParam1))
	{
		return 0;
	}
	if (func_76(uParam0) < 0f)
	{
		func_75(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_72(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_72(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_73(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_74(uParam0, iVar0);
		iVar0++;
	}
	func_75(uParam0, (Global_4268565 - 0.5f));
}

void func_74(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_75(var uParam0, float fParam1)
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

float func_76(var uParam0)
{
	return uParam0->f_80;
}

bool func_77(var uParam0, int iParam1)
{
	return func_78(uParam0, iParam1) != -1;
}

int func_78(var uParam0, int iParam1)
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

bool func_79(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_80(int iParam0)
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

bool func_81(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_82(int iParam0, int iParam1)
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

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_84(int iParam0, int iParam1)
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

void func_85()
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

int func_86()
{
	func_87();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_87()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_89(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_493(unk_0xA19140A5C42D8715());
			if (func_88(iVar0) && (!func_81(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_88(Global_106070.f_2355.f_539.f_4301))
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

bool func_88(int iParam0)
{
	return iParam0 < 3;
}

int func_89(int iParam0)
{
	if (func_88(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_90(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_91(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_97(uParam0);
		func_96(uParam0);
		func_95(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_93();
	}
	if (unk_0x2F8EAF18929E1E59("LEADERBOARD_SCENE"))
	{
		unk_0x5AD7D03C214BDA88("LEADERBOARD_SCENE");
	}
	if (unk_0x18F86E07E41D913F())
	{
		func_92(&(Global_1840924.f_49));
	}
	Global_2524719.f_3954 = 0;
}

void func_92(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_93()
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
	func_94(&(Global_1835392.f_2780));
	func_92(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_92(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_92(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_94(var uParam0)
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

void func_95(var uParam0)
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
	func_92(&(Global_1835392.f_2830));
}

void func_96(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_92(&(uParam0->f_246.f_3));
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

void func_97(var uParam0)
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

void func_98(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_92(&(Global_1835008.f_1));
	unk_0xCC3146CA1B3ED1CD(*uParam2, uParam2->f_1, -1);
}

void func_99()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_101(&(Global_1835013.f_73));
	func_101(&(Global_1835013.f_142));
	func_101(&(Global_1835013.f_211));
	func_101(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_100(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_100(var uParam0)
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

void func_101(var uParam0)
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

void func_102(var uParam0)
{
	func_45(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_103()
{
	unk_0x930701157A4B9374(iLocal_81, true);
}

int func_104(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_36(1);
			func_115(&(uParam0->f_509), 0, 0, 1, 1);
			func_114(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_114(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_114(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0x65A878D380D59179())
			{
				func_114(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_111(&(uParam0->f_509), 1);
			func_326(&(uParam0->f_666), 8, 0);
			func_326(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_107(func_110(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_109(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
					func_107(func_110(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_109(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					func_107(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				func_405(&(uParam0->f_57), 0, 0);
			}
			func_117(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0xD1ABB20CFF127CCC())
		{
			if ((unk_0xFD34717937104F1C() - uParam0->f_671) > 900)
			{
				if (unk_0xD73B1037F6BD4B90(2, 216))
				{
					unk_0xE11F00B4AC919F45(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_326(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0xDF0ADAD7E584090D(2, 215))
				{
					unk_0xE11F00B4AC919F45(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_106();
					func_105();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x4E6A396CA4DB68F6(2, 201))
		{
			return 2;
		}
		else if (unk_0x4E6A396CA4DB68F6(2, 202))
		{
			func_326(&(uParam0->f_666), 9, 0);
			func_326(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_105()
{
	if (Global_2437022.f_2704[0 /*80*/].f_2 != 0)
	{
		Global_2437022.f_2704[0 /*80*/].f_2 = 5;
	}
}

void func_106()
{
	Global_25603 = 1;
}

void func_107(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	
	if (func_108(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_30(3, iVar0);
		Global_1369750.f_2634[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_2634.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_2634.f_183[iVar0] = iParam3;
		Global_1369750.f_2634.f_172[iVar0] = iParam2;
		Global_1369750.f_2634.f_205[iVar0] = iParam4;
		Global_1369750.f_2634.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1369750.f_2634.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1369750.f_2634.f_420[iVar0] = iParam7;
		Global_1369750.f_2634.f_453[iVar0] = iParam8;
		Global_1369750.f_2634.f_431[iVar0] = iParam9;
		Global_1369750.f_2634.f_442[iVar0] = iParam10;
		Global_1369750.f_2634.f_464[iVar0] = iParam11;
	}
}

int func_108(char* sParam0)
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

char* func_109(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_110(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_111(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_113(&(uParam0->f_1), 1024);
	}
	else
	{
		func_112(&(uParam0->f_1), 1024);
	}
}

void func_112(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_114(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_115(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x0116B05B49B8129C("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_113(&(uParam0->f_1), 32);
	}
	if (unk_0x0FA486DE15EB3004(*uParam0))
	{
		func_113(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xBC66504DB57D15CD(*uParam0, 1);
		}
	}
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (bParam3)
		{
			func_113(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_113(&(uParam0->f_1), 8192);
	}
}

int func_116(var uParam0)
{
	if ((unk_0x05EFB6A616B6FADE(uParam0->f_42, 1) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_117(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (!func_120(uParam0))
	{
		return;
	}
	unk_0xE75DF14D630B12F9();
	unk_0x0A74F1E9CF777638(iParam2);
	if (!func_119(uParam0->f_1, 256) || (func_119(uParam0->f_1, 8192) && unk_0x1BFD4084A40BF7E1(2)))
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
			unk_0x233A5B4A35140C6B(func_119(uParam0->f_1, 4096));
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
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x429D45A6C6520026(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x47C01C0E6F4C1D06())
					{
						if (func_119(uParam0->f_1, 4096))
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
		fVar8 = func_118(bParam4, func_118(func_119(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x31A9E530D137684F(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD8B5988E85F72BE5(fVar8);
		unk_0x271C1332F482646C();
		unk_0x31A9E530D137684F(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(0f);
		unk_0xD8B5988E85F72BE5(80f);
		unk_0x271C1332F482646C();
		func_113(&(uParam0->f_1), 256);
		func_112(&(uParam0->f_1), 128);
	}
	unk_0xE9F9BA9108F437C7(*uParam0, 255, 255, 255, 0, 0);
}

float func_118(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_119(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_120(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x0FA486DE15EB3004(*uParam0))
		{
			func_113(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_121(var uParam0, var uParam1)
{
	func_122(uParam1, uParam0);
}

void func_122(var uParam0, var uParam1)
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
	
	func_198(&(Global_1840924.f_49), 1, 0);
	unk_0x657F3224D1A882F4();
	func_197();
	func_38(0);
	unk_0x74BF5F6EEF62D5A9();
	func_195(1);
	unk_0xD8C147DA332E7F06(10);
	func_194(1);
	func_193(1);
	if (!func_190())
	{
		if (!unk_0x2F8EAF18929E1E59("LEADERBOARD_SCENE"))
		{
			unk_0x8969D02DEDC106D2("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0x05EFB6A616B6FADE(uParam1->f_42, 3))
	{
		*uParam0 = func_189();
		unk_0x2BCFB39E86340DAA(&(uParam1->f_42), 3);
	}
	Var10 = { func_23(unk_0xD4E735F4B6A956AC()) };
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
				func_188(*uParam0, Global_1835392.f_2780);
				if (unk_0x445EC9E7EACB710E(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_187(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							Var6 = { Global_1835392.f_2780.f_9 };
							func_186(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &Var6, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_186(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_185(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				iVar9 = 0;
				unk_0x2BCFB39E86340DAA(&iVar9, 4);
				func_184(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x2BCFB39E86340DAA(&iVar9, 5);
				func_184(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x2BCFB39E86340DAA(&iVar9, 6);
				func_184(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0x2BCFB39E86340DAA(&(uParam1->f_42), 1);
				func_183(*uParam0);
				unk_0xFA57C719261AA55D(&(uParam1->f_42), 2);
				unk_0x135C61E339DABBAC(1);
			}
			else
			{
				func_183(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				unk_0xFA57C719261AA55D(&(uParam1->f_42), 1);
				Global_1835392.f_2829 = 1;
			}
			if (!func_148(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xFA57C719261AA55D(&(uParam1->f_42), 1);
				if (!unk_0x05EFB6A616B6FADE(uParam1->f_42, 0))
				{
					unk_0x31A9E530D137684F(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x271C1332F482646C();
					func_188(*uParam0, Global_1835392.f_2780);
					if (unk_0x445EC9E7EACB710E(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_187(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835392.f_2780.f_9 };
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &Var6, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_185(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
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
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 5);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 6);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x2BCFB39E86340DAA(&iVar9, 7);
						func_147(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_92(&(Global_1835392.f_2823));
				}
				else if (func_145(&(Global_1835392.f_2823), 300, 0))
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
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 5);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x2BCFB39E86340DAA(&iVar9, 6);
							func_184(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x2BCFB39E86340DAA(&iVar9, 7);
						func_147(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_92(&(Global_1835392.f_2823));
				}
				func_183(*uParam0);
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
					func_188(*uParam0, Global_1835392.f_2780);
					if (unk_0x445EC9E7EACB710E(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_187(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835392.f_2780.f_9 };
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &Var6, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_186(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_185(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!unk_0x05EFB6A616B6FADE(uParam1->f_42, 6))
					{
						func_95(&Global_1839723);
						func_141(uParam1, &Global_1839723);
						func_140(uParam1, &Global_1839723);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_187(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
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
									func_184(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0x2BCFB39E86340DAA(&iVar9, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_187(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_184(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_184(*uParam0, &iVar3, iVar9, 0, 0);
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
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_187(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_184(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_184(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_139(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_187(uParam1->f_44))
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
										if (func_138(&(Global_1839723[iVar0 /*100*/].f_32), &Var10))
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
									if (func_187(uParam1->f_44))
									{
										Var6 = { Global_1839723[iVar0 /*100*/] };
										if (!unk_0x429D45A6C6520026(&(Global_1839723[iVar0 /*100*/].f_84)) && !unk_0x3CAC2741CC1A631F(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_137(*uParam0, iVar3, iVar9, Global_1839723[iVar0 /*100*/].f_59, &Var6, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_137(*uParam0, iVar3, iVar9, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
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
												func_131(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_131(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
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
												func_128(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_128(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_127();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											unk_0x2BCFB39E86340DAA(&iVar9, 2);
											unk_0x2BCFB39E86340DAA(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_126(*uParam0, (iVar3 - 1), iVar9);
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
						func_184(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x2BCFB39E86340DAA(&iVar9, 5);
						func_184(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x2BCFB39E86340DAA(&iVar9, 6);
						func_184(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0x2BCFB39E86340DAA(&(uParam1->f_42), 1);
					unk_0xFA57C719261AA55D(&(uParam1->f_42), 2);
					func_183(*uParam0);
					unk_0x135C61E339DABBAC(1);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x2BCFB39E86340DAA(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_126(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_183(*uParam0);
					func_123(uParam0, uParam1);
				}
			}
		}
	}
}

void func_123(var uParam0, var uParam1)
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
		func_125(&uVar5, &iVar6, &uVar7, &uVar8, 0);
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
				func_92(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_124(uParam1, 188))
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
				func_92(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_124(uParam1, 187))
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
			func_92(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_124(uParam1, 204))
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
				func_126(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x2BCFB39E86340DAA(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_126(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xFA57C719261AA55D(&(uParam1->f_42), 2);
		}
		if (func_139(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
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

int func_124(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_125(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0xD73B1037F6BD4B90(2, iParam1) && !unk_0x1190AB7024CBD8CB(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_145(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0xD73B1037F6BD4B90(2, iParam1) && !unk_0x1190AB7024CBD8CB(2, iParam1)) || func_145(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_125(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_126(int iParam0, int iParam1, int iParam2)
{
	unk_0x31A9E530D137684F(iParam0, "SET_SLOT_STATE");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x380580A1A1667F69(iParam2);
	unk_0x271C1332F482646C();
}

void func_127()
{
	unk_0x271C1332F482646C();
}

void func_128(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)
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
						fParam15 = func_130(fParam15);
					}
					else
					{
						fParam15 = func_129(fParam15);
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

float func_129(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_130(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_131(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
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
			if (func_136(iParam15) != 0)
			{
				unk_0x390B339C943A8A54(func_133(func_136(iParam15), 0));
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
						iParam15 = floor(func_130(to_float(iParam15)));
					}
					else
					{
						iParam15 = floor(func_129(to_float(iParam15)));
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
				Var0 = { func_132(iParam15) };
				unk_0x390B339C943A8A54(&Var0);
				unk_0xD481829E3E36543B();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_132(int iParam0)
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

char* func_133(int iParam0, bool bParam1)
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
			if (func_135(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_134(&(Var0.f_31));
				}
				else
				{
					return func_134(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_134(var uParam0)
{
	return uParam0;
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

int func_136(int iParam0)
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

void func_137(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
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

int func_138(var uParam0, var uParam1)
{
	if (!func_139(*uParam0))
	{
		return 0;
	}
	if (!func_139(*uParam1))
	{
		return 0;
	}
	if (unk_0xC9C6FA9E6066F480(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x09BF290B57B95740(&uParam0, 13);
}

void func_140(var uParam0, var uParam1)
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

void func_141(var uParam0, var uParam1)
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
			if (func_144(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_144(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_144(uParam1, iVar3, &uVar2, 2))
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
		func_142(uParam1);
	}
}

void func_142(var uParam0)
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
	Var3 = { func_23(unk_0xD4E735F4B6A956AC()) };
	if (unk_0xE238AA6539810EEE(Global_1835392.f_2826))
	{
		iVar4 = unk_0x9BB29DF8DCAD91D0(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_143(&Global_1839593);
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
					if (func_138(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
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

void func_143(var uParam0)
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

int func_144(var uParam0, int iParam1, var uParam2, int iParam3)
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
				(uParam0[iParam1 /*100*/])->f_32 = { func_23(unk_0xD4E735F4B6A956AC()) };
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

int func_145(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_146(uParam0, bParam2, 0);
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

void func_146(var uParam0, bool bParam1, bool bParam2)
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

void func_147(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0x2BCFB39E86340DAA(&iParam2, 7);
	unk_0x31A9E530D137684F(iParam0, "SET_SLOT");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x380580A1A1667F69(iParam2);
	unk_0x390B339C943A8A54(sParam3);
	unk_0xC4A386982AF76F10();
	unk_0x271C1332F482646C();
}

int func_148(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_182(&(Global_1835392.f_2827)))
		{
			func_146(&(Global_1835392.f_2827), 1, 0);
			return 0;
		}
		else if (!func_145(&(Global_1835392.f_2827), 1000, 1))
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
		func_181(uParam0);
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
	if (!func_179(uParam0))
	{
		return 0;
	}
	if (!func_177(uParam0))
	{
		return 0;
	}
	if (!func_164(uParam0))
	{
		return 0;
	}
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_42, 6))
	{
		func_95(&Global_1839723);
		func_141(uParam0, &Global_1839723);
		func_140(uParam0, &Global_1839723);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_42), 6);
	}
	if (!unk_0x05EFB6A616B6FADE(uParam0->f_42, 7))
	{
		if (!func_182(&(Global_1835392.f_2830)))
		{
			func_146(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_145(&(Global_1835392.f_2830), 30000, 1))
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_42), 7);
		}
		if (func_161(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_158(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_153(&Global_1839723))
		{
			func_149(&Global_1839723);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_42), 7);
			func_149(&Global_1839723);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_149(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_152(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_151(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_143(&Global_1839593);
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
			if (func_139((uParam0[iVar0 /*100*/])->f_45))
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
	Global_1838577.f_87[iVar2 /*3*/] = { func_150(unk_0xD4E735F4B6A956AC()) };
}

Vector3 func_150(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), false);
}

void func_151(int iParam0, int iParam1)
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

int func_152(int iParam0)
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

int func_153(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_157(uParam0);
			if (unk_0x7DD04831D0FC44CA() && !unk_0x804C0CBA285C7A35(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_139((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_156(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841022))
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
			if (func_154(&((uParam0[1 /*100*/])->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
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
					if (func_139((uParam0[iVar0 /*100*/])->f_32) && func_139(Global_1841022[iVar1 /*13*/]))
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

int func_154(var uParam0, var uParam1, var uParam2, var uParam3)
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
					func_155(&uVar0, uParam3[iVar1 /*4*/]);
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

void func_155(var uParam0, char* sParam1)
{
	unk_0x728192F7FED00EAE(uParam0, 35, sParam1);
}

int func_156(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_139(*(uParam1[iVar0 /*13*/])))
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

void func_157(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_100(&(Global_1841022[iVar0 /*13*/]));
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

int func_158(var uParam0)
{
	int iVar0;
	
	if (unk_0x47C01C0E6F4C1D06())
	{
		return 1;
	}
	else if (unk_0x29A02C184A66D25E() || unk_0x7DD04831D0FC44CA())
	{
		if (!func_160(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_159(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_159(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_139(*uParam1))
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

int func_160(var uParam0)
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
				func_100(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_139((uParam0[iVar1 /*100*/])->f_32))
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
					if (func_139((uParam0[iVar1 /*100*/])->f_32))
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

int func_161(var uParam0)
{
	int iVar0;
	
	if (unk_0x29A02C184A66D25E() || unk_0x7DD04831D0FC44CA())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_163(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_162(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_162(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
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
			if (func_139(Var0))
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

int func_163(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
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
			if (func_139(Var1[0 /*13*/]))
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

int func_164(var uParam0)
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
	Var12 = { func_23(unk_0xD4E735F4B6A956AC()) };
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
			if (func_175(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_176(), 0, 0, 0))
			{
				func_174(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_176())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0x80417E8346C8DA5B(iVar7, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_138(&Var0, &Var12) || func_138(&Var0, &(Global_1835013.f_361)))
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
								func_173(&Var0);
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
								if (func_176() && iVar5 == 0)
								{
									func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[iVar9] = 0;
									Global_1835392.f_2704[iVar9]++;
								}
								if (func_176() && (func_138(&Var0, &Var12) || func_138(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_138(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1835392.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_171(uParam0->f_44))
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
									if (func_187(uParam0->f_44))
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
						if (!func_176())
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
						func_173(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0x80417E8346C8DA5B(iVar7, &Var0);
							if (Global_1835392.f_2704[iVar9] < 12 && Var0.f_96 > 1)
							{
								if (func_176() && iVar5 == iVar7)
								{
									if (!func_138(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
										Global_1835392.f_2704[iVar9]++;
									}
								}
								if (func_176() && (func_138(&Var0, &Var12) || func_138(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar9] < 12)
								{
									if (func_139(Var0) && !func_138(&Var0, &(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_138(&Var0, &Var12))
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
										if (func_171(uParam0->f_44))
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
										if (func_187(uParam0->f_44))
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
							func_173(&Var0);
							iVar7++;
						}
						unk_0x27BFAFBB668CCC49();
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_1835392.f_2775[iVar9] == -1 && func_176())
							{
								if (Global_1835392.f_2704[iVar9] >= 1)
								{
									func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
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
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
			if (func_166(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_174(&Var1, &(uParam0->f_44));
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
								if (func_176() && (func_138(&Var0, &Var12) || func_138(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1835392[iVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_171(uParam0->f_44))
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
									if (func_187(uParam0->f_44))
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
									if (func_171(uParam0->f_44))
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
									if (func_187(uParam0->f_44))
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
							func_173(&Var0);
							iVar2++;
						}
					}
					unk_0x27BFAFBB668CCC49();
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0x27BFAFBB668CCC49();
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2832), iVar9);
					Global_1835392.f_2704[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1835392.f_2775[iVar9] == -1 && func_176())
				{
					if (Global_1835392.f_2704[iVar9] >= 1)
					{
						func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
					}
					Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
					Global_1835392.f_2704[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_165(iVar9, Global_1835013.f_374);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_176() && Global_1835392.f_2704[iParam0] > Global_1835392.f_2775[iParam0]) && Global_1835392.f_2775[iParam0] >= 0)
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
		if (!func_176())
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

int func_166(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_169() && !func_168())
			{
				func_167(*uParam2);
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

void func_167(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_1835008 = 1;
	func_198(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_168()
{
	if (unk_0xD1ABB20CFF127CCC() && !func_190())
	{
		return 1;
	}
	return 0;
}

int func_169()
{
	if (unk_0xF1DD1C47B93AF5FB() || Global_1835008)
	{
		func_170();
		return 1;
	}
	return 0;
}

void func_170()
{
	if (func_145(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xCC3146CA1B3ED1CD(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_92(&(Global_1835008.f_1));
	}
}

int func_171(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_172(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_187(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xB330C43B9B7B1724(unk_0xD4E735F4B6A956AC()), 64);
		sParam1->f_32 = { func_23(unk_0xD4E735F4B6A956AC()) };
	}
	sParam1->f_59 = iParam2;
	if (func_171(uParam0->f_44))
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

void func_173(var uParam0)
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

void func_174(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_175(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_169() && !func_168())
			{
				func_167(*uParam2);
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

int func_176()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_177(var uParam0)
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
	Var10 = { func_23(unk_0xD4E735F4B6A956AC()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0x3B1559F29706DE5C();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_176())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], iVar8, 0, 100))
				{
					func_174(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var1))
					{
						if (func_176())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0x80417E8346C8DA5B(iVar6, &Var0);
									if (func_187(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_138(&Var0, &(Global_1835013.f_361)))
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
									func_173(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_176() && iVar4 == 0)
						{
							if (Global_1835392.f_2704[iVar9] < 12)
							{
								func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								Global_1835392.f_2775[iVar9] = 0;
								Global_1835392.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0x80417E8346C8DA5B(0, &Var0);
							if (func_176() && (func_138(&Var0, &Var10) || func_138(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_139(Var0) && Global_1835392.f_2704[iVar9] < 12)
							{
								if (func_138(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_171(uParam0->f_44))
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
								if (func_187(uParam0->f_44))
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
								func_173(&Var0);
								unk_0x27BFAFBB668CCC49();
								func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[iVar9] == -1 && func_176())
								{
									if (Global_1835392.f_2704[iVar9] >= 1)
									{
										func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
									}
									Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
									Global_1835392.f_2704[iVar9]++;
								}
								return 0;
							}
							func_173(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_173(&Var0);
							unk_0x27BFAFBB668CCC49();
							func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[iVar9] == -1 && func_176())
							{
								if (Global_1835392.f_2704[iVar9] >= 1)
								{
									func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
								Global_1835392.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_176())
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
								if (func_176() && iVar4 == iVar6)
								{
									if (!func_138(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
										Global_1835392.f_2704[iVar9]++;
									}
								}
								if (func_176() && (func_138(&Var0, &Var10) || func_138(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_139(Var0) && !func_138(&Var0, &(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_138(&Var0, &Var10))
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
										if (func_171(uParam0->f_44))
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
										if (func_187(uParam0->f_44))
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
							func_173(&Var0);
							iVar6++;
						}
						unk_0x27BFAFBB668CCC49();
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[iVar9] == -1 && func_176())
						{
							if (Global_1835392.f_2704[iVar9] >= 1)
							{
								func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_172(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
							}
							Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
							Global_1835392.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_165(iVar9, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_178(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_169() && !func_168())
			{
				func_167(*uParam2);
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

int func_179(var uParam0)
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
	Var0 = { func_23(unk_0xD4E735F4B6A956AC()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1835392.f_2775[iVar10] = -1;
			Global_1835392.f_2704[iVar10] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_180(uParam0->f_44))
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
			if (func_175(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_176(), 0, 0, 0))
			{
				func_174(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_176())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0x80417E8346C8DA5B(iVar8, &Var1);
								if (Global_1835013.f_374 < 0)
								{
									if (func_138(&Var1, &Var0) || func_138(&Var1, &(Global_1835013.f_361)))
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
								func_173(&Var1);
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
								if (func_176() && iVar6 == 0)
								{
									func_172(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_1835392.f_2775[iVar10] = 0;
									Global_1835392.f_2704[iVar10]++;
								}
								if (func_176() && (func_138(&Var1, &Var0) || func_138(&Var1, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_138(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1835392.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_171(uParam0->f_44))
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
									if (func_187(uParam0->f_44))
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
						if (!func_176())
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
						func_173(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0x80417E8346C8DA5B(iVar8, &Var1);
							if (Global_1835392.f_2704[iVar10] < 12 && Var1.f_96 > 1)
							{
								if (func_176() && iVar6 == iVar8)
								{
									if (!func_138(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_172(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
										Global_1835392.f_2704[iVar10]++;
									}
								}
								if (func_176() && (func_138(&Var1, &Var0) || func_138(&Var1, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar10] < 12)
								{
									if (func_139(Var1) && !func_138(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_138(&Var1, &Var0))
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
										if (func_171(uParam0->f_44))
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
										if (func_187(uParam0->f_44))
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
							func_173(&Var1);
							iVar8++;
						}
						unk_0x27BFAFBB668CCC49();
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_1835392.f_2775[iVar10] == -1 && func_176())
							{
								if (Global_1835392.f_2704[iVar10] >= 1)
								{
									func_172(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Global_1835392[iVar10 /*901*/][(Global_1835392.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_172(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), 1);
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
						func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
			if (func_166(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_174(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x61209D54A5FA61B1(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0x80417E8346C8DA5B(iVar3, &Var1);
							if (func_176() && (func_138(&Var1, &Var0) || func_138(&Var1, &(Global_1835013.f_361))))
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
										if (func_171(uParam0->f_44))
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
										if (func_187(uParam0->f_44))
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
										if (func_171(uParam0->f_44))
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
										if (func_187(uParam0->f_44))
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
							func_173(&Var1);
							iVar3++;
						}
					}
					unk_0x27BFAFBB668CCC49();
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0x2BCFB39E86340DAA(&(Global_1835392.f_2832), iVar10);
					func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[iVar10] == -1 && func_176())
			{
				if (Global_1835392.f_2704[iVar10] >= 1)
				{
					func_172(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Global_1835392[iVar10 /*901*/][(Global_1835392.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_172(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), 1);
				}
				Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
				Global_1835392.f_2704[iVar10]++;
			}
			break;
		
		case 2:
			func_165(iVar10, Global_1835013.f_374);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_180(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
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

void func_181(var uParam0)
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
			func_151(Global_1835392.f_2826, -1);
		}
	}
}

bool func_182(var uParam0)
{
	return uParam0->f_1;
}

void func_183(int iParam0)
{
	if (unk_0x0FA486DE15EB3004(iParam0))
	{
		unk_0xE9F9BA9108F437C7(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_184(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
				Var4 = { func_23(unk_0xD4E735F4B6A956AC()) };
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
							Var6 = { func_23(unk_0xD4E735F4B6A956AC()) };
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

void func_185(int iParam0, char* sParam1, var uParam2, int iParam3)
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

void func_186(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
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

int func_187(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_188(int iParam0, int iParam1)
{
	unk_0x31A9E530D137684F(iParam0, "SET_DISPLAY_TYPE");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x271C1332F482646C();
}

int func_189()
{
	return unk_0xB00CD6895BDB01A0("SC_LEADERBOARD");
}

bool func_190()
{
	return func_191(unk_0xD4E735F4B6A956AC());
}

int func_191(int iParam0)
{
	switch (func_192(iParam0))
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

int func_192(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196;
}

void func_193(int iParam0)
{
	Global_1315696 = iParam0;
}

void func_194(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

void func_195(bool bParam0)
{
	if (bParam0)
	{
		func_197();
	}
	func_196(4, -1);
	func_196(6, -1);
	func_196(7, -1);
	func_196(3, -1);
	func_196(1, -1);
	func_196(2, -1);
	func_196(11, -1);
	func_196(13, -1);
	func_196(14, -1);
	func_196(16, -1);
}

void func_196(int iParam0, int iParam1)
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

void func_197()
{
	Global_2524719.f_4519 = 0;
}

void func_198(var uParam0, bool bParam1, bool bParam2)
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

int func_199(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < unk_0x817B152F7462D506() && Global_1840924.f_2 > 0)
	{
		func_92(&Global_1840924);
		func_92(&(Global_1840924.f_49));
		*iParam0 = 0;
		Global_1840924.f_2 = 0;
		func_207(0);
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
	if ((unk_0x7DD04831D0FC44CA() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_205() && unk_0x18F86E07E41D913F()))
	{
		if (unk_0xF737D6F364465A12())
		{
			func_202(&(Global_1840924.f_3), func_204(&(Global_1840924.f_3)));
			if (!unk_0x05EFB6A616B6FADE(*iParam0, 4))
			{
				unk_0x2BCFB39E86340DAA(iParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_200(&(Global_1840924.f_3), 0);
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
			else if (!func_205())
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
				func_92(&(Global_1840924.f_49));
				func_92(&Global_1840924);
				*iParam0 = 0;
				Global_1840924.f_2 = 0;
				func_207(0);
				return 1;
			}
		}
	}
	else
	{
		func_202(&(Global_1840924.f_3), func_204(&(Global_1840924.f_3)));
		if ((func_182(&(Global_1840924.f_49)) && !func_145(&(Global_1840924.f_49), 2000, 1)) && !unk_0x18F86E07E41D913F())
		{
			unk_0x2BCFB39E86340DAA(iParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_200(&(Global_1840924.f_3), 0);
		}
		else if (!unk_0x05EFB6A616B6FADE(*iParam0, 3))
		{
			if (!unk_0x05EFB6A616B6FADE(*iParam0, 1))
			{
				unk_0xFB058145776F9CB1(0);
				unk_0x2BCFB39E86340DAA(iParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_200(&(Global_1840924.f_3), 0);
			}
		}
		if (func_182(&Global_1840924))
		{
			if (!func_145(&Global_1840924, 4000, 1))
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
							func_92(&Global_1840924);
							*iParam0 = 0;
							Global_1840924.f_2 = 0;
							func_207(0);
							return 1;
						}
					}
				}
				else
				{
					func_92(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_207(0);
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
					func_92(&(Global_1840924.f_49));
					func_92(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_207(0);
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
						func_92(&(Global_1840924.f_49));
						func_92(&Global_1840924);
						*iParam0 = 0;
						Global_1840924.f_2 = 0;
						func_207(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_200(var uParam0, bool bParam1)
{
	func_201(uParam0);
	if (bParam1)
	{
		func_207(0);
	}
	uParam0->f_35 = 1;
}

void func_201(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_202(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_203(uParam0);
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

void func_203(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_204(var uParam0)
{
	return uParam0->f_35;
}

int func_205()
{
	if (func_206())
	{
		return 0;
	}
	if (unk_0x4F3E20635369D110() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_206()
{
	return Global_2458691;
}

void func_207(bool bParam0)
{
	unk_0x783C50B0DAB1C767();
	if (bParam0)
	{
		unk_0x2F4B73C2B0106D15();
	}
}

int func_208(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_166)
	{
		func_220(&(uParam0->f_72), bParam1);
		iLocal_166 = 1;
		func_326(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_217(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_209(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}

int func_209(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_187(uParam0->f_44))
	{
		Var3 = { Global_1835013.f_361 };
	}
	else
	{
		Var3 = { func_23(unk_0xD4E735F4B6A956AC()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_216(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_174(&Var1, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x202B9213EA09E38A(uParam0->f_44, 0);
				iVar4 = 0;
				while (iVar4 < Global_1835013.f_142.f_1)
				{
					if (!func_215(uParam0->f_44, iVar4))
					{
						if (func_214(uParam0->f_44, 4, iVar4))
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
						if (!func_139(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1835013.f_142.f_1)
							{
								if (!func_215(uParam0->f_44, iVar4))
								{
									if (func_214(uParam0->f_44, 4, iVar4))
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
				func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_213();
				if (Global_1835013.f_4)
				{
					if (func_212(uParam0->f_44))
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
			if (unk_0x4C9BACA8D249CB13() && func_211())
			{
				if (func_210())
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
			if (func_212(uParam0->f_44))
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
			if (func_175(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_174(&Var1, &(uParam0->f_44));
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
				func_98(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_210()
{
	return unk_0x05EFB6A616B6FADE(Global_959568.f_8, 1);
}

var func_211()
{
	return Global_2456479.f_3;
}

int func_212(int iParam0)
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

void func_213()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_214(int iParam0, int iParam1, int iParam2)
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

int func_215(int iParam0, int iParam1)
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

int func_216(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_169() && !func_168())
			{
				func_167(*uParam2);
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

void func_217(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x65A878D380D59179())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_219(iParam0, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_218(190, 131, 0, 0f, 1);
		func_218(190, 103, iLocal_106[1], 0f, 0);
		func_218(190, 99, iLocal_106[2], 0f, 0);
		func_218(190, 109, iLocal_106[3], 0f, 0);
		func_218(190, 106, iLocal_106[5], 0f, 0);
		func_218(190, 2, iLocal_106[10], 0f, 0);
		func_218(190, 107, iLocal_106[8], 0f, 0);
		func_218(190, 116, iLocal_106[6], 0f, 0);
		iLocal_106[1] = 0;
		iLocal_106[2] = 0;
		iLocal_106[3] = 0;
		iLocal_106[5] = 0;
		iLocal_106[10] = 0;
		iLocal_106[8] = 0;
		iLocal_106[6] = 0;
	}
}

void func_218(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
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
				else if (func_214(iParam0, 4, iVar1))
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

int func_219(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		Var0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0xD1832FEBE50B1AB1())
			{
				Var2 = { func_23(unk_0xD4E735F4B6A956AC()) };
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

void func_220(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_221(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_221(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 <= 0 || func_230())
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 <= 0 || func_230())
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 <= 0 || func_230())
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 <= 0 || func_230())
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 > 0 && !func_230())
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
				if (iParam5 <= 0 || func_230())
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
			MemCopy(&(Global_1835392.f_2780.f_9), {func_229(iParam1)}, 16);
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
				if (func_228(Global_4456448.f_152990) || func_225(Global_4456448.f_152990))
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
				else if (func_224(Global_4456448.f_152990))
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
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_223(iParam4)}, 8);
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
	Global_1835392.f_2826 = func_222(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_222(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_187(iParam1))
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

struct<6> func_223(int iParam0)
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

bool func_224(int iParam0)
{
	return iParam0 == 74;
}

var func_225(int iParam0)
{
	return (func_227(iParam0) || func_226(iParam0));
}

bool func_226(int iParam0)
{
	return iParam0 == 44;
}

bool func_227(int iParam0)
{
	return iParam0 == 45;
}

bool func_228(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_229(int iParam0)
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

int func_230()
{
	if ((((((((((Global_4456448.f_53220 == 1 || Global_4456448.f_53220 == 3) || Global_4456448.f_53220 == 5) || Global_4456448.f_53220 == 7) || Global_4456448.f_53220 == 19) || Global_4456448.f_53220 == 8) || Global_4456448.f_53220 == 9) || Global_4456448.f_53220 == 11) || Global_4456448.f_53220 == 13) || Global_4456448.f_53220 == 21) || Global_4456448.f_53220 == 23)
	{
		return 1;
	}
	return 0;
}

int func_231(var uParam0, int iParam1)
{
	if (!func_415(&(uParam0->f_2)))
	{
		func_429(&(uParam0->f_2));
	}
	unk_0xD8C147DA332E7F06(14);
	unk_0xE9F9BA9108F437C7(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xDF0ADAD7E584090D(2, 201) || uParam0->f_8)
		{
			if (!func_415(&(uParam0->f_5)))
			{
				func_429(&(uParam0->f_5));
				func_232(uParam0, 1051260355);
			}
		}
		if (func_415(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_416(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		if (!func_415(&(uParam0->f_5)))
		{
			func_429(&(uParam0->f_5));
			func_232(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_416(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_232(var uParam0, float fParam1)
{
	unk_0x31A9E530D137684F(*uParam0, "SHARD_ANIM_OUT");
	unk_0x380580A1A1667F69(uParam0->f_9);
	unk_0xD8B5988E85F72BE5(fParam1);
	unk_0x271C1332F482646C();
}

void func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x4915F4759304D5CF((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x4915F4759304D5CF((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x4915F4759304D5CF((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_234(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x4915F4759304D5CF((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x4915F4759304D5CF((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x4915F4759304D5CF((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x4915F4759304D5CF((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x4915F4759304D5CF((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_235()
{
	int iVar0;
	
	if (!bLocal_187)
	{
		iVar0 = (unk_0x22C775856F4633CA(0, 65535) % 3);
	}
	else
	{
		iLocal_201++;
		iVar0 = (iLocal_201 % 2);
	}
	return iVar0;
}

void func_236(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_237(iParam4);
	if (iParam4 != 5)
	{
		unk_0x31A9E530D137684F(*uParam0, "RESET_MOVIE");
		unk_0x271C1332F482646C();
	}
	unk_0x31A9E530D137684F(*uParam0, sVar0);
	unk_0x390B339C943A8A54("STRING");
	unk_0x4FDA9E6EF359F8A9(iParam1);
	unk_0xD481829E3E36543B();
	func_12(sParam2);
	unk_0x271C1332F482646C();
	func_429(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (unk_0x4C9BACA8D249CB13())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_238(var uParam0, int iParam1)
{
	unk_0x31A9E530D137684F(*uParam0, "CLEAR_SCORES");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x271C1332F482646C();
}

int func_239(int iParam0)
{
	iParam0->f_2 = { 0f, -2.3685f, -0.2f };
	iParam0->f_5 = { 0f, 0f, 0f };
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_20 = 0;
	iParam0->f_23 = 0;
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		unk_0xC0AC848E56940C34(iParam0);
	}
	return 1;
}

void func_240(int iParam0)
{
	unk_0xD21CD2A6F93F44A6(iLocal_77, iLocal_75, 1500, 1, 1);
	unk_0x930701157A4B9374(iLocal_78, true);
	unk_0xD21CD2A6F93F44A6(iLocal_77, iLocal_78, 8000, 1, 1);
	unk_0xABE3EC0FA16227B5(iLocal_80, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0xA62406CE1190BF91(iLocal_80, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0xF62A5A3CB8DB2402(iLocal_80, 35f);
}

void func_241(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	
	if (!unk_0x4EFA8CFA30651DD4(iLocal_75))
	{
		bVar0 = false;
		func_322(uParam0);
		if (!bLocal_179)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x135C61E339DABBAC(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_107)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!unk_0x05EFB6A616B6FADE(Global_106031, 3))
						{
							func_413("DARTS_INSTR_W", -1);
							unk_0x2BCFB39E86340DAA(&Global_106031, 3);
						}
						func_326(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!unk_0x05EFB6A616B6FADE(Global_106031, 4))
						{
							func_413("DARTS_INSTR_B", -1);
							unk_0x2BCFB39E86340DAA(&Global_106031, 4);
						}
						func_326(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x135C61E339DABBAC(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x4EFA8CFA30651DD4(iLocal_84) && uParam0->f_3 == 2)
			{
				func_321(uParam3);
			}
		}
		else
		{
			func_319(uParam3, iLocal_30);
		}
		func_318(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_315(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_307(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_300(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0xD73B1037F6BD4B90(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_299(iLocal_31, 0);
				if (((((!func_298("DARTS_SHT_USE") && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B")) && !func_298("DARTS_AIM_HLP")) && !func_298("DARTS_STD_HLP")) && !func_298("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_413("DARTS_LEVEL", -1);
						unk_0x2BCFB39E86340DAA(&(Global_106070.f_18942.f_6), iLocal_199);
						func_326(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_177)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_326(&(uParam3->f_666), 6, 1);
					}
					iLocal_177 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_177)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_326(&(uParam3->f_666), 6, 1);
					}
					iLocal_177 = 1;
				}
				else if (func_288(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0x4F93066CECE72793();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_174)
				{
					if (!func_415(iParam4))
					{
						func_286(iParam4);
					}
					else if (func_7(iParam4) > 20f)
					{
						func_285(iLocal_170[(1 - iLocal_30)]);
						func_416(iParam4);
						iLocal_174 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_197 = 0;
				func_284(&(uParam0->f_422), &(uParam0->f_249));
				func_281(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (timera() > unk_0x22C775856F4633CA(1250, 2500))
			{
				func_284(&(uParam0->f_422), &(uParam0->f_249));
				func_281(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_268(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_267(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_265(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_250(uParam0, uParam3);
			break;
		
		case 5:
			func_243(uParam0, uParam2, uParam3);
			if (func_415(iParam4))
			{
				func_416(iParam4);
			}
			break;
		
		case 6:
			func_242(uParam0, uParam3);
			break;
	}
}

void func_242(var uParam0, var uParam1)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iLocal_197++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_181 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_265(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_250(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_180)
			{
				if (unk_0xDC5D81351D6A4DDB(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0xC0AC848E56940C34(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				vVar0 = { unk_0x2F230B37E9FFF23F(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0xDC5D81351D6A4DDB(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x4299736016AECE26(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
				}
			}
			func_265(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_250(uParam0, uParam1);
			if (bLocal_180)
			{
				if (iLocal_182)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0xFCFC8CC5FF74580D(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, vLocal_40, 1, true, 0);
					vVar0 = { unk_0x2F230B37E9FFF23F(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0x4299736016AECE26(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
					fVar1 = unk_0xF59B9063EDAC7451(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar1, uParam0->f_243.f_4 };
					unk_0x76D3D51F5F66367F(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_284(&(uParam0->f_422), &(uParam0->f_249));
			func_281(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_265(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_326(&(uParam1->f_666), 2, 0);
				func_326(&(uParam1->f_666), 3, 0);
				func_326(&(uParam1->f_666), 4, 0);
				func_326(&(uParam1->f_666), 5, 1);
				settimerb(0);
			}
			func_250(uParam0, uParam1);
			if (bLocal_180)
			{
				if (iLocal_182)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/] = unk_0xFCFC8CC5FF74580D(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_1, vLocal_40, 1, true, 0);
							vVar0 = { unk_0x2F230B37E9FFF23F(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_2) };
							if (unk_0xDC5D81351D6A4DDB(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/]))
							{
								unk_0x4299736016AECE26(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], vVar0, 1, 0, 0, 1);
							}
							fVar3 = unk_0xF59B9063EDAC7451(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
							unk_0x76D3D51F5F66367F(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_24 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_197 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_243(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_249();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_248("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_247("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_248("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_248("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_248("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_247("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_248("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_248("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			settimerb(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0xDF0ADAD7E584090D(2, 190))
			{
				iLocal_195++;
				if (iLocal_195 >= uParam0->f_436)
				{
					iLocal_195 = 0;
				}
				vVar0 = { unk_0xE2BBD32891C18569(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_50(vVar0);
			}
			if (unk_0xDF0ADAD7E584090D(2, 189))
			{
				iLocal_195 = (iLocal_195 - 1);
				if (iLocal_195 < 0)
				{
					iLocal_195 = (uParam0->f_436 - 1);
				}
				vVar0 = { unk_0xE2BBD32891C18569(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_50(vVar0);
			}
			if (unk_0xDF0ADAD7E584090D(2, 202))
			{
				vVar0 = { unk_0xE2BBD32891C18569(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_52(vVar0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0xDF0ADAD7E584090D(2, 201))
			{
				iLocal_171 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0xDF0ADAD7E584090D(2, 201) || (iLocal_181 && bLocal_180))
			{
				iLocal_171 = 1;
			}
			if ((unk_0xDF0ADAD7E584090D(2, 189) || unk_0xDF0ADAD7E584090D(2, 190)) && uParam0->f_248 == 1)
			{
				vVar0 = { unk_0xE2BBD32891C18569(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_52(vVar0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_176)
				{
					if (func_246(iLocal_30 == 0, &(iLocal_170[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_176 = 1;
					}
				}
				else if ((unk_0xFD34717937104F1C() % 500) < 50)
				{
				}
			}
			else if (!iLocal_176)
			{
				if (func_245(iLocal_30 == 0, &(iLocal_170[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_176 = 1;
				}
			}
			else if ((unk_0xFD34717937104F1C() % 500) < 50)
			{
			}
			if (iLocal_171 || timerb() > 2000)
			{
				iLocal_181 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_239(&(uParam0->f_5[iLocal_30 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_244(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0x7A15C6C664F7334E(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_30] = uParam0->f_422[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_428(uParam1, iLocal_30);
				iLocal_54 = 0;
				func_408();
				if (!bLocal_180)
				{
					unk_0xDF4B3D0EF01223F1();
				}
				iLocal_48 = 0;
				uParam2->f_670 = 3;
				iLocal_177 = 0;
				iLocal_174 = 0;
				iLocal_176 = 0;
				iLocal_171 = 0;
				iLocal_195 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_244(var uParam0, int iParam1, int iParam2)
{
	unk_0x31A9E530D137684F(*uParam0, "ADD_DARTS_SCORE");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x380580A1A1667F69(iParam2);
	unk_0x271C1332F482646C();
}

int func_245(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 3);
		}
	}
	iVar1 = unk_0x22C775856F4633CA(0, 100);
	iVar2 = unk_0x22C775856F4633CA(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0x05EFB6A616B6FADE(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xA19140A5C42D8715(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0x05EFB6A616B6FADE(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xA19140A5C42D8715(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0x05EFB6A616B6FADE(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xA19140A5C42D8715(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0x05EFB6A616B6FADE(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xA19140A5C42D8715(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_246(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0x2BCFB39E86340DAA(&iVar0, 3);
		}
	}
	iVar1 = unk_0x22C775856F4633CA(0, 100);
	iVar2 = unk_0x22C775856F4633CA(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0x05EFB6A616B6FADE(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0xA19140A5C42D8715(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0xA19140A5C42D8715(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0x05EFB6A616B6FADE(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xA19140A5C42D8715(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0xDC5D81351D6A4DDB(func_491()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0x05EFB6A616B6FADE(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0xA19140A5C42D8715(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0xA19140A5C42D8715(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0x05EFB6A616B6FADE(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0xA19140A5C42D8715(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0xA19140A5C42D8715(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_247(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x1D594DA1FE749C88(iParam1, 1);
}

void func_248(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	unk_0x1D594DA1FE749C88(iParam2, 1);
}

void func_249()
{
	unk_0x930701157A4B9374(iLocal_84, true);
	unk_0x930701157A4B9374(iLocal_75, false);
}

void func_250(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_262(uParam0);
		func_326(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_260(4);
			iLocal_106[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_260(0);
					iLocal_106[1]++;
				}
			}
			func_326(&(uParam1->f_666), 2, 0);
			func_326(&(uParam1->f_666), 3, 0);
			func_326(&(uParam1->f_666), 4, 0);
			func_326(&(uParam1->f_666), 5, 1);
			func_262(uParam0);
			func_326(&(uParam1->f_666), 5, 0);
			settimerb(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_248("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_326(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_326(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_248("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_248("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_176)
			{
				if (func_259(iLocal_170[(1 - iLocal_30)]))
				{
					iLocal_176 = 1;
				}
			}
			uParam0->f_422[iLocal_30] = uParam0->f_425[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			settimera(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			func_326(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_258(uParam1, 1);
					func_260(0);
					iLocal_106[1]++;
				}
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_257(iLocal_170[iLocal_30]))
					{
						iLocal_176 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					func_256(iLocal_170[(1 - iLocal_30)]);
					iLocal_176 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_255(iLocal_170[1], iLocal_30 == 0))
					{
						iLocal_176 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_258(uParam1, 0);
					func_260(1);
					iLocal_106[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_253(iLocal_170[iLocal_30], iLocal_30 == 0))
					{
						iLocal_176 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_326(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_326(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_175)
						{
							func_252(iLocal_170[1]);
							iLocal_175 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_326(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_251("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_318(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			settimera(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_326(&(uParam1->f_666), 3, 0);
			func_326(&(uParam1->f_666), 2, 0);
			func_326(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_251(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	unk_0xCDA87E1DA52C8C9D(iParam2);
	unk_0x1D594DA1FE749C88(iParam3, 1);
}

void func_252(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_253(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xDC5D81351D6A4DDB(func_491()))
		{
			if (bParam1)
			{
				func_4(unk_0xA19140A5C42D8715(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_491(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_254())
			{
				func_4(unk_0xA19140A5C42D8715(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_254()
{
	if (unk_0x05EFB6A616B6FADE(unk_0x22C775856F4633CA(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xDC5D81351D6A4DDB(func_491()))
		{
			if (bParam1)
			{
				func_4(unk_0xA19140A5C42D8715(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_491(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_254())
			{
				func_4(unk_0xA19140A5C42D8715(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x22C775856F4633CA(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0xA19140A5C42D8715())
		{
			iVar1 = 1;
		}
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_258(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0xA19140A5C42D8715())
	{
		iVar0 = 1;
	}
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_106070.f_18942++;
			func_261("DARTS_STAT_NUM_BULLSEYES", Global_106070.f_18942);
			break;
		
		case 1:
			Global_106070.f_18942.f_1++;
			func_261("DARTS_STAT_NUM_180S", Global_106070.f_18942.f_1);
			break;
		
		case 2:
			Global_106070.f_18942.f_2++;
			func_261("DARTS_STAT_NUM_WINS", Global_106070.f_18942.f_2);
			break;
		
		case 3:
			Global_106070.f_18942.f_3++;
			func_261("DARTS_STAT_NUM_LOSS", Global_106070.f_18942.f_3);
			break;
		
		case 4:
			Global_106070.f_18942.f_4++;
			func_261("DARTS_STAT_DARTS_THROWN", Global_106070.f_18942.f_4);
			break;
		
		case 5:
			Global_106070.f_18942.f_5++;
			func_261("DARTS_STAT_NUM_GAMES", Global_106070.f_18942.f_5);
			break;
		
		case 7:
			Global_106070.f_18942.f_7 = (to_float(Global_106070.f_18942.f_2) / to_float(Global_106070.f_18942.f_5));
			break;
		
		case 8:
			Global_106070.f_18942.f_8 = (to_float(Global_106070.f_18942.f_4) / to_float(Global_106070.f_18942.f_5));
			break;
	}
}

void func_261(char* sParam0, var uParam1)
{
}

void func_262(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_260(5);
	unk_0xDF4B3D0EF01223F1();
	unk_0x135C61E339DABBAC(1);
	if (unk_0x2F8EAF18929E1E59(func_409(2)))
	{
		unk_0x5AD7D03C214BDA88(func_409(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_249();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_185 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_260(2);
		iLocal_106[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_260(3);
		iLocal_106[9]++;
	}
	func_260(7);
	func_429(&(uParam0->f_254));
	if (func_264(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_263(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_106[3]++;
			iLocal_203 = 0;
		}
		else
		{
			iLocal_106[5]++;
			iLocal_203 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0x8969D02DEDC106D2(func_409(3));
	iLocal_182 = 1;
	uParam0->f_428 = 0;
	iLocal_54 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_263(bool bParam0)
{
	char* sVar0;
	
	unk_0x789152CB302E8726(0);
	switch (func_86())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xBC3BAC0111108F4F(sVar0);
}

int func_264(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_106[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_265(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	
	vVar3 = { uParam0->f_8 };
	vVar3.x = (vVar3.x + 0.0041f);
	vVar3.z = (vVar3.z + 0.0002f);
	fVar1 = unk_0x772D91F28C9D2EDC(0f, 1f, vVar3.x, vVar3.z);
	fVar0 = func_266(vVar3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0x7A15C6C664F7334E(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0x7A15C6C664F7334E(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar5 = (iLocal_33[iVar4] * uParam0->f_21);
				uParam0->f_20 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

float func_266(vector3 vParam0)
{
	return sqrt(((vParam0.x * vParam0.x) + (vParam0.z * vParam0.z)));
}

int func_267(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_268(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_269("Darts", "Dart_Reticules", &Local_39, 1, 0, 4, 0);
	}
	fVar2 = unk_0xDE089748C4C76C96();
	vVar1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - vVar1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		vVar0 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_34), uParam0->f_11.f_2) };
		unk_0x4299736016AECE26(*uParam0, vVar0, 1, 0, 0, 1);
		return 1;
	}
	vVar0 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_34), uParam0->f_2.f_2) };
	unk_0x4299736016AECE26(*uParam0, vVar0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar2));
	unk_0x76D3D51F5F66367F(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0xDC5D81351D6A4DDB(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_269(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_280(&Var0);
			break;
		
		case 1:
			func_279(&Var0);
			break;
		
		case 5:
			func_278(&Var0);
			break;
		
		case 6:
			func_277(&Var0);
			break;
		
		case 7:
			func_276(&Var0);
			break;
		
		case 8:
			func_275(&Var0);
			break;
		
		case 9:
			func_274(&Var0);
			break;
	}
	if (func_272())
	{
		unk_0x0A74F1E9CF777638(iParam5);
		if (iParam3 == 1)
		{
			unk_0xE56EDA9982C42132(sParam0, sParam1, func_271(Var0), func_270(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xE56EDA9982C42132(sParam0, sParam1, func_271(Var0), func_270(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x0A74F1E9CF777638(4);
	}
}

float func_270(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_271(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_272()
{
	if (func_273())
	{
		return 1;
	}
	if (unk_0x71364F510A1CB69F())
	{
		return 0;
	}
	if (unk_0x607776744A243309() || unk_0x3BE8B7AEED1A3971())
	{
		return 0;
	}
	if (unk_0x35ADB0B156EC2F45())
	{
		return 0;
	}
	return 1;
}

bool func_273()
{
	return Global_1312438;
}

void func_274(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_275(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_276(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_277(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_278(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_279(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_280(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_281(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = unk_0xF59B9063EDAC7451(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0xF59B9063EDAC7451(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0x22C775856F4633CA(0, 100);
		iVar6 = unk_0x22C775856F4633CA(func_283(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xF59B9063EDAC7451(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xF59B9063EDAC7451(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xF59B9063EDAC7451(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0xF59B9063EDAC7451(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xF59B9063EDAC7451(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0xF59B9063EDAC7451(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x22C775856F4633CA(0, 100);
		iVar6 = unk_0x22C775856F4633CA(func_283(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xF59B9063EDAC7451(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xF59B9063EDAC7451(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xF59B9063EDAC7451(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0xF59B9063EDAC7451(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xF59B9063EDAC7451(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0xF59B9063EDAC7451(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (sin(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (cos(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_282(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_282(uParam0);
		*uParam0 = unk_0xFCFC8CC5FF74580D(uParam0->f_1, vLocal_40, 0, false, 0);
		fVar1 = unk_0xF59B9063EDAC7451(0f, 90f);
		vVar7 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, vLocal_41) };
		vVar8 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
		fVar2 = unk_0x0C1B8F3F6EFDC58B((vVar7.x - vVar8.x), (vVar7.y - vVar8.y));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0x76D3D51F5F66367F(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { vLocal_41 };
		*uParam2 = 3;
		unk_0x6020229E34827A69(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_282(var uParam0)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	vVar0 = { vLocal_41 - uParam0->f_8 };
	fVar1 = vmag(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = unk_0x0C1B8F3F6EFDC58B(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar2 - 180f);
	fVar3 = (unk_0xCEFE9553BEB9BA1E(uParam0->f_17.f_2) * fVar4);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar3);
	vVar0 = { vLocal_41 - uParam0->f_11 };
	fVar1 = vmag(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
}

int func_283(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_284(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_254())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_285(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 100);
	if (iVar0 < 33)
	{
		func_4(iParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_286(int iParam0)
{
	func_287(iParam0, 0f);
}

void func_287(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(unk_0x05EFB6A616B6FADE(*iParam0, 4)) + fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_288(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_52)
			{
				if (timerb() > 50)
				{
					iLocal_53 = 0;
					iLocal_54 = 0;
					iLocal_56 = 0;
					if (func_297(uParam0, uParam1, 0))
					{
						unk_0x6020229E34827A69(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0xDF0ADAD7E584090D(2, 223) && iLocal_56) && !bParam4)
				{
					iLocal_53 = 1;
					iLocal_54 = 1;
					if (!iLocal_55)
					{
						func_296(uParam0, *uParam2);
						iLocal_55 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_295();
						}
						func_294(uParam0, iParam6);
						func_293(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0xF59B9063EDAC7451(0.02f, 0.1f);
						iVar1 = unk_0x22C775856F4633CA(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = unk_0xF59B9063EDAC7451(0.02f, 0.1f);
						iVar1 = unk_0x22C775856F4633CA(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { vLocal_41 };
						iLocal_53 = 1;
						iLocal_54 = 1;
					}
					if (iLocal_53 && iLocal_54)
					{
						if (!iLocal_52)
						{
							unk_0x4F93066CECE72793();
							iLocal_52 = 1;
							settimerb(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_52)
			{
				func_269("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
				if (timerb() > 25)
				{
					if (func_297(uParam0, uParam1, 1))
					{
						unk_0x6020229E34827A69(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!func_289(uParam0))
			{
				if (!iLocal_55)
				{
					func_296(uParam0, *uParam2);
				}
				else
				{
					func_295();
					func_294(uParam0, iParam6);
					func_293(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_52)
			{
				iLocal_52 = 1;
				settimerb(0);
			}
			break;
	}
	return 0;
}

int func_289(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x418992ECF9808661(2, 220);
	fVar2 = unk_0x418992ECF9808661(2, 221);
	iLocal_91 = round(fVar2);
	switch (iLocal_90)
	{
		case 0:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0xFD34717937104F1C();
				iLocal_90 = 1;
			}
			if (iLocal_91 < -100)
			{
				iLocal_96 = round(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0xFD34717937104F1C();
			}
			else if ((iLocal_91 < 120 && iLocal_91 > -120) && (unk_0xFD34717937104F1C() - iLocal_92) > 500)
			{
				iLocal_90 = 0;
			}
			else if (iLocal_91 < -100)
			{
				iLocal_93 = unk_0xFD34717937104F1C();
				if ((iLocal_93 - iLocal_92) < 500)
				{
					iLocal_96 = round(fVar1);
					iLocal_94 = (iLocal_93 - iLocal_92);
					iLocal_90 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_94 > iLocal_95)
			{
				if (iLocal_94 > 100 && iLocal_94 < 150)
				{
					fLocal_99 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
				else
				{
					fLocal_98 = (to_float(iLocal_95) / to_float(iLocal_94));
					fLocal_99 = ((1f - fLocal_98) * fLocal_102);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
			}
			else
			{
				fLocal_99 = 0f;
			}
			if (iLocal_96 > 7)
			{
				fLocal_100 = (to_float(iLocal_96) / fLocal_105);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 + fLocal_101);
			}
			else if (iLocal_96 < -7)
			{
				fLocal_100 = (to_float(iLocal_96) / fLocal_104);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 - fLocal_101);
			}
			else
			{
				fLocal_101 = 0f;
			}
			if (fLocal_99 < 0.066477f && fLocal_101 == 0f)
			{
				func_292();
			}
			else if (fLocal_99 <= 0.066477f && fLocal_101 < 0.06f)
			{
				func_291();
			}
			else
			{
				func_290();
			}
			iVar0 = 1;
			iLocal_90 = 0;
			break;
	}
	return iVar0;
}

void func_290()
{
	Local_39.f_4 = 210;
	Local_39.f_5 = 23;
	Local_39.f_6 = 19;
}

void func_291()
{
	Local_39.f_4 = 183;
	Local_39.f_5 = 137;
	Local_39.f_6 = 0;
}

void func_292()
{
	Local_39.f_4 = 16;
	Local_39.f_5 = 184;
	Local_39.f_6 = 10;
}

void func_293(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		vVar0 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	}
	unk_0x36A24DCE1A72E2C1(vVar0, &Local_38, &(Local_38.f_1));
	if ((unk_0xFD34717937104F1C() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_49)
		{
			func_269("Darts", "Dart_Reticules_Zoomed", &Local_38, 1, 0, 4, 0);
		}
		else
		{
			func_269("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
		}
		if (!iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
}

void func_294(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = unk_0xB641B72602719CC8(2, 218);
	fVar4 = unk_0xB641B72602719CC8(2, 219);
	fVar5 = unk_0x418992ECF9808661(2, 220);
	fVar6 = unk_0x418992ECF9808661(2, 221);
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (unk_0x69C0BB7D03EE045D(fVar5) > unk_0x69C0BB7D03EE045D(fVar3) || unk_0x69C0BB7D03EE045D(fVar6) > unk_0x69C0BB7D03EE045D(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0x41F89DFFD655D8E0())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x8300DAA4A7C3C9F8())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0xD73B1037F6BD4B90(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (unk_0x0B9F814BC8D14042(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_47 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_47 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_47 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_47 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_47 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_47 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_47 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_47 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0xF59B9063EDAC7451((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0xF59B9063EDAC7451((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xF59B9063EDAC7451((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0xF59B9063EDAC7451((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_47 = 0.5f;
		if (iLocal_90 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = unk_0xF59B9063EDAC7451((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xF59B9063EDAC7451((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xF59B9063EDAC7451((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xF59B9063EDAC7451((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_295()
{
	if (unk_0xD73B1037F6BD4B90(2, 227))
	{
		fLocal_47 = 0.3f;
	}
	else
	{
		fLocal_47 = 0.1f;
	}
	if (unk_0xD73B1037F6BD4B90(2, 229))
	{
		if (bLocal_49)
		{
			if (timera() > iLocal_97)
			{
				fLocal_43 = fLocal_45;
				fLocal_44 = fLocal_46;
				fLocal_47 = 0.1f;
				bLocal_49 = false;
			}
		}
		else if (iLocal_48 < 1)
		{
			fLocal_43 = 0.03f;
			fLocal_44 = 0.05f;
			fLocal_47 = 0.1f;
			settimera(0);
			bLocal_49 = true;
			iLocal_48++;
		}
		else if ((((((!func_298("DARTS_FST_HLP") && !func_298("DARTS_AIM_HLP")) && !func_298("DARTS_CLOCK")) && !func_298("DARTS_STD_HLP")) && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B")) && !iLocal_50)
		{
			iLocal_50 = 1;
			if (!unk_0x05EFB6A616B6FADE(Global_106031, 1))
			{
				func_413("DARTS_SHT_USE", -1);
				unk_0x2BCFB39E86340DAA(&Global_106031, 1);
			}
		}
	}
	else if (bLocal_49)
	{
		fLocal_43 = fLocal_45;
		fLocal_44 = fLocal_46;
		fLocal_47 = 0.1f;
		bLocal_49 = false;
	}
}

void func_296(var uParam0, struct<4> Param1, var uParam2, var uParam3)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	vVar0.x = (vVar0.x + unk_0xF59B9063EDAC7451(-0.1f, 0.1f));
	vVar0.z = (vVar0.z + unk_0xF59B9063EDAC7451(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + vVar0 };
	uParam0->f_2 = { vLocal_41 };
}

int func_297(var uParam0, var uParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (unk_0xDC5D81351D6A4DDB(*uParam0))
	{
		unk_0x4299736016AECE26(*uParam0, vLocal_40, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0xFCFC8CC5FF74580D(uParam0->f_1, vLocal_40, 0, false, 0);
	}
	bLocal_49 = false;
	fLocal_47 = 0.1f;
	fLocal_43 = fLocal_45;
	fLocal_44 = fLocal_46;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_282(uParam0);
	fVar4 = unk_0xF59B9063EDAC7451(0f, 90f);
	vVar1 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, vLocal_41) };
	vVar2 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	fVar5 = unk_0x0C1B8F3F6EFDC58B((vVar1.x - vVar2.x), (vVar1.y - vVar2.y));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_17 = { fVar3, fVar4, fVar5 };
	unk_0x76D3D51F5F66367F(*uParam0, uParam0->f_17, 0, 1);
	iLocal_53 = 0;
	iLocal_55 = 0;
	if (bParam2)
	{
		func_269("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
	}
	vVar0 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
	unk_0x36A24DCE1A72E2C1(vVar0, &Local_39, &(Local_39.f_1));
	return 1;
}

int func_298(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_299(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_106031, 9))
		{
			if ((!func_298("DARTS_SHT_USE") && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B"))
			{
				func_413("DARTS_AIM_HLP", -1);
				unk_0x2BCFB39E86340DAA(&Global_106031, 9);
			}
		}
		else if (iParam1 && !unk_0x05EFB6A616B6FADE(Global_106031, 7))
		{
			if ((!func_298("DARTS_AIM_HLP") && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B"))
			{
				func_413("DARTS_CLOCK", -1);
				unk_0x2BCFB39E86340DAA(&Global_106031, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_106031, 8))
		{
			if ((!func_298("DARTS_SHT_USE") && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B"))
			{
				func_413("DARTS_STD_HLP", -1);
				unk_0x2BCFB39E86340DAA(&Global_106031, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_51 && !func_298("DARTS_SHT_USE")) && !func_298("DARTS_INSTR_W")) && !func_298("DARTS_INSTR_B"))
		{
			if (!unk_0x05EFB6A616B6FADE(Global_106031, 2))
			{
				func_413("DARTS_FST_HLP", -1);
				unk_0x2BCFB39E86340DAA(&Global_106031, 2);
			}
			iLocal_51 = 1;
		}
	}
}

int func_300(int iParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	
	switch (*uParam2)
	{
		case 0:
			vVar0 = { func_303(iParam0) };
			*uParam3 = { unk_0x3201284584C7CD83(*uParam1, vVar0) };
			func_302(*uParam3);
			settimerb(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (timerb() > 3000 || unk_0xDF0ADAD7E584090D(2, 201))
			{
				func_301();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_301()
{
	unk_0xD21CD2A6F93F44A6(iLocal_75, iLocal_87, 2000, 1, 1);
	unk_0x77F0486CE0E598D5(iLocal_87, 0);
}

void func_302(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0 = { -5.5606f, -0.0106f, -131.6781f };
	iLocal_87 = unk_0x74677C414DD7F53C(26379945, vParam0, vVar0, 65f, 0, 2);
	unk_0xD21CD2A6F93F44A6(iLocal_87, iLocal_75, 2000, 1, 1);
}

Vector3 func_303(int iParam0)
{
	float fVar0;
	vector3 vVar1;
	
	if (iParam0 == 50)
	{
		vVar1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_306(iParam0);
		vVar1.y = -0.5f;
		vVar1.x = func_305(fVar0);
		vVar1.z = func_304(fVar0);
	}
	return vVar1;
}

float func_304(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (cos(fParam0) * fVar0);
	return fVar1;
}

float func_305(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (sin(fParam0) * fVar0);
	return fVar1;
}

var func_306(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_307(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0xD73B1037F6BD4B90(2, 228))
			{
				func_314(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0xD73B1037F6BD4B90(2, 228))
			{
				if (!unk_0x4EFA8CFA30651DD4(iLocal_84))
				{
					func_312();
					func_311(&iLocal_208, vLocal_239, vLocal_240, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0xD73B1037F6BD4B90(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_308(&iLocal_208, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_314(0);
			func_492();
			if (unk_0x37B568B777BC65F9(iLocal_208))
			{
				if (unk_0xC3553172354FFB69(iLocal_208))
				{
					unk_0x930701157A4B9374(iLocal_208, false);
				}
				unk_0x77F0486CE0E598D5(iLocal_208, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_308(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	unk_0xDB3170D9CA83AF72(2);
	func_310(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x8300DAA4A7C3C9F8())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x0B9F814BC8D14042(2))
	{
		fVar1 = unk_0xB641B72602719CC8(2, 239);
		fVar2 = unk_0xB641B72602719CC8(2, 240);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -round(((fVar3 * fParam5) * 127f));
			iVar0[3] = -round(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = round(((unk_0xB641B72602719CC8(2, 290) * fParam5) * 127f));
			iVar0[3] = round(((unk_0xB641B72602719CC8(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_309((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_309((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0xFD34717937104F1C())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x0B9F814BC8D14042(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0xFD34717937104F1C() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * timestep());
	vVar6 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x0B9F814BC8D14042(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = vVar6.x;
		uParam0->f_14.f_1 = vVar6.y;
		uParam0->f_14.f_2 = vVar6.z;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((vVar6.x - uParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((vVar6.y - uParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((vVar6.z - uParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
	}
	if (unk_0x0B9F814BC8D14042(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x0B9F814BC8D14042(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0x53E955948D35BDB5(0, iVar7))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0xFD34717937104F1C() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x53E955948D35BDB5(0, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0xFD34717937104F1C() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x55D3DD553C0E44E6(2, 207);
			iVar0[3] = unk_0x55D3DD553C0E44E6(2, 208);
			if (bParam3)
			{
				if (to_float(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar5));
	unk_0x1D7183E3760DB4E5(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x37B568B777BC65F9(*uParam0))
	{
		if (unk_0xC3553172354FFB69(*uParam0))
		{
			if (unk_0xD8AE52C8418BED79(*uParam0))
			{
				unk_0x0249A1735D628158();
			}
		}
	}
}

int func_309(int iParam0, int iParam1, int iParam2)
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

void func_310(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_311(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = unk_0x57FC10C74CC15F22("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x930701157A4B9374(*uParam0, true);
	unk_0x1D7183E3760DB4E5(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0xBC1542DDC31676C2(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0x6F05C2B0A1DB4CAA(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		unk_0x9743219F54B6FCD1(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_312()
{
	if (iLocal_168)
	{
		return;
	}
	func_313();
	unk_0xD427B2DF0DC98BBA("Darts Zoom");
	iLocal_168 = 1;
}

void func_313()
{
	if (iLocal_167 || iLocal_168)
	{
		unk_0xFFC237573AEB000B();
		iLocal_167 = 0;
		iLocal_168 = 0;
	}
}

void func_314(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD21CD2A6F93F44A6(iLocal_84, iLocal_75, 1000, 1, 1);
	}
	else
	{
		unk_0xD21CD2A6F93F44A6(iLocal_75, iLocal_84, 1000, 1, 1);
	}
}

void func_315(var uParam0)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_236(&(uParam0->f_62), func_317(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_231(&(uParam0->f_62), 0))
			{
				func_316(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_316(var uParam0)
{
	uParam0->f_8 = 0;
	func_416(&(uParam0->f_2));
	func_416(&(uParam0->f_5));
}

char* func_317(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_318(var uParam0)
{
	if (!iLocal_54)
	{
		if (!unk_0xD73B1037F6BD4B90(2, 201))
		{
			iLocal_54 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0xD73B1037F6BD4B90(2, 201) || unk_0xDF0ADAD7E584090D(2, 223)) && iLocal_54)
		{
			*uParam0 = 6;
		}
	}
}

void func_319(var uParam0, int iParam1)
{
	if (!unk_0xD1ABB20CFF127CCC())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_48 > 0)
			{
				func_115(&(uParam0->f_509), 0, 0, 0, 1);
				func_114(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_114(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_320(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_114(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_114(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_114(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_111(&(uParam0->f_509), 1);
				func_326(&(uParam0->f_666), 8, 0);
				func_326(&(uParam0->f_666), 16, 0);
				func_326(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_48 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_115(&(uParam0->f_509), 0, 0, 0, 1);
				func_114(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_114(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_320(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_114(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_114(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_111(&(uParam0->f_509), 1);
				func_326(&(uParam0->f_666), 8, 0);
				func_326(&(uParam0->f_666), 16, 0);
				func_326(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_115(&(uParam0->f_509), 1, 0, 0, 1);
			func_114(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_114(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_111(&(uParam0->f_509), 1);
			func_326(&(uParam0->f_666), 16, 1);
			func_326(&(uParam0->f_666), 8, 0);
			func_326(&(uParam0->f_666), 15, 0);
			func_326(&(uParam0->f_666), 17, 0);
			func_326(&(uParam0->f_666), 23, 0);
		}
		unk_0xCD282E433560A509(76, 66);
		unk_0xE4C207949B93A9C7(0f, 0f, 0f, 0f);
		unk_0x0DA2C67B1175034B();
		func_194(func_110(func_3(&(uParam0->f_666), 16), 1, 2));
		func_117(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_326(&(uParam0->f_666), 15, 0);
		func_326(&(uParam0->f_666), 16, 0);
		func_326(&(uParam0->f_666), 23, 0);
	}
}

int func_320(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		unk_0x2BCFB39E86340DAA(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_321(var uParam0)
{
	if (!unk_0xD1ABB20CFF127CCC())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_115(&(uParam0->f_509), 0, 0, 0, 1);
			func_320(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_114(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_111(&(uParam0->f_509), 1);
			func_326(&(uParam0->f_666), 23, 1);
			func_326(&(uParam0->f_666), 8, 0);
			func_326(&(uParam0->f_666), 16, 0);
			func_326(&(uParam0->f_666), 15, 0);
			func_326(&(uParam0->f_666), 17, 0);
		}
		func_117(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_326(&(uParam0->f_666), 15, 0);
		func_326(&(uParam0->f_666), 16, 0);
		func_326(&(uParam0->f_666), 23, 0);
		func_326(&(uParam0->f_666), 17, 0);
	}
}

void func_322(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_54)
	{
		if (!unk_0xD73B1037F6BD4B90(2, 201) && !unk_0xD73B1037F6BD4B90(2, 202))
		{
			iLocal_54 = 1;
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_54 && iLocal_53 == 0)
			{
				iLocal_54 = 0;
				bVar0 = false;
				bLocal_179 = false;
				unk_0x135C61E339DABBAC(1);
			}
		}
		if (unk_0x4E6A396CA4DB68F6(2, 235) || unk_0x63247BC34C80F88C(2, 235))
		{
			if (!bLocal_179)
			{
				*uParam0 = 14;
				bLocal_179 = true;
				unk_0x135C61E339DABBAC(1);
			}
		}
		else if (func_298("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_179 = false;
		}
	}
}

void func_323(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_324(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_325(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_326(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(iParam0, iParam1);
	}
	else
	{
		unk_0xFA57C719261AA55D(iParam0, iParam1);
	}
}

int func_327(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_106070.f_18942.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_239(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_238(uParam1, iVar0);
		func_244(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_195 = 0;
	iParam0->f_436 = 0;
	iLocal_48 = 0;
	iLocal_172 = 1;
	iLocal_173 = 0;
	iLocal_175 = 0;
	iLocal_50 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_181 = 0;
	func_326(&(uParam2->f_666), 6, 0);
	func_334();
	func_332(uParam2);
	if (iParam0->f_457)
	{
		func_329(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_329(bool bParam0)
{
	unk_0xDC374DA4DC566237(false);
	if (unk_0xC3553172354FFB69(iLocal_77))
	{
		unk_0x930701157A4B9374(iLocal_77, false);
	}
	if (unk_0xC3553172354FFB69(iLocal_81))
	{
		unk_0x930701157A4B9374(iLocal_81, false);
	}
	if (unk_0x71364F510A1CB69F())
	{
		func_331();
		unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
		unk_0x70C1F5AA59767FE6(500);
	}
	func_330(bParam0);
}

void func_330(bool bParam0)
{
	if (bParam0)
	{
		unk_0x930701157A4B9374(iLocal_75, true);
	}
}

void func_331()
{
	unk_0x930701157A4B9374(iLocal_77, true);
}

void func_332(var uParam0)
{
	func_333();
	uParam0->f_670 = 3;
	func_326(&(uParam0->f_666), 15, 0);
	func_326(&(uParam0->f_666), 16, 0);
	func_326(&(uParam0->f_666), 17, 0);
}

void func_333()
{
	int iVar0;
	
	Local_108.f_66 = -1;
	Local_108.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_108.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_5 = 0;
		Local_108.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_108.f_5 = 0;
	Local_108.f_5.f_1 = -1f;
	Local_108.f_5.f_2 = 0;
	Local_108 = 0;
	Local_108.f_1 = 0;
}

void func_334()
{
	settimera(0);
	iLocal_54 = 0;
	unk_0xDF4B3D0EF01223F1();
}

void func_335(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_337(&iVar0, 0, iParam1))
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
		func_336(&(Global_17367.f_5658[iVar0 /*10*/]));
		Global_17367.f_5719[iVar0] = 0;
	}
	else
	{
		Global_17367.f_5719[iVar0] = 0;
	}
}

void func_336(int iParam0)
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

int func_337(var uParam0, bool bParam1, int iParam2)
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

void func_338(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x31A9E530D137684F(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x380580A1A1667F69(iParam2);
	unk_0x380580A1A1667F69(iParam3);
	unk_0x380580A1A1667F69(iParam4);
	unk_0x271C1332F482646C();
}

int func_339(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0xD481A812073CCF02(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_396(0, 0, 0, 1);
		func_395(0, -1, 1);
		if (func_394())
		{
			if (Global_4267062 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4267062;
				func_393(uParam0->f_660, 1, 1);
				unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (unk_0x445EC9E7EACB710E(sVar0))
				{
					func_392(sVar0, 0, 0);
				}
			}
			Global_4267063 = unk_0xFD34717937104F1C() + 300;
		}
		else if (func_391() && unk_0xFD34717937104F1C() > Global_4267063)
		{
			if (Global_4267062 == uParam0->f_660)
			{
				iVar2 = func_390(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4267063 = unk_0xFD34717937104F1C() + 300;
		}
		if (func_389(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_393(uParam0->f_660, 1, 1);
			unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x445EC9E7EACB710E(sVar0))
			{
				func_392(sVar0, 0, 0);
			}
		}
		if (func_388(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_393(uParam0->f_660, 1, 1);
			unk_0xE11F00B4AC919F45(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x445EC9E7EACB710E(sVar0))
			{
				func_392(sVar0, 0, 0);
			}
		}
		if (func_387(&(uParam0->f_633)) || func_386(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			unk_0xE11F00B4AC919F45(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_368(uParam0);
		}
		if (func_367(&(uParam0->f_636)) || func_365(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			unk_0xE11F00B4AC919F45(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_368(uParam0);
		}
		if ((unk_0xDF0ADAD7E584090D(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_364(uParam0->f_662 + 1, 1);
			*uParam2 = func_364(uParam0->f_664 + 1, 0);
			unk_0xE11F00B4AC919F45(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_342(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (unk_0x4E6A396CA4DB68F6(2, 202) || func_341())
		{
			func_340(0, 0);
			func_326(&(uParam0->f_666), 8, 0);
			func_326(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x4E6A396CA4DB68F6(2, 201))
		{
			func_36(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x4E6A396CA4DB68F6(2, 202))
		{
			func_368(uParam0);
			func_326(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_340(bool bParam0, bool bParam1)
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

int func_341()
{
	if (unk_0x0B9F814BC8D14042(2))
	{
		if (unk_0xDF0ADAD7E584090D(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_342(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_337(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_361(0, bParam6))
	{
		return;
	}
	unk_0xCD282E433560A509(76, 84);
	unk_0xE4C207949B93A9C7(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17367)
	{
		if (func_18(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_20())
		{
			iVar59 = round((to_float(iVar60) * fVar62));
		}
		fVar63 = (to_float(iVar59) / to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_20())
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
					StringCopy(&cVar64, func_24(29), 64);
					StringCopy(&cVar65, func_21(29, 1), 64);
					if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_6863[29 /*16*/])) == -1487683087)
					{
						func_360(Global_17364, Global_17365, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
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
				func_360(Global_17364, (Global_17365 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17365 + fVar56) + 0.034722f) + 0f);
				if (unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_1)) != 0)
				{
					func_359();
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
						func_359();
						func_357((((Global_17364 + fParam5) - 0.00390625f) - func_358("CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731)), ((Global_17365 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731);
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
				func_360(Global_17364, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_18(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_356(fVar40);
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
				func_360(Global_17364, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_356(fVar40);
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
						iVar17++;
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
					func_18(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					func_355(Global_17367.f_4766, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xE56EDA9982C42132(func_24(Global_17367.f_4766), func_21(Global_17367.f_4766, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_18(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_356(fVar40);
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
				func_360(Global_17364, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_356(fVar40);
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
					func_18(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_355(Global_4266986.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xE56EDA9982C42132(func_24(Global_4266986.f_67), func_21(Global_4266986.f_67, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_350(iVar59, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
					func_348(bVar32, 1, 0, 0, 0, 0, 0);
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
												func_348(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
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
													if (func_18(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_348(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_347(bVar32);
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
													if (func_18(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_18(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_355(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17367.f_5081[iVar8] == 2)
															{
																unk_0xE56EDA9982C42132(func_24(Global_17367.f_4433[(iVar22 + iVar28)]), func_21(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xE56EDA9982C42132(func_24(Global_17367.f_4433[(iVar22 + iVar28)]), func_21(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
												if (func_346() && unk_0x8B1574454E8C2421(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_348(0, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
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
													if (func_18(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_18(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_355(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17367.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xE56EDA9982C42132(func_24(Global_17367.f_4433[(iVar22 + iVar14)]), func_21(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (Global_17364 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17367.f_5081[iVar8] == 2)
															{
																unk_0xE56EDA9982C42132(func_24(Global_17367.f_4433[(iVar22 + iVar14)]), func_21(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xE56EDA9982C42132(func_24(Global_17367.f_4433[(iVar22 + iVar14)]), func_21(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_348(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_347(bVar32);
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
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_348(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
										func_345((fVar34 + fVar40), fVar35, "NUMBER", Global_17367.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17367.f_5727)
										{
											func_348(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_347(bVar32);
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
											if (func_18(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_355(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xE56EDA9982C42132(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_348(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar54, 0, 0, 0);
										func_344((fVar34 + fVar40), fVar35, "NUMBER", Global_17367.f_4175[iVar21], Global_17367.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_18(Global_17367.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
												if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17367.f_5081[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_355(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xE56EDA9982C42132(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_355(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xE56EDA9982C42132(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_18(Global_17367.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_355(Global_17367.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xE56EDA9982C42132(func_24(Global_17367.f_4433[iVar22]), func_21(Global_17367.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_343(Global_17367.f_4433[iVar22])), (fVar37 * func_343(Global_17367.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_38(0);
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
		func_194(1);
	}
	unk_0x0DA2C67B1175034B();
}

float func_343(int iParam0)
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

void func_344(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0x1757EE80C206FA5E(fParam3, iParam4);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, 0);
}

void func_345(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, iParam4);
}

bool func_346()
{
	return unk_0x05BEBC245254F6F2(-1762644250);
}

void func_347(bool bParam0)
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

void func_348(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_349(Global_17367.f_6006[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_349(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_350(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_337(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_361(bParam4, bParam8))
	{
		return;
	}
	if (func_353())
	{
		return;
	}
	if (unk_0x2B21DC45DEAA4B80())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_351(unk_0xD4E735F4B6A956AC(), 0))
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
					func_13(&(Global_17367.f_4769[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xFEB6EEC0545AF7AA(&(Global_17367.f_4962[iVar2 /*4*/])) == unk_0xFEB6EEC0545AF7AA("PREV"))
					{
						func_13(&(Global_17367.f_4769[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17367.f_5011[iVar1] == -1)
					{
						func_12(&(Global_17367.f_4962[iVar1 /*4*/]));
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
				func_13(&Global_4266986);
				if (Global_4266986.f_20 == -1)
				{
					func_12(&(Global_4266986.f_16));
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

bool func_351(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_352(-1, 0) == 8;
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

int func_352(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
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

int func_353()
{
	vector3 vVar0;
	
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	if (func_354())
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

int func_354()
{
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_355(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_356(float fParam0)
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

void func_357(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C25BC565D364568(sParam2);
	unk_0xCDA87E1DA52C8C9D(iParam3);
	unk_0xCDA87E1DA52C8C9D(iParam4);
	unk_0xB435CE12BEF0DBF7(fParam0, fParam1, 0);
}

float func_358(char* sParam0, int iParam1, int iParam2)
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
	func_359();
	unk_0xC42A779360572EA7(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	unk_0xCDA87E1DA52C8C9D(iParam2);
	return unk_0x4E0DD18900B7ACAE(1);
}

void func_359()
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

void func_360(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xFF35427AF9343886((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_361(bool bParam0, bool bParam1)
{
	if (Global_2437022.f_1889.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x3A83743561B4F70C() || (func_363(8, -1) && func_362() != 64)) || (unk_0x05724BB62A634BD8() != 0 && !bParam1)) || (unk_0x47C3DC461C758C29() && !bParam0)) || unk_0xBE079F709C76E132()) || Global_71465) || Global_17367.f_8090) || unk_0x4EAEDDFEDE3BEE19()) || Global_93284.f_1393)
	{
		return 0;
	}
	return 1;
}

int func_362()
{
	return Global_1312792;
}

bool func_363(int iParam0, int iParam1)
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

int func_364(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_365(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x0B9F814BC8D14042(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_390(0) == 1 && Global_4267062 == iParam1)
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

void func_366(int iParam0)
{
	if (!func_415(iParam0))
	{
		func_429(iParam0);
	}
}

int func_367(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x0B9F814BC8D14042(2))
	{
		fVar0 = unk_0x418992ECF9808661(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0xD73B1037F6BD4B90(2, 190)) || unk_0x1190AB7024CBD8CB(2, 190))
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

void func_368(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_340(0, 0);
	unk_0x1C828C4226A9FADF(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_385(uVar0, uVar1, uVar2, uVar3, 1);
	func_384(1, 2, 0, 0, 0);
	func_383(1, 2, 1, 1, 1);
	func_382(0, 1, 0, 0, 0);
	func_381("DARTS_TITLE");
	func_379(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_375(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_372(0, func_364(uParam0->f_662 + 1, 1), 0);
	func_375(1, "DARTS_SETS", 0, 1, 0, 0);
	func_372(1, func_364(uParam0->f_664 + 1, 0), 0);
	func_371(2, 141, 141, 1);
	func_375(2, "DARTS_START", 0, 1, 0, 0);
	func_370(0);
	func_393(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_392(func_109(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_369(201, "ITEM_SELECT", -1, 0);
	func_369(202, "IB_QUIT", -1, 0);
}

void func_369(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_370(int iParam0)
{
	Global_17367.f_5733 = iParam0;
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_17367.f_8087 = iParam3;
	Global_17367.f_8084[0] = iParam1;
	Global_17367.f_8084[1] = iParam2;
	Global_17367.f_8088 = iParam0;
}

void func_372(int iParam0, int iParam1, bool bParam2)
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
	if (Global_17367.f_5220 >= 256)
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
	if (iVar0 != 2)
	{
		while (Global_17367.f_5217 < 4 && iVar0 != 2)
		{
			Global_17367.f_5217++;
			iVar0 = Global_17367.f_5054[Global_17367.f_5217];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_17367.f_3918[Global_17367.f_5220] = iParam1;
	Global_17367.f_5220++;
	fVar1 = func_374("NUMBER", iParam1);
	if (Global_17367.f_5073[Global_17367.f_5217])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_17367.f_5066[Global_17367.f_5217])
	{
		Global_17367.f_5066[Global_17367.f_5217] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_373("NUMBER", iParam1);
		if (fVar4 > Global_17367.f_5740[iParam0])
		{
			Global_17367.f_5740[iParam0] = fVar4;
		}
	}
	unk_0x2BCFB39E86340DAA(&(Global_17367.f_5087[iParam0]), Global_17367.f_5217);
	Global_17367.f_5217++;
	Global_17367.f_5739 = 2;
}

float func_373(char* sParam0, int iParam1)
{
	if (!unk_0x445EC9E7EACB710E(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0xAC0B4B294E7DA73D(0.35f, 0);
}

float func_374(char* sParam0, int iParam1)
{
	if (!unk_0x445EC9E7EACB710E(sParam0))
	{
		return 0f;
	}
	func_348(1, 1, 0, 0, 0, 0, 0);
	unk_0xC42A779360572EA7(sParam0);
	unk_0xCDA87E1DA52C8C9D(iParam1);
	return unk_0x4E0DD18900B7ACAE(1);
}

void func_375(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_378(Global_17367.f_5216, 1);
	}
	else
	{
		func_378(Global_17367.f_5216, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_377(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
		if (Global_17367.f_5073[Global_17367.f_5217])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_376(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
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

float func_376(char* sParam0)
{
	if (!unk_0x445EC9E7EACB710E(sParam0))
	{
	}
	return unk_0xAC0B4B294E7DA73D(0.35f, 0);
}

float func_377(char* sParam0)
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
	func_348(0, 1, 0, 0, 0, 0, 0);
	unk_0xC42A779360572EA7(sParam0);
	return unk_0x4E0DD18900B7ACAE(1);
}

void func_378(int iParam0, bool bParam1)
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

void func_379(int iParam0, char* sParam1, char* sParam2)
{
	Global_17367 = iParam0;
	func_380(29, sParam1, sParam2);
}

void func_380(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17367.f_6014[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17367.f_6863[iParam0 /*16*/]), sParam2, 64);
}

void func_381(char* sParam0)
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

void func_382(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17367.f_5073[0] = iParam0;
	Global_17367.f_5073[1] = iParam1;
	Global_17367.f_5073[2] = iParam2;
	Global_17367.f_5073[3] = iParam3;
	Global_17367.f_5073[4] = iParam4;
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17367.f_5081[0] = iParam0;
	Global_17367.f_5081[1] = iParam1;
	Global_17367.f_5081[2] = iParam2;
	Global_17367.f_5081[3] = iParam3;
	Global_17367.f_5081[4] = iParam4;
}

void func_384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_385(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_17367.f_8061 = iParam4;
	Global_17367.f_8057 = uParam0;
	Global_17367.f_8058 = uParam1;
	Global_17367.f_8059 = uParam2;
	Global_17367.f_8060 = uParam3;
}

int func_386(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x0B9F814BC8D14042(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_390(0) == -1 && Global_4267062 == iParam1)
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

int func_387(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x0B9F814BC8D14042(2))
	{
		fVar0 = unk_0x418992ECF9808661(2, 218);
	}
	if (fVar0 < -0.8f || unk_0xD73B1037F6BD4B90(2, 189))
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

int func_388(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x0B9F814BC8D14042(2))
	{
		fVar0 = unk_0x418992ECF9808661(2, 219);
	}
	if (fVar0 > 0.8f || unk_0xD73B1037F6BD4B90(2, 187))
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

int func_389(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x0B9F814BC8D14042(2))
	{
		fVar0 = unk_0x418992ECF9808661(2, 219);
	}
	if (fVar0 < -0.8f || unk_0xD73B1037F6BD4B90(2, 188))
	{
		if (!func_415(iParam0))
		{
			func_366(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_429(iParam0);
			return 1;
		}
	}
	else if (func_415(iParam0))
	{
		func_416(iParam0);
	}
	return 0;
}

int func_390(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_17366);
	fVar1 = (Global_17367.f_5728 - (IntToFloat(Global_17367.f_5730) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0xCD282E433560A509(76, 84);
	unk_0xE4C207949B93A9C7(-0.05f, -0.05f, 0f, 0f);
	unk_0xCBE25B0074CBFC48(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xCBE25B0074CBFC48(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x0DA2C67B1175034B();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4267056 >= fVar0 && Global_4267056 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4267056 >= fVar0 && Global_4267056 < fVar4)
	{
		return -1;
	}
	if (Global_4267056 >= fVar4 && Global_4267056 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_391()
{
	if (unk_0x0B9F814BC8D14042(2))
	{
		return unk_0x1190AB7024CBD8CB(2, 237);
	}
	return 0;
}

void func_392(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17367.f_4690), sParam0, 16);
	Global_17367.f_4760 = 0;
	Global_17367.f_4761 = 0;
	Global_17367.f_4762 = 0;
	Global_17367.f_4763 = 0;
	Global_17367.f_4764 = iParam1;
	Global_17367.f_4765 = unk_0xFD34717937104F1C();
	Global_17367.f_4766 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17367.f_4694[iVar0] = 0;
		iVar0++;
	}
}

void func_393(int iParam0, bool bParam1, int iParam2)
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

int func_394()
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

int func_395(int iParam0, int iParam1, bool bParam2)
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

void func_396(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	func_398();
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
				func_397(0);
			}
			return;
		}
		if (((Global_4267056 >= fVar0 && Global_4267056 <= fVar2) && Global_4267057 >= (fVar3 + fVar6)) && Global_4267057 < (fVar3 + 0.034722f))
		{
			Global_4267062 = -3;
			if (bParam3)
			{
				func_397(0);
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
				func_360(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17366, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
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

void func_397(bool bParam0)
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
		func_360(fVar0, fVar1, Global_17366, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4267062 == -3)
	{
		func_360(fVar0, (fVar1 + fVar2), Global_17366, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x0DA2C67B1175034B();
}

void func_398()
{
	Global_4267058 = Global_4267056;
	Global_4267059 = Global_4267057;
	Global_4267056 = unk_0x8CBB8AEBE6D8962B(2, 239);
	Global_4267057 = unk_0x8CBB8AEBE6D8962B(2, 240);
	Global_4267060 = (Global_4267056 - Global_4267058);
	Global_4267061 = (Global_4267057 - Global_4267059);
}

float func_399(float fParam0)
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_400(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_340(0, 0);
	unk_0x1C828C4226A9FADF(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_385(uVar0, uVar1, uVar2, uVar3, 1);
	func_384(1, 2, 0, 0, 0);
	func_383(1, 2, 1, 1, 1);
	func_382(0, 1, 0, 0, 0);
	func_381("DARTS_TITLE");
	func_379(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_375(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_372(0, 1, 0);
	func_375(1, "DARTS_SETS", 0, 1, 0, 0);
	func_372(1, 1, 0);
	func_375(2, "DARTS_START", 0, 1, 0, 0);
	func_371(2, 141, 141, 1);
	func_370(0);
	func_393(0, 1, 1);
	func_392("DARTS_LEGD", 0, 0);
	func_401();
	func_369(201, "ITEM_SELECT", -1, 0);
	func_369(202, "IB_QUIT", -1, 0);
}

void func_401()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x57BA8F59E7F4F9BA(0.325f, 0.3f);
	}
}

int func_402(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_425() && unk_0xFD34717937104F1C() >= iLocal_196 + 1000) && *iParam0 != 8)
	{
		if (!unk_0x71364F510A1CB69F() && !unk_0x607776744A243309())
		{
			unk_0x9662BE461F9FDF9E(500);
		}
	}
	if (unk_0x71364F510A1CB69F() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_196 = unk_0xFD34717937104F1C();
						func_410(uParam1->f_1, uParam1->f_4, func_412(2), func_411(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_281(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_268(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_429(iParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_418(iParam5) > 1f && !func_298("DARTS_DOUBLE_T"))
					{
						func_413("DARTS_DOUBLE_T", -1);
					}
					if (func_418(iParam5) > 5f)
					{
						func_429(iParam5);
						unk_0x135C61E339DABBAC(1);
						func_404(uParam1->f_1, uParam1->f_4, func_412(3), func_411(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x4EFA8CFA30651DD4(iLocal_83))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_281(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_268(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_429(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_418(iParam5) > 1f && !func_298("DARTS_TRIPLE_T"))
					{
						func_413("DARTS_TRIPLE_T", -1);
					}
					if (func_418(iParam5) > 5f)
					{
						func_429(iParam5);
						unk_0x135C61E339DABBAC(1);
						func_410(uParam1->f_1, uParam1->f_4, func_412(4), func_411(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x4EFA8CFA30651DD4(iLocal_82))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_281(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_268(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0x7A15C6C664F7334E(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_429(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_418(iParam5) > 1f && !func_298("DARTS_BULL_T"))
					{
						func_413("DARTS_BULL_T", -1);
					}
					if (func_418(iParam5) > 5f)
					{
						func_429(iParam5);
						unk_0x135C61E339DABBAC(1);
						unk_0xE11F00B4AC919F45(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_404(uParam1->f_1, uParam1->f_4, func_412(5), func_411(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x4EFA8CFA30651DD4(iLocal_83) && !func_298("DARTS_DBL_WIN"))
			{
				func_413("DARTS_DBL_WIN", -1);
			}
			if (func_418(iParam5) > 6f)
			{
				func_429(iParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0xE11F00B4AC919F45(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0xD21CD2A6F93F44A6(iLocal_75, iLocal_83, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x4EFA8CFA30651DD4(iLocal_75))
			{
				iLocal_31 = 0;
				unk_0x135C61E339DABBAC(1);
				unk_0x4F93066CECE72793();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_403(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0x71364F510A1CB69F())
			{
				iLocal_31 = 0;
				unk_0x135C61E339DABBAC(1);
				unk_0x4F93066CECE72793();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_403(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x930701157A4B9374(iLocal_75, true);
				unk_0x70C1F5AA59767FE6(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_403(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		unk_0x4299736016AECE26(*iParam0, vVar0, 1, 0, 0, 1);
		unk_0xAA1FF14A8DC5C352(iParam0);
		unk_0xC0AC848E56940C34(iParam0);
	}
}

void func_404(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, int iParam4)
{
	unk_0x1E85E0D85AD1B2BB(iLocal_83);
	unk_0xF62A5A3CB8DB2402(iLocal_83, 35f);
	unk_0x057123F3A835FE47(iLocal_83, unk_0x2F230B37E9FFF23F(vParam0, fParam1, vParam2));
	unk_0xC831502E35848BE4(iLocal_83, Vector(fParam1, 0f, 0f) - vParam3, 2);
	unk_0xD21CD2A6F93F44A6(iLocal_83, iLocal_82, iParam4, 1, 1);
}

int func_405(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_415(&(uParam0->f_2)))
	{
		func_429(&(uParam0->f_2));
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
	if (func_7(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_416(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_406(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7)
{
	char* sVar0;
	
	sVar0 = func_407(iParam5);
	unk_0x31A9E530D137684F(*uParam0, "RESET_MOVIE");
	unk_0x271C1332F482646C();
	unk_0x31A9E530D137684F(*uParam0, sVar0);
	unk_0x390B339C943A8A54("STRING");
	unk_0xBA9FB571BCB6C1BD(iParam4);
	unk_0x4FDA9E6EF359F8A9(iParam1);
	unk_0xD481829E3E36543B();
	if (!unk_0x429D45A6C6520026(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0x380580A1A1667F69(100);
		unk_0x233A5B4A35140C6B(true);
	}
	unk_0x271C1332F482646C();
	if (bParam6)
	{
		unk_0x31A9E530D137684F(*uParam0, "TRANSITION_UP");
		unk_0xD8B5988E85F72BE5(fParam7);
		unk_0x271C1332F482646C();
	}
	func_429(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_408()
{
	unk_0x930701157A4B9374(iLocal_75, true);
	unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
	if (unk_0xC3553172354FFB69(iLocal_82))
	{
		unk_0x930701157A4B9374(iLocal_82, false);
	}
	if (unk_0xC3553172354FFB69(iLocal_77))
	{
		unk_0x930701157A4B9374(iLocal_77, false);
	}
	if (unk_0xC3553172354FFB69(iLocal_78))
	{
		unk_0x930701157A4B9374(iLocal_78, false);
	}
	if (unk_0xC3553172354FFB69(iLocal_79))
	{
		unk_0x930701157A4B9374(iLocal_79, false);
	}
	if (unk_0xC3553172354FFB69(iLocal_80))
	{
		unk_0x930701157A4B9374(iLocal_80, false);
	}
	if (unk_0xC3553172354FFB69(iLocal_81))
	{
		unk_0x930701157A4B9374(iLocal_81, false);
	}
}

char* func_409(int iParam0)
{
	if (iLocal_207 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_207 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_410(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, int iParam4, bool bParam5)
{
	unk_0x1E85E0D85AD1B2BB(iLocal_82);
	unk_0xF62A5A3CB8DB2402(iLocal_82, 35f);
	unk_0x057123F3A835FE47(iLocal_82, unk_0x2F230B37E9FFF23F(vParam0, fParam1, vParam2));
	unk_0xC831502E35848BE4(iLocal_82, Vector(fParam1, 0f, 0f) - vParam3, 2);
	if (bParam5)
	{
		unk_0x930701157A4B9374(iLocal_82, true);
	}
	else
	{
		unk_0xD21CD2A6F93F44A6(iLocal_82, iLocal_83, iParam4, 1, 1);
	}
}

Vector3 func_411(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_413(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

int func_414(int iParam0)
{
	if (!unk_0x7112137033807390(func_491(), 0))
	{
		func_4(func_491(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(iParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_415(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(*iParam0, 1);
}

void func_416(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_417(int iParam0, char* sParam1, int iParam2)
{
	unk_0xE85BD4A26C0DFACA(iParam0, sParam1, func_6(iParam2), 1);
}

float func_418(int iParam0)
{
	if (func_415(iParam0))
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

void func_419(int iParam0)
{
	if (!func_415(iParam0))
	{
		func_366(iParam0);
	}
	else
	{
		func_429(iParam0);
	}
}

void func_420()
{
	Global_14688 = 0;
	func_421();
}

void func_421()
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

void func_422(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (Global_14681)
	{
		func_424(0, 0);
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
	if (!func_423())
	{
		Global_14513.f_1 = 3;
	}
}

int func_423()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_424(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
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

int func_425()
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

int func_426(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC409B91AC4749F88();
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (!func_427(iVar0))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && unk_0x10E54C268D1B3FED(iVar0, unk_0xA19140A5C42D8715(), vLocal_169, 0, 1, 0))
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

int func_427(int iParam0)
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

void func_428(var uParam0, int iParam1)
{
	iParam1++;
	unk_0x31A9E530D137684F(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0x380580A1A1667F69(iParam1);
	unk_0x271C1332F482646C();
}

void func_429(int iParam0)
{
	func_430(iParam0, 0f);
}

void func_430(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(unk_0x05EFB6A616B6FADE(*iParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(iParam0, 1);
	unk_0xFA57C719261AA55D(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_431(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_432(var uParam0, char* sParam1, char* sParam2)
{
	unk_0x31A9E530D137684F(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(sParam1);
	func_34(sParam2);
	unk_0x271C1332F482646C();
}

void func_433(float fParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(func_491()) && !unk_0x4915F4759304D5CF(func_491()))
	{
		unk_0xF8136E11BE4BEAC3(func_491());
	}
	else
	{
		if (unk_0xDC5D81351D6A4DDB(uParam5->f_5) && !unk_0x4915F4759304D5CF(uParam5->f_5))
		{
			unk_0x1F7948851FB36E88(uParam5->f_5, true, 1);
			iLocal_170[1] = uParam5->f_5;
			unk_0x9568B1B58F78FF36(iLocal_170[1]);
		}
		else if (func_435(uParam4))
		{
			unk_0x9568B1B58F78FF36(iLocal_170[1]);
		}
		else
		{
			iLocal_170[1] = unk_0x35C6E06B120EB2E3(26, iLocal_204, Param1.f_3, fParam0, 1, true);
		}
		if (unk_0xAEAF59799C2F26E4(iLocal_170[1], "Darts_name"))
		{
			iVar0 = unk_0xBB4F5216F3FCA8EA(iLocal_170[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_252 = func_438("RAYMOND");
				iLocal_253 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_252 = func_438("JOHAN");
				iLocal_253 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_252 = func_438("STAN");
				iLocal_253 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_252 = func_438("VINCE");
				iLocal_253 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_252 = func_438("KRISTY");
				iLocal_253 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_252 = func_438("MARLENE");
				iLocal_253 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_252 = func_438("LORIE");
				iLocal_253 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_252 = func_438("SHELLEY");
				iLocal_253 = -863218904;
			}
		}
		unk_0x6D61CED849FB898E(iLocal_170[1], "Darts_name", iLocal_253);
	}
	iVar1 = unk_0x8F474E419F56E48D(iLocal_170[1]);
	func_434(iVar1);
	unk_0x0177431263151C4E(iLocal_170[1], iLocal_170[0], 0);
	unk_0x0177431263151C4E(iLocal_170[0], iLocal_170[1], 0);
}

void func_434(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x22C775856F4633CA(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_57 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_435(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x751DA0D8357E8793(unk_0xA19140A5C42D8715(), uParam0, -1))
	{
		if (!unk_0x4915F4759304D5CF((*uParam0)[iVar0]))
		{
			if ((((((unk_0x8F474E419F56E48D((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x8F474E419F56E48D((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x8F474E419F56E48D((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x8F474E419F56E48D((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x8F474E419F56E48D((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x8F474E419F56E48D((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x8F474E419F56E48D((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0x1F7948851FB36E88((*uParam0)[iVar0], true, 1);
				iLocal_170[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_436(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 3;
		while (iVar0 <= (157 - 1))
		{
			if (func_437(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_437(int iParam0)
{
	if (!func_88(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_438(char* sParam0)
{
	if (unk_0x346268472B5F4E43() == 7)
	{
		if (unk_0x3CAC2741CC1A631F(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0x3CAC2741CC1A631F(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_439(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0xDC5D81351D6A4DDB(*uParam0))
	{
		uParam0->f_4 = unk_0x552C823E1D2A019C(*uParam0);
	}
	if (!bParam3)
	{
		func_441(uParam1, uParam0);
	}
	vLocal_41 = { 0f, (-2.3685f + fLocal_34), 0.1f };
	vLocal_41 = { vLocal_41 + vLocal_35 };
	vLocal_40 = { unk_0x2F230B37E9FFF23F(uParam0->f_1, uParam0->f_4, vLocal_41) };
	func_440(uParam2, uParam0);
}

void func_440(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + vLocal_35 };
	*uParam0 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_441(var uParam0, var uParam1)
{
	*uParam0 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_34), -1.7272f) };
	uParam0->f_3 = { unk_0x2F230B37E9FFF23F(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_34), -1.7272f) };
}

int func_442(var uParam0, var uParam1)
{
	if (!unk_0x61346376C1469A0E("SCRIPT\DARTS", false, -1))
	{
		return 0;
	}
	if (!unk_0x61346376C1469A0E("SCRIPT\FAMILY1_2", false, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0x7FC99CCC73354033(iLocal_28) || !unk_0x7FC99CCC73354033(iLocal_29)) || !unk_0x7FC99CCC73354033(iLocal_37)) || !unk_0x7FC99CCC73354033(iLocal_204)) || !unk_0x0FA486DE15EB3004(*uParam0)) || !unk_0x0FA486DE15EB3004(uParam1->f_645)) || !unk_0x0FA486DE15EB3004(uParam1->f_57)) || !unk_0x0FA486DE15EB3004(uParam1->f_62)) || !unk_0xD744813D9841CA9A(3)) || !unk_0x87DF091EDFE6D083("Darts")) || !unk_0x39C2D9AB77873F84(sLocal_254)) || !unk_0x39C2D9AB77873F84(sLocal_255)) || !func_443(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_443(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_337(&iVar0, 1, iParam1))
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
	bVar2 = func_444(&(Global_17367.f_5658[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_444(var uParam0)
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

void func_445(var uParam0, var uParam1)
{
	unk_0xCACEBBBEAD8F262E(iLocal_28);
	unk_0xCACEBBBEAD8F262E(iLocal_29);
	unk_0xCACEBBBEAD8F262E(iLocal_37);
	unk_0xCACEBBBEAD8F262E(iLocal_204);
	unk_0x8000C77B5F336760("Darts", false);
	unk_0x8000C77B5F336760("ShopUI_Title_Darts", false);
	unk_0x6D68030C791111E0(sLocal_254);
	unk_0x6D68030C791111E0(sLocal_255);
	*uParam0 = unk_0xB00CD6895BDB01A0("darts_scoreboard");
	uParam1->f_645 = func_189();
	uParam1->f_57 = func_447();
	uParam1->f_62 = func_446();
	unk_0x6A633E13B2A856AE("DARTS", 3);
}

int func_446()
{
	return unk_0xB00CD6895BDB01A0("MIDSIZED_MESSAGE");
}

int func_447()
{
	return unk_0xB00CD6895BDB01A0("MP_BIG_MESSAGE_FREEMODE");
}

void func_448(var uParam0, int iParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_21 = { 180f, 0f, 252.555f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_21 = { 180f, 0f, 87.77f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!func_449(vParam2) && fParam3 != 0f)
	{
		uParam0->f_18 = { unk_0x2F230B37E9FFF23F(vParam2, fParam3, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam3 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_449(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_450(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_38 = 0.5f;
	Local_38.f_1 = 0.5f;
	if (unk_0x7D67DDE730F596C5())
	{
		Local_38.f_2 = 0.05f;
		Local_38.f_3 = 0.095f;
	}
	else
	{
		Local_38.f_2 = 0.065f;
		Local_38.f_3 = 0.09f;
	}
	Local_38.f_4 = 255;
	Local_38.f_5 = 250;
	Local_38.f_6 = 255;
	Local_38.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	Local_38.f_8 = 0f;
	Local_39 = 0f;
	Local_39.f_1 = 0f;
	Local_39.f_2 = 0.061f;
	Local_39.f_3 = 0.105f;
	Local_39.f_4 = 200;
	Local_39.f_5 = 45;
	Local_39.f_6 = 40;
	Local_39.f_7 = 255;
	Local_39.f_8 = 0f;
}

void func_451(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_452()
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

void func_453(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	vector3 vVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar15;
	vector3 vVar16;
	
	fLocal_89 = unk_0xA0B98358F89CB4ED(0);
	fVar7 = 30f;
	fVar7 = func_399(fLocal_89);
	vVar8 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar9 = 1.7939f;
	fVar10 = -1.3346f;
	if (unk_0x7D67DDE730F596C5())
	{
		vVar11 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar12 = -1.3023f;
		fVar13 = -12.4139f;
	}
	else
	{
		vVar11 = { -0.112635f, -1.86963f, 0.45417f };
		fVar12 = -3.7542f;
		fVar13 = -14.4576f;
	}
	vVar14 = { 0.261599f, -0.750354f, -0.392929f };
	vVar16 = { 0.281314f, -0.573735f, -0.39603f };
	vVar1 = { unk_0x2F230B37E9FFF23F(vParam0, fParam1, vVar8) };
	vVar3 = { fVar10, 0f, (fParam1 - fVar9) };
	vVar0 = { unk_0x2F230B37E9FFF23F(vParam0, fParam1, vVar11) };
	vVar2 = { fVar13, 0f, (fParam1 - fVar12) };
	vVar4 = { unk_0x2F230B37E9FFF23F(vParam0, fParam1, vVar14) };
	vVar5 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	vVar15 = { unk_0x2F230B37E9FFF23F(vParam0, fParam1, vVar16) };
	vVar6 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	iLocal_75 = unk_0x74677C414DD7F53C(26379945, vVar0, vVar2, fVar7, 0, 2);
	iLocal_76 = unk_0x74677C414DD7F53C(26379945, vVar1, vVar3, fVar7, 0, 2);
	iLocal_77 = unk_0x74677C414DD7F53C(26379945, vVar4, vVar5, 65f, 0, 2);
	iLocal_78 = unk_0x74677C414DD7F53C(26379945, vVar15, vVar6, 65f, 0, 2);
	iLocal_79 = unk_0x74677C414DD7F53C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_80 = unk_0x74677C414DD7F53C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_82 = unk_0x74677C414DD7F53C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_83 = unk_0x74677C414DD7F53C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_81 = unk_0x74677C414DD7F53C(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0xF62A5A3CB8DB2402(iLocal_77, 43.35f);
	unk_0xF62A5A3CB8DB2402(iLocal_78, 42.35f);
	unk_0xBC1542DDC31676C2(iLocal_77, "HAND_SHAKE", 0.1f);
	unk_0xBC1542DDC31676C2(iLocal_78, "HAND_SHAKE", 0.1f);
}

void func_454(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0xDC5D81351D6A4DDB(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_455()
{
	Global_17228.f_6 = 1;
}

void func_456(int iParam0, bool bParam1)
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

var func_457(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_458(iParam0, iParam1);
	unk_0x2AD48F3CEBA882E9(iVar1, &uVar0, -1);
	return uVar0;
}

var func_458(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_459(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_459(int iParam0, int iParam1, var uParam2, var uParam3)
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

void func_460(bool bParam0)
{
	if (bParam0)
	{
		func_461();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_39(0))
		{
			func_422(0);
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

void func_461()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

void func_462(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0x67D84F81A1CB7EF8(1);
	func_260(8);
	func_313();
	if (bLocal_178)
	{
		func_479(&uLocal_194);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_403(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0xA5DE74AE39867B03(iLocal_28);
	unk_0xA5DE74AE39867B03(iLocal_29);
	if (!unk_0x4915F4759304D5CF(iLocal_170[0]) && !unk_0x4915F4759304D5CF(iLocal_170[1]))
	{
		unk_0x53FF9BDD8529ACD2(iLocal_170[0]);
		unk_0x53FF9BDD8529ACD2(iLocal_170[1]);
	}
	func_478();
	unk_0xA5DE74AE39867B03(iLocal_37);
	func_477();
	func_476(uParam1->f_645);
	func_475(&(uParam1->f_57));
	if (!unk_0x7112137033807390(func_491(), 0))
	{
		unk_0x9854E4DB9C72017F(func_491(), func_474());
		func_473(iLocal_202, iLocal_203);
	}
	else
	{
		func_471(&(iLocal_170[1]));
	}
	func_460(0);
	func_470(uParam2);
	func_36(0);
	unk_0xE355C64541455AE8(15);
	if (unk_0x65A878D380D59179())
	{
		if (iParam0->f_460 && !iLocal_192)
		{
			func_469(190, 0);
		}
	}
	func_99();
	func_452();
	func_91(&(uParam1->f_72), 0);
	wait(200);
	if (iLocal_185)
	{
		func_466(130, 0, 0);
		func_463();
	}
	func_456(23, 0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_463()
{
	func_464();
}

int func_464()
{
	if (func_465(0))
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

bool func_465(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_466(int iParam0, int iParam1, int iParam2)
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
		func_60((891 + iParam0), 1, -1, 1);
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
		func_467();
	}
}

void func_467()
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
		func_82(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_468() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_464();
				}
			}
		}
	}
}

int func_468()
{
	return Global_25459;
}

void func_469(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x65A878D380D59179())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_219(iParam0, &Var0, &Var1, 1, -1, 0, 0))
	{
		unk_0x13BE64B38F002613(103, iLocal_106[1], 0f);
		unk_0x13BE64B38F002613(99, iLocal_106[2], 0f);
		unk_0x13BE64B38F002613(109, iLocal_106[3], 0f);
		unk_0x13BE64B38F002613(106, iLocal_106[5], 0f);
		unk_0x13BE64B38F002613(2, iLocal_106[10], 0f);
		unk_0x13BE64B38F002613(107, iLocal_106[8], 0f);
		unk_0x13BE64B38F002613(116, iLocal_106[6], 0f);
	}
}

void func_470(var uParam0)
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
				if (unk_0x71364F510A1CB69F() && !func_465(0))
				{
					unk_0x70C1F5AA59767FE6(800);
				}
			}
		}
	}
	func_36(0);
}

void func_471(var uParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*uParam0) && !unk_0x4915F4759304D5CF(*uParam0))
	{
		unk_0x3A95A0A3221D4208(&uLocal_205);
		unk_0x2F89329397A277BC(&uLocal_205);
		if (unk_0xDC5D81351D6A4DDB(iLocal_170[0]))
		{
			unk_0x22DD1D053CFF9707(0, iLocal_170[0], 8000, 2049, 3);
		}
		unk_0xB3E1967E66494060(0, 1000);
		if (bLocal_183)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_106031, 10))
			{
				unk_0x956B3CF461C0C1C9(0, func_472(iLocal_207 == 2, vLocal_242, vLocal_244), 1f, 20000, 0.25f, 0, func_118(iLocal_207 == 2, fLocal_246, fLocal_248));
			}
			else
			{
				unk_0x956B3CF461C0C1C9(0, func_472(iLocal_207 == 2, vLocal_241, vLocal_243), 1f, 20000, 0.25f, 0, func_118(iLocal_207 == 2, fLocal_245, fLocal_247));
			}
			unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x956B3CF461C0C1C9(0, func_472(iLocal_207 == 2, vLocal_241, vLocal_243), 1f, 20000, 0.25f, 0, func_118(iLocal_207 == 2, 172.6813f, 142.6717f));
			unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0x301F42EEE3C40328(uLocal_205);
		unk_0xE1072FA2FECBAD96(*uParam0, uLocal_205);
		unk_0xD738221C247C8B71(*uParam0, true);
	}
	unk_0xA5DE74AE39867B03(iLocal_204);
}

Vector3 func_472(bool bParam0, vector3 vParam1, vector3 vParam2)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam2;
}

void func_473(int iParam0, var uParam1)
{
	if (Global_89153 == iParam0)
	{
		Global_89154 = Global_89153;
		Global_89155 = uParam1;
		Global_89153 = 23;
	}
}

var func_474()
{
	return unk_0x64C831B843E08AC9(unk_0xA6580F898F4E801C());
}

void func_475(int iParam0)
{
	if (unk_0x0FA486DE15EB3004(*iParam0))
	{
		unk_0x86795B44CE5FE021(iParam0);
		*iParam0 = 0;
	}
}

void func_476(var uParam0)
{
	unk_0x86795B44CE5FE021(&uParam0);
}

void func_477()
{
	unk_0x135C61E339DABBAC(1);
	unk_0xA5CFBAB33EA6079E(0);
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	unk_0xDC374DA4DC566237(true);
}

void func_478()
{
	if (unk_0xDC5D81351D6A4DDB(iLocal_36))
	{
		unk_0xC0AC848E56940C34(&iLocal_36);
	}
}

void func_479(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (!func_427(iVar0))
		{
			unk_0xDCFB67537602326F(iVar0, true, 0);
			unk_0x7C73A424F1117528(iVar0, true, 0);
			unk_0xB29E08C7AB729BAD(iVar0, false);
		}
	}
}

void func_480()
{
	int iVar0;
	
	if (unk_0xB1FDFCECA75CE4A7("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_106070.f_9057 || func_465(0))
	{
		if (!func_488())
		{
			iVar0 = func_487();
			if (iVar0 != -1)
			{
				if (!func_482(iVar0))
				{
					return;
				}
				unk_0x2BCFB39E86340DAA(&(Global_84079[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_481();
		}
	}
}

void func_481()
{
	Global_93267 = 1;
	if (unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1))
	{
		if (unk_0x429D45A6C6520026(&Global_71437))
		{
			switch (func_86())
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
			switch (func_86())
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

int func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_481();
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		unk_0x824B5E936276CAB3(5000);
	}
	iVar0 = Global_84079[iParam0 /*5*/];
	iVar1 = Global_71474.f_109[iVar0 /*4*/];
	func_486(iVar1, 1);
	unk_0x657CA5CB73EE77D4(unk_0xD4E735F4B6A956AC());
	unk_0xB8C9A9ECCE440A3A(unk_0xD4E735F4B6A956AC());
	func_483(&(Global_106070.f_2355.f_539), iVar1);
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

void func_483(var uParam0, int iParam1)
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
			if (!func_485(Global_106070.f_18505[iVar0], &vVar2, &fVar3))
			{
				Global_106070.f_18505[iVar0] = 318;
				func_484(&(uParam0->f_2276[iVar0]));
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

void func_484(var uParam0)
{
	*uParam0 = -15;
}

int func_485(int iParam0, var uParam1, float fParam2)
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
			return func_485(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_485(8, uParam1, fParam2);
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

void func_486(int iParam0, bool bParam1)
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

int func_487()
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

int func_488()
{
	if (((Global_93232 == 13 || Global_93232 == 10) || Global_93232 == 11) || Global_93232 == 12)
	{
		return 0;
	}
	return 1;
}

void func_489(int iParam0, bool bParam1)
{
	if (unk_0x4915F4759304D5CF(func_491()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x097A982B0640FA32(func_491(), func_474()))
		{
			return;
		}
		if (!unk_0x4915F4759304D5CF(func_490()))
		{
			if (!unk_0x097A982B0640FA32(func_490(), func_474()))
			{
				return;
			}
		}
	}
	if (Global_89153 == 23)
	{
		Global_89155 = 10;
		Global_89153 = iParam0;
	}
}

var func_490()
{
	return Global_89160;
}

int func_491()
{
	return Global_89159;
}

void func_492()
{
	if (iLocal_167 == 1)
	{
		return;
	}
	func_313();
	unk_0xD427B2DF0DC98BBA("Darts");
	iLocal_167 = 1;
}

int func_493(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_89(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

