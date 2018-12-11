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
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x4C9BACA8D249CB13())
	{
		if (!func_143(ScriptParam_237))
		{
			func_137();
		}
	}
	while (true)
	{
		func_136();
		if (func_126())
		{
			func_137();
		}
		if (unk_0xEB97F9F181CDFD2C() != iLocal_67)
		{
			func_137();
		}
		if (unk_0x9279C21787650C40(unk_0x65E13AD984EAAEE8()) != Local_60.f_17)
		{
			func_137();
		}
		unk_0x8FDBFB2064ADA8B6();
		switch (func_125(unk_0xD60943E3BE730BF0()))
		{
			case 0:
				if (func_123())
				{
					if (func_122() == 1)
					{
						func_121();
						vLocal_62[unk_0xD60943E3BE730BF0() /*3*/] = 1;
					}
					else if (func_122() == 4)
					{
						vLocal_62[unk_0xD60943E3BE730BF0() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_122() == 1)
				{
					func_103();
				}
				else if (func_122() == 4)
				{
					vLocal_62[unk_0xD60943E3BE730BF0() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_102(&(Local_60.f_21));
				if (func_101(&(Local_60.f_21)))
				{
					vLocal_62[unk_0xD60943E3BE730BF0() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_62[unk_0xD60943E3BE730BF0() /*3*/] = 4;
			
			case 4:
				func_137();
				break;
		}
		if (unk_0x45F99485D7E1C29A())
		{
			switch (func_122())
			{
				case 0:
					if (func_74())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_38();
					if (func_1())
					{
						Local_60 = 4;
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
	if (unk_0x05EFB6A616B6FADE(iLocal_63, 8))
	{
		if (!func_37(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x05EFB6A616B6FADE(Local_60.f_1, 9))
			{
				unk_0x2BCFB39E86340DAA(&(Local_60.f_1), 9);
			}
			return 0;
		}
		else if (unk_0x05EFB6A616B6FADE(Local_60.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_60.f_12 == 0 || Local_60.f_12 == 1)
	{
		if (!unk_0xAABBF7FA3E338B30(Local_60.f_4))
		{
			if (!func_35(Local_60.f_2))
			{
				return 1;
			}
			if (func_34(Local_60.f_3))
			{
				return 1;
			}
			if (Local_60.f_12 > 0)
			{
				return 1;
			}
		}
		if (unk_0x05EFB6A616B6FADE(iLocal_63, 8))
		{
			if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Local_60.f_6, 250f, 250f, 250f, 0, 1, 0))
			{
				if (Local_60.f_18 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_60.f_18 == 1)
			{
				if ((((func_9(unk_0xD4E735F4B6A956AC()) && func_8() != 151) || func_6(unk_0xD4E735F4B6A956AC(), 146)) || func_5()) || func_4())
				{
					func_13();
					if (unk_0x83A1DA4E6C55E952(Local_60.f_4))
					{
						func_3(&(Local_60.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		if (!unk_0xABF0452BE64AD290(*uParam0))
		{
		}
	}
	if (unk_0xAABBF7FA3E338B30(*uParam0))
	{
		uVar0 = unk_0x1C3E3FC5D339FC8C(*uParam0);
		unk_0x901EB5F80E22EEBF(&uVar0);
	}
}

var func_4()
{
	return Global_1312416;
}

var func_5()
{
	return Global_2524719.f_4880;
}

int func_6(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/] == iParam1)
	{
		return func_7(iParam0);
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_8()
{
	return Global_1643357;
}

int func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		return 1;
	}
	if (func_10(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

bool func_11(int iParam0, int iParam1)
{
	return unk_0x05EFB6A616B6FADE(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

int func_12(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

void func_13()
{
	if (unk_0x83A1DA4E6C55E952(Local_60.f_4))
	{
		if (Global_262145.f_19684 > 0)
		{
			func_31(Global_262145.f_19684, 0);
			func_14(Global_262145.f_19684, 14, 2, 1);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_30(iParam1), 16);
	StringCopy(&Var1, func_29(iParam2), 16);
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
	if (func_28())
	{
		func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4262927[iVar3 /*80*/].f_13.f_40 = { Var0 };
		Global_4262927[iVar3 /*80*/].f_13.f_44 = { Var1 };
	}
	else
	{
		unk_0x4F7E5FD76186605D(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_28())
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
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_27()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_22(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_17(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x2BCFB39E86340DAA(&(Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_18(iParam0);
	}
}

void func_18(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_21(iParam0))
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
		func_19(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_19(var uParam0)
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
	func_20(&(uParam0->f_13));
	func_20(&(uParam0->f_13.f_13));
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

void func_20(var uParam0)
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

int func_21(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)
{
	Global_2460521 = iParam1;
	Global_2460520 = iParam0;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_28())
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
				func_24(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_24(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_26(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_25();
		unk_0x04F37AFC39D93909(1, &vVar0, 35, iVar1);
	}
}

void func_25()
{
	unk_0xD75A4240F0AD8613("AM_ARENA_SHP");
}

var func_26(int iParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, iParam0);
	return uVar0;
}

int func_27()
{
	return Global_1312736;
}

int func_28()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

char* func_29(int iParam0)
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

char* func_30(int iParam0)
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

void func_31(int iParam0, int iParam1)
{
	func_33(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_32(iParam0, 0);
	}
}

void func_32(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_33(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_32(iVar1, 0);
	}
}

int func_34(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return unk_0x4915F4759304D5CF(unk_0x8A5B683BACF7B78C(uParam0));
	}
	return 1;
}

int func_35(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		return !func_36(unk_0xBEA1D935EBAA95F3(uParam0));
	}
	return 0;
}

int func_36(int iParam0)
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

int func_37(int iParam0, bool bParam1, bool bParam2)
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

void func_38()
{
	switch (Local_60.f_12)
	{
		case 0:
			if (Local_60.f_18)
			{
				func_73();
			}
			else
			{
				func_68();
			}
			if (func_42())
			{
				func_41();
				Local_60.f_12 = 1;
			}
			break;
		
		case 1:
			if (unk_0x83A1DA4E6C55E952(Local_60.f_4))
			{
				func_40(Local_60.f_4, 18);
				if (Local_60.f_15 == 3)
				{
					if (!unk_0x83A1DA4E6C55E952(Local_60.f_5))
					{
						Local_60.f_15 = 2;
					}
				}
				if (unk_0x83A1DA4E6C55E952(Local_60.f_2))
				{
					func_39(&(Local_60.f_2));
				}
				else if (Local_60.f_13 == 1)
				{
					Local_60.f_13 = 0;
				}
				if (unk_0x83A1DA4E6C55E952(Local_60.f_3))
				{
					func_39(&(Local_60.f_3));
				}
				else if (Local_60.f_14 == 1)
				{
					Local_60.f_14 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_39(var uParam0)
{
	var uVar0;
	
	if (unk_0xAABBF7FA3E338B30(*uParam0))
	{
		uVar0 = unk_0x1C3E3FC5D339FC8C(*uParam0);
		unk_0x69C8D2CAA0701F42(&uVar0);
	}
}

void func_40(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	
	unk_0x1C828C4226A9FADF(iParam1, &uVar3, &uVar4, &uVar5, &uVar6);
	fVar2 = 0.5f;
	unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(unk_0xEA0B19D3958DA45D(uParam0)), &vVar0, &vVar1);
	fVar7 = ((vVar1.z - vVar0.z) / 2f);
	fVar8 = (vVar1.z - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	unk_0xC0BA7F3D0AB2E224(2, unk_0xE2BBD32891C18569(unk_0xEA0B19D3958DA45D(uParam0), 1) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_41()
{
	if (!unk_0xCE3CB618AFE55EFB(iLocal_64))
	{
		iLocal_64 = unk_0x6A15DD6A863D5E27(unk_0xEA0B19D3958DA45D(Local_60.f_4));
		if (Local_60.f_18)
		{
			unk_0x7DB79A42AADE120F(iLocal_64, 84);
			unk_0x575CF00E129E0CE1(iLocal_64, 1.2f);
			unk_0xC4F12E446CCE89F5(iLocal_64, "AMD_BLIPBALL");
		}
		else
		{
			unk_0x7DB79A42AADE120F(iLocal_64, 351);
			unk_0xC4F12E446CCE89F5(iLocal_64, "AMD_BLIPN");
			unk_0x575CF00E129E0CE1(iLocal_64, 0.7f);
		}
		unk_0x570128B7829A8EAA(iLocal_64, 2);
		unk_0xE8C2974337833D20(iLocal_64, 120);
	}
}

int func_42()
{
	if (!unk_0x05EFB6A616B6FADE(Local_60.f_1, 7))
	{
		if (func_35(Local_60.f_2))
		{
			if (unk_0xA60C975CBAB69F34(unk_0xBEA1D935EBAA95F3(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, 0, 1, 0))
			{
				unk_0x2BCFB39E86340DAA(&(Local_60.f_1), 7);
			}
		}
	}
	else if (func_123())
	{
		if (func_45())
		{
			if (func_43())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_43()
{
	unk_0xCACEBBBEAD8F262E(Local_60.f_19.f_1);
	if (unk_0x7FC99CCC73354033(Local_60.f_19.f_1))
	{
		if (!unk_0x83A1DA4E6C55E952(Local_60.f_19) && unk_0x83A1DA4E6C55E952(Local_60.f_4))
		{
			if (unk_0x848676C5BE0721E5(1))
			{
				if (func_44(&(Local_60.f_19), Local_60.f_19.f_1, unk_0xE2BBD32891C18569(unk_0xEA0B19D3958DA45D(Local_60.f_4), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0))
				{
					unk_0x2F16A8714FE53E5C(Local_60.f_19, 1);
					unk_0x92DDCF53AA47A63D(unk_0xEA0B19D3958DA45D(Local_60.f_19), unk_0x552C823E1D2A019C(unk_0xEA0B19D3958DA45D(Local_60.f_4)));
					unk_0x96B71B23D409A3DB(unk_0xEA0B19D3958DA45D(Local_60.f_4), unk_0xEA0B19D3958DA45D(Local_60.f_19), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
					unk_0xDDCF77D7F7484413(unk_0xEA0B19D3958DA45D(Local_60.f_19), 1);
					unk_0xEAF1F3E17588C851(unk_0xEA0B19D3958DA45D(Local_60.f_19), 0);
					unk_0x817FED698F1BED49(unk_0xEA0B19D3958DA45D(Local_60.f_19));
					unk_0xE192BEF245E3374D(unk_0xEA0B19D3958DA45D(Local_60.f_19), 0f, 0f, -0.2f);
					unk_0x31E63B7EFDE0E234(unk_0xEA0B19D3958DA45D(Local_60.f_19), 1);
				}
			}
		}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_60.f_19))
	{
		return 0;
	}
	return 1;
}

int func_44(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (!unk_0x848676C5BE0721E5(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x457447BBA7BDCC28(unk_0xDAD26B7BC6DCE4C1(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x457447BBA7BDCC28(unk_0xFCFC8CC5FF74580D(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		unk_0xEAF1F3E17588C851(unk_0xEA0B19D3958DA45D(*uParam0), iParam6);
		if (unk_0xCC1BBE3267AB0DC9(unk_0xEA0B19D3958DA45D(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x2F16A8714FE53E5C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0xCACEBBBEAD8F262E(iVar0);
	unk_0xCACEBBBEAD8F262E(joaat("p_cargo_chute_s"));
	if (unk_0x7FC99CCC73354033(iVar0) && unk_0x7FC99CCC73354033(joaat("p_cargo_chute_s")))
	{
		if (!unk_0x83A1DA4E6C55E952(Local_60.f_4) && !unk_0x83A1DA4E6C55E952(Local_60.f_5))
		{
			if (func_35(Local_60.f_2) && unk_0x36DEA7E26CBAB441(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!unk_0x83A1DA4E6C55E952(Local_60.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("pickup_ammo_bullet_mp");
					if (Local_60.f_18 == 1)
					{
						iVar3 = joaat("pickup_weapon_minigun");
					}
					if (Local_60.f_18 == 0)
					{
						unk_0x2BCFB39E86340DAA(&iVar2, 12);
					}
					else
					{
						unk_0x2BCFB39E86340DAA(&iVar2, 12);
					}
					Local_60.f_4 = unk_0x457447BBA7BDCC28(unk_0x8CE9E6FCB0AF8C32(iVar3, unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 1) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, 1, 1));
					if (Local_60.f_18 == 1)
					{
						func_67(unk_0xEA0B19D3958DA45D(Local_60.f_4));
						unk_0x395A699BD2C930D5(0);
					}
					unk_0x33CF95E95A476FB9(unk_0xEA0B19D3958DA45D(Local_60.f_4), 1);
					unk_0x80E69989959523E8(unk_0xEA0B19D3958DA45D(Local_60.f_4), 1);
					unk_0xDDCF77D7F7484413(unk_0xEA0B19D3958DA45D(Local_60.f_4), 1);
					unk_0xEAF1F3E17588C851(unk_0xEA0B19D3958DA45D(Local_60.f_4), 0);
					unk_0x817FED698F1BED49(unk_0xEA0B19D3958DA45D(Local_60.f_4));
					func_66();
					iVar4 = unk_0x7A3ECD08D6D1D554();
					unk_0x6020229E34827A69(iVar4, "Crate_Beeps", unk_0xEA0B19D3958DA45D(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", 1, 0);
					Local_60.f_16 = unk_0xE5F5A3208558AABD(iVar4);
				}
				if (unk_0x83A1DA4E6C55E952(Local_60.f_4) && !unk_0x83A1DA4E6C55E952(Local_60.f_5))
				{
					if (func_44(&(Local_60.f_5), joaat("p_cargo_chute_s"), unk_0xE2BBD32891C18569(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 1) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0))
					{
						unk_0x2F16A8714FE53E5C(Local_60.f_5, 1);
						unk_0x96B71B23D409A3DB(unk_0xEA0B19D3958DA45D(Local_60.f_5), unk_0xEA0B19D3958DA45D(Local_60.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0xDDCF77D7F7484413(unk_0xEA0B19D3958DA45D(Local_60.f_5), 1);
						unk_0xEAF1F3E17588C851(unk_0xEA0B19D3958DA45D(Local_60.f_5), 0);
						unk_0x63B4688F43DF17B7(unk_0xEA0B19D3958DA45D(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0f, 0);
						unk_0xC4669945DFB7EFAB(unk_0xEA0B19D3958DA45D(Local_60.f_5));
					}
				}
				func_64();
				if (!unk_0x05EFB6A616B6FADE(iLocal_63, 15))
				{
					if (!Local_60.f_18)
					{
						func_63(&uLocal_72, 3, unk_0x8A5B683BACF7B78C(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
						func_46(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					unk_0x2BCFB39E86340DAA(&iLocal_63, 15);
				}
			}
		}
	}
	if (unk_0x83A1DA4E6C55E952(Local_60.f_4) && unk_0x83A1DA4E6C55E952(Local_60.f_5))
	{
		return 1;
	}
	return 0;
}

int func_46(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_62(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_47(sParam2, iParam3, 0);
}

int func_47(char* sParam0, int iParam1, bool bParam2)
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
					func_61();
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
		if (func_60(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_59();
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
				func_52();
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
				if (func_51())
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
			if (func_50())
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
			func_49();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_48();
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
		func_61();
	}
	return 0;
}

void func_48()
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

void func_49()
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

int func_50()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_51()
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

void func_52()
{
	if (func_58(14))
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
		Global_14513 = func_53();
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

var func_53()
{
	func_54();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_54()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_57(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_56(unk_0xA19140A5C42D8715());
			if (func_55(iVar0) && (!func_58(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_55(Global_106070.f_2355.f_539.f_4301))
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

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_57(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_58(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_59()
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

bool func_60(int iParam0, int iParam1)
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

void func_61()
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

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_64()
{
	if (func_65())
	{
		if (!unk_0x059A39F1D399060B(iLocal_66))
		{
			iLocal_66 = unk_0x0A3A21D34AEFDD66("scr_crate_drop_beacon", unk_0xEA0B19D3958DA45D(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
			unk_0xFFF683C953C75A82(iLocal_66, 0.8f, 0.18f, 0.19f, 0);
		}
	}
	if (!unk_0x059A39F1D399060B(iLocal_66))
	{
		return 0;
	}
	return 1;
}

int func_65()
{
	unk_0x788BCD68EF8935BE();
	if (unk_0x5488D97A1366CE04())
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	if (unk_0xDB0E617D615BC62A(Local_60.f_16) != -1)
	{
		if (unk_0x83A1DA4E6C55E952(Local_60.f_4))
		{
			if (!unk_0x57269F5E44F5F616(unk_0xDB0E617D615BC62A(Local_60.f_16)))
			{
				unk_0x5DE59A67B5F326CF(unk_0xDB0E617D615BC62A(Local_60.f_16));
			}
			unk_0xB4442316D0B880FD(unk_0xDB0E617D615BC62A(Local_60.f_16));
		}
		else
		{
			if (!unk_0x57269F5E44F5F616(unk_0xDB0E617D615BC62A(Local_60.f_16)))
			{
				unk_0x5DE59A67B5F326CF(unk_0xDB0E617D615BC62A(Local_60.f_16));
			}
			unk_0xB4442316D0B880FD(unk_0xDB0E617D615BC62A(Local_60.f_16));
		}
	}
}

void func_67(var uParam0)
{
	var uVar0;
	
	unk_0x2BCFB39E86340DAA(&uVar0, unk_0x8D4ED2C97DFF2321());
	unk_0x0189DE5836BC4E8C(uParam0, uVar0);
}

void func_68()
{
	int iVar0;
	
	if (!unk_0x05EFB6A616B6FADE(iLocal_63, 11))
	{
		if (!unk_0xE06AA0996C4E4E03())
		{
			iVar0 = func_72(1190, -1, 0);
			if (!unk_0x05EFB6A616B6FADE(iVar0, 10))
			{
				func_71("AMD_HELP1", -1);
				unk_0x2BCFB39E86340DAA(&iVar0, 10);
				func_69(1190, iVar0, -1, 1, 0);
				unk_0x2BCFB39E86340DAA(&iLocal_63, 11);
			}
			else if (!unk_0x05EFB6A616B6FADE(iVar0, 11))
			{
				func_71("AMD_HELP2", -1);
				unk_0x2BCFB39E86340DAA(&iVar0, 11);
				func_69(1190, iVar0, -1, 1, 0);
				unk_0x2BCFB39E86340DAA(&iLocal_63, 11);
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&iLocal_63, 11);
			}
		}
	}
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_70(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

void func_71(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_70(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_73()
{
	int iVar0;
	
	if (!unk_0x05EFB6A616B6FADE(iLocal_63, 17))
	{
		if (!unk_0xE06AA0996C4E4E03())
		{
			iVar0 = func_72(1190, -1, 0);
			if (!unk_0x05EFB6A616B6FADE(iVar0, 24))
			{
				func_71("BALD_HELP1", -1);
				unk_0x2BCFB39E86340DAA(&iVar0, 24);
				func_69(1190, iVar0, -1, 1, 0);
				unk_0x2BCFB39E86340DAA(&iLocal_63, 17);
			}
			else if (!unk_0x05EFB6A616B6FADE(iVar0, 25))
			{
				func_71("BALD_HELP2", -1);
				unk_0x2BCFB39E86340DAA(&iVar0, 25);
				func_69(1190, iVar0, -1, 1, 0);
				unk_0x2BCFB39E86340DAA(&iLocal_63, 17);
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&iLocal_63, 17);
			}
		}
	}
}

int func_74()
{
	if (func_100(joaat("cuban800")) && func_100(joaat("s_m_m_pilot_02")))
	{
		if (func_98(&uLocal_70, 4000, 0))
		{
			if (func_77() && func_75())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75()
{
	if ((!unk_0x83A1DA4E6C55E952(Local_60.f_3) && func_100(joaat("s_m_m_pilot_02"))) && unk_0x83A1DA4E6C55E952(Local_60.f_2))
	{
		if (func_35(Local_60.f_2))
		{
			if (func_76(&(Local_60.f_3), Local_60.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				unk_0x1F4E5EFBFE503FB3(unk_0x8A5B683BACF7B78C(Local_60.f_3), 1);
				unk_0xDFA901280292A2FB(unk_0x8A5B683BACF7B78C(Local_60.f_3), Global_1574981);
				unk_0x8695E04AA104690A(unk_0x8A5B683BACF7B78C(Local_60.f_3), 0);
				unk_0xD738221C247C8B71(unk_0x8A5B683BACF7B78C(Local_60.f_3), 1);
				unk_0x6259CDB47862A4F3(unk_0x8A5B683BACF7B78C(Local_60.f_3), round((200f * Global_262145.f_153)), 0);
				func_121();
				unk_0xE1072FA2FECBAD96(unk_0x8A5B683BACF7B78C(Local_60.f_3), uLocal_65);
				unk_0xB571438B26CCDF68(unk_0xBEA1D935EBAA95F3(Local_60.f_2), round(50f));
			}
		}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_60.f_3))
	{
		return 0;
	}
	unk_0xA5DE74AE39867B03(joaat("s_m_m_pilot_02"));
	return 1;
}

int func_76(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_77()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x83A1DA4E6C55E952(Local_60.f_2))
	{
		if (func_100(joaat("cuban800")))
		{
			func_95(&vVar0, &fVar1);
			if (func_79(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (func_78(&(Local_60.f_2), joaat("cuban800"), vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0x14293208022014FA(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 2);
					unk_0xB29E08C7AB729BAD(unk_0xBEA1D935EBAA95F3(Local_60.f_2), false);
					unk_0x9018100BC4DCB099(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 1);
					unk_0x817FED698F1BED49(unk_0xBEA1D935EBAA95F3(Local_60.f_2));
					unk_0x625FB4B0328423D9(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 60f);
					unk_0xA7E7312A2DC89797(unk_0xBEA1D935EBAA95F3(Local_60.f_2));
					unk_0xC19EDC1D7179164C(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 1, 1, 0);
					unk_0x73D0CBD6409B6E83(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 0);
					unk_0xEAF1F3E17588C851(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 0);
					unk_0x37B223069072EA25(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 3);
					unk_0x8B6DB2F9B5288ECF(unk_0xBEA1D935EBAA95F3(Local_60.f_2));
					if (Local_60.f_18 == 1)
					{
						unk_0xD6CDDEFB0FD5B191(unk_0xBEA1D935EBAA95F3(Local_60.f_2), 1, 0, 1, 0, 0, 0, 0, 0);
					}
				}
			}
		}
	}
	if (!unk_0x83A1DA4E6C55E952(Local_60.f_2))
	{
		return 0;
	}
	unk_0xA5DE74AE39867B03(joaat("cuban800"));
	return 1;
}

int func_78(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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

int func_79(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_88(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_80(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_80(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_37(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			if (!unk_0x71364F510A1CB69F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x499324B3EF19C288(func_84(unk_0xD4E735F4B6A956AC()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_37(iVar1, 1, 1))
		{
			if (!func_82(iVar1, 0) && unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD4E735F4B6A956AC()))
				{
					if ((func_81(iVar1) || !bParam8) && !Global_2423801[iVar1 /*413*/].f_259)
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
								if (unk_0x499324B3EF19C288(func_84(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x499324B3EF19C288(func_84(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_81(int iParam0)
{
	if (unk_0xD9755B4480864A6A(unk_0xEE978C39384D834F(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_82(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_83(-1, 0) == 8;
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

int func_83(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

Vector3 func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_87() && Global_1589747[iVar0 /*790*/].f_761) && !func_86(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_85(iParam0);
}

Vector3 func_85(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

int func_86(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_87()
{
	return Global_2448386.f_16;
}

int func_88(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD4E735F4B6A956AC() != iVar1) || iParam6 == 0)
		{
			if (func_37(iVar1, bParam2, bParam3))
			{
				if (unk_0xBC6A832F36065FDF(unk_0xD4E735F4B6A956AC(), iVar1))
				{
					if (!bParam5 || (!unk_0x4915F4759304D5CF(unk_0xEE978C39384D834F(iVar1)) && func_81(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) != unk_0xE46ECB9FD23D3264(iVar1))) || unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1)
						{
							if (((unk_0xE46ECB9FD23D3264(unk_0xD4E735F4B6A956AC()) == -1 && uParam7) && bParam4) && func_89(iVar1))
							{
							}
							else if (unk_0xDC5D81351D6A4DDB(unk_0xEE978C39384D834F(iVar1)))
							{
								if (unk_0x499324B3EF19C288(func_85(iVar1), vParam0, 1) < fParam1)
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

int func_89(int iParam0)
{
	if (func_94(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_93(iParam0) };
	if (unk_0x6053E2C13442D6D7(&Global_2503649))
	{
		return 1;
	}
	if (func_90(unk_0xD4E735F4B6A956AC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (!iVar0 == func_91())
	{
		if (iVar0 == func_92(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_91()
{
	return -1;
}

int func_92(int iParam0)
{
	if (iParam0 != func_91())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_91();
}

struct<13> func_93(int iParam0)
{
	struct<13> Var0;
	
	unk_0xE05C4303C26882C4(iParam0, &Var0, 13);
	return Var0;
}

int func_94(int iParam0, int iParam1)
{
	if (unk_0xD1832FEBE50B1AB1())
	{
		Global_2503649 = { func_93(iParam0) };
		Global_2503662 = { func_93(iParam1) };
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

void func_95(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_96(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = unk_0x0C1B8F3F6EFDC58B((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = unk_0x3E33778629BF0886((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_96(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0xF59B9063EDAC7451(-1f, 1f), unk_0xF59B9063EDAC7451(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_97(vVar0, unk_0xF59B9063EDAC7451(fParam1, fParam2)) };
	vVar0.z = unk_0xF59B9063EDAC7451(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_97(vector3 vParam0, float fParam1)
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

int func_98(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_99(uParam0, bParam2, 0);
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

void func_99(var uParam0, bool bParam1, bool bParam2)
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

bool func_100(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCACEBBBEAD8F262E(iParam0);
	return unk_0x7FC99CCC73354033(iParam0);
}

int func_101(var uParam0)
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

void func_102(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x45F99485D7E1C29A())
		{
			func_99(uParam0, 0, 0);
		}
	}
}

void func_103()
{
	func_112();
	switch (vLocal_62[unk_0xD60943E3BE730BF0() /*3*/].f_2)
	{
		case 0:
			if (Local_60.f_12 > 0)
			{
				vLocal_62[unk_0xD60943E3BE730BF0() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_108();
			func_104();
			break;
		
		case 2:
			func_137();
			break;
	}
}

void func_104()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83A1DA4E6C55E952(Local_60.f_4))
	{
		if (func_37(unk_0xD4E735F4B6A956AC(), 1, 1))
		{
			iVar1 = func_107(unk_0xA19140A5C42D8715());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1312415;
			}
			unk_0x777DF4661165BA4B(unk_0xA19140A5C42D8715(), iVar1, &iVar0);
			if ((func_106(iVar1) && func_105(iVar1)) && unk_0x8F62F4EC66847EC2(unk_0xA19140A5C42D8715(), iVar1) < iVar0)
			{
			}
			else if (unk_0x45F99485D7E1C29A())
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_63, 12))
				{
					if (!unk_0xE06AA0996C4E4E03())
					{
						if (Local_60.f_18)
						{
							func_71("BALD_HELP3", -1);
						}
						else
						{
							func_71("AMD_HELP3", -1);
						}
						unk_0x2BCFB39E86340DAA(&iLocal_63, 12);
					}
				}
				else if (!unk_0x05EFB6A616B6FADE(iLocal_63, 13))
				{
					if (!unk_0xE06AA0996C4E4E03())
					{
						if (unk_0xAABBF7FA3E338B30(Local_60.f_4))
						{
							if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), unk_0xEA0B19D3958DA45D(Local_60.f_4), 10f, 10f, 10f, 0, 1, 0))
							{
								if (func_98(&uLocal_68, 20000, 0))
								{
									if (!Local_60.f_18)
									{
										func_71("AMD_HELP3", -1);
									}
									unk_0x2BCFB39E86340DAA(&iLocal_63, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_105(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_106(int iParam0)
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0;
	}
	return 1;
}

var func_107(int iParam0)
{
	var uVar0;
	
	unk_0xF990CFC0F1D94A39(iParam0, &uVar0, 1);
	return uVar0;
}

void func_108()
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	
	if (unk_0xAABBF7FA3E338B30(Local_60.f_4))
	{
		if (unk_0xABF0452BE64AD290(Local_60.f_4) || (!unk_0x8F01F94322569B77(Local_60.f_4) && unk_0x45F99485D7E1C29A()))
		{
			if (unk_0xAABBF7FA3E338B30(Local_60.f_5))
			{
				if (unk_0xABF0452BE64AD290(Local_60.f_5) || (!unk_0x8F01F94322569B77(Local_60.f_5) && unk_0x45F99485D7E1C29A()))
				{
					if (func_111(Local_60.f_4) && func_111(Local_60.f_5))
					{
						if (!unk_0x05EFB6A616B6FADE(iLocal_63, 8))
						{
							if (unk_0x05EFB6A616B6FADE(iLocal_63, 7))
							{
								if (!unk_0x411C28019DEA5CEF(unk_0xEA0B19D3958DA45D(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x2BCFB39E86340DAA(&iLocal_63, 8);
									func_3(&(Local_60.f_5));
									if (Local_60.f_18 == 1)
									{
										func_67(unk_0xEA0B19D3958DA45D(Local_60.f_4));
									}
								}
							}
						}
						if (!unk_0x05EFB6A616B6FADE(iLocal_63, 7))
						{
							if (unk_0x05EFB6A616B6FADE(iLocal_63, 6))
							{
								if (unk_0x411C28019DEA5CEF(unk_0xEA0B19D3958DA45D(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x2BCFB39E86340DAA(&iLocal_63, 7);
								}
							}
						}
						if (!unk_0x05EFB6A616B6FADE(iLocal_63, 6))
						{
							unk_0x849451C9D782701D(unk_0xEA0B19D3958DA45D(Local_60.f_4), 2, 0.0245f);
							if (func_109())
							{
								unk_0x63B4688F43DF17B7(unk_0xEA0B19D3958DA45D(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0f, 0);
								unk_0x2BCFB39E86340DAA(&iLocal_63, 6);
								if (unk_0xCE3CB618AFE55EFB(iLocal_64))
								{
									unk_0xE8C2974337833D20(iLocal_64, 255);
								}
							}
						}
					}
				}
			}
			if (!unk_0x05EFB6A616B6FADE(iLocal_63, 14))
			{
				if (unk_0xAABBF7FA3E338B30(Local_60.f_19))
				{
					if (unk_0xABF0452BE64AD290(Local_60.f_19) || (!unk_0x8F01F94322569B77(Local_60.f_19) && unk_0x45F99485D7E1C29A()))
					{
						if (func_111(Local_60.f_19))
						{
							unk_0x849451C9D782701D(unk_0xEA0B19D3958DA45D(Local_60.f_19), 2, 0.1f);
							if (unk_0x53C1CCE5622F35FF(unk_0xEA0B19D3958DA45D(Local_60.f_19)))
							{
								if (unk_0xAABBF7FA3E338B30(Local_60.f_4))
								{
									unk_0xF334C9B245CD323D(unk_0xEA0B19D3958DA45D(Local_60.f_4), 1, 1);
									if (Local_60.f_18 == 1)
									{
										func_67(unk_0xEA0B19D3958DA45D(Local_60.f_4));
									}
								}
								unk_0x2BCFB39E86340DAA(&iLocal_63, 14);
							}
						}
						if (!unk_0x05EFB6A616B6FADE(Local_60.f_1, 8) && unk_0x05EFB6A616B6FADE(iLocal_63, 8))
						{
							if (func_111(Local_60.f_19))
							{
								if (!unk_0x5A64D21C202C9E32(unk_0xEA0B19D3958DA45D(Local_60.f_19)) && unk_0x1DFA0F445E8B1C09(unk_0xEA0B19D3958DA45D(Local_60.f_19)))
								{
									if (unk_0x80C8B831B972D6A0(unk_0xEA0B19D3958DA45D(Local_60.f_19)))
									{
										bVar0 = true;
									}
									else if (!unk_0x26D28D230F871E8D(unk_0xEA0B19D3958DA45D(Local_60.f_19)) && unk_0xEC702053BF35BAD5(unk_0xEA0B19D3958DA45D(Local_60.f_19)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										unk_0x31E63B7EFDE0E234(unk_0xEA0B19D3958DA45D(Local_60.f_19), 0);
										unk_0x2BCFB39E86340DAA(&(Local_60.f_1), 8);
									}
									if (Local_60.f_18 == 1)
									{
										func_67(unk_0xEA0B19D3958DA45D(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			vVar1 = { unk_0xE2BBD32891C18569(unk_0xEA0B19D3958DA45D(Local_60.f_4), 1) };
			if (vVar1.z < -50f && !unk_0x4374EED90C523366(unk_0xEA0B19D3958DA45D(Local_60.f_4)))
			{
				if (func_111(Local_60.f_4))
				{
					unk_0x4299736016AECE26(unk_0xEA0B19D3958DA45D(Local_60.f_4), Local_60.f_6, 1, 0, 0, 1);
					if (Local_60.f_18 == 1)
					{
						func_67(unk_0xEA0B19D3958DA45D(Local_60.f_4));
					}
				}
			}
			if (unk_0xAABBF7FA3E338B30(Local_60.f_4))
			{
				if (unk_0xAABBF7FA3E338B30(Local_60.f_19) && unk_0xF797E4DD45066C88(unk_0xEA0B19D3958DA45D(Local_60.f_4)))
				{
					iVar2 = unk_0xEA0B19D3958DA45D(Local_60.f_19);
				}
				else
				{
					iVar2 = unk_0xEA0B19D3958DA45D(Local_60.f_4);
				}
			}
			if (unk_0xDC5D81351D6A4DDB(iVar2))
			{
				if (!unk_0x05EFB6A616B6FADE(iLocal_63, 16))
				{
					if (unk_0x0FD5C826D2659CD1(iVar2) >= 0.9f)
					{
						if (unk_0xDB0E617D615BC62A(Local_60.f_16) != -1)
						{
							unk_0x5D311B11B00F19D4(unk_0xDB0E617D615BC62A(Local_60.f_16), "Crate_Underwater", 1f);
						}
						unk_0x2BCFB39E86340DAA(&iLocal_63, 16);
					}
				}
				else if (unk_0x0FD5C826D2659CD1(iVar2) < 0.9f)
				{
					if (unk_0xDB0E617D615BC62A(Local_60.f_16) != -1)
					{
						unk_0x5D311B11B00F19D4(unk_0xDB0E617D615BC62A(Local_60.f_16), "Crate_Underwater", 0f);
					}
					unk_0xFA57C719261AA55D(&iLocal_63, 16);
				}
			}
		}
	}
}

int func_109()
{
	int iVar0;
	
	if (unk_0xAABBF7FA3E338B30(Local_60.f_19))
	{
		if (!unk_0x26D28D230F871E8D(unk_0xEA0B19D3958DA45D(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (unk_0x53C1CCE5622F35FF(unk_0xEA0B19D3958DA45D(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (unk_0x4374EED90C523366(unk_0xEA0B19D3958DA45D(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (func_110())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_111(Local_60.f_19))
			{
				unk_0x31E63B7EFDE0E234(unk_0xEA0B19D3958DA45D(Local_60.f_19), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_110()
{
	float fVar0;
	
	fVar0 = unk_0x880CEE6450F10432(unk_0xEA0B19D3958DA45D(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0x83ED9EAE6B660383(unk_0xEA0B19D3958DA45D(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_111(var uParam0)
{
	if (unk_0x83A1DA4E6C55E952(uParam0))
	{
		unk_0xEDB53D3BCBFC886E(uParam0);
		return unk_0xABF0452BE64AD290(uParam0);
	}
	return 0;
}

void func_112()
{
	int iVar0;
	
	iVar0 = unk_0xA373CB83DA86BA00(false, 0);
	if (Local_60.f_13 != iVar0)
	{
		if (Local_60.f_13 > 0 || !unk_0x83A1DA4E6C55E952(Local_60.f_2))
		{
			if (Local_60.f_13 < iVar0 || func_120(Local_60.f_13, 0, 1))
			{
				unk_0xA721D9ED3827732A(Local_60.f_13);
			}
		}
	}
	iVar0 = unk_0xBCC2AC37F56D2149(false, 0);
	if (Local_60.f_14 != iVar0)
	{
		if (Local_60.f_14 > 0 || !unk_0x83A1DA4E6C55E952(Local_60.f_3))
		{
			if (Local_60.f_14 < iVar0 || func_119(Local_60.f_14, 0, 1))
			{
				unk_0x7F2854D39965C275(Local_60.f_14);
			}
		}
	}
	iVar0 = unk_0x2FC83B1E3A760AA3(false, 0);
	if (Local_60.f_15 != iVar0)
	{
		if (Local_60.f_15 < iVar0 || func_113(Local_60.f_15, 0, 1))
		{
			unk_0xC0E0EC37CC7BA185(Local_60.f_15);
		}
	}
}

int func_113(int iParam0, bool bParam1, bool bParam2)
{
	return func_114(2, iParam0, 1, bParam1, bParam2);
}

int func_114(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x05EFB6A616B6FADE(Global_1380171, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_118(iParam0) - func_117(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_117(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_118(iParam0) - func_116(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_117(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_118(iParam0) - func_117(iParam0, 1));
		}
		if (!bParam4 && Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_115(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)
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

int func_116(int iParam0)
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

int func_117(int iParam0, bool bParam1)
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

int func_118(int iParam0)
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

int func_119(int iParam0, bool bParam1, bool bParam2)
{
	return func_114(0, iParam0, 1, bParam1, bParam2);
}

int func_120(int iParam0, bool bParam1, bool bParam2)
{
	return func_114(1, iParam0, 1, bParam1, bParam2);
}

void func_121()
{
	if (!unk_0x05EFB6A616B6FADE(iLocal_63, 10))
	{
		if (func_35(Local_60.f_2))
		{
			unk_0x2F89329397A277BC(&uLocal_65);
			unk_0xE49301B2B6F420DE(0, unk_0xBEA1D935EBAA95F3(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			unk_0xE49301B2B6F420DE(0, unk_0xBEA1D935EBAA95F3(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			unk_0x301F42EEE3C40328(uLocal_65);
			unk_0x2BCFB39E86340DAA(&iLocal_63, 10);
		}
	}
}

int func_122()
{
	return Local_60;
}

int func_123()
{
	int iVar0;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0xCACEBBBEAD8F262E(iVar0);
	unk_0xCACEBBBEAD8F262E(joaat("p_cargo_chute_s"));
	if ((unk_0x7FC99CCC73354033(iVar0) && unk_0x7FC99CCC73354033(joaat("p_cargo_chute_s"))) && func_124())
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	unk_0x6D68030C791111E0("P_cargo_chute_S");
	if (unk_0x39C2D9AB77873F84("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	return vLocal_62[iParam0 /*3*/];
}

int func_126()
{
	var uVar0;
	
	func_133(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_132())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_131())
	{
		return 1;
	}
	if (func_130(157))
	{
		if (!func_129())
		{
			return 1;
		}
	}
	if (func_130(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_127() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_127()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_127()
{
	switch (func_128())
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

int func_128()
{
	return Global_25459;
}

bool func_129()
{
	return Global_2448386.f_587;
}

int func_130(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_131()
{
	return Global_2458191;
}

bool func_132()
{
	return Global_2448386.f_582;
}

void func_133(var uParam0)
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
					func_134(iVar0);
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

void func_134(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &vVar0, 3))
	{
		if (func_37(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xEE978C39384D834F(vVar0.y);
			if (unk_0xDC5D81351D6A4DDB(iVar1))
			{
				if (unk_0x5D7DFE2058701942(iVar1, 0))
				{
					iVar2 = unk_0xCAEB6CE71A2C7212(iVar1, 0);
					if (unk_0xEB1A41F6F719807C(iVar2, vVar0.z) && unk_0xB592B7A61F21E7A5())
					{
						if (func_135(iVar2, &bVar3))
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

int func_135(int iParam0, var uParam1)
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

void func_136()
{
	wait(0);
}

void func_137()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xCE3CB618AFE55EFB(iLocal_64))
	{
		unk_0xE1623437A3194332(&iLocal_64);
	}
	if (unk_0x45F99485D7E1C29A())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (unk_0xAABBF7FA3E338B30(Local_60.f_19))
				{
					if (unk_0x53C1CCE5622F35FF(unk_0xEA0B19D3958DA45D(Local_60.f_19)))
					{
						if (func_111(Local_60.f_19))
						{
							unk_0x31E63B7EFDE0E234(unk_0xEA0B19D3958DA45D(Local_60.f_19), 0);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (unk_0xAABBF7FA3E338B30(Local_60.f_4))
				{
					if (unk_0xF797E4DD45066C88(unk_0xEA0B19D3958DA45D(Local_60.f_4)))
					{
						if (func_111(Local_60.f_4))
						{
							unk_0xF334C9B245CD323D(unk_0xEA0B19D3958DA45D(Local_60.f_4), 1, 1);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (unk_0xAABBF7FA3E338B30(Local_60.f_5))
				{
					if (func_111(Local_60.f_5))
					{
						func_3(&(Local_60.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				wait(0);
			}
			iVar0++;
		}
		Local_60 = 4;
		func_141(func_142(1, 1), 8, func_91());
	}
	func_140();
	func_66();
	func_139();
	func_138();
}

void func_138()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_139()
{
	if (unk_0x05EFB6A616B6FADE(iLocal_63, 10))
	{
		unk_0x3A95A0A3221D4208(&uLocal_65);
	}
}

void func_140()
{
	if (iLocal_66 != 0)
	{
		if (unk_0x059A39F1D399060B(iLocal_66))
		{
			unk_0x82E95CCADC55C11E(iLocal_66, 0);
			iLocal_66 = 0;
		}
	}
}

void func_141(int iParam0, int iParam1, var uParam2)
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

int func_142(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
		if (func_37(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD4E735F4B6A956AC() || iParam0)
			{
				if (bParam1)
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
				else if (!func_82(iVar2, 0))
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_143(struct<21> Param0)
{
	int iVar0;
	
	func_147(func_148(Param0), Param0);
	unk_0x7F2854D39965C275(1);
	unk_0xA721D9ED3827732A(1);
	unk_0xC0E0EC37CC7BA185(2);
	func_145(0, -1, 0);
	unk_0xF82A3961787FA0A4(&Local_60, 23);
	unk_0x8BFA7A7AB1D02137(&vLocal_62, 97);
	if (!func_144())
	{
		return 0;
	}
	unk_0x2F3193E06C2EFF44(0);
	if (unk_0x45F99485D7E1C29A())
	{
		Local_60.f_17 = unk_0xD4E735F4B6A956AC();
		Local_60.f_6 = { unk_0x3201284584C7CD83(unk_0xA19140A5C42D8715(), 0f, (5f * 1.5f), 0f) };
		Local_60.f_13 = 1;
		Local_60.f_14 = 1;
		Local_60.f_15 = 3;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_20 == 3)
		{
			Local_60.f_18 = 1;
		}
		iVar0 = unk_0x22C775856F4633CA(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = unk_0x22C775856F4633CA(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	iLocal_67 = unk_0xEB97F9F181CDFD2C();
	if (unk_0x4C9BACA8D249CB13())
	{
		vLocal_62[unk_0xD60943E3BE730BF0() /*3*/] = 0;
	}
	return 1;
}

int func_144()
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
		if (func_132())
		{
			return 0;
		}
		if (func_130(155))
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

int func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_138();
			}
			else
			{
				return 0;
			}
		}
		if (!func_146())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_138();
					}
					else
					{
						return 0;
					}
				}
				if (func_132())
				{
					if (!bParam2)
					{
						func_138();
					}
					else
					{
						return 0;
					}
				}
				if (func_130(155))
				{
					if (!bParam2)
					{
						func_138();
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
					func_138();
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
				func_138();
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
			func_138();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_146()
{
	return Global_1312834;
}

void func_147(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		func_138();
	}
	unk_0x1B0D16DC60698F88(iParam0, 0, Param1.f_16);
}

int func_148(int iParam0)
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

