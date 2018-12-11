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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<6> Local_61 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	var uLocal_74 = 15;
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
	var uLocal_107 = 1;
	struct<18> Local_108[4];
	struct<18> Local_109[8];
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	char* sLocal_132 = NULL;
	char[] cLocal_133[8] = 0;
	char* sLocal_134 = NULL;
	char* sLocal_135 = NULL;
	int iLocal_136[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137 = 0;
	int iLocal_138[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_139[16];
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144[3] = { 0, 0, 0 };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	int iLocal_152[2] = { 0, 0 };
	float fLocal_153 = 0f;
	vector3 vLocal_154 = { 0f, 0f, 0f };
	vector3 vLocal_155 = { 0f, 0f, 0f };
	vector3 vLocal_156 = { 0f, 0f, 0f };
	vector3 vLocal_157 = { 0f, 0f, 0f };
	vector3 vLocal_158 = { 0f, 0f, 0f };
	vector3 vLocal_159 = { 0f, 0f, 0f };
	vector3 vLocal_160 = { 0f, 0f, 0f };
	vector3 vLocal_161[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_162[4] = { 0f, 0f, 0f, 0f };
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	char* sLocal_175[3] = { NULL, NULL, NULL };
	int iLocal_176 = 0;
	char* sLocal_177 = NULL;
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_179 = { 0f, 0f, 0f };
	float fLocal_180 = 0f;
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_182 = { 0f, 0f, 0f };
	float fLocal_183 = 0f;
	vector3 vLocal_184 = { 0f, 0f, 0f };
	vector3 vLocal_185 = { 0f, 0f, 0f };
	float fLocal_186 = 0f;
	vector3 vLocal_187 = { 0f, 0f, 0f };
	vector3 vLocal_188 = { 0f, 0f, 0f };
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	float fLocal_191 = 0f;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	bool bLocal_194 = 0;
	float fLocal_195 = 0f;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	bool bLocal_198 = 0;
	bool bLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	struct<2> Local_204 = { 0, 5 } ;
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
	var uLocal_220 = 5;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_44 = -1f;
	vLocal_49 = { 226.6825f, 681.0297f, 188.4987f };
	vLocal_50 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_51 = 32.0905f;
	StringCopy(&Local_61, "", 24);
	vLocal_68 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_69 = 283.0367f;
	vLocal_71 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_72 = -18.4743f;
	cLocal_133 = "REPAPAU";
	sLocal_134 = "random@escape_paparazzi@standing@";
	sLocal_135 = "random@escape_paparazzi@incar@";
	iLocal_146 = 4000;
	fLocal_150 = 0f;
	fLocal_151 = 0f;
	fLocal_153 = 0f;
	vLocal_154 = { 272.6356f, 155.5618f, 103.3306f };
	vLocal_155 = { 247.5795f, 88.7094f, 92.9859f };
	vLocal_156 = { 259.0348f, 114.0369f, 98.9984f };
	vLocal_157 = { 255.4971f, 116.8744f, 99.8162f };
	vLocal_158 = { 266.8217f, 139.7698f, 103.2269f };
	vLocal_159 = { 270.0174f, 139.1181f, 103.2195f };
	vLocal_160 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_177 = "left_";
	vLocal_178 = { 261.9341f, 126.2429f, 95.15405f };
	vLocal_179 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_180 = 16f;
	vLocal_181 = { 261.9341f, 126.2429f, 107.6541f };
	vLocal_182 = { 248.354f, 87.01792f, 92.389f };
	fLocal_183 = 16f;
	vLocal_184 = { 256.6779f, 126.573f, 99.54784f };
	vLocal_185 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_186 = 5.75f;
	vLocal_187 = { 260.242f, 127.423f, 101.65f };
	vLocal_188 = { 0f, 0f, -20f };
	vLocal_48 = { ScriptParam_204.f_1[0 /*3*/] };
	if (unk_0x5EBD03AF78E7B4DB(11))
	{
		func_274();
	}
	func_273(&uLocal_74, 3);
	if (!Global_3)
	{
		if (func_231(vLocal_48, -1, 0, 0, 0))
		{
			func_228(-1);
		}
		else
		{
			unk_0x8F1A9FE6D91AAFEB();
		}
	}
	iLocal_126 = unk_0xF66A39BBE7B3C278(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_127 = unk_0xF66A39BBE7B3C278(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	iLocal_128 = unk_0xF66A39BBE7B3C278(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0xFDD15D670AD33E10(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, false);
	}
	unk_0x413F34FCFABEDE4B(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, 1);
	unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		wait(0);
		func_225(&uLocal_74);
		if (!func_224())
		{
			if (func_223())
			{
				func_274();
			}
		}
		unk_0x4789FEFEDF029858("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (unk_0xDC5D81351D6A4DDB(Local_108[iVar0 /*18*/]) && !unk_0x7112137033807390(Local_108[iVar0 /*18*/], 0))
			{
				Local_108[iVar0 /*18*/].f_8 = { unk_0xE2BBD32891C18569(Local_108[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]) && !unk_0x7112137033807390(Local_109[iVar0 /*18*/], 0))
			{
				Local_109[iVar0 /*18*/].f_6 = { unk_0xE2BBD32891C18569(Local_109[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			vLocal_52 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
		}
		if (!unk_0x4915F4759304D5CF(iLocal_67))
		{
			vLocal_53 = { unk_0xE2BBD32891C18569(iLocal_67, true) };
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_70) && !unk_0x7112137033807390(iLocal_70, 0))
		{
			vLocal_54 = { unk_0xE2BBD32891C18569(iLocal_70, true) };
		}
		if (!func_224())
		{
			if (unk_0x1F85F8C7CC4639AE())
			{
				switch (iLocal_130)
				{
					case 0:
						if (func_214())
						{
							func_204();
							iLocal_130++;
						}
						else if (func_192())
						{
							func_274();
						}
						break;
					
					case 1:
						if ((func_191() || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || !unk_0x1095F403F52B42E1(iLocal_70, 0))
						{
							if (!Global_3 && !bLocal_56)
							{
								func_190();
								func_274();
							}
						}
						else if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, true, 0))
						{
							func_181(1);
							iLocal_121 = func_180(iLocal_67, 0, 145);
							func_179("MAG_2_ESCAPE_PAP_GET_CAR");
							func_178(0);
						}
						break;
				}
			}
			else
			{
				func_274();
			}
		}
		else
		{
			unk_0xB1D22059BEC7B532(unk_0xD4E735F4B6A956AC());
			switch (iLocal_45)
			{
				case 0:
					func_175();
					break;
				
				case 1:
					func_172();
					break;
				
				case 2:
					func_150();
					break;
				
				case 3:
					func_138();
					break;
				
				case 4:
					func_105();
					break;
				
				case 10:
					func_274();
					break;
				
				case 5:
					func_104();
					break;
				
				case 6:
					func_101(sLocal_132);
					break;
				
				case 7:
					func_100();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_99())
					{
						if (unk_0xDC5D81351D6A4DDB(iLocal_67))
						{
							unk_0x680F17660351F21B(&iLocal_67);
						}
						func_75();
					}
					break;
				
				case 11:
					func_71();
					break;
			}
			if (!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_53, 210f, 210f, 210f, false, true, 0))
			{
				func_190();
				func_274();
			}
			if (((iLocal_45 != 5 && iLocal_45 != 6) && iLocal_45 != 10) && iLocal_45 != 7)
			{
				if (!Global_3 && !bLocal_56)
				{
					if (func_68(iLocal_67, 1, 1) || func_67())
					{
						if (iLocal_45 > 0)
						{
							func_178(5);
						}
						else
						{
							func_190();
							func_178(10);
						}
					}
					if (((iLocal_45 != 5 && iLocal_45 != 10) && iLocal_45 != 0) && iLocal_45 != 7)
					{
						if (func_63())
						{
							func_178(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_45 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_60 || func_19() != 0))
			{
				if ((!unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, true, 0) && (unk_0xFD34717937104F1C() - iLocal_145) > 5000) && !unk_0x4915F4759304D5CF(Local_109[iVar1 /*18*/]))
				{
					if (vdist2(unk_0xE2BBD32891C18569(Local_109[iVar1 /*18*/], true), vLocal_52) < (30.5f * 30.5f) && vdist2(vLocal_53, vLocal_52) > (22.5f * 22.5f))
					{
						if (func_224())
						{
							if (Local_139[4 /*10*/] != Local_109[iVar1 /*18*/])
							{
								func_18(&Local_139, 4);
								func_17(&Local_139, 4, Local_109[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_193)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_145 = unk_0xFD34717937104F1C();
									iLocal_193 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_145 = unk_0xFD34717937104F1C();
							}
						}
						else
						{
							StringCopy(&vVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&vVar2, unk_0x22C775856F4633CA(1, 13), 24);
							func_3(Local_109[iVar1 /*18*/], &vVar2, "PAPARAZZO", 24);
							iLocal_145 = unk_0xFD34717937104F1C();
						}
					}
				}
			}
		}
		if (iLocal_45 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
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

void func_2()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]))
		{
			if (unk_0x24A1A7BF4ED94B71(Local_109[iVar0 /*18*/]) < Local_109[iVar0 /*18*/].f_17)
			{
				if (unk_0xDEAEC99031DCB92A(Local_109[iVar0 /*18*/], unk_0xA19140A5C42D8715(), 1))
				{
					iLocal_138[iVar0] = (iLocal_138[iVar0] + (Local_109[iVar0 /*18*/].f_17 - unk_0x24A1A7BF4ED94B71(Local_109[iVar0 /*18*/])));
					iLocal_63 = (iLocal_63 + (Local_109[iVar0 /*18*/].f_17 - unk_0x24A1A7BF4ED94B71(Local_109[iVar0 /*18*/])));
					unk_0xDCB46BFC2265476A(Local_109[iVar0 /*18*/]);
					if (iLocal_138[iVar0] > iLocal_137)
					{
						iLocal_137 = iLocal_138[iVar0];
					}
				}
			}
			Local_109[iVar0 /*18*/].f_17 = unk_0x24A1A7BF4ED94B71(Local_109[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x85AF6DC3641E2442(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
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

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_15();
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
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_13();
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
				func_11();
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
				if (func_10())
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
			if (func_9())
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
			func_8();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_7();
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
		func_15();
	}
	return 0;
}

void func_7()
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

void func_8()
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

int func_9()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
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

void func_11()
{
	if (func_12(14))
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
		Global_14513 = func_19();
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

bool func_12(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_13()
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

bool func_14(int iParam0, int iParam1)
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

void func_15()
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

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_18(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_19()
{
	func_20();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_20()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_23(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_22(unk_0xA19140A5C42D8715());
			if (func_21(iVar0) && (!func_12(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_21(Global_106070.f_2355.f_539.f_4301))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if ((unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]) && !unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/])) && !unk_0x4915F4759304D5CF(iLocal_67))
		{
			if (vdist2(vLocal_52, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = vdist2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_47)
	{
		case 0:
			iLocal_165 = 0;
			unk_0xCACEBBBEAD8F262E(joaat("a_m_y_genstreet_02"));
			unk_0xCACEBBBEAD8F262E(joaat("prop_pap_camera_01"));
			unk_0xCACEBBBEAD8F262E(joaat("cavalcade2"));
			unk_0xCACEBBBEAD8F262E(joaat("vader"));
			unk_0x6D68030C791111E0(sLocal_134);
			unk_0x6D68030C791111E0("random@paparazzi@pap_anims");
			if (((((unk_0x7FC99CCC73354033(joaat("a_m_y_genstreet_02")) && unk_0x7FC99CCC73354033(joaat("prop_pap_camera_01"))) && unk_0x7FC99CCC73354033(joaat("cavalcade2"))) && unk_0x7FC99CCC73354033(joaat("vader"))) && unk_0x39C2D9AB77873F84(sLocal_134)) && unk_0x39C2D9AB77873F84("random@paparazzi@pap_anims"))
			{
				vLocal_161[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				vLocal_161[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				vLocal_161[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				vLocal_161[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_162[0] = -111.1625f;
				fLocal_162[1] = 68.857f;
				fLocal_162[2] = -108.2056f;
				fLocal_162[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_108)
				{
					func_62(iVar0);
					func_60(func_61(iVar0));
					func_60(func_59(iVar0));
					iVar0++;
				}
				iLocal_163 = 0;
				func_58(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_58(func_59(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_58(func_59(2), vLocal_161[1 /*3*/], fLocal_162[1]);
				func_58(func_59(3), vLocal_161[1 /*3*/], fLocal_162[1]);
				func_57(0, vLocal_161[0 /*3*/], fLocal_162[0], 1);
				func_57(1, vLocal_161[1 /*3*/], fLocal_162[1], 0);
				unk_0x4299736016AECE26(func_56(0, 1), 265.408f, 151.2875f, 103.5673f, 1, false, 0, 1);
				unk_0x92DDCF53AA47A63D(func_56(0, 1), 217.1033f);
				unk_0x4299736016AECE26(func_56(2, 1), 245.9477f, 72.661f, 89.1067f, 1, false, 0, 1);
				unk_0x92DDCF53AA47A63D(func_56(2, 1), 38.6283f);
				unk_0x4299736016AECE26(func_56(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, false, 0, 1);
				unk_0x92DDCF53AA47A63D(func_56(3, 1), 272.9875f);
				unk_0x3F01127ECD227890(func_56(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(func_56(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(func_56(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(func_56(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3F01127ECD227890(func_56(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			func_54(func_59(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_54(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_54(func_59(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0xDC5D81351D6A4DDB(Local_109[2 /*18*/].f_2))
			{
				if (!unk_0x7E65E323A95E4187(Local_109[2 /*18*/].f_2))
				{
					unk_0x7C73A424F1117528(Local_109[2 /*18*/].f_2, true, 0);
				}
			}
			switch (iLocal_165)
			{
				case 0:
					if (!unk_0x4915F4759304D5CF(func_56(1, 0)))
					{
						unk_0x9568B1B58F78FF36(func_56(1, 0));
					}
					if (!unk_0x4915F4759304D5CF(func_56(1, 1)))
					{
						unk_0x9568B1B58F78FF36(func_56(1, 1));
					}
					if (!unk_0xDC5D81351D6A4DDB(Local_108[2 /*18*/]))
					{
						func_57(2, vLocal_161[2 /*3*/], fLocal_162[2], 0);
						if (unk_0x1095F403F52B42E1(Local_108[2 /*18*/], 0))
						{
							func_58(func_61(2), unk_0xE2BBD32891C18569(Local_108[2 /*18*/], true), 0f);
							unk_0x692D5500D82E4F5D(func_56(2, 0), Local_108[2 /*18*/], -1);
						}
					}
					if (!unk_0xDC5D81351D6A4DDB(Local_108[3 /*18*/]))
					{
						func_57(3, vLocal_161[3 /*3*/], fLocal_162[3], 0);
					}
					if (!unk_0x4915F4759304D5CF(func_56(2, 1)))
					{
						unk_0x956B3CF461C0C1C9(func_56(2, 1), vLocal_156, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!unk_0x4915F4759304D5CF(func_56(3, 1)))
					{
						unk_0x956B3CF461C0C1C9(func_56(3, 1), vLocal_157, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!unk_0xDC5D81351D6A4DDB(func_56(3, 0)))
					{
						func_58(func_61(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_56)
					{
						if (!unk_0x4915F4759304D5CF(func_56(1, 0)))
						{
							unk_0x956B3CF461C0C1C9(func_56(1, 0), vLocal_158, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!unk_0x4915F4759304D5CF(func_56(1, 1)))
						{
							unk_0x956B3CF461C0C1C9(func_56(1, 1), vLocal_159, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!unk_0x4915F4759304D5CF(func_56(0, 1)))
						{
							unk_0x956B3CF461C0C1C9(func_56(0, 1), vLocal_160, 2f, 20000, 1048576000, 0, 1193033728);
						}
					}
					settimerb(0);
					iVar1 = 0;
					while (iVar1 < Local_109)
					{
						if (unk_0xDC5D81351D6A4DDB(Local_109[iVar1 /*18*/]))
						{
							unk_0xA95C9BC9CAF4C02D(Local_109[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_108)
					{
						if (unk_0xDC5D81351D6A4DDB(Local_108[iVar1 /*18*/]))
						{
							unk_0xA95C9BC9CAF4C02D(Local_108[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_165++;
					break;
				
				case 1:
					func_49();
					if ((unk_0x1095F403F52B42E1(Local_108[0 /*18*/], 0) && !unk_0x4915F4759304D5CF(func_56(0, 0))) && !unk_0x4915F4759304D5CF(func_56(0, 1)))
					{
						if (!iLocal_152[1])
						{
							iLocal_152[1] = 1;
							unk_0xE49301B2B6F420DE(func_56(0, 0), Local_108[0 /*18*/], vLocal_154, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0x1095F403F52B42E1(Local_108[2 /*18*/], 0) && !unk_0x4915F4759304D5CF(func_56(2, 0))) && !unk_0x4915F4759304D5CF(func_56(2, 1)))
					{
						if (!iLocal_152[0])
						{
							unk_0xE49301B2B6F420DE(func_56(2, 0), Local_108[2 /*18*/], vLocal_155, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_152[0] = 1;
						}
					}
					if (unk_0xDC5D81351D6A4DDB(iLocal_67) && !unk_0x4915F4759304D5CF(iLocal_67))
					{
						func_46(iLocal_67, 6);
						if (Global_3 || bLocal_56)
						{
							if (!unk_0x4915F4759304D5CF(func_56(1, 0)))
							{
								if (unk_0xA60C975CBAB69F34(func_56(1, 0), vLocal_158, Global_22, false, true, 0))
								{
									func_45(iLocal_67, func_61(1));
								}
							}
							if (!unk_0x4915F4759304D5CF(func_56(1, 1)))
							{
								if (unk_0xA60C975CBAB69F34(func_56(1, 1), vLocal_159, Global_22, false, true, 0))
								{
									func_45(iLocal_67, func_59(1));
								}
							}
							if (!unk_0x4915F4759304D5CF(func_56(0, 1)))
							{
								if (unk_0xA60C975CBAB69F34(func_56(0, 1), vLocal_159, Global_22, false, true, 0))
								{
									func_45(iLocal_67, func_59(0));
								}
							}
						}
						else
						{
							func_46(iLocal_67, func_61(1));
							func_46(iLocal_67, func_59(1));
							if (timerb() > 1000)
							{
								func_46(iLocal_67, func_61(1));
							}
						}
					}
					if (vdist2(unk_0xE2BBD32891C18569(iLocal_70, true), vLocal_68) < 9f)
					{
						if (unk_0xA60C975CBAB69F34(func_56(2, 1), vLocal_156, Global_22, false, true, 0))
						{
							func_45(iLocal_67, func_59(2));
						}
						if (unk_0xA60C975CBAB69F34(func_56(3, 1), vLocal_157, Global_22, false, true, 0))
						{
							func_45(iLocal_67, func_59(3));
						}
						if (unk_0xA60C975CBAB69F34(func_56(0, 1), vLocal_157, Global_22, false, true, 0))
						{
							func_45(iLocal_67, func_59(0));
						}
					}
					else
					{
						if (!unk_0x05EFB6A616B6FADE(iLocal_168, 3))
						{
							unk_0x9568B1B58F78FF36(Local_109[func_59(3) /*18*/]);
							unk_0x2BCFB39E86340DAA(&iLocal_168, 3);
						}
						if (!unk_0x05EFB6A616B6FADE(iLocal_168, 2))
						{
							unk_0x9568B1B58F78FF36(Local_109[func_59(2) /*18*/]);
							unk_0x2BCFB39E86340DAA(&iLocal_168, 2);
						}
						if (!unk_0x05EFB6A616B6FADE(iLocal_168, 0))
						{
							unk_0x9568B1B58F78FF36(Local_109[func_59(0) /*18*/]);
							unk_0x2BCFB39E86340DAA(&iLocal_168, 0);
						}
						if (Global_3 || bLocal_56)
						{
							func_45(iLocal_67, func_59(3));
						}
						else
						{
							func_46(iLocal_67, func_59(3));
						}
						func_46(iLocal_67, func_59(2));
						func_46(iLocal_67, func_59(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (unk_0x1095F403F52B42E1(iLocal_70, 0))
			{
				if (unk_0xEAA5CEF8875FEEED(iLocal_70) < 1f)
				{
					fLocal_153 = (fLocal_153 + unk_0xDE089748C4C76C96());
				}
				else if (fLocal_153 > 0f)
				{
					fLocal_153 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if (unk_0xDC5D81351D6A4DDB(Local_108[iVar0 /*18*/]) && iLocal_45 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_163 || !unk_0xDC5D81351D6A4DDB(Local_108[0 /*18*/])) || !unk_0xDC5D81351D6A4DDB(Local_108[1 /*18*/]))) && (unk_0xFD34717937104F1C() - iLocal_164) > 500)
					{
						if (vdist2(vLocal_52, vLocal_68) > 400f)
						{
							if (vdist2(vLocal_52, vLocal_68) < 62500f || (unk_0xFD34717937104F1C() - iLocal_131) < 30000)
							{
								func_40(Local_108[iVar0 /*18*/], iLocal_70, &(Local_108[iVar0 /*18*/].f_5), &(Local_108[iVar0 /*18*/].f_15), &(Local_108[iVar0 /*18*/].f_11), &(Local_108[iVar0 /*18*/].f_14), &(Local_108[iVar0 /*18*/].f_16), Local_108[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_163 = iVar0;
								iLocal_164 = unk_0xFD34717937104F1C();
							}
						}
					}
					iVar2 = func_61(iVar0);
					if (!unk_0x4915F4759304D5CF(Local_109[iVar2 /*18*/]))
					{
						iVar3 = func_59(iVar0);
					}
					else
					{
						iVar3 = func_61(iVar0);
					}
					switch (Local_108[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0x1095F403F52B42E1(Local_108[iVar0 /*18*/], 0))
							{
								if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Local_108[iVar0 /*18*/], 0))
								{
									if (!unk_0x4915F4759304D5CF(Local_109[iVar2 /*18*/]))
									{
										if (!unk_0xE0FD180CD24C0B67(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0))
										{
											if (unk_0xF9D4EF1338E38AFB(Local_109[iVar2 /*18*/], -1794415470) != 1 && unk_0x588F5E48C78F1C73(Local_108[iVar0 /*18*/], -1, 0))
											{
												unk_0xA2EBCD9385E56019(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x4915F4759304D5CF(Local_109[iVar3 /*18*/]))
										{
											if (!unk_0xE0FD180CD24C0B67(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))
											{
												if (unk_0xF9D4EF1338E38AFB(Local_109[iVar3 /*18*/], -1794415470) != 1 && unk_0x588F5E48C78F1C73(Local_108[iVar0 /*18*/], 0, 0))
												{
													unk_0xA2EBCD9385E56019(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x4915F4759304D5CF(Local_109[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x4915F4759304D5CF(Local_109[iVar3 /*18*/])))
										{
											if ((unk_0xE0FD180CD24C0B67(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0xE0FD180CD24C0B67(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))) && unk_0x1095F403F52B42E1(iLocal_70, 0))
											{
												if (unk_0xF9D4EF1338E38AFB(Local_109[iVar2 /*18*/], -1273030092) != 1 && unk_0xF9D4EF1338E38AFB(Local_109[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x3B7A32E04BBE59A5(Local_109[iVar2 /*18*/], 3, false);
													unk_0x3B7A32E04BBE59A5(Local_109[iVar2 /*18*/], 1, true);
													unk_0x3B7A32E04BBE59A5(Local_109[iVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														unk_0x4123165906C17D87(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0x4123165906C17D87(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0x4123165906C17D87(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0x4123165906C17D87(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0x4B690F60A2635642(Local_109[iVar2 /*18*/], func_39((3f * unk_0x499324B3EF19C288(vLocal_54, Local_108[iVar0 /*18*/].f_8, true)), 50f, 120f));
											}
										}
									}
									if (fLocal_153 > 3f && vdist(Local_108[iVar0 /*18*/].f_8, vLocal_54) < 10f)
									{
										Local_108[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x4915F4759304D5CF(Local_109[iVar2 /*18*/]))
								{
									if (!unk_0x8B9D3A1A7C2D3C6B(Local_109[iVar2 /*18*/]))
									{
										unk_0xC2C4AE9DB4A0BEF3(Local_109[iVar2 /*18*/], 2, false);
										unk_0x33B5487515BD13D5(Local_109[iVar2 /*18*/], unk_0xA19140A5C42D8715(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x4915F4759304D5CF(Local_109[iVar3 /*18*/]))
									{
										if (!unk_0x8B9D3A1A7C2D3C6B(Local_109[iVar3 /*18*/]))
										{
											unk_0xC2C4AE9DB4A0BEF3(Local_109[iVar3 /*18*/], 2, false);
											unk_0x33B5487515BD13D5(Local_109[iVar3 /*18*/], unk_0xA19140A5C42D8715(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x5D7DFE2058701942(Local_109[iVar2 /*18*/], 0))
							{
								unk_0xCB482EF95FAE4D73(Local_109[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_67, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x4915F4759304D5CF(Local_109[iVar3 /*18*/]))
								{
									if (unk_0x5D7DFE2058701942(Local_109[iVar3 /*18*/], 0))
									{
										unk_0xCB482EF95FAE4D73(Local_109[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_67, iVar3);
									}
								}
							}
							if (unk_0x1095F403F52B42E1(Local_108[iVar0 /*18*/], 0))
							{
								if (vdist(Local_108[iVar0 /*18*/].f_8, vLocal_54) > 15f)
								{
									Local_108[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x4915F4759304D5CF(Local_109[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x4915F4759304D5CF(Local_109[iVar3 /*18*/]))) && unk_0x1095F403F52B42E1(Local_108[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0xCDDABFAF231CF3DD(Local_109[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0xCDDABFAF231CF3DD(Local_109[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0xCDDABFAF231CF3DD(Local_108[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && vdist(vLocal_52, Local_108[iVar0 /*18*/].f_8) > 25f) && vdist(vLocal_52, Local_109[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0xE0FD180CD24C0B67(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0))
							{
								unk_0x692D5500D82E4F5D(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0xE0FD180CD24C0B67(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))
								{
									unk_0x692D5500D82E4F5D(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_167)
			{
				iVar0 = 0;
				while (iVar0 < Local_108)
				{
					iVar5 = func_61(iVar0);
					if (!unk_0x4915F4759304D5CF(Local_109[iVar5 /*18*/]))
					{
						iVar6 = func_59(iVar0);
					}
					else
					{
						iVar6 = func_61(iVar0);
					}
					if (unk_0x1095F403F52B42E1(Local_108[iVar0 /*18*/], 0))
					{
						if (!unk_0x4915F4759304D5CF(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0xE0FD180CD24C0B67(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0))
							{
								if (unk_0xF9D4EF1338E38AFB(Local_109[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0xA2EBCD9385E56019(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x4915F4759304D5CF(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0xE0FD180CD24C0B67(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0))
								{
									if (unk_0xF9D4EF1338E38AFB(Local_109[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0xA2EBCD9385E56019(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x4915F4759304D5CF(Local_109[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x4915F4759304D5CF(Local_109[iVar6 /*18*/])))
							{
								if ((unk_0xE0FD180CD24C0B67(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0xE0FD180CD24C0B67(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0))) && unk_0x1095F403F52B42E1(iLocal_70, 0))
								{
									fVar7 = func_39((70f - (to_float((unk_0xFD34717937104F1C() - iLocal_66)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0xFD34717937104F1C() - iLocal_66) > 4000)
									{
										unk_0xCA1C59B7923856BC(Local_109[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_108)
										{
											if ((unk_0x1095F403F52B42E1(Local_108[iVar8 /*18*/], 0) && !unk_0x4915F4759304D5CF(func_56(iVar8, 0))) && unk_0xE0FD180CD24C0B67(func_56(iVar8, 0), Local_108[iVar8 /*18*/], 0))
											{
												unk_0x9568B1B58F78FF36(func_56(iVar8, 0));
												unk_0x4123165906C17D87(func_56(iVar8, 0), Local_108[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_167 = 1;
									}
									else if (unk_0xF9D4EF1338E38AFB(Local_109[iVar5 /*18*/], -1273030092) != 1 && unk_0xF9D4EF1338E38AFB(Local_109[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x3B7A32E04BBE59A5(Local_109[iVar5 /*18*/], 3, false);
										unk_0x3B7A32E04BBE59A5(Local_109[iVar5 /*18*/], 1, true);
										unk_0x3B7A32E04BBE59A5(Local_109[iVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											unk_0x4123165906C17D87(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0x4123165906C17D87(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0x4123165906C17D87(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0x4123165906C17D87(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x4915F4759304D5CF(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0x8B9D3A1A7C2D3C6B(Local_109[iVar5 /*18*/]))
							{
								unk_0xC2C4AE9DB4A0BEF3(Local_109[iVar5 /*18*/], 2, false);
								unk_0x33B5487515BD13D5(Local_109[iVar5 /*18*/], unk_0xA19140A5C42D8715(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x4915F4759304D5CF(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0x8B9D3A1A7C2D3C6B(Local_109[iVar6 /*18*/]))
								{
									unk_0xC2C4AE9DB4A0BEF3(Local_109[iVar6 /*18*/], 2, false);
									unk_0x33B5487515BD13D5(Local_109[iVar6 /*18*/], unk_0xA19140A5C42D8715(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_166, 10f))
				{
					func_37(iLocal_166);
				}
				iLocal_166++;
				if (iLocal_166 > 3)
				{
					iLocal_166 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_166, 1125515264))
			{
				func_37(iLocal_166);
			}
			iLocal_166++;
			if (iLocal_166 > 3)
			{
				iLocal_166 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]) && !unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]))
		{
			if (iLocal_47 > 1)
			{
				if (!unk_0x429D45A6C6520026(sLocal_134))
				{
					func_28(iVar0);
					if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/].f_2) && unk_0xF797E4DD45066C88(Local_109[iVar0 /*18*/].f_2))
					{
						if (!unk_0x5D7DFE2058701942(Local_109[iVar0 /*18*/], 0))
						{
							if (unk_0x7E65E323A95E4187(Local_109[iVar0 /*18*/].f_2))
							{
								if (unk_0xC35EE16DB41A098F(Local_109[iVar0 /*18*/]))
								{
									unk_0x7C73A424F1117528(Local_109[iVar0 /*18*/].f_2, false, 0);
								}
							}
							else if (!unk_0xC35EE16DB41A098F(Local_109[iVar0 /*18*/]))
							{
								unk_0x7C73A424F1117528(Local_109[iVar0 /*18*/].f_2, true, 0);
							}
							if (!unk_0xCDDABFAF231CF3DD(Local_109[iVar0 /*18*/]))
							{
								if (!unk_0x411C28019DEA5CEF(Local_109[iVar0 /*18*/], sLocal_134, func_27(iVar0), 3))
								{
									if (!Local_109[iVar0 /*18*/].f_11)
									{
										if (!unk_0x411C28019DEA5CEF(Local_109[iVar0 /*18*/], sLocal_134, "grip", 3))
										{
											unk_0x3F01127ECD227890(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_109[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_109[iVar0 /*18*/].f_11)
								{
									unk_0x3F01127ECD227890(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_109[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_109[iVar0 /*18*/].f_10)
							{
								unk_0x40C43275A74F9078(sLocal_134);
								if (unk_0xD0BEBF116142CB02(sLocal_134))
								{
									unk_0x61BD31DBCC4C5B81(Local_109[iVar0 /*18*/], sLocal_134);
									Local_109[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_109[iVar0 /*18*/].f_11)
							{
								unk_0x3F01127ECD227890(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_109[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_109[iVar0 /*18*/].f_10)
							{
								unk_0x7E6858FEEE18D422(Local_109[iVar0 /*18*/]);
								Local_109[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x8A29BBDF4603E52B(Local_109[iVar0 /*18*/]) && func_26(Local_109[iVar0 /*18*/], unk_0xCAEB6CE71A2C7212(Local_109[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0x7E65E323A95E4187(Local_109[iVar0 /*18*/].f_2))
							{
								unk_0x7C73A424F1117528(Local_109[iVar0 /*18*/].f_2, false, 0);
							}
						}
						else if (!unk_0x7E65E323A95E4187(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0x7C73A424F1117528(Local_109[iVar0 /*18*/].f_2, true, 0);
						}
					}
					else
					{
						if (Local_109[iVar0 /*18*/].f_11)
						{
							unk_0x3F01127ECD227890(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_109[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_109[iVar0 /*18*/].f_10)
						{
							unk_0x7E6858FEEE18D422(Local_109[iVar0 /*18*/]);
							Local_109[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_45 != 7)
			{
				if (unk_0x97B2B0016AD3C7C6(Local_109[iVar0 /*18*/]) && unk_0xBCF615B6673B73ED(unk_0xA19140A5C42D8715()))
				{
					func_178(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_45 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (unk_0xDC5D81351D6A4DDB(Local_108[iVar0 /*18*/]))
			{
				if (unk_0x1095F403F52B42E1(Local_108[iVar0 /*18*/], 0))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Local_108[iVar0 /*18*/], 0))
					{
						func_178(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)
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

char* func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x05EFB6A616B6FADE(Local_109[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_136);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0x411C28019DEA5CEF(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0), 3))
				{
					if (unk_0xE5B5A1FFAA0834BD(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0)) > 0.9f)
					{
						unk_0xFA57C719261AA55D(&(Local_109[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0x411C28019DEA5CEF(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)], 3))
				{
					if (unk_0xE5B5A1FFAA0834BD(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0xFA57C719261AA55D(&(Local_109[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0x411C28019DEA5CEF(Local_109[iParam0 /*18*/], sLocal_134, "grip", 3))
			{
				unk_0xFA57C719261AA55D(&(Local_109[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0x4915F4759304D5CF(iLocal_67))
	{
		iVar0 = func_59(iLocal_149);
		if (((unk_0xDC5D81351D6A4DDB(Local_108[iLocal_149 /*18*/]) && unk_0x1095F403F52B42E1(Local_108[iLocal_149 /*18*/], 0)) && unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/])) && !unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]))
		{
			if (unk_0xD3C4AB5E628133C1(Local_108[iLocal_149 /*18*/], joaat("cavalcade2")))
			{
				if (vdist2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < pow(30f, 2f) && unk_0xB0D49A1F9F054602(Local_108[iLocal_149 /*18*/], 0, 0) == Local_109[iVar0 /*18*/])
				{
					if (!Local_109[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0xFD34717937104F1C() - Local_109[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x411C28019DEA5CEF(Local_109[iVar0 /*18*/], sLocal_135, "base", 3))
						{
							unk_0x3F01127ECD227890(Local_109[iVar0 /*18*/], sLocal_135, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_109[iVar0 /*18*/].f_9)
			{
				if (vdist2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < pow(30f, 2f) && unk_0xB0D49A1F9F054602(Local_108[iLocal_149 /*18*/], 0, 0) == Local_109[iVar0 /*18*/])
				{
					unk_0x837CD9768FE58F4C(Local_109[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_67, 1.57f, 0.25f);
					Local_109[iVar0 /*18*/].f_9 = 1;
					Local_109[iVar0 /*18*/].f_13 = unk_0xFD34717937104F1C();
				}
			}
			else if (Local_109[iVar0 /*18*/].f_9)
			{
				if ((unk_0xFD34717937104F1C() - Local_109[iVar0 /*18*/].f_13) > 2000)
				{
					Local_109[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_149++;
		if (iLocal_149 >= Local_108)
		{
			iLocal_149 = 0;
		}
	}
}

void func_30(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0x4915F4759304D5CF(Local_109[iParam0 /*18*/]) && !unk_0x4915F4759304D5CF(iLocal_67))
	{
		iVar0 = 15;
		vVar1 = { vLocal_53 - Local_109[iParam0 /*18*/].f_6 };
		vVar2 = { unk_0xFA0A034A8C86C35E(Local_109[iParam0 /*18*/]) };
		fVar3 = func_34(vVar2, vVar1);
		if (unk_0x69C0BB7D03EE045D(fVar3) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar3 >= 10f && fVar3 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar3 >= 60f && fVar3 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar3 <= -10f && fVar3 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar3 < -60f && fVar3 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	if (iParam1 < 15)
	{
		if (!unk_0x05EFB6A616B6FADE(Local_109[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0x3F01127ECD227890(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0x3F01127ECD227890(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x3F01127ECD227890(Local_109[iParam0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_109[iParam0 /*18*/].f_15 = 0;
			unk_0x2BCFB39E86340DAA(&(Local_109[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_32(int iParam0)
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_136));
}

float func_34(vector3 vParam0, vector3 vParam1)
{
	float fVar0;
	
	vParam0 = { func_35(vParam0) };
	vParam1 = { func_35(vParam1) };
	fVar0 = (unk_0xA0844D842FD4B009(vParam1.y, vParam1.x) - unk_0xA0844D842FD4B009(vParam0.y, vParam0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_35(vector3 vParam0)
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

bool func_36(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x429D45A6C6520026(sLocal_135))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0x05EFB6A616B6FADE(Local_109[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(Local_108[iParam0 /*18*/]) && unk_0xCDDABFAF231CF3DD(Local_108[iParam0 /*18*/]))
	{
		unk_0x4C842FAB634AC89E(&(Local_108[iParam0 /*18*/]));
	}
	if (unk_0xCE3CB618AFE55EFB(Local_108[iParam0 /*18*/].f_1))
	{
		unk_0xE1623437A3194332(&(Local_108[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_59(iParam0);
		}
		else
		{
			iVar1 = func_61(iParam0);
		}
		if (unk_0xDC5D81351D6A4DDB(Local_109[iVar1 /*18*/]) && unk_0xCDDABFAF231CF3DD(Local_109[iVar1 /*18*/]))
		{
			if (unk_0xDC5D81351D6A4DDB(Local_109[iVar1 /*18*/]))
			{
				unk_0xC0AC848E56940C34(&(Local_109[iVar1 /*18*/].f_2));
			}
			if (unk_0xCE3CB618AFE55EFB(Local_109[iVar1 /*18*/].f_1))
			{
				unk_0xE1623437A3194332(&(Local_109[iVar1 /*18*/].f_1));
			}
			unk_0x680F17660351F21B(&(Local_109[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xDC5D81351D6A4DDB(Local_108[iParam0 /*18*/]))
	{
		if (unk_0x1095F403F52B42E1(Local_108[iParam0 /*18*/], 0))
		{
			if (vdist2(vLocal_52, Local_108[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0xCDDABFAF231CF3DD(Local_108[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0xDC5D81351D6A4DDB(func_56(iParam0, 0)))
	{
		if (!unk_0x4915F4759304D5CF(func_56(iParam0, 0)))
		{
			if (vdist2(vLocal_52, Local_109[func_61(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xCDDABFAF231CF3DD(func_56(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0xDC5D81351D6A4DDB(func_56(iParam0, 1)))
	{
		if (!unk_0x4915F4759304D5CF(func_56(iParam0, 1)))
		{
			if (vdist2(vLocal_52, Local_109[func_59(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xCDDABFAF231CF3DD(func_56(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)
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

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (((((unk_0xDC5D81351D6A4DDB(iParam1) && iParam0 != iParam1) && !unk_0x71852D4EBD08275F(unk_0x8F474E419F56E48D(iParam1))) && !unk_0xCA8C103FCD316F89(unk_0x8F474E419F56E48D(iParam1))) && !unk_0x7C197233F79C2CB8(unk_0x8F474E419F56E48D(iParam1))) && !unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(iParam1)))
		{
			if (unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iParam1, true), *uParam4, true) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_119, unk_0xE2BBD32891C18569(iParam1, true), unk_0x288B716F47E9BBBC(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x2F230B37E9FFF23F(*uParam2, *uParam3, vParam7) };
					*uParam4 = { unk_0xE2BBD32891C18569(iParam1, true) };
					*uParam5 = unk_0x552C823E1D2A019C(iParam1);
				}
			}
			if (!unk_0xCDDABFAF231CF3DD(iParam0))
			{
				*uParam6 = unk_0xFD34717937104F1C();
			}
			else if ((unk_0xFD34717937104F1C() - *uParam6) > iParam8)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam9 && unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(iParam1, true), *uParam2, true) > 20f) && vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0x317672E799676CA5(*uParam2, 6f))
						{
							unk_0x3521B10FB737CE36(*uParam2, 6f, 0);
							unk_0x01AF8CB960828C2B(*uParam2, 6f, 0, 0, 0, 0, false, 0);
							unk_0x4299736016AECE26(iParam0, *uParam2, 1, false, 0, 1);
							unk_0x92DDCF53AA47A63D(iParam0, *uParam3);
							unk_0x99F546A9200EA026(iParam0, 1084227584);
							unk_0x625FB4B0328423D9(iParam0, func_39((unk_0xEAA5CEF8875FEEED(iParam1) + 10f), 10f, 60f));
							unk_0xC19EDC1D7179164C(iParam0, true, true, 0);
							*uParam6 = unk_0xFD34717937104F1C();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0xFD34717937104F1C();
		}
	}
}

int func_41(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_42(int iParam0, int iParam1, bool bParam2)
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

int func_43(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	
	if (unk_0xDC5D81351D6A4DDB(iParam2))
	{
		unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam0), &vVar3, &vVar4);
		unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam1), &vVar5, &uVar6);
		fVar7 = unk_0x69C0BB7D03EE045D((vVar4.z - vVar3.z));
		fVar8 = unk_0x69C0BB7D03EE045D((vVar4.x - vVar3.x));
		fVar9 = unk_0x69C0BB7D03EE045D((vVar4.y - vVar3.y));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - unk_0x69C0BB7D03EE045D(vVar3.z));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - unk_0x69C0BB7D03EE045D(vVar3.x));
		}
		vVar12.z = (vVar12.z + (vVar5.z - vVar3.z));
		unk_0x4299736016AECE26(iParam2, vParam3, 1, false, 0, 1);
		unk_0x76D3D51F5F66367F(iParam2, vParam4, 2, 1);
		vVar1 = { unk_0x3201284584C7CD83(iParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + vVar12) };
		vVar2 = { unk_0x3201284584C7CD83(iParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + vVar12) };
		iVar17 = unk_0x2655F64CD0F70A6B(vVar2, vVar1, fVar10, 19, unk_0xA19140A5C42D8715(), 4);
		if (unk_0x7C00B4755E048785(iVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_44()
{
	bool bVar0;
	
	if ((unk_0xFD34717937104F1C() - iLocal_148) > 100)
	{
		if ((unk_0xFD34717937104F1C() - Local_109[iLocal_147 /*18*/].f_12) > 500)
		{
			if (unk_0xDC5D81351D6A4DDB(Local_109[iLocal_147 /*18*/]) && !unk_0x4915F4759304D5CF(Local_109[iLocal_147 /*18*/]))
			{
				bVar0 = true;
				if (!Local_109[iLocal_147 /*18*/].f_9 && unk_0x5D7DFE2058701942(Local_109[iLocal_147 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x411C28019DEA5CEF(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147), 3) && unk_0xE5B5A1FFAA0834BD(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147)) > 0.5f) && unk_0xE5B5A1FFAA0834BD(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147)) < 0.75f) || Local_109[iLocal_147 /*18*/].f_9)
					{
						unk_0xF593FC0961E061E6("scr_rcpap1_camera", Local_109[iLocal_147 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_147 % 3) == 0)
						{
							unk_0x7A15C6C664F7334E(-1, "SHUTTER_FLASH", unk_0xE2BBD32891C18569(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_147 % 3) == 1)
						{
							unk_0x7A15C6C664F7334E(-1, "SHUTTER", unk_0xE2BBD32891C18569(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x7A15C6C664F7334E(-1, "FLASH", unk_0xE2BBD32891C18569(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_109[iLocal_147 /*18*/].f_12 = unk_0xFD34717937104F1C();
					}
					iLocal_148 = unk_0xFD34717937104F1C();
				}
			}
			iLocal_147++;
			if (iLocal_147 >= Local_109)
			{
				iLocal_147 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)
{
	if (!unk_0x4915F4759304D5CF(Local_109[iParam1 /*18*/]) && !unk_0x4915F4759304D5CF(iParam0))
	{
		if (!unk_0xC42DE41AEED00E7B(Local_109[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xF9D4EF1338E38AFB(Local_109[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0x0177431263151C4E(Local_109[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0xFD34717937104F1C() - Local_109[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x411C28019DEA5CEF(Local_109[iParam1 /*18*/], sLocal_134, func_27(iParam1), 3))
			{
				unk_0x3F01127ECD227890(Local_109[iParam1 /*18*/], sLocal_134, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_109[iParam1 /*18*/].f_13 = unk_0xFD34717937104F1C();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	if (!unk_0x4915F4759304D5CF(Local_109[iParam1 /*18*/]) && !unk_0x4915F4759304D5CF(iParam0))
	{
		vVar0 = { unk_0x3201284584C7CD83(iParam0, func_48(iParam1)) };
		switch (Local_109[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(vVar0, iParam1, iParam0);
				Local_109[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0xF9D4EF1338E38AFB(Local_109[iParam1 /*18*/], 713668775) != 1 || vdist(vVar0, Local_109[iParam1 /*18*/].f_6) > 5f)
				{
					Local_109[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (vdist(vVar0, Local_109[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(vVar0, iParam1, iParam0);
					Local_109[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (vdist2(vVar0, Local_109[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(vVar0, iParam1, iParam0);
				}
				if (unk_0xF9D4EF1338E38AFB(Local_109[iParam1 /*18*/], 713668775) != 1)
				{
					Local_109[iParam1 /*18*/].f_16 = (Local_109[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_47(vector3 vParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { func_35(unk_0xE2BBD32891C18569(iParam2, true) - vParam0) };
	fVar1 = unk_0x0C1B8F3F6EFDC58B(vVar0.x, vVar0.y);
	Local_109[iParam1 /*18*/].f_3 = { vParam0 };
	unk_0x9568B1B58F78FF36(Local_109[iParam1 /*18*/]);
	if (vdist(vParam0, Local_109[iParam1 /*18*/].f_6) < 2f)
	{
		unk_0x956B3CF461C0C1C9(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 1f, -1, 0.5f, 512, fVar1);
	}
	else
	{
		unk_0x956B3CF461C0C1C9(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 2f, -1, 0.5f, 512, fVar1);
	}
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xCE3CB618AFE55EFB(Local_109[iVar0 /*18*/].f_1))
		{
			if (unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]))
			{
				unk_0xE1623437A3194332(&(Local_109[iVar0 /*18*/].f_1));
			}
			else if (unk_0x5D7DFE2058701942(Local_109[iVar0 /*18*/], 0))
			{
				unk_0xE1623437A3194332(&(Local_109[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]) && !unk_0x5D7DFE2058701942(Local_109[iVar0 /*18*/], 0))
		{
			Local_109[iVar0 /*18*/].f_1 = func_180(Local_109[iVar0 /*18*/], 1, 145);
			unk_0xC4F12E446CCE89F5(Local_109[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (unk_0x1095F403F52B42E1(Local_108[iVar0 /*18*/], 0))
		{
			if (unk_0xCE3CB618AFE55EFB(Local_108[iVar0 /*18*/].f_1))
			{
				vVar1 = { unk_0x1C8DAFF0573242F7(Local_108[iVar0 /*18*/].f_1) };
				vVar2 = { Local_108[iVar0 /*18*/].f_8 };
				vVar1.x = (vVar1.x + ((vVar2.x - vVar1.x) / 10f));
				vVar1.y = (vVar1.y + ((vVar2.y - vVar1.y) / 10f));
				vVar1.z = (vVar1.z + ((vVar2.z - vVar1.z) / 10f));
				unk_0x382EC7CC6BB2D812(Local_108[iVar0 /*18*/].f_1, vVar1);
				if (func_52(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
				{
					unk_0xE1623437A3194332(&(Local_108[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
			{
				Local_108[iVar0 /*18*/].f_1 = func_50(Local_108[iVar0 /*18*/].f_8, 0);
				unk_0x570128B7829A8EAA(Local_108[iVar0 /*18*/].f_1, 1);
				unk_0xC4F12E446CCE89F5(Local_108[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0xAD8FB9E563A1FF80(Local_108[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xCE3CB618AFE55EFB(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0xE1623437A3194332(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_50(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA70969818F182A36(vParam0);
	unk_0x575CF00E129E0CE1(iVar0, func_51(unk_0x4C9BACA8D249CB13(), 1f, 1f));
	unk_0x3E46F0AAE4B470FB(iVar0, bParam1);
	return iVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xD63FAD81FAF5E0CB(iParam0) + 1;
	if (iParam4 || !unk_0x7112137033807390(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_53(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xDC5D81351D6A4DDB(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xA19140A5C42D8715())
				{
				}
				else if (iParam2 && unk_0xC085874FDE5FE33A(iVar2))
				{
					if (unk_0x91347D2A80F38492(unk_0x77065AD41B64E946(iVar2)) == 0)
					{
						if (!bParam5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x4915F4759304D5CF(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_53(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x588F5E48C78F1C73(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xB0D49A1F9F054602(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xDC5D81351D6A4DDB(iVar0) && !unk_0x7112137033807390(iParam0, 0))
		{
			iVar0 = unk_0xBF8685DA34F4F151(iParam0, iParam1);
			if (!unk_0x7112137033807390(iVar0, 0))
			{
				if (unk_0xF9D4EF1338E38AFB(iVar0, 451360105) == 1 || unk_0xF9D4EF1338E38AFB(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0xE2BBD32891C18569(iParam0, false), unk_0xE2BBD32891C18569(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_54(int iParam0, vector3 vParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5)
{
	if (!unk_0x4915F4759304D5CF(Local_109[iParam0 /*18*/]))
	{
		if (vdist(unk_0xE2BBD32891C18569(Local_109[iParam0 /*18*/], true), vParam1) > 1.5f)
		{
			if (unk_0xF9D4EF1338E38AFB(Local_109[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x956B3CF461C0C1C9(Local_109[iParam0 /*18*/], vParam1, 2f, -1, 0.25f, 0, fParam2);
			}
		}
		else if (unk_0x69C0BB7D03EE045D((func_55(unk_0x552C823E1D2A019C(Local_109[iParam0 /*18*/])) - func_55(fParam2))) > 10f)
		{
			if (unk_0xF9D4EF1338E38AFB(Local_109[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0x47D73A216DD513C8(Local_109[iParam0 /*18*/], fParam2, 0);
			}
		}
		else
		{
			switch (Local_109[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0x429D45A6C6520026(sParam5))
					{
						if (!unk_0x411C28019DEA5CEF(Local_109[iParam0 /*18*/], sParam3, sParam4, 3))
						{
							unk_0x3F01127ECD227890(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x411C28019DEA5CEF(Local_109[iParam0 /*18*/], sParam3, sParam4, 3))
					{
						unk_0x3F01127ECD227890(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0xE5B5A1FFAA0834BD(Local_109[iParam0 /*18*/], sParam3, sParam4) > 0.99f)
					{
						unk_0x3F01127ECD227890(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_109[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x411C28019DEA5CEF(Local_109[iParam0 /*18*/], sParam3, sParam5, 3))
					{
						unk_0x3F01127ECD227890(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0xE5B5A1FFAA0834BD(Local_109[iParam0 /*18*/], sParam3, sParam5) > 0.99f)
					{
						unk_0x3F01127ECD227890(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_109[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_55(float fParam0)
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_56(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_109[func_61(iParam0) /*18*/];
	}
	return Local_109[func_59(iParam0) /*18*/];
}

void func_57(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if ((iParam0 % 2) == 1)
	{
		Local_108[iParam0 /*18*/] = unk_0x48CFBECB146FD1A1(joaat("vader"), vParam1, fParam2, true, true, false);
	}
	else
	{
		Local_108[iParam0 /*18*/] = unk_0x48CFBECB146FD1A1(joaat("cavalcade2"), vParam1, fParam2, true, true, false);
		unk_0xEA847E35BAC71F2A(Local_108[iParam0 /*18*/], 0);
	}
	unk_0x99F546A9200EA026(Local_108[iParam0 /*18*/], 1084227584);
	unk_0x071AF574B483D05F(Local_108[iParam0 /*18*/], true);
	if (bParam3)
	{
		if (!unk_0xDC5D81351D6A4DDB(func_56(iParam0, 0)))
		{
			func_58(func_61(iParam0), vParam1, fParam2);
		}
		if (!unk_0xDC5D81351D6A4DDB(func_56(iParam0, 1)))
		{
			func_58(func_59(iParam0), vParam1, fParam2);
		}
		if (!unk_0x4915F4759304D5CF(func_56(iParam0, 0)) && unk_0x1095F403F52B42E1(Local_108[iParam0 /*18*/], 0))
		{
			unk_0x692D5500D82E4F5D(func_56(iParam0, 0), Local_108[iParam0 /*18*/], -1);
		}
		if (!unk_0x4915F4759304D5CF(func_56(iParam0, 1)) && unk_0x1095F403F52B42E1(Local_108[iParam0 /*18*/], 0))
		{
			unk_0x692D5500D82E4F5D(func_56(iParam0, 1), Local_108[iParam0 /*18*/], 0);
		}
		unk_0xC19EDC1D7179164C(Local_108[iParam0 /*18*/], true, true, 0);
	}
}

void func_58(int iParam0, vector3 vParam1, float fParam2)
{
	Local_109[iParam0 /*18*/] = unk_0x35C6E06B120EB2E3(26, joaat("a_m_y_genstreet_02"), vParam1, fParam2, 1, true);
	unk_0x3B7A32E04BBE59A5(Local_109[iParam0 /*18*/], 1, false);
	unk_0x1F4E5EFBFE503FB3(Local_109[iParam0 /*18*/], true);
	unk_0x3B7A32E04BBE59A5(Local_109[iParam0 /*18*/], 0, true);
	unk_0x2058F6F3F79110DC(Local_109[iParam0 /*18*/], 3);
	unk_0x83055D7E96024509(Local_109[iParam0 /*18*/], true);
	unk_0x3B7A32E04BBE59A5(Local_109[iParam0 /*18*/], 17, true);
	unk_0xC2C4AE9DB4A0BEF3(Local_109[iParam0 /*18*/], 2, false);
	unk_0xEAF1F3E17588C851(Local_109[iParam0 /*18*/], false);
	unk_0xD738221C247C8B71(Local_109[iParam0 /*18*/], true);
	unk_0x6909FCF0DF666AF6(Local_109[iParam0 /*18*/], 100);
	unk_0x38881C31FB76F987(Local_109[iParam0 /*18*/], -957453492);
	unk_0x13E0A8160525AE55(Local_109[iParam0 /*18*/], 101, true);
	unk_0x13E0A8160525AE55(Local_109[iParam0 /*18*/], 185, false);
	unk_0x6259CDB47862A4F3(Local_109[iParam0 /*18*/], 300, 0);
	unk_0x72A0FF8C49CFFC0D(Local_109[iParam0 /*18*/], 3, (iParam0 % 2), floor((to_float(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_56)
	{
		unk_0x33CF95E95A476FB9(Local_109[iParam0 /*18*/], true);
		unk_0x6259CDB47862A4F3(Local_109[iParam0 /*18*/], 500, 0);
	}
	unk_0xB4F2B588B54261BF(Local_109[iParam0 /*18*/], 1);
	unk_0x3B7A32E04BBE59A5(Local_109[iParam0 /*18*/], 2, true);
	unk_0x639C59ACAF6EEC64(Local_109[iParam0 /*18*/], 2f);
	unk_0xEAF1F3E17588C851(Local_109[iParam0 /*18*/], false);
	unk_0x241F3D2BEEB0124B(Local_109[iParam0 /*18*/], 0);
	Local_109[iParam0 /*18*/].f_2 = unk_0xFCFC8CC5FF74580D(joaat("prop_pap_camera_01"), unk_0x505186370955851F(Local_109[iParam0 /*18*/], 28422, 0f, 0f, 0f), true, true, false);
	unk_0x96B71B23D409A3DB(Local_109[iParam0 /*18*/].f_2, Local_109[iParam0 /*18*/], unk_0xF622A022C26057AA(Local_109[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0xDC5D81351D6A4DDB(Local_109[0 /*18*/].f_2))
	{
		unk_0x7C73A424F1117528(Local_109[0 /*18*/].f_2, false, 0);
	}
	Local_109[iParam0 /*18*/].f_17 = unk_0x24A1A7BF4ED94B71(Local_109[iParam0 /*18*/]);
}

int func_59(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_60(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_109[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_109[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_61(int iParam0)
{
	return iParam0 * 2;
}

void func_62(int iParam0)
{
	Local_108[iParam0 /*18*/].f_17 = 0;
}

int func_63()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x4915F4759304D5CF(iLocal_67))
	{
		bVar0 = false;
		if (func_66())
		{
			if (unk_0xDC5D81351D6A4DDB(func_65()))
			{
				if (vdist(unk_0xE2BBD32891C18569(func_65(), true), vLocal_53) < 5f && unk_0xEAA5CEF8875FEEED(iLocal_70) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0x1095F403F52B42E1(iLocal_70, 0))
		{
			if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 0) && unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 0))
			{
				fLocal_151 = (fLocal_151 + unk_0xDE089748C4C76C96());
			}
			else if (fLocal_151 > 0f)
			{
				fLocal_151 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_150 = (fLocal_150 + unk_0xDE089748C4C76C96());
		}
		else if (fLocal_150 > 0f)
		{
			fLocal_150 = 0f;
		}
		if (fLocal_150 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_57)
		{
			if (!unk_0xB10F7FE89663CB5B(iLocal_67, iLocal_70))
			{
				if (unk_0x685AE6AF34B35D3B(iLocal_67))
				{
					bVar1 = true;
				}
				iLocal_57 = 0;
			}
		}
		if (!iLocal_57)
		{
			if (unk_0xB10F7FE89663CB5B(iLocal_67, iLocal_70))
			{
				iLocal_57 = 1;
			}
		}
		if (fLocal_151 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0x1095F403F52B42E1(iLocal_70, 0) && (!bLocal_129 || iLocal_45 == 1))
		{
			bVar1 = true;
		}
		if (vdist(vLocal_53, vLocal_52) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0x1095F403F52B42E1(iLocal_70, 0) && func_64(iLocal_70)) && (!bLocal_129 || iLocal_45 == 1)) && vdist(unk_0xE2BBD32891C18569(iLocal_67, true), vLocal_50) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0x1095F403F52B42E1(iLocal_70, 0) && unk_0x4374EED90C523366(iLocal_70))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x22C775856F4633CA(0, 2) == 1)
			{
				sLocal_132 = "REPAP_GUP";
			}
			else
			{
				sLocal_132 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (((unk_0xEB9F2352179A557A(iParam0, 0, 7000) || unk_0xEB9F2352179A557A(iParam0, 3, 30000)) || unk_0xEB9F2352179A557A(iParam0, 2, 30000)) || unk_0xEB9F2352179A557A(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if ((unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]) && !unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/])) && !unk_0x4915F4759304D5CF(iLocal_67))
		{
			if (vdist2(vLocal_53, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = vdist2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_109[iVar1 /*18*/];
	}
	return 0;
}

int func_66()
{
	if (unk_0x1095F403F52B42E1(iLocal_70, 0))
	{
		if (!unk_0x4915F4759304D5CF(iLocal_67))
		{
			if (unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 0) && unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (func_68(Local_109[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]))
		{
			if (unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]) || unk_0x7112137033807390(Local_109[iVar0 /*18*/], 0))
			{
				if (iLocal_138[iVar0] > 50)
				{
					iLocal_110++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar1;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
		if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 7))
		{
			unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		}
		if (!bParam2)
		{
			if (unk_0x9809FE4B550B1EFE(vVar0, 5f, 1))
			{
				return 1;
			}
		}
		if (vdist2(vVar0, vLocal_52) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6) && !unk_0x07F5A0B42D3F3491(unk_0xA19140A5C42D8715())) && unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
				{
					return 1;
				}
			}
			if ((iVar1 == joaat("weapon_petrolcan") && unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715())) && vdist2(vLocal_52, vVar0) < 9f)
			{
				return 1;
			}
			if (((unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), iParam0) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), iParam0)) && (func_69(vLocal_52, iParam0) && vdist2(vLocal_52, unk_0xE2BBD32891C18569(iParam0, true)) < 100f)) && unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6))
			{
				return 1;
			}
			if (iLocal_137 > 150)
			{
				return 1;
			}
		}
		if (unk_0x2C519F22A9CF540C(unk_0x505186370955851F(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0xDC5D81351D6A4DDB(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_69(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	vVar0 = { unk_0xE2BBD32891C18569(iParam1, true) };
	vVar1 = { unk_0x3201284584C7CD83(iParam1, 0f, 1f, 0f) - vVar0 };
	vVar2 = { vParam0 - vVar0 };
	fVar3 = func_70(vVar1, vVar2);
	if (fVar3 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_70(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_71()
{
	if (iLocal_45 != 11)
	{
		if (unk_0xCE3CB618AFE55EFB(iLocal_123))
		{
			unk_0xE1623437A3194332(&iLocal_123);
		}
		if (unk_0xCE3CB618AFE55EFB(iLocal_124))
		{
			unk_0xE1623437A3194332(&iLocal_124);
		}
		if (unk_0xCE3CB618AFE55EFB(iLocal_121))
		{
			unk_0xE1623437A3194332(&iLocal_121);
		}
		iLocal_46 = iLocal_45;
		iLocal_45 = 11;
	}
	else if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
	{
		if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) < 3)
		{
			if (!func_74())
			{
				func_72("REPAP_COP1");
			}
		}
		else
		{
			func_178(5);
		}
	}
	else if (func_5(&Local_139, cLocal_133, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_45 = iLocal_46;
	}
}

void func_72(char* sParam0)
{
	if ((unk_0xFD34717937104F1C() - iLocal_197) > 5000)
	{
		if (!func_73())
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_197 = unk_0xFD34717937104F1C();
			}
		}
	}
}

int func_73()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

bool func_74()
{
	if (!unk_0x4915F4759304D5CF(iLocal_67) && vdist2(vLocal_52, vLocal_53) < 400f)
	{
		if (!iLocal_111 && (unk_0xFD34717937104F1C() - iLocal_113) > 5000)
		{
			if (iLocal_63 > 10)
			{
				iLocal_111 = 1;
				iLocal_63 = 0;
			}
		}
		if ((!iLocal_116 && !iLocal_111) && (unk_0xFD34717937104F1C() - iLocal_117) > 4000)
		{
			if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6) && unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
			{
				if (iLocal_118 > 2)
				{
					if (!Global_3 && !bLocal_56)
					{
						func_178(5);
					}
				}
				else
				{
					iLocal_116 = 1;
					iLocal_118++;
				}
			}
		}
		if (((!iLocal_114 && !iLocal_111) && !iLocal_116) && (unk_0xFD34717937104F1C() - iLocal_115) > 15000)
		{
			if (unk_0x852B8F739A2072BE(unk_0xA19140A5C42D8715(), 6) && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iLocal_114 = 1;
			}
		}
		if (iLocal_111)
		{
			if (iLocal_112)
			{
				if (func_5(&Local_139, cLocal_133, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_113 = unk_0xFD34717937104F1C();
					iLocal_111 = 0;
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_113 = unk_0xFD34717937104F1C();
				iLocal_111 = 0;
				iLocal_112 = 1;
			}
		}
		if (iLocal_116)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_117 = unk_0xFD34717937104F1C();
				iLocal_116 = 0;
			}
		}
		if (iLocal_114)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_115 = unk_0xFD34717937104F1C();
				iLocal_114 = 0;
			}
		}
	}
	return ((iLocal_114 || iLocal_116) || iLocal_111);
}

void func_75()
{
	if (!unk_0x4915F4759304D5CF(iLocal_67))
	{
		unk_0xD738221C247C8B71(iLocal_67, true);
		unk_0x80E7C4A78224C8F9(255, iLocal_55, 1862763509);
		if (!Global_3 && !bLocal_56)
		{
			unk_0x13E0A8160525AE55(iLocal_67, 317, true);
			unk_0x1F4E5EFBFE503FB3(iLocal_67, false);
		}
	}
	func_79(-1, 0);
	func_76();
	unk_0x75517BC5AF6FF1DD(62);
	func_274();
}

void func_76()
{
	func_77();
}

int func_77()
{
	if (func_78(0))
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

bool func_78(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_79(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_96(iParam0))
	{
		func_95(iParam0, iParam1);
		if (!func_94(51))
		{
			func_90("RE_REWARD", 1, 0, 4000, 10000, func_93(), 0, 138, 0);
			func_89(51);
		}
		if (func_88(iParam0))
		{
			Global_106070.f_24967.f_2 = 3;
		}
		if (func_87(iParam0, iParam1) != 322)
		{
			func_81(func_87(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_106058 = iParam1;
		if (Global_106056 == 0)
		{
			if (((Global_106059 == 1 || Global_106059 == 5) || Global_106059 == 11) || Global_106059 == 25)
			{
				func_80(2);
			}
			else if ((Global_106059 == 26 || Global_106059 == 8) || Global_106059 == 17)
			{
				func_80(7);
			}
			else
			{
				func_80(1);
			}
		}
	}
}

void func_80(int iParam0)
{
	Global_106056 = iParam0;
}

void func_81(int iParam0, var uParam1, var uParam2)
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
		func_85((891 + iParam0), 1, -1, 1);
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
		func_82();
	}
}

void func_82()
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
		func_84(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_83() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_77();
				}
			}
		}
	}
}

int func_83()
{
	return Global_25459;
}

int func_84(int iParam0, int iParam1)
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

int func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_86();
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

int func_86()
{
	return Global_1312736;
}

int func_87(int iParam0, int iParam1)
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

int func_88(int iParam0)
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

void func_89(int iParam0)
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

void func_90(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_91(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_91(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_92();
	}
}

void func_92()
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

int func_93()
{
	func_20();
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

int func_94(int iParam0)
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

void func_95(int iParam0, int iParam1)
{
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_24967.f_8[iParam0]), iParam1);
}

int func_96(int iParam0)
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

int func_97()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x61D2332983ACC05C(), 64);
	uVar1 = func_98(Var0);
	return uVar1;
}

int func_98(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_99()
{
	if (Global_25695)
	{
		func_80(4);
		return 1;
	}
	return 0;
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (unk_0xCE3CB618AFE55EFB(iLocal_121))
	{
		unk_0xE1623437A3194332(&iLocal_121);
	}
	switch (iLocal_130)
	{
		case 0:
			if (!unk_0x4915F4759304D5CF(iLocal_67))
			{
				unk_0x33B5487515BD13D5(iLocal_67, unk_0xA19140A5C42D8715(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]))
				{
					if (unk_0xCDDABFAF231CF3DD(Local_109[iVar0 /*18*/]) && vdist2(unk_0xE2BBD32891C18569(Local_109[iVar0 /*18*/], true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > 900f)
					{
						if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xC0AC848E56940C34(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0x680F17660351F21B(&(Local_109[iVar0 /*18*/]));
					}
				}
				if (unk_0xCE3CB618AFE55EFB(Local_109[iVar0 /*18*/].f_1))
				{
					unk_0xE1623437A3194332(&(Local_109[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if (unk_0xDC5D81351D6A4DDB(Local_108[iVar0 /*18*/]))
				{
					if (unk_0xCDDABFAF231CF3DD(Local_108[iVar0 /*18*/]) && vdist2(unk_0xE2BBD32891C18569(Local_108[iVar0 /*18*/], true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > 900f)
					{
						unk_0x4C842FAB634AC89E(&(Local_108[iVar0 /*18*/]));
					}
				}
				if (unk_0xCE3CB618AFE55EFB(Local_108[iVar0 /*18*/].f_1))
				{
					unk_0xE1623437A3194332(&(Local_108[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			settimera(0);
			iLocal_203 = 0;
			iLocal_130++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if ((unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]) && !unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/])) && !unk_0x7112137033807390(Local_109[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(unk_0xA19140A5C42D8715(), iVar0);
					if (unk_0xCDDABFAF231CF3DD(Local_109[iVar0 /*18*/]) && vdist2(unk_0xE2BBD32891C18569(Local_109[iVar0 /*18*/], true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > 2500f)
					{
						if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xC0AC848E56940C34(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0x680F17660351F21B(&(Local_109[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_203)
			{
				if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(func_65(), true)) < 100f)
				{
					iVar2 = unk_0x22C775856F4633CA(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 7);
						func_18(&Local_139, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0xDC5D81351D6A4DDB(Local_139[6 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[6 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 7, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0xDC5D81351D6A4DDB(Local_139[7 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[7 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 8, func_65(), "PAP3ESCAPE", 0, 1);
								if (unk_0xDC5D81351D6A4DDB(Local_139[8 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[8 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 5);
						iVar2 = unk_0x22C775856F4633CA(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0xDC5D81351D6A4DDB(Local_139[iVar2 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0xDC5D81351D6A4DDB(Local_139[iVar2 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0xDC5D81351D6A4DDB(Local_139[iVar2 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 5);
						iVar2 = unk_0x22C775856F4633CA(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0xDC5D81351D6A4DDB(Local_139[iVar2 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0xDC5D81351D6A4DDB(Local_139[iVar2 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0xDC5D81351D6A4DDB(Local_139[iVar2 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_67())
			{
				func_190();
				func_274();
			}
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_101(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (!iLocal_202)
	{
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]) && !unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]))
			{
				unk_0x9568B1B58F78FF36(Local_109[iVar0 /*18*/]);
				Local_109[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_202 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xCE3CB618AFE55EFB(Local_109[iVar0 /*18*/].f_1))
		{
			unk_0xE1623437A3194332(&(Local_109[iVar0 /*18*/].f_1));
		}
		if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x4915F4759304D5CF(iLocal_67))
				{
					if (unk_0x5D7DFE2058701942(Local_109[iVar0 /*18*/], 0))
					{
						unk_0xCB482EF95FAE4D73(Local_109[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_67, iVar0);
					}
				}
				else if (unk_0xF9D4EF1338E38AFB(Local_109[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0x1CBE3F8ED90509B2(Local_109[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0xCDDABFAF231CF3DD(Local_109[iVar0 /*18*/]) && vdist2(unk_0xE2BBD32891C18569(Local_109[iVar0 /*18*/], true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > 400f) && vdist2(unk_0xE2BBD32891C18569(Local_109[iVar0 /*18*/], true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > 400f)
			{
				unk_0x680F17660351F21B(&(Local_109[iVar0 /*18*/]));
				if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/].f_2))
				{
					unk_0xC0AC848E56940C34(&(Local_109[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_108[iVar0 /*18*/]))
		{
			if ((unk_0xCDDABFAF231CF3DD(Local_108[iVar0 /*18*/]) && vdist2(unk_0xE2BBD32891C18569(Local_108[iVar0 /*18*/], true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > 2500f) && func_52(Local_108[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0))
			{
				unk_0x792676988A48387F(&(Local_108[iVar0 /*18*/]));
			}
		}
		if (unk_0xCE3CB618AFE55EFB(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0xE1623437A3194332(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_67))
	{
		if (unk_0xCDDABFAF231CF3DD(iLocal_67) && vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_53) > 2500f)
		{
			unk_0x7E4E83D33161D01A(&iLocal_67);
			func_274();
		}
	}
	if (func_67() || func_68(iLocal_67, 1, 1))
	{
		func_178(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_130)
	{
		case 0:
			if (unk_0xCE3CB618AFE55EFB(iLocal_121))
			{
				unk_0xE1623437A3194332(&iLocal_121);
			}
			if (unk_0xCE3CB618AFE55EFB(iLocal_122))
			{
				unk_0xE1623437A3194332(&iLocal_122);
			}
			if (!unk_0x4915F4759304D5CF(iLocal_67))
			{
				unk_0x9568B1B58F78FF36(iLocal_67);
				unk_0x639C59ACAF6EEC64(iLocal_67, 3f);
			}
			func_102();
			if (vdist(vLocal_52, vLocal_53) < 30f)
			{
				if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_109)
					{
						if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]))
						{
							if (!unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]))
							{
								unk_0x9568B1B58F78FF36(Local_109[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_130++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_109)
				{
					if (unk_0xDC5D81351D6A4DDB(Local_109[iVar0 /*18*/]))
					{
						if (!unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]))
						{
							unk_0x9568B1B58F78FF36(Local_109[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_130++;
			}
			break;
		
		case 1:
			if (((unk_0x1095F403F52B42E1(iLocal_70, 0) && unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 0)) && !bLocal_129) && unk_0x588F5E48C78F1C73(iLocal_70, -1, 0))
			{
				if (vdist(vLocal_53, vLocal_49) < 100f)
				{
					unk_0x2F89329397A277BC(&iVar2);
					unk_0x9F76F280DA42821D(0, iLocal_70, 0);
					unk_0xE49301B2B6F420DE(0, iLocal_70, vLocal_49, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0xACD687595DC10DD1(0, iLocal_70, vLocal_49, 288.7089f, 1, 50f, 0);
					unk_0xD776C8F3311B26BC(0, iLocal_70, unk_0xE2BBD32891C18569(iLocal_70, true), 5, 10f, 262144, 2f, 2f, 1);
					unk_0xFBA5AC89E66201B2(0, iLocal_70, 0);
					unk_0x956B3CF461C0C1C9(0, vLocal_50, 1f, -1, 0.25f, 512, fLocal_51);
					unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x301F42EEE3C40328(iVar2);
					unk_0xE1072FA2FECBAD96(iLocal_67, iVar2);
					unk_0x3A95A0A3221D4208(&iVar2);
				}
				else
				{
					unk_0x2F89329397A277BC(&iVar3);
					unk_0x9F76F280DA42821D(0, iLocal_70, 0);
					unk_0x731722E696597BD1(0, iLocal_70, 15f, 786468);
					unk_0x301F42EEE3C40328(iVar3);
					unk_0xE1072FA2FECBAD96(iLocal_67, iVar3);
					unk_0x3A95A0A3221D4208(&iVar3);
				}
				iLocal_130 = 1000;
			}
			else
			{
				if (unk_0x5D7DFE2058701942(iLocal_67, 0))
				{
					unk_0xCB482EF95FAE4D73(iLocal_67, 0, 0);
				}
				iLocal_130++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0x33B5487515BD13D5(iLocal_67, unk_0xA19140A5C42D8715(), 3000f, -1, 1, 0);
				iLocal_130 = 1000;
			}
			else
			{
				if (vdist(vLocal_53, vLocal_49) < 100f)
				{
					unk_0x2F89329397A277BC(&iVar4);
					unk_0x956B3CF461C0C1C9(0, vLocal_50, 1f, -1, 0.25f, 512, fLocal_51);
					unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x301F42EEE3C40328(iVar4);
					unk_0xE1072FA2FECBAD96(iLocal_67, iVar4);
					unk_0x3A95A0A3221D4208(&iVar4);
				}
				else
				{
					unk_0x1CBE3F8ED90509B2(iLocal_67, 1193033728, 0);
				}
				iLocal_130 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_102()
{
	Global_14688 = 0;
	func_103();
}

void func_103()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

void func_104()
{
	func_102();
	if (!unk_0x4915F4759304D5CF(iLocal_67) && vdist2(vLocal_52, vLocal_53) < 900f)
	{
		unk_0x9568B1B58F78FF36(iLocal_67);
		if (func_5(&Local_139, cLocal_133, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_190();
			func_178(10);
		}
		unk_0xDFA901280292A2FB(iLocal_67, -2065892691);
	}
	else
	{
		func_190();
		func_178(10);
	}
}

void func_105()
{
	int iVar0;
	
	switch (iLocal_130)
	{
		case 0:
			func_137();
			if (!unk_0x4915F4759304D5CF(iLocal_67))
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_121))
				{
					iLocal_121 = func_180(iLocal_67, 0, 145);
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_124))
				{
					unk_0xE1623437A3194332(&iLocal_124);
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_123))
				{
					unk_0xE1623437A3194332(&iLocal_123);
				}
				unk_0x9568B1B58F78FF36(iLocal_67);
				unk_0x2F89329397A277BC(&iVar0);
				unk_0xFBA5AC89E66201B2(0, iLocal_70, 0);
				unk_0x956B3CF461C0C1C9(0, vLocal_50, 1f, 30000, 0.25f, 512, fLocal_51);
				unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x301F42EEE3C40328(iVar0);
				unk_0xE1072FA2FECBAD96(iLocal_67, iVar0);
				unk_0x3A95A0A3221D4208(&iVar0);
				if (unk_0x749F5228DEB730FF(iLocal_67))
				{
					unk_0xF8136E11BE4BEAC3(iLocal_67);
				}
				func_102();
				iLocal_130++;
			}
			break;
		
		case 1:
			if (!func_73() && !unk_0x4915F4759304D5CF(iLocal_67))
			{
				if (unk_0xA60C975CBAB69F34(iLocal_67, vLocal_50, 3f, 3f, 3f, false, true, 0) && unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_50, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x4915F4759304D5CF(iLocal_67))
			{
				func_136(0);
				if (func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
				{
					func_107(func_19(), 1, 150, 0, 1);
					iLocal_130++;
				}
			}
			break;
		
		case 3:
			if (!func_73() && !unk_0x4915F4759304D5CF(iLocal_67))
			{
				settimera(0);
				iLocal_130++;
			}
			break;
		
		case 4:
			if (timera() > 2000)
			{
				if (func_106())
				{
					func_75();
				}
			}
			break;
	}
}

int func_106()
{
	return 1;
}

void func_107(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_108(Global_106070.f_28022[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_135();
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
					func_134(99, 1);
					func_133(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_133(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_133(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_119(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_115(5))
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
							func_133(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_115(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_133(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_property"), iParam3);
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
									func_133(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_115(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_114(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_134(95, iParam3);
					break;
				
				case 1:
					func_134(97, iParam3);
					break;
				
				case 2:
					func_134(96, iParam3);
					break;
			}
			func_134(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_111(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_111(iVar1);
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
					func_133(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_133(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_133(joaat("sp2_total_cash_earned"), iParam3);
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
	func_110(iParam0);
	if (Global_36117 == 15)
	{
		func_109(0);
	}
	return 1;
}

void func_109(bool bParam0)
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

void func_110(int iParam0)
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

void func_111(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_85(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_85(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_85(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_85(137, 0, -1, 1);
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
	else if (unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0) || unk_0x05EFB6A616B6FADE(Global_2097152[func_113() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xFA57C719261AA55D(&(Global_106070.f_20536.f_471), iParam0);
		unk_0xFA57C719261AA55D(&(Global_2097152[func_113() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x59FF6261546DDD52("COUP_RED");
		unk_0x4FDA9E6EF359F8A9(func_112(iParam0));
		unk_0x595B8132C1F20265(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_112(int iParam0)
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

int func_113()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_114(int iParam0)
{
	func_134(93, iParam0);
	func_134(29, iParam0);
	func_134(30, iParam0);
}

bool func_115(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_116(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_116(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_116(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_116(137, -1, -1);
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_20536.f_471, iParam0);
	}
	return unk_0x05EFB6A616B6FADE(Global_2097152[func_113() /*12745*/].f_8178.f_10, iParam0);
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	iVar1 = func_118(iParam0, iParam1);
	uVar2 = func_117(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x07EEB31CF063DAB7(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_117(int iParam0)
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

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_86();
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

int func_119(bool bParam0)
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
		func_84(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_120(27, 1);
	return 1;
}

int func_120(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_121(iParam0, iParam1);
}

int func_121(int iParam0, int iParam1)
{
	if (func_12(14) && !func_132(iParam0))
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
	if (func_131(&Global_4268566))
	{
		if (func_129(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_122(&Global_4268566, iParam0))
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

int func_122(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_132(iParam1))
	{
		return 0;
	}
	if (func_129(uParam0, iParam1))
	{
		return 0;
	}
	if (func_128(uParam0) < 0f)
	{
		func_127(uParam0, 0);
	}
	func_125(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_123(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_123(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16E6CF5D5B848918(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_132(iParam1))
	{
		return 0;
	}
	if (func_129(uParam0, iParam1))
	{
		return 0;
	}
	if (func_128(uParam0) < 0f)
	{
		func_127(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_124(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_124(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_125(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_126(uParam0, iVar0);
		iVar0++;
	}
	func_127(uParam0, (Global_4268565 - 0.5f));
}

void func_126(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_127(var uParam0, float fParam1)
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

float func_128(var uParam0)
{
	return uParam0->f_80;
}

bool func_129(var uParam0, int iParam1)
{
	return func_130(uParam0, iParam1) != -1;
}

int func_130(var uParam0, int iParam1)
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

bool func_131(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_132(int iParam0)
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

void func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2AD48F3CEBA882E9(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x93180BE33E7149EF(iParam0, iVar0, 1);
}

void func_134(int iParam0, int iParam1)
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

void func_135()
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

void func_136(bool bParam0)
{
	if (!unk_0x4915F4759304D5CF(iLocal_67))
	{
		if (iLocal_170 > 1)
		{
			if (!unk_0xC42DE41AEED00E7B(iLocal_67, unk_0xA19140A5C42D8715(), 60f))
			{
				iLocal_170 = 0;
				iLocal_171 = 0;
			}
		}
		switch (iLocal_170)
		{
			case 0:
				unk_0x9568B1B58F78FF36(iLocal_67);
				unk_0x22DD1D053CFF9707(iLocal_67, unk_0xA19140A5C42D8715(), -1, 16, 2);
				unk_0x2F89329397A277BC(&iLocal_169);
				unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
				unk_0x22DD1D053CFF9707(0, unk_0xA19140A5C42D8715(), -1, 16, 2);
				unk_0x301F42EEE3C40328(iLocal_169);
				unk_0xE1072FA2FECBAD96(iLocal_67, iLocal_169);
				unk_0x3A95A0A3221D4208(&iLocal_169);
				iLocal_170++;
				break;
			
			case 1:
				if (unk_0xF9D4EF1338E38AFB(iLocal_67, 242628503) != 1)
				{
					iLocal_170++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_171)
					{
						case 0:
							if (!unk_0x411C28019DEA5CEF(iLocal_67, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0x3F01127ECD227890(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xE5B5A1FFAA0834BD(iLocal_67, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0x3F01127ECD227890(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171++;
							}
							break;
						
						case 1:
							if (!unk_0x411C28019DEA5CEF(iLocal_67, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0x3F01127ECD227890(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xE5B5A1FFAA0834BD(iLocal_67, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0x3F01127ECD227890(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171++;
							}
							break;
						
						case 2:
							if (!unk_0x411C28019DEA5CEF(iLocal_67, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0x3F01127ECD227890(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xE5B5A1FFAA0834BD(iLocal_67, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0x3F01127ECD227890(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_137()
{
	if (unk_0xCE3CB618AFE55EFB(iLocal_125))
	{
		unk_0xE1623437A3194332(&iLocal_125);
	}
}

void func_138()
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iLocal_70, 0))
	{
		switch (iLocal_130)
		{
			case 0:
				if (!unk_0x4915F4759304D5CF(iLocal_67) && unk_0x1095F403F52B42E1(iLocal_70, 0))
				{
					func_137();
					func_142(1, 1, 0, 0, 0);
					if (unk_0xCE3CB618AFE55EFB(iLocal_123))
					{
						unk_0xE1623437A3194332(&iLocal_123);
					}
					if (unk_0xCE3CB618AFE55EFB(iLocal_121))
					{
						unk_0xE1623437A3194332(&iLocal_121);
					}
					if (unk_0xCE3CB618AFE55EFB(iLocal_122))
					{
						unk_0xE1623437A3194332(&iLocal_122);
					}
					if (unk_0x749F5228DEB730FF(iLocal_67))
					{
						unk_0xF8136E11BE4BEAC3(iLocal_67);
					}
					func_140();
					if (!unk_0x4915F4759304D5CF(iLocal_67))
					{
						unk_0x8CBE3882704F529D(iLocal_67, unk_0x3201284584C7CD83(iLocal_70, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x8CBE3882704F529D(unk_0xA19140A5C42D8715(), unk_0x3201284584C7CD83(iLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 1280);
					if ((bLocal_129 || Global_3) || bLocal_56)
					{
						while (!func_139(&Local_139, cLocal_133, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							wait(0);
						}
					}
					else
					{
						while (!func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
						{
							wait(0);
						}
					}
					func_107(func_19(), 1, 750, 0, 1);
					if (!unk_0x4915F4759304D5CF(iLocal_67))
					{
						unk_0x8CBE3882704F529D(iLocal_67, unk_0x3201284584C7CD83(iLocal_70, -10f, 5f, 0f), -1, 16, 4);
						unk_0x3A3E4B7C6FBE305D(iLocal_67, 0, 0);
					}
					unk_0x8CBE3882704F529D(unk_0xA19140A5C42D8715(), unk_0x3201284584C7CD83(iLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_130++;
				}
				break;
			
			case 1:
				if (!func_73() && !unk_0x4915F4759304D5CF(iLocal_67))
				{
					unk_0x2F89329397A277BC(&iVar0);
					unk_0xFBA5AC89E66201B2(0, iLocal_70, 0);
					unk_0x956B3CF461C0C1C9(0, vLocal_50, 1f, 30000, 0.25f, 512, fLocal_51);
					unk_0x0EEB301CAA50A123(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x301F42EEE3C40328(iVar0);
					unk_0xE1072FA2FECBAD96(iLocal_67, iVar0);
					unk_0x3A95A0A3221D4208(&iVar0);
					iLocal_130++;
					settimera(0);
				}
				break;
			
			case 2:
				if (!unk_0x4915F4759304D5CF(iLocal_67) && unk_0x1095F403F52B42E1(iLocal_70, 0))
				{
					if (!unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 0))
					{
						settimera(0);
						if (bLocal_129)
						{
							unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
							func_142(0, 1, 0, 0, 0);
							iLocal_130 = 5;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x4915F4759304D5CF(iLocal_67) && unk_0x1095F403F52B42E1(iLocal_70, 0)) && timera() > 1000)
				{
					unk_0xFBA5AC89E66201B2(unk_0xA19140A5C42D8715(), iLocal_70, 0);
					unk_0x22DD1D053CFF9707(unk_0xA19140A5C42D8715(), iLocal_70, 10000, 0, 3);
					iLocal_130++;
				}
				break;
			
			case 4:
				if (unk_0x1095F403F52B42E1(iLocal_70, 0) && !unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 0))
				{
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
					func_142(0, 1, 0, 0, 0);
					unk_0x14293208022014FA(iLocal_70, 2);
					settimera(0);
					iLocal_130++;
				}
				break;
			
			case 5:
				if (timera() > 1000)
				{
					if (func_106())
					{
						if (!bLocal_129)
						{
							if (!func_94(19))
							{
								func_90("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_89(19);
							}
						}
						func_75();
					}
				}
				break;
			}
	}
}

bool func_139(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_6(sParam2, iParam4, 0);
}

void func_140()
{
	Global_14688 = 0;
	func_141();
}

void func_141()
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

void func_142(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_149(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_9())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_148(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_149(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_148(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_146(unk_0xD4E735F4B6A956AC())) && !func_144(unk_0xD4E735F4B6A956AC(), 0)) && !func_143()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_146(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_143()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_144(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_145(-1, 0) == 8;
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

int func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_86();
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

int func_146(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return 1;
	}
	if (func_147())
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

bool func_147()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_148(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_149(int iParam0)
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

void func_150()
{
	if (Global_3 || bLocal_56)
	{
		unk_0x5FEB5D55B0DE217B(0.7f);
	}
	if (bLocal_129 && !unk_0x4915F4759304D5CF(iLocal_67))
	{
		if (!func_171(iLocal_67))
		{
			if (!unk_0xCE3CB618AFE55EFB(iLocal_121))
			{
				iLocal_121 = func_180(iLocal_67, 0, 145);
			}
		}
		else
		{
			if (func_66())
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_123))
				{
					iLocal_123 = func_50(vLocal_49, 1);
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_124))
				{
					unk_0xE1623437A3194332(&iLocal_124);
				}
			}
			else
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_124))
				{
					iLocal_124 = func_50(vLocal_50, 1);
				}
				if (unk_0xCE3CB618AFE55EFB(iLocal_123))
				{
					unk_0xE1623437A3194332(&iLocal_123);
				}
			}
			if (unk_0xCE3CB618AFE55EFB(iLocal_121))
			{
				unk_0xE1623437A3194332(&iLocal_121);
			}
		}
		if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 0))
		{
			if ((unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0)) && func_170(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
			{
				iLocal_70 = 0;
				iLocal_70 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				unk_0x1F7948851FB36E88(iLocal_70, true, 1);
				unk_0x14293208022014FA(iLocal_70, 1);
				unk_0x9F3F43B8D4BC7F09(iLocal_70, false, 0);
			}
		}
		if (unk_0xCE3CB618AFE55EFB(iLocal_124) && !unk_0x5D7DFE2058701942(iLocal_67, 0))
		{
			if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), vLocal_50, 15f, 15f, 15f, false, true, 0) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, true, true, 0))
			{
				func_178(4);
			}
		}
		else if (iLocal_130 != 100)
		{
			if (func_66() && func_169(1, 1, 1))
			{
				if (unk_0x54F6F5A823224519(iLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					settimera(0);
					iLocal_130 = 100;
				}
			}
			else if (!unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 0))
			{
				if (unk_0xF9D4EF1338E38AFB(iLocal_67, -1794415470) != 1)
				{
					unk_0xA2EBCD9385E56019(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_130 != 100)
		{
			if (func_66() && func_169(1, 1, 1))
			{
				if (unk_0x54F6F5A823224519(iLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					settimera(0);
					iLocal_130 = 100;
				}
			}
		}
		func_165(1);
	}
	switch (iLocal_130)
	{
		case 0:
			if (func_66())
			{
				if (unk_0x411C28019DEA5CEF(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x411C28019DEA5CEF(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0x9568B1B58F78FF36(iLocal_67);
				}
				if (func_5(&Local_139, cLocal_133, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0xBF6EED5D6E0CD9BF(0.5f);
					iLocal_130++;
				}
				if (!func_164())
				{
					func_159();
				}
			}
			break;
		
		case 1:
			if (!func_74())
			{
				if (func_66())
				{
					if (!func_73())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_74())
			{
				if (func_66())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						settimera(0);
						if (Global_3 || bLocal_56)
						{
							iLocal_130 = 99;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (timera() > 7000)
			{
				if (func_155("REPAP_HOME1", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_155("REPAP_HOME1M", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_155("REPAP_HOME1F", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			else if (func_155("REPAP_HOME1T", (func_158() && !func_74())))
			{
				iLocal_130++;
			}
			break;
		
		case 5:
			if (func_155("REPAP_HOME1L", (func_158() && !func_74())))
			{
				settimera(0);
				iLocal_130++;
			}
			break;
		
		case 6:
			if (!func_74())
			{
				if (timera() > 7000)
				{
					if (func_158())
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME2"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 8:
			if (func_155("REPAP_HOME2L", (func_158() && !func_74())))
			{
				iLocal_130++;
			}
			break;
		
		case 9:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_RESP2"))
					{
						settimera(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 10:
			if (timera() > 7000)
			{
				if (func_155("REPAP_HOME3", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 11:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME3"))
					{
						settimera(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 12:
			if (timera() > 7000)
			{
				if (func_155("REPAP_HOME4", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 13:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME4"))
					{
						settimera(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 14:
			if (timera() > 7000)
			{
				if (func_155("REPAP_NOBAN", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 15:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_NOBAN"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 17:
			func_74();
			break;
		
		case 100:
			if (func_152(iLocal_70, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_179("");
				func_178(3);
			}
			break;
	}
	if (unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0)
	{
		func_71();
	}
	if (func_19() == 2)
	{
		if ((func_151() && !func_164()) && iLocal_45 != 8)
		{
			if (!unk_0x4915F4759304D5CF(iLocal_67))
			{
				if (unk_0xA60C975CBAB69F34(iLocal_67, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!unk_0x097A982B0640FA32(iLocal_67, unk_0x64C831B843E08AC9(unk_0xD4E735F4B6A956AC())))
					{
						unk_0x9854E4DB9C72017F(iLocal_67, unk_0x64C831B843E08AC9(unk_0xD4E735F4B6A956AC()));
					}
					func_102();
					iLocal_45 = 8;
				}
			}
		}
	}
}

var func_151()
{
	return Global_25694;
}

int func_152(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_153(iParam0);
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

void func_153(int iParam0)
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

int func_154(char* sParam0)
{
	vector3 vVar0;
	
	StringConCat(&vVar0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&vVar0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&vVar0, "F", 24);
	}
	else
	{
		StringConCat(&vVar0, "T", 24);
	}
	if (func_5(&Local_139, cLocal_133, &vVar0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_155(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_58)
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_58 = 1;
				iLocal_59 = 0;
			}
		}
		else if (iLocal_59)
		{
			if (func_157(&Local_139, cLocal_133, sParam0, &Local_61, 4, 0, 0))
			{
				iLocal_59 = 0;
			}
		}
		if ((iLocal_58 && !iLocal_59) && bParam1)
		{
			if (iLocal_62 == -1)
			{
				if (!func_73())
				{
					iLocal_62 = unk_0xFD34717937104F1C();
				}
			}
			else if ((unk_0xFD34717937104F1C() - iLocal_62) > 500)
			{
				iLocal_62 = -1;
				iLocal_58 = 0;
				iLocal_59 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_58 && !iLocal_59)
	{
		Local_61 = { func_156() };
		func_140();
		iLocal_59 = 1;
	}
	return 0;
}

struct<6> func_156()
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

bool func_157(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_6(sParam2, iParam4, 0);
}

int func_158()
{
	if (bLocal_129)
	{
		if (unk_0x1095F403F52B42E1(iLocal_70, 0))
		{
			if (func_66())
			{
				return 1;
			}
		}
		if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && !unk_0x5D7DFE2058701942(iLocal_67, 0))
		{
			if (vdist2(vLocal_52, vLocal_53) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_66();
	}
	return 0;
}

void func_159()
{
	if (func_19() == 2)
	{
		if (!unk_0xCE3CB618AFE55EFB(iLocal_125))
		{
			func_162();
			iLocal_125 = func_161(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0x7DB79A42AADE120F(iLocal_125, 269);
			func_160();
		}
	}
}

void func_160()
{
	if (!func_164())
	{
		if (func_19() == 2)
		{
			Global_25694 = 1;
		}
	}
}

int func_161(vector3 vParam0, bool bParam1)
{
	return func_50(vParam0, bParam1);
}

void func_162()
{
	if (func_19() == 2)
	{
		if (!Global_25696)
		{
			func_163("CULT_BLIP_HELP", -1);
			Global_25696 = 1;
		}
	}
}

void func_163(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

int func_164()
{
	if (Global_106070.f_24967.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_165(bool bParam0)
{
	if (unk_0x1095F403F52B42E1(iLocal_70, 0) && !unk_0x4915F4759304D5CF(iLocal_67))
	{
		if (func_66())
		{
			if (bParam0)
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_123))
				{
					iLocal_123 = func_50(vLocal_49, 1);
				}
			}
			if (unk_0xCE3CB618AFE55EFB(iLocal_121))
			{
				unk_0xE1623437A3194332(&iLocal_121);
			}
			if (unk_0xCE3CB618AFE55EFB(iLocal_122))
			{
				unk_0xE1623437A3194332(&iLocal_122);
			}
		}
		else
		{
			if (unk_0xCE3CB618AFE55EFB(iLocal_123))
			{
				unk_0xE1623437A3194332(&iLocal_123);
			}
			if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 0))
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_122))
				{
					iLocal_122 = func_166(iLocal_70, 0, 0);
				}
			}
			if (!unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 0))
			{
				if (!unk_0xCE3CB618AFE55EFB(iLocal_121))
				{
					iLocal_121 = func_180(iLocal_67, 0, 145);
				}
			}
			else if (unk_0xCE3CB618AFE55EFB(iLocal_121))
			{
				unk_0xE1623437A3194332(&iLocal_121);
			}
		}
	}
}

int func_166(int iParam0, bool bParam1, bool bParam2)
{
	return func_167(iParam0, !bParam1, bParam2);
}

int func_167(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
	if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_51(unk_0x4C9BACA8D249CB13(), 1f, 1f));
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
		unk_0x575CF00E129E0CE1(iVar0, func_51(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
	}
	else if (unk_0x92D42293DA8F9805(iParam0))
	{
		unk_0x575CF00E129E0CE1(iVar0, func_51(unk_0x4C9BACA8D249CB13(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0xD63FAD81FAF5E0CB(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x588F5E48C78F1C73(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_169(bool bParam0, bool bParam1, bool bParam2)
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

int func_170(int iParam0)
{
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		if (unk_0x588F5E48C78F1C73(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x588F5E48C78F1C73(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x588F5E48C78F1C73(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x588F5E48C78F1C73(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	if (unk_0x097A982B0640FA32(iParam0, unk_0x64C831B843E08AC9(unk_0xD4E735F4B6A956AC())))
	{
		if (!unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0xF8136E11BE4BEAC3(iParam0);
		}
		return 1;
	}
	else if (unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0x9854E4DB9C72017F(iParam0, unk_0x64C831B843E08AC9(unk_0xD4E735F4B6A956AC()));
	}
	return 0;
}

void func_172()
{
	if (!unk_0x4915F4759304D5CF(iLocal_67) && unk_0x1095F403F52B42E1(iLocal_70, 0))
	{
		if (!unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 1))
		{
			if (unk_0xF9D4EF1338E38AFB(iLocal_67, -1794415470) != 1)
			{
				unk_0xA2EBCD9385E56019(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 2f, 8388608, 0);
			}
		}
		if ((unk_0xDC5D81351D6A4DDB(func_65()) && vdist2(unk_0xE2BBD32891C18569(iLocal_67, true), unk_0xE2BBD32891C18569(func_65(), true)) < 100f) && (unk_0xEAA5CEF8875FEEED(iLocal_70) < 5f || !unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(iLocal_70))))
		{
			if (bLocal_129)
			{
				if (!unk_0x411C28019DEA5CEF(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0xB10F7FE89663CB5B(iLocal_67, iLocal_70))
				{
					unk_0x3F01127ECD227890(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x411C28019DEA5CEF(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0xB10F7FE89663CB5B(iLocal_67, iLocal_70))
			{
				unk_0x3F01127ECD227890(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x411C28019DEA5CEF(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x411C28019DEA5CEF(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0xB10F7FE89663CB5B(iLocal_67, iLocal_70))
		{
			unk_0x9568B1B58F78FF36(iLocal_67);
		}
		switch (iLocal_130)
		{
			case 0:
				if (timera() > 2000)
				{
					if (unk_0xDC5D81351D6A4DDB(func_65()) && !unk_0x4915F4759304D5CF(func_65()))
					{
						func_18(&Local_139, 4);
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
					}
					iLocal_47 = 2;
					func_102();
					if (func_5(&Local_139, cLocal_133, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0xBF6EED5D6E0CD9BF(0.2f);
						unk_0x1F4E5EFBFE503FB3(iLocal_67, true);
						unk_0x80E7C4A78224C8F9(1, iLocal_55, 1862763509);
						iLocal_119 = unk_0xFCFC8CC5FF74580D(joaat("prop_ld_test_01"), vLocal_68, true, true, false);
						unk_0xDCFB67537602326F(iLocal_119, false, 0);
						unk_0x7C73A424F1117528(iLocal_119, false, 0);
						unk_0xB29E08C7AB729BAD(iLocal_119, true);
						iLocal_130++;
					}
				}
				break;
			
			case 1:
				func_174();
				if (!unk_0x54F6F5A823224519(iLocal_67, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, true, 0))
				{
					iLocal_130++;
					iLocal_131 = unk_0xFD34717937104F1C();
					iLocal_47 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_198)
				{
					if (((((iLocal_200 != 1 && iLocal_200 != 3) && iLocal_200 != 6) && iLocal_200 != 9) && iLocal_200 != 11) && iLocal_200 != 13)
					{
						bLocal_199 = false;
						if (unk_0xDC5D81351D6A4DDB(func_65()) && unk_0x10E54C268D1B3FED(func_65(), iLocal_70, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_198 = true;
						}
					}
				}
				else
				{
					if (!func_73())
					{
						bLocal_199 = true;
					}
					if (unk_0xDC5D81351D6A4DDB(func_65()))
					{
						if (!unk_0x10E54C268D1B3FED(func_65(), iLocal_70, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_198 = false;
						}
					}
				}
				if (bLocal_199)
				{
					if (!func_74())
					{
						if (!func_173())
						{
							func_174();
						}
					}
				}
				else
				{
					switch (iLocal_200)
					{
						case 0:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_154("REPAP_RES1"))
								{
									iLocal_201 = unk_0xFD34717937104F1C();
									iLocal_200++;
								}
							}
							break;
						
						case 2:
							if ((unk_0xFD34717937104F1C() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT2"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0xFD34717937104F1C();
									iLocal_200++;
								}
							}
							break;
						
						case 4:
							if ((unk_0xFD34717937104F1C() - iLocal_201) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT3M", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT3F", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_155("REPAP_CHT3T", ((func_158() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 4)
								{
									iLocal_201 = unk_0xFD34717937104F1C();
								}
							}
							break;
						
						case 5:
							if ((unk_0xFD34717937104F1C() - iLocal_201) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT4M", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT4F", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_155("REPAP_CHT4T", ((func_158() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 5)
								{
									iLocal_201 = unk_0xFD34717937104F1C();
								}
							}
							break;
						
						case 6:
							if ((unk_0xFD34717937104F1C() - iLocal_201) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT5M", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT5F", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_155("REPAP_CHT5T", ((func_158() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 6)
								{
									iLocal_201 = unk_0xFD34717937104F1C();
								}
							}
							break;
						
						case 7:
							if ((unk_0xFD34717937104F1C() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT6"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0xFD34717937104F1C();
									iLocal_200++;
								}
							}
							break;
						
						case 9:
							if ((unk_0xFD34717937104F1C() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT7"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0xFD34717937104F1C();
									iLocal_200++;
								}
							}
							break;
						
						case 11:
							if ((unk_0xFD34717937104F1C() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT8"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						}
				}
				if (!unk_0xDC5D81351D6A4DDB(func_65()))
				{
					settimera(0);
					iLocal_130++;
					func_140();
					if (!Global_3 && !bLocal_56)
					{
						iLocal_47 = 6;
					}
				}
				if (Global_3 || bLocal_56)
				{
					if (unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, false, true, 0) && func_66())
					{
						iLocal_47 = 4;
						iLocal_66 = unk_0xFD34717937104F1C();
					}
				}
				break;
			
			case 3:
				if (timera() > 3000 && func_66())
				{
					func_179("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_139, cLocal_133, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_178(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_165(0);
	}
}

int func_173()
{
	int iVar0;
	
	iVar0 = func_24();
	if ((unk_0xFD34717937104F1C() - iLocal_196) > 5000)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_70) && unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 0))
		{
			if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 1))
			{
				if (iVar0 != -1 && (unk_0xFD34717937104F1C() - Local_109[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_196 = unk_0xFD34717937104F1C();
						return 1;
					}
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_196 = unk_0xFD34717937104F1C();
				return 1;
			}
		}
	}
	return 0;
}

void func_174()
{
	int iVar0;
	
	if ((unk_0xFD34717937104F1C() - iLocal_145) > iLocal_146)
	{
		if ((!unk_0x4915F4759304D5CF(iLocal_67) && unk_0xDC5D81351D6A4DDB(func_65())) && !unk_0x4915F4759304D5CF(func_65()))
		{
			if (unk_0x499324B3EF19C288(vLocal_53, unk_0xE2BBD32891C18569(func_65(), true), true) < 8f)
			{
				iVar0 = unk_0x22C775856F4633CA(0, 5);
				func_18(&Local_139, 4);
				func_18(&Local_139, 5);
				func_18(&Local_139, 6);
				func_18(&Local_139, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0xDC5D81351D6A4DDB(Local_139[4 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xFD34717937104F1C();
								iLocal_146 = unk_0x22C775856F4633CA(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0xDC5D81351D6A4DDB(Local_139[4 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xFD34717937104F1C();
								iLocal_146 = unk_0x22C775856F4633CA(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_139, 5, func_65(), "PAP2", 0, 1);
						if (unk_0xDC5D81351D6A4DDB(Local_139[5 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[5 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xFD34717937104F1C();
								iLocal_146 = unk_0x22C775856F4633CA(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_139, 6, func_65(), "PAP3", 0, 1);
						if (unk_0xDC5D81351D6A4DDB(Local_139[6 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[6 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xFD34717937104F1C();
								iLocal_146 = unk_0x22C775856F4633CA(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_139, 7, func_65(), "PAP4", 0, 1);
						if (unk_0xDC5D81351D6A4DDB(Local_139[7 /*10*/]) && !unk_0x4915F4759304D5CF(Local_139[7 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xFD34717937104F1C();
								iLocal_146 = unk_0x22C775856F4633CA(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_175()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3[24];
	char* sVar4;
	vector3 vVar5[24];
	int iVar6;
	
	if (!unk_0x4915F4759304D5CF(iLocal_67))
	{
		if (unk_0xCE3CB618AFE55EFB(iLocal_121))
		{
			unk_0x264E87C905AE790B(iLocal_121, iLocal_194);
		}
		switch (iLocal_130)
		{
			case 0:
				unk_0x6D68030C791111E0("random@paparazzi@peek");
				unk_0x6D68030C791111E0("random@paparazzi@trans");
				unk_0x6D68030C791111E0("random@paparazzi@wait");
				if ((unk_0x39C2D9AB77873F84("random@paparazzi@peek") && unk_0x39C2D9AB77873F84("random@paparazzi@trans")) && unk_0x39C2D9AB77873F84("random@paparazzi@wait"))
				{
					iLocal_174 = unk_0x70788DC3D80C9DEB(vLocal_187, vLocal_188, 2);
					unk_0xE5565DEAABF9D588(iLocal_67, iLocal_174, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x22DD1D053CFF9707(iLocal_67, unk_0xA19140A5C42D8715(), -1, 4, 4);
					sLocal_175[0] = "peek_a";
					sLocal_175[1] = "peek_b";
					sLocal_175[2] = "peek_c";
					unk_0xBF6EED5D6E0CD9BF(0.2f);
					iLocal_172 = 0;
					iLocal_189 = 0;
					bLocal_194 = false;
					iLocal_60 = 1;
					iLocal_190 = 0;
					iLocal_57 = 0;
					fLocal_191 = 0f;
					iLocal_130++;
				}
				break;
			
			case 1:
				if (unk_0x05EFB6A616B6FADE(iLocal_190, 0))
				{
					if (!unk_0x05EFB6A616B6FADE(iLocal_190, 1))
					{
						unk_0x2BCFB39E86340DAA(&iLocal_190, 1);
					}
					else
					{
						iLocal_190 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_181, vLocal_182, fLocal_183, 0, true, 0);
				bVar1 = unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_178, vLocal_179, fLocal_180, 0, true, 0);
				if (unk_0x3CAC2741CC1A631F(sLocal_177, "right_"))
				{
					if (bVar1)
					{
						sLocal_177 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_177 = "right_";
					iVar2 = 1;
				}
				if ((unk_0xFE5DE0C3200E00F2(iLocal_174) && unk_0x33CECDD9E141E18E(iLocal_174) > 0.9f) || iVar2)
				{
					if (iLocal_190 == 0)
					{
						unk_0x9568B1B58F78FF36(iLocal_67);
						iLocal_176++;
						if (iLocal_176 >= 3)
						{
							iLocal_176 = 0;
						}
						StringCopy(&cVar3, sLocal_177, 24);
						StringConCat(&cVar3, sLocal_175[iLocal_176], 24);
						iLocal_174 = unk_0x70788DC3D80C9DEB(vLocal_187, vLocal_188, 2);
						unk_0xE5565DEAABF9D588(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0x2BCFB39E86340DAA(&iLocal_190, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_191 <= 20f)
					{
						fLocal_191 = (fLocal_191 + unk_0xDE089748C4C76C96());
					}
					if ((unk_0xFD34717937104F1C() - iLocal_173) > 5000 && iLocal_190 == 0)
					{
						if (vdist2(vLocal_52, vLocal_53) < (22.2f * 22.2f))
						{
							if (fLocal_191 < 10f)
							{
								if (iLocal_192)
								{
									sVar4 = "REPAP_SHT1";
								}
								else
								{
									sVar4 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar4 = "REPAP_PRT";
							}
							if (func_19() == 1)
							{
								func_17(&Local_139, 1, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_139, 1, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_139, 1, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_139, cLocal_133, sVar4, 4, 0, 0, 0))
							{
								iLocal_192 = 1;
								if (!unk_0x10E54C268D1B3FED(unk_0xA19140A5C42D8715(), iLocal_67, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0x9568B1B58F78FF36(iLocal_67);
									StringCopy(&cVar5, sLocal_177, 24);
									StringConCat(&cVar5, "come_here", 24);
									iLocal_174 = unk_0x70788DC3D80C9DEB(vLocal_187, vLocal_188, 2);
									unk_0xE5565DEAABF9D588(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar5, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0x2BCFB39E86340DAA(&iLocal_190, 0);
								}
								iLocal_173 = unk_0xFD34717937104F1C();
							}
						}
					}
				}
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), vLocal_184, vLocal_185, fLocal_186, 0, true, 0) && iLocal_190 == 0)
				{
					if (unk_0xCE3CB618AFE55EFB(iLocal_120))
					{
						unk_0xE1623437A3194332(&iLocal_120);
						if (!unk_0xCE3CB618AFE55EFB(iLocal_121))
						{
							iLocal_121 = func_180(iLocal_67, 0, 145);
						}
					}
					unk_0x9568B1B58F78FF36(iLocal_67);
					iLocal_174 = unk_0x70788DC3D80C9DEB(vLocal_187, vLocal_188, 2);
					if (bVar1)
					{
						unk_0xE5565DEAABF9D588(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0xE5565DEAABF9D588(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0x2BCFB39E86340DAA(&iLocal_190, 0);
					iLocal_130++;
				}
				break;
			
			case 2:
				if (unk_0xFE5DE0C3200E00F2(iLocal_174) && unk_0x33CECDD9E141E18E(iLocal_174) > 0.9f)
				{
					if (unk_0xF9D4EF1338E38AFB(iLocal_67, 242628503) != 1)
					{
						unk_0x9568B1B58F78FF36(iLocal_67);
						unk_0x3F01127ECD227890(iLocal_67, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_170 = 2;
						settimera(0);
					}
					iLocal_130++;
				}
				break;
			
			case 3:
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (func_177())
					{
						unk_0x792676988A48387F(&iLocal_70);
						iLocal_70 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
						unk_0x1F7948851FB36E88(iLocal_70, true, 1);
						unk_0x9F3F43B8D4BC7F09(iLocal_70, false, 0);
						unk_0x14293208022014FA(iLocal_70, 1);
						bLocal_129 = true;
					}
				}
				if (!bLocal_129)
				{
					unk_0x14293208022014FA(iLocal_70, 1);
					if (func_139(&Local_139, cLocal_133, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						settimera(0);
						bLocal_194 = true;
						iLocal_130 = 100;
					}
				}
				else if (func_139(&Local_139, cLocal_133, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					settimera(0);
					bLocal_194 = true;
					iLocal_130++;
				}
				if (timera() > 2000)
				{
					func_176(vLocal_68, 1);
				}
				break;
			
			case 4:
				func_49();
				if (unk_0x1095F403F52B42E1(iLocal_70, 0))
				{
					if (unk_0x10E54C268D1B3FED(iLocal_70, iLocal_67, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_129)
					{
						if (unk_0xF9D4EF1338E38AFB(iLocal_67, 242628503) != 1 && !iLocal_189)
						{
							unk_0x2F89329397A277BC(&iVar6);
							unk_0x956B3CF461C0C1C9(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 1048576000, 0, 1193033728);
							unk_0x0177431263151C4E(0, unk_0xA19140A5C42D8715(), 0);
							unk_0x301F42EEE3C40328(iVar6);
							unk_0xE1072FA2FECBAD96(iLocal_67, iVar6);
							unk_0x3A3E4B7C6FBE305D(iLocal_67, 0, 0);
							unk_0x3A95A0A3221D4208(&iVar6);
							iLocal_189 = 1;
						}
						else
						{
							unk_0x639C59ACAF6EEC64(iLocal_67, 1f);
							func_176(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_176(vLocal_68, 1);
					}
					if (!bLocal_129)
					{
						if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 0))
						{
							if (unk_0xCE3CB618AFE55EFB(iLocal_122))
							{
								unk_0xE1623437A3194332(&iLocal_122);
							}
							if (!unk_0xCE3CB618AFE55EFB(iLocal_121))
							{
								iLocal_121 = func_180(iLocal_67, 0, 145);
							}
						}
					}
					if ((unk_0x10E54C268D1B3FED(iLocal_70, iLocal_67, Global_19, 0, 1, 0) && func_170(iLocal_70)) && (timera() > 6000 || !bLocal_129))
					{
						if (!iLocal_172)
						{
							func_102();
							if (unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_5(&Local_139, cLocal_133, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_172 = 1;
							}
						}
						else
						{
							if (!bLocal_129)
							{
								iLocal_130 = -5;
							}
							else
							{
								iLocal_130++;
							}
							unk_0x9568B1B58F78FF36(iLocal_67);
							unk_0xA2EBCD9385E56019(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_129)
				{
					func_176(vLocal_68, 1);
				}
				else
				{
					func_176(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0x1095F403F52B42E1(iLocal_70, 0))
				{
					if (func_152(iLocal_70, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_130 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0x1095F403F52B42E1(iLocal_70, 0))
				{
					if (!unk_0x4915F4759304D5CF(iLocal_67) && unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 0))
					{
						if (unk_0xCE3CB618AFE55EFB(iLocal_121))
						{
							unk_0xE1623437A3194332(&iLocal_121);
						}
						unk_0x53FF9BDD8529ACD2(unk_0xA19140A5C42D8715());
						func_178(1);
					}
					else
					{
						if (!Global_3 && !bLocal_56)
						{
							if ((unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 0) && !unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 1)) && !unk_0x54F6F5A823224519(iLocal_70, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, true, 0))
							{
								if (bLocal_129)
								{
									unk_0xC2C4AE9DB4A0BEF3(iLocal_67, 2, true);
									sLocal_132 = "REPAP_GUP";
									func_178(6);
								}
								else
								{
									unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 1, 0);
									unk_0xC2C4AE9DB4A0BEF3(iLocal_67, 2, true);
									sLocal_132 = "REPAP_CP";
									func_178(6);
								}
							}
						}
						if (!unk_0xE0FD180CD24C0B67(iLocal_67, iLocal_70, 0))
						{
							if (unk_0xF9D4EF1338E38AFB(iLocal_67, -1794415470) != 1)
							{
								unk_0x9568B1B58F78FF36(iLocal_67);
								unk_0xA2EBCD9385E56019(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 1f, 8388608, 0);
							}
							else if (vdist(vLocal_53, unk_0x3201284584C7CD83(iLocal_70, 1f, 0f, 0f)) < 1f)
							{
								unk_0x639C59ACAF6EEC64(iLocal_67, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0x1095F403F52B42E1(iLocal_70, 0))
				{
					if (!func_73())
					{
						func_102();
						if (func_19() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_19() == 0)
						{
							func_102();
							if (func_5(&Local_139, cLocal_133, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
							iLocal_60 = 0;
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
				if (iLocal_130 == 101)
				{
					fLocal_195 = 0f;
				}
				func_176(vLocal_68, 1);
				break;
			
			case 101:
				if (vdist2(vLocal_52, vLocal_53) < 49f && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					if (unk_0xEAA5CEF8875FEEED(unk_0xA19140A5C42D8715()) < 3f)
					{
						fLocal_195 = (fLocal_195 + unk_0xDE089748C4C76C96());
					}
					else
					{
						fLocal_195 = (fLocal_195 - (unk_0xDE089748C4C76C96() * 2f));
					}
					if (fLocal_195 > 10f)
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_195 = 0f;
						}
					}
				}
				if (unk_0x1095F403F52B42E1(iLocal_70, 0))
				{
					if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 0) && func_177())
					{
						bLocal_129 = true;
						iLocal_60 = 1;
						iLocal_70 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
						unk_0x1F7948851FB36E88(iLocal_70, true, 1);
					}
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iLocal_70, 0))
					{
						if (unk_0xCE3CB618AFE55EFB(iLocal_122))
						{
							unk_0xE1623437A3194332(&iLocal_122);
						}
						if (!unk_0xCE3CB618AFE55EFB(iLocal_121))
						{
							iLocal_121 = func_180(iLocal_67, 0, 145);
						}
					}
					else
					{
						if (unk_0xCE3CB618AFE55EFB(iLocal_121))
						{
							unk_0xE1623437A3194332(&iLocal_121);
						}
						if (!unk_0xCE3CB618AFE55EFB(iLocal_122))
						{
							iLocal_122 = func_166(iLocal_70, 0, 0);
						}
					}
					if (unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), iLocal_70))
					{
						if (unk_0xCE3CB618AFE55EFB(iLocal_122))
						{
							unk_0xE1623437A3194332(&iLocal_122);
						}
						if (!unk_0xCE3CB618AFE55EFB(iLocal_121))
						{
							iLocal_121 = func_180(iLocal_67, 0, 145);
						}
						func_179("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_130 = 4;
					}
					if (!iLocal_60)
					{
						if (vdist2(vLocal_52, vLocal_54) < 9f && func_19() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_60 = 1;
							}
						}
					}
				}
				func_176(vLocal_68, 1);
				break;
		}
		if (!Global_3 && !bLocal_56)
		{
			if (unk_0x1095F403F52B42E1(iLocal_70, 0))
			{
				if (vdist(vLocal_52, vLocal_68) > 75f)
				{
					func_178(6);
				}
				if (func_191())
				{
					func_178(5);
				}
			}
		}
		if (!bLocal_129)
		{
			if (!unk_0x1095F403F52B42E1(iLocal_70, 0))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_178(5);
				}
			}
			else
			{
				if (!bLocal_129)
				{
					if (!Global_3 && !bLocal_56)
					{
						if (unk_0x24A1A7BF4ED94B71(iLocal_70) < iLocal_64)
						{
							if (unk_0xDEAEC99031DCB92A(iLocal_70, unk_0xA19140A5C42D8715(), 1))
							{
								iLocal_65 = (iLocal_65 + (iLocal_64 - unk_0x24A1A7BF4ED94B71(iLocal_70)));
							}
							unk_0xDCB46BFC2265476A(iLocal_70);
						}
						if (iLocal_65 > 250)
						{
							if (unk_0x581D3C560D601491(iLocal_67, iLocal_70) && vdist(vLocal_53, vLocal_54) < 25f)
							{
								func_178(5);
							}
						}
					}
				}
				iLocal_64 = unk_0x24A1A7BF4ED94B71(iLocal_70);
			}
		}
		if (!unk_0x4915F4759304D5CF(iLocal_67))
		{
			if (unk_0x8B9D3A1A7C2D3C6B(iLocal_67))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_178(5);
				}
			}
		}
	}
}

void func_176(vector3 vParam0, bool bParam1)
{
	if (vdist(vLocal_53, vParam0) > 2.5f)
	{
		if (unk_0xF9D4EF1338E38AFB(iLocal_67, 713668775) != 1)
		{
			unk_0x956B3CF461C0C1C9(iLocal_67, vParam0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0xF9D4EF1338E38AFB(iLocal_67, 713668775) != 1)
	{
		func_136(bParam1);
		unk_0x22DD1D053CFF9707(iLocal_67, unk_0xA19140A5C42D8715(), -1, 16, 2);
	}
}

bool func_177()
{
	return (((((unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0) && unk_0x1095F403F52B42E1(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), 0)) && (unk_0x425CD7B17352316F(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0))) || unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0))))) && unk_0xD63FAD81FAF5E0CB(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)) > 0) && func_170(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0))) && !Global_105117);
}

void func_178(int iParam0)
{
	iLocal_45 = iParam0;
	iLocal_130 = 0;
}

void func_179(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (!unk_0x3CAC2741CC1A631F(iLocal_144[iVar0], sParam0))
		{
			if (unk_0x2F8EAF18929E1E59(iLocal_144[iVar0]))
			{
				unk_0x5AD7D03C214BDA88(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (unk_0x3CAC2741CC1A631F(iLocal_144[iVar0], sParam0))
		{
			if (!unk_0x2F8EAF18929E1E59(iLocal_144[iVar0]))
			{
				unk_0x8969D02DEDC106D2(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_180(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_167(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE3CB618AFE55EFB(iVar0)) && unk_0x445EC9E7EACB710E(&(Global_106070.f_28022[iParam2 /*29*/].f_3)))
	{
		unk_0xC4F12E446CCE89F5(iVar0, &(Global_106070.f_28022[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_181(int iParam0)
{
	if (func_184())
	{
		Global_106060 = 1;
		Global_106057 = unk_0xFD34717937104F1C();
		if (func_88(Global_106059))
		{
			func_182(0);
		}
		unk_0x9E212A43A08FF3F9(1, "RE_TITLE");
		if (iParam0 && func_88(Global_106059))
		{
			unk_0xE134853379787E6A();
		}
		return 1;
	}
	return 0;
}

void func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106070.f_24967.f_2 < 3)
			{
				if (!unk_0x90A6E668DB47D464())
				{
					func_163(func_183(iParam0), -1);
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
					func_163(func_183(iParam0), -1);
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
					func_163(func_183(iParam0), -1);
					Global_106070.f_24967.f_4++;
					unk_0x2BCFB39E86340DAA(&Global_106066, 2);
				}
			}
			break;
	}
}

char* func_183(int iParam0)
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

int func_184()
{
	switch (func_185(&Global_25518, 0, 5, 0, unk_0xFCB3E4B16B4A9EC1()))
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

int func_185(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_189(0))
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
		if (!func_187(iParam2))
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
			func_186(uParam0, iParam4);
		}
	}
	return 2;
}

void func_186(var uParam0, int iParam1)
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

bool func_187(int iParam0)
{
	return func_188(iParam0, Global_36117);
}

int func_188(int iParam0, int iParam1)
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

int func_189(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_187(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_190()
{
	int iVar0;
	
	if (!unk_0x4915F4759304D5CF(iLocal_67))
	{
		unk_0xC2C4AE9DB4A0BEF3(iLocal_67, 2, false);
		unk_0x33B5487515BD13D5(iLocal_67, unk_0xA19140A5C42D8715(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (!unk_0x4915F4759304D5CF(Local_109[iVar0 /*18*/]))
		{
			unk_0x33B5487515BD13D5(Local_109[iVar0 /*18*/], unk_0xA19140A5C42D8715(), 300f, -1, 0, 0);
			unk_0xDFA901280292A2FB(Local_109[iVar0 /*18*/], -2065892691);
			unk_0x1F4E5EFBFE503FB3(Local_109[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

int func_191()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_109)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_109[iVar1 /*18*/]) && !unk_0x4915F4759304D5CF(Local_109[iVar1 /*18*/]))
		{
			if (unk_0x7E65E323A95E4187(Local_109[iVar1 /*18*/]))
			{
				if (((unk_0x9809FE4B550B1EFE(Local_109[iVar1 /*18*/].f_6, 5f, 1) || unk_0x6D7FFF527E125F24(-1, Local_109[iVar1 /*18*/].f_6, 10f)) || unk_0x8B9D3A1A7C2D3C6B(Local_109[iVar1 /*18*/])) || (iLocal_138[iVar1] > 10 && iLocal_45 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_110 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_108)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_108[iVar1 /*18*/]))
		{
			if (unk_0x1095F403F52B42E1(Local_108[iVar1 /*18*/], 0) && unk_0x7E65E323A95E4187(Local_108[iVar1 /*18*/]))
			{
				if (unk_0x463E3A48A46C9195(Local_108[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_192()
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_203())
		{
			return 0;
		}
	}
	if (func_199())
	{
		return 1;
	}
	if (func_193(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_193(float fParam0, bool bParam1)
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
		if (func_21(func_19()))
		{
			iVar5 = func_93();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar1 /*6*/], 2) && !unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar1 /*6*/], 3))
				{
					func_194(iVar1, &Var0);
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

void func_194(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_195(uParam1, "Abigail1", func_197(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 1:
			func_195(uParam1, "Abigail2", func_197(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 2:
			func_195(uParam1, "Barry1", func_197(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 3:
			func_195(uParam1, "Barry2", func_197(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 4:
			func_195(uParam1, "Barry3", func_197(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 5:
			func_195(uParam1, "Barry3A", func_197(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 6:
			func_195(uParam1, "Barry3C", func_197(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 7:
			func_195(uParam1, "Barry4", func_197(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_196(iParam0), 0, 0);
			break;
		
		case 8:
			func_195(uParam1, "Dreyfuss1", func_197(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 9:
			func_195(uParam1, "Epsilon1", func_197(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 10:
			func_195(uParam1, "Epsilon2", func_197(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 11:
			func_195(uParam1, "Epsilon3", func_197(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 12:
			func_195(uParam1, "Epsilon4", func_197(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 13:
			func_195(uParam1, "Epsilon5", func_197(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 14:
			func_195(uParam1, "Epsilon6", func_197(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 15:
			func_195(uParam1, "Epsilon7", func_197(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 16:
			func_195(uParam1, "Epsilon8", func_197(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 17:
			func_195(uParam1, "Extreme1", func_197(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 18:
			func_195(uParam1, "Extreme2", func_197(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 19:
			func_195(uParam1, "Extreme3", func_197(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 20:
			func_195(uParam1, "Extreme4", func_197(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 21:
			func_195(uParam1, "Fanatic1", func_197(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_196(iParam0), 1, 0);
			break;
		
		case 22:
			func_195(uParam1, "Fanatic2", func_197(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_196(iParam0), 1, 0);
			break;
		
		case 23:
			func_195(uParam1, "Fanatic3", func_197(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_196(iParam0), 0, 1);
			break;
		
		case 24:
			func_195(uParam1, "Hao1", func_197(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_196(iParam0), 0, 1);
			break;
		
		case 25:
			func_195(uParam1, "Hunting1", func_197(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 26:
			func_195(uParam1, "Hunting2", func_197(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 27:
			func_195(uParam1, "Josh1", func_197(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 28:
			func_195(uParam1, "Josh2", func_197(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 29:
			func_195(uParam1, "Josh3", func_197(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 30:
			func_195(uParam1, "Josh4", func_197(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 31:
			func_195(uParam1, "Maude1", func_197(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 32:
			func_195(uParam1, "Minute1", func_197(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 33:
			func_195(uParam1, "Minute2", func_197(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 34:
			func_195(uParam1, "Minute3", func_197(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 35:
			func_195(uParam1, "MrsPhilips1", func_197(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 36:
			func_195(uParam1, "MrsPhilips2", func_197(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 37:
			func_195(uParam1, "Nigel1", func_197(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 38:
			func_195(uParam1, "Nigel1A", func_197(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 39:
			func_195(uParam1, "Nigel1B", func_197(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 40:
			func_195(uParam1, "Nigel1C", func_197(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 41:
			func_195(uParam1, "Nigel1D", func_197(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 42:
			func_195(uParam1, "Nigel2", func_197(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 43:
			func_195(uParam1, "Nigel3", func_197(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 44:
			func_195(uParam1, "Omega1", func_197(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 45:
			func_195(uParam1, "Omega2", func_197(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 46:
			func_195(uParam1, "Paparazzo1", func_197(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 47:
			func_195(uParam1, "Paparazzo2", func_197(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 48:
			func_195(uParam1, "Paparazzo3", func_197(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 49:
			func_195(uParam1, "Paparazzo3A", func_197(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 50:
			func_195(uParam1, "Paparazzo3B", func_197(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 51:
			func_195(uParam1, "Paparazzo4", func_197(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 52:
			func_195(uParam1, "Rampage1", func_197(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 54:
			func_195(uParam1, "Rampage3", func_197(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 55:
			func_195(uParam1, "Rampage4", func_197(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 56:
			func_195(uParam1, "Rampage5", func_197(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 53:
			func_195(uParam1, "Rampage2", func_197(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 57:
			func_195(uParam1, "TheLastOne", func_197(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 58:
			func_195(uParam1, "Tonya1", func_197(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 59:
			func_195(uParam1, "Tonya2", func_197(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 60:
			func_195(uParam1, "Tonya3", func_197(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 61:
			func_195(uParam1, "Tonya4", func_197(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 62:
			func_195(uParam1, "Tonya5", func_197(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_195(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_196(int iParam0)
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

struct<2> func_197(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_198(iParam0) };
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

struct<2> func_198(int iParam0)
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

int func_199()
{
	if (func_202() && !func_203())
	{
		return 1;
	}
	if (func_201() && func_200())
	{
		return 1;
	}
	return 0;
}

bool func_200()
{
	return Global_105788 > 0;
}

int func_201()
{
	if (Global_90249 != -1)
	{
		return 1;
	}
	return 0;
}

int func_202()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

int func_203()
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

void func_204()
{
	func_206(39, 1);
	func_206(40, 1);
	func_206(41, 1);
	func_206(42, 1);
	func_206(43, 1);
	func_206(44, 1);
	iLocal_120 = func_205(vLocal_68);
	iLocal_67 = unk_0x35C6E06B120EB2E3(26, joaat("a_f_y_bevhills_03"), vLocal_68, fLocal_69, 1, true);
	unk_0x3B7A32E04BBE59A5(iLocal_67, 1, true);
	unk_0x3B7A32E04BBE59A5(iLocal_67, 17, true);
	unk_0xC2C4AE9DB4A0BEF3(iLocal_67, 128, true);
	unk_0xD738221C247C8B71(iLocal_67, true);
	unk_0xC35C0EB12F3FFC86(iLocal_67, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_67, 0, 0, 1, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_67, 2, 0, 0, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_67, 3, 0, 0, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_67, 4, 0, 0, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_67, 7, 1, 0, 0);
	unk_0x72A0FF8C49CFFC0D(iLocal_67, 8, 0, 0, 0);
	unk_0xD5236C38FDF763FC(iLocal_67, 1);
	unk_0x1F4E5EFBFE503FB3(iLocal_67, true);
	unk_0x96BFF0680C7B6FD5(iLocal_67, false);
	unk_0x4FE3554969185993(iLocal_67, "LACEY");
	if (Global_3 || bLocal_56)
	{
		unk_0x33CF95E95A476FB9(iLocal_67, true);
	}
	if (unk_0x94E87D83163B4BEB("CELEBRITY", &iLocal_55))
	{
		unk_0xDFA901280292A2FB(iLocal_67, iLocal_55);
	}
	iLocal_70 = unk_0x48CFBECB146FD1A1(joaat("surano"), vLocal_71, fLocal_72, true, true, false);
	unk_0xE8B3104D1CB25CDC(iLocal_70, vLocal_71, 0, 0, 1);
	unk_0x693A63A8D6B78EA4(iLocal_70, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x9F3F43B8D4BC7F09(iLocal_70, false, 0);
	unk_0xEA847E35BAC71F2A(iLocal_70, 10);
	unk_0x99F546A9200EA026(iLocal_70, 1084227584);
	unk_0x14293208022014FA(iLocal_70, 3);
	unk_0x1D63F9FDAAC001A5(iLocal_70, 1);
	unk_0xF0EA91023169ED28(iLocal_70, 1);
	unk_0x11D8017AF1DF991E(iLocal_70, unk_0x13B011674250FA98(1));
	if (func_19() == 1)
	{
		func_17(&Local_139, 1, unk_0xA19140A5C42D8715(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_139, 1, unk_0xA19140A5C42D8715(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_139, 1, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
	}
	func_17(&Local_139, 3, iLocal_67, "LACEY", 0, 1);
	iLocal_136[0] = "idle_a";
	iLocal_136[1] = "idle_b";
	iLocal_136[2] = "idle_c";
	iLocal_136[3] = "idle_d";
	iLocal_136[4] = "idle_e";
	iLocal_136[5] = "idle_f";
	iLocal_136[6] = "idle_g";
	iLocal_136[7] = "idle_h";
	iLocal_136[8] = "idle_i";
	iLocal_144[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_144[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_144[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0xFC00A668AFC2126D(joaat("vader"), true);
	unk_0xFC00A668AFC2126D(joaat("surano"), true);
	unk_0xFC00A668AFC2126D(joaat("cavalcade2"), true);
}

int func_205(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA70969818F182A36(vParam0);
	unk_0xE8C2974337833D20(iVar0, 0);
	unk_0x3070F458AEF47C98(iVar0, 0);
	return iVar0;
}

void func_206(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_213(iParam0, 2, 1))
		{
			func_212(iParam0, 2, 1);
		}
	}
	else if (func_213(iParam0, 2, 1))
	{
		func_207(iParam0, 2, 1);
	}
}

void func_207(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			iVar0 = func_210(func_211(iParam0), -1, 0);
			unk_0xFA57C719261AA55D(&iVar0, iParam1);
			func_208(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_209(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_209(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_86();
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

int func_210(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_209(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_211(int iParam0)
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

void func_212(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			iVar0 = func_210(func_211(iParam0), -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
			func_208(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_213(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_210(func_211(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_214()
{
	if (!iLocal_73)
	{
		func_222(&uLocal_74, joaat("surano"));
		func_222(&uLocal_74, joaat("prop_ld_test_01"));
		func_222(&uLocal_74, joaat("a_f_y_bevhills_03"));
		func_222(&uLocal_74, joaat("a_m_y_genstreet_02"));
		func_222(&uLocal_74, joaat("vader"));
		func_222(&uLocal_74, joaat("cavalcade2"));
		func_222(&uLocal_74, joaat("prop_pap_camera_01"));
		func_219(&uLocal_74);
		iLocal_73 = 1;
	}
	if (!func_215(&uLocal_74))
	{
		return 0;
	}
	unk_0x6D68030C791111E0("random@escape_paparazzi@standing@");
	unk_0x6D68030C791111E0("random@paparazzi@pap_anims");
	unk_0x6D68030C791111E0("random@paparazzi@peek");
	unk_0x6D68030C791111E0("random@paparazzi@trans");
	unk_0x6D68030C791111E0("random@paparazzi@wait");
	unk_0x6D68030C791111E0("veh@std@ps@idle_panic");
	unk_0x6D68030C791111E0("veh@low@front_ps@idle_panic");
	unk_0x6D68030C791111E0(sLocal_135);
	unk_0x6A633E13B2A856AE("ESCPAP", 0);
	if (((((((((unk_0x39C2D9AB77873F84("random@escape_paparazzi@standing@") && unk_0x39C2D9AB77873F84("random@paparazzi@pap_anims")) && unk_0x39C2D9AB77873F84("random@paparazzi@peek")) && unk_0x39C2D9AB77873F84("random@paparazzi@trans")) && unk_0x39C2D9AB77873F84("random@paparazzi@wait")) && unk_0x39C2D9AB77873F84("veh@std@ps@idle_panic")) && unk_0x39C2D9AB77873F84("veh@low@front_ps@idle_panic")) && unk_0x39C2D9AB77873F84(sLocal_135)) && unk_0xD744813D9841CA9A(0)) && unk_0x61346376C1469A0E("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_216(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_216(var uParam0)
{
	return func_217(*uParam0, "NULL", uParam0->f_1);
}

int func_217(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(iParam0, 30))
	{
		if (unk_0x05EFB6A616B6FADE(iParam0, 29))
		{
			switch (func_218(iParam0))
			{
				case 0:
					return unk_0x7FC99CCC73354033(iParam2);
					break;
				
				case 1:
					return unk_0x39C2D9AB77873F84(sParam1);
					break;
				
				case 2:
					return unk_0xD7AFBCBD45CE1D9D(sParam1);
					break;
				
				case 3:
					return unk_0x87DF091EDFE6D083(sParam1);
					break;
				
				case 4:
					return unk_0x6F4A062113883115(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xF8882C5CDED0257A(sParam1);
					break;
				
				case 6:
					return unk_0x61346376C1469A0E(sParam1, unk_0x05EFB6A616B6FADE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x2106996673968125(iParam2);
					break;
				
				case 8:
					return unk_0xD744813D9841CA9A(iParam2);
					break;
				
				case 9:
					return unk_0x5488D97A1366CE04();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x05EFB6A616B6FADE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_219(var uParam0)
{
	func_220(uParam0, 9, -1, 0);
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_221(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x2BCFB39E86340DAA(uParam0[iVar0 /*2*/], iParam1);
			unk_0x2BCFB39E86340DAA(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_222(var uParam0, int iParam1)
{
	func_220(uParam0, 0, iParam1, 0);
}

int func_223()
{
	if (!func_187(5))
	{
		return 1;
	}
	if (func_199())
	{
		return 1;
	}
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_203())
		{
			return 0;
		}
	}
	if (func_193(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	if ((Global_106059 == func_97() && unk_0x62558A57CB60EE71()) && Global_106060)
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x817B152F7462D506() >= (uParam0->f_32 + uParam0->f_33) || unk_0x05EFB6A616B6FADE(Global_93232.f_20, 2)) || unk_0x05EFB6A616B6FADE(Global_93232.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 29))
					{
						func_226(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x817B152F7462D506();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_226(int iParam0)
{
	func_227(iParam0, "NULL", iParam0->f_1);
}

void func_227(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(*iParam0, 30))
	{
		switch (func_218(*iParam0))
		{
			case 0:
				unk_0xCACEBBBEAD8F262E(iParam2);
				break;
			
			case 1:
				unk_0x6D68030C791111E0(sParam1);
				break;
			
			case 2:
				unk_0x4069FC25AC4F1CFB(sParam1);
				break;
			
			case 3:
				unk_0x8000C77B5F336760(sParam1, unk_0x05EFB6A616B6FADE(*iParam0, 28));
				break;
			
			case 4:
				unk_0x5C2A13372076C38C(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x247955A7AC51D6E6(sParam1);
				break;
			
			case 6:
				unk_0x61346376C1469A0E(sParam1, unk_0x05EFB6A616B6FADE(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x90488A740F13CBEC(iParam2);
				break;
			
			case 8:
				unk_0x6A633E13B2A856AE(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x788BCD68EF8935BE();
				break;
			
			default:
				break;
		}
		unk_0x2BCFB39E86340DAA(iParam0, 29);
	}
}

void func_228(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_230(iParam0);
	unk_0x7B9D98D1F4280B24(0);
	unk_0x509F44AFDE7B1FCA(1);
	Global_106056 = 0;
	func_229();
}

void func_229()
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

void func_230(int iParam0)
{
	Global_106059 = iParam0;
}

int func_231(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_97();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_272())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
			if (vmag2(unk_0x57323E573695B13F(unk_0xA19140A5C42D8715())) > 1369f && !func_203())
			{
				return 0;
			}
		}
		if (!Global_106070.f_9057)
		{
			return 0;
		}
		if (func_78(0))
		{
			return 0;
		}
		if (func_199())
		{
			return 0;
		}
		if (func_271())
		{
			return 0;
		}
		if (Global_106059 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_193(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_270(iParam1))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_269(func_19()) == 4 || func_269(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_268(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_267(Global_106070.f_24967.f_43[iParam1]))
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
		if (func_266())
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
		if (!func_257(4))
		{
			return 0;
		}
		if (!func_187(5))
		{
			return 0;
		}
		if (func_256(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_256(0, 0))
		{
			return 0;
		}
		if (Global_25605)
		{
			return 0;
		}
		if (func_270(30) && !func_256(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106070.f_2355.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_106070.f_2355.f_539.f_2276[iVar2];
				if (func_255(iVar4))
				{
					if (func_233(iVar2))
					{
						if (!func_232(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), vVar3) < (210f * 210f))
							{
								if (func_19() != iVar2)
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

bool func_232(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106070.f_2355.f_539.f_2276[iParam0];
	return func_234(iVar0);
}

int func_234(int iParam0)
{
	return func_235(iParam0, 1);
}

int func_235(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_255(iParam0))
	{
		return 0;
	}
	func_236(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_237(func_248(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_237(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_247(iParam0, iParam1))
	{
		iVar0 = func_246(iParam1);
		iVar1 = func_244(iParam0);
		iVar2 = (func_244(iParam0) - func_244(iParam1));
		iVar3 = (func_246(iParam0) - func_246(iParam1));
		iVar4 = (func_243(iParam0) - func_243(iParam1));
		iVar5 = (func_242(iParam0) - func_242(iParam1));
		iVar6 = (func_241(iParam0) - func_241(iParam1));
		iVar7 = (func_240(iParam0) - func_240(iParam1));
	}
	else
	{
		iVar0 = func_246(iParam0);
		iVar1 = func_244(iParam1);
		iVar2 = (func_244(iParam1) - func_244(iParam0));
		iVar3 = (func_246(iParam1) - func_246(iParam0));
		iVar4 = (func_243(iParam1) - func_243(iParam0));
		iVar5 = (func_242(iParam1) - func_242(iParam0));
		iVar6 = (func_241(iParam1) - func_241(iParam0));
		iVar7 = (func_240(iParam1) - func_240(iParam0));
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
		iVar4 = (iVar4 + func_239(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_238(to_float(iVar0 + 1), 0f, 12f));
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

float func_238(float fParam0, float fParam1, float fParam2)
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

int func_239(int iParam0, int iParam1)
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

int func_240(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_241(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_242(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_243(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_244(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_245(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_245(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_246(int iParam0)
{
	return iParam0 & 15;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_255(iParam1) || !func_255(iParam0))
	{
		return 1;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_248()
{
	var uVar0;
	
	func_254(&uVar0, unk_0xC5B07C33AC7BB174());
	func_253(&uVar0, unk_0x65DA628D62901275());
	func_252(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_251(&uVar0, unk_0xC9A0B68BA813CF99());
	func_250(&uVar0, unk_0x897D202BD69186D5());
	func_249(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_249(var uParam0, int iParam1)
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

void func_250(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_251(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_246(*uParam0);
	iVar1 = func_244(*uParam0);
	if (iParam1 < 1 || iParam1 > func_239(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_252(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_253(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_255(int iParam0)
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
	iVar0 = func_240(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_241(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_242(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_244(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_246(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_243(iParam0);
	if (iVar5 < 1 || iVar5 > func_239(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0, int iParam1)
{
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_24967.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	int iVar0;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_265()) || Global_105117) || Global_25461) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_261()) || func_260()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1) || func_265()) || Global_25461) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_265()) || Global_105117) || Global_25461) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0)) || func_265()) || Global_105117) || Global_25461) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_260()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_265() || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || func_14(8, -1)) || func_260()) || func_259()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_263()) || func_262()) || func_259()) || func_258())
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
							if ((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC()) > 0) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_265()) || Global_25461) || func_264()) || func_14(8, -1)) || func_262()) || func_261()) || func_260()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || func_265()) || func_262()) || Global_105117) || Global_25461) || func_264()) || Global_37271) || func_14(8, -1)) || func_261()) || func_259()) || func_260()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x967743032563101F(unk_0xA19140A5C42D8715(), 0) || !unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC())) || !unk_0x3123C1A565BB7D3B(unk_0xD4E735F4B6A956AC())) || !unk_0x3A83743561B4F70C()) || unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0)) || unk_0x26D28D230F871E8D(unk_0xA19140A5C42D8715())) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1)) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) || unk_0x68477FE20127AEDA(unk_0xA19140A5C42D8715())) || unk_0x443A3698D0CD9D06(unk_0xA19140A5C42D8715())) || unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1)) || unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC())) || func_265()) || Global_105117) || Global_25461) || func_264()) || func_14(8, -1)) || func_261()) || func_259()) || func_263()) || func_262()) || func_260())
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

var func_258()
{
	return Global_93271.f_1;
}

int func_259()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_260()
{
	if (unk_0x8B1574454E8C2421(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_261()
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

bool func_262()
{
	return Global_93284.f_328 > 0;
}

bool func_263()
{
	return Global_93284.f_327 > 0;
}

var func_264()
{
	return Global_1312857;
}

int func_265()
{
	if (!unk_0x4C9BACA8D249CB13())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

int func_266()
{
	func_11();
	if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_267(int iParam0)
{
	return func_247(func_248(), iParam0);
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
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

int func_269(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_106070.f_7660.f_919[iParam0];
}

bool func_270(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_272())
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

int func_271()
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

int func_272()
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

void func_273(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_274()
{
	func_292(0);
	unk_0x387E83E60256EA18(-90f, -1488f, -50f, 55f, -1470f, 50f, true);
	unk_0x66E6A13BAFFFB63C("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_287(&uLocal_74, 0);
	unk_0x4DC885EA8D6AF7FC("random@escape_paparazzi@standing@");
	unk_0x4DC885EA8D6AF7FC("random@paparazzi@pap_anims");
	unk_0x4DC885EA8D6AF7FC("random@paparazzi@peek");
	unk_0x4DC885EA8D6AF7FC("random@paparazzi@trans");
	unk_0x4DC885EA8D6AF7FC("random@paparazzi@wait");
	unk_0x4DC885EA8D6AF7FC("veh@std@ps@idle_panic");
	unk_0x4DC885EA8D6AF7FC("veh@low@front_ps@idle_panic");
	unk_0x4DC885EA8D6AF7FC(sLocal_135);
	unk_0x2220B21A4CC075AC();
	if (func_224())
	{
		unk_0xBF6EED5D6E0CD9BF(1f);
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_67) && !unk_0x4915F4759304D5CF(iLocal_67))
	{
		if (unk_0x749F5228DEB730FF(iLocal_67))
		{
			unk_0xF8136E11BE4BEAC3(iLocal_67);
		}
		if (unk_0x5D7DFE2058701942(iLocal_67, 1))
		{
			if (!unk_0x8B9D3A1A7C2D3C6B(iLocal_67))
			{
				unk_0xCB482EF95FAE4D73(iLocal_67, 0, 0);
			}
		}
	}
	func_276(-1);
	unk_0xA441772BB768015E();
	unk_0x8CA4F710C547BB27(0);
	unk_0xFC00A668AFC2126D(joaat("vader"), false);
	unk_0xFC00A668AFC2126D(joaat("surano"), false);
	unk_0xFC00A668AFC2126D(joaat("cavalcade2"), false);
	unk_0xE70AC26DFC59863A(iLocal_126, 0);
	unk_0xE70AC26DFC59863A(iLocal_127, 0);
	unk_0xE70AC26DFC59863A(iLocal_128, 0);
	unk_0x413F34FCFABEDE4B(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), true, 1);
	if (Global_25698)
	{
		unk_0x9444470D6D9ADB88("AC_STOP");
	}
	func_275();
	unk_0x8F1A9FE6D91AAFEB();
}

void func_275()
{
	Global_25694 = 0;
	Global_25695 = 0;
	Global_25697 = 0;
	Global_25698 = 0;
	Global_25699 = 0;
}

void func_276(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_280(iParam0);
		unk_0x9E212A43A08FF3F9(0, 0);
		Global_106061 = unk_0xFD34717937104F1C();
		func_279(30000);
		StringCopy(&cVar0, func_278(Global_106059, 1), 64);
		if (func_96(Global_106059) > 0)
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
	func_277(&Global_25518);
	Global_106060 = 0;
	func_230(-1);
}

void func_277(var uParam0)
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

char* func_278(int iParam0, bool bParam1)
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

void func_279(int iParam0)
{
	Global_36668 = (unk_0xFD34717937104F1C() + iParam0);
}

void func_280(int iParam0)
{
	func_281(iParam0, 0, func_286(iParam0));
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_248();
	func_284(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_283(iParam0, &uVar0);
	Var1 = { func_282(&uVar0) };
}

struct<16> func_282(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_242(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_241(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_240(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_244(*uParam0), 64);
	return Var0;
}

void func_283(int iParam0, var uParam1)
{
	Global_106070.f_24967.f_43[iParam0] = *uParam1;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_244(*uParam0);
	iVar1 = func_246(*uParam0);
	iVar2 = func_243(*uParam0);
	iVar3 = func_242(*uParam0);
	iVar4 = func_241(*uParam0);
	iVar5 = func_240(*uParam0);
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
	iVar6 = func_239(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_239(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_285(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_254(uParam0, iParam1);
	func_253(uParam0, iParam2);
	func_252(uParam0, iParam3);
	func_250(uParam0, iParam5);
	func_251(uParam0, iParam4);
	func_249(uParam0, iParam6);
}

int func_286(int iParam0)
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

void func_287(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_289(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_288(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_288(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_289(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x05EFB6A616B6FADE((*uParam0)[iVar0 /*2*/], 30))
		{
			func_290(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_290(var uParam0)
{
	func_291(*uParam0, "NULL", uParam0->f_1);
}

void func_291(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x05EFB6A616B6FADE(iParam0, 30))
	{
		switch (func_218(iParam0))
		{
			case 0:
				unk_0xA5DE74AE39867B03(iParam2);
				break;
			
			case 1:
				unk_0x4DC885EA8D6AF7FC(sParam1);
				break;
			
			case 2:
				unk_0x5F781B32FAE8FB91(sParam1);
				break;
			
			case 3:
				unk_0x91DE928AD81C6F57(sParam1);
				break;
			
			case 4:
				unk_0xD2BB05DE6C584878(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xDC253F6738C56280(sParam1);
				break;
			
			case 6:
				unk_0x2220B21A4CC075AC();
				break;
			
			case 7:
				unk_0x932A1FC570019F52(iParam2);
				break;
			
			case 8:
				unk_0x93DA13E8C75A3B00(iParam2, unk_0x05EFB6A616B6FADE(iParam0, 26));
				break;
			
			case 9:
				unk_0xCF2B4C5AF45D129E();
				break;
			
			default:
				break;
		}
	}
}

void func_292(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_206(iVar0, bParam0);
		iVar0++;
	}
}

