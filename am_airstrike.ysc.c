#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_61 = { 0f, 0f, 0f };
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x4C9BACA8D249CB13())
	{
		func_102(ScriptParam_241);
	}
	while (true)
	{
		func_101();
		if (func_91())
		{
			func_87();
		}
		if (unk_0x4C9BACA8D249CB13())
		{
			func_86();
			switch (func_85(unk_0xD60943E3BE730BF0()))
			{
				case 0:
					if (func_84() > 0)
					{
						Local_240[unk_0xD60943E3BE730BF0() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_84() == 3)
					{
						Local_240[unk_0xD60943E3BE730BF0() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_87();
					break;
			}
			if (unk_0x45F99485D7E1C29A())
			{
				switch (func_84())
				{
					case 0:
						Local_238 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	switch (Local_238.f_1)
	{
		case 0:
			func_25();
			break;
		
		case 1:
			func_24();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238 = 3;
	}
	func_17();
	if (Local_238.f_53 && Local_238.f_50 < 10)
	{
		func_12();
	}
	if (Local_238.f_50 >= 10)
	{
		if (!func_11(&uLocal_65))
		{
			func_10(&uLocal_65, 0, 0);
		}
		else if (func_9(&uLocal_65, 10000, 0))
		{
			Local_238 = 3;
		}
	}
	if (func_8())
	{
		Local_238 = 3;
	}
	if (Local_238.f_55 == 1)
	{
		if (!Local_238.f_56)
		{
			if (((!unk_0xE06AA0996C4E4E03() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_238.f_56 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_3(unk_0xD4E735F4B6A956AC(), 1))
		{
			Local_238 = 3;
		}
	}
	else if (func_3(unk_0xD4E735F4B6A956AC(), 1) || func_2())
	{
		Local_238 = 3;
	}
	if (unk_0x5CA3186381FC012C())
	{
		Local_238 = 3;
	}
}

bool func_2()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 0);
}

int func_3(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_4(iParam0))
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

bool func_4(int iParam0)
{
	return func_5(iParam0);
}

bool func_5(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

bool func_8()
{
	return Global_1312416;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_10(var uParam0, bool bParam1, bool bParam2)
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

bool func_11(var uParam0)
{
	return uParam0->f_1;
}

void func_12()
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = 200;
	if (func_16(vLocal_61))
	{
		if (func_14(Local_238.f_2))
		{
			vLocal_61 = { unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_238.f_2), 1) };
			vLocal_61.z = (vLocal_61.z - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xA19140A5C42D8715(), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 1, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 750, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 750, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 750, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_51), 0, 0);
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_9(&(Local_238.f_51), 500, 0))
			{
				func_13(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_238.f_51)))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8F7BA8E028ADF980(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xFF54226C3BC38C03(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1, 0, -1f, unk_0xA19140A5C42D8715(), 1, 0, 0, 0, 0, 0);
					Local_238.f_50++;
					iLocal_57 = 0;
					unk_0x2BCFB39E86340DAA(&iLocal_237, Local_238.f_50);
				}
			}
			break;
	}
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_14(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return !func_15(unk_0xBEA1D935EBAA95F3(uParam0));
	}
	return 0;
}

int func_15(int iParam0)
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

int func_16(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (func_14(Local_238.f_2))
	{
		iVar0 = unk_0xBEA1D935EBAA95F3(Local_238.f_2);
		vVar2 = { unk_0xE2BBD32891C18569(iVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_16(Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2))
		{
			vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 };
		}
		else if (func_23(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_14(Local_238.f_2))
			{
				if (!unk_0xA60C975CBAB69F34(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_62 = unk_0x499324B3EF19C288(vVar2, vVar1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		iVar3 = floor(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			func_18(iVar3, "AIRSTRIKE_2", -1, iVar4, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
		}
	}
}

void func_18(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_22(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_21(6, iVar0);
		Global_1369750.f_3781[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_3781.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_3781.f_183[iVar0] = iParam3;
		Global_1369750.f_3781.f_172[iVar0] = iParam2;
		Global_1369750.f_3781.f_260[iVar0] = iParam4;
		Global_1369750.f_3781.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1369750.f_3781.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1369750.f_3781.f_443[iVar0] = iParam7;
		Global_1369750.f_3781.f_454[iVar0] = fParam8;
		Global_1369750.f_3781.f_497[iVar0] = iParam9;
		Global_1369750.f_3781.f_508[iVar0] = iParam10;
		Global_1369750.f_3781.f_205[iVar0] = iParam11;
		Global_1369750.f_3781.f_216[iVar0] = iParam12;
		Global_1369750.f_3781.f_227[iVar0] = iParam13;
		Global_1369750.f_3781.f_238[iVar0] = iParam14;
		Global_1369750.f_3781.f_249[iVar0] = iParam15;
		Global_1369750.f_3781.f_519[iVar0] = iParam16;
		Global_1369750.f_3781.f_530[iVar0] = iParam17;
		Global_1369750.f_3781.f_541[iVar0] = iParam18;
		Global_1369750.f_3781.f_552[iVar0] = iParam19;
		Global_1369750.f_3781.f_563[iVar0] = iParam20;
		Global_1369750.f_3781.f_574[iVar0] = iParam21;
		Global_1369750.f_3781.f_585[iVar0] = iParam22;
		Global_1369750.f_3781.f_596[iVar0] = iParam23;
		Global_1369750.f_3781.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_20())
		{
			Global_1369750.f_1088 = 1;
		}
		if (unk_0x47C01C0E6F4C1D06())
		{
			iVar2 = 0;
			unk_0x359669D87D0E343F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1369750.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1369750.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1369750.f_1088 = 1;
			}
			if (func_19())
			{
				Global_1369750.f_1092 = 1;
			}
		}
	}
}

int func_19()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x47C01C0E6F4C1D06())
	{
		unk_0x359669D87D0E343F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (((unk_0x346268472B5F4E43() == 8 || unk_0x346268472B5F4E43() == 9) || unk_0x346268472B5F4E43() == 10) || unk_0x346268472B5F4E43() == 12)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_1369750.f_6130[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1369750.f_6130[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
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

void func_24()
{
}

void func_25()
{
	vector3 vVar0;
	bool bVar1;
	
	func_82();
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (!iLocal_56)
			{
				if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !func_81();
					unk_0xF0188A1B49D79AF7(unk_0xA19140A5C42D8715(), joaat("weapon_flare"), 1, bVar1, bVar1);
					unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (unk_0xA547449CA7AAD936(unk_0xA19140A5C42D8715(), joaat("weapon_flare"), 100f, &(Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2), 1))
			{
				if (func_80(Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 = { vVar0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0x135C61E339DABBAC(1);
				}
				if (!iLocal_55)
				{
					if (!func_79(Local_238.f_2.f_3))
					{
						if (func_14(Local_238.f_2))
						{
							func_78();
							unk_0x9568B1B58F78FF36(unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3));
							unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), uLocal_49);
							unk_0xB571438B26CCDF68(unk_0xBEA1D935EBAA95F3(Local_238.f_2), round(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!unk_0xE06AA0996C4E4E03())
				{
					if (func_77(unk_0xA19140A5C42D8715()))
					{
						func_6("AIRSTRIKE_4", -1);
					}
					else
					{
						func_6("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_49();
	func_26();
}

void func_26()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_48();
			break;
		
		case 1:
			func_48();
			break;
		
		case 2:
			if (func_14(Local_238.f_2))
			{
				bLocal_58 = true;
				iVar0 = unk_0xBEA1D935EBAA95F3(Local_238.f_2);
				if (!unk_0xCE3CB618AFE55EFB(iLocal_47))
				{
					iLocal_47 = unk_0x6A15DD6A863D5E27(iVar0);
					unk_0x7DB79A42AADE120F(iLocal_47, 16);
					unk_0xC4F12E446CCE89F5(iLocal_47, "AIRSTRIKE_5");
					unk_0x264E87C905AE790B(iLocal_47, 0);
				}
				else
				{
					unk_0xB413DC6A1AC6B885(iLocal_47, ceil(unk_0x552C823E1D2A019C(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_16(Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2))
					{
						vVar3 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 };
					}
					else
					{
						vVar3 = { vLocal_60 };
					}
					if (unk_0x499324B3EF19C288(vVar3, unk_0xE2BBD32891C18569(iVar0, 1), 1) <= (60f * 5f))
					{
						unk_0xC5E5A5FED58DF39D(unk_0xBEA1D935EBAA95F3(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235)
				{
					if (!Local_238.f_54)
					{
						if (!func_79(Local_238.f_2.f_3))
						{
							if (!func_16(Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2))
							{
								if (unk_0x499324B3EF19C288(func_47(unk_0xD4E735F4B6A956AC()), unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_238.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0x499324B3EF19C288(vVar3, unk_0xE2BBD32891C18569(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_30(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_50 < 10)
				{
					if (!Local_238.f_53)
					{
						if (!func_16(Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!func_11(&uLocal_63))
								{
									func_10(&uLocal_63, 0, 0);
								}
								else if (func_9(&uLocal_63, 7500, 0))
								{
									Local_238.f_53 = 1;
								}
								vVar1 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								vVar2 = { Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								vVar1.z = -200f;
								vVar2.z = 1500f;
								if (unk_0xA60C975CBAB69F34(iVar0, Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0x7D4400F91582CA08(vVar1, vVar2, joaat("weapon_flare"), 0))
								{
									Local_238.f_53 = 1;
								}
							}
							else if (func_29() == 1)
							{
								Local_238.f_53 = 1;
								Local_238.f_50 = 100;
							}
						}
						else if (unk_0xA60C975CBAB69F34(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_238.f_53 = 1;
							Local_238.f_50 = 100;
							Local_238.f_54 = 1;
							if (!iLocal_236)
							{
								func_30(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_238.f_2) || func_79(Local_238.f_2.f_3))
			{
				func_27();
			}
			break;
		
		case 3:
			func_48();
			break;
	}
}

void func_27()
{
	int iVar0;
	
	if (!func_79(Local_238.f_2.f_3))
	{
		if (func_28(Local_238.f_2.f_3))
		{
			if (unk_0xABF0452BE64AD290(Local_238.f_2.f_3))
			{
				iVar0 = unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3);
				unk_0x6259CDB47862A4F3(iVar0, 0, 0);
			}
		}
	}
}

int func_28(var uParam0)
{
	if (unk_0x8F01F94322569B77(uParam0))
	{
		return 1;
	}
	if (unk_0x45F99485D7E1C29A())
	{
		unk_0xEDB53D3BCBFC886E(uParam0);
	}
	return 0;
}

int func_29()
{
	if (Local_238.f_55 == 1)
	{
		return Local_238.f_55;
	}
	else if (Local_238.f_55 == 2)
	{
		return Local_238.f_55;
	}
	if (!unk_0x92270AFB0B51829C(Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_55 = 1;
		return Local_238.f_55;
	}
	Local_238.f_55 = 2;
	return Local_238.f_55;
}

int func_30(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)
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
					func_45();
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
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_43();
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
				func_36();
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
				if (func_35())
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
			if (func_34())
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
			func_33();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_32();
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
		func_45();
	}
	return 0;
}

void func_32()
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

void func_33()
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

int func_34()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
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

void func_36()
{
	if (func_42(14))
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
		Global_14513 = func_37();
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

var func_37()
{
	func_38();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_38()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_41(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_40(unk_0xA19140A5C42D8715());
			if (func_39(iVar0) && (!func_42(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_39(Global_106070.f_2355.f_539.f_4301))
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

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_43()
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

bool func_44(int iParam0, int iParam1)
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

void func_45()
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

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

Vector3 func_47(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

void func_48()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_47))
	{
		unk_0xE1623437A3194332(&iLocal_47);
	}
}

void func_49()
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_76(1);
			break;
		
		case 1:
			if (func_50())
			{
				func_76(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_238.f_2))
			{
				if (func_79(Local_238.f_2.f_3))
				{
					func_76(3);
				}
			}
			else if (func_79(Local_238.f_2.f_3))
			{
				func_76(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_50()
{
	if (!func_11(&uLocal_67))
	{
		func_10(&uLocal_67, 0, 0);
	}
	else if (func_75(Local_238.f_2.f_1) && func_75(Local_238.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_67, 3000, 0))
		{
			if (func_54() && func_51())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51()
{
	if ((!unk_0x83A1DA4E6C55E952(Local_238.f_2.f_3) && func_75(Local_238.f_2.f_3.f_1)) && unk_0x83A1DA4E6C55E952(Local_238.f_2))
	{
		if (func_14(Local_238.f_2))
		{
			if (func_53(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1);
				unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), Global_1574981);
				unk_0x8695E04AA104690A(unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 0);
				unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), 1);
				func_52();
				unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), uLocal_48);
				unk_0xB571438B26CCDF68(unk_0xBEA1D935EBAA95F3(Local_238.f_2), round(50f));
			}
		}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_238.f_2.f_3))
	{
		return 0;
	}
	unk_0xA5DE74AE39867B03(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_52()
{
	if (!iLocal_50)
	{
		if (func_14(Local_238.f_2))
		{
			unk_0x2F89329397A277BC(&uLocal_48);
			unk_0xC4AC94A41BB71F0C(0, unk_0xBEA1D935EBAA95F3(Local_238.f_2), 0, 0, vLocal_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0xC4AC94A41BB71F0C(0, unk_0xBEA1D935EBAA95F3(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x301F42EEE3C40328(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_54()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x83A1DA4E6C55E952(Local_238.f_2))
	{
		if (func_75(Local_238.f_2.f_1))
		{
			if (unk_0xBEB81D4750DEAFA3("AIRSTRIKE_FLYOVER", 0))
			{
				func_71(&vVar0, &fVar1);
				if (func_56(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_55(&(Local_238.f_2), Local_238.f_2.f_1, vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_14 = { vVar0 * Vector(0f, -1f, -1f) };
						unk_0x14293208022014FA(unk_0xBEA1D935EBAA95F3(Local_238.f_2), 2);
						unk_0xB29E08C7AB729BAD(unk_0xBEA1D935EBAA95F3(Local_238.f_2), false);
						unk_0x9018100BC4DCB099(unk_0xBEA1D935EBAA95F3(Local_238.f_2), 1);
						unk_0x817FED698F1BED49(unk_0xBEA1D935EBAA95F3(Local_238.f_2));
						unk_0x625FB4B0328423D9(unk_0xBEA1D935EBAA95F3(Local_238.f_2), 60f);
						unk_0xC19EDC1D7179164C(unk_0xBEA1D935EBAA95F3(Local_238.f_2), 1, 1, 0);
						unk_0x41DB6C06222B28BF(unk_0xBEA1D935EBAA95F3(Local_238.f_2), 1000);
						unk_0xEAF1F3E17588C851(unk_0xBEA1D935EBAA95F3(Local_238.f_2), 0);
						unk_0x37B223069072EA25(unk_0xBEA1D935EBAA95F3(Local_238.f_2), 3);
						unk_0x8B6DB2F9B5288ECF(unk_0xBEA1D935EBAA95F3(Local_238.f_2));
						unk_0xA5DE74AE39867B03(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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

int func_56(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_64(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_57(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_57(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_23(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x71364F510A1CB69F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x499324B3EF19C288(func_62(unk_0xD4E735F4B6A956AC()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_23(iVar1, 1, 1))
		{
			if (!func_59(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD4E735F4B6A956AC()))
				{
					if ((func_58(iVar1) || !bParam8) && !Global_2423801[iVar1 /*413*/].f_259)
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
								if (unk_0x499324B3EF19C288(func_62(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x499324B3EF19C288(func_62(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_58(int iParam0)
{
	if (unk_0xD9755B4480864A6A(unk_0xEE978C39384D834F(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_60(-1, 0) == 8;
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

int func_60(int iParam0, bool bParam1)
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

int func_61()
{
	return Global_1312736;
}

Vector3 func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_63() && Global_1589747[iVar0 /*790*/].f_761) && !func_16(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_47(iParam0);
}

var func_63()
{
	return Global_2448386.f_16;
}

int func_64(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD4E735F4B6A956AC() != iVar1) || iParam6 == 0)
		{
			if (func_23(iVar1, bParam2, bParam3))
			{
				if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
				{
					if (!bParam5 || (!unk_0x4915F4759304D5CF(unk_0xEE978C39384D834F(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) != unk_0xE46ECB9FD23D3264(iVar1))) || unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
						{
							if (((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && uParam7) && bParam4) && func_65(iVar1))
							{
							}
							else if (unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(iVar1)))
							{
								if (unk_0x499324B3EF19C288(func_47(iVar1), vParam0, 1) < fParam1)
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

int func_65(int iParam0)
{
	if (func_70(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_69(iParam0) };
	if (unk_0x6053E2C13442D6D7(&Global_2503649))
	{
		return 1;
	}
	if (func_66(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_68(iParam0);
	if (!iVar0 == func_67())
	{
		if (iVar0 == func_68(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	return -1;
}

int func_68(int iParam0)
{
	if (iParam0 != func_67())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_67();
}

struct<13> func_69(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

int func_70(int iParam0, int iParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_69(iParam0) };
		Global_2503662 = { func_69(iParam1) };
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

void func_71(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_73(vLocal_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x3E33778629BF0886((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_72(*uParam0, vLocal_60);
}

float func_72(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x0C1B8F3F6EFDC58B((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_73(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0xF59B9063EDAC7451(-1f, 1f), unk_0xF59B9063EDAC7451(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_74(vVar0, unk_0xF59B9063EDAC7451(fParam1, fParam2)) };
	vVar0.z = unk_0xF59B9063EDAC7451(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_74(vector3 vParam0, float fParam1)
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

bool func_75(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCACEBBBEAD8F262E(iParam0);
	return unk_0x7FC99CCC73354033(iParam0);
}

void func_76(int iParam0)
{
	Local_238.f_2.f_2 = iParam0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (unk_0x5BFF0F72CC04E4DA(iParam0))
	{
		iVar0 = unk_0xCAEB6CE71A2C7212(iParam0, 0);
		if (unk_0x1095F403F52B42E1(iVar0, 0))
		{
			if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78()
{
	if (!iLocal_51)
	{
		if (func_14(Local_238.f_2))
		{
			unk_0x2F89329397A277BC(&uLocal_49);
			unk_0xC4AC94A41BB71F0C(0, unk_0xBEA1D935EBAA95F3(Local_238.f_2), 0, 0, Local_240[unk_0xD60943E3BE730BF0() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0xC4AC94A41BB71F0C(0, unk_0xBEA1D935EBAA95F3(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x301F42EEE3C40328(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_79(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return unk_0x4915F4759304D5CF(unk_0x8A5B683BACF7B78C(uParam0));
	}
	return 1;
}

bool func_80(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_81()
{
	return Global_93284.f_327 > 0;
}

void func_82()
{
	if (!iLocal_234)
	{
		if (!func_79(Local_238.f_2.f_3))
		{
			func_83(&uLocal_69, 3, unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_83(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_84()
{
	return Local_238;
}

int func_85(int iParam0)
{
	return Local_240[iParam0 /*5*/];
}

void func_86()
{
}

void func_87()
{
	if (unk_0x83A1DA4E6C55E952(Local_238.f_2.f_3) && unk_0x83A1DA4E6C55E952(Local_238.f_2))
	{
		if (func_14(Local_238.f_2) && !func_79(Local_238.f_2.f_3))
		{
			unk_0xC4AC94A41BB71F0C(unk_0x8A5B683BACF7B78C(Local_238.f_2.f_3), unk_0xBEA1D935EBAA95F3(Local_238.f_2), 0, unk_0xA19140A5C42D8715(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_89(func_90(1, 1), 11, func_67());
	func_88();
}

void func_88()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_89(int iParam0, int iParam1, var uParam2)
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

int func_90(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD4E735F4B6A956AC() || iParam0)
			{
				if (bParam1)
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_91()
{
	var uVar0;
	
	func_98(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_96())
	{
		return 1;
	}
	if (func_95(157))
	{
		if (!func_94())
		{
			return 1;
		}
	}
	if (func_95(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_92() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_92()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_92()
{
	switch (func_93())
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

int func_93()
{
	return Global_25459;
}

bool func_94()
{
	return Global_2448386.f_587;
}

int func_95(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return Global_2458191;
}

bool func_97()
{
	return Global_2448386.f_582;
}

void func_98(var uParam0)
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
					func_99(iVar0);
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

void func_99(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_23(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_100(iVar2, &bVar3))
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

int func_100(int iParam0, var uParam1)
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

void func_101()
{
	wait(0);
}

void func_102(struct<21> Param0)
{
	func_108(func_109(Param0), Param0);
	unk_0x7F2854D39965C275(1);
	unk_0xA721D9ED3827732A(1);
	func_106(0, -1, 0);
	unk_0xF82A3961787FA0A4(&Local_238, 58);
	unk_0x8BFA7A7AB1D02137(&Local_240, 11);
	unk_0x2F3193E06C2EFF44(0);
	if (!func_105())
	{
		func_87();
	}
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		vLocal_60 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 0) };
	}
	if (func_3(unk_0xD4E735F4B6A956AC(), 1))
	{
		bLocal_52 = true;
	}
	func_103(64, 1);
	Local_240[unk_0xD60943E3BE730BF0() /*5*/] = 0;
}

void func_103(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_104() /*12745*/].f_8178.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_104() /*12745*/].f_8178.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_104() /*12745*/].f_8178.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_104() /*12745*/].f_8178.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_104() /*12745*/].f_8178.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_104() /*12745*/].f_8178.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_104() /*12745*/].f_8178.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_104() /*12745*/].f_8178.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_104() /*12745*/].f_8178.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_104() /*12745*/].f_8178.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_104() /*12745*/].f_8178.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_104() /*12745*/].f_8178.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_104() /*12745*/].f_8178.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_104() /*12745*/].f_8178.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_104() /*12745*/].f_8178.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_104() /*12745*/].f_8178.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_104() /*12745*/].f_8178.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_104() /*12745*/].f_8178.f_30 = iVar0;
			break;
	}
}

int func_104()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_105()
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
		if (func_97())
		{
			return 0;
		}
		if (func_95(155))
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

int func_106(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
		if (!func_107())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_97())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_95(155))
				{
					if (!bParam2)
					{
						func_88();
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
					func_88();
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
				func_88();
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
			func_88();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_107()
{
	return Global_1312834;
}

void func_108(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_88();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

