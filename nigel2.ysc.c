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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 10;
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
	int iLocal_92 = 0;
	int iLocal_93 = 0;
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
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	bool bLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	bool bLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	bool bLocal_136 = 0;
	bool bLocal_137 = 0;
	bool bLocal_138 = 0;
	int iLocal_139 = 0;
	bool bLocal_140 = 0;
	int iLocal_141 = 0;
	bool bLocal_142 = 0;
	bool bLocal_143 = 0;
	bool bLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	bool bLocal_149 = 0;
	bool bLocal_150 = 0;
	bool bLocal_151 = 0;
	float fLocal_152[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_153[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_154[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_155[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_156[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_162[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_163[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_164[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_165[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_166[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_167[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_168[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_169[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_170[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_171 = 0f;
	float fLocal_172 = 0f;
	float fLocal_173 = 0f;
	float fLocal_174 = 0f;
	float fLocal_175 = 0f;
	float fLocal_176 = 0f;
	float fLocal_177 = 0f;
	float fLocal_178 = 0f;
	float fLocal_179 = 0f;
	float fLocal_180 = 0f;
	float fLocal_181 = 0f;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	float fLocal_186 = 0f;
	float fLocal_187 = 0f;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	float fLocal_191 = 0f;
	int iLocal_192[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_193[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_194[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_195[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	vector3 vLocal_216[85] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_217[70] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_218[70] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_219 = { 0f, 0f, 0f };
	vector3 vLocal_220 = { 0f, 0f, 0f };
	vector3 vLocal_221 = { 0f, 0f, 0f };
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	vector3 vLocal_228 = { 0f, 0f, 0f };
	vector3 vLocal_229 = { 0f, 0f, 0f };
	vector3 vLocal_230 = { 0f, 0f, 0f };
	vector3 vLocal_231 = { 0f, 0f, 0f };
	char cLocal_232[64] = "";
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_243[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_244[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_249[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_250[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_251[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_252[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 15;
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
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	struct<61> Local_275 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279[3] = { 0, 0, 0 };
	int iLocal_280 = 0;
	int iLocal_281[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282 = 0;
	int iLocal_283[2] = { 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	bool bLocal_293 = 0;
	int iLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	bool bLocal_300 = 0;
	bool bLocal_301 = 0;
	bool bLocal_302 = 0;
	int iLocal_303[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_304 = 0;
	bool bLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	bool bLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	float fLocal_339 = 0f;
	float fLocal_340 = 0f;
	float fLocal_341 = 0f;
	float fLocal_342 = 0f;
	float fLocal_343 = 0f;
	float fLocal_344 = 0f;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	struct<8> Local_349 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	var uLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_359 = NULL;
	char* sLocal_360 = NULL;
	char* sLocal_361 = NULL;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	var uLocal_367 = 16;
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
	struct<7> Local_532 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_533 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_534 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_535 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_536 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_537 = { 0, 0 } ;
	struct<2> Local_538[9];
	struct<2> Local_539[4];
	struct<2> Local_540[3];
	struct<2> Local_541 = { 0, 0 } ;
	int iLocal_542 = 0;
	vector3 vLocal_543 = { 0f, 0f, 0f };
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	vector3 vLocal_547 = { 0f, 0f, 0f };
	vector3 vLocal_548 = { 0f, 0f, 0f };
	vector3 vLocal_549 = { 0f, 0f, 0f };
	vector3 vLocal_550 = { 0f, 0f, 0f };
	vector3 vLocal_551 = { 0f, 0f, 0f };
	struct<61> Local_552 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	iLocal_45 = 3;
	uLocal_90 = func_582(64);
	uLocal_91 = func_582(63);
	iLocal_92 = joaat("u_m_m_aldinapoli");
	iLocal_93 = joaat("premier");
	iLocal_109 = 1;
	iLocal_110 = 65;
	iLocal_111 = 49;
	iLocal_112 = 64;
	iLocal_116 = unk_0x99F9E6870B7B7C2D();
	iLocal_117 = unk_0x09990A2B9C8684F0();
	bLocal_121 = true;
	bLocal_128 = true;
	bLocal_150 = true;
	fLocal_171 = 120f;
	fLocal_172 = 0f;
	fLocal_174 = 1f;
	fLocal_175 = 0f;
	fLocal_176 = 1f;
	fLocal_177 = 30f;
	fLocal_179 = 1f;
	fLocal_180 = 5f;
	fLocal_181 = 1f;
	fLocal_182 = 1f;
	fLocal_183 = 100f;
	fLocal_184 = 100f;
	fLocal_185 = 0f;
	fLocal_186 = 7000f;
	fLocal_187 = 0f;
	fLocal_188 = 0f;
	fLocal_189 = 0.3f;
	fLocal_190 = 0.5f;
	fLocal_191 = 50f;
	iLocal_202 = -1;
	iLocal_210 = -1;
	iLocal_211 = -1;
	bLocal_276 = true;
	sLocal_359 = "Nigel2U";
	sLocal_360 = "Nigel2Outro";
	sLocal_361 = "Mrs_Thornhill";
	sLocal_362 = "Nigel";
	sLocal_363 = "Trevor";
	sLocal_364 = func_581();
	sLocal_365 = "Showroom_Car";
	sLocal_366 = "EXL_2_abandoned_car";
	StringCopy(&vLocal_543, "NMT_2_MCS_2", 24);
	Local_275 = { ScriptParam_552 };
	func_579(&Local_275);
	unk_0xD07EE91CE9B6D4CF(1);
	if (unk_0x5EBD03AF78E7B4DB(19))
	{
		func_578("Force cleanup [TERMINATING]");
		func_561(1);
		func_551();
	}
	func_544();
	if (func_543())
	{
		func_542(&Local_275, 0, 1);
		iVar0 = func_541();
		if (Global_87504 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_540(-1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				iLocal_283[0] = 1;
				func_530(1, 0);
				break;
			
			case 1:
				func_540(391.08f, -615.87f, 28.33f, 333.66f, 0, 0);
				func_530(3, 0);
				break;
			
			default:
				break;
			}
	}
	while (true)
	{
		unk_0x4789FEFEDF029858("SF_VSADN", 0);
		func_514(Local_275.f_9, 0, 0, 0, 0, 0);
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			func_511();
			vLocal_549 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
			unk_0xB1D22059BEC7B532(unk_0xD4E735F4B6A956AC());
			unk_0x3CD45FBBD715C963(unk_0xD4E735F4B6A956AC());
			switch (iLocal_272)
			{
				case 0:
					func_429();
					break;
				
				case 1:
					func_377();
					break;
				
				case 2:
					func_298();
					break;
				
				case 3:
					func_290();
					break;
				
				case 4:
					func_95();
					break;
				
				case 5:
					func_49();
					break;
				
				case 6:
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				}
		}
		if (bLocal_276 == 0)
		{
			func_1(iLocal_273);
		}
		wait(0);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	
	if (iLocal_272 == iParam0)
	{
		if (func_48())
		{
			iVar0 = 0;
			if (iLocal_272 == 2 || iLocal_272 == 3)
			{
				iVar0 = Local_535;
			}
			func_46(iVar0, -1, 0);
		}
		func_36(iLocal_272);
		func_34(iLocal_272);
		if (iLocal_272 == 3)
		{
			func_23(1, 0, 1);
		}
		else if (iLocal_272 == 1)
		{
			func_23(0, 1, 1);
		}
		else
		{
			func_23(1, 1, 1);
		}
		bLocal_276 = true;
		iLocal_277 = 0;
		if (iLocal_272 == 4)
		{
			func_22(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	vector3 vVar0;
	
	if (func_21(unk_0xA19140A5C42D8715()))
	{
		func_19();
		unk_0x4F93066CECE72793();
		switch (iLocal_272)
		{
			case 0:
				if (iLocal_274 == 1)
				{
					if (unk_0x5CA3186381FC012C())
					{
						unk_0x7E0C95613122D046(0);
					}
				}
				break;
			
			case 1:
				if (iLocal_274 == 1)
				{
					bLocal_298 = true;
					func_15(Local_533, &Local_535, 0);
					func_15(Local_532, &Local_535, 2);
					func_15(Local_534, &Local_536, -1);
					if (func_14(Local_536))
					{
						if (unk_0xB2C707E9E3A0E44D(Local_536))
						{
							unk_0xF648DB179A6E71BF(Local_536);
						}
						unk_0xE8B3104D1CB25CDC(Local_536, 393.4298f, -621.3337f, 28.4891f, 0, 0, 1);
						unk_0x693A63A8D6B78EA4(Local_536, -0.0081f, -0.0061f, 0.7994f, -0.6007f);
						unk_0x99F546A9200EA026(Local_536, 1084227584);
					}
					unk_0x6D68030C791111E0("rcmnigel2");
					while (!unk_0x39C2D9AB77873F84("rcmnigel2"))
					{
						wait(0);
					}
					func_13(1, 0);
					unk_0x01AF8CB960828C2B(393.38f, -617.53f, 27.91f, 50f, 0, 0, 0, 0, false, 0);
					if (!func_48())
					{
						func_15(unk_0xA19140A5C42D8715(), &Local_535, -1);
						func_12(&Local_535, 364.7079f, -608.3558f, 27.7364f, 246.4916f, 0);
						unk_0xD87B76260C547F31(0f);
						unk_0xAA32DD4848CF93E0(0f, 1065353216);
						if (iLocal_277 == 0)
						{
							if (iLocal_273 == 2)
							{
								if (func_11(unk_0xA19140A5C42D8715()))
								{
									func_3(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 25f, 13, 5000, 0, 0);
									iLocal_277 = 1;
								}
							}
						}
					}
					unk_0x5FEB5D55B0DE217B(0f);
					unk_0x01AF8CB960828C2B(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 150f, 0, 0, 0, 0, false, 0);
					iLocal_274 = 2;
				}
				break;
			
			case 2:
				if (iLocal_274 == 1)
				{
					func_15(Local_533, &Local_535, 0);
					func_15(Local_532, &Local_535, 2);
					if (!func_48())
					{
						func_15(unk_0xA19140A5C42D8715(), &Local_535, -1);
						vVar0 = { 391.08f, -615.87f, 28.33f };
						func_12(&Local_535, vVar0, 333.66f, 0);
						if (iLocal_277 == 0)
						{
							if (iLocal_273 == 3)
							{
								if (func_11(unk_0xA19140A5C42D8715()))
								{
									func_3(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 25f, 13, 5000, 0, 0);
									iLocal_277 = 1;
								}
							}
						}
					}
					iLocal_274 = 2;
				}
				break;
			
			case 3:
				if (iLocal_274 == 1)
				{
					if (unk_0x5CA3186381FC012C())
					{
						unk_0x7E0C95613122D046(0);
					}
				}
				break;
			
			default:
				break;
			}
	}
}

void func_3(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x9D22BD3C08954356(vParam0, iParam1, iParam2, 127);
	if (unk_0x3E916160A9F1C90C(iVar0))
	{
		iVar1 = (unk_0xFD34717937104F1C() + iParam3);
		while (!unk_0x5B66F1DF84F47874(iVar0) && unk_0xFD34717937104F1C() < iVar1)
		{
			if (bParam5)
			{
				func_5(0);
			}
			if (bParam4)
			{
				func_4();
			}
			wait(0);
		}
		if (unk_0xFD34717937104F1C() < iVar1)
		{
		}
		unk_0xE2F714507B54AC4D(iVar0);
	}
}

void func_4()
{
	Global_17228.f_6 = 1;
}

void func_5(int iParam0)
{
	if (func_10())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_9(0))
		{
			func_6(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_6(int iParam0)
{
	if (func_10())
	{
		return;
	}
	if (Global_14681)
	{
		func_8(0, 0);
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
	if (!func_7())
	{
		Global_14513.f_1 = 3;
	}
}

int func_7()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_8(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

int func_9(int iParam0)
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

bool func_10()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

int func_11(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_12(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (func_11(*iParam0))
	{
		if (bParam3)
		{
			vParam1.z = -200f;
		}
		unk_0x4299736016AECE26(*iParam0, vParam1, 1, false, 0, 1);
		unk_0x92DDCF53AA47A63D(*iParam0, fParam2);
	}
}

void func_13(bool bParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0xDC5D81351D6A4DDB(Local_541))
	{
		fVar0 = 115000f;
		fVar1 = 116821f;
		if (bParam1)
		{
			if (fLocal_341 < (fVar0 - 3000f))
			{
				return;
			}
		}
		unk_0xCACEBBBEAD8F262E(Local_541.f_1);
		if (bParam0)
		{
			while (!unk_0x7FC99CCC73354033(Local_541.f_1))
			{
				wait(0);
			}
		}
		if (bParam1)
		{
			if (fLocal_341 < fVar0 || fLocal_341 > fVar1)
			{
				return;
			}
		}
		if (unk_0x7FC99CCC73354033(Local_541.f_1))
		{
			Local_541 = unk_0x48CFBECB146FD1A1(Local_541.f_1, 419.3891f, -604.8867f, 27.7732f, 0f, true, true, false);
		}
		if (func_14(Local_541))
		{
			unk_0xA5DE74AE39867B03(Local_541.f_1);
			unk_0x693A63A8D6B78EA4(Local_541, 0f, 0.0006f, 0.9996f, -0.0275f);
			unk_0x14293208022014FA(Local_541, 1);
		}
	}
}

int func_14(int iParam0)
{
	if (func_11(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (!unk_0x463E3A48A46C9195(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_11(iParam0) && func_14(*iParam1))
	{
		if (unk_0x588F5E48C78F1C73(*iParam1, iParam2, 0))
		{
			func_18(iParam0, *iParam1, iParam2);
		}
		else
		{
			iVar0 = unk_0xB0D49A1F9F054602(*iParam1, iParam2, 0);
			if (iVar0 != iParam0)
			{
				if (func_11(iVar0))
				{
					func_16(iVar0);
					func_15(iParam0, iParam1, iParam2);
				}
			}
		}
	}
}

void func_16(int iParam0)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { 0f, 0f, 0f };
	fVar1 = 0f;
	if (func_11(iParam0))
	{
		if (unk_0x8A29BBDF4603E52B(iParam0))
		{
			vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
			while (!unk_0x1EB91C63EC75FAAD(vVar0, 0, &vVar0, 0))
			{
				wait(0);
				vVar0.x = (vVar0.x + 2f);
			}
			fVar1 = unk_0x552C823E1D2A019C(iParam0);
			func_17(iParam0, vVar0, fVar1, 1, 1);
		}
	}
}

void func_17(int iParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (func_11(iParam0))
	{
		if (bParam3)
		{
			vParam1.z = -200f;
		}
		unk_0x4299736016AECE26(iParam0, vParam1, 1, false, 0, 1);
		unk_0x92DDCF53AA47A63D(iParam0, fParam2);
		if (bParam4)
		{
			unk_0x3A3E4B7C6FBE305D(iParam0, 0, 0);
		}
	}
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	if (func_21(iParam0))
	{
		if (func_11(iParam1))
		{
			if (unk_0xF797E4DD45066C88(iParam0))
			{
				unk_0xB29E08C7AB729BAD(unk_0x081BDD4B3367CE5E(iParam0), false);
			}
			else
			{
				unk_0xB29E08C7AB729BAD(iParam0, false);
			}
			unk_0x692D5500D82E4F5D(iParam0, iParam1, iParam2);
		}
	}
}

void func_19()
{
	Global_14688 = 0;
	func_20();
}

void func_20()
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

int func_21(int iParam0)
{
	if (func_11(iParam0))
	{
		if (!unk_0x4915F4759304D5CF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_22(int iParam0, bool bParam1)
{
	if (unk_0x71364F510A1CB69F() || unk_0x607776744A243309())
	{
		if (!unk_0x3BE8B7AEED1A3971())
		{
			unk_0x70C1F5AA59767FE6(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x3A83743561B4F70C())
		{
			wait(0);
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	func_24(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0xAA32DD4848CF93E0(0f, 1065353216);
		unk_0xD87B76260C547F31(0f);
	}
	if (iParam1 == 1)
	{
		func_22(500, 0);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xA6580F898F4E801C();
	unk_0x271AF1531073FE9B(iVar0, 0);
	unk_0x962CF6A9EA6FDCAC(iVar0, bParam3, 0);
	func_25(0, 1, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xDC374DA4DC566237(true);
		unk_0x85685830EFB9A55E(true);
	}
	unk_0x135C61E339DABBAC(1);
	if (iParam0 == 1)
	{
		unk_0x20732990927F4964(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_46 != 0 && iLocal_46 != joaat("object")) && iLocal_46 != joaat("gadget_parachute"))
		{
			if (func_11(unk_0xA19140A5C42D8715()))
			{
				if (unk_0x22B3625D717A4563(unk_0xA19140A5C42D8715(), iLocal_46, 0))
				{
					unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), iLocal_46, false);
				}
			}
		}
	}
	if (func_21(unk_0xA19140A5C42D8715()))
	{
		unk_0x1BE107CEA70974D0(unk_0xA19140A5C42D8715(), 0, 0);
	}
}

void func_25(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_33(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(false);
			}
			if (!func_7())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_32(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_33(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_32(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_30(unk_0xD4E735F4B6A956AC())) && !func_27(unk_0xD4E735F4B6A956AC(), 0)) && !func_26()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_30(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), false);
		}
		Global_71203 = 0;
	}
}

bool func_26()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312736;
}

int func_30(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
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

bool func_31()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDA9416DF9C88432D() != iParam0 && iParam2)
		{
			unk_0x5126E6F88EF5B7A1(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_33(int iParam0)
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

void func_34(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (iLocal_330 == 0)
			{
				while (!func_35("NIGEL2_START", 0))
				{
					wait(0);
				}
				iLocal_330++;
			}
			if (iLocal_330 == 1)
			{
				while (!func_35("NIGEL2_CAR", 0))
				{
					wait(0);
				}
				iLocal_330++;
			}
			if (iLocal_330 == 2)
			{
				while (!func_35("NIGEL2_JUMP", 1))
				{
					wait(0);
				}
				iLocal_330++;
			}
			break;
	}
}

int func_35(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x7B5129A25EE58E36(sParam0))
		{
			return 0;
		}
	}
	if (unk_0x9444470D6D9ADB88(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		switch (iParam0)
		{
			case 1:
				unk_0xD87B76260C547F31(22f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				break;
			
			case 3:
				if (iLocal_273 == 3)
				{
					func_15(unk_0xA19140A5C42D8715(), &Local_535, -1);
					func_12(&Local_535, 391.08f, -615.87f, 28.33f, 333.66f, 0);
					func_45(&vLocal_543);
					func_44();
					while (!func_37(1, 1093140480, 0))
					{
						func_45(&vLocal_543);
						func_44();
						wait(0);
					}
				}
				break;
			}
	}
}

int func_37(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		if ((!unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()) && !unk_0x5BEFAE930E36AE54(unk_0xA19140A5C42D8715())) && !unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
		{
			if (!func_42(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0), fParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_41(unk_0xA19140A5C42D8715(), -828834893))
				{
					unk_0xCB482EF95FAE4D73(unk_0xA19140A5C42D8715(), 0, 0);
				}
			}
			if (unk_0x26D28D230F871E8D(unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_40();
	if (func_39())
	{
		func_19();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_38())
		{
			return 0;
		}
	}
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
	}
	return 1;
}

bool func_38()
{
	bool bVar0;
	
	bVar0 = unk_0x7974D616EF03E483();
	if (!Global_71204)
	{
		if (!bVar0)
		{
			Global_71204 = 1;
		}
	}
	return bVar0;
}

int func_39()
{
	if (Global_15822 != 0 || unk_0x904275961B875DEB())
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	unk_0xD481A812073CCF02(0, 21, 1);
	unk_0xD481A812073CCF02(0, 37, 1);
	unk_0xD481A812073CCF02(0, 25, 1);
	unk_0xD481A812073CCF02(0, 141, 1);
	unk_0xD481A812073CCF02(0, 140, 1);
	unk_0xD481A812073CCF02(0, 24, 1);
	unk_0xD481A812073CCF02(0, 257, 1);
	unk_0xD481A812073CCF02(0, 22, 1);
	unk_0xD481A812073CCF02(0, 23, 1);
}

int func_41(int iParam0, int iParam1)
{
	if (func_21(iParam0))
	{
		if (unk_0xF9D4EF1338E38AFB(iParam0, iParam1) == 1 || unk_0xF9D4EF1338E38AFB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_42(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_43(iParam0);
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

void func_43(int iParam0)
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

void func_44()
{
	if (func_11(Local_533))
	{
		if (unk_0x2686487E572FE93A())
		{
			unk_0x034CA621E59C939F(sLocal_362, Local_533, 0);
		}
	}
	if (func_11(Local_532))
	{
		if (unk_0x2686487E572FE93A())
		{
			unk_0x034CA621E59C939F(sLocal_361, Local_532, 0);
		}
	}
	if (func_11(Local_534))
	{
		if (unk_0x2686487E572FE93A())
		{
			unk_0x034CA621E59C939F(sLocal_364, Local_534, 0);
		}
	}
}

void func_45(char* sParam0)
{
	func_25(1, 1, 0, 0, 0);
	unk_0x9D7A6D81C3BE2AAE(sParam0, 8);
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	if (func_543() && func_48())
	{
		while (Global_93227 != 6)
		{
			wait(0);
		}
		unk_0x62BAB49318F4FE6E(0);
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0x7925E894408C3DAD(unk_0xA19140A5C42D8715());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xDC5D81351D6A4DDB(iParam0))
				{
					if (unk_0x1095F403F52B42E1(iParam0, 0))
					{
						if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iParam0, 0))
						{
							unk_0x692D5500D82E4F5D(unk_0xA19140A5C42D8715(), iParam0, iParam1);
							unk_0xAA32DD4848CF93E0(0f, 1065353216);
							unk_0xD87B76260C547F31(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
			}
		}
		unk_0xDB1944D1E5D46A15();
		func_47(0);
	}
}

void func_47(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_93232.f_20), 13);
	}
}

bool func_48()
{
	return unk_0x05EFB6A616B6FADE(Global_93232.f_20, 13);
}

void func_49()
{
	char* sVar0;
	int iVar1;
	
	sVar0 = 0;
	switch (iLocal_274)
	{
		case 0:
			if (func_35("NIGEL2_MISSION_FAIL", 0))
			{
				unk_0x4F93066CECE72793();
				unk_0x135C61E339DABBAC(1);
				if (func_39())
				{
					func_19();
				}
				func_93();
				if (func_14(Local_535))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Local_535, 0) || unk_0x3D77D31E25961596(unk_0xA19140A5C42D8715()))
					{
						unk_0x0185AEECD1FF63F3(Local_535, 6f, 2, 0);
					}
				}
				if (func_21(Local_533))
				{
					if (unk_0x749F5228DEB730FF(Local_533))
					{
						unk_0xF8136E11BE4BEAC3(Local_533);
					}
					unk_0x9568B1B58F78FF36(Local_533);
					if ((iLocal_321 == 7 || iLocal_321 == 6) || iLocal_321 == 4)
					{
						unk_0xC2C4AE9DB4A0BEF3(Local_533, 2, false);
						unk_0x2F89329397A277BC(&iVar1);
						if (unk_0x5D7DFE2058701942(Local_533, 0))
						{
							unk_0xCB482EF95FAE4D73(0, 0, 320);
						}
						unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 300f, -1, 0, 0);
						unk_0x301F42EEE3C40328(iVar1);
						unk_0xE1072FA2FECBAD96(Local_533, iVar1);
						unk_0x3A95A0A3221D4208(&iVar1);
						unk_0xD738221C247C8B71(Local_533, true);
					}
				}
				if (func_21(Local_532))
				{
					if (unk_0x749F5228DEB730FF(Local_532))
					{
						unk_0xF8136E11BE4BEAC3(Local_532);
					}
					unk_0x9568B1B58F78FF36(Local_532);
					if ((iLocal_321 == 5 || iLocal_321 == 4) || iLocal_321 == 6)
					{
						unk_0xC2C4AE9DB4A0BEF3(Local_532, 2, false);
						if (unk_0x5D7DFE2058701942(Local_532, 0))
						{
							unk_0x2F89329397A277BC(&iVar1);
							unk_0xCB482EF95FAE4D73(0, 0, 320);
							unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 300f, -1, 0, 0);
							unk_0x301F42EEE3C40328(iVar1);
							unk_0xE1072FA2FECBAD96(Local_532, iVar1);
							unk_0x3A95A0A3221D4208(&iVar1);
							unk_0xD738221C247C8B71(Local_532, true);
						}
						else
						{
							unk_0x33B5487515BD13D5(Local_532, unk_0xA19140A5C42D8715(), 300f, -1, 0, 0);
							unk_0xD738221C247C8B71(Local_532, true);
						}
					}
				}
				if (func_14(Local_536))
				{
					if (unk_0xB2C707E9E3A0E44D(Local_536))
					{
						unk_0xF648DB179A6E71BF(Local_536);
					}
					if (!bLocal_300)
					{
						func_67(0, 1);
					}
				}
				if (func_21(Local_534))
				{
					if (bLocal_300)
					{
						unk_0xD738221C247C8B71(Local_534, true);
					}
					else
					{
						unk_0x9568B1B58F78FF36(Local_534);
						unk_0xC2C4AE9DB4A0BEF3(Local_534, 2, true);
						unk_0xC2C4AE9DB4A0BEF3(Local_534, 8, false);
						unk_0xC2C4AE9DB4A0BEF3(Local_534, 1, false);
						unk_0xC2C4AE9DB4A0BEF3(Local_534, 32, false);
						unk_0xC2C4AE9DB4A0BEF3(Local_534, 64, false);
						if ((func_14(Local_536) && unk_0xE0FD180CD24C0B67(Local_534, Local_536, 0)) && func_14(Local_535))
						{
							unk_0x2F89329397A277BC(&iVar1);
							unk_0x5175E271E03B40D8(0, Local_536, unk_0xA19140A5C42D8715(), 8, 80f, 786468, 500f, -1f, 1);
							unk_0x301F42EEE3C40328(iVar1);
							unk_0xE1072FA2FECBAD96(Local_534, iVar1);
							unk_0x3A95A0A3221D4208(&iVar1);
						}
						else
						{
							unk_0x2F89329397A277BC(&iVar1);
							unk_0x33B5487515BD13D5(0, unk_0xA19140A5C42D8715(), 300f, -1, 0, 0);
							unk_0x301F42EEE3C40328(iVar1);
							unk_0xE1072FA2FECBAD96(Local_534, iVar1);
							unk_0x3A95A0A3221D4208(&iVar1);
						}
						unk_0xD738221C247C8B71(Local_534, true);
					}
				}
				switch (iLocal_321)
				{
					case 1:
						sVar0 = "NIGEL2_F1";
						break;
					
					case 2:
						sVar0 = "NIGEL2_F2";
						break;
					
					case 3:
						sVar0 = "NIGEL2_F3";
						break;
					
					case 4:
						sVar0 = "NIGEL2_F7";
						break;
					
					case 5:
						sVar0 = "NIGEL2_F4";
						break;
					
					case 6:
						sVar0 = "NIGEL2_F8";
						break;
					
					case 7:
						sVar0 = "NIGEL2_F5";
						break;
					
					case 8:
						sVar0 = "NIGEL2_F6";
						break;
					
					case 9:
						sVar0 = "NIGEL2_F10";
						break;
					
					case 10:
						sVar0 = "NIGEL2_F9";
						break;
					
					default:
						break;
				}
				if (iLocal_321 == 0)
				{
					func_561(1);
				}
				else
				{
					func_65(sVar0, 1);
				}
				iLocal_274 = 1;
			}
			break;
		
		case 1:
			if (func_64())
			{
				if (func_62(unk_0xA19140A5C42D8715()))
				{
					func_60(279.4137f, -585.8815f, 42.3102f, 48.8028f);
					func_58(276.27f, -584f, 42.73f, 337.4f);
				}
				func_50(1);
				func_551();
			}
			break;
	}
}

void func_50(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_55(&(Local_538[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_55(&(Local_539[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	if (func_11(Local_534))
	{
		unk_0x98D1B1BD9C3AA456(Local_534, false, 1);
		if (!unk_0x4915F4759304D5CF(Local_534))
		{
			unk_0xD738221C247C8B71(Local_534, true);
		}
	}
	unk_0x8DB49F2EDD326F53(Local_534.f_1, false);
	func_55(&Local_534, bParam0);
	unk_0x8DB49F2EDD326F53(Local_532.f_1, false);
	if (func_21(Local_532))
	{
		unk_0xD738221C247C8B71(Local_532, true);
	}
	func_55(&Local_532, bParam0);
	unk_0x8DB49F2EDD326F53(Local_533.f_1, false);
	if (func_21(Local_533))
	{
		unk_0xD738221C247C8B71(Local_533, true);
	}
	func_55(&Local_533, bParam0);
	func_54(&Local_349);
	if (func_14(Local_535))
	{
		unk_0x62433ED3D79270C8(Local_535, true);
		unk_0xB9199416158EE29E(Local_535, true);
		unk_0x3FB92963BD0665CB(Local_535, 1);
		if (iLocal_318)
		{
			unk_0x49A185A881A095D4(Local_535, 0);
			iLocal_318 = 0;
		}
	}
	if (unk_0xDC5D81351D6A4DDB(Local_535))
	{
		unk_0x1EDE128D9797328A(Local_535);
	}
	func_51(&Local_535, bParam0);
	if (func_14(Local_536))
	{
		unk_0xD6CDDEFB0FD5B191(Local_536, false, false, false, false, false, false, 0, false);
		unk_0x28BDBB4EFE92691D(Local_536, 0);
		unk_0x62433ED3D79270C8(Local_536, true);
		unk_0xB9199416158EE29E(Local_536, true);
		unk_0x3FB92963BD0665CB(Local_536, 1);
		if (bLocal_300)
		{
			unk_0x70B1045E099298C1(Local_536, 0f);
		}
	}
	func_51(&Local_536, bParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_51(&(Local_540[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	func_51(&Local_541, bParam0);
	func_55(&Local_537, bParam0);
}

void func_51(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_53(iParam0);
	}
	else
	{
		func_52(iParam0);
	}
}

void func_52(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		unk_0x7112137033807390(*iParam0, 0);
		if (unk_0x4943BEEC19289B8E(*iParam0) && unk_0x82384F63D814C864(*iParam0, 1))
		{
			unk_0x792676988A48387F(iParam0);
		}
	}
}

void func_53(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (!unk_0x4943BEEC19289B8E(*iParam0))
		{
			unk_0x1F7948851FB36E88(*iParam0, true, 0);
		}
		if (func_14(*iParam0))
		{
			if (unk_0x4943BEEC19289B8E(*iParam0) && unk_0x82384F63D814C864(*iParam0, 1))
			{
				if (func_11(unk_0xA19140A5C42D8715()))
				{
					if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), *iParam0, 0))
					{
						unk_0x792676988A48387F(iParam0);
						return;
					}
				}
				unk_0x4C842FAB634AC89E(iParam0);
			}
		}
		else
		{
			if (func_11(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), *iParam0, 0))
				{
					unk_0x792676988A48387F(iParam0);
					return;
				}
			}
			unk_0x4C842FAB634AC89E(iParam0);
		}
	}
}

void func_54(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (unk_0x9298F1014462FC57(*iParam0))
		{
			unk_0xF334C9B245CD323D(*iParam0, 1, true);
		}
		unk_0xC0AC848E56940C34(iParam0);
	}
}

void func_55(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(iParam0);
	}
	else
	{
		func_56(iParam0, 1, 0, 1);
	}
}

void func_56(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (!unk_0x4915F4759304D5CF(*iParam0))
		{
			unk_0x98D1B1BD9C3AA456(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x3F29BBC16DCB8A23(*iParam0);
			}
			unk_0xD738221C247C8B71(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x1F4E5EFBFE503FB3(*iParam0, false);
			}
		}
		unk_0x7E4E83D33161D01A(iParam0);
	}
}

void func_57(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (!unk_0x7112137033807390(*iParam0, 0))
		{
			unk_0x98D1B1BD9C3AA456(*iParam0, false, 1);
		}
		if (!unk_0x4943BEEC19289B8E(*iParam0))
		{
			unk_0x1F7948851FB36E88(*iParam0, true, 0);
		}
		unk_0x680F17660351F21B(iParam0);
	}
}

void func_58(vector3 vParam0, float fParam1)
{
	func_59(&(Global_99633.f_2875), vParam0, fParam1);
}

void func_59(var uParam0, vector3 vParam1, var uParam2)
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_60(vector3 vParam0, float fParam1)
{
	if (func_61(Global_71445, 0f, 0f, 0f, 0))
	{
		Global_71445 = { vParam0 };
		Global_71448 = fParam1;
	}
}

bool func_61(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_62(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!unk_0x893915B076B1DDF7(iLocal_337))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		iVar0 = unk_0x26F096D1E3BDF502(iParam0);
		if (func_63(iVar0))
		{
			return 1;
		}
	}
	else
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam0, false) };
		if (unk_0x988A25F5907E93F0(vVar1) == iLocal_337)
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	if ((((iParam0 == unk_0xFEB6EEC0545AF7AA("v_40_Room1") || iParam0 == unk_0xFEB6EEC0545AF7AA("v_40_Room2")) || iParam0 == unk_0xFEB6EEC0545AF7AA("v_40_Room3")) || iParam0 == unk_0xFEB6EEC0545AF7AA("v_40_Room4")) || iParam0 == unk_0xFEB6EEC0545AF7AA("V_40_Room005"))
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_93232 == 7 || Global_93232 == 8)
	{
		return 1;
	}
	return 0;
}

void func_65(char* sParam0, bool bParam1)
{
	func_66(sParam0);
	func_561(bParam1);
}

void func_66(char* sParam0)
{
	if (!unk_0x429D45A6C6520026(sParam0))
	{
		if (unk_0x245B8CF1349B3FDF(sParam0) <= 16)
		{
			StringCopy(&Global_71437, sParam0, 16);
			StringCopy(&Global_71441, "", 16);
			if (unk_0x8F7BC8EB456E9A7D())
			{
				unk_0xB73C1036C716A110();
			}
		}
	}
}

void func_67(bool bParam0, bool bParam1)
{
	if (!unk_0x429D45A6C6520026(&cLocal_232))
	{
		iLocal_134 = 0;
		func_92();
		unk_0x3E11F609741642B7(iLocal_241);
		unk_0x387E83E60256EA18(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, true);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x95F77A3DE1C43063(unk_0xD4E735F4B6A956AC(), 1f);
			unk_0xE94887E71DB8489F(unk_0xD4E735F4B6A956AC(), 1);
			unk_0xD6A3711FA2CAF3EF(1);
		}
		if (bLocal_150)
		{
			unk_0xA5DE74AE39867B03(func_91());
		}
		unk_0xA5DE74AE39867B03(func_90());
		unk_0xA5DE74AE39867B03(func_89());
		unk_0xA5DE74AE39867B03(func_88());
		if (!unk_0x71364F510A1CB69F() && !bParam0)
		{
			func_87();
			func_86();
			func_83();
		}
		else
		{
			func_79();
			func_78();
		}
		if (bParam1)
		{
			func_68(0);
		}
	}
}

void func_68(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_69(iVar0, bParam0);
		iVar0++;
	}
}

void func_69(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_77(iParam0, 2, 1))
		{
			func_76(iParam0, 2, 1);
		}
	}
	else if (func_77(iParam0, 2, 1))
	{
		func_70(iParam0, 2, 1);
	}
}

void func_70(int iParam0, int iParam1, bool bParam2)
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
		if (func_75() == 0)
		{
			iVar0 = func_73(func_74(iParam0), -1, 0);
			unk_0xFA57C719261AA55D(&iVar0, iParam1);
			func_71(func_74(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_72(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_74(int iParam0)
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

int func_75()
{
	return Global_25459;
}

void func_76(int iParam0, int iParam1, bool bParam2)
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
		if (func_75() == 0)
		{
			iVar0 = func_73(func_74(iParam0), -1, 0);
			unk_0x2BCFB39E86340DAA(&iVar0, iParam1);
			func_71(func_74(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_77(int iParam0, int iParam1, bool bParam2)
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
		if (func_75() == 0)
		{
			return unk_0x05EFB6A616B6FADE(func_73(func_74(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		iLocal_248[iVar0] = 0;
		vLocal_216[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_152[iVar0] = 0f;
		fLocal_153[iVar0] = 0f;
		fLocal_154[iVar0] = 0f;
		fLocal_155[iVar0] = 0f;
		iLocal_192[iVar0] = 0;
		fLocal_156[iVar0] = 0f;
		iLocal_193[iVar0] = 0;
		iLocal_242[iVar0] = 0;
		iLocal_194[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_249[iVar0] = 0;
		iVar0++;
	}
	iLocal_199 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_250[iVar0] = 0;
		vLocal_217[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_167[iVar0] = 0f;
		fLocal_168[iVar0] = 0f;
		fLocal_169[iVar0] = 0f;
		fLocal_170[iVar0] = 0f;
		iLocal_198[iVar0] = 0;
		iLocal_243[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_252[iVar0] = 0;
		iVar0++;
	}
	iLocal_201 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_251[iVar0] = 0;
		vLocal_218[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_161[iVar0] = 0f;
		fLocal_162[iVar0] = 0f;
		fLocal_163[iVar0] = 0f;
		fLocal_164[iVar0] = 0f;
		iLocal_195[iVar0] = 0;
		fLocal_165[iVar0] = 0f;
		iLocal_196[iVar0] = 0;
		iLocal_244[iVar0] = 0;
		iLocal_197[iVar0] = 0;
		iVar0++;
	}
	iLocal_200 = 0;
	iLocal_203 = 0;
	iLocal_206 = 0;
	iLocal_207 = 0;
	iLocal_208 = 0;
}

void func_79()
{
	func_82();
	func_81();
	func_80();
}

void func_80()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_251[iVar0]))
		{
			if (unk_0x1095F403F52B42E1(iLocal_251[iVar0], 0))
			{
				if (unk_0xB2C707E9E3A0E44D(iLocal_251[iVar0]))
				{
					unk_0xF648DB179A6E71BF(iLocal_251[iVar0]);
				}
				iVar1 = unk_0xB0D49A1F9F054602(iLocal_251[iVar0], -1, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar1) && iVar1 != unk_0xA19140A5C42D8715())
				{
					if (unk_0x4943BEEC19289B8E(iVar1))
					{
						unk_0x680F17660351F21B(&iVar1);
					}
				}
			}
			if (unk_0x4943BEEC19289B8E(iLocal_251[iVar0]))
			{
				unk_0x4C842FAB634AC89E(&(iLocal_251[iVar0]));
			}
		}
		iLocal_196[iVar0] = 0;
		if (!bLocal_130 && !bLocal_143)
		{
			if (iLocal_195[iVar0] > 0)
			{
				unk_0xD2BB05DE6C584878(iLocal_195[iVar0], &cLocal_232);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_244[iVar0] == 0)
		{
			unk_0xA5DE74AE39867B03(iLocal_244[iVar0]);
		}
		iVar0++;
	}
}

void func_81()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_250[iVar0]))
		{
			if (unk_0x4943BEEC19289B8E(iLocal_250[iVar0]))
			{
				unk_0x4C842FAB634AC89E(&(iLocal_250[iVar0]));
			}
		}
		iLocal_198[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_243[iVar0] == 0)
		{
			unk_0xA5DE74AE39867B03(iLocal_243[iVar0]);
		}
		iVar0++;
	}
	iLocal_204 = 0;
	iLocal_201 = 0;
}

void func_82()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_248[iVar0]))
		{
			if (unk_0x1095F403F52B42E1(iLocal_248[iVar0], 0))
			{
				if (unk_0xB2C707E9E3A0E44D(iLocal_248[iVar0]))
				{
					unk_0xF648DB179A6E71BF(iLocal_248[iVar0]);
				}
				iVar1 = unk_0xB0D49A1F9F054602(iLocal_248[iVar0], -1, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar1) && iVar1 != unk_0xA19140A5C42D8715())
				{
					if (unk_0x4943BEEC19289B8E(iVar1))
					{
						unk_0x680F17660351F21B(&iVar1);
					}
				}
			}
			if (unk_0x4943BEEC19289B8E(iLocal_248[iVar0]))
			{
				unk_0x4C842FAB634AC89E(&(iLocal_248[iVar0]));
			}
		}
		if (!bLocal_130 && !bLocal_143)
		{
			if (iLocal_192[iVar0] > 0)
			{
				unk_0xD2BB05DE6C584878(iLocal_192[iVar0], &cLocal_232);
			}
		}
		iLocal_193[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_242[iVar0] == 0)
		{
			unk_0xA5DE74AE39867B03(iLocal_242[iVar0]);
		}
		iVar0++;
	}
	iLocal_203 = 0;
	iLocal_199 = 0;
}

void func_83()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_251[iVar0]))
		{
			if (unk_0x1095F403F52B42E1(iLocal_251[iVar0], 0))
			{
				if (unk_0xB2C707E9E3A0E44D(iLocal_251[iVar0]))
				{
					unk_0xF648DB179A6E71BF(iLocal_251[iVar0]);
				}
			}
			func_85(iLocal_251[iVar0]);
			func_84(iLocal_251[iVar0]);
		}
		iLocal_196[iVar0] = 0;
		iLocal_197[iVar0] = 0;
		if (!bLocal_130 && !bLocal_143)
		{
			if (iLocal_195[iVar0] > 0)
			{
				unk_0xD2BB05DE6C584878(iLocal_195[iVar0], &cLocal_232);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_244[iVar0] == 0)
		{
			unk_0xA5DE74AE39867B03(iLocal_244[iVar0]);
		}
		iVar0++;
	}
	iLocal_205 = 0;
}

void func_84(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		unk_0x792676988A48387F(&iParam0);
	}
}

void func_85(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar1 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
		if (!unk_0x4915F4759304D5CF(iVar1))
		{
			if (!iVar1 == unk_0xA19140A5C42D8715())
			{
				fVar0 = unk_0xEAA5CEF8875FEEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0x4123165906C17D87(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0xC2C4AE9DB4A0BEF3(iVar1, 8192, true);
				if (bLocal_151)
				{
					unk_0xC2C4AE9DB4A0BEF3(iVar1, 65536, true);
					unk_0xC2C4AE9DB4A0BEF3(iVar1, 2, false);
				}
				unk_0x3B7A32E04BBE59A5(iVar1, 6, false);
			}
		}
	}
}

void func_86()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_250[iVar0]))
		{
			if (!unk_0x7112137033807390(iLocal_250[iVar0], 0))
			{
				unk_0xDCFB67537602326F(iLocal_250[iVar0], true, 0);
			}
			func_84(iLocal_250[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_243[iVar0] == 0)
		{
			unk_0xA5DE74AE39867B03(iLocal_243[iVar0]);
		}
		iVar0++;
	}
	iLocal_204 = 0;
	iLocal_201 = 0;
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_248[iVar0]))
		{
			if (!unk_0x7112137033807390(iLocal_248[iVar0], 0))
			{
				unk_0xDCFB67537602326F(iLocal_248[iVar0], true, 0);
			}
			if (unk_0x1095F403F52B42E1(iLocal_248[iVar0], 0))
			{
				if (unk_0xB2C707E9E3A0E44D(iLocal_248[iVar0]))
				{
					unk_0xF648DB179A6E71BF(iLocal_248[iVar0]);
				}
			}
			func_85(iLocal_248[iVar0]);
			func_84(iLocal_248[iVar0]);
		}
		iLocal_193[iVar0] = 0;
		iLocal_194[iVar0] = 0;
		if (!bLocal_130 && !bLocal_143)
		{
			if (iLocal_192[iVar0] > 0)
			{
				unk_0xD2BB05DE6C584878(iLocal_192[iVar0], &cLocal_232);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_242[iVar0] == 0)
		{
			unk_0xA5DE74AE39867B03(iLocal_242[iVar0]);
		}
		iVar0++;
	}
	iLocal_203 = 0;
	iLocal_199 = 0;
}

int func_88()
{
	return joaat("s_m_y_cop_01");
}

int func_89()
{
	return joaat("police");
}

int func_90()
{
	return joaat("sultan");
}

int func_91()
{
	if (iLocal_245 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_245;
}

void func_92()
{
	unk_0x41D876A92FF28E00();
	unk_0xE4BB0460936DDEFA(-1);
	unk_0x11A2485BCA227247(1);
	unk_0xBDD0761B9A38C772(1);
	unk_0x5FEB5D55B0DE217B(1f);
	unk_0xF2DE32563C8C0849(3);
	unk_0x56C835FB478F652B(3);
}

void func_93()
{
	func_94(&(Local_534.f_2));
	func_94(&(Local_535.f_2));
	func_94(&(Local_533.f_2));
	func_94(&(Local_532.f_2));
}

void func_94(int iParam0)
{
	if (unk_0xCE3CB618AFE55EFB(*iParam0))
	{
		unk_0x3E46F0AAE4B470FB(*iParam0, false);
		unk_0xE1623437A3194332(iParam0);
	}
}

void func_95()
{
	if (func_289(iLocal_335, 1000))
	{
		if (func_21(Local_533) && func_14(Local_535))
		{
			if (unk_0xE0FD180CD24C0B67(Local_533, Local_535, 0))
			{
				if (unk_0xB2C707E9E3A0E44D(Local_535))
				{
					unk_0xF648DB179A6E71BF(Local_535);
					unk_0xD2BB05DE6C584878(1, sLocal_360);
				}
				if (!func_41(Local_533, -258271821))
				{
					unk_0x731722E696597BD1(Local_533, Local_535, 60f, 786469);
					unk_0x1F4E5EFBFE503FB3(Local_533, true);
					unk_0xD738221C247C8B71(Local_533, true);
				}
			}
		}
		func_22(500, 1);
		func_96(100, 1);
		func_551();
	}
}

void func_96(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_287();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_105157[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_105157[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_105157[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_258(iVar0, 0);
	unk_0x2BCFB39E86340DAA(&Global_71453, 1);
	if (Global_105157[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_257(&(Global_105157[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 0);
			unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
			unk_0x824B5E936276CAB3(5000);
		}
	}
	func_245(iVar0, 1, 0, 0);
	func_244(0, 0);
	MemCopy(&sVar1, {func_242(iVar0)}, 4);
	func_239(&sVar1, func_240());
	func_121();
	if (unk_0x05EFB6A616B6FADE(Global_106070.f_9988.f_25, 3))
	{
		func_120();
	}
	func_103();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_99(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_99(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_99(iParam0, 0, 0);
	}
	func_97();
}

int func_97()
{
	if (func_98(0))
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

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

void func_99(int iParam0, int iParam1, int iParam2)
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
		func_102((891 + iParam0), 1, -1, 1);
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
		func_100();
	}
}

void func_100()
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
		func_101(13, floor(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_75() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_97();
				}
			}
		}
	}
}

int func_101(int iParam0, int iParam1)
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

int func_102(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_29();
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

void func_103()
{
	func_119();
	func_111();
	func_107();
	func_106();
	func_105();
	func_104();
	Global_93269 = 0;
	Global_87502 = -1;
	unk_0xFA57C719261AA55D(&(Global_93232.f_20), 17);
	Global_93267 = 0;
	unk_0xDD63978CC283FA2D(0);
	unk_0xD7148FA4D977807B(0);
	unk_0xC1D3387D1E48090E(1);
	unk_0x4A3FFA36E84DD5F4(1);
	unk_0x95DFD5DB6041DFE5(1);
	func_47(0);
}

void func_104()
{
	Global_71445 = { 0f, 0f, 0f };
	Global_71448 = 0f;
	Global_93232.f_21 = 145;
}

void func_105()
{
	StringCopy(&Global_71437, "", 16);
	StringCopy(&Global_71441, "", 16);
}

void func_106()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_93232.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_107()
{
	Global_93232 = 13;
	Global_93232.f_1 = -1;
	Global_93232.f_2 = 0;
	Global_93232.f_30 = 0f;
	unk_0xFA57C719261AA55D(&(Global_93232.f_20), 25);
	Global_93266 = 0;
	func_110(0);
	func_109();
	func_108();
	Global_93232.f_18 = -1;
	Global_93232.f_19 = -1;
}

void func_108()
{
	unk_0xFA57C719261AA55D(&(Global_93232.f_20), 22);
	unk_0xFA57C719261AA55D(&(Global_93232.f_20), 8);
}

void func_109()
{
	if (Global_93232.f_16 != 0)
	{
		unk_0x86795B44CE5FE021(&(Global_93232.f_16));
		Global_93232.f_16 = 0;
	}
	if (Global_93232.f_17 != 0)
	{
		unk_0x86795B44CE5FE021(&(Global_93232.f_17));
		Global_93232.f_17 = 0;
	}
}

void func_110(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36666 = 1;
	}
	else
	{
		Global_36666 = 0;
	}
}

void func_111()
{
	func_112(&Global_99633);
}

void func_112(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_118(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_117(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_117(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_2229[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_2229[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_2229[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_2326[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_116(&(uParam0->f_2869));
	func_114(&(uParam0->f_2875));
	func_113(&(uParam0->f_2965));
}

void func_113(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_114(var uParam0)
{
	func_115(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_115(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_116(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_117(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_118(var uParam0)
{
	*uParam0 = -15;
}

void func_119()
{
	StringCopy(&Global_96656, "", 32);
	func_112(&Global_96664);
}

void func_120()
{
	if (Global_3188[0 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3188[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3188[1 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3188[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3188[2 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3188[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	unk_0x2BCFB39E86340DAA(&Global_2383, 25);
	unk_0x2BCFB39E86340DAA(&Global_2384, 11);
}

void func_121()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_90696[iVar0];
		if (unk_0xDC5D81351D6A4DDB(iVar1) && !unk_0x4915F4759304D5CF(iVar1))
		{
			iVar3 = func_236(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_235(iVar1, 14, iVar2))
				{
					func_122(iVar1, 14, iVar2);
				}
				if (Global_106070.f_2355.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_106070.f_2355.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (unk_0x4915F4759304D5CF(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	Global_71017[1 /*14*/] = { func_170(iVar0, iParam1, iParam2, -1) };
	if (!unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_235(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { func_166(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_122(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { func_163(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_122(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		unk_0x8757CF4763C139B6(iParam0, Global_71017[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { func_166(iVar0, 0) };
		Global_71017[1 /*14*/] = { func_170(iVar0, iParam1, uVar6[iParam1], -1) };
		if (unk_0xE73139FCB8A4B748(iParam0, func_162(iParam1)) > 0 && unk_0x2B322C65C819A12B(iParam0, func_162(iParam1), Global_71017[1 /*14*/].f_3) > 0)
		{
			unk_0x72A0FF8C49CFFC0D(iParam0, func_162(iParam1), Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4, 0);
		}
	}
	if (func_161(iParam0, iVar0, &iVar7, 0))
	{
		func_125(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_123(iParam0, iVar0, &iVar7))
	{
		func_125(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_124(iParam1);
	if (Global_106070.f_2355.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_235(iParam0, Global_106070.f_2355.f_539[iVar0 /*65*/].f_64, Global_106070.f_2355.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_62;
			Global_106070.f_2355.f_539[iVar0 /*65*/].f_63 = -99;
			Global_106070.f_2355.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

int func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (unk_0x4915F4759304D5CF(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_71015++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x8F474E419F56E48D(iParam0);
	if (iParam5 == 0)
	{
		Global_71017[1 /*14*/] = { func_170(iVar10, iParam1, iParam2, -1) };
		if (!func_160(iParam3))
		{
			Global_71015 = (Global_71015 - 1);
			return 0;
		}
		func_156(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_154(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_154(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_153(iParam0, 1);
			if (!func_152(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_153(iParam0, 0);
			if (!func_151(iVar10, 14, iVar8, -1) && !func_150(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_153(iParam0, 2);
			}
		}
		unk_0x406CCC2A13C8D900(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_71060 };
		}
		else
		{
			uVar11 = { func_166(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_71017[1 /*14*/] = { func_170(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_71077 };
						}
						else
						{
							uVar12 = { func_163(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_71017[1 /*14*/] = { func_170(iVar10, 14, uVar12[iVar1], -1) };
							func_141(iParam0, Global_71017[1 /*14*/].f_12, Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4);
							func_156(14);
							if (Global_71015 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_133(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_132(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x72A0FF8C49CFFC0D(iParam0, func_162(iVar0), Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4, unk_0xA4B664E8E0A26C23(iParam0, func_162(iVar0)));
						}
						else
						{
							unk_0x72A0FF8C49CFFC0D(iParam0, func_162(iVar0), Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4, iParam4);
						}
						func_156(iVar0);
						if (Global_71015 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_133(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_71017[1 /*14*/] = { func_170(iVar10, iVar0, func_131(iParam0, iVar0, -1), -1) };
				if (unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_161(iParam0, iVar10, &iVar4, 1))
							{
								func_125(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_166(iVar10, 0) };
						func_125(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_170(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_129(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_125(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_170(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_129(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_125(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_170(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_129(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_125(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_170(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_129(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_125(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_170(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_129(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_125(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_163(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_71017[1 /*14*/] = { func_170(iVar10, 14, uVar15[iVar1], -1) };
			func_141(iParam0, Global_71017[1 /*14*/].f_12, Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4);
			func_156(14);
			if (Global_71015 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_133(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_141(iParam0, Global_71017[1 /*14*/].f_12, Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4);
		func_156(iParam1);
		if (Global_71015 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_133(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x72A0FF8C49CFFC0D(iParam0, func_162(iParam1), Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4, unk_0xA4B664E8E0A26C23(iParam0, func_162(iParam1)));
		}
		else
		{
			unk_0x72A0FF8C49CFFC0D(iParam0, func_162(iParam1), Global_71017[1 /*14*/].f_3, Global_71017[1 /*14*/].f_4, iParam4);
		}
		if (Global_71015 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_133(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_125(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_126(iVar10, iParam1, iParam2);
		}
	}
	if (Global_71015 == 1)
	{
		if (func_161(iParam0, iVar10, &iVar4, 0))
		{
			func_125(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_123(iParam0, iVar10, &iVar4))
		{
			func_125(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_71015 = (Global_71015 - 1);
	return 1;
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_128(iParam0, 12, iVar0))
	{
		if (func_127(iParam0, iParam1, iParam2))
		{
			iVar1 = func_124(iParam0);
			if (iParam1 == 3)
			{
				Global_106070.f_2355.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_106070.f_2355.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_128(int iParam0, int iParam1, int iParam2)
{
	Global_71017[1 /*14*/] = { func_170(iParam0, iParam1, iParam2, -1) };
	return unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 2);
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_163(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_130(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_152(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_151(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_150(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_152(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_151(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_150(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_152(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_151(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_150(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_235(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_235(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_153(iParam0, iParam2);
			}
		}
		else
		{
			return func_154(iParam0, iParam1);
		}
	}
	return -99;
}

int func_132(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_124(iParam0);
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_154(iParam0, 1);
				iVar0 = func_140(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_154(iParam0, 2);
				iVar0 = func_140(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_132(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_139(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_138(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_137(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_137(iParam0, 3, 135, 150))
									{
										iVar0 = func_136(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_137(iParam0, 3, 209, 222))
									{
										iVar0 = func_136(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_137(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_136(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_136(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_136(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_136(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_137(iParam0, 3, 176, 191) && !func_137(iParam0, 3, 227, 242))
									{
										iVar0 = func_136(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_154(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_154(iParam0, 11);
								iVar5 = func_135(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_154(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_134(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_154(iParam0, 8);
								iVar8 = func_154(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_135(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_135(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_154(iParam0, 11);
								iVar0 = func_135(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_134(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_136(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_136(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_128(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_154(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_124(iParam0);
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x8757CF4763C139B6(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x13E0A8160525AE55(iParam0, 34, false);
			unk_0x13E0A8160525AE55(iParam0, 36, false);
		}
	}
	else
	{
		unk_0x73774776D23F43BA(iParam0, iParam1, iParam2, iParam3, unk_0x4C9BACA8D249CB13());
		if (iParam1 == 0)
		{
			iVar0 = func_146(iParam0, iParam2, iParam3, iParam1);
			if (func_142(unk_0x8F474E419F56E48D(iParam0), 14, iVar0, unk_0xEF84BAF28F219386(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x13E0A8160525AE55(iParam0, 34, true);
				unk_0x13E0A8160525AE55(iParam0, 36, true);
			}
			else
			{
				unk_0x13E0A8160525AE55(iParam0, 34, false);
				unk_0x13E0A8160525AE55(iParam0, 36, false);
			}
		}
	}
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_143(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x4BE6499482BEE1D8(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_143(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x4BE6499482BEE1D8(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xF21D7CAB6815AD7E(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_145(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			unk_0x1B674FE324A34577(iVar1, &Var0);
			if (!unk_0x3B61940560400F58(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x4EC128057F5B6F27(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_144(iParam0, func_162(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_71139.f_26[iParam2] && iParam1 == Global_71139[iParam2]) && Global_71139.f_13[iParam2] != 0)
		{
			return Global_71139.f_13[iParam2];
		}
		iVar9 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 0, -1, func_162(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			unk_0xF947B64BF5B65A2E(iVar6, &Var5);
			if (!unk_0x3B61940560400F58(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_71139.f_13[iParam2] = Var5.f_1;
					Global_71139[iParam2] = iParam1;
					Global_71139.f_26[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_146(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_149(iParam3);
	}
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	iVar1 = unk_0xEF84BAF28F219386(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_148(unk_0x8F474E419F56E48D(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_148(unk_0x8F474E419F56E48D(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xFBE47E4C51D1D9AE(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x912FC8EEC1AA4059(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_147(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_149(iParam3);
}

int func_147(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xF21D7CAB6815AD7E(&Var0);
		iVar2 = 0;
		iVar3 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			unk_0x1B674FE324A34577(iVar1, &Var0);
			if (!unk_0x3B61940560400F58(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_145(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x4EC128057F5B6F27(&Var4);
		iVar6 = 0;
		iVar7 = unk_0x6182A22F4D99005E(iParam3, 6, -1, 0, -1, func_162(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			unk_0xF947B64BF5B65A2E(iVar5, &Var4);
			if (!unk_0x3B61940560400F58(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_144(iParam0, func_162(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_149(int iParam0)
{
	switch (iParam0)
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
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_143(iParam0, iParam2, 14, 3);
						}
						return (unk_0x4BE6499482BEE1D8(iParam3, -1757550583, 1) || unk_0x4BE6499482BEE1D8(func_143(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_143(iParam0, iParam2, 1, 3);
						}
						return (unk_0x4BE6499482BEE1D8(iParam3, -1757550583, 0) || unk_0x4BE6499482BEE1D8(func_143(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_143(iParam0, iParam2, 14, 4);
						}
						return (unk_0x4BE6499482BEE1D8(iParam3, -1757550583, 1) || unk_0x4BE6499482BEE1D8(func_143(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_143(iParam0, iParam2, 1, 4);
						}
						return (unk_0x4BE6499482BEE1D8(iParam3, -1757550583, 0) || unk_0x4BE6499482BEE1D8(func_143(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_143(iParam0, iParam2, 1, 3);
					}
					if (unk_0x4BE6499482BEE1D8(iParam3, -1757550583, 0) || unk_0x4BE6499482BEE1D8(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_143(iParam0, iParam2, 1, 4);
					}
					if (unk_0x4BE6499482BEE1D8(iParam3, -1757550583, 0) || unk_0x4BE6499482BEE1D8(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_143(iParam0, iParam2, 14, 3);
					}
					return unk_0x4BE6499482BEE1D8(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_143(iParam0, iParam2, 14, 4);
					}
					return unk_0x4BE6499482BEE1D8(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_153(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4915F4759304D5CF(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xD1241BB51B6FE6DA(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_149(iParam1);
	}
	iVar1 = unk_0x2FB5EBD67ABDBF18(iParam0, iParam1);
	return func_146(iParam0, iVar0, iVar1, iParam1);
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x4915F4759304D5CF(iParam0))
	{
		return -99;
	}
	iVar0 = func_162(iParam1);
	iVar1 = unk_0x774CB20D17C3FF03(iParam0, iVar0);
	iVar2 = unk_0x7710E77D1959B321(iParam0, iVar0);
	return func_155(iParam0, iVar1, iVar2, iParam1);
}

int func_155(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_162(iParam3);
	iVar1 = unk_0xE73139FCB8A4B748(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x2B322C65C819A12B(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_156(int iParam0)
{
	if (unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 1) && !unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 6))
	{
		func_159(iParam0, Global_71017[1 /*14*/].f_5, Global_71017[1 /*14*/].f_2, 2, Global_71017[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 1) && unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_157(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_157(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_157(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_157(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_71014;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_158(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_73(iVar2, iVar0, 0);
		unk_0x2BCFB39E86340DAA(&iVar3, iVar1);
		func_71(iVar2, iVar3, iVar0, 1, 0);
	}
}

bool func_158(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 9954;
	if ((bParam4 && Global_4265675) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4265675)
		{
			iVar0 = unk_0xCD58BA1DE37B5D38(iParam0);
		}
		else
		{
			iVar0 = unk_0x6DD3E71121D6115E(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xCD58BA1DE37B5D38(iParam0);
	}
	else
	{
		iVar0 = unk_0x6DD3E71121D6115E(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
				
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
				
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 9954;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x2BCFB39E86340DAA(&(Global_106070.f_2355[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xFA57C719261AA55D(&(Global_106070.f_2355[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x05EFB6A616B6FADE(Global_106070.f_2355[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	if (!unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_124(iParam1);
	if (Global_106070.f_2355.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_235(iParam0, Global_106070.f_2355.f_539[iVar0 /*65*/].f_61, Global_106070.f_2355.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_59;
			Global_106070.f_2355.f_539[iVar0 /*65*/].f_60 = -99;
			Global_106070.f_2355.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

struct<10> func_163(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_165(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_165(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_165(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_165(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_165(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_165(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_165(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_165(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_165(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_165(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_165(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_164(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_165(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_165(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_165(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_165(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_165(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_165(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_165(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_165(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_165(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_165(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_164(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_165(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_165(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_165(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_165(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_165(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_165(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_165(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_165(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_165(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_165(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_164(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_165(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_165(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_165(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_165(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_165(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_165(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_165(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_165(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_165(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_165(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_165(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_165(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_165(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_165(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_165(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_165(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_165(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_165(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_165(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_165(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_165(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_165(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_165(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_165(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_165(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_165(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_164(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_165(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_165(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_165(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_165(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_165(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_165(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_165(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_165(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_165(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_165(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_165(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_165(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_165(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_165(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_165(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_165(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_165(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_165(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_165(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_165(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_165(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_165(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_165(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_165(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_165(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_164(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0xE57EF7838ECC886A(iParam2, &Var1);
		if (!unk_0x3B61940560400F58(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x5AD89C73E28CAAB7(Var1.f_1, iVar3, &vVar2) && vVar2.z != -1)
				{
					if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_148(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != -1)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_166(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_106070.f_9057.f_99.f_58[120])
					{
						func_169(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_169(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_169(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_169(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_169(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_169(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_169(&Var1, -99, -99, Global_106070.f_2355.f_539.f_196[0], Global_106070.f_2355.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_169(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_169(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_169(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_169(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_169(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_169(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_169(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_169(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_169(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_169(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_169(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_169(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_169(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_169(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_169(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_169(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_169(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_169(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_169(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_169(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_169(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_169(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_169(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_169(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_169(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_169(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_169(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_169(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_169(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_169(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_169(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_169(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_169(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_169(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_169(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_169(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_169(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_169(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_169(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_169(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_169(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_169(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_169(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_169(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_169(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_169(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_169(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_167(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_169(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_169(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_169(&Var1, -99, -99, Global_106070.f_2355.f_539.f_196[1], Global_106070.f_2355.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_169(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_169(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_169(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_169(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_169(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_169(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_169(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_169(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_169(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_169(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_169(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_169(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_169(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_169(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_169(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_169(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_169(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_169(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_169(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_169(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_169(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_169(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_169(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_169(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_169(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_169(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_169(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_169(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_169(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_169(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_169(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_169(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_169(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_169(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_169(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_169(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_169(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_169(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_169(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_169(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_169(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_169(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_169(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_169(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_167(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_169(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_169(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_169(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_169(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_169(&Var1, -99, -99, Global_106070.f_2355.f_539.f_196[2], Global_106070.f_2355.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_169(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_169(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_169(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_169(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_169(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_169(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_169(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_169(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_169(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_169(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_169(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_169(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_169(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_169(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_169(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_169(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_169(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_169(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_169(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_169(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_169(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_169(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_169(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_169(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_169(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_169(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_169(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_169(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_169(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_169(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_169(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_169(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_169(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_169(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_169(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_169(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_169(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_169(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_169(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_169(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_169(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_169(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_169(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_167(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_169(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_169(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_169(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_169(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_169(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_169(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_169(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_169(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_169(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_169(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_169(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_169(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_169(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_169(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_169(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_169(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_169(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_169(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_169(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_169(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_169(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_169(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_169(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_169(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_169(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_169(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_167(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_169(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_169(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_169(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_169(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_169(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_169(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_169(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_169(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_169(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_169(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_169(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_169(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_169(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_169(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_169(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_169(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_169(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_169(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_169(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_169(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_169(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_169(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_169(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_169(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_169(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_169(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_169(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_169(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_167(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_167(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0xDE2FA336A2CE65DB(iVar0, 0);
	unk_0xEBAB77C605128A7D((iParam2 - iParam3), &Var1);
	if (!unk_0x3B61940560400F58(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0x4D0CC9FD287B297C(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						unk_0x4EC128057F5B6F27(&Var3);
						unk_0xDD7BFAE08DAD69B6(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_168(vVar2.z)] = vVar2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_168(vVar2.z)] = func_148(iParam1, vVar2.x, func_168(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != -1)
				{
					(*uParam0)[func_168(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_169(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

struct<14> func_170(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_234();
	if (iParam0 == joaat("player_zero"))
	{
		func_216(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_197(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_171(iParam1, iParam2);
	}
	return Global_71017[0 /*14*/];
}

void func_171(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_196(iParam1);
			break;
		
		case 2:
			func_195(iParam1);
			break;
		
		case 3:
			func_192(iParam1);
			break;
		
		case 4:
			func_191(iParam1);
			break;
		
		case 6:
			func_190(iParam1);
			break;
		
		case 5:
			func_189(iParam1);
			break;
		
		case 8:
			func_188(iParam1);
			break;
		
		case 9:
			func_187(iParam1);
			break;
		
		case 10:
			func_186(iParam1);
			break;
		
		case 1:
			func_185(iParam1);
			break;
		
		case 7:
			func_184(iParam1);
			break;
		
		case 11:
			func_183(iParam1);
			break;
		
		case 12:
			func_182(iParam1);
			break;
		
		case 13:
			func_181(iParam1);
			break;
		
		case 14:
			func_172(iParam1);
			break;
	}
}

void func_172(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_173(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_179(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0xFEB6EEC0545AF7AA(sParam3) != unk_0xFEB6EEC0545AF7AA("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 5);
		}
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 6);
		if (func_178(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x4BE6499482BEE1D8(Global_2621444, 1827025211, 0))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_177(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xFA57C719261AA55D(&(uParam0->f_6), 2);
			}
			if (!func_177(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_177(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xFA57C719261AA55D(&(uParam0->f_6), 2);
			}
			if (!func_177(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_177(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xFA57C719261AA55D(&(uParam0->f_6), 2);
			}
			if (!func_177(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 0);
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 5);
		if (func_159(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
		}
		if (func_159(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
		}
		if (!func_159(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_178(14))
			{
				return;
			}
			iVar0 = func_73(func_176(iParam1, uParam0->f_2), Global_71014, 0);
			if (unk_0x05EFB6A616B6FADE(iVar0, uParam0->f_1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
			}
			iVar0 = func_73(func_175(iParam1, uParam0->f_2), Global_71014, 0);
			if (unk_0x05EFB6A616B6FADE(iVar0, uParam0->f_1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
			}
			if (func_174(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_73(iVar1, Global_71014, 0);
				if (!unk_0x05EFB6A616B6FADE(iVar0, uParam0->f_1))
				{
					unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_6), 2);
		}
	}
}

bool func_174(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_175(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_176(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_71014;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_158(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_73(iVar2, iVar0, 0);
		return unk_0x05EFB6A616B6FADE(iVar3, iVar1);
	}
	return 0;
}

bool func_178(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_71017[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = unk_0xDE2FA336A2CE65DB(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			unk_0xEBAB77C605128A7D(iVar3, &Var2);
			if (!unk_0x3B61940560400F58(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_173(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_173(&(Global_71017[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xF21D7CAB6815AD7E(&Var6);
		iVar9 = 0;
		iVar10 = unk_0x6182A22F4D99005E(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			unk_0x1B674FE324A34577(iVar8, &Var6);
			if (!unk_0x3B61940560400F58(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_173(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x4BE6499482BEE1D8(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x4EC128057F5B6F27(&Var11);
		if (iParam3 != -1 && Global_71186)
		{
			unk_0xDD7BFAE08DAD69B6(iParam3, &Var11);
			Global_2621444 = Var11.f_1;
			Global_2621445 = Var11;
			func_173(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x4BE6499482BEE1D8(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
			return;
		}
		iVar13 = 0;
		iVar14 = unk_0x6182A22F4D99005E(iVar1, 6, -1, 0, -1, func_162(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			unk_0xF947B64BF5B65A2E(iVar12, &Var11);
			if (!unk_0x3B61940560400F58(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_173(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x4BE6499482BEE1D8(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_181(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_180(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_182(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_183(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_184(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_185(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_186(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_180(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_187(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_180(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_188(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_180(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_189(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_180(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_190(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_180(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_191(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_180(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_192(int iParam0)
{
	if (iParam0 < 136)
	{
		func_194(iParam0);
	}
	else
	{
		func_193(iParam0);
	}
	if (Global_71017[0 /*14*/].f_2 == -1)
	{
		func_180(3, iParam0, 242, -1);
	}
}

void func_193(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_194(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_195(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_196(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_180(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_197(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_215(iParam1);
			break;
		
		case 2:
			func_214(iParam1);
			break;
		
		case 3:
			func_210(iParam1);
			break;
		
		case 4:
			func_209(iParam1);
			break;
		
		case 6:
			func_208(iParam1);
			break;
		
		case 5:
			func_207(iParam1);
			break;
		
		case 8:
			func_206(iParam1);
			break;
		
		case 9:
			func_205(iParam1);
			break;
		
		case 10:
			func_204(iParam1);
			break;
		
		case 1:
			func_203(iParam1);
			break;
		
		case 7:
			func_202(iParam1);
			break;
		
		case 11:
			func_201(iParam1);
			break;
		
		case 12:
			func_200(iParam1);
			break;
		
		case 13:
			func_199(iParam1);
			break;
		
		case 14:
			func_198(iParam1);
			break;
	}
}

void func_198(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_199(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_200(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_180(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_202(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_203(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_204(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_205(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_206(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_207(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_180(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_208(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_180(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_209(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_180(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_210(int iParam0)
{
	if (iParam0 < 107)
	{
		func_213(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_212(iParam0);
	}
	else
	{
		func_211(iParam0);
	}
	if (Global_71017[0 /*14*/].f_2 == -1)
	{
		func_180(3, iParam0, 318, -1);
	}
}

void func_211(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_212(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_213(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_214(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_180(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_215(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_180(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_233(iParam1);
			break;
		
		case 2:
			func_232(iParam1);
			break;
		
		case 3:
			func_229(iParam1);
			break;
		
		case 4:
			func_228(iParam1);
			break;
		
		case 6:
			func_227(iParam1);
			break;
		
		case 5:
			func_226(iParam1);
			break;
		
		case 8:
			func_225(iParam1);
			break;
		
		case 9:
			func_224(iParam1);
			break;
		
		case 10:
			func_223(iParam1);
			break;
		
		case 1:
			func_222(iParam1);
			break;
		
		case 7:
			func_221(iParam1);
			break;
		
		case 11:
			func_220(iParam1);
			break;
		
		case 12:
			func_219(iParam1);
			break;
		
		case 13:
			func_218(iParam1);
			break;
		
		case 14:
			func_217(iParam1);
			break;
	}
}

void func_217(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_180(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_218(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_180(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_219(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_220(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_221(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_222(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_223(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_180(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_224(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_180(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_225(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_180(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_226(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_180(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_227(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_180(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_228(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_229(int iParam0)
{
	if (iParam0 < 60)
	{
		func_231(iParam0);
	}
	else
	{
		func_230(iParam0);
	}
	if (Global_71017[0 /*14*/].f_2 == -1)
	{
		func_180(3, iParam0, 181, -1);
	}
}

void func_230(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_231(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_232(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_180(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_233(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_180(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_173(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_234()
{
	Global_71017[0 /*14*/].f_1 = -1;
	Global_71017[0 /*14*/].f_2 = -1;
	Global_71017[0 /*14*/].f_5 = -1;
	Global_71017[0 /*14*/].f_3 = -1;
	Global_71017[0 /*14*/].f_4 = -1;
	Global_71017[0 /*14*/].f_7 = 0;
	Global_71017[0 /*14*/].f_6 = 0;
	Global_71017[0 /*14*/].f_13 = -1;
	Global_71017[0 /*14*/].f_12 = 0;
	Global_71017[0 /*14*/] = 0;
	StringCopy(&(Global_71017[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_235(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0x4915F4759304D5CF(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	Global_71017[1 /*14*/] = { func_170(iVar0, iParam1, iParam2, -1) };
	if (!unk_0x05EFB6A616B6FADE(Global_71017[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_166(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_235(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_163(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_235(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_71017[2 /*14*/] = { func_170(iVar0, 14, iVar4, -1) };
									if (Global_71017[2 /*14*/].f_12 == iVar3)
									{
										if (func_235(iParam0, 14, iVar4))
										{
											if (!func_129(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_71017[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_154(iParam0, iVar2);
						Global_71017[2 /*14*/] = { func_170(iVar0, iVar2, iVar1, -1) };
						if (!func_129(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_71017[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_163(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_235(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xD1241BB51B6FE6DA(iParam0, Global_71017[1 /*14*/].f_12) == Global_71017[1 /*14*/].f_3 && (unk_0x2FB5EBD67ABDBF18(iParam0, Global_71017[1 /*14*/].f_12) == Global_71017[1 /*14*/].f_4 || Global_71017[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_71017[1 /*14*/].f_3 == unk_0x774CB20D17C3FF03(iParam0, func_162(iParam1)) && Global_71017[1 /*14*/].f_4 == unk_0x7710E77D1959B321(iParam0, func_162(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_237(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_237(int iParam0)
{
	if (func_238(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_238(int iParam0)
{
	return iParam0 < 3;
}

void func_239(char* sParam0, int iParam1)
{
	unk_0x003FD085FF48F510(joaat("sp_last_mission_name"), sParam0, 1);
	if (unk_0x05EFB6A616B6FADE(iParam1, 0))
	{
		unk_0x003FD085FF48F510(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (unk_0x05EFB6A616B6FADE(iParam1, 1))
	{
		unk_0x003FD085FF48F510(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (unk_0x05EFB6A616B6FADE(iParam1, 2))
	{
		unk_0x003FD085FF48F510(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

int func_240()
{
	func_241();
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

void func_241()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_237(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_236(unk_0xA19140A5C42D8715());
			if (func_238(iVar0) && (!func_178(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_238(Global_106070.f_2355.f_539.f_4301))
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

struct<2> func_242(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_243(iParam0) };
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

struct<2> func_243(int iParam0)
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

void func_244(int iParam0, int iParam1)
{
	Global_71473 = iParam1;
	if (Global_56175)
	{
		return;
	}
	if (Global_56202)
	{
		Global_56202 = 0;
		return;
	}
	if (unk_0x8B1574454E8C2421(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_56175)
		{
		}
		Global_56201 = iParam0;
		Global_56175 = 1;
		Global_56186 = 1;
	}
}

void func_245(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 32, true);
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 250, true);
	}
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	unk_0xBF6EED5D6E0CD9BF(1f);
	unk_0x9BB7BCDF2AC2D6F9(5);
	unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
	unk_0x9C6B1D3C923893C5(unk_0xD4E735F4B6A956AC(), 1f);
	unk_0x6B8562932C7890A7(unk_0xD4E735F4B6A956AC(), 1f);
	unk_0x85685830EFB9A55E(true);
	unk_0xDC374DA4DC566237(true);
	unk_0x20732990927F4964(false, 0);
	unk_0xDED73F11B8CB95B1(1f);
	func_256();
	func_255(1, 1);
	func_254();
	func_252();
	func_251(30000);
	if (iParam1 == 1)
	{
		func_246(iParam0, iParam2, iParam3);
	}
	unk_0x9E212A43A08FF3F9(0, 0);
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	char* sVar1;
	
	if (iParam0 != -1)
	{
		func_248(iParam0, &Var0);
		MemCopy(&sVar1, {func_243(iParam0)}, 4);
		unk_0x5D84F5C14E1207BE(&sVar1, 0, Global_93269, 0);
		func_247(&sVar1, Var0.f_3, Global_93269, iParam1, iParam2);
	}
}

void func_247(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_248(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_249(uParam1, "Abigail1", func_242(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 1:
			func_249(uParam1, "Abigail2", func_242(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 2:
			func_249(uParam1, "Barry1", func_242(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 3:
			func_249(uParam1, "Barry2", func_242(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_250(iParam0), 1, 1);
			break;
		
		case 4:
			func_249(uParam1, "Barry3", func_242(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 5:
			func_249(uParam1, "Barry3A", func_242(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 6:
			func_249(uParam1, "Barry3C", func_242(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 7:
			func_249(uParam1, "Barry4", func_242(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_250(iParam0), 0, 0);
			break;
		
		case 8:
			func_249(uParam1, "Dreyfuss1", func_242(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 9:
			func_249(uParam1, "Epsilon1", func_242(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 10:
			func_249(uParam1, "Epsilon2", func_242(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 11:
			func_249(uParam1, "Epsilon3", func_242(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 12:
			func_249(uParam1, "Epsilon4", func_242(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 13:
			func_249(uParam1, "Epsilon5", func_242(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 14:
			func_249(uParam1, "Epsilon6", func_242(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 15:
			func_249(uParam1, "Epsilon7", func_242(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 16:
			func_249(uParam1, "Epsilon8", func_242(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 17:
			func_249(uParam1, "Extreme1", func_242(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 18:
			func_249(uParam1, "Extreme2", func_242(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 19:
			func_249(uParam1, "Extreme3", func_242(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 20:
			func_249(uParam1, "Extreme4", func_242(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 21:
			func_249(uParam1, "Fanatic1", func_242(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_250(iParam0), 1, 0);
			break;
		
		case 22:
			func_249(uParam1, "Fanatic2", func_242(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_250(iParam0), 1, 0);
			break;
		
		case 23:
			func_249(uParam1, "Fanatic3", func_242(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_250(iParam0), 0, 1);
			break;
		
		case 24:
			func_249(uParam1, "Hao1", func_242(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_250(iParam0), 0, 1);
			break;
		
		case 25:
			func_249(uParam1, "Hunting1", func_242(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 26:
			func_249(uParam1, "Hunting2", func_242(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 27:
			func_249(uParam1, "Josh1", func_242(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 28:
			func_249(uParam1, "Josh2", func_242(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_250(iParam0), 1, 1);
			break;
		
		case 29:
			func_249(uParam1, "Josh3", func_242(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_250(iParam0), 1, 1);
			break;
		
		case 30:
			func_249(uParam1, "Josh4", func_242(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 31:
			func_249(uParam1, "Maude1", func_242(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 32:
			func_249(uParam1, "Minute1", func_242(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 33:
			func_249(uParam1, "Minute2", func_242(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 34:
			func_249(uParam1, "Minute3", func_242(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 35:
			func_249(uParam1, "MrsPhilips1", func_242(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 36:
			func_249(uParam1, "MrsPhilips2", func_242(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 37:
			func_249(uParam1, "Nigel1", func_242(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 38:
			func_249(uParam1, "Nigel1A", func_242(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_250(iParam0), 1, 1);
			break;
		
		case 39:
			func_249(uParam1, "Nigel1B", func_242(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_250(iParam0), 1, 1);
			break;
		
		case 40:
			func_249(uParam1, "Nigel1C", func_242(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_250(iParam0), 1, 1);
			break;
		
		case 41:
			func_249(uParam1, "Nigel1D", func_242(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_250(iParam0), 1, 1);
			break;
		
		case 42:
			func_249(uParam1, "Nigel2", func_242(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_250(iParam0), 1, 1);
			break;
		
		case 43:
			func_249(uParam1, "Nigel3", func_242(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_250(iParam0), 1, 1);
			break;
		
		case 44:
			func_249(uParam1, "Omega1", func_242(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 45:
			func_249(uParam1, "Omega2", func_242(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 46:
			func_249(uParam1, "Paparazzo1", func_242(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 47:
			func_249(uParam1, "Paparazzo2", func_242(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 48:
			func_249(uParam1, "Paparazzo3", func_242(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 49:
			func_249(uParam1, "Paparazzo3A", func_242(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 50:
			func_249(uParam1, "Paparazzo3B", func_242(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 51:
			func_249(uParam1, "Paparazzo4", func_242(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 52:
			func_249(uParam1, "Rampage1", func_242(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 54:
			func_249(uParam1, "Rampage3", func_242(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 55:
			func_249(uParam1, "Rampage4", func_242(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 56:
			func_249(uParam1, "Rampage5", func_242(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_250(iParam0), 0, 0);
			break;
		
		case 53:
			func_249(uParam1, "Rampage2", func_242(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_250(iParam0), 1, 0);
			break;
		
		case 57:
			func_249(uParam1, "TheLastOne", func_242(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 58:
			func_249(uParam1, "Tonya1", func_242(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 59:
			func_249(uParam1, "Tonya2", func_242(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 60:
			func_249(uParam1, "Tonya3", func_242(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 61:
			func_249(uParam1, "Tonya4", func_242(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		case 62:
			func_249(uParam1, "Tonya5", func_242(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_250(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_249(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_250(int iParam0)
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

void func_251(int iParam0)
{
	Global_36668 = (unk_0xFD34717937104F1C() + iParam0);
}

void func_252()
{
	if (Global_90639)
	{
		func_241();
		unk_0x4DCF15C1DF96544D(func_253(Global_106070.f_2355.f_539.f_4301));
	}
	else
	{
		unk_0x4DCF15C1DF96544D("");
	}
}

char* func_253(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_254()
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

void func_255(int iParam0, int iParam1)
{
	Global_90634 = iParam0;
	Global_90635 = iParam1;
}

void func_256()
{
	if (Global_71459 != 6)
	{
	}
	if (Global_71464)
	{
		unk_0xE355C64541455AE8(15);
		Global_71464 = 0;
		Global_17367.f_8091 = 0;
	}
	Global_71459 = 6;
	Global_71461 = -1;
	Global_71460 = -1;
}

void func_257(var uParam0)
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

void func_258(int iParam0, bool bParam1)
{
	struct<26> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<6> Var4;
	int iVar5;
	int iVar6;
	struct<6> Var7;
	int iVar8;
	int iVar9;
	
	func_248(iParam0, &Var0);
	if (!unk_0x3CAC2741CC1A631F(&(Var0.f_16), ""))
	{
		while (!func_286(&(Var0.f_16)))
		{
			wait(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		func_285(Var0.f_22, 0);
	}
	func_276(iParam0, Global_71474);
	if (!bParam1)
	{
		iVar1 = func_275(iParam0);
		if (iVar1 != 0)
		{
			if (!unk_0xE69FB07E471C2FB0(iVar1))
			{
				unk_0x75517BC5AF6FF1DD(iVar1);
			}
		}
	}
	if (Var0.f_24 != -1)
	{
		bVar2 = true;
		if (Var0.f_5 != 4)
		{
			iVar3 = 0;
			while (iVar3 < 63)
			{
				iVar5 = iVar3;
				if (iVar5 != iParam0)
				{
					func_248(iVar5, &Var4);
					if (Var4.f_5 == Var0.f_5)
					{
						if (!unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar5 /*6*/], 3))
						{
							bVar2 = false;
						}
						if (!unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iVar5 /*6*/], 0))
						{
							func_263(iVar5);
						}
					}
				}
				iVar3++;
			}
		}
		if (bVar2)
		{
			func_263(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4)
	{
		iVar6 = 0;
		while (iVar6 < 63)
		{
			iVar8 = iVar6;
			if (iVar8 != iParam0)
			{
				func_248(iVar8, &Var7);
				if (Var7.f_5 == Var0.f_25)
				{
					func_263(iVar8);
				}
			}
			iVar6++;
		}
	}
	if (!unk_0x05EFB6A616B6FADE(Global_106070.f_18546[iParam0 /*6*/], 3))
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_18546[iParam0 /*6*/]), 3);
		Global_105157[iParam0 /*10*/].f_5 = 1;
		func_260(iParam0);
		iVar9 = func_259(iParam0);
		if (iVar9 != 322)
		{
			func_99(iVar9, 0, 0);
		}
	}
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109;
			break;
		
		case 1:
			return 322;
			break;
		
		case 2:
			return 69;
			break;
		
		case 3:
			return 70;
			break;
		
		case 4:
			return 322;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 72;
			break;
		
		case 8:
			return 68;
			break;
		
		case 9:
			return 73;
			break;
		
		case 10:
			return 74;
			break;
		
		case 11:
			return 75;
			break;
		
		case 12:
			return 76;
			break;
		
		case 13:
			return 77;
			break;
		
		case 14:
			return 78;
			break;
		
		case 15:
			return 79;
			break;
		
		case 16:
			return 80;
			break;
		
		case 17:
			return 81;
			break;
		
		case 18:
			return 82;
			break;
		
		case 19:
			return 83;
			break;
		
		case 20:
			return 84;
			break;
		
		case 21:
			return 85;
			break;
		
		case 22:
			return 86;
			break;
		
		case 23:
			return 87;
			break;
		
		case 24:
			return 106;
			break;
		
		case 25:
			return 178;
			break;
		
		case 26:
			return 179;
			break;
		
		case 27:
			return 88;
			break;
		
		case 28:
			return 89;
			break;
		
		case 29:
			return 90;
			break;
		
		case 30:
			return 91;
			break;
		
		case 31:
			return 107;
			break;
		
		case 32:
			return 92;
			break;
		
		case 33:
			return 93;
			break;
		
		case 34:
			return 94;
			break;
		
		case 35:
			return 110;
			break;
		
		case 36:
			return 111;
			break;
		
		case 37:
			return 95;
			break;
		
		case 38:
			return 96;
			break;
		
		case 39:
			return 97;
			break;
		
		case 40:
			return 98;
			break;
		
		case 41:
			return 99;
			break;
		
		case 42:
			return 100;
			break;
		
		case 43:
			return 101;
			break;
		
		case 44:
			return 66;
			break;
		
		case 45:
			return 67;
			break;
		
		case 46:
			return 102;
			break;
		
		case 47:
			return 103;
			break;
		
		case 48:
			return 322;
			break;
		
		case 49:
			return 104;
			break;
		
		case 50:
			return 104;
			break;
		
		case 51:
			return 105;
			break;
		
		case 52:
			return 194;
			break;
		
		case 53:
			return 195;
			break;
		
		case 54:
			return 196;
			break;
		
		case 55:
			return 197;
			break;
		
		case 56:
			return 198;
			break;
		
		case 57:
			return 108;
			break;
		
		case 58:
			return 208;
			break;
		
		case 59:
			return 209;
			break;
		
		case 60:
			return 210;
			break;
		
		case 61:
			return 211;
			break;
		
		case 62:
			return 212;
			break;
	}
	return 322;
}

void func_260(int iParam0)
{
	func_262(iParam0, 1);
	Global_106070.f_18546[iParam0 /*6*/].f_3 = func_261();
	Global_106070.f_18546.f_380++;
}

int func_261()
{
	return (Global_106070.f_9988.f_21 + Global_106070.f_18546.f_380);
}

void func_262(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 55;
	if (bParam1)
	{
		iVar1 = uParam0;
		if (iVar1 == 46)
		{
			iVar0 = 35;
		}
		else if (iVar1 == 49)
		{
			iVar0 = 36;
		}
		else if (iVar1 == 50)
		{
			iVar0 = 37;
		}
		else if (iVar1 == 8)
		{
			iVar0 = 38;
		}
		else if (iVar1 == 16)
		{
			iVar0 = 39;
		}
		else if (iVar1 == 38)
		{
			iVar0 = 40;
		}
		else if (iVar1 == 39)
		{
			iVar0 = 41;
		}
		else if (iVar1 == 40)
		{
			iVar0 = 42;
		}
		else if (iVar1 == 41)
		{
			iVar0 = 43;
		}
		else if (iVar1 == 42)
		{
			iVar0 = 44;
		}
		else if (iVar1 == 43)
		{
			iVar0 = 45;
		}
		else if (iVar1 == 20)
		{
			iVar0 = 46;
		}
	}
	else
	{
		iVar2 = uParam0;
		if (iVar2 == 53)
		{
			iVar0 = 0;
		}
		else if (iVar2 == 1)
		{
			iVar0 = 1;
		}
		else if (iVar2 == 2)
		{
			iVar0 = 2;
		}
		else if (iVar2 == 17)
		{
			iVar0 = 3;
		}
		else if (iVar2 == 19)
		{
			iVar0 = 4;
		}
		else if (iVar2 == 43)
		{
			iVar0 = 5;
		}
		else if (iVar2 == 44)
		{
			iVar0 = 6;
		}
		else if (iVar2 == 63)
		{
			iVar0 = 8;
		}
		else if (iVar2 == 12)
		{
			iVar0 = 9;
		}
		else if (iVar2 == 13)
		{
			iVar0 = 10;
		}
		else if (iVar2 == 64)
		{
			iVar0 = 11;
		}
		else if (iVar2 == 20)
		{
			iVar0 = 12;
		}
		else if (iVar2 == 30)
		{
			iVar0 = 13;
		}
		else if (iVar2 == 31)
		{
			iVar0 = 14;
		}
		else if (iVar2 == 41)
		{
			iVar0 = 15;
		}
		else if (iVar2 == 38)
		{
			iVar0 = 16;
		}
		else if (iVar2 == 9)
		{
			iVar0 = 18;
		}
		else if (iVar2 == 59)
		{
			iVar0 = 19;
		}
		else if (iVar2 == 45)
		{
			iVar0 = 20;
		}
		else if (iVar2 == 10)
		{
			iVar0 = 21;
		}
		else if (iVar2 == 14)
		{
			iVar0 = 22;
		}
		else if (iVar2 == 16)
		{
			iVar0 = 24;
		}
		else if (iVar2 == 39)
		{
			iVar0 = 25;
		}
		else if (iVar2 == 46)
		{
			iVar0 = 26;
		}
		else if (iVar2 == 60)
		{
			iVar0 = 27;
		}
		else if (iVar2 == 22)
		{
			iVar0 = 28;
		}
		else if (iVar2 == 48)
		{
			iVar0 = 30;
		}
		else if (iVar2 == 61)
		{
			iVar0 = 31;
		}
		else if (iVar2 == 49)
		{
			iVar0 = 32;
		}
		else if (iVar2 == 27)
		{
			iVar0 = 34;
		}
		else if (iVar2 == 3)
		{
			iVar0 = 47;
		}
		else if (iVar2 == 4)
		{
			iVar0 = 48;
		}
		else if (iVar2 == 5)
		{
			iVar0 = 49;
		}
		else if (iVar2 == 6)
		{
			iVar0 = 50;
		}
		else if (iVar2 == 7)
		{
			iVar0 = 51;
		}
		else if (iVar2 == 58)
		{
			iVar0 = 53;
		}
		else if (iVar2 == 90)
		{
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75)
		{
			iVar0 = 17;
		}
		else if (iVar2 == 93)
		{
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70)
		{
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85)
		{
			iVar0 = 33;
		}
	}
	if (iVar0 != 55)
	{
		Global_106070.f_20536.f_472 = iVar0;
	}
}

void func_263(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_264(iParam0);
	unk_0x2BCFB39E86340DAA(&(Global_106070.f_18546[iParam0 /*6*/]), 0);
}

void func_264(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			func_268(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_265(37, 0);
			break;
		
		default:
			break;
	}
}

void func_265(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_267(iParam0, 0))
		{
			func_266(iParam0, 1, 0);
			func_266(iParam0, 2, 0);
			func_266(iParam0, 3, 0);
			func_266(iParam0, 4, 0);
			func_266(iParam0, 0, 1);
			Global_70024[iParam0] = 1;
		}
	}
	else
	{
		func_266(iParam0, 0, 0);
	}
}

void func_266(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x2BCFB39E86340DAA(&(Global_106070.f_32605[iParam0]), iParam1);
	}
	else
	{
		unk_0xFA57C719261AA55D(&(Global_106070.f_32605[iParam0]), iParam1);
	}
}

bool func_267(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x05EFB6A616B6FADE(Global_106070.f_32605[iParam0], iParam1);
}

void func_268(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_71205)
		{
			Global_2437022.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_106070.f_7233.f_227[iParam0] = iParam1;
		}
		Global_33084[iParam0] = iParam2;
		Global_33283[iParam0] = 1;
		func_271(iParam0, bParam3, iParam4, 0);
		func_269(iParam0, iParam1);
	}
}

void func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x7B68A43B688620B5("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x7B68A43B688620B5("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x0F93570322F6A341("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x0F93570322F6A341("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_270(0, 0);
			}
			else
			{
				func_270(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x7B68A43B688620B5("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x7B68A43B688620B5("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xD9B9ACB0291AA577("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x665C47CF8EF3A8D1("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_270(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&Global_104708, iParam0);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_104708, iParam0);
	}
	Global_104707 = 1;
}

bool func_271(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1645162 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_274(&Var3, iParam0);
	if (func_272())
	{
		iVar1 = Global_106070.f_7233.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2437022.f_75.f_227[iParam0];
	}
	iVar2 = Global_33482[iParam0];
	if (unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !bParam3)
	{
		Global_1645162 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) != unk_0xFEB6EEC0545AF7AA("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_33084[iParam0] && unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1645162 = 1;
				}
				if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()) || unk_0x16F3A5056959BF3A(unk_0xA19140A5C42D8715()))
				{
					if (!unk_0x71364F510A1CB69F())
					{
						bVar5 = false;
						Global_1645162 = 1;
					}
				}
			}
		}
		if (unk_0xE6F861B0A4D50CE0() && (!unk_0x47C3DC461C758C29() || unk_0x84C1DECF60EFBBD7() != 5))
		{
			bVar5 = false;
			Global_1645162 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x8FAC08959C2D32F8(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x5F041E7AE5419FEC(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34678[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[1 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[2 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x1639295C71657BCF(&(Var3.f_8[0 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_34)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_34)))
							{
								unk_0x1639295C71657BCF(&(Var3.f_34));
								Global_1645162 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_34)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_34)))
							{
								unk_0x981516504EAE59E2(&(Var3.f_34));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x1639295C71657BCF(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_34)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_34)))
							{
								unk_0x981516504EAE59E2(&(Var3.f_34));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x471855870C045BD0(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x981516504EAE59E2(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES"))
						{
							if (!unk_0x471855870C045BD0(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x1639295C71657BCF(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34479[iParam0] = 1;
					Global_34678[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0xB68EB57358F46F86(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_50)) != unk_0xFEB6EEC0545AF7AA(""))
						{
							if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_50)))
							{
								unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (!unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x6679FC2A24AEDF2D(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES")) && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (!unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x6679FC2A24AEDF2D(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[0 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[1 /*8*/])) != unk_0xFEB6EEC0545AF7AA(""))
							{
								if (unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xCD2417B9AC84180C(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("") && unk_0xFEB6EEC0545AF7AA(&(Var3.f_8[2 /*8*/])) != unk_0xFEB6EEC0545AF7AA("REMOVE_ALL_STATES"))
							{
								if (!unk_0xE0A4C16EE6C60363(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x6679FC2A24AEDF2D(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xEF6CE4AF8D633F85(iVar6);
						}
					}
					Global_34678[iParam0] = 1;
					Global_34479[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x499324B3EF19C288(Var3, unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), false), true) < 250f)
					{
						uVar4 = unk_0x389F96269D4F1FD8(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xCD7C9B7A8F43BA15(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0x317CA41ED2351630(uVar4, 3);
								Global_34678[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xA3DC7C2803970902(uVar4) != 6 && unk_0xA3DC7C2803970902(uVar4) != 7) && unk_0xA3DC7C2803970902(uVar4) != 8)
								{
									unk_0x317CA41ED2351630(uVar4, 10);
									Global_34678[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0xA23198D7F155C365(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0xFA57C719261AA55D(&(Global_32830[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x191C6AFA8C538AD7(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x2BCFB39E86340DAA(&(Global_32830[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_33283[iParam0] = 0;
				Global_33482[iParam0] = iVar1;
				if (!func_272())
				{
					if (!Global_34079[iParam0])
					{
						Global_34079[iParam0] = 1;
						Global_34278++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_272()
{
	if ((func_75() == -1 || func_75() == 999) && !func_273() == 0)
	{
		return 1;
	}
	return 0;
}

int func_273()
{
	return Global_25460;
}

int func_274(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 46:
			return 42;
			break;
		
		case 47:
			return 43;
			break;
		
		case 49:
			return 44;
			break;
		
		case 50:
			return 45;
			break;
		
		case 8:
			if (unk_0x05EFB6A616B6FADE(Global_106070.f_18546.f_382, 0))
			{
				return 46;
			}
			break;
		
		case 16:
			return 47;
			break;
		
		case 38:
			return 48;
			break;
		
		case 39:
			return 49;
			break;
		
		case 40:
			return 50;
			break;
		
		case 41:
			return 51;
			break;
		
		case 42:
			return 52;
			break;
		
		case 43:
			if (Global_106070.f_9057.f_99.f_58[101])
			{
				return 53;
			}
			else
			{
				return 54;
			}
			break;
		
		case 20:
			return 55;
			break;
	}
	return 0;
}

void func_276(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 46:
			func_277(4, bParam1);
			break;
		
		case 16:
			func_277(6, bParam1);
			break;
		
		case 37:
			func_277(17, bParam1);
			break;
		
		case 31:
			func_277(16, bParam1);
			break;
	}
}

void func_277(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_284(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(Global_106070.f_26406), iVar0);
			if (!bParam1)
			{
				func_282(func_283(iParam0));
				if (!func_281(68))
				{
					func_278("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_278(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_279(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_279(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_280();
	}
}

void func_280()
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

int func_281(int iParam0)
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

void func_282(char* sParam0)
{
	unk_0x59FF6261546DDD52("");
	unk_0x61B2763AF763D5C2("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_283(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC";
			break;
		
		case 1:
			return "CM_STOFRA";
			break;
		
		case 2:
			return "CM_STOTRE";
			break;
		
		case 3:
			return "CM_STOAMA";
			break;
		
		case 4:
			return "CM_STOBEV";
			break;
		
		case 5:
			return "CM_STOBRA";
			break;
		
		case 6:
			return "CM_STOCHR";
			break;
		
		case 7:
			return "CM_STODAV";
			break;
		
		case 8:
			return "CM_STODEV";
			break;
		
		case 9:
			return "CM_STODRF";
			break;
		
		case 10:
			return "CM_STOFAB";
			break;
		
		case 11:
			return "CM_STOFLO";
			break;
		
		case 12:
			return "CM_STOJIM";
			break;
		
		case 13:
			return "CM_STOLAM";
			break;
		
		case 14:
			return "CM_STOLAZ";
			break;
		
		case 15:
			return "CM_STOLES";
			break;
		
		case 16:
			return "CM_STOMAU";
			break;
		
		case 17:
			return "CM_STOTHO";
			break;
		
		case 18:
			return "CM_STONER";
			break;
		
		case 19:
			return "CM_STOPAT";
			break;
		
		case 20:
			return "CM_STOSIM";
			break;
		
		case 21:
			return "CM_STOSOL";
			break;
		
		case 22:
			return "CM_STOSTE";
			break;
		
		case 23:
			return "CM_STOSTR";
			break;
		
		case 24:
			return "CM_STOTAN";
			break;
		
		case 25:
			return "CM_STOTAO";
			break;
		
		case 26:
			return "CM_STOTRA";
			break;
		
		case 27:
			return "CM_STOWAD";
			break;
	}
	return "ERROR!";
}

int func_284(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return unk_0x05EFB6A616B6FADE(Global_106070.f_26406, iParam0);
	}
	return 0;
}

void func_285(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_106070.f_8585[iParam0] = 1;
	Global_106070.f_8585.f_236[iParam0] = (unk_0xFD34717937104F1C() + iParam1);
}

int func_286(char* sParam0)
{
	int iVar0;
	
	iVar0 = 1424;
	if (!unk_0xD4DD82067BC13449(sParam0))
	{
		return 1;
	}
	if (unk_0x3CAC2741CC1A631F(sParam0, "controller_Races"))
	{
		if (unk_0x8B1574454E8C2421(joaat("controller_races")) > 0)
		{
			return 1;
		}
		iVar0 = 128;
	}
	unk_0xD75A4240F0AD8613(sParam0);
	if (unk_0xB1FDFCECA75CE4A7(sParam0))
	{
		start_new_script(sParam0, iVar0);
		unk_0x4659F4154D948B01(sParam0);
		return 1;
	}
	return 0;
}

int func_287()
{
	return func_288(unk_0x61D2332983ACC05C(), 0);
}

int func_288(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0xFEB6EEC0545AF7AA(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_248(iVar0, &sVar1);
		if (unk_0xFEB6EEC0545AF7AA(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

bool func_289(int iParam0, int iParam1)
{
	return (unk_0xFD34717937104F1C() - iParam0) > iParam1;
}

void func_290()
{
	unk_0x60C495B6942EC817(0.3f);
	switch (iLocal_274)
	{
		case 0:
			if (!bLocal_276)
			{
				if (!func_48())
				{
					unk_0xD87B76260C547F31(0f);
					unk_0xAA32DD4848CF93E0(0f, 1065353216);
				}
				iLocal_274 = 2;
			}
			else
			{
				unk_0xD481A812073CCF02(0, 75, 1);
				func_45(&vLocal_543);
				unk_0x5C2A13372076C38C(1, sLocal_360);
				func_44();
				if (func_11(Local_536))
				{
					unk_0xD6CDDEFB0FD5B191(Local_536, false, false, false, true, false, false, 0, false);
				}
				if ((unk_0x6F4A062113883115(1, sLocal_360) && !func_297(&Local_532)) && !func_297(&Local_533))
				{
					if (func_37(1, 1093140480, 0))
					{
						unk_0xE216F8B2802ABABF(unk_0xA19140A5C42D8715(), sLocal_363, 0, 0, 0);
						if (func_11(Local_533))
						{
							unk_0xE216F8B2802ABABF(Local_533, sLocal_362, 0, 0, 0);
						}
						if (func_11(Local_532))
						{
							unk_0xE216F8B2802ABABF(Local_532, sLocal_361, 0, 0, 0);
						}
						if (func_11(Local_534))
						{
							unk_0xE216F8B2802ABABF(Local_534, sLocal_364, 0, 0, 0);
						}
						if (func_11(Local_535))
						{
							unk_0xE216F8B2802ABABF(Local_535, sLocal_365, 0, 0, 0);
						}
						if (func_11(Local_536))
						{
							unk_0xE216F8B2802ABABF(Local_536, sLocal_366, 0, 0, 0);
							unk_0xC8F6C7A08A4B067D(unk_0xE2BBD32891C18569(Local_536, false), 4f);
						}
						unk_0xF748D06B9A97191E(1);
						unk_0x80D42964D19AF118(0);
						wait(0);
						func_22(800, 0);
						unk_0x982F1A2D170EDD0F(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 1, 1, 0);
						func_293(392.86f, -621.04f, 27.97f, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
						func_292(1);
						unk_0x5FEB5D55B0DE217B(0f);
						unk_0x60C495B6942EC817(0.3f);
						iLocal_274 = 1;
					}
				}
				else
				{
					if (func_14(Local_535))
					{
						func_42(Local_535, 10.5f, 1, 0f, 0, 1, 0);
					}
					func_5(0);
					unk_0xD481A812073CCF02(0, 21, 1);
					unk_0xD481A812073CCF02(0, 37, 1);
					unk_0xD481A812073CCF02(0, 25, 1);
					unk_0xD481A812073CCF02(0, 141, 1);
					unk_0xD481A812073CCF02(0, 140, 1);
					unk_0xD481A812073CCF02(0, 24, 1);
					unk_0xD481A812073CCF02(0, 257, 1);
					unk_0xD481A812073CCF02(0, 22, 1);
					unk_0xD481A812073CCF02(0, 23, 1);
				}
			}
			break;
		
		case 1:
			if (unk_0x0FFE9FEDC2E0AC88(sLocal_363, 0))
			{
				unk_0xB6B24463498F5F41();
				if (unk_0x5E64B8EB80D23E10() && unk_0x71364F510A1CB69F())
				{
					unk_0xD87B76260C547F31(0f);
					unk_0xAA32DD4848CF93E0(0f, 1065353216);
				}
				bLocal_315 = true;
			}
			if ((func_21(Local_533) && func_21(Local_532)) && func_14(Local_535))
			{
				if (unk_0x0FFE9FEDC2E0AC88(sLocal_362, 0))
				{
					if (!unk_0xB10F7FE89663CB5B(Local_533, Local_535))
					{
						unk_0x692D5500D82E4F5D(Local_533, Local_535, -1);
					}
					unk_0x1F4E5EFBFE503FB3(Local_533, true);
				}
				if (unk_0x0FFE9FEDC2E0AC88(sLocal_361, 0))
				{
					if (!unk_0xB10F7FE89663CB5B(Local_532, Local_535))
					{
						unk_0x692D5500D82E4F5D(Local_532, Local_535, 0);
					}
					unk_0x1F4E5EFBFE503FB3(Local_532, true);
					unk_0xD738221C247C8B71(Local_532, true);
				}
				if (unk_0x0FFE9FEDC2E0AC88(sLocal_365, 0))
				{
					unk_0xC19EDC1D7179164C(Local_535, true, true, 0);
					unk_0x625FB4B0328423D9(Local_535, 17f);
					unk_0xC53974682AC939A9(Local_535, 1);
					if (!unk_0xB2C707E9E3A0E44D(Local_535))
					{
						unk_0x8F79ED246B384169(Local_535, 1, sLocal_360, 35f, 786468);
					}
				}
			}
			if (func_21(Local_534))
			{
				if (unk_0x0FFE9FEDC2E0AC88(sLocal_364, 0))
				{
					unk_0x98D1B1BD9C3AA456(Local_534, false, 1);
					func_55(&Local_534, 1);
				}
			}
			if (!bLocal_315)
			{
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
			}
			if (!unk_0x5CA3186381FC012C())
			{
				iLocal_274 = 2;
			}
			else
			{
				unk_0x5FEB5D55B0DE217B(0f);
				unk_0x60C495B6942EC817(0.3f);
			}
			break;
		
		case 2:
			if (unk_0x5CA3186381FC012C())
			{
				unk_0x7E0C95613122D046(0);
			}
			else
			{
				if (unk_0x7974D616EF03E483())
				{
					unk_0xFB35B0BAD6F5AD8F();
				}
				if (func_11(Local_534))
				{
					unk_0x98D1B1BD9C3AA456(Local_534, false, 1);
				}
				func_55(&Local_534, 1);
				if (func_14(Local_535))
				{
					if (func_21(Local_533))
					{
						if (!func_41(Local_533, -258271821))
						{
							if (unk_0xB10F7FE89663CB5B(Local_533, Local_535))
							{
								unk_0x1F4E5EFBFE503FB3(Local_533, true);
							}
						}
					}
					if (func_21(Local_532))
					{
						unk_0x1F4E5EFBFE503FB3(Local_532, true);
						unk_0xD738221C247C8B71(Local_532, true);
					}
				}
				if (func_11(Local_536))
				{
					unk_0xD6CDDEFB0FD5B191(Local_536, false, false, false, false, false, false, 0, false);
				}
				if (bLocal_276)
				{
					func_24(1, 1, 1, 1);
				}
				iLocal_335 = unk_0xFD34717937104F1C();
				func_291(4);
			}
			break;
	}
}

void func_291(int iParam0)
{
	iLocal_272 = iParam0;
	iLocal_274 = 0;
}

void func_292(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 341.2f, -645.83f, 25f };
	vVar2 = { 429.1f, -572.89f, 35f };
	unk_0x413F34FCFABEDE4B(vVar1, vVar2, false, 1);
	unk_0xE537EBD7B736A4E2(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, false, 1);
	if (bParam0)
	{
		unk_0xF54514EACB543898(vVar1, vVar2, 0);
		unk_0x982F1A2D170EDD0F(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 0, 0, 0);
	}
	unk_0x2E989BFBA0D3CC0E(vVar1, vVar2, false, 0);
	unk_0xFF54548CCE498035(vVar1, vVar2);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar0 != 1)
		{
			unk_0xE70AC26DFC59863A(iLocal_358[iVar0], 0);
		}
		iVar0++;
	}
	iLocal_357 = unk_0xF66A39BBE7B3C278(vVar1, vVar2, 0, 1, 1, 1);
	if (bParam0)
	{
		unk_0x39F8A3E01BC1A69B(395.2476f, -615.0134f, 27.87107f, 20f, 0);
		unk_0xFDD15D670AD33E10(395.2476f, -615.0134f, 27.87107f, 20f, 1, 0, 0, false);
	}
}

void func_293(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = unk_0xA6580F898F4E801C();
	if (unk_0x58E3CCF930D23BD5(iVar0))
	{
		func_296(0);
		if (bParam7)
		{
			unk_0x4CC7FDC7520D4E8A(unk_0xA6580F898F4E801C(), 1);
		}
		if (bParam6)
		{
			switch (func_295())
			{
				case 0:
					if (func_235(unk_0xA19140A5C42D8715(), 8, 15))
					{
						func_125(unk_0xA19140A5C42D8715(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_235(unk_0xA19140A5C42D8715(), 9, 6))
					{
						func_125(unk_0xA19140A5C42D8715(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_235(unk_0xA19140A5C42D8715(), 8, 1) || func_235(unk_0xA19140A5C42D8715(), 8, 10))
					{
						func_125(unk_0xA19140A5C42D8715(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_235(unk_0xA19140A5C42D8715(), 8, 4))
					{
						func_125(unk_0xA19140A5C42D8715(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			unk_0x3521B10FB737CE36(func_294(unk_0xA6580F898F4E801C()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			unk_0x39F8A3E01BC1A69B(vParam0, 30f, 0);
		}
		if (bParam8)
		{
			unk_0x341AA026B031328A(vParam0, 30f);
		}
		unk_0x9827D9AC8985F888(vParam0, 30f, 0);
		unk_0xF10B3BC4F73177E5(iVar0, 0, 0);
		unk_0xDF341226C0B8BAC3(iVar0, 0);
		unk_0x271AF1531073FE9B(iVar0, 1);
		if (bParam10)
		{
			unk_0xDC374DA4DC566237(false);
			unk_0x85685830EFB9A55E(false);
		}
		unk_0x4F93066CECE72793();
		if (iParam9 == 1)
		{
			unk_0x135C61E339DABBAC(1);
		}
		if (iParam1 == 1)
		{
			unk_0x20732990927F4964(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_46 = 0;
			if (func_11(unk_0xA19140A5C42D8715()))
			{
				iLocal_46 = unk_0x734FB7703233A555(unk_0xA19140A5C42D8715());
				unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
			}
		}
		if (iParam3 == 1)
		{
			func_22(500, 0);
		}
	}
}

Vector3 func_294(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), false);
}

int func_295()
{
	func_241();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_296(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA6580F898F4E801C();
	if (!unk_0xD32647D293B05ADD(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x962CF6A9EA6FDCAC(iVar0, bParam0, 16);
		unk_0x962CF6A9EA6FDCAC(iVar0, bParam0, 32);
	}
	func_25(1, 1, 0, 0, 0);
}

int func_297(int iParam0)
{
	if (func_21(*iParam0))
	{
		if (unk_0xF59ACE94F067B46D(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_298()
{
	unk_0x60C495B6942EC817(0.3f);
	unk_0x5C2A13372076C38C(1, sLocal_360);
	func_375();
	func_374(1090519040);
	switch (iLocal_274)
	{
		case 0:
			func_371();
			iLocal_336 = unk_0xFD34717937104F1C();
			if (func_21(Local_534))
			{
				if (iLocal_292)
				{
					func_342(&uLocal_20, Local_534, 0, 0, 1, 1, 1);
				}
			}
			iLocal_274 = 1;
			break;
		
		case 1:
			if (func_21(Local_534))
			{
				if (iLocal_292)
				{
					func_342(&uLocal_20, Local_534, 0, 0, 1, 1, 1);
				}
				if (unk_0xDC5D81351D6A4DDB(Local_536))
				{
					fLocal_340 = vdist(vLocal_549, unk_0xE2BBD32891C18569(Local_536, false));
				}
				if ((func_14(Local_535) && func_21(Local_533)) && func_21(Local_532))
				{
					if (unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), Local_535))
					{
						if (func_341("NIGEL2_04", 0, 0))
						{
							unk_0xB9509A39A48644C4("NIGEL2_04");
						}
						iLocal_294 = 0;
						func_94(&(Local_535.f_2));
						func_335(&iLocal_317);
						if (!unk_0xCE3CB618AFE55EFB(Local_534.f_2))
						{
							Local_534.f_2 = func_334(Local_534, 1, 0, 5);
						}
						else
						{
							if (unk_0x5D7DFE2058701942(Local_534, 0))
							{
								unk_0x575CF00E129E0CE1(Local_534.f_2, 1f);
							}
							func_333(Local_534.f_2, Local_534, 200f, 0.7f, iLocal_317);
						}
						if (unk_0x54F6F5A823224519(Local_535, 381.9156f, -628.1014f, 22.93229f, 394.4772f, -606.127f, 35.77483f, 18.5f, 0, true, 0))
						{
							if (func_332(&Local_535))
							{
								if (func_289(iLocal_336, 500))
								{
									iLocal_274 = 2;
								}
							}
							else
							{
								iLocal_336 = unk_0xFD34717937104F1C();
							}
						}
						else
						{
							iLocal_336 = unk_0xFD34717937104F1C();
						}
					}
					else
					{
						func_94(&(Local_534.f_2));
						if (!unk_0xCE3CB618AFE55EFB(Local_535.f_2))
						{
							Local_535.f_2 = func_331(Local_535, 1, 7);
						}
						if (!iLocal_294)
						{
							if (func_39())
							{
								func_329();
							}
							iLocal_294 = 1;
						}
						if (!iLocal_289)
						{
							func_328("NIGEL2_04", 7500, 1);
							iLocal_326 = unk_0xFD34717937104F1C();
							iLocal_289 = 1;
						}
						else if (!func_39())
						{
							if (fLocal_342 < 20f)
							{
								if (unk_0xFD34717937104F1C() - iLocal_326) > unk_0x22C775856F4633CA(4500, 6500)
								{
									if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Local_535, 0))
									{
										if (unk_0x22C775856F4633CA(0, 11) > 5)
										{
											if (func_318(&uLocal_367, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
											{
											}
										}
										else if (func_318(&uLocal_367, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
										{
										}
									}
								}
							}
						}
						else
						{
							iLocal_326 = unk_0xFD34717937104F1C();
						}
						func_317();
						iLocal_336 = unk_0xFD34717937104F1C();
					}
				}
				func_316();
			}
			func_371();
			func_305();
			break;
		
		case 2:
			func_94(&(Local_535.f_2));
			func_94(&(Local_534.f_2));
			unk_0x4F93066CECE72793();
			unk_0x135C61E339DABBAC(1);
			func_303(&uLocal_20, 0, 0);
			if (func_39())
			{
				func_301();
			}
			if (!iLocal_292)
			{
				func_300(0);
				unk_0xB6B24463498F5F41();
				iLocal_292 = 1;
			}
			if (unk_0x059A39F1D399060B(iLocal_351))
			{
				unk_0x82E95CCADC55C11E(iLocal_351, 0);
			}
			iLocal_542 = 2;
			func_54(&Local_349);
			unk_0xCF2B4C5AF45D129E();
			if (!func_48() && bLocal_276)
			{
				func_35("NIGEL2_STOP", 0);
			}
			func_299(3);
			func_291(3);
			break;
	}
}

void func_299(int iParam0)
{
	if (!func_48() && bLocal_276)
	{
		if (iParam0 == iLocal_330)
		{
			switch (iLocal_330)
			{
				case 0:
					if (func_35("NIGEL2_START", 0))
					{
						iLocal_330++;
					}
					break;
				
				case 1:
					if (func_35("NIGEL2_CAR", 0))
					{
						unk_0x7B5129A25EE58E36("NIGEL2_JUMP");
						iLocal_330++;
					}
					break;
				
				case 2:
					if (func_35("NIGEL2_JUMP", 1))
					{
						iLocal_330++;
					}
					break;
				
				case 3:
					if (func_35("NIGEL2_STOP", 0))
					{
						iLocal_330++;
					}
					break;
				
				default:
					break;
				}
			}
	}
}

void func_300(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x37B568B777BC65F9(iLocal_320))
		{
			iLocal_320 = unk_0x57FC10C74CC15F22("DEFAULT_SCRIPTED_CAMERA", true);
		}
		if (unk_0x37B568B777BC65F9(iLocal_320))
		{
			unk_0x8E88E73F74A9FF79(true, false, 3000, 1, 0, 0);
			unk_0x057123F3A835FE47(iLocal_320, vLocal_550);
			unk_0xF62A5A3CB8DB2402(iLocal_320, 14f);
			unk_0xA62406CE1190BF91(iLocal_320, Local_535, vLocal_551, 1);
			unk_0xEE059E753F371708("NIGEL_02_SLOWMO_SETTING");
		}
	}
	else
	{
		unk_0xF3D41ED309762C0D(0);
		if (unk_0x37B568B777BC65F9(iLocal_320))
		{
			if (unk_0xC3553172354FFB69(iLocal_320))
			{
				unk_0xD87B76260C547F31(0f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				unk_0x930701157A4B9374(iLocal_320, false);
			}
			unk_0x77F0486CE0E598D5(iLocal_320, 0);
		}
		unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
		unk_0xDED73F11B8CB95B1(1f);
		unk_0x8F2B662BE32A9181("NIGEL_02_SLOWMO_SETTING");
		bLocal_293 = true;
	}
}

void func_301()
{
	Global_14688 = 0;
	func_302();
}

void func_302()
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

void func_303(var uParam0, int iParam1, int iParam2)
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
	unk_0xB9514DB95C310944(1);
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
		if (func_304(uParam0->f_3))
		{
			unk_0x135C61E339DABBAC(1);
		}
	}
	if (!unk_0x7032042E5696FFD7(sVar0))
	{
		if (func_304(sVar0))
		{
			unk_0x135C61E339DABBAC(1);
		}
	}
}

int func_304(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_305()
{
	if (!iLocal_314)
	{
		if (func_315(vLocal_549, 307.3065f, -589.9595f, 42.302f, 200f))
		{
			if (func_307())
			{
				func_306(794);
				iLocal_314 = 1;
			}
		}
	}
}

void func_306(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_56182 = 0;
	if (!Global_56406[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_68276)
	{
		if (Global_68277[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_68277[iVar1 /*9*/].f_1 = 1;
			Global_68277[iVar1 /*9*/].f_2 = 0f;
			if (Global_68277[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_307()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (func_314())
	{
		iVar2 = func_313();
		if (iVar2 != 0)
		{
			bVar3 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				iVar1 = unk_0xA2EA4BA455370F3C(func_312(iVar0));
				if (unk_0xDC5D81351D6A4DDB(iVar1))
				{
					if (func_311(unk_0xE2BBD32891C18569(iVar1, false)))
					{
						if (unk_0xDEAEC99031DCB92A(iVar1, unk_0xA19140A5C42D8715(), 1))
						{
							bVar3 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar3)
			{
				return 1;
			}
		}
	}
	if (func_310())
	{
		iVar4 = func_309();
		if (iVar4 != 0)
		{
			bVar5 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				iVar1 = unk_0xA2EA4BA455370F3C(func_308(iVar0));
				if (unk_0xDC5D81351D6A4DDB(iVar1))
				{
					if (func_311(unk_0xE2BBD32891C18569(iVar1, false)))
					{
						if (unk_0xDEAEC99031DCB92A(iVar1, unk_0xA19140A5C42D8715(), 1))
						{
							bVar5 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar5)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_308(int iParam0)
{
	return Global_48432.f_25[iParam0];
}

var func_309()
{
	return Global_48432.f_24;
}

bool func_310()
{
	return Global_48432.f_24 > 0;
}

int func_311(vector3 vParam0)
{
	int iVar0;
	
	if (!unk_0x893915B076B1DDF7(iLocal_337))
	{
		return 0;
	}
	if (!unk_0x92270AFB0B51829C(vParam0))
	{
		iVar0 = unk_0x65D249E18D7A5AFD(vParam0);
		if (iVar0 == iLocal_337)
		{
			return 1;
		}
	}
	return 0;
}

var func_312(int iParam0)
{
	return Global_48432.f_37[iParam0];
}

var func_313()
{
	return Global_48432.f_36;
}

bool func_314()
{
	return Global_48432.f_36 > 0;
}

bool func_315(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vdist2(vParam0, vParam1) <= (fParam2 * fParam2);
}

void func_316()
{
	float fVar0;
	
	fVar0 = 100f;
	if (iLocal_312)
	{
		if (fLocal_340 > fVar0)
		{
			func_306(793);
			iLocal_312 = 0;
		}
	}
}

void func_317()
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

int func_318(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam4 == 0)
	{
		if (unk_0x8187CC9EB2D7CFE6())
		{
			if (unk_0x3278E95F94254201(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_319(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_319(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_327(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_320(sParam2, iParam3, 0);
}

int func_320(char* sParam0, int iParam1, bool bParam2)
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
					func_20();
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
		if (func_326(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_325();
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
				func_324();
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
				if (func_323())
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
			if (func_7())
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
			func_322();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_321();
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
		func_20();
	}
	return 0;
}

void func_321()
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

void func_322()
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

int func_323()
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

void func_324()
{
	if (func_178(14))
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
		Global_14513 = func_295();
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

void func_325()
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

bool func_326(int iParam0, int iParam1)
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

void func_327(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_328(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xD291E4BC830D587A(sParam0);
	unk_0x1D594DA1FE749C88(iParam1, 1);
}

void func_329()
{
	Global_14688 = 0;
	func_330();
}

void func_330()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(false);
		Global_15822 = 6;
	}
}

int func_331(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_11(iParam0))
	{
		iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
		unk_0xF46EDCACB3804F87(iVar0, bParam1);
		unk_0xAD8FB9E563A1FF80(iVar0, iParam2);
		unk_0x575CF00E129E0CE1(iVar0, 1f);
	}
	return iVar0;
}

int func_332(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0x26D28D230F871E8D(*iParam0))
	{
		return 0;
	}
	if (!unk_0xE0DEA0A8127CF965(*iParam0, 5f))
	{
		return 0;
	}
	if (unk_0x678F978B0FAD24D2(*iParam0))
	{
		return 1;
	}
	vVar0 = { unk_0x4C80695DAD019A5F(*iParam0) };
	if (vVar0.x > 0.2f || vVar0.x < -0.2f)
	{
		return 0;
	}
	if (vVar0.y > 0.2f || vVar0.y < -0.2f)
	{
		return 0;
	}
	return 1;
}

void func_333(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xCE3CB618AFE55EFB(iParam0))
	{
		if ((unk_0xDC5D81351D6A4DDB(iParam1) && unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715())) && !unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (unk_0xFAC06EE780B57279(iParam1))
			{
				if (unk_0x1095F403F52B42E1(unk_0xB86D86A5DBBC79F0(iParam1), 0))
				{
					fVar1 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0798CD089167D3C1(iParam0, 1);
						unk_0xE8C2974337833D20(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0798CD089167D3C1(iParam0, 0);
						unk_0xE8C2974337833D20(iParam0, 255);
					}
				}
			}
			else if (unk_0x281590680327CDEA(iParam1))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xA2EA4BA455370F3C(iParam1)))
				{
					fVar1 = unk_0x499324B3EF19C288(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), unk_0xE2BBD32891C18569(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0798CD089167D3C1(iParam0, 1);
						unk_0xE8C2974337833D20(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0798CD089167D3C1(iParam0, 0);
						unk_0xE8C2974337833D20(iParam0, 255);
					}
				}
			}
		}
	}
}

int func_334(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_11(iParam0))
		{
			iVar0 = unk_0x6A15DD6A863D5E27(iParam0);
			unk_0xF46EDCACB3804F87(iVar0, bParam2);
			unk_0xAD8FB9E563A1FF80(iVar0, iParam3);
			unk_0x575CF00E129E0CE1(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0x575CF00E129E0CE1(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_335(int iParam0)
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	
	if (func_39())
	{
		iLocal_325 = unk_0xFD34717937104F1C();
	}
	else
	{
		iLocal_308 = 0;
	}
	if (iLocal_309)
	{
		if (func_21(iLocal_350))
		{
			if (!unk_0xF59ACE94F067B46D(iLocal_350))
			{
				iLocal_350 = 0;
				iLocal_309 = 0;
			}
		}
		else
		{
			iLocal_350 = 0;
			iLocal_309 = 0;
		}
	}
	if (!unk_0x26D28D230F871E8D(Local_535))
	{
		iLocal_327 = unk_0xFD34717937104F1C();
	}
	if (iLocal_272 == 1)
	{
		if (fLocal_340 < ((200f / 100f) * (0.7f * 100f)))
		{
			if (fLocal_341 > 3000f && fLocal_341 < 7500f)
			{
				if (!iLocal_282)
				{
					if (!func_39())
					{
						iVar2 = 0;
						if (unk_0x8187CC9EB2D7CFE6())
						{
							iVar2 = 1;
						}
						if (func_339(&uLocal_367, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_13", 8, iVar2, 0))
						{
							iLocal_308 = 1;
							iLocal_282 = 1;
						}
					}
				}
			}
			if (fLocal_341 > 15500f && fLocal_341 < 16000f)
			{
				if (!iLocal_281[0])
				{
					if (unk_0x54F6F5A823224519(Local_535, -1237.778f, -763.4679f, 26.42266f, -1186.703f, -829.4772f, 10.58047f, 31f, 0, true, 0))
					{
						if (!func_39())
						{
							if (func_339(&uLocal_367, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_1", 8, 0, 0))
							{
								iLocal_308 = 1;
								iLocal_281[0] = 1;
							}
						}
					}
				}
			}
			if (fLocal_341 > 45500f && fLocal_341 < 47500f)
			{
				if (!iLocal_281[1])
				{
					if (unk_0x54F6F5A823224519(Local_535, -664.5371f, -580.7943f, 29.30828f, -590.7203f, -581.1932f, 23.30828f, 13.5f, 0, true, 0))
					{
						if (func_39())
						{
							func_329();
						}
						if (func_318(&uLocal_367, "NIG2AUD", "NIG_SP1", 8, 0, 0, 0))
						{
							unk_0xE061C3261E51F663(3f, 3f, 0);
							iLocal_308 = 1;
							iLocal_281[1] = 1;
						}
					}
				}
			}
			if (fLocal_341 > 69000f && fLocal_341 < 71000f)
			{
				if (!iLocal_281[2])
				{
					if (unk_0x54F6F5A823224519(Local_535, -440.7857f, -828.3237f, 35.7356f, -511.8112f, -826.6559f, 27.66894f, 60f, 0, true, 0))
					{
						if (func_39())
						{
							func_329();
						}
						if (func_318(&uLocal_367, "NIG2AUD", "NIG_SP2", 8, 0, 0, 0))
						{
							unk_0xE061C3261E51F663(3f, 3f, 0);
							iLocal_308 = 1;
							iLocal_281[2] = 1;
						}
					}
				}
			}
			if (fLocal_341 > 85000f && fLocal_341 < 89000f)
			{
				if (!iLocal_281[3])
				{
					if (unk_0x54F6F5A823224519(Local_535, -432.3278f, -540.988f, 44.07163f, -433.2483f, -485.5649f, 22.47039f, 60f, 0, true, 0))
					{
						if (func_39())
						{
							func_329();
						}
						if (func_318(&uLocal_367, "NIG2AUD", "NIG_SP3", 8, 0, 0, 0))
						{
							iLocal_308 = 1;
							iLocal_281[3] = 1;
						}
					}
				}
			}
			if (fLocal_341 > 104000f && fLocal_341 < 110000f)
			{
				if (!iLocal_281[4])
				{
					if (func_39())
					{
						if (unk_0x54F6F5A823224519(Local_535, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, true, 0))
						{
							if (func_39())
							{
								func_19();
							}
							if (func_339(&uLocal_367, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_12", 8, 0, 0))
							{
								iLocal_308 = 1;
								iLocal_281[4] = 1;
							}
						}
					}
				}
			}
			if (fLocal_341 > 113000f && fLocal_341 < 116000f)
			{
				if (!iLocal_281[5])
				{
					if (unk_0x54F6F5A823224519(Local_535, 254.9994f, -594.3826f, 49.60252f, 270.4643f, -527.226f, 39.68248f, 70f, 0, true, 0))
					{
						if (func_39())
						{
							func_329();
						}
						if (func_318(&uLocal_367, "NIG2AUD", "NIG2_HOSP01", 8, 0, 0, 0))
						{
							unk_0xE061C3261E51F663(3f, 3f, 0);
							iLocal_308 = 1;
							iLocal_281[5] = 1;
						}
					}
				}
			}
			if (fLocal_341 > 118000f)
			{
				if (!iLocal_281[6])
				{
					if (unk_0x54F6F5A823224519(Local_535, 338.0111f, -581.9055f, 41.57753f, 350.9869f, -586.7529f, 46.07751f, 6.75f, 0, true, 0))
					{
						if (func_39())
						{
							func_329();
						}
						if (func_318(&uLocal_367, "NIG2AUD", "NIG2_HWH", 8, 0, 0, 0))
						{
							iLocal_308 = 1;
							iLocal_281[6] = 1;
						}
					}
				}
				if (!iLocal_281[7])
				{
					if (unk_0x54F6F5A823224519(Local_535, 368.5714f, -594.9467f, 45.5422f, 389.5015f, -614.1279f, 27.11789f, 20.75f, 0, true, 0))
					{
						if (!func_337("NIG2_HWH", 1))
						{
							if (func_39())
							{
								func_329();
							}
							if (func_318(&uLocal_367, "NIG2AUD", "NIG2_HWS", 8, 0, 0, 0))
							{
								iLocal_308 = 1;
								iLocal_281[7] = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_309)
	{
		if (!iLocal_288)
		{
			if (((unk_0x2BED1ED73F8FC841(Local_535) || unk_0xEB9F2352179A557A(Local_535, 0, 1000)) || unk_0xEB9F2352179A557A(Local_535, 1, 1000)) || func_289(iLocal_331, 500))
			{
				StringCopy(&cVar1, "NIG2_FLIP_", 32);
				iVar0 = unk_0x22C775856F4633CA(1, 3);
				StringIntConCat(&cVar1, iVar0, 32);
				if (iVar0 == 1)
				{
					unk_0x5746E1C0B9380990(Local_533, "NIG2_CCAA", "NIGEL");
					iLocal_288 = 1;
					iLocal_350 = Local_533;
					iLocal_309 = 1;
					return;
				}
				else
				{
					unk_0x5746E1C0B9380990(Local_532, "NIG2_CCAB", "MRSTHORNHILL");
					iLocal_288 = 1;
					iLocal_350 = Local_532;
					iLocal_309 = 1;
					return;
				}
			}
			else if (unk_0x26D28D230F871E8D(Local_535))
			{
				if (func_289(iLocal_327, 500))
				{
					if (!func_337("NIG2_HWH", 1) && !func_337("NIG2_HWS", 1))
					{
						if (unk_0x22C775856F4633CA(0, 11) > 5)
						{
							StringCopy(&cVar1, "NIG2_CDAA", 32);
							unk_0x5746E1C0B9380990(Local_533, &cVar1, "NIGEL");
							iLocal_350 = Local_533;
						}
						else
						{
							StringCopy(&cVar1, "NIG2_CDAB", 32);
							unk_0x5746E1C0B9380990(Local_532, &cVar1, "MRSTHORNHILL");
							iLocal_350 = Local_532;
						}
						iLocal_327 = unk_0xFD34717937104F1C();
						iLocal_309 = 1;
						iLocal_288 = 1;
						return;
					}
				}
			}
		}
		else if (!unk_0x26D28D230F871E8D(Local_535))
		{
			if (unk_0x678F978B0FAD24D2(Local_535) || ((!unk_0x2BED1ED73F8FC841(Local_535) && !unk_0xEB9F2352179A557A(Local_535, 0, 1000)) && !unk_0xEB9F2352179A557A(Local_535, 1, 1000)))
			{
				iLocal_288 = 0;
			}
		}
		if (!iLocal_308)
		{
			if (unk_0x8FB3F24502523C01(unk_0xD4E735F4B6A956AC()) >= 0 && unk_0x8FB3F24502523C01(unk_0xD4E735F4B6A956AC()) < 500)
			{
				if (unk_0x22C775856F4633CA(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_CQAA", 32);
					unk_0x5746E1C0B9380990(Local_533, &cVar1, "NIGEL");
					iLocal_350 = Local_533;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CPAA", 32);
					unk_0x5746E1C0B9380990(Local_532, &cVar1, "MRSTHORNHILL");
					iLocal_350 = Local_532;
				}
				iLocal_309 = 1;
				return;
			}
			if (unk_0xFD2A0C4CDE18D862(Local_535))
			{
				if (unk_0x22C775856F4633CA(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_COAA", 32);
					unk_0x5746E1C0B9380990(Local_533, &cVar1, "NIGEL");
					iLocal_350 = Local_533;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CNAA", 32);
					unk_0x5746E1C0B9380990(Local_532, &cVar1, "MRSTHORNHILL");
					iLocal_350 = Local_532;
				}
				iLocal_309 = 1;
				return;
			}
		}
	}
	if (!iLocal_308 && !iLocal_309)
	{
		if (unk_0xDC5D81351D6A4DDB(Local_536))
		{
			if (unk_0xDEAEC99031DCB92A(Local_536, unk_0xA19140A5C42D8715(), 1) && unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()))
			{
				if (!func_337("NIG2_SHOOTS", 1) && !func_337("NIG2_SHOOTSN", 1))
				{
					if (func_39())
					{
						func_329();
					}
					if (unk_0x22C775856F4633CA(0, 11) > 5)
					{
						if (func_318(&uLocal_367, "NIG2AUD", "NIG2_SHOOTS", 8, 0, 0, 0))
						{
							unk_0xDCB46BFC2265476A(Local_536);
							iLocal_309 = 1;
							return;
						}
					}
					else if (func_318(&uLocal_367, "NIG2AUD", "NIG2_SHOOTSN", 8, 0, 0, 0))
					{
						unk_0xDCB46BFC2265476A(Local_536);
						iLocal_309 = 1;
						return;
					}
				}
				unk_0xDCB46BFC2265476A(Local_536);
			}
			if (!iLocal_284)
			{
				if (unk_0xDEAEC99031DCB92A(Local_536, unk_0xA19140A5C42D8715(), 1))
				{
					if (func_39())
					{
						func_329();
					}
					if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CHASE01", 8, 0, 0, 0))
					{
						unk_0xDCB46BFC2265476A(Local_536);
						iLocal_308 = 1;
						iLocal_284 = 1;
						return;
					}
				}
			}
		}
		if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
		{
			if (!iLocal_285)
			{
				if (func_39())
				{
					func_301();
				}
				if (func_318(&uLocal_367, "NIG2AUD", "NIG2_WANTED", 8, 0, 0, 0))
				{
					iLocal_285 = 1;
					iLocal_308 = 1;
				}
			}
			else if (!iLocal_286)
			{
				if (!func_337("NIG2_WANTED", 1))
				{
					if (func_39())
					{
						func_329();
					}
					if (func_318(&uLocal_367, "NIG2AUD", "NIG2_POLICE", 8, 0, 0, 0))
					{
						iLocal_286 = 1;
						iLocal_308 = 1;
					}
				}
			}
		}
		if (iLocal_272 == 1)
		{
			if (fLocal_340 < ((200f / 100f) * (0.7f * 100f)))
			{
				if (!iLocal_308 && !func_39())
				{
					if (func_289(iLocal_325, 500))
					{
						if (fLocal_341 < 116000f)
						{
							if (!iLocal_287)
							{
								if (fLocal_341 > 20000f)
								{
									if (func_336())
									{
										if (func_318(&uLocal_367, "NIG2AUD", "NIG2_LEFT", 8, 0, 0, 0))
										{
											iLocal_287 = 1;
										}
									}
								}
							}
							if (!iLocal_278[0])
							{
								if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CHASE02", 8, 0, 0, 0))
								{
									iLocal_278[0] = 1;
								}
							}
							if (!iLocal_278[1])
							{
								if (iLocal_281[0] || fLocal_341 > 16500f)
								{
									if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CHASE05", 8, 0, 0, 0))
									{
										iLocal_278[1] = 1;
									}
								}
							}
							else if (!iLocal_278[2])
							{
								if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CHASE08", 8, 0, 0, 0))
								{
									iLocal_278[2] = 1;
								}
							}
							else if (!iLocal_278[3])
							{
								if (iLocal_281[1] || fLocal_341 > 52500f)
								{
									if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CHASE06", 8, 0, 0, 0))
									{
										iLocal_278[3] = 1;
									}
								}
							}
							else if (!iLocal_278[4])
							{
								if (iLocal_281[2] || fLocal_341 > 71500f)
								{
									if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CHASE03", 8, 0, 0, 0))
									{
										iLocal_278[4] = 1;
									}
								}
							}
							else if (!iLocal_278[5])
							{
								if (iLocal_281[3] || fLocal_341 > 89500f)
								{
									if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CHASE04", 8, 0, 0, 0))
									{
										iLocal_278[5] = 1;
									}
								}
							}
							else if (!iLocal_278[6])
							{
								if (!iLocal_281[5])
								{
									if (iLocal_281[4] || fLocal_341 > 106500f)
									{
										if (!unk_0x54F6F5A823224519(Local_535, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, true, 0))
										{
											if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CHASE07", 8, 0, 0, 0))
											{
												iLocal_278[6] = 1;
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
	}
	if (fLocal_340 > ((200f / 100f) * (0.7f * 100f)))
	{
		if (!iLocal_308)
		{
			if (!iLocal_279[2])
			{
				if (func_39())
				{
					func_301();
				}
				else if (!iLocal_279[0])
				{
					if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CU01", 8, 0, 0, 0))
					{
						iLocal_308 = 1;
						iLocal_279[0] = 1;
					}
				}
				else if (!iLocal_279[1])
				{
					if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
					{
						iLocal_308 = 1;
						iLocal_279[1] = 1;
					}
				}
				else if (!iLocal_279[2])
				{
					if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
					{
						iLocal_308 = 1;
						iLocal_279[2] = 1;
					}
				}
			}
		}
	}
	else if (fLocal_341 > 40000f)
	{
		if (fLocal_341 < 58000f)
		{
			if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -731.6891f, -657.8242f, 26.26911f, -448.3936f, -657.125f, 40.71734f, 40f, 0, true, 0))
			{
				if (!iLocal_280)
				{
					if (!iLocal_279[1])
					{
						if (func_39())
						{
							func_329();
						}
						if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
						{
							iLocal_308 = 1;
							iLocal_279[1] = 1;
							iLocal_280 = 1;
						}
					}
					else
					{
						if (func_39())
						{
							func_329();
						}
						if (func_318(&uLocal_367, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
						{
							iLocal_308 = 1;
							iLocal_279[2] = 1;
							iLocal_280 = 1;
						}
					}
				}
				*iParam0 = 1;
			}
		}
	}
}

int func_336()
{
	if (unk_0x423FC7F788D74253(unk_0xD4E735F4B6A956AC(), 2))
	{
		return 1;
	}
	return 0;
}

int func_337(char* sParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (func_39())
	{
		Var0 = { func_338() };
		if (unk_0x3CAC2741CC1A631F(&Var0, sParam0))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x3CAC2741CC1A631F(&Var0, "NULL"))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_338()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		return Global_15441;
	}
	return Var0;
}

int func_339(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam5 == 0)
	{
		if (unk_0x8187CC9EB2D7CFE6())
		{
			if (unk_0x3278E95F94254201(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_340(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_340(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_327(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_320(sParam2, iParam4, 0);
}

bool func_341(char* sParam0, int iParam1, int iParam2)
{
	unk_0x783C05630CCAF363(sParam0);
	if (iParam1 == 1)
	{
		unk_0x4FDA9E6EF359F8A9(iParam2);
	}
	return unk_0x0818E99A91733016();
}

void func_342(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_343(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_343(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_344(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_344(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
	{
		func_303(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_345(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_345(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_304(iVar0))
	{
		func_370();
	}
	if (func_369(iParam1) && unk_0x7E65E323A95E4187(iParam1))
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
			if (func_364(uParam0, bParam5, bParam7, 0))
			{
				func_361(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_350(iVar0))
				{
					if ((unk_0x7032042E5696FFD7(uParam0->f_3) && !unk_0x7032042E5696FFD7(iVar0)) && unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
					{
						if ((iVar1 && !unk_0xE06AA0996C4E4E03()) && uParam6)
						{
							if (!func_304(iVar0))
							{
								func_349(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3CAC2741CC1A631F("CMN_HINT", iVar0))
								{
									func_348(1);
								}
							}
						}
					}
				}
			}
			else if (func_350(iVar0))
			{
				if (unk_0x7032042E5696FFD7(uParam0->f_3) && !unk_0x7032042E5696FFD7(iVar0))
				{
					if (((unk_0x1A8481A7E865EC7C(iParam1) && iVar1) && !unk_0xE06AA0996C4E4E03()) && uParam6)
					{
						if (!func_304(iVar0))
						{
							func_349(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3CAC2741CC1A631F("CMN_HINT", iVar0))
							{
								func_348(1);
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
				if (func_304(sParam3))
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
						func_303(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5BFF0F72CC04E4DA(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(6) == 3 || unk_0x1F7BAD75218F1A2C(6) == 4)
					{
						func_303(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA22CC9D85ECBCC81(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(4) == 3 || unk_0x1F7BAD75218F1A2C(4) == 4)
					{
						func_303(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE13F2DC045CFCEA3(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(5) == 3 || unk_0x1F7BAD75218F1A2C(5) == 4)
					{
						func_303(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3DA5E98850626D0(unk_0xA19140A5C42D8715()))
				{
					if (unk_0x1F7BAD75218F1A2C(2) == 3 || unk_0x1F7BAD75218F1A2C(2) == 4)
					{
						func_303(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF58C434FFA1FB5F6() == 3 || unk_0xF58C434FFA1FB5F6() == 4)
				{
					func_303(uParam0, iVar0, 1);
				}
			}
			if (!func_364(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_347(uParam0))
				{
					func_346(uParam0);
				}
			}
		}
	}
	else
	{
		func_303(uParam0, iVar0, 0);
	}
}

void func_346(var uParam0)
{
	if (func_369(unk_0xA19140A5C42D8715()))
	{
		unk_0x53FF9BDD8529ACD2(unk_0xA19140A5C42D8715());
	}
	if (unk_0xECD112E8A7AB2E8A())
	{
		unk_0xB9514DB95C310944(1);
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

int func_347(var uParam0)
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

int func_348(bool bParam0)
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

void func_349(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, true, iParam1);
}

int func_350(char* sParam0)
{
	if (!func_351(1, 1, 0))
	{
		if ((!unk_0x429D45A6C6520026(sParam0) && func_304(sParam0)) || func_304("CMN_HINT"))
		{
			unk_0x135C61E339DABBAC(1);
		}
		return 0;
	}
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (func_348(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_348(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_348(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_351(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_9(0))
	{
		return 0;
	}
	if (func_360())
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
	if ((func_359() || func_358(Global_4456448.f_152990)) || func_357())
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
			iVar1 = func_356(unk_0xA19140A5C42D8715(), 0);
			if (((unk_0x39CF954DC56E2A1F(iVar0, iVar1) || (unk_0x8F474E419F56E48D(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x8F474E419F56E48D(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x8F474E419F56E48D(iVar0) == -1693015116 && iVar1 == 0) && func_355(iVar0, 10)) && unk_0x22D95AF01E737CA1(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_352(unk_0xD4E735F4B6A956AC()))
	{
		return 0;
	}
	return 1;
}

int func_352(int iParam0)
{
	if (iParam0 != func_354())
	{
		if (func_353(iParam0, 1, 1))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
		else if ((Global_1312857 && iParam0 == unk_0xD4E735F4B6A956AC()) && func_353(iParam0, 1, 0))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
	}
	return 0;
}

int func_353(int iParam0, bool bParam1, bool bParam2)
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

int func_354()
{
	return -1;
}

int func_355(int iParam0, int iParam1)
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

int func_356(int iParam0, int iParam1)
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

var func_357()
{
	return Global_2448386.f_16;
}

bool func_358(int iParam0)
{
	return iParam0 == 51;
}

var func_359()
{
	return Global_2448386.f_15;
}

bool func_360()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

void func_361(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		func_303(uParam0, 0, 0);
	}
	if (func_61(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x281590680327CDEA(iParam1))
		{
			iVar0 = unk_0xA2EA4BA455370F3C(iParam1);
			if (!unk_0x5D7DFE2058701942(iVar0, 0))
			{
				if (unk_0xC085874FDE5FE33A(iVar0))
				{
					if (!func_362())
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
	unk_0xB9514DB95C310944(0);
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

bool func_362()
{
	return func_363(unk_0xD4E735F4B6A956AC());
}

int func_363(int iParam0)
{
	if (unk_0x8F474E419F56E48D(unk_0xEE978C39384D834F(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_364(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_368(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_367(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xFD34717937104F1C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_367(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xFD34717937104F1C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_368(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xFD34717937104F1C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_347(uParam0))
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
						if (!func_368(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xFD34717937104F1C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_367(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_367(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xFD34717937104F1C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_368(bParam1, bParam2, bParam3))
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
					if (!func_368(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_367(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_367(bParam1, bParam2, bParam3) || unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1))
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
				else if (!func_368(bParam1, bParam2, bParam3))
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
						if (func_366(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_365(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 1) || func_365(bParam1, bParam2, bParam3))
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
					else if (func_366(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_347(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_351(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_370();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_365(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_351(bParam0, bParam1, bParam2))
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

int func_366(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_351(bParam0, bParam1, bParam2))
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
				unk_0xB9514DB95C310944(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_367(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_351(bParam0, bParam1, bParam2))
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

int func_368(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_351(bParam0, bParam1, bParam2))
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
				unk_0xB9514DB95C310944(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)
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

void func_370()
{
	unk_0x2BCFB39E86340DAA(&Global_2384, 4);
}

void func_371()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (!bLocal_293)
	{
		if (func_14(Local_535))
		{
			if (unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), Local_535))
			{
				if (!unk_0x54F6F5A823224519(Local_535, 373.2886f, -580.871f, 37.23948f, 359.6602f, -605.2207f, 29.13826f, 20f, 0, true, 0) && (unk_0x54F6F5A823224519(Local_535, vLocal_547, vLocal_548, fLocal_339, 0, true, 0) || unk_0x54F6F5A823224519(Local_535, 370.7054f, -596.1437f, 45.43948f, 361.3834f, -600.7f, 33.23949f, 6f, 0, true, 0)))
				{
					func_299(2);
					if (iLocal_292)
					{
						func_300(1);
						func_303(&uLocal_20, 0, 0);
						iLocal_292 = 0;
						iLocal_319 = 1;
						fLocal_344 = 1f;
						unk_0xF748D06B9A97191E(0);
					}
					if (iLocal_313)
					{
						func_373(0, 795);
						iLocal_313 = 0;
					}
					vVar0 = { unk_0xE2BBD32891C18569(Local_535, true) };
					fVar1 = 0.2f;
					fVar2 = 0.9f;
					fVar3 = 2f;
					if (vVar0.z > 35.25f)
					{
						if (fLocal_344 > fVar1)
						{
							fLocal_344 = (fLocal_344 - (fVar2 * timestep()));
							if (fLocal_344 < fVar1)
							{
								fLocal_344 = fVar1;
							}
							unk_0xDED73F11B8CB95B1(fLocal_344);
						}
					}
					else if (vVar0.z < 35f)
					{
						if (fLocal_344 < 1f)
						{
							fLocal_344 = (fLocal_344 + (fVar3 * timestep()));
							if (fLocal_344 > 1f)
							{
								fLocal_344 = 1f;
							}
							unk_0xDED73F11B8CB95B1(fLocal_344);
						}
					}
					if (vVar0.z < 40f)
					{
						if (unk_0x678F978B0FAD24D2(Local_535))
						{
							if (!iLocal_292)
							{
								func_300(0);
								unk_0xB6B24463498F5F41();
								iLocal_292 = 1;
							}
						}
					}
				}
				else if (!iLocal_292)
				{
					func_300(0);
					unk_0xB6B24463498F5F41();
					iLocal_292 = 1;
				}
			}
			else if (!iLocal_292)
			{
				func_300(0);
				unk_0xB6B24463498F5F41();
				iLocal_319 = 0;
				iLocal_292 = 1;
			}
		}
		else if (!iLocal_292)
		{
			func_300(0);
			unk_0xB6B24463498F5F41();
			iLocal_319 = 0;
			iLocal_292 = 1;
		}
	}
	func_372();
}

void func_372()
{
	vector3 vVar0;
	
	if (iLocal_319)
	{
		if (func_14(Local_535))
		{
			vVar0 = { unk_0xE2BBD32891C18569(Local_535, false) };
			if (vVar0.z < 35f)
			{
				if (unk_0xFD2A0C4CDE18D862(Local_535) || unk_0x678F978B0FAD24D2(Local_535))
				{
					unk_0x6020229E34827A69(-1, "CAR_DROP_WRAP", Local_535, 0, 0, 0);
					iLocal_319 = 0;
				}
			}
		}
	}
}

void func_373(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_56194 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (iParam1 == -1 || Global_68277[iVar0 /*9*/] == iParam1)
		{
			if (Global_68277[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_68277[iVar0 /*9*/].f_6 = iParam0;
				Global_68277[iVar0 /*9*/].f_7 = 1;
				Global_68277[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_374(float fParam0)
{
	if (func_21(Local_534))
	{
		if (!unk_0x411C28019DEA5CEF(Local_534, "rcmnigel2", "die_horn", 3))
		{
			unk_0x6D68030C791111E0("rcmnigel2");
			if (unk_0x39C2D9AB77873F84("rcmnigel2"))
			{
				unk_0x3F01127ECD227890(Local_534, "rcmnigel2", "die_horn", fParam0, -8f, -1, 2, 0.9f, 0, 0, 0);
			}
		}
	}
}

void func_375()
{
	vector3 vVar0;
	
	vVar0 = { 392.9445f, -619.5032f, 27.9764f };
	if (func_315(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vVar0, 100f))
	{
		if (!func_376())
		{
			unk_0x9D7A6D81C3BE2AAE(&vLocal_543, 8);
			func_44();
			iLocal_316 = 1;
		}
	}
	else if (iLocal_316)
	{
		if (!func_315(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vVar0, 120f))
		{
			if (unk_0x7974D616EF03E483())
			{
				unk_0xFB35B0BAD6F5AD8F();
				iLocal_316 = 0;
			}
		}
		else
		{
			func_44();
		}
	}
	if (iLocal_316)
	{
		if (func_376())
		{
			unk_0xFB35B0BAD6F5AD8F();
			iLocal_316 = 0;
		}
	}
}

bool func_376()
{
	return Global_90636;
}

void func_377()
{
	unk_0x60C495B6942EC817(0.3f);
	switch (iLocal_274)
	{
		case 0:
			if (func_21(Local_534) && func_14(Local_536))
			{
				unk_0x1F4E5EFBFE503FB3(Local_534, true);
				unk_0xB0D7019224A3A443(Local_534, 237, true);
				unk_0xA95C9BC9CAF4C02D(Local_536, "NIGEL_02_CHASE_CAR_MG", 0);
			}
			if (func_21(Local_532))
			{
				unk_0x1F4E5EFBFE503FB3(Local_532, true);
			}
			if (func_21(Local_533))
			{
				unk_0x1F4E5EFBFE503FB3(Local_533, true);
			}
			if (func_14(Local_535))
			{
				if (!iLocal_313)
				{
					func_373(Local_535, 795);
					iLocal_313 = 1;
				}
				unk_0x49A185A881A095D4(Local_535, 1);
				iLocal_318 = 1;
			}
			unk_0xE061C3261E51F663(0f, 15f, 1);
			func_428(fLocal_343, vLocal_549);
			unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 170, true);
			unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
			iLocal_274 = 1;
			break;
		
		case 1:
			func_299(0);
			func_427();
			iLocal_317 = 0;
			if (unk_0xDC5D81351D6A4DDB(Local_536))
			{
				fLocal_340 = vdist(vLocal_549, unk_0xE2BBD32891C18569(Local_536, false));
			}
			if (func_21(Local_534))
			{
				if (func_14(Local_536))
				{
					if (!bLocal_298)
					{
						unk_0xB0D7019224A3A443(Local_534, 237, true);
						if (unk_0xB10F7FE89663CB5B(Local_534, Local_536) && unk_0xB0D49A1F9F054602(Local_536, -1, 0) == Local_534)
						{
							if (!unk_0xB2C707E9E3A0E44D(Local_536))
							{
								unk_0xB29E08C7AB729BAD(Local_536, false);
								unk_0x4ABEB615D66A01A9(Local_536, iLocal_333, sLocal_359, 1);
								unk_0x5509A0235DC4EED7(Local_536, 1);
								fLocal_341 = unk_0x43471DC9A73EAB3E(Local_536);
								fLocal_343 = 0.85f;
								unk_0xD136D67FFCAC2A13(Local_536, fLocal_343);
								func_426();
								func_404(Local_536, fLocal_343);
								func_400();
								if (!unk_0x2F8EAF18929E1E59("NIGEL_02_CHASE"))
								{
									if (!func_48() && bLocal_276)
									{
										unk_0x8969D02DEDC106D2("NIGEL_02_CHASE");
									}
								}
								bLocal_298 = true;
							}
						}
					}
					else if (unk_0xB2C707E9E3A0E44D(Local_536))
					{
						fLocal_341 = unk_0x43471DC9A73EAB3E(Local_536);
						func_391(&fLocal_343, fLocal_341);
						unk_0xD136D67FFCAC2A13(Local_536, fLocal_343);
						func_426();
						func_404(Local_536, fLocal_343);
						func_400();
						func_390();
						func_389();
						func_13(0, 1);
						if (fLocal_341 > 82000f && fLocal_341 < 105000f)
						{
							func_388();
						}
						if (unk_0x2F78D19B3446544E(Local_536) < 800f)
						{
							unk_0x70B1045E099298C1(Local_536, 800f);
						}
					}
					else if (!bLocal_300)
					{
						func_67(0, 1);
						func_387();
						unk_0xD2BB05DE6C584878(iLocal_333, sLocal_359);
						unk_0x3C50F1F859BA232B(Local_536, 0);
						if (unk_0x2F8EAF18929E1E59("NIGEL_02_CHASE"))
						{
							unk_0x5AD7D03C214BDA88("NIGEL_02_CHASE");
						}
						func_292(0);
						func_386();
						if (fLocal_341 < 124136f)
						{
							fLocal_341 = (124136f + 1000f);
						}
						func_389();
						bLocal_300 = true;
					}
					else
					{
						func_374(1090519040);
					}
				}
				if (iLocal_292)
				{
					func_342(&uLocal_20, Local_534, 0, 0, 1, 1, 1);
				}
				func_385();
				func_384();
				func_383(fLocal_341);
				func_380(vLocal_549);
				func_379();
				func_316();
				func_428(fLocal_343, vLocal_549);
				if ((func_14(Local_535) && func_21(Local_533)) && func_21(Local_532))
				{
					if (unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), Local_535))
					{
						if (func_341("NIGEL2_03", 0, 0))
						{
							unk_0xB9509A39A48644C4("NIGEL2_03");
						}
						if (func_341("NIGEL2_04", 0, 0))
						{
							unk_0xB9509A39A48644C4("NIGEL2_04");
						}
						func_94(&(Local_535.f_2));
						if (iLocal_318)
						{
							unk_0x49A185A881A095D4(Local_535, 0);
							iLocal_318 = 0;
						}
						if (!unk_0xB10F7FE89663CB5B(Local_533, Local_535) || !unk_0xB10F7FE89663CB5B(Local_532, Local_535))
						{
							func_94(&(Local_534.f_2));
							if (func_341("NIGEL2_04", 0, 0))
							{
								unk_0xB9509A39A48644C4("NIGEL2_04");
							}
						}
						else
						{
							if (!iLocal_299)
							{
								if (unk_0xB0D49A1F9F054602(Local_535, -1, 0) == unk_0xA19140A5C42D8715())
								{
									unk_0xC19EDC1D7179164C(Local_535, true, false, 0);
									iLocal_299 = 1;
								}
							}
							func_299(1);
							if (!bLocal_295)
							{
								func_328("NIGEL2_01", 7500, 1);
								bLocal_295 = true;
							}
							iLocal_294 = 0;
							if (func_341("NIGEL2_05", 0, 0))
							{
								unk_0xB9509A39A48644C4("NIGEL2_05");
							}
							if (func_341("NIGEL2_08", 0, 0))
							{
								unk_0xB9509A39A48644C4("NIGEL2_08");
							}
							if (func_341("NIGEL2_09", 0, 0))
							{
								unk_0xB9509A39A48644C4("NIGEL2_09");
							}
							func_335(&iLocal_317);
							if (!unk_0xCE3CB618AFE55EFB(Local_534.f_2))
							{
								Local_534.f_2 = func_334(Local_534, 1, 0, 5);
							}
							else
							{
								if (unk_0x5D7DFE2058701942(Local_534, 0))
								{
									unk_0x575CF00E129E0CE1(Local_534.f_2, 1f);
								}
								func_333(Local_534.f_2, Local_534, 200f, 0.7f, iLocal_317);
							}
							if (bLocal_298)
							{
								if (bLocal_300)
								{
									if (fLocal_340 < 25f)
									{
										iLocal_274 = 2;
									}
								}
							}
						}
						func_378();
					}
					else
					{
						if (iLocal_318)
						{
							unk_0x49A185A881A095D4(Local_535, 1);
							iLocal_318 = 1;
						}
						unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 170, false);
						func_94(&(Local_534.f_2));
						if (!unk_0xCE3CB618AFE55EFB(Local_535.f_2))
						{
							Local_535.f_2 = func_331(Local_535, 1, 7);
						}
						if (!bLocal_295)
						{
							if (!iLocal_283[0])
							{
								if (func_39())
								{
									func_329();
								}
								if (func_318(&uLocal_367, "NIG2AUD", "NIG2_DAWDM", 7, 0, 0, 0))
								{
									iLocal_283[0] = 1;
								}
							}
							else if (!iLocal_290)
							{
								if (!func_39())
								{
									func_328("NIGEL2_03", 7500, 1);
									iLocal_290 = 1;
								}
							}
							else if (!iLocal_283[1])
							{
								if ((!func_39() && unk_0xB10F7FE89663CB5B(Local_533, Local_535)) && unk_0xB10F7FE89663CB5B(Local_532, Local_535))
								{
									if (func_318(&uLocal_367, "NIG2AUD", "NIG2_SPOTSP", 8, 0, 0, 0))
									{
										iLocal_283[1] = 1;
									}
								}
							}
						}
						else
						{
							if (!iLocal_294)
							{
								if (func_39())
								{
									func_329();
								}
								iLocal_294 = 1;
							}
							if (!iLocal_289)
							{
								func_328("NIGEL2_04", 7500, 1);
								iLocal_326 = unk_0xFD34717937104F1C();
								iLocal_289 = 1;
							}
							else if (!func_39())
							{
								if (fLocal_342 < 20f)
								{
									if (unk_0xFD34717937104F1C() - iLocal_326) > unk_0x22C775856F4633CA(4500, 6500)
									{
										if (!unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), Local_535, 0))
										{
											if (unk_0x22C775856F4633CA(0, 11) > 5)
											{
												if (func_318(&uLocal_367, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
												{
												}
											}
											else if (func_318(&uLocal_367, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
											{
											}
										}
									}
								}
							}
							else
							{
								iLocal_326 = unk_0xFD34717937104F1C();
							}
						}
						func_317();
					}
				}
			}
			func_371();
			func_305();
			break;
		
		case 2:
			if (!bLocal_300)
			{
				func_67(0, 1);
				func_387();
				if (func_11(Local_536))
				{
					if (unk_0xB2C707E9E3A0E44D(Local_536))
					{
						unk_0xF648DB179A6E71BF(Local_536);
					}
					unk_0xB29E08C7AB729BAD(Local_536, true);
				}
				unk_0xD2BB05DE6C584878(iLocal_333, sLocal_359);
				func_292(0);
				if (unk_0x2F8EAF18929E1E59("NIGEL_02_CHASE"))
				{
					unk_0x5AD7D03C214BDA88("NIGEL_02_CHASE");
				}
				if (fLocal_341 < 124136f)
				{
					fLocal_341 = (124136f + 1000f);
				}
				func_389();
				func_386();
				bLocal_300 = true;
			}
			if (func_11(Local_534))
			{
				if (iLocal_292)
				{
					func_342(&uLocal_20, Local_534, 0, 0, 1, 1, 1);
				}
			}
			func_371();
			if (iLocal_313)
			{
				func_373(0, 795);
				iLocal_313 = 0;
			}
			unk_0x90E641761C692B84(0);
			if (bLocal_305)
			{
				if (unk_0x059A39F1D399060B(iLocal_352))
				{
					unk_0x82E95CCADC55C11E(iLocal_352, 0);
				}
			}
			unk_0x2220B21A4CC075AC();
			func_291(2);
			break;
	}
}

void func_378()
{
	float fVar0;
	
	if (!bLocal_305)
	{
		fVar0 = 115225f;
		if (fLocal_341 > fVar0)
		{
			unk_0x788BCD68EF8935BE();
			if (unk_0x5488D97A1366CE04())
			{
				if (!unk_0x059A39F1D399060B(iLocal_352))
				{
					if (unk_0xEAA5CEF8875FEEED(Local_535) > 8f)
					{
						if (unk_0x54F6F5A823224519(Local_535, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, true, 0))
						{
							iLocal_352 = unk_0x8E3AC3DF6783369A("scr_rcn2_debris_trail", Local_535, 0f, -1.5f, -0.4f, 0f, 0f, 0f, 0.3f, 0, 0, 0);
							bLocal_305 = true;
						}
					}
				}
			}
		}
	}
	else if (unk_0x059A39F1D399060B(iLocal_352))
	{
		if (unk_0xEAA5CEF8875FEEED(Local_535) < 4f || !unk_0x54F6F5A823224519(Local_535, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, true, 0))
		{
			unk_0x82E95CCADC55C11E(iLocal_352, 0);
			bLocal_305 = false;
		}
	}
}

void func_379()
{
	float fVar0;
	
	fVar0 = 115225f;
	if (!iLocal_310)
	{
		if (!iLocal_307)
		{
			if (fLocal_341 > (fVar0 - 5000f))
			{
				unk_0x788BCD68EF8935BE();
				iLocal_307 = 1;
			}
		}
		else
		{
			if (fLocal_341 > fVar0)
			{
				if (unk_0x5488D97A1366CE04())
				{
					if (!unk_0x059A39F1D399060B(iLocal_351))
					{
						iLocal_351 = unk_0xA711E33651B4D849("scr_rcn2_ceiling_debris", 325f, -589f, 45f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						iLocal_310 = 1;
					}
				}
			}
			if (!unk_0x5488D97A1366CE04())
			{
				unk_0x788BCD68EF8935BE();
			}
		}
	}
}

void func_380(vector3 vParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	bVar0 = false;
	iVar4 = 250;
	if (func_11(Local_534))
	{
		iVar5 = 0;
		while (iVar5 <= 3)
		{
			if (Local_539[iVar5 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_341 >= 500f)
					{
						switch (iVar5)
						{
							case 0:
								iVar1 = iLocal_345;
								vVar2 = { -1262.53f, -731.25f, 21.88f };
								fVar3 = 47.38f;
								break;
							
							case 1:
								iVar1 = iLocal_348;
								vVar2 = { -1300.17f, -704.1f, 24.61f };
								fVar3 = -87.53f;
								break;
							
							case 2:
								iVar1 = iLocal_348;
								vVar2 = { -1298.33f, -704.16f, 24.53f };
								fVar3 = 83.96f;
								break;
							
							case 3:
								iVar1 = iLocal_348;
								vVar2 = { -1209.92f, -817.51f, 15.62f };
								fVar3 = 15.06f;
								break;
						}
						unk_0xCACEBBBEAD8F262E(iVar1);
						if (unk_0x7FC99CCC73354033(iVar1))
						{
							Local_539[iVar5 /*2*/] = unk_0x35C6E06B120EB2E3(26, iVar1, vVar2, fVar3, 1, true);
							if (func_21(Local_539[iVar5 /*2*/]))
							{
								Local_539[iVar5 /*2*/].f_1 = 1;
								unk_0x8695E04AA104690A(Local_539[iVar5 /*2*/], 0);
								unk_0xD738221C247C8B71(Local_539[iVar5 /*2*/], true);
							}
							if (iVar5 != 0)
							{
								unk_0xA5DE74AE39867B03(iVar1);
							}
							bVar0 = true;
						}
					}
				}
			}
			else if ((unk_0xFD34717937104F1C() - iLocal_328) > iVar4)
			{
				if (func_21(Local_539[iVar5 /*2*/]))
				{
					switch (Local_539[iVar5 /*2*/].f_1)
					{
						case 1:
							if (func_382(Local_534, Local_539[iVar5 /*2*/], 150f, 1))
							{
								if (iVar5 == 0 || iVar5 == 3)
								{
									unk_0x1701009E85B15DA4(Local_539[iVar5 /*2*/], 1, 1);
									unk_0xD738221C247C8B71(Local_539[iVar5 /*2*/], false);
									Local_539[iVar5 /*2*/].f_1 = 4;
								}
								else if (iVar5 == 1)
								{
									if (func_21(Local_539[iVar5 + 1 /*2*/]))
									{
										unk_0xFFD6DDD87BFCDC62(Local_539[iVar5 /*2*/], Local_539[iVar5 + 1 /*2*/], 17, 0f, 0f, 0f, 0f, 0f);
										unk_0xD738221C247C8B71(Local_539[iVar5 /*2*/], false);
										Local_539[iVar5 /*2*/].f_1 = 4;
									}
								}
								else if (iVar5 == 2)
								{
									if (func_21(Local_539[(iVar5 - 1) /*2*/]))
									{
										unk_0xFFD6DDD87BFCDC62(Local_539[iVar5 /*2*/], Local_539[(iVar5 - 1) /*2*/], 16, 0f, 0f, 0f, 0f, 0f);
										unk_0xD738221C247C8B71(Local_539[iVar5 /*2*/], false);
										Local_539[iVar5 /*2*/].f_1 = 4;
									}
								}
							}
							break;
						
						case 4:
							if (func_382(Local_534, Local_539[iVar5 /*2*/], 3f, 1))
							{
								unk_0x9568B1B58F78FF36(Local_539[iVar5 /*2*/]);
								unk_0x2F89329397A277BC(&iVar6);
								unk_0x0177431263151C4E(0, Local_534, -1);
								unk_0x301F42EEE3C40328(iVar6);
								unk_0xE1072FA2FECBAD96(Local_539[iVar5 /*2*/], iVar6);
								unk_0x3A95A0A3221D4208(&iVar6);
								Local_539[iVar5 /*2*/].f_1 = 6;
							}
							if (!func_381(Local_539[iVar5 /*2*/], vParam0, 300f))
							{
								func_55(&(Local_539[iVar5 /*2*/]), 0);
								Local_539[iVar5 /*2*/].f_1 = 7;
							}
							break;
						
						case 6:
							if (!func_381(Local_539[iVar5 /*2*/], vParam0, 150f))
							{
								func_55(&(Local_539[iVar5 /*2*/]), 0);
								Local_539[iVar5 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 <= 8)
		{
			if (Local_538[iVar5 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_341 >= 111161f && iLocal_338 > 1)
					{
						if (unk_0x893915B076B1DDF7(iLocal_337) && unk_0x2A8A410BC14B59BC(iLocal_337))
						{
							switch (iVar5)
							{
								case 0:
									iVar1 = iLocal_347;
									vVar2 = { 309.34f, -596.87f, 43.31f };
									fVar3 = 14.8f;
									break;
								
								case 1:
									iVar1 = iLocal_347;
									vVar2 = { 309.52f, -594.85f, 43.31f };
									fVar3 = 153.4102f;
									break;
								
								case 2:
									iVar1 = iLocal_347;
									vVar2 = { 316f, -588.77f, 42.3f };
									fVar3 = 207.556f;
									break;
								
								case 3:
									iVar1 = iLocal_346;
									vVar2 = { 317.1715f, -590.084f, 42.302f };
									fVar3 = 60.6f;
									break;
								
								case 4:
									iVar1 = iLocal_347;
									vVar2 = { 332.54f, -588.5f, 43.3f };
									fVar3 = 70.64f;
									break;
								
								case 5:
									iVar1 = iLocal_347;
									vVar2 = { 331.68f, -578.6f, 43.32f };
									fVar3 = 234.5983f;
									break;
								
								case 6:
									iVar1 = iLocal_347;
									vVar2 = { 362.56f, -589.32f, 43.33f };
									fVar3 = -21.77f;
									break;
								
								case 7:
									iVar1 = iLocal_347;
									vVar2 = { 363.3849f, -587.8508f, 42.3275f };
									fVar3 = 161.2689f;
									break;
								
								case 8:
									iVar1 = iLocal_346;
									vVar2 = { 358.5161f, -586.02f, 42.3275f };
									fVar3 = 67.7037f;
									break;
							}
							unk_0xCACEBBBEAD8F262E(iVar1);
							if (unk_0x7FC99CCC73354033(iVar1))
							{
								Local_538[iVar5 /*2*/] = unk_0x35C6E06B120EB2E3(26, iVar1, vVar2, fVar3, 1, true);
								if (func_21(Local_538[iVar5 /*2*/]))
								{
									Local_538[iVar5 /*2*/].f_1 = 4;
									unk_0x1F4E5EFBFE503FB3(Local_538[iVar5 /*2*/], true);
									unk_0xC2C4AE9DB4A0BEF3(Local_538[iVar5 /*2*/], 4, true);
									unk_0xD738221C247C8B71(Local_538[iVar5 /*2*/], true);
									switch (iVar5)
									{
										case 0:
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 0, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 2, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 3, 0, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 4, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 5, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 8, 0, 0, 0);
											break;
										
										case 1:
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 0, 1, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 2, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 3, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 4, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 5, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[iVar5 /*2*/], 8, 0, 0, 0);
											break;
										
										case 2:
											unk_0x72A0FF8C49CFFC0D(Local_538[2 /*2*/], 0, 1, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[2 /*2*/], 2, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[2 /*2*/], 3, 0, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[2 /*2*/], 4, 0, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[2 /*2*/], 5, 0, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[2 /*2*/], 8, 0, 0, 0);
											break;
										
										case 3:
											unk_0x72A0FF8C49CFFC0D(Local_538[3 /*2*/], 0, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[3 /*2*/], 3, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[3 /*2*/], 4, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[3 /*2*/], 8, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[3 /*2*/], 11, 0, 0, 0);
											break;
										
										case 4:
											unk_0x72A0FF8C49CFFC0D(Local_538[4 /*2*/], 0, 1, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[4 /*2*/], 2, 1, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[4 /*2*/], 3, 1, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[4 /*2*/], 4, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[4 /*2*/], 5, 1, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[4 /*2*/], 8, 0, 0, 0);
											break;
										
										case 5:
											unk_0x72A0FF8C49CFFC0D(Local_538[5 /*2*/], 0, 1, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[5 /*2*/], 2, 1, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[5 /*2*/], 3, 0, 2, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[5 /*2*/], 4, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[5 /*2*/], 5, 0, 2, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[5 /*2*/], 8, 0, 0, 0);
											break;
										
										case 6:
											unk_0x72A0FF8C49CFFC0D(Local_538[6 /*2*/], 0, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[6 /*2*/], 2, 0, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[6 /*2*/], 3, 1, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[6 /*2*/], 4, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[6 /*2*/], 5, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[6 /*2*/], 8, 0, 0, 0);
											break;
										
										case 7:
											unk_0x72A0FF8C49CFFC0D(Local_538[7 /*2*/], 0, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[7 /*2*/], 2, 1, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[7 /*2*/], 3, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[7 /*2*/], 4, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[7 /*2*/], 5, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 8:
											unk_0x72A0FF8C49CFFC0D(Local_538[8 /*2*/], 0, 1, 1, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[8 /*2*/], 3, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[8 /*2*/], 4, 1, 2, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[8 /*2*/], 8, 0, 0, 0);
											unk_0x72A0FF8C49CFFC0D(Local_538[8 /*2*/], 11, 1, 2, 0);
											break;
										}
								}
								unk_0xA5DE74AE39867B03(iVar1);
								bVar0 = true;
							}
						}
					}
				}
			}
			else if ((unk_0xFD34717937104F1C() - iLocal_328) > iVar4)
			{
				if (func_21(Local_538[iVar5 /*2*/]))
				{
					switch (Local_538[iVar5 /*2*/].f_1)
					{
						case 4:
							if (func_381(Local_538[iVar5 /*2*/], vParam0, 5f) || func_382(Local_534, Local_538[iVar5 /*2*/], 8f, 1))
							{
								unk_0xCE889E9ADEDDE843(Local_538[iVar5 /*2*/], -1);
								unk_0x1F4E5EFBFE503FB3(Local_538[iVar5 /*2*/], true);
								Local_538[iVar5 /*2*/].f_1 = 6;
							}
							break;
						
						case 5:
							break;
						
						case 6:
							if ((unk_0x41CA0CDBE31A440F(unk_0xA19140A5C42D8715()) || unk_0x669ABFB25D991447(unk_0xD4E735F4B6A956AC(), Local_538[iVar5 /*2*/])) || unk_0x7591AFB11E7EDDA0(unk_0xD4E735F4B6A956AC(), Local_538[iVar5 /*2*/]))
							{
								if (unk_0xF9D4EF1338E38AFB(Local_538[iVar5 /*2*/], 474215631) != 1 && unk_0xF9D4EF1338E38AFB(Local_538[iVar5 /*2*/], 474215631) != 0)
								{
									unk_0xCE889E9ADEDDE843(Local_538[iVar5 /*2*/], -1);
								}
							}
							else if (!func_381(Local_538[iVar5 /*2*/], vParam0, 250f))
							{
								func_55(&(Local_538[iVar5 /*2*/]), 0);
								Local_538[iVar5 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar5++;
		}
	}
	if ((unk_0xFD34717937104F1C() - iLocal_328) > iVar4)
	{
		iLocal_328 = unk_0xFD34717937104F1C();
	}
}

bool func_381(int iParam0, vector3 vParam1, float fParam2)
{
	return vdist2(unk_0xE2BBD32891C18569(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

bool func_382(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return vdist2(unk_0xE2BBD32891C18569(iParam0, bParam3), unk_0xE2BBD32891C18569(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_383(float fParam0)
{
	int iVar0;
	
	switch (iLocal_334)
	{
		case 0:
			if (fParam0 > 5000f)
			{
				unk_0xFF54548CCE498035(-1332.351f, -763.4576f, 10f, -1229.142f, -654.3546f, 42f);
				iLocal_334++;
			}
			break;
		
		case 1:
			if (fParam0 > 10000f)
			{
				unk_0xFF54548CCE498035(-1274.148f, -842.6357f, 10f, -1139.836f, -703.7437f, 42f);
				iLocal_334++;
			}
			break;
		
		case 2:
			if (fParam0 > 40000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0xE70AC26DFC59863A(iLocal_358[iVar0], 0);
					iVar0++;
				}
				unk_0xE537EBD7B736A4E2(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, false, 1);
				iLocal_334++;
			}
			break;
		
		case 3:
			if (fParam0 > 54000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0xE70AC26DFC59863A(iLocal_358[iVar0], 0);
					iVar0++;
				}
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -513.4877f, -598.4955f, 30.89824f, -695.001f, -593.8384f, 19.30782f, 60f, 0, true, 0) || unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -518.4041f, -622.8293f, 32.30106f, -608.4054f, -622.3588f, 26.78756f, 11f, 0, true, 0))
				{
					unk_0x982F1A2D170EDD0F(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 0, 0, 0, 0, 0);
					unk_0x3521B10FB737CE36(-497.2258f, -710.6161f, 32.22013f, 5.85f, 0);
					unk_0x3521B10FB737CE36(-498.1823f, -719.3134f, 32.21197f, 2.15f, 0);
					unk_0x3521B10FB737CE36(-497.9032f, -724.9741f, 32.21197f, 3.8f, 0);
					unk_0x3521B10FB737CE36(-499.5668f, -731.9666f, 32.21197f, 7.3f, 0);
				}
				unk_0x2E989BFBA0D3CC0E(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, false, 0);
				unk_0xFF54548CCE498035(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f);
				iLocal_358[0] = unk_0xF66A39BBE7B3C278(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				iLocal_358[1] = unk_0xF66A39BBE7B3C278(-489.7285f, -680.7455f, 22.0126f, -497.1978f, -690.007f, 41.80794f, 0, 1, 1, 1);
				iLocal_334++;
			}
			break;
		
		case 4:
			if (fParam0 > 61000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0xE70AC26DFC59863A(iLocal_358[iVar0], 0);
					iVar0++;
				}
				unk_0xE724181C8BE2BA29(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
				unk_0xFF54548CCE498035(-508.7908f, -764.6354f, 28f, -488.0437f, -702.8006f, 38f);
				iLocal_358[0] = unk_0xF66A39BBE7B3C278(-503.0949f, -754.9647f, 29f, -494.7944f, -730.1296f, 37f, 0, 1, 1, 1);
				iLocal_334++;
			}
			break;
		
		case 5:
			if (fParam0 > 65000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0xE70AC26DFC59863A(iLocal_358[iVar0], 0);
					iVar0++;
				}
				unk_0x8C15CE28B371C038(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
				unk_0x2E989BFBA0D3CC0E(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, false, 0);
				unk_0xFF54548CCE498035(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f);
				iLocal_358[0] = unk_0xF66A39BBE7B3C278(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				iLocal_334++;
			}
			break;
		
		case 6:
			if (fParam0 > 75000f)
			{
				unk_0x8C15CE28B371C038(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
				iLocal_358[1] = unk_0xF66A39BBE7B3C278(291.5848f, -588.8806f, 37f, 303.7603f, -579.5882f, 48f, 0, 1, 1, 1);
				iLocal_334++;
			}
			break;
		
		case 7:
			if (fParam0 > 114500f)
			{
				func_292(1);
				iLocal_334++;
			}
			break;
	}
}

void func_384()
{
	if (!iLocal_296)
	{
		if (fLocal_341 > (114436f - 4000f))
		{
			unk_0x61346376C1469A0E("NIGEL_02_CRASH_A", false, -1);
			unk_0x61346376C1469A0E("NIGEL_02_CRASH_B", false, -1);
			unk_0x61346376C1469A0E("PANIC_WALLA_INTERIOR", false, -1);
			if ((unk_0x61346376C1469A0E("NIGEL_02_CRASH_A", false, -1) && unk_0x61346376C1469A0E("NIGEL_02_CRASH_B", false, -1)) && unk_0x61346376C1469A0E("PANIC_WALLA_INTERIOR", false, -1))
			{
				iLocal_296 = 1;
			}
		}
	}
	else
	{
		switch (iLocal_322)
		{
			case 0:
				if (fLocal_341 >= 114436f)
				{
					unk_0x7A15C6C664F7334E(-1, "DOOR_CRASH", 299.5664f, -584.6757f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_322++;
				}
				break;
			
			case 1:
				if (fLocal_341 >= 114936f)
				{
					unk_0x7A15C6C664F7334E(-1, "SCREAMS", 310.5149f, -595.4158f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					unk_0xC782AAA9C2E3FF0C();
					unk_0x7A15C6C664F7334E(-1, "PANIC_WALLA", 316.4345f, -589.3902f, 42.2919f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_322++;
				}
				break;
			
			case 2:
				if (fLocal_341 >= 117166f)
				{
					unk_0x7A15C6C664F7334E(-1, "WALL_CRASH", 325.66f, -589.01f, 42.3f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_322++;
				}
				break;
			
			case 3:
				if (fLocal_341 >= 117736f)
				{
					unk_0x7A15C6C664F7334E(-1, "WALL_CRASH", 330.13f, -585.72f, 42.42f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_322++;
				}
				break;
			
			case 4:
				if (fLocal_341 >= 118186f)
				{
					unk_0x7A15C6C664F7334E(-1, "SCREAMS", 331.7845f, -578.5184f, 42.3167f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					unk_0x7A15C6C664F7334E(-1, "PANIC_WALLA", 354.6585f, -584.2177f, 42.315f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_322++;
				}
				break;
			
			case 5:
				if (fLocal_341 >= 118496f)
				{
					unk_0x7A15C6C664F7334E(-1, "WALL_CRASH", 337.89f, -582.38f, 42.33f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_322++;
				}
				break;
			
			case 6:
				if (fLocal_341 >= 120986f)
				{
					unk_0x7A15C6C664F7334E(-1, "WINDOW_CRASH", 364.64f, -595.43f, 42.54f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_322++;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_385()
{
	if (!func_48() && bLocal_276)
	{
		if (iLocal_542 == 0)
		{
			if (fLocal_341 >= 99000f)
			{
				if (func_315(vLocal_549, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (!unk_0xDC5D81351D6A4DDB(Local_349))
					{
						unk_0xCACEBBBEAD8F262E(Local_349.f_7);
						if (unk_0x7FC99CCC73354033(Local_349.f_7))
						{
							Local_349 = unk_0xFCFC8CC5FF74580D(Local_349.f_7, Local_349.f_1, true, true, false);
							if (func_11(Local_349))
							{
								unk_0x76D3D51F5F66367F(Local_349, Local_349.f_4, 2, 1);
								unk_0xE8B3104D1CB25CDC(Local_349, Local_349.f_1, 0, 0, 1);
								unk_0xB29E08C7AB729BAD(Local_349, true);
								unk_0xA5DE74AE39867B03(Local_349.f_7);
								iLocal_542 = 1;
							}
						}
					}
				}
			}
		}
		else if (iLocal_542 == 1)
		{
			if (fLocal_341 >= 114436f)
			{
				if (unk_0xDC5D81351D6A4DDB(Local_349))
				{
					func_54(&Local_349);
					iLocal_542 = 2;
				}
			}
		}
		else if (iLocal_542 == 2)
		{
		}
		if (iLocal_324 == 0)
		{
			if (fLocal_341 >= 99000f)
			{
				if (func_315(vLocal_549, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (iLocal_338 > 3)
					{
						uLocal_353 = unk_0x389F96269D4F1FD8(299.4302f, -584.8925f, 42.2629f, 100f, "DES_hospitaldoors");
						if (unk_0xCD7C9B7A8F43BA15(uLocal_353))
						{
							unk_0x317CA41ED2351630(uLocal_353, 11);
							iLocal_324++;
						}
					}
				}
			}
		}
		else if (iLocal_324 == 1)
		{
			if (unk_0xCD7C9B7A8F43BA15(uLocal_353))
			{
				if (unk_0xA3DC7C2803970902(uLocal_353) == 5)
				{
					if (fLocal_341 >= 114436f)
					{
						unk_0x317CA41ED2351630(uLocal_353, 6);
						iLocal_324++;
					}
				}
				else if (unk_0xA3DC7C2803970902(uLocal_353) != 4)
				{
					unk_0x317CA41ED2351630(uLocal_353, 4);
				}
			}
			else
			{
				iLocal_324 = (iLocal_324 - 1);
			}
		}
	}
}

void func_386()
{
	unk_0x6D68030C791111E0("rcmnigel2");
	if (func_11(Local_536))
	{
		unk_0x99F546A9200EA026(Local_536, 1084227584);
		unk_0x3C50F1F859BA232B(Local_536, 0);
		unk_0xB29E08C7AB729BAD(Local_536, true);
		unk_0xF0F3162A538A2D92(Local_536, 0);
		unk_0x28BDBB4EFE92691D(Local_536, 1);
		unk_0xC19EDC1D7179164C(Local_536, true, true, 0);
		unk_0x385646B4C2FB7BEC(Local_536, 1f);
		unk_0x70B1045E099298C1(Local_536, 0f);
	}
	if (func_21(Local_534))
	{
		func_374(1090519040);
		if (unk_0x24A1A7BF4ED94B71(Local_534) > 110)
		{
			unk_0x6259CDB47862A4F3(Local_534, 110, 0);
			unk_0x2C3F3D88E305DCA7(Local_534, 1);
		}
	}
	if (!unk_0x317672E799676CA5(393.38f, -617.53f, 27.91f, 30f))
	{
		unk_0x3521B10FB737CE36(393.38f, -617.53f, 27.91f, 35f, 0);
		unk_0x39F8A3E01BC1A69B(393.38f, -617.53f, 27.91f, 8f, 0);
	}
}

void func_387()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iLocal_248;
	iVar1 = iLocal_251;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iLocal_192[iVar2] > 0)
		{
			unk_0xD2BB05DE6C584878(iLocal_192[iVar2], sLocal_359);
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_195[iVar2] > 0)
		{
			unk_0xD2BB05DE6C584878(iLocal_195[iVar2], sLocal_359);
		}
		iVar2++;
	}
}

void func_388()
{
	iLocal_132 = 1;
}

void func_389()
{
	if (!iLocal_304)
	{
		if (fLocal_341 > 124136f)
		{
			if (func_21(Local_534))
			{
				if (unk_0x24A1A7BF4ED94B71(Local_534) < 200)
				{
					unk_0x6259CDB47862A4F3(Local_534, 200, 0);
				}
			}
			if (func_14(Local_536))
			{
				unk_0x6259CDB47862A4F3(Local_536, 1000, 0);
				if (!unk_0x39FC9AD10285F177(Local_536, 4))
				{
					unk_0xE2B1AA138E15D353(Local_536, 4, 1);
				}
				unk_0xAB9FD40CC0E419E3(Local_536, true);
				unk_0xD682ADA156B20909(Local_536, 0);
				unk_0xD682ADA156B20909(Local_536, 1);
				unk_0x1FBC839C9CF868A4(Local_536);
				unk_0x4C9B98D31D89D901(Local_536, 0f, 1f, 0.1f, 800f, 1850f, 1);
				unk_0x4C9B98D31D89D901(Local_536, -0.2f, 1f, 0.5f, 50f, 650f, 1);
				unk_0x4C9B98D31D89D901(Local_536, -0.7f, -0.2f, 0.3f, 50f, 500f, 1);
				iLocal_304 = 1;
			}
		}
	}
}

void func_390()
{
	if (((((((((((fLocal_341 > 3000f && fLocal_341 < 3800f) || (fLocal_341 > 14750f && fLocal_341 < 15250f)) || (fLocal_341 > 28500f && fLocal_341 < 29400f)) || (fLocal_341 > 34000f && fLocal_341 < 35250f)) || (fLocal_341 > 38800f && fLocal_341 < 41000f)) || (fLocal_341 > 47000f && fLocal_341 < 48300f)) || (fLocal_341 > 56000f && fLocal_341 < 57200f)) || (fLocal_341 > 66750f && fLocal_341 < 67250f)) || (fLocal_341 > 68500f && fLocal_341 < 70500f)) || (fLocal_341 > 101500f && fLocal_341 < 102500f)) || (fLocal_341 > 114500f && fLocal_341 < 116500f))
	{
		unk_0x7CE8BDE02895D2F9(Local_536, 1);
	}
	if ((((((fLocal_341 > 6500f && fLocal_341 < 7000f) || (fLocal_341 > 7500f && fLocal_341 < 8500f)) || (fLocal_341 > 10500f && fLocal_341 < 11250f)) || (fLocal_341 > 11750f && fLocal_341 < 12250f)) || (fLocal_341 > 13250f && fLocal_341 < 13500f)) || (fLocal_341 > 14000f && fLocal_341 < 14500f))
	{
		unk_0xD5362A43A608808B(Local_536);
	}
}

void func_391(float fParam0, float fParam1)
{
	bool bVar0;
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
	float fVar13;
	float fVar14;
	float fVar15;
	
	bVar0 = true;
	if (bVar0)
	{
		if (func_14(Local_535))
		{
			fVar1 = *fParam0;
			fVar2 = 9f;
			fVar3 = 20f;
			fVar4 = 36f;
			fVar5 = ((200f / 100f) * (0.7f * 100f));
			fVar6 = 30f;
			fVar7 = 0.7f;
			fVar8 = 0.45f;
			fVar9 = 1.6f;
			fVar10 = 0.04f;
			if (fParam1 > 0f && fParam1 < 6000f)
			{
				fVar2 = 1f;
				fVar3 = 10f;
				fVar4 = 22f;
				fVar6 = 45f;
				fVar9 = 1f;
				fVar10 = 0.02f;
			}
			else if (fParam1 > 12000f && fParam1 < 20000f)
			{
				fVar2 = 10.5f;
				fVar3 = 22f;
				fVar6 = 15f;
				fVar10 = 0.05f;
			}
			else if (fParam1 > 31000f && fParam1 < 35500f)
			{
				fVar2 = 9f;
				fVar3 = 20f;
				fVar6 = 20f;
				fVar9 = 1.8f;
			}
			else if (fParam1 > 37000f && fParam1 < 42500f)
			{
				fVar2 = 8f;
				fVar3 = 21f;
			}
			else if (fParam1 > 54500f && fParam1 < 58000f)
			{
				fVar2 = 8f;
				fVar3 = 22f;
			}
			else if (fParam1 > 58000f && fParam1 < 63500f)
			{
				fVar2 = 15f;
				fVar3 = 22f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 63500f && fParam1 < 72500f)
			{
				fVar2 = 10f;
				fVar3 = 20f;
				fVar4 = 30f;
			}
			else if (fParam1 > 72500f && fParam1 < 81500f)
			{
				fVar4 = 30f;
			}
			else if (fParam1 > 81500f && fParam1 < 84000f)
			{
				fVar4 = 25f;
			}
			else if (fParam1 > 88000f && fParam1 < 96500f)
			{
				fVar4 = 30f;
				fVar6 = 20f;
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, true, 0))
				{
					fVar2 = 20f;
					fVar3 = 35f;
					fVar4 = 60f;
					fVar6 = 15f;
				}
			}
			else if (fParam1 > 96500f && fParam1 < 102500f)
			{
				fVar2 = 15f;
				fVar3 = 20f;
				fVar4 = 25f;
				fVar6 = 20f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 102500f && fParam1 < 107500f)
			{
				fVar2 = 15f;
				fVar3 = 25f;
				fVar4 = 40f;
			}
			else if (fParam1 > 107500f && fParam1 < 110500f)
			{
				fVar2 = 17f;
				fVar3 = 30f;
				fVar4 = 50f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 110500f && fParam1 < 114000f)
			{
				fVar2 = 20f;
				fVar3 = 35f;
				fVar4 = 55f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 114500f && fParam1 < 118000f)
			{
				fVar2 = 22f;
				fVar3 = 37f;
				fVar4 = 60f;
				fVar9 = 2f;
			}
			else if (fParam1 > 118000f)
			{
				fVar2 = 27f;
				fVar3 = 45f;
				fVar4 = 70f;
				fVar9 = 2f;
			}
			func_399(&fVar1, &Local_535, Local_536, fVar2, fVar3, fVar4, fVar5, fVar6, 1f, fVar7, fVar8, fVar9, 1, 0, 1097859072, 1);
			if (fParam1 > 114500f)
			{
				if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, true, 0))
				{
					fVar1 = 1.2f;
				}
				else if (fParam1 < 120000f)
				{
					fVar1 = 2.2f;
					fVar10 = 1f;
				}
			}
			func_398(fParam0, fVar1, fVar10);
		}
	}
	else
	{
		fVar11 = *fParam0;
		fVar12 = 6f;
		fVar13 = 18f;
		fVar14 = 35f;
		fVar15 = 1.5f;
		if (fParam1 > 37000f && fParam1 < 42500f)
		{
			fVar12 = 8f;
			fVar13 = 22f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 54500f && fParam1 < 58000f)
		{
			fVar12 = 8f;
			fVar13 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 58000f && fParam1 < 63500f)
		{
			fVar13 = 15f;
			fVar14 = 22f;
		}
		else if (fParam1 > 63500f && fParam1 < 72500f)
		{
			fVar12 = 10f;
			fVar13 = 20f;
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 72500f && fParam1 < 81500f)
		{
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 81500f && fParam1 < 84000f)
		{
			fVar14 = 25f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 88000f && fParam1 < 96500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
			if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, true, 0))
			{
				fVar12 = 12f;
				fVar13 = 30f;
				fVar14 = 45f;
				fVar15 = 1.6f;
			}
		}
		else if (fParam1 > 96500f && fParam1 < 102500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 102500f && fParam1 < 107500f)
		{
			fVar12 = 12f;
			fVar13 = 25f;
			fVar14 = 40f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 107500f && fParam1 < 110500f)
		{
			fVar12 = 14f;
			fVar13 = 30f;
			fVar14 = 50f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 110500f && fParam1 < 114000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 55f;
			fVar15 = 1.9f;
		}
		else if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar12 = 40f;
			fVar13 = 50f;
			fVar14 = 70f;
			fVar15 = 3f;
		}
		else if (fParam1 > 118000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 65f;
			fVar15 = 2f;
		}
		func_392(Local_536, unk_0xA19140A5C42D8715(), &fVar11, 1f, fVar12, fVar13, fVar14, fVar15, 1065353216, 1060320051, 1);
		if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar11 = 2.2f;
		}
		if (fParam1 > 114500f)
		{
			if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, true, 0))
			{
				fVar11 = 1.2f;
			}
		}
		*fParam0 = fVar11;
	}
}

void func_392(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
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
	int iVar9;
	int iVar10;
	
	if (iLocal_134 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_134 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_182;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_397(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		if (func_395(iParam1, iParam0))
		{
			if (unk_0x5D7DFE2058701942(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_394(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_393(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_135 = 1;
		}
		else if (iLocal_135)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_135 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0xDE089748C4C76C96();
		fVar8 = ((fLocal_189 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0xDE089748C4C76C96();
		fVar8 = ((fLocal_190 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0x4915F4759304D5CF(iParam1))
		{
			if (unk_0x5D7DFE2058701942(iParam1, 0))
			{
				iVar9 = unk_0xCAEB6CE71A2C7212(iParam1, 0);
				if (!unk_0x7112137033807390(iVar9, 0))
				{
					iVar10 = unk_0x8F474E419F56E48D(iVar9);
					if (unk_0x425CD7B17352316F(iVar10) || unk_0x8CE5E4632E631B03(iVar10))
					{
						if (unk_0x1095F403F52B42E1(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_180 - fLocal_181));
							fVar1 = (fVar1 + fLocal_181);
							fLocal_179 = fVar1;
							if (fLocal_179 < fLocal_181)
							{
								fLocal_179 = fLocal_181;
							}
							if (fLocal_179 > fLocal_180)
							{
								fLocal_179 = fLocal_180;
							}
							unk_0x95F77A3DE1C43063(unk_0xD4E735F4B6A956AC(), fLocal_179);
						}
					}
				}
			}
		}
	}
}

float func_393(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		Var0 = unk_0xA4159B4CB88DED68(iParam0);
		Var0.f_1 = unk_0x0A5A31EE4474F441(iParam0);
	}
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, true) };
		if (unk_0x5D7DFE2058701942(iParam1, 0))
		{
			iVar5 = unk_0xCAEB6CE71A2C7212(iParam1, 0);
			vVar3.x = unk_0xA4159B4CB88DED68(iVar5);
			vVar3.y = unk_0x0A5A31EE4474F441(iVar5);
		}
		else
		{
			vVar2 = { unk_0x3201284584C7CD83(iParam1, 0f, 5f, 0f) };
			vVar3 = { vVar2 - vVar1 };
		}
	}
	fVar4 = unk_0x772D91F28C9D2EDC(Var0, Var0.f_1, vVar3.x, vVar3.y);
	return fVar4;
}

float func_394(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, true) };
	}
	vVar2 = { vVar1 - vVar0 };
	vVar2.z = 0f;
	fVar3 = vmag(vVar2);
	return fVar3;
}

int func_395(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!unk_0x4915F4759304D5CF(iParam0))
	{
		if (!unk_0x7112137033807390(iParam1, 0))
		{
			if (unk_0xE0FD180CD24C0B67(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0x7112137033807390(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	if (unk_0x1095F403F52B42E1(iParam1, 0))
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, true) };
		vVar2 = { unk_0x3201284584C7CD83(iParam1, 0f, 5f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3 = { vVar1 - vVar0 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_396(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_396(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

float func_397(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		Var0 = unk_0xA4159B4CB88DED68(iParam0);
		Var0.f_1 = unk_0x0A5A31EE4474F441(iParam0);
		vVar2 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	if (!unk_0x7112137033807390(iParam1, 0))
	{
		vVar3 = { unk_0xE2BBD32891C18569(iParam1, true) };
	}
	vVar1 = { vVar3 - vVar2 };
	fVar4 = unk_0x772D91F28C9D2EDC(vVar1.x, vVar1.y, Var0, Var0.f_1);
	fVar4 = (fVar4 + -90f);
	if (fVar4 < 0f)
	{
		fVar4 = (fVar4 * -1f);
	}
	vVar1.z = 0f;
	return (vmag(vVar1) * sin(fVar4));
}

void func_398(var uParam0, float fParam1, float fParam2)
{
	*uParam0 = (*uParam0 + ((((fParam1 - *uParam0) * fParam2) * 30f) * timestep()));
}

void func_399(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	vVar0 = { unk_0xE2BBD32891C18569(*iParam1, true) };
	vVar1 = { unk_0xE2BBD32891C18569(iParam2, true) };
	vVar2 = { unk_0x61141C81AF57CBDC(iParam2, vVar0) };
	fVar3 = vdist(vVar0, vVar1);
	fVar4 = 0f;
	fVar5 = (fParam11 - 1f);
	fVar6 = (1f - fParam9);
	if (vVar2.y < 1f)
	{
		if (fVar3 > fParam5)
		{
			iVar7 = 0;
			if (fVar3 > fParam6)
			{
				if (fVar3 > (fParam6 * 2f))
				{
					iVar7 = 1;
				}
				fVar3 = fParam6;
			}
			fVar4 = ((fVar3 - fParam5) / (fParam6 - fParam5));
			if (!unk_0x1A8481A7E865EC7C(iParam2) || iVar7)
			{
				*uParam0 = (fParam9 - ((fParam9 - fParam10) * fVar4));
			}
			else
			{
				*uParam0 = fParam9;
			}
		}
		else if (fVar3 > fParam4)
		{
			fVar4 = ((fVar3 - fParam4) / (fParam5 - fParam4));
			*uParam0 = (1f - (fVar6 * fVar4));
		}
		else
		{
			if (fVar3 < fParam3)
			{
				fVar3 = fParam3;
			}
			fVar4 = ((fParam4 - fVar3) / (fParam4 - fParam3));
			if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()) && iParam15)
			{
				*uParam0 = (1f + ((fVar4 * fVar5) * 2f));
			}
			else
			{
				*uParam0 = (1f + (fVar4 * fVar5));
			}
		}
	}
	else
	{
		if (fVar3 > fParam7)
		{
			fVar3 = fParam7;
		}
		fVar4 = (fVar3 / fParam7);
		fVar8 = (unk_0xEAA5CEF8875FEEED(iParam2) - unk_0xEAA5CEF8875FEEED(*iParam1));
		if (fVar8 > 0f)
		{
			fVar4 = (fVar4 * 0.5f);
		}
		if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()) && iParam15)
		{
			*uParam0 = (2f + fVar4);
		}
		else if (unk_0xEAA5CEF8875FEEED(*iParam1) < 5f && fVar8 > 0f)
		{
			*uParam0 = (0.6f + fVar4);
		}
		else
		{
			*uParam0 = (1f + fVar4);
		}
	}
	*uParam0 = (*uParam0 * fParam8);
	if (bParam12)
	{
		fVar9 = fParam13;
		if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*uParam0 > 1f)
		{
			fVar9 = (fParam13 + ((fParam14 - fParam13) * (*uParam0 - 1f)));
		}
		unk_0xC1A1E6DA8E0E57B6(*iParam1, -fVar9);
	}
}

void func_400()
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xFD34717937104F1C() - iLocal_329) > 50)
	{
		if (func_14(iLocal_251[3]))
		{
			if (fLocal_341 > 28750f && fLocal_341 < 29750f)
			{
				unk_0x6EB2D9504928F849(iLocal_251[3], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_251[3], 2f);
				if (!iLocal_303[0])
				{
					unk_0x5ED0FDD822BD1865(iLocal_251[3], 3500, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[0] = 1;
				}
			}
			else
			{
				unk_0x6EB2D9504928F849(iLocal_251[3], 1);
				unk_0x40AD686ECB2EFAF6(iLocal_251[3], 1f);
			}
		}
		if (func_14(iLocal_251[5]))
		{
			if (fLocal_341 > 34500f && fLocal_341 < 35500f)
			{
				unk_0x6EB2D9504928F849(iLocal_251[5], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_251[5], 2f);
				if (!iLocal_303[1])
				{
					unk_0x5ED0FDD822BD1865(iLocal_251[5], 3000, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[1] = 1;
				}
			}
			else
			{
				unk_0x6EB2D9504928F849(iLocal_251[5], 1);
				unk_0x40AD686ECB2EFAF6(iLocal_251[5], 1f);
			}
		}
		if (func_14(iLocal_251[8]))
		{
			if (!bLocal_301)
			{
				bLocal_301 = func_401(iLocal_251[8], joaat("s_m_y_garbage"), 26);
			}
			if (fLocal_341 > 46000f && fLocal_341 < 47000f)
			{
				unk_0x6EB2D9504928F849(iLocal_251[8], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_251[8], 2f);
				if (!iLocal_303[2])
				{
					unk_0x5ED0FDD822BD1865(iLocal_251[8], 3500, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[2] = 1;
				}
			}
			else if (fLocal_341 > 47500f && fLocal_341 < 48500f)
			{
				unk_0x6EB2D9504928F849(iLocal_251[8], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_251[8], 2f);
			}
			else
			{
				unk_0x6EB2D9504928F849(iLocal_251[8], 1);
				unk_0x40AD686ECB2EFAF6(iLocal_251[8], 1f);
			}
		}
		if (func_14(iLocal_251[9]))
		{
			if (!bLocal_302)
			{
				bLocal_302 = func_401(iLocal_251[9], joaat("a_m_y_cyclist_01"), 26);
			}
		}
		if (func_14(iLocal_251[16]))
		{
			if (fLocal_341 > 69000f && fLocal_341 < 71000f)
			{
				unk_0x6EB2D9504928F849(iLocal_251[16], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_251[16], 2f);
				if (!iLocal_303[3])
				{
					unk_0x5ED0FDD822BD1865(iLocal_251[16], 3500, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[3] = 1;
				}
			}
			else
			{
				unk_0x6EB2D9504928F849(iLocal_251[16], 1);
				unk_0x40AD686ECB2EFAF6(iLocal_251[16], 1f);
			}
		}
		if (func_14(iLocal_248[17]))
		{
			if (!iLocal_303[4])
			{
				if (fLocal_341 > 78700f && fLocal_341 < 79300f)
				{
					unk_0x5ED0FDD822BD1865(iLocal_248[17], 3000, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[4] = 1;
				}
			}
		}
		if (func_14(iLocal_248[19]))
		{
			if (!iLocal_303[4])
			{
				if (fLocal_341 > 79950f && fLocal_341 < 82300f)
				{
					unk_0x5ED0FDD822BD1865(iLocal_248[19], 3000, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[4] = 1;
				}
			}
		}
		if (func_14(iLocal_251[20]))
		{
			if (!iLocal_303[5])
			{
				if (fLocal_341 > 84000f && fLocal_341 < 84750f)
				{
					unk_0x5ED0FDD822BD1865(iLocal_251[20], 3000, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[5] = 1;
				}
			}
		}
		if (func_14(iLocal_251[21]))
		{
			if (fLocal_341 > 88000f && fLocal_341 < 90502f)
			{
				unk_0x6EB2D9504928F849(iLocal_251[21], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_251[21], 2f);
				if (!iLocal_303[6])
				{
					unk_0x5ED0FDD822BD1865(iLocal_251[21], 3500, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[6] = 1;
				}
			}
			else
			{
				unk_0x6EB2D9504928F849(iLocal_251[21], 1);
				unk_0x40AD686ECB2EFAF6(iLocal_251[21], 1f);
			}
		}
		if (func_14(iLocal_251[23]))
		{
			if (fLocal_341 > 84800f && fLocal_341 < 87000f)
			{
				unk_0x6EB2D9504928F849(iLocal_251[23], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_251[23], 2f);
				if (!iLocal_303[7])
				{
					unk_0x5ED0FDD822BD1865(iLocal_251[23], 3500, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[7] = 1;
				}
			}
			else
			{
				unk_0x6EB2D9504928F849(iLocal_251[23], 1);
				unk_0x40AD686ECB2EFAF6(iLocal_251[23], 1f);
			}
		}
		if (func_14(iLocal_248[21]))
		{
			if (!iLocal_303[8])
			{
				if (fLocal_341 > 98800f && fLocal_341 < 99400f)
				{
					unk_0x5ED0FDD822BD1865(iLocal_248[21], 2000, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[8] = 1;
				}
			}
		}
		if (func_14(iLocal_248[23]))
		{
			if (fLocal_341 > 91200f && fLocal_341 < 92200f)
			{
				unk_0x6EB2D9504928F849(iLocal_248[23], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_248[23], 2f);
				if (!iLocal_303[9])
				{
					unk_0x5ED0FDD822BD1865(iLocal_248[23], 2000, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[9] = 1;
				}
			}
			else
			{
				unk_0x6EB2D9504928F849(iLocal_248[23], 1);
				unk_0x40AD686ECB2EFAF6(iLocal_248[23], 1f);
			}
		}
		if (func_14(iLocal_251[28]))
		{
			if (fLocal_341 > 93500f && fLocal_341 < 95000f)
			{
				unk_0x6EB2D9504928F849(iLocal_251[28], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_251[28], 2f);
				if (!iLocal_303[10])
				{
					unk_0x5ED0FDD822BD1865(iLocal_251[28], 3500, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[10] = 1;
				}
			}
			else
			{
				unk_0x6EB2D9504928F849(iLocal_251[28], 1);
				unk_0x40AD686ECB2EFAF6(iLocal_251[28], 1f);
			}
		}
		if (func_14(iLocal_251[29]))
		{
			if (!iLocal_303[11])
			{
				if (fLocal_341 > 104500f && fLocal_341 < 105000f)
				{
					unk_0x5ED0FDD822BD1865(iLocal_251[29], 2000, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_303[11] = 1;
				}
			}
		}
		if (func_14(iLocal_250[31]))
		{
			if (!unk_0xF68525C58EEA45A2(iLocal_250[31], 2))
			{
				unk_0xD6B4F40F1425E83F(iLocal_250[31], 2, 0, 0);
			}
			if (!unk_0xF68525C58EEA45A2(iLocal_250[31], 3))
			{
				unk_0xD6B4F40F1425E83F(iLocal_250[31], 3, 0, 0);
			}
			if (!unk_0x7F75D2469509BADD(iLocal_250[31]))
			{
				unk_0x06DE7D435FAAC96A(iLocal_250[31], 1);
			}
		}
		if (func_14(iLocal_251[22]))
		{
			if (!unk_0x7F75D2469509BADD(iLocal_251[22]))
			{
				unk_0x06DE7D435FAAC96A(iLocal_251[22], 1);
			}
		}
		if (func_14(iLocal_251[19]))
		{
			iVar0 = -1;
			iVar1 = -1;
			unk_0x36C6BA3FF0051DDF(iLocal_251[19], &iVar0, &iVar1);
			if (iVar0 != 1)
			{
				unk_0x6EB2D9504928F849(iLocal_251[19], 2);
				unk_0x40AD686ECB2EFAF6(iLocal_251[19], 2f);
			}
			if (iLocal_332 == -1)
			{
				if (unk_0xB2C707E9E3A0E44D(iLocal_251[19]))
				{
					iLocal_332 = unk_0x7A3ECD08D6D1D554();
					unk_0x6020229E34827A69(iLocal_332, "FAKE_REVS_VEHICLE_02", iLocal_251[19], "NIGEL_02_SOUNDSET", 0, 0);
				}
			}
			else if (!unk_0x57269F5E44F5F616(iLocal_332))
			{
				if (!unk_0xB2C707E9E3A0E44D(iLocal_251[19]))
				{
					unk_0x5DE59A67B5F326CF(iLocal_332);
					unk_0xB4442316D0B880FD(iLocal_332);
					iLocal_332 = -1;
				}
			}
		}
		iLocal_329 = unk_0xFD34717937104F1C();
	}
}

int func_401(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		bVar0 = false;
		iVar1 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
		if (unk_0xDC5D81351D6A4DDB(iVar1))
		{
			if (iVar1 != unk_0xA19140A5C42D8715())
			{
				if (unk_0x8F474E419F56E48D(iVar1) != iParam1)
				{
					bVar0 = true;
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			unk_0xCACEBBBEAD8F262E(iParam1);
			if (unk_0x7FC99CCC73354033(iParam1))
			{
				if (unk_0xDC5D81351D6A4DDB(iVar1))
				{
					unk_0x1F7948851FB36E88(iVar1, true, 0);
					unk_0x680F17660351F21B(&iVar1);
				}
				iVar2 = unk_0x91A7C8CA5E332C03(iParam0, iParam2, iParam1, -1, 0, false);
				if (func_403(unk_0x8F474E419F56E48D(iParam0)))
				{
					unk_0xDFA901280292A2FB(iVar2, iLocal_241);
				}
				unk_0x8695E04AA104690A(iVar2, 0);
				unk_0x1F4E5EFBFE503FB3(iVar2, true);
				unk_0x83055D7E96024509(iVar2, true);
				unk_0x2C3F3D88E305DCA7(iVar2, 0);
				unk_0x13E0A8160525AE55(iVar2, 32, false);
				if (bLocal_151)
				{
					unk_0xC2C4AE9DB4A0BEF3(iVar2, 8192, true);
					unk_0xC2C4AE9DB4A0BEF3(iVar2, 65536, true);
					unk_0xC2C4AE9DB4A0BEF3(iVar2, 2, false);
					unk_0x3FB92963BD0665CB(iParam0, 1);
				}
				unk_0xA5DE74AE39867B03(iParam1);
				func_402(iVar2);
				return 1;
			}
		}
	}
	return 0;
}

void func_402(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		unk_0x7E4E83D33161D01A(&iParam0);
	}
}

int func_403(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_404(int iParam0, float fParam1)
{
	float fVar0;
	vector3 vVar1;
	int iVar2;
	
	fVar0 = unk_0xDE089748C4C76C96();
	fVar0 = (fVar0 * 1000f);
	bLocal_149 = false;
	if (!bLocal_131)
	{
		if (bLocal_130)
		{
			func_425();
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
				unk_0xFDD15D670AD33E10(vVar1, 1000f, 1, 0, 0, false);
			}
			bLocal_131 = true;
		}
	}
	else if (!bLocal_130)
	{
		func_92();
		bLocal_131 = false;
	}
	if (bLocal_130)
	{
		fParam1 = 1f;
		unk_0x5FEB5D55B0DE217B(0f);
	}
	if (!bLocal_124)
	{
		if (iLocal_119)
		{
			fLocal_176 = 0f;
		}
		else
		{
			fLocal_176 = 1f;
		}
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (unk_0xB2C707E9E3A0E44D(iParam0))
			{
				if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
				{
					if (func_395(unk_0xA19140A5C42D8715(), iParam0))
					{
						iLocal_129 = 1;
					}
					else
					{
						iLocal_129 = 0;
					}
				}
				fLocal_173 = unk_0x43471DC9A73EAB3E(iParam0);
				unk_0xD136D67FFCAC2A13(iParam0, ((fParam1 * fLocal_174) * fLocal_176));
				if (bLocal_128)
				{
					func_424(iParam0, fLocal_173);
					func_423(iParam0, fLocal_183);
					if (fLocal_178 > 1000f)
					{
						if (iLocal_215 == 0)
						{
							func_422(iParam0, fLocal_183);
						}
						fVar0 = ((fLocal_173 + 4000f) + (to_float(iLocal_215) * 2000f));
						func_421(iParam0, fVar0, fLocal_177);
						iLocal_215++;
						if (iLocal_215 > 2)
						{
							fLocal_178 = 0f;
						}
					}
					else
					{
						iLocal_215 = 0;
						fLocal_178 = (fLocal_178 + (unk_0xDE089748C4C76C96() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (unk_0xB2C707E9E3A0E44D(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_173 == 0f || unk_0x71364F510A1CB69F())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_136)
		{
			if (!iLocal_118)
			{
				func_418(iParam0, ((fParam1 * fLocal_174) * fLocal_176), 0);
				if (!iLocal_139)
				{
				}
				iLocal_139 = 0;
			}
			if (bLocal_121)
			{
				func_417(iParam0);
			}
			if (!iLocal_118)
			{
				func_407(iParam0, ((fParam1 * fLocal_174) * fLocal_176), 0);
			}
		}
		if (iLocal_126)
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
				{
					iLocal_253 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
					vLocal_219 = { unk_0xE2BBD32891C18569(iLocal_253, true) };
					unk_0x722C21C370465F42(iLocal_253, &fLocal_157, &fLocal_158, &fLocal_159, &fLocal_160);
				}
			}
			iLocal_126 = 0;
		}
		if (iLocal_125)
		{
			if (unk_0xDC5D81351D6A4DDB(iLocal_253))
			{
				func_84(iLocal_254);
				iLocal_254 = iLocal_253;
			}
			if (unk_0x1095F403F52B42E1(iLocal_254, 0))
			{
				unk_0x4299736016AECE26(iLocal_254, vLocal_219, 1, false, 0, 1);
				unk_0x693A63A8D6B78EA4(iLocal_254, fLocal_157, fLocal_158, fLocal_159, fLocal_160);
			}
			fLocal_172 = fLocal_175;
			iLocal_118 = 1;
			iLocal_125 = 0;
		}
		if (iLocal_118)
		{
			while (!func_405(&iParam0, fLocal_172))
			{
				wait(0);
			}
			iLocal_119 = 1;
		}
		if (iLocal_132)
		{
			iLocal_132 = 0;
		}
	}
}

int func_405(int iParam0, float fParam1)
{
	if (!iLocal_133)
	{
		iLocal_118 = 1;
		func_79();
		if (unk_0x1095F403F52B42E1(*iParam0, 0))
		{
			if (unk_0xB2C707E9E3A0E44D(*iParam0))
			{
				unk_0xF648DB179A6E71BF(*iParam0);
				unk_0x9CBCA0C1A4935577(*iParam0);
			}
			if (!iLocal_202 == -1)
			{
				while (!func_406(iParam0, iLocal_202, fParam1, 1, 0, 0, 0, 0))
				{
					wait(0);
				}
				if (!bLocal_123)
				{
					iLocal_119 = 1;
					fLocal_176 = 0f;
					iLocal_203 = 0;
					iLocal_205 = 0;
					iLocal_204 = 0;
					iLocal_199 = 0;
					iLocal_200 = 0;
					iLocal_201 = 0;
					iLocal_206 = 0;
					iLocal_207 = 0;
					iLocal_208 = 0;
				}
			}
		}
		iLocal_133 = 1;
	}
	else
	{
		if (unk_0x1095F403F52B42E1(*iParam0, 0))
		{
			if (unk_0xB2C707E9E3A0E44D(*iParam0))
			{
				unk_0xD136D67FFCAC2A13(*iParam0, ((1f * fLocal_174) * fLocal_176));
				func_406(iParam0, iLocal_202, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_173 = fParam1;
		iLocal_209 = 0;
		iLocal_212 = 0;
		fLocal_188 = 0f;
		fLocal_187 = 0f;
		func_407(*iParam0, ((1f * fLocal_174) * fLocal_176), 1);
		func_418(*iParam0, ((1f * fLocal_174) * fLocal_176), 1);
		func_417(*iParam0);
		if ((iLocal_206 == 0 && iLocal_207 == 0) && iLocal_208 == 0)
		{
			iLocal_119 = 0;
			iLocal_118 = 0;
			iLocal_133 = 0;
			return 1;
		}
	}
	return 0;
}

int func_406(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0x5C2A13372076C38C(iParam1, &cLocal_232);
		if (unk_0x6F4A062113883115(iParam1, &cLocal_232))
		{
			if (unk_0x1095F403F52B42E1(*uParam0, 0))
			{
				if (!unk_0xB2C707E9E3A0E44D(*uParam0))
				{
					unk_0xB29E08C7AB729BAD(*uParam0, false);
					if (bParam4)
					{
						unk_0x8F79ED246B384169(*uParam0, iParam1, &cLocal_232, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_210 && iParam1 != iLocal_211)
						{
							if (bParam7)
							{
								unk_0xA862B72C75FC798D(*uParam0, iParam1, &cLocal_232, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0xA862B72C75FC798D(*uParam0, iParam1, &cLocal_232, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x4ABEB615D66A01A9(*uParam0, iParam1, &cLocal_232, 1);
							}
						}
						else
						{
							unk_0x4ABEB615D66A01A9(*uParam0, iParam1, &cLocal_232, 1);
						}
						unk_0xE502041075C562A2(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0x5509A0235DC4EED7(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x144B04D921253078(*uParam0) == unk_0x79758BBCB7EA8139(iParam1, &cLocal_232))
				{
					fVar0 = unk_0x43471DC9A73EAB3E(*uParam0);
					unk_0xE502041075C562A2(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0xF648DB179A6E71BF(*uParam0);
						unk_0x5C2A13372076C38C(iParam1, &cLocal_232);
					}
					if (bParam5)
					{
						unk_0x5509A0235DC4EED7(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0xF648DB179A6E71BF(*uParam0);
					unk_0xB29E08C7AB729BAD(*uParam0, false);
					if (bParam4)
					{
						unk_0x8F79ED246B384169(*uParam0, iParam1, &cLocal_232, 10f, 786603);
					}
					else if (iParam1 != iLocal_210 && iParam1 != iLocal_211)
					{
						if (bParam7)
						{
							unk_0xA862B72C75FC798D(*uParam0, iParam1, &cLocal_232, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0xA862B72C75FC798D(*uParam0, iParam1, &cLocal_232, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x4ABEB615D66A01A9(*uParam0, iParam1, &cLocal_232, 1);
						}
					}
					else
					{
						unk_0x4ABEB615D66A01A9(*uParam0, iParam1, &cLocal_232, 1);
					}
					unk_0xE502041075C562A2(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0x5509A0235DC4EED7(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_407(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	bVar9 = unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC());
	bVar10 = unk_0x3E748D7D743334F1();
	uVar11 = unk_0x29500EC0831EC722();
	bVar12 = false;
	if (bVar9)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar2 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		}
		vVar5 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
	}
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar0 = iLocal_205;
		while (iVar0 < 70)
		{
			if (iLocal_196[iVar0] != 99)
			{
				if (iLocal_196[iVar0] == 0)
				{
					if (iLocal_195[iVar0] > 0)
					{
						if (!iLocal_118)
						{
							if (fLocal_173 > (fLocal_165[iVar0] - (7000f * fParam1)))
							{
								if (func_403(iLocal_244[iVar0]))
								{
									unk_0x2BCFB39E86340DAA(&(iLocal_197[iVar0]), 0);
								}
								else if (unk_0x8CE5E4632E631B03(iLocal_244[iVar0]))
								{
									unk_0x2BCFB39E86340DAA(&(iLocal_197[iVar0]), 2);
								}
								unk_0xFA57C719261AA55D(&(iLocal_197[iVar0]), 1);
								iLocal_196[iVar0]++;
								iLocal_207++;
							}
						}
						else
						{
							fVar6 = (fLocal_173 - fLocal_165[iVar0]);
							fVar6 = (fVar6 * fLocal_166[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_416(iLocal_195[iVar0]))
								{
									if (func_403(iLocal_244[iVar0]))
									{
										unk_0x2BCFB39E86340DAA(&(iLocal_197[iVar0]), 0);
									}
									else if (unk_0x8CE5E4632E631B03(iLocal_244[iVar0]))
									{
										unk_0x2BCFB39E86340DAA(&(iLocal_197[iVar0]), 2);
									}
									unk_0xFA57C719261AA55D(&(iLocal_197[iVar0]), 1);
									iLocal_196[iVar0]++;
									iLocal_207++;
								}
								else
								{
									iLocal_196[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_196[iVar0] = 99;
					}
				}
				else if (iLocal_196[iVar0] == 1)
				{
					bVar8 = false;
					unk_0x5C2A13372076C38C(iLocal_195[iVar0], &cLocal_232);
					if (unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 0))
					{
						unk_0xCACEBBBEAD8F262E(func_88());
						bVar8 = unk_0x7FC99CCC73354033(func_88());
					}
					else if (!bLocal_145 && ((!unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 2) && bVar10) || (unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 2) && uVar11)))
					{
						bVar8 = true;
					}
					else
					{
						unk_0xCACEBBBEAD8F262E(func_91());
						bVar8 = unk_0x7FC99CCC73354033(func_91());
					}
					if (bVar8)
					{
						if (!unk_0xDC5D81351D6A4DDB(iLocal_251[iVar0]))
						{
							unk_0xCACEBBBEAD8F262E(iLocal_244[iVar0]);
							if (unk_0x7FC99CCC73354033(iLocal_244[iVar0]) && unk_0x6F4A062113883115(iLocal_195[iVar0], &cLocal_232))
							{
								if (fLocal_173 >= (fLocal_165[iVar0] - (fLocal_186 * fParam1)))
								{
									if ((iLocal_132 || bParam2) || (!bLocal_149 && !func_415(vLocal_218[iVar0 /*3*/], vVar5, 5f, fLocal_184)))
									{
										if (bLocal_128)
										{
											func_414(vLocal_218[iVar0 /*3*/], vVar5, fLocal_177);
										}
										iLocal_251[iVar0] = unk_0x48CFBECB146FD1A1(iLocal_244[iVar0], vLocal_218[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_244[iVar0] == joaat("polmav"))
										{
											unk_0xA70C63A3E45BA678(iLocal_251[iVar0], 0);
										}
										if (iLocal_141 && !unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 0))
										{
											func_413(iLocal_251[iVar0]);
										}
										if (unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 3))
										{
											unk_0xEAF1F3E17588C851(iLocal_251[iVar0], true);
										}
										unk_0xE8B3104D1CB25CDC(iLocal_251[iVar0], vLocal_218[iVar0 /*3*/], 0, 0, 1);
										unk_0x693A63A8D6B78EA4(iLocal_251[iVar0], fLocal_161[iVar0], fLocal_162[iVar0], fLocal_163[iVar0], fLocal_164[iVar0]);
										if (unk_0x425CD7B17352316F(iLocal_244[iVar0]) || unk_0x8CE5E4632E631B03(iLocal_244[iVar0]))
										{
											unk_0x99F546A9200EA026(iLocal_251[iVar0], 1084227584);
										}
										if (!unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 0))
										{
											unk_0xC19EDC1D7179164C(iLocal_251[iVar0], true, true, 0);
											if (unk_0x34CEB9721AC6A0A9() > 19 || unk_0x34CEB9721AC6A0A9() < 7)
											{
												unk_0x6EB2D9504928F849(iLocal_251[iVar0], 3);
											}
										}
										unk_0xB29E08C7AB729BAD(iLocal_251[iVar0], true);
										unk_0xA5DE74AE39867B03(iLocal_244[iVar0]);
										iLocal_207 = (iLocal_207 - 1);
										iLocal_196[iVar0]++;
										bLocal_149 = true;
									}
								}
							}
						}
						else if (!unk_0x7112137033807390(iLocal_251[iVar0], 0) && unk_0x1095F403F52B42E1(iLocal_251[iVar0], 0))
						{
							unk_0xE8B3104D1CB25CDC(iLocal_251[iVar0], vLocal_218[iVar0 /*3*/], 0, 0, 1);
							unk_0x693A63A8D6B78EA4(iLocal_251[iVar0], fLocal_161[iVar0], fLocal_162[iVar0], fLocal_163[iVar0], fLocal_164[iVar0]);
							if (unk_0x425CD7B17352316F(iLocal_244[iVar0]) || unk_0x8CE5E4632E631B03(iLocal_244[iVar0]))
							{
								unk_0x99F546A9200EA026(iLocal_251[iVar0], 1084227584);
							}
							unk_0xB29E08C7AB729BAD(iLocal_251[iVar0], true);
							unk_0xA5DE74AE39867B03(iLocal_244[iVar0]);
							iLocal_207 = (iLocal_207 - 1);
							iLocal_196[iVar0]++;
						}
					}
				}
				else if (iLocal_196[iVar0] == 2)
				{
					unk_0x5C2A13372076C38C(iLocal_195[iVar0], &cLocal_232);
					if (!unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 1))
					{
						bVar8 = false;
						if (unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 0))
						{
							unk_0xCACEBBBEAD8F262E(func_88());
							bVar8 = unk_0x7FC99CCC73354033(func_88());
							iVar13 = 2;
						}
						else if (!bLocal_145 && ((!unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 2) && bVar10) || (unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 2) && uVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							unk_0xCACEBBBEAD8F262E(func_91());
							bVar8 = unk_0x7FC99CCC73354033(func_91());
							iVar13 = 0;
						}
						if (!unk_0x7112137033807390(iLocal_251[iVar0], 0))
						{
							if (!bLocal_149 && unk_0x588F5E48C78F1C73(iLocal_251[iVar0], -1, 0))
							{
								if (bVar8)
								{
									if ((vdist2(unk_0xE2BBD32891C18569(iLocal_251[iVar0], true), vVar5) < 10000f || bParam2) || iLocal_132)
									{
										func_412(&(iLocal_251[iVar0]), iVar13, 1);
										unk_0x2BCFB39E86340DAA(&(iLocal_197[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0x1095F403F52B42E1(iLocal_251[iVar0], 0))
					{
						if (fLocal_173 >= fLocal_165[iVar0])
						{
							if (11 > iLocal_200)
							{
								fVar6 = (fLocal_173 - fLocal_165[iVar0]);
								fVar6 = (fVar6 * fLocal_166[iVar0]);
								if (unk_0x6F4A062113883115(iLocal_195[iVar0], &cLocal_232))
								{
									if (fVar6 < unk_0x4B598DA325B2F140(iLocal_195[iVar0], &cLocal_232))
									{
										vVar3 = { unk_0xE2BBD32891C18569(iLocal_251[iVar0], true) };
										vVar4 = { unk_0xC0E714F26FD05F43(iLocal_195[iVar0], fVar6, &cLocal_232) };
										if (((!func_415(vVar3, vVar5, 5f, fLocal_184) && func_415(vVar4, vVar5, 5f, fLocal_184)) && !iLocal_132) && !bParam2)
										{
											if (!unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 1))
											{
												func_412(&(iLocal_251[iVar0]), iVar13, 1);
											}
											iLocal_200++;
											iLocal_196[iVar0]++;
										}
										else if (((!bLocal_149 || unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 1)) || iLocal_132) || bParam2)
										{
											if (func_406(&(iLocal_251[iVar0]), iLocal_195[iVar0], fVar6, 1, 0, 0, bLocal_147, bLocal_146))
											{
												unk_0xD136D67FFCAC2A13(iLocal_251[iVar0], (fParam1 * fLocal_166[iVar0]));
												if (unk_0x1095F403F52B42E1(iLocal_251[iVar0], 0))
												{
													if (unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 0))
													{
														unk_0xC19EDC1D7179164C(iLocal_251[iVar0], true, true, 0);
														unk_0x06DE7D435FAAC96A(iLocal_251[iVar0], 1);
														unk_0x6EB2D9504928F849(iLocal_251[iVar0], 2);
														if (!unk_0x8CE5E4632E631B03(iLocal_244[iVar0]))
														{
															unk_0xEC7D542B4EACB7ED(iLocal_251[iVar0], 1);
														}
													}
												}
												if (!unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 1))
												{
													func_412(&(iLocal_251[iVar0]), iVar13, 1);
												}
												iLocal_200++;
												iLocal_196[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 1))
										{
											func_412(&(iLocal_251[iVar0]), iVar13, 1);
										}
										iLocal_200++;
										iLocal_196[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 1))
								{
									func_412(&(iLocal_251[iVar0]), iVar13, 1);
								}
								iLocal_200++;
								iLocal_196[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0x05EFB6A616B6FADE(iLocal_197[iVar0], 1))
						{
							func_412(&(iLocal_251[iVar0]), iVar13, 1);
						}
						iLocal_200++;
						iLocal_196[iVar0]++;
					}
				}
				else if (iLocal_196[iVar0] == 3)
				{
					if (unk_0x1095F403F52B42E1(iLocal_251[iVar0], 0))
					{
						if (unk_0xB2C707E9E3A0E44D(iLocal_251[iVar0]))
						{
							iVar1 = unk_0xB0D49A1F9F054602(iLocal_251[iVar0], -1, 0);
							if (!unk_0x4915F4759304D5CF(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_122 && !iLocal_119) && !bLocal_138) && (((!bLocal_147 && !bLocal_146) && unk_0xC556072C29E00F04(unk_0xA19140A5C42D8715(), iLocal_251[iVar0])) || func_411(iLocal_251[iVar0])))
									{
										if (unk_0xDC5D81351D6A4DDB(iVar2))
										{
											bVar8 = false;
											if (bLocal_140)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = unk_0xEAA5CEF8875FEEED(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (unk_0x69C0BB7D03EE045D((fVar7 - unk_0xEAA5CEF8875FEEED(iLocal_251[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!func_410(iLocal_251[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (func_409(iVar2, iLocal_251[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_408(iLocal_251[iVar0]);
												iLocal_196[iVar0]++;
											}
										}
									}
									else
									{
										unk_0xD136D67FFCAC2A13(iLocal_251[iVar0], (fParam1 * fLocal_166[iVar0]));
									}
								}
							}
							else
							{
								unk_0xF648DB179A6E71BF(iLocal_251[iVar0]);
							}
						}
						else
						{
							iLocal_196[iVar0]++;
						}
					}
					else
					{
						iLocal_196[iVar0]++;
					}
				}
				else if (iLocal_196[iVar0] == 4)
				{
					if (unk_0x1095F403F52B42E1(iLocal_251[iVar0], 0))
					{
						if (!unk_0xB2C707E9E3A0E44D(iLocal_251[iVar0]))
						{
							iLocal_196[iVar0]++;
						}
						else
						{
							iVar1 = unk_0xB0D49A1F9F054602(iLocal_251[iVar0], -1, 0);
							if (!unk_0x4915F4759304D5CF(iVar1))
							{
								unk_0xD136D67FFCAC2A13(iLocal_251[iVar0], (fParam1 * fLocal_166[iVar0]));
							}
							else
							{
								unk_0xF648DB179A6E71BF(iLocal_251[iVar0]);
							}
							if (unk_0x6F4A062113883115(iLocal_195[iVar0], &cLocal_232))
							{
								if (fLocal_173 > (fLocal_165[iVar0] + unk_0x4B598DA325B2F140(iLocal_195[iVar0], &cLocal_232)))
								{
									unk_0xF648DB179A6E71BF(iLocal_251[iVar0]);
								}
							}
							else
							{
								unk_0xF648DB179A6E71BF(iLocal_251[iVar0]);
							}
						}
					}
					else
					{
						iLocal_196[iVar0]++;
					}
				}
				else if (iLocal_196[iVar0] == 5)
				{
					if (!iLocal_251[iVar0] == iLocal_255)
					{
						if (unk_0x1095F403F52B42E1(iLocal_251[iVar0], 0))
						{
							iVar1 = unk_0xB0D49A1F9F054602(iLocal_251[iVar0], -1, 0);
							if (!unk_0x4915F4759304D5CF(iVar1))
							{
								iVar14 = unk_0xF9D4EF1338E38AFB(iVar1, 242628503);
								if (iVar14 == 7)
								{
									fVar7 = unk_0xEAA5CEF8875FEEED(iLocal_251[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									unk_0x4B690F60A2635642(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_130 && !bLocal_143)
						{
							if (iLocal_195[iVar0] > 0)
							{
								unk_0xD2BB05DE6C584878(iLocal_195[iVar0], &cLocal_232);
							}
						}
						if (!bLocal_120)
						{
							if (!bLocal_148)
							{
								func_84(iLocal_251[iVar0]);
							}
						}
						else if (unk_0xDC5D81351D6A4DDB(iLocal_251[iVar0]))
						{
							unk_0x4C842FAB634AC89E(&(iLocal_251[iVar0]));
						}
					}
					iLocal_200 = (iLocal_200 - 1);
					iLocal_196[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_205 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_83();
	}
}

void func_408(int iParam0)
{
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		func_85(iParam0);
		unk_0xF6B004EA62C83AD4(iParam0, 786603);
	}
}

int func_409(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
	}
	if (unk_0x1095F403F52B42E1(iParam1, 0))
	{
		vVar1 = { unk_0xE2BBD32891C18569(iParam1, true) };
		if (bParam2)
		{
			vVar5 = { unk_0x57323E573695B13F(iParam1) };
			vVar4 = { vVar5 / FtoV(vmag(vVar5)) };
		}
		else
		{
			vVar2 = { unk_0x3201284584C7CD83(iParam1, 0f, 5f, 0f) };
			vVar4 = { vVar2 - vVar1 };
		}
	}
	vVar3 = { vVar1 - vVar0 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	if (func_396(vVar3, vVar4) < 0f)
	{
		return 1;
	}
	return 0;
}

int func_410(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		vVar0 = { unk_0x39D039D3B0625870(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0x1095F403F52B42E1(iParam1, 0))
	{
		vVar1 = { unk_0x39D039D3B0625870(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	vVar0.z = 0f;
	vVar1.z = 0f;
	fVar2 = func_396(vVar0, vVar1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	fVar2 = unk_0x772D91F28C9D2EDC(vVar0.x, vVar0.y, vVar1.x, vVar1.y);
	if (!fVar2 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_411(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_144)
	{
		iVar1 = unk_0xC409B91AC4749F88();
		if (!unk_0x7112137033807390(iVar1, 0))
		{
			iVar2 = unk_0x8F474E419F56E48D(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0xD53D19F97BC843F7(iVar1))
				{
					if (unk_0xF515D4FED124BAAE(iVar1, &iVar0))
					{
						if (unk_0x1095F403F52B42E1(iVar0, 0))
						{
							if (unk_0xC556072C29E00F04(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_412(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7112137033807390(*uParam0, 0))
	{
		if (unk_0x588F5E48C78F1C73(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0x91A7C8CA5E332C03(*uParam0, 6, func_88(), -1, 0, false);
				unk_0xDFA901280292A2FB(iVar0, iLocal_241);
				unk_0xA5DE74AE39867B03(func_88());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0x4B889BDD25E732AA(*uParam0, 1);
				if (unk_0x8CE5E4632E631B03(unk_0x8F474E419F56E48D(*uParam0)))
				{
					unk_0x49BE0FDDF14A305A(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0x91A7C8CA5E332C03(*uParam0, 4, func_91(), -1, 0, false);
				if (bLocal_150)
				{
					unk_0xA5DE74AE39867B03(func_91());
				}
			}
			if (bParam2)
			{
				unk_0x83055D7E96024509(iVar0, true);
				unk_0x2C3F3D88E305DCA7(iVar0, 0);
				unk_0x13E0A8160525AE55(iVar0, 32, false);
			}
			if (bLocal_151)
			{
				unk_0xC2C4AE9DB4A0BEF3(iVar0, 8192, true);
				unk_0xC2C4AE9DB4A0BEF3(iVar0, 65536, true);
				unk_0xC2C4AE9DB4A0BEF3(iVar0, 2, false);
				unk_0x3FB92963BD0665CB(*uParam0, 1);
			}
			unk_0x1F4E5EFBFE503FB3(iVar0, true);
			func_402(iVar0);
			bLocal_149 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_413(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x22C775856F4633CA(0, 12);
	if (iLocal_246 >= -1 && iLocal_247 >= -1)
	{
		while (iVar0 == iLocal_246 || iVar0 == iLocal_247)
		{
			iVar0++;
		}
	}
	else if (iLocal_246 >= -1)
	{
		if (iVar0 == iLocal_246)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			unk_0x9174BE523666C5A0(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0x9174BE523666C5A0(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0x9174BE523666C5A0(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0x9174BE523666C5A0(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0x9174BE523666C5A0(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0x9174BE523666C5A0(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0x9174BE523666C5A0(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0x9174BE523666C5A0(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0x9174BE523666C5A0(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0x9174BE523666C5A0(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0x9174BE523666C5A0(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0x9174BE523666C5A0(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0x9174BE523666C5A0(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0x9174BE523666C5A0(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0x9174BE523666C5A0(iParam0, 95, 95);
			break;
		
		default:
			unk_0x9174BE523666C5A0(iParam0, 73, 73);
			break;
	}
}

void func_414(vector3 vParam0, vector3 vParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_131)
	{
		if (!func_415(vParam0, vParam1, fParam2, 200f))
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				iVar1 = unk_0xC409B91AC4749F88();
				if (!unk_0x7112137033807390(iVar1, 0))
				{
					if (unk_0xA60C975CBAB69F34(iVar1, vParam0, fParam2, fParam2, fParam2, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x01AF8CB960828C2B(vParam0, fParam2, 0, 0, 0, 0, false, 0);
			}
		}
	}
}

int func_415(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3)
{
	if (!unk_0x71364F510A1CB69F())
	{
		if (!bLocal_131)
		{
			if (!iLocal_118)
			{
				if (vmag2(vParam1 - vParam0) - fParam2) < (fParam3 * fParam3)
				{
					if (unk_0x317672E799676CA5(vParam0, fParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_416(int iParam0)
{
	float fVar0;
	
	unk_0x5C2A13372076C38C(iParam0, &cLocal_232);
	while (!unk_0x6F4A062113883115(iParam0, &cLocal_232))
	{
		wait(0);
	}
	fVar0 = unk_0x4B598DA325B2F140(iParam0, &cLocal_232);
	unk_0xD2BB05DE6C584878(iParam0, &cLocal_232);
	return fVar0;
}

void func_417(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	bool bVar3;
	bool bVar4;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		vVar1 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
	}
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_204;
		while (iVar0 < 70)
		{
			switch (iLocal_198[iVar0])
			{
				case 0:
					if (!iLocal_243[iVar0] == 0)
					{
						if (unk_0xA60C975CBAB69F34(iParam0, vLocal_217[iVar0 /*3*/], fLocal_171, fLocal_171, fLocal_171, false, true, 0))
						{
							iLocal_206++;
							iLocal_198[iVar0]++;
						}
					}
					else
					{
						iLocal_198[iVar0] = 99;
					}
					break;
				
				case 1:
					if (10 > iLocal_201)
					{
						if (!unk_0xDC5D81351D6A4DDB(iLocal_250[iVar0]))
						{
							unk_0xCACEBBBEAD8F262E(iLocal_243[iVar0]);
							if (unk_0x7FC99CCC73354033(iLocal_243[iVar0]))
							{
								if ((iLocal_118 || iLocal_132) || (!bLocal_149 && !func_415(vLocal_217[iVar0 /*3*/], vVar1, 5f, fLocal_184)))
								{
									if (bLocal_128)
									{
										func_414(vLocal_217[iVar0 /*3*/], vVar1, fLocal_177);
									}
									iLocal_250[iVar0] = unk_0x48CFBECB146FD1A1(iLocal_243[iVar0], vLocal_217[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_243[iVar0] == joaat("polmav"))
									{
										unk_0xA70C63A3E45BA678(iLocal_250[iVar0], 0);
									}
									unk_0x693A63A8D6B78EA4(iLocal_250[iVar0], fLocal_167[iVar0], fLocal_168[iVar0], fLocal_169[iVar0], fLocal_170[iVar0]);
									unk_0xA5DE74AE39867B03(iLocal_243[iVar0]);
									if (unk_0xD3C4AB5E628133C1(iLocal_250[iVar0], func_89()))
									{
										unk_0x06DE7D435FAAC96A(iLocal_250[iVar0], 1);
										if (!unk_0x8CE5E4632E631B03(iLocal_243[iVar0]))
										{
											unk_0xEC7D542B4EACB7ED(iLocal_250[iVar0], 1);
										}
									}
									if (unk_0xD3C4AB5E628133C1(iLocal_250[iVar0], func_90()))
									{
										unk_0x9174BE523666C5A0(iLocal_250[iVar0], 0, 0);
									}
									unk_0xEAF1F3E17588C851(iLocal_250[iVar0], true);
									iLocal_206 = (iLocal_206 - 1);
									iLocal_201++;
									iLocal_198[iVar0]++;
									bLocal_149 = true;
								}
							}
						}
						else
						{
							iLocal_206 = (iLocal_206 - 1);
							iLocal_201++;
							iLocal_198[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar3)
					{
						if (unk_0x1095F403F52B42E1(iLocal_250[iVar0], 0))
						{
							vVar2 = { unk_0xE2BBD32891C18569(iLocal_250[iVar0], true) };
						}
						if (fLocal_185 == 0f || vdist2(vVar1, vVar2) < (fLocal_185 * fLocal_185))
						{
							if (!func_409(iLocal_250[iVar0], iParam0, 0))
							{
								if (!bLocal_120)
								{
									func_84(iLocal_250[iVar0]);
								}
								else
								{
									unk_0x4C842FAB634AC89E(&(iLocal_250[iVar0]));
								}
								iLocal_201 = (iLocal_201 - 1);
								iLocal_198[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_198[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_204 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_86();
	}
}

void func_418(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	vector3 vVar19;
	
	iVar5 = 0;
	bVar12 = unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC());
	bVar13 = unk_0x3E748D7D743334F1();
	uVar14 = unk_0x29500EC0831EC722();
	if (bVar12)
	{
		if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
		{
			iVar5 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
		}
		vVar8 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
	}
	iVar1 = 0;
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (unk_0xB2C707E9E3A0E44D(iParam0))
		{
			fLocal_173 = unk_0x43471DC9A73EAB3E(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_203;
		while (iVar0 < 85 && !bVar17)
		{
			if (iLocal_193[iVar0] != 99)
			{
				if (iLocal_193[iVar0] == 0)
				{
					if (iLocal_192[iVar0] > 0 && iLocal_242[iVar0] != 0)
					{
						if (!iLocal_118)
						{
							if (fLocal_173 < (fLocal_156[iVar0] + 20000f))
							{
								if (fLocal_173 >= (fLocal_156[iVar0] - (7000f * fParam1)))
								{
									if (func_403(iLocal_242[iVar0]))
									{
										unk_0x2BCFB39E86340DAA(&(iLocal_194[iVar0]), 0);
									}
									else if (unk_0x8CE5E4632E631B03(iLocal_242[iVar0]))
									{
										unk_0x2BCFB39E86340DAA(&(iLocal_194[iVar0]), 2);
									}
									unk_0xFA57C719261AA55D(&(iLocal_194[iVar0]), 1);
									iLocal_208++;
									iLocal_193[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_420(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_173 - fLocal_156[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_416(iLocal_192[iVar0]))
								{
									if (func_403(iLocal_242[iVar0]))
									{
										unk_0x2BCFB39E86340DAA(&(iLocal_194[iVar0]), 0);
									}
									else if (unk_0x8CE5E4632E631B03(iLocal_242[iVar0]))
									{
										unk_0x2BCFB39E86340DAA(&(iLocal_194[iVar0]), 2);
									}
									unk_0xFA57C719261AA55D(&(iLocal_194[iVar0]), 1);
									iLocal_208++;
									iLocal_193[iVar0]++;
								}
								else
								{
									func_420(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_420(iVar0, 1090519040);
					}
				}
				else if (iLocal_193[iVar0] == 1)
				{
					unk_0x5C2A13372076C38C(iLocal_192[iVar0], &cLocal_232);
					bVar11 = false;
					if (unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 0))
					{
						unk_0xCACEBBBEAD8F262E(func_88());
						if (unk_0x7FC99CCC73354033(func_88()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_145 && ((!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 2) && bVar13) || (unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 2) && uVar14)))
					{
						bVar11 = true;
					}
					else
					{
						unk_0xCACEBBBEAD8F262E(func_91());
						bVar11 = unk_0x7FC99CCC73354033(func_91());
					}
					if (!unk_0xDC5D81351D6A4DDB(iLocal_248[iVar0]))
					{
						unk_0xCACEBBBEAD8F262E(iLocal_242[iVar0]);
						if ((unk_0x7FC99CCC73354033(iLocal_242[iVar0]) && unk_0x6F4A062113883115(iLocal_192[iVar0], &cLocal_232)) && bVar11)
						{
							if (fLocal_173 >= (fLocal_156[iVar0] - (fLocal_186 * fParam1)))
							{
								if ((iLocal_132 || iParam2) || (!bLocal_149 && !func_415(vLocal_216[iVar0 /*3*/], vVar8, 5f, fLocal_184)))
								{
									if (bLocal_128)
									{
										func_414(vLocal_216[iVar0 /*3*/], vVar8, fLocal_177);
									}
									iLocal_248[iVar0] = unk_0x48CFBECB146FD1A1(iLocal_242[iVar0], vLocal_216[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_242[iVar0] == joaat("polmav"))
									{
										unk_0xA70C63A3E45BA678(iLocal_248[iVar0], 0);
									}
									if (iLocal_141 && !unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 0))
									{
										func_413(iLocal_248[iVar0]);
									}
									unk_0xE8B3104D1CB25CDC(iLocal_248[iVar0], vLocal_216[iVar0 /*3*/], 0, 0, 1);
									unk_0x693A63A8D6B78EA4(iLocal_248[iVar0], fLocal_152[iVar0], fLocal_153[iVar0], fLocal_154[iVar0], fLocal_155[iVar0]);
									if (unk_0x425CD7B17352316F(iLocal_242[iVar0]) || unk_0x8CE5E4632E631B03(iLocal_242[iVar0]))
									{
										unk_0x99F546A9200EA026(iLocal_248[iVar0], 1084227584);
									}
									if (unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 3))
									{
										unk_0xEAF1F3E17588C851(iLocal_248[iVar0], true);
									}
									if (!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 0))
									{
										unk_0xC19EDC1D7179164C(iLocal_248[iVar0], true, true, 0);
										if (unk_0x34CEB9721AC6A0A9() > 19 || unk_0x34CEB9721AC6A0A9() < 7)
										{
											unk_0x6EB2D9504928F849(iLocal_248[iVar0], 3);
										}
									}
									unk_0xB29E08C7AB729BAD(iLocal_248[iVar0], true);
									unk_0x83055D7E96024509(iLocal_248[iVar0], true);
									unk_0xA5DE74AE39867B03(iLocal_242[iVar0]);
									iLocal_208 = (iLocal_208 - 1);
									iLocal_193[iVar0]++;
									bLocal_149 = true;
								}
								else if (fLocal_173 > fLocal_156[iVar0])
								{
									iLocal_208 = (iLocal_208 - 1);
									func_420(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_193[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_214 || iLocal_214 == 0)) || iLocal_132) || iParam2)
					{
						if (!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 1))
						{
							if (unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 0))
							{
								unk_0xCACEBBBEAD8F262E(func_88());
								bVar11 = unk_0x7FC99CCC73354033(func_88());
								iVar15 = 2;
							}
							else if (!bLocal_145 && ((!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 2) && bVar13) || (unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 2) && uVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								unk_0xCACEBBBEAD8F262E(func_91());
								bVar11 = unk_0x7FC99CCC73354033(func_91());
								iVar15 = 0;
							}
							if (!unk_0x7112137033807390(iLocal_248[iVar0], 0))
							{
								if (!bLocal_149 && unk_0x588F5E48C78F1C73(iLocal_248[iVar0], -1, 0))
								{
									if (bVar11)
									{
										if ((vdist2(unk_0xE2BBD32891C18569(iLocal_248[iVar0], true), vVar8) < 10000f || iParam2) || iLocal_132)
										{
											func_412(&(iLocal_248[iVar0]), iVar15, 0);
											unk_0x2BCFB39E86340DAA(&(iLocal_194[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0x1095F403F52B42E1(iLocal_248[iVar0], 0))
						{
							unk_0x5C2A13372076C38C(iLocal_192[iVar0], &cLocal_232);
							if (fLocal_173 >= fLocal_156[iVar0])
							{
								if (15 > iLocal_199)
								{
									fVar9 = (fLocal_173 - fLocal_156[iVar0]);
									if (unk_0x6F4A062113883115(iLocal_192[iVar0], &cLocal_232))
									{
										if (fVar9 < unk_0x4B598DA325B2F140(iLocal_192[iVar0], &cLocal_232))
										{
											vVar6 = { unk_0xE2BBD32891C18569(iLocal_248[iVar0], true) };
											vVar7 = { unk_0xC0E714F26FD05F43(iLocal_192[iVar0], fVar9, &cLocal_232) };
											if (!func_415(vVar6, vVar8, 5f, fLocal_184) && func_415(vVar7, vVar8, 5f, fLocal_184))
											{
												if (!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 1))
												{
													func_412(&(iLocal_248[iVar0]), iVar15, 0);
												}
												func_420(iVar0, 1090519040);
											}
											else if (((!bLocal_149 || unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 1)) || iLocal_132) || iParam2)
											{
												if (func_406(&(iLocal_248[iVar0]), iLocal_192[iVar0], fVar9, 1, 0, 0, 1, bLocal_146))
												{
													if (!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 1))
													{
														func_412(&(iLocal_248[iVar0]), iVar15, 0);
													}
													unk_0xDCFB67537602326F(iLocal_248[iVar0], true, 0);
													unk_0xD136D67FFCAC2A13(iLocal_248[iVar0], fParam1);
													iLocal_199++;
													iLocal_193[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 1))
											{
												func_412(&(iLocal_248[iVar0]), iVar15, 0);
											}
											func_420(iVar0, 1090519040);
										}
									}
									else if (fVar9 > unk_0x4B598DA325B2F140(iLocal_192[iVar0], &cLocal_232))
									{
										if (!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 1))
										{
											func_412(&(iLocal_248[iVar0]), iVar15, 0);
										}
										func_420(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 1))
									{
										func_412(&(iLocal_248[iVar0]), iVar15, 0);
									}
									func_420(iVar0, 1090519040);
								}
							}
							else if (iLocal_129 && !bLocal_137)
							{
								if (!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 1))
								{
									func_412(&(iLocal_248[iVar0]), iVar15, 0);
								}
								func_420(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 1))
							{
								func_412(&(iLocal_248[iVar0]), iVar15, 0);
							}
							func_420(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_214 = iVar0;
					}
				}
				else if (iLocal_193[iVar0] == 3)
				{
					if (unk_0x1095F403F52B42E1(iLocal_248[iVar0], 0))
					{
						if (unk_0xB2C707E9E3A0E44D(iLocal_248[iVar0]))
						{
							iVar4 = unk_0xB0D49A1F9F054602(iLocal_248[iVar0], -1, 0);
							if (!unk_0x4915F4759304D5CF(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_127)
									{
										if ((!bLocal_122 && !iLocal_119) && func_411(iLocal_248[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_213 || iLocal_213 == 0))
											{
												if (!unk_0x7112137033807390(iVar5, 0))
												{
													bVar11 = false;
													if (!func_419(iLocal_248[iVar0], iVar5) || func_409(iVar5, iLocal_248[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_213 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_142 && !unk_0x05EFB6A616B6FADE(iLocal_194[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_213 || iLocal_213 == 0))
										{
											vVar19 = { unk_0x61141C81AF57CBDC(iParam0, unk_0xE2BBD32891C18569(iLocal_248[iVar0], true)) };
											if (vVar19.y < 0f)
											{
												if (unk_0x69C0BB7D03EE045D(vVar19.y) > unk_0x69C0BB7D03EE045D(vVar19.x))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_213 = iVar0;
										}
									}
									if (bVar18)
									{
										func_408(iLocal_248[iVar0]);
										iLocal_193[iVar0]++;
									}
									else
									{
										unk_0xD136D67FFCAC2A13(iLocal_248[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0xF648DB179A6E71BF(iLocal_248[iVar0]);
							}
						}
						else
						{
							iLocal_193[iVar0]++;
						}
					}
					else
					{
						iLocal_193[iVar0]++;
					}
				}
				else if (iLocal_193[iVar0] == 4)
				{
					if (unk_0x1095F403F52B42E1(iLocal_248[iVar0], 0))
					{
						if (!unk_0xB2C707E9E3A0E44D(iLocal_248[iVar0]))
						{
							iLocal_193[iVar0]++;
						}
						else
						{
							iVar4 = unk_0xB0D49A1F9F054602(iLocal_248[iVar0], -1, 0);
							if (!unk_0x4915F4759304D5CF(iVar4))
							{
								unk_0xD136D67FFCAC2A13(iLocal_248[iVar0], fParam1);
							}
							else
							{
								unk_0xF648DB179A6E71BF(iLocal_248[iVar0]);
							}
							if (unk_0x6F4A062113883115(iLocal_192[iVar0], &cLocal_232))
							{
								if (fLocal_173 > (fLocal_156[iVar0] + unk_0x4B598DA325B2F140(iLocal_192[iVar0], &cLocal_232)))
								{
									unk_0xF648DB179A6E71BF(iLocal_248[iVar0]);
								}
							}
							else
							{
								unk_0xF648DB179A6E71BF(iLocal_248[iVar0]);
							}
						}
					}
					else
					{
						iLocal_193[iVar0]++;
					}
				}
				else if (iLocal_193[iVar0] == 5)
				{
					if (!unk_0x7112137033807390(iLocal_248[iVar0], 0))
					{
						fVar10 = unk_0xEAA5CEF8875FEEED(iLocal_248[iVar0]);
					}
					iLocal_199 = (iLocal_199 - 1);
					func_420(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_203 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_213 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_214 = 0;
		}
	}
	else
	{
		func_87();
	}
}

int func_419(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		vVar0 = { unk_0x39D039D3B0625870(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0x1095F403F52B42E1(iParam1, 0))
	{
		vVar1 = { unk_0x39D039D3B0625870(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	vVar0.z = 0f;
	vVar1.z = 0f;
	fVar2 = func_396(vVar0, vVar1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_420(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_242[iParam0] == 0)
	{
		unk_0xA5DE74AE39867B03(iLocal_242[iParam0]);
	}
	if (!unk_0x7112137033807390(iLocal_248[iParam0], 0))
	{
		unk_0xDCFB67537602326F(iLocal_248[iParam0], true, 0);
		unk_0xB29E08C7AB729BAD(iLocal_248[iParam0], false);
		iVar0 = unk_0xB0D49A1F9F054602(iLocal_248[iParam0], -1, 0);
		if (!unk_0x4915F4759304D5CF(iVar0) && iVar0 != unk_0xA19140A5C42D8715())
		{
			unk_0x1F4E5EFBFE503FB3(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0x4123165906C17D87(iVar0, iLocal_248[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0xC2C4AE9DB4A0BEF3(iVar0, 8192, true);
			if (bLocal_151)
			{
				unk_0xC2C4AE9DB4A0BEF3(iVar0, 65536, true);
				unk_0xC2C4AE9DB4A0BEF3(iVar0, 2, false);
			}
			unk_0x3B7A32E04BBE59A5(iVar0, 6, false);
			unk_0x4B690F60A2635642(iVar0, fParam1);
		}
	}
	if (!bLocal_120)
	{
		if (!bLocal_148)
		{
			func_402(iVar0);
			func_84(iLocal_248[iParam0]);
		}
	}
	else
	{
		if (unk_0xDC5D81351D6A4DDB(iVar0))
		{
			unk_0x680F17660351F21B(&iVar0);
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_248[iParam0]))
		{
			unk_0x4C842FAB634AC89E(&(iLocal_248[iParam0]));
		}
	}
	if (!bLocal_130 && !bLocal_143)
	{
		if (iLocal_192[iParam0] > 0)
		{
			unk_0xD2BB05DE6C584878(iLocal_192[iParam0], &cLocal_232);
		}
	}
	iLocal_193[iParam0] = 99;
}

void func_421(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		vVar4 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
	}
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (unk_0xB2C707E9E3A0E44D(iParam0))
		{
			iVar0 = unk_0x144B04D921253078(iParam0);
			vVar1 = { unk_0x0FCF8F11A1DAD1F0(iVar0, fParam1) };
			vVar2 = { unk_0xE2BBD32891C18569(iParam0, true) };
			vVar3 = { vVar2 - vVar1 };
			fVar5 = vmag(vVar3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_414(vVar1, vVar4, fVar5);
		}
	}
}

void func_422(int iParam0, float fParam1)
{
	if (!bLocal_131)
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (vdist2(unk_0xE2BBD32891C18569(iParam0, true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > (fParam1 * fParam1))
				{
					unk_0xF2DE32563C8C0849(1);
				}
				else
				{
					unk_0xF2DE32563C8C0849(0);
				}
			}
		}
	}
}

void func_423(int iParam0, float fParam1)
{
	if (!bLocal_131)
	{
		if (!unk_0x7112137033807390(iParam0, 0))
		{
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (vdist2(unk_0xE2BBD32891C18569(iParam0, true), unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true)) > (fParam1 * fParam1))
				{
					unk_0x5FEB5D55B0DE217B(1f);
				}
				else
				{
					unk_0x5FEB5D55B0DE217B(0f);
				}
			}
		}
	}
}

void func_424(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0x7112137033807390(iParam0, 0) && unk_0xB2C707E9E3A0E44D(iParam0))
	{
		fVar1 = (fLocal_187 + 2000f);
		fVar2 = (fLocal_188 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = unk_0x144B04D921253078(iParam0);
			if (fVar1 <= unk_0xC1C749861A8BC00B(iVar0))
			{
				if (iLocal_209 == 0)
				{
					vLocal_228 = { unk_0x0FCF8F11A1DAD1F0(iVar0, fLocal_187) };
					iLocal_209++;
				}
				else if (iLocal_209 == 1)
				{
					vLocal_229 = { unk_0x0FCF8F11A1DAD1F0(iVar0, fVar1) };
					iLocal_209++;
				}
				else if (!bLocal_149)
				{
					if (vLocal_228.x > vLocal_229.x)
					{
						fVar3 = vLocal_228.x;
						vLocal_228.x = vLocal_229.x;
						vLocal_229.x = fVar3;
					}
					if (vLocal_228.y > vLocal_229.y)
					{
						fVar3 = vLocal_228.y;
						vLocal_228.y = vLocal_229.y;
						vLocal_229.y = fVar3;
					}
					if (vLocal_228.z > vLocal_229.z)
					{
						fVar3 = vLocal_228.z;
						vLocal_228.z = vLocal_229.z;
						vLocal_229.z = fVar3;
					}
					vLocal_228 = { vLocal_228 - Vector(fLocal_191, fLocal_191, fLocal_191) };
					vLocal_229 = { vLocal_229 + Vector(fLocal_191, fLocal_191, fLocal_191) };
					unk_0x68184E06469338F4(vLocal_228, vLocal_229, false, 0);
					fLocal_187 = fVar1;
					iLocal_209 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x144B04D921253078(iParam0);
			if (iLocal_212 == 0)
			{
				vLocal_230 = { unk_0x0FCF8F11A1DAD1F0(iVar0, fLocal_188) };
				iLocal_212++;
			}
			else if (iLocal_212 == 1)
			{
				vLocal_231 = { unk_0x0FCF8F11A1DAD1F0(iVar0, fVar2) };
				iLocal_212++;
			}
			else if (!bLocal_149 && !bVar4)
			{
				if (vLocal_230.x > vLocal_231.x)
				{
					fVar3 = vLocal_230.x;
					vLocal_230.x = vLocal_231.x;
					vLocal_231.x = fVar3;
				}
				if (vLocal_230.y > vLocal_231.y)
				{
					fVar3 = vLocal_230.y;
					vLocal_230.y = vLocal_231.y;
					vLocal_231.y = fVar3;
				}
				if (vLocal_230.z > vLocal_231.z)
				{
					fVar3 = vLocal_230.z;
					vLocal_230.z = vLocal_231.z;
					vLocal_231.z = fVar3;
				}
				vLocal_230 = { vLocal_230 - Vector(fLocal_191, fLocal_191, fLocal_191) };
				vLocal_231 = { vLocal_231 + Vector(fLocal_191, fLocal_191, fLocal_191) };
				unk_0x387E83E60256EA18(vLocal_230, vLocal_231, true);
				fLocal_188 = fVar2;
				iLocal_212 = 0;
			}
		}
	}
}

void func_425()
{
	unk_0x413F34FCFABEDE4B(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	unk_0xE4BB0460936DDEFA(0);
	unk_0x11A2485BCA227247(0);
	unk_0xBDD0761B9A38C772(0);
	unk_0x5FEB5D55B0DE217B(0f);
	unk_0xF2DE32563C8C0849(0);
	unk_0x56C835FB478F652B(3);
}

void func_426()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((unk_0xFD34717937104F1C() - iLocal_323) > 3)
	{
		iVar0 = 0;
		iVar1 = iLocal_251;
		iVar2 = iLocal_248;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (iLocal_195[iVar0] > 0)
			{
				if (fLocal_341 > (fLocal_165[iVar0] - 5000f))
				{
					unk_0x5C2A13372076C38C(iLocal_195[iVar0], sLocal_359);
				}
				else if (fLocal_341 > (fLocal_165[iVar0] + 3000f))
				{
					if (!unk_0xB2C707E9E3A0E44D(iLocal_251[iVar0]))
					{
						unk_0xD2BB05DE6C584878(iLocal_195[iVar0], sLocal_359);
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iLocal_192[iVar0] > 0)
			{
				if (fLocal_341 > (fLocal_156[iVar0] - 5000f))
				{
					unk_0x5C2A13372076C38C(iLocal_192[iVar0], sLocal_359);
				}
				else if (fLocal_341 > (fLocal_156[iVar0] + 3000f))
				{
					if (!unk_0xB2C707E9E3A0E44D(iLocal_248[iVar0]))
					{
						unk_0xD2BB05DE6C584878(iLocal_192[iVar0], sLocal_359);
					}
				}
			}
			iVar0++;
		}
		iLocal_323 = unk_0xFD34717937104F1C();
	}
}

void func_427()
{
	if (iLocal_338 == 0)
	{
		func_268(75, 1, 0, 1, 0);
		func_268(76, 0, 0, 1, 0);
		iLocal_337 = unk_0xB68EB57358F46F86(307.3065f, -589.9595f, 43.302f, "v_hospital");
		iLocal_338 = 1;
	}
	else if (iLocal_338 == 1)
	{
		if (!func_48())
		{
			if (unk_0x893915B076B1DDF7(iLocal_337))
			{
				if (!unk_0x2A8A410BC14B59BC(iLocal_337))
				{
					unk_0x1BBA2DDBEBA5EC7A(iLocal_337);
				}
				else
				{
					unk_0x40E4EC905662FAF7(iLocal_337, 1);
					iLocal_338 = 2;
				}
			}
			else
			{
				iLocal_337 = unk_0xB68EB57358F46F86(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_338 == 2)
	{
		if (unk_0x893915B076B1DDF7(iLocal_337))
		{
			if (unk_0x2A8A410BC14B59BC(iLocal_337))
			{
				func_268(181, 0, 0, 1, 0);
				iLocal_338 = 3;
			}
			else
			{
				iLocal_338 = 1;
			}
		}
		else
		{
			iLocal_338 = 1;
		}
	}
	else if (iLocal_338 == 3)
	{
		if (!func_48())
		{
			if (unk_0x893915B076B1DDF7(iLocal_337))
			{
				if (unk_0x2A8A410BC14B59BC(iLocal_337))
				{
					unk_0xEF6CE4AF8D633F85(iLocal_337);
					iLocal_338 = 4;
				}
				else
				{
					unk_0x1BBA2DDBEBA5EC7A(iLocal_337);
				}
			}
			else
			{
				iLocal_337 = unk_0xB68EB57358F46F86(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_338 == 4)
	{
		if (unk_0x893915B076B1DDF7(iLocal_337))
		{
			if (!unk_0x2A8A410BC14B59BC(iLocal_337))
			{
				unk_0x1BBA2DDBEBA5EC7A(iLocal_337);
			}
		}
		else
		{
			iLocal_337 = unk_0xB68EB57358F46F86(307.3065f, -589.9595f, 43.302f, "v_hospital");
		}
	}
}

void func_428(float fParam0, vector3 vParam1)
{
	float fVar0;
	
	if (func_14(Local_540[0 /*2*/]))
	{
		unk_0x843CB56BFD84C750(Local_540[0 /*2*/], 1, 1);
		unk_0x843CB56BFD84C750(Local_540[0 /*2*/], 0, 1);
		if (fLocal_341 > 10000f)
		{
			fVar0 = vdist2(unk_0xE2BBD32891C18569(Local_540[0 /*2*/], true), vParam1);
			if (fVar0 > 14400f)
			{
				func_51(&(Local_540[0 /*2*/]), 0);
			}
		}
	}
	if (func_14(Local_540[1 /*2*/]))
	{
		if (fLocal_341 > 10000f)
		{
			fVar0 = vdist2(unk_0xE2BBD32891C18569(Local_540[1 /*2*/], true), vParam1);
			if (fVar0 > 14400f)
			{
				func_51(&(Local_540[1 /*2*/]), 0);
			}
		}
	}
	if (func_14(Local_540[2 /*2*/]))
	{
		if (Local_537.f_1 == 0)
		{
			unk_0xCACEBBBEAD8F262E(iLocal_345);
			if (unk_0x7FC99CCC73354033(iLocal_345))
			{
				if (!unk_0xDC5D81351D6A4DDB(Local_537))
				{
					Local_537 = unk_0x91A7C8CA5E332C03(Local_540[2 /*2*/], 26, iLocal_345, -1, 1, true);
					unk_0xA5DE74AE39867B03(iLocal_345);
					unk_0x1F4E5EFBFE503FB3(Local_537, true);
					Local_537.f_1 = 1;
				}
			}
			if (!unk_0xB2C707E9E3A0E44D(Local_540[2 /*2*/]))
			{
				unk_0x693A63A8D6B78EA4(Local_540[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
			}
		}
		if (!unk_0xB2C707E9E3A0E44D(Local_540[2 /*2*/]))
		{
			if (!iLocal_311)
			{
				if (fLocal_341 >= 200f)
				{
					unk_0x4ABEB615D66A01A9(Local_540[2 /*2*/], 2, sLocal_359, 1);
					unk_0xD136D67FFCAC2A13(Local_540[2 /*2*/], fParam0);
					iLocal_311 = 1;
				}
			}
		}
		else
		{
			unk_0xD136D67FFCAC2A13(Local_540[2 /*2*/], fParam0);
			if (!iLocal_297)
			{
				if (fLocal_341 > 3500f && fLocal_341 < 4500f)
				{
					unk_0x5ED0FDD822BD1865(Local_540[2 /*2*/], 2000, unk_0xFEB6EEC0545AF7AA("HELDDOWN"), 0);
					iLocal_297 = 1;
				}
			}
		}
		if (fLocal_341 > 10000f)
		{
			fVar0 = vdist2(unk_0xE2BBD32891C18569(Local_540[2 /*2*/], true), vParam1);
			if (fVar0 > 14400f)
			{
				if (unk_0xB2C707E9E3A0E44D(Local_540[2 /*2*/]))
				{
					unk_0xF648DB179A6E71BF(Local_540[2 /*2*/]);
				}
				unk_0xD2BB05DE6C584878(2, sLocal_359);
				unk_0xA5DE74AE39867B03(iLocal_345);
				func_55(&Local_537, 0);
				func_51(&(Local_540[2 /*2*/]), 0);
			}
		}
	}
}

void func_429()
{
	switch (iLocal_274)
	{
		case 0:
			if (!bLocal_276)
			{
				if (!func_48())
				{
					func_17(unk_0xA19140A5C42D8715(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
					if (iLocal_277 == 0)
					{
						if (iLocal_273 == 1)
						{
							if (func_11(unk_0xA19140A5C42D8715()))
							{
								func_3(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 50f, 13, 5000, 0, 0);
								iLocal_277 = 1;
							}
						}
					}
					func_17(unk_0xA19140A5C42D8715(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 1, 1);
				}
				func_57(&(Local_275.f_28[0]));
				func_53(&(Local_275.f_35[0]));
				func_53(&(Local_275.f_35[1]));
				func_452();
				func_450(1);
				func_447();
				if (func_14(Local_535))
				{
					unk_0x99F546A9200EA026(Local_535, 1084227584);
				}
				func_428(fLocal_343, vLocal_549);
				func_440(1);
				iLocal_274 = 2;
			}
			else
			{
				func_439("NMT_2_RCM", 0);
				if (unk_0x2686487E572FE93A())
				{
					unk_0xDD8E1A9BA509D950(sLocal_364, 4, 0, 0, Local_534.f_1);
				}
				if (func_37(1, 1093140480, 0))
				{
					if (func_11(Local_275.f_35[0]))
					{
						func_438(&Local_535, &(Local_275.f_35[0]));
					}
					if (func_11(Local_535))
					{
						unk_0x9CBCA0C1A4935577(Local_535);
						unk_0xD6CDDEFB0FD5B191(Local_535, false, false, false, false, false, false, 0, false);
					}
					if (func_11(Local_275.f_35[1]))
					{
						func_438(&Local_536, &(Local_275.f_35[1]));
					}
					if (func_11(Local_536))
					{
						unk_0x9CBCA0C1A4935577(Local_536);
						unk_0xD6CDDEFB0FD5B191(Local_536, false, false, false, false, false, false, 0, false);
					}
					unk_0xE216F8B2802ABABF(unk_0xA19140A5C42D8715(), sLocal_363, 0, 0, 0);
					unk_0xE216F8B2802ABABF(Local_533, sLocal_362, 2, Local_533.f_1, 0);
					unk_0xE216F8B2802ABABF(Local_532, sLocal_361, 2, Local_532.f_1, 0);
					unk_0xE216F8B2802ABABF(Local_534, sLocal_364, 2, Local_534.f_1, 0);
					if (func_14(Local_535))
					{
						unk_0xE216F8B2802ABABF(Local_535, sLocal_365, 0, 0, 0);
					}
					else
					{
						func_53(&(Local_275.f_35[0]));
						func_53(&Local_535);
						unk_0xE216F8B2802ABABF(Local_535, sLocal_365, 2, Local_535.f_1, 0);
					}
					if (func_14(Local_536))
					{
						unk_0xE216F8B2802ABABF(Local_536, sLocal_366, 0, 0, 0);
					}
					else
					{
						func_53(&(Local_275.f_35[1]));
						func_53(&Local_536);
						unk_0xE216F8B2802ABABF(Local_536, sLocal_366, 2, Local_536.f_1, 0);
					}
					func_22(800, 0);
					unk_0xF748D06B9A97191E(1);
					unk_0x80D42964D19AF118(0);
					wait(0);
					func_437();
					func_293(-1310.7f, -640.22f, 26.54f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_452();
					func_57(&(Local_275.f_28[0]));
					unk_0x5FEB5D55B0DE217B(0.3f);
					unk_0x60C495B6942EC817(0.3f);
					func_450(0);
					func_428(fLocal_343, vLocal_549);
					iLocal_274 = 1;
				}
			}
			break;
		
		case 1:
			func_428(fLocal_343, vLocal_549);
			if (!unk_0xDC5D81351D6A4DDB(Local_533))
			{
				if (unk_0xDC5D81351D6A4DDB(unk_0xD6AE14889DC50F06(sLocal_362, 0)))
				{
					Local_533 = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06(sLocal_362, 0));
				}
			}
			if (!unk_0xDC5D81351D6A4DDB(Local_532))
			{
				if (unk_0xDC5D81351D6A4DDB(unk_0xD6AE14889DC50F06(sLocal_361, 0)))
				{
					Local_532 = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06(sLocal_361, 0));
				}
			}
			if (!unk_0xDC5D81351D6A4DDB(Local_534))
			{
				if (unk_0xDC5D81351D6A4DDB(unk_0xD6AE14889DC50F06(sLocal_364, 0)))
				{
					Local_534 = unk_0xA2EA4BA455370F3C(unk_0xD6AE14889DC50F06(sLocal_364, 0));
				}
			}
			if (!unk_0xDC5D81351D6A4DDB(Local_535))
			{
				if (unk_0xDC5D81351D6A4DDB(unk_0xD6AE14889DC50F06(sLocal_365, 0)))
				{
					Local_535 = unk_0xB86D86A5DBBC79F0(unk_0xD6AE14889DC50F06(sLocal_365, 0));
				}
			}
			if (!unk_0xDC5D81351D6A4DDB(Local_536))
			{
				if (unk_0xDC5D81351D6A4DDB(unk_0xD6AE14889DC50F06(sLocal_366, 0)))
				{
					Local_536 = unk_0xB86D86A5DBBC79F0(unk_0xD6AE14889DC50F06(sLocal_366, 0));
				}
			}
			if ((func_14(Local_535) && func_21(Local_533)) && func_21(Local_532))
			{
				if (unk_0x0FFE9FEDC2E0AC88(sLocal_362, 0))
				{
					unk_0xB6B24463498F5F41();
					if (!unk_0xB10F7FE89663CB5B(Local_533, Local_535))
					{
						unk_0x692D5500D82E4F5D(Local_533, Local_535, 0);
					}
					func_436();
				}
				if (unk_0x0FFE9FEDC2E0AC88(sLocal_361, 0))
				{
					if (!unk_0xB10F7FE89663CB5B(Local_532, Local_535))
					{
						unk_0x692D5500D82E4F5D(Local_532, Local_535, 2);
					}
					func_435();
				}
				if (unk_0x0FFE9FEDC2E0AC88(sLocal_365, 0))
				{
					func_434();
					unk_0xC53974682AC939A9(Local_535, 1);
					unk_0x99F546A9200EA026(Local_535, 1084227584);
					unk_0xC4669945DFB7EFAB(Local_535);
				}
				unk_0x49A185A881A095D4(Local_535, 1);
				iLocal_318 = 1;
			}
			if (func_14(Local_536) && func_21(Local_534))
			{
				if (unk_0x0FFE9FEDC2E0AC88(sLocal_364, 0))
				{
					if (!unk_0xB10F7FE89663CB5B(Local_534, Local_536))
					{
						unk_0x692D5500D82E4F5D(Local_534, Local_536, -1);
					}
					func_432();
				}
				if (unk_0x0FFE9FEDC2E0AC88(sLocal_366, 0))
				{
					func_430();
					unk_0xC53974682AC939A9(Local_536, 1);
					unk_0xC4669945DFB7EFAB(Local_536);
				}
			}
			if (unk_0x9375DEC0CFA8D39E(0))
			{
				unk_0xD87B76260C547F31(22f);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
			}
			if (unk_0x5E64B8EB80D23E10() && unk_0x71364F510A1CB69F())
			{
				unk_0x01AF8CB960828C2B(-1312.556f, -664.3428f, 25.5716f, 150f, 0, 0, 0, 0, false, 0);
			}
			if (!unk_0x5CA3186381FC012C())
			{
				func_450(1);
				func_447();
				func_440(0);
				iLocal_274 = 2;
			}
			else
			{
				if (unk_0x95BED12E084A8F9A() >= 104000)
				{
					unk_0xD481A812073CCF02(2, 18, 1);
				}
				if (unk_0x95BED12E084A8F9A() > 900 && unk_0x95BED12E084A8F9A() < 1480)
				{
					unk_0x5FEB5D55B0DE217B(0f);
					unk_0x60C495B6942EC817(0f);
				}
				else
				{
					unk_0x5FEB5D55B0DE217B(0.3f);
					unk_0x60C495B6942EC817(0.3f);
				}
				func_450(0);
			}
			break;
		
		case 2:
			if (func_14(Local_535))
			{
				unk_0x49A185A881A095D4(Local_535, 1);
				iLocal_318 = 1;
			}
			if (unk_0x5CA3186381FC012C())
			{
				unk_0x7E0C95613122D046(0);
			}
			else
			{
				if (unk_0x7974D616EF03E483())
				{
					unk_0xFB35B0BAD6F5AD8F();
				}
				if (bLocal_276)
				{
					func_24(1, 1, 1, 1);
					func_32(0, 0, 1, 0);
				}
				iLocal_317 = 0;
				func_542(&Local_275, 0, 1);
				func_428(fLocal_343, vLocal_549);
				func_291(1);
			}
			break;
	}
}

void func_430()
{
	if (func_14(Local_536))
	{
		unk_0x9CBCA0C1A4935577(Local_536);
		unk_0x14293208022014FA(Local_536, 1);
		unk_0x9174BE523666C5A0(Local_536, 0, 0);
		unk_0xC19EDC1D7179164C(Local_536, true, true, 0);
		unk_0xAB9FD40CC0E419E3(Local_536, false);
		unk_0x0BE3742BB3253F0E(Local_536, true);
		unk_0x071AF574B483D05F(Local_536, true);
		unk_0x6259CDB47862A4F3(Local_536, 2000, 0);
		unk_0x28BDBB4EFE92691D(Local_536, 1);
		unk_0x62433ED3D79270C8(Local_536, false);
		unk_0xB9199416158EE29E(Local_536, false);
		unk_0xF0F3162A538A2D92(Local_536, 0);
		unk_0x6B6894ACFD0185EF(Local_536, 0, 1);
		unk_0x14293208022014FA(Local_536, 3);
		unk_0xF4B7B294E1D454A2(Local_536, 0, false);
		unk_0xFC00A668AFC2126D(Local_536.f_1, true);
		func_431(Local_536, 1);
		unk_0x4299736016AECE26(Local_536, Local_536.f_3, 1, false, 0, 1);
		unk_0x693A63A8D6B78EA4(Local_536, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		unk_0xB29E08C7AB729BAD(Local_536, true);
	}
}

void func_431(int iParam0, int iParam1)
{
	Global_93232.f_22[iParam1] = iParam0;
}

void func_432()
{
	if (func_21(Local_534))
	{
		unk_0x72A0FF8C49CFFC0D(Local_534, 4, 0, 0, 0);
		unk_0x8DB49F2EDD326F53(Local_534.f_1, true);
		unk_0x96BFF0680C7B6FD5(Local_534, false);
		unk_0xC35C0EB12F3FFC86(Local_534, 0);
		unk_0x13E0A8160525AE55(Local_534, 32, false);
		unk_0x13E0A8160525AE55(Local_534, 29, false);
		unk_0x13E0A8160525AE55(Local_534, 116, false);
		unk_0x80B6201B269FC581(Local_534, true);
		unk_0x98D1B1BD9C3AA456(Local_534, true, 1);
		if (unk_0x749F5228DEB730FF(Local_534))
		{
			unk_0xF8136E11BE4BEAC3(Local_534);
		}
		unk_0xDFA901280292A2FB(Local_534, iLocal_354);
		func_433(&uLocal_367, 3, Local_534, "DINAPOLI", 0, 1);
		unk_0x9D01B1015AD5A3C8(Local_534, 1);
		unk_0x1F4E5EFBFE503FB3(Local_534, true);
	}
}

void func_433(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_434()
{
	if (func_14(Local_535))
	{
		unk_0x9CBCA0C1A4935577(Local_535);
		unk_0x14293208022014FA(Local_535, 1);
		unk_0x9174BE523666C5A0(Local_535, 65, 0);
		unk_0x0BE3742BB3253F0E(Local_535, true);
		unk_0x071AF574B483D05F(Local_535, true);
		unk_0x6259CDB47862A4F3(Local_535, 2000, 0);
		unk_0x62433ED3D79270C8(Local_535, false);
		unk_0xB9199416158EE29E(Local_535, false);
		unk_0xF4B7B294E1D454A2(Local_535, 5, false);
		unk_0xFC00A668AFC2126D(Local_535.f_1, true);
		unk_0x5941346047B1E7C4(Local_535);
		func_431(Local_535, 0);
	}
}

void func_435()
{
	if (func_21(Local_532))
	{
		unk_0xA0DEC6E1399EE624(Local_532);
		unk_0x8DB49F2EDD326F53(Local_532.f_1, true);
		unk_0x96BFF0680C7B6FD5(Local_532, false);
		unk_0xCB6F83EEDBCC77C4(Local_532, 0);
		unk_0x13E0A8160525AE55(Local_532, 32, false);
		unk_0x13E0A8160525AE55(Local_532, 132, true);
		unk_0x13E0A8160525AE55(Local_532, 29, false);
		unk_0x13E0A8160525AE55(Local_532, 116, false);
		if (unk_0x749F5228DEB730FF(Local_532))
		{
			unk_0xF8136E11BE4BEAC3(Local_532);
		}
		unk_0xDFA901280292A2FB(Local_532, iLocal_355);
		func_433(&uLocal_367, 5, Local_532, "MRSTHORNHILL", 0, 1);
		unk_0x9D01B1015AD5A3C8(Local_532, 1);
		unk_0x1F4E5EFBFE503FB3(Local_532, true);
	}
}

void func_436()
{
	if (func_21(Local_533))
	{
		unk_0xA0DEC6E1399EE624(Local_533);
		unk_0x8DB49F2EDD326F53(Local_533.f_1, true);
		unk_0x96BFF0680C7B6FD5(Local_533, false);
		unk_0xCB6F83EEDBCC77C4(Local_533, 0);
		unk_0x13E0A8160525AE55(Local_533, 32, false);
		unk_0x13E0A8160525AE55(Local_533, 132, true);
		unk_0x13E0A8160525AE55(Local_533, 29, false);
		unk_0x13E0A8160525AE55(Local_533, 116, false);
		if (unk_0x749F5228DEB730FF(Local_533))
		{
			unk_0xF8136E11BE4BEAC3(Local_533);
		}
		unk_0xDFA901280292A2FB(Local_533, iLocal_355);
		func_433(&uLocal_367, 4, Local_533, "NIGEL", 0, 1);
		unk_0x9D01B1015AD5A3C8(Local_533, 1);
		unk_0x1F4E5EFBFE503FB3(Local_533, true);
	}
}

void func_437()
{
	int iVar0;
	
	iVar0 = func_287();
	if (iVar0 == -1)
	{
		return;
	}
	Global_105157[iVar0 /*10*/] = 1;
}

void func_438(int iParam0, var uParam1)
{
	*iParam0 = *uParam1;
	*uParam1 = 0;
}

void func_439(char* sParam0, bool bParam1)
{
	func_296(bParam1);
	unk_0x9D7A6D81C3BE2AAE(sParam0, 8);
}

void func_440(bool bParam0)
{
	func_446(sLocal_359, iLocal_333, bParam0, 1);
	func_445();
	func_444(1);
	func_443(joaat("a_m_m_bevhills_02"));
	func_388();
	fLocal_183 = 250f;
	bLocal_140 = true;
	func_442(1);
	bLocal_146 = true;
	func_441(1, 0, -1);
	unk_0x90E641761C692B84(2);
}

void func_441(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		iLocal_141 = 1;
		iLocal_246 = iParam1;
		iLocal_247 = iParam2;
	}
}

void func_442(bool bParam0)
{
	bLocal_151 = bParam0;
}

void func_443(int iParam0)
{
	iLocal_245 = iParam0;
}

void func_444(int iParam0)
{
	bLocal_145 = iParam0;
}

void func_445()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	vLocal_216[0 /*3*/] = { -1189.919f, -864.3419f, 13.5062f };
	fLocal_152[0] = 0.011f;
	fLocal_153[0] = -0.0057f;
	fLocal_154[0] = -0.4728f;
	fLocal_155[0] = 0.8811f;
	iLocal_192[0] = 3;
	fLocal_156[0] = 12794f;
	iLocal_242[0] = joaat("f620");
	vLocal_216[1 /*3*/] = { -1168.025f, -846.5394f, 13.8245f };
	fLocal_152[1] = 0.0067f;
	fLocal_153[1] = 0.0025f;
	fLocal_154[1] = 0.3507f;
	fLocal_155[1] = 0.9364f;
	iLocal_192[1] = 4;
	fLocal_156[1] = 12926f;
	iLocal_242[1] = joaat("washington");
	vLocal_216[2 /*3*/] = { -1052.359f, -730.7704f, 18.729f };
	fLocal_152[2] = -0.0125f;
	fLocal_153[2] = -0.0121f;
	fLocal_154[2] = 0.9079f;
	fLocal_155[2] = 0.4187f;
	iLocal_192[2] = 14;
	fLocal_156[2] = 19594.96f;
	iLocal_242[2] = joaat("serrano");
	vLocal_216[3 /*3*/] = { -1050.453f, -743.3076f, 18.7718f };
	fLocal_152[3] = -0.0019f;
	fLocal_153[3] = -0.0002f;
	fLocal_154[3] = -0.3894f;
	fLocal_155[3] = 0.9211f;
	iLocal_192[3] = 6;
	fLocal_156[3] = 20400f;
	iLocal_242[3] = joaat("washington");
	vLocal_216[4 /*3*/] = { -1032.554f, -734.0855f, 19.1223f };
	fLocal_152[4] = 0.0233f;
	fLocal_153[4] = -0.0077f;
	fLocal_154[4] = -0.4212f;
	fLocal_155[4] = 0.9066f;
	iLocal_192[4] = 16;
	fLocal_156[4] = 19960.85f;
	iLocal_242[4] = joaat("serrano");
	vLocal_216[5 /*3*/] = { -865.4848f, -623.928f, 28.3187f };
	fLocal_152[5] = 0.0038f;
	fLocal_153[5] = -0.0257f;
	fLocal_154[5] = 0.9893f;
	fLocal_155[5] = -0.1433f;
	iLocal_192[5] = 7;
	fLocal_156[5] = 28417f;
	iLocal_242[5] = joaat("washington");
	vLocal_216[6 /*3*/] = { -869.6063f, -612.9931f, 28.5539f };
	fLocal_152[6] = 0.005f;
	fLocal_153[6] = -0.0119f;
	fLocal_154[6] = 0.9777f;
	fLocal_155[6] = -0.2094f;
	iLocal_192[6] = 8;
	fLocal_156[6] = 28417f;
	iLocal_242[6] = joaat("serrano");
	vLocal_216[7 /*3*/] = { -853.7338f, -652.7806f, 27.3348f };
	fLocal_152[7] = -0.0022f;
	fLocal_153[7] = -0.0021f;
	fLocal_154[7] = 0.7085f;
	fLocal_155[7] = 0.7057f;
	iLocal_192[7] = 9;
	fLocal_156[7] = 28549f;
	iLocal_242[7] = joaat("serrano");
	vLocal_216[8 /*3*/] = { -797.3943f, -667.453f, 28.1434f };
	fLocal_152[8] = 0.0434f;
	fLocal_153[8] = 0.0031f;
	fLocal_154[8] = -0.7039f;
	fLocal_155[8] = 0.709f;
	iLocal_192[8] = 10;
	fLocal_156[8] = 30654f;
	iLocal_242[8] = joaat("feltzer2");
	vLocal_216[9 /*3*/] = { -728.5153f, -661.8074f, 29.8396f };
	fLocal_152[9] = -0.0017f;
	fLocal_153[9] = 0.0032f;
	fLocal_154[9] = -0.7028f;
	fLocal_155[9] = 0.7114f;
	iLocal_192[9] = 11;
	fLocal_156[9] = 33027f;
	iLocal_242[9] = joaat("rapidgt");
	vLocal_216[10 /*3*/] = { -595.1748f, -661.9557f, 31.8497f };
	fLocal_152[10] = 0.0098f;
	fLocal_153[10] = -0.0088f;
	fLocal_154[10] = -0.7017f;
	fLocal_155[10] = 0.7123f;
	iLocal_192[10] = 15;
	fLocal_156[10] = 48186f;
	iLocal_242[10] = joaat("sultan");
	vLocal_216[11 /*3*/] = { -477.1852f, -644.7173f, 32.0538f };
	fLocal_152[11] = -0.0087f;
	fLocal_153[11] = 0.0318f;
	fLocal_154[11] = 0.0461f;
	fLocal_155[11] = 0.9984f;
	iLocal_192[11] = 17;
	fLocal_156[11] = 55765.85f;
	iLocal_242[11] = joaat("serrano");
	vLocal_216[12 /*3*/] = { -489.0458f, -666.3751f, 32.3303f };
	fLocal_152[12] = 0.0113f;
	fLocal_153[12] = 0.0176f;
	fLocal_154[12] = -0.7063f;
	fLocal_155[12] = 0.7076f;
	iLocal_192[12] = 23;
	fLocal_156[12] = 58613f;
	iLocal_242[12] = joaat("asterope");
	vLocal_216[13 /*3*/] = { -487.5655f, -744.9453f, 32.6015f };
	fLocal_152[13] = -0.0937f;
	fLocal_153[13] = 0.045f;
	fLocal_154[13] = 0.8793f;
	fLocal_155[13] = 0.4648f;
	iLocal_192[13] = 19;
	fLocal_156[13] = 60459.32f;
	iLocal_242[13] = joaat("bmx");
	vLocal_216[14 /*3*/] = { -478.1905f, -835.1024f, 29.9746f };
	fLocal_152[14] = -0.0021f;
	fLocal_153[14] = -0.0021f;
	fLocal_154[14] = 0.7008f;
	fLocal_155[14] = 0.7134f;
	iLocal_192[14] = 18;
	fLocal_156[14] = 64923.85f;
	iLocal_242[14] = joaat("serrano");
	vLocal_216[15 /*3*/] = { -430.6053f, -816.6718f, 36.8249f };
	fLocal_152[15] = -0.0001f;
	fLocal_153[15] = 0.0048f;
	fLocal_154[15] = 0.9993f;
	fLocal_155[15] = 0.0373f;
	iLocal_192[15] = 28;
	fLocal_156[15] = 68551f;
	iLocal_242[15] = joaat("asterope");
	vLocal_216[16 /*3*/] = { -427.4086f, -762.012f, 36.6573f };
	fLocal_152[16] = 0.0001f;
	fLocal_153[16] = 0.0049f;
	fLocal_154[16] = 1f;
	fLocal_155[16] = 0.0047f;
	iLocal_192[16] = 30;
	fLocal_156[16] = 70333f;
	iLocal_242[16] = joaat("sultan");
	vLocal_216[17 /*3*/] = { -476.9606f, -664.9507f, 31.9901f };
	fLocal_152[17] = -0.003f;
	fLocal_153[17] = -0.0083f;
	fLocal_154[17] = 0.7264f;
	fLocal_155[17] = -0.6872f;
	iLocal_192[17] = 70;
	fLocal_156[17] = 77000f;
	iLocal_242[17] = joaat("sultan");
	vLocal_216[18 /*3*/] = { -436.342f, -650.5261f, 30.4239f };
	fLocal_152[18] = 0.0056f;
	fLocal_153[18] = 0.0224f;
	fLocal_154[18] = 0.7071f;
	fLocal_155[18] = 0.7068f;
	iLocal_192[18] = 13;
	fLocal_156[18] = 77590f;
	iLocal_242[18] = joaat("sultan");
	vLocal_216[19 /*3*/] = { -420.96f, -656.3897f, 30.5754f };
	fLocal_152[19] = 0.0112f;
	fLocal_153[19] = 0.0112f;
	fLocal_154[19] = 0.707f;
	fLocal_155[19] = 0.707f;
	iLocal_192[19] = 12;
	fLocal_156[19] = 78000f;
	iLocal_242[19] = joaat("packer");
	vLocal_216[20 /*3*/] = { -455.2408f, -535.85f, 24.7102f };
	fLocal_152[20] = -0.0022f;
	fLocal_153[20] = 0.0022f;
	fLocal_154[20] = -0.707f;
	fLocal_155[20] = 0.7072f;
	iLocal_192[20] = 31;
	fLocal_156[20] = 80849f;
	iLocal_242[20] = joaat("sultan");
	vLocal_216[21 /*3*/] = { -421.8391f, -535.8503f, 24.7099f };
	fLocal_152[21] = -0.0024f;
	fLocal_153[21] = 0.0024f;
	fLocal_154[21] = -0.7071f;
	fLocal_155[21] = 0.7071f;
	iLocal_192[21] = 32;
	fLocal_156[21] = 80849f;
	iLocal_242[21] = joaat("sultan");
	vLocal_216[22 /*3*/] = { -323.2696f, -519.5041f, 24.769f };
	fLocal_152[22] = -0.0086f;
	fLocal_153[22] = -0.0166f;
	fLocal_154[22] = -0.7001f;
	fLocal_155[22] = 0.7138f;
	iLocal_192[22] = 34;
	fLocal_156[22] = 85280f;
	iLocal_242[22] = joaat("asterope");
	vLocal_216[23 /*3*/] = { -384.7831f, -496.5516f, 24.806f };
	fLocal_152[23] = -0.0022f;
	fLocal_153[23] = -0.0022f;
	fLocal_154[23] = 0.7072f;
	fLocal_155[23] = 0.7071f;
	iLocal_192[23] = 33;
	fLocal_156[23] = 85722f;
	iLocal_242[23] = joaat("landstalker");
	vLocal_216[24 /*3*/] = { -299.8336f, -519.6835f, 24.804f };
	fLocal_152[24] = -0.0071f;
	fLocal_153[24] = -0.0166f;
	fLocal_154[24] = -0.7047f;
	fLocal_155[24] = 0.7093f;
	iLocal_192[24] = 35;
	fLocal_156[24] = 86195f;
	iLocal_242[24] = joaat("asterope");
	vLocal_216[25 /*3*/] = { -296.6222f, -496.012f, 24.8684f };
	fLocal_152[25] = -0.0026f;
	fLocal_153[25] = -0.0022f;
	fLocal_154[25] = 0.7084f;
	fLocal_155[25] = 0.7058f;
	iLocal_192[25] = 21;
	fLocal_156[25] = 87170.85f;
	iLocal_242[25] = joaat("landstalker");
	vLocal_216[26 /*3*/] = { -242.5362f, -502.0159f, 25.6451f };
	fLocal_152[26] = -0.0096f;
	fLocal_153[26] = -0.0094f;
	fLocal_154[26] = 0.7194f;
	fLocal_155[26] = 0.6945f;
	iLocal_192[26] = 36;
	fLocal_156[26] = 88537f;
	iLocal_242[26] = joaat("landstalker");
	vLocal_216[27 /*3*/] = { -234.2082f, -530.1547f, 25.9344f };
	fLocal_152[27] = -0.0058f;
	fLocal_153[27] = 0.0064f;
	fLocal_154[27] = 0.7091f;
	fLocal_155[27] = -0.705f;
	iLocal_192[27] = 39;
	fLocal_156[27] = 90066f;
	iLocal_242[27] = joaat("rapidgt");
	vLocal_216[28 /*3*/] = { -204.8521f, -534.9627f, 26.6094f };
	fLocal_152[28] = 0.0281f;
	fLocal_153[28] = 0.0002f;
	fLocal_154[28] = -0.6936f;
	fLocal_155[28] = 0.7198f;
	iLocal_192[28] = 37;
	fLocal_156[28] = 91140f;
	iLocal_242[28] = joaat("asterope");
	vLocal_216[29 /*3*/] = { -186.2448f, -518.6406f, 27.3221f };
	fLocal_152[29] = -0.0061f;
	fLocal_153[29] = -0.0197f;
	fLocal_154[29] = -0.7053f;
	fLocal_155[29] = 0.7086f;
	iLocal_192[29] = 41;
	fLocal_156[29] = 91890f;
	iLocal_242[29] = joaat("fq2");
	vLocal_216[30 /*3*/] = { -181.6259f, -523.8001f, 27.2923f };
	fLocal_152[30] = 0.0116f;
	fLocal_153[30] = -0.0124f;
	fLocal_154[30] = -0.7029f;
	fLocal_155[30] = 0.7111f;
	iLocal_192[30] = 38;
	fLocal_156[30] = 92230f;
	iLocal_242[30] = joaat("sultan");
	vLocal_216[31 /*3*/] = { -152.8287f, -489.4706f, 28.3269f };
	fLocal_152[31] = -0.0213f;
	fLocal_153[31] = 0.0018f;
	fLocal_154[31] = 0.7254f;
	fLocal_155[31] = 0.688f;
	iLocal_192[31] = 24;
	fLocal_156[31] = 92554.85f;
	iLocal_242[31] = joaat("landstalker");
	vLocal_216[32 /*3*/] = { -172.1277f, -500.8638f, 27.8326f };
	fLocal_152[32] = -0.0252f;
	fLocal_153[32] = -0.0296f;
	fLocal_154[32] = 0.7083f;
	fLocal_155[32] = 0.7048f;
	iLocal_192[32] = 40;
	fLocal_156[32] = 94528f;
	iLocal_242[32] = joaat("fq2");
	vLocal_216[33 /*3*/] = { -114.866f, -500.2346f, 29.8111f };
	fLocal_152[33] = -0.0104f;
	fLocal_153[33] = -0.0098f;
	fLocal_154[33] = 0.7021f;
	fLocal_155[33] = 0.7119f;
	iLocal_192[33] = 78;
	fLocal_156[33] = 95865.44f;
	iLocal_242[33] = joaat("asterope");
	vLocal_216[34 /*3*/] = { -129.1858f, -505.694f, 29.242f };
	fLocal_152[34] = -0.015f;
	fLocal_153[34] = -0.0163f;
	fLocal_154[34] = 0.7139f;
	fLocal_155[34] = 0.6999f;
	iLocal_192[34] = 42;
	fLocal_156[34] = 95886f;
	iLocal_242[34] = joaat("asterope");
	vLocal_216[35 /*3*/] = { -55.6079f, -499.5939f, 31.8493f };
	fLocal_152[35] = -0.0116f;
	fLocal_153[35] = -0.0112f;
	fLocal_154[35] = 0.7134f;
	fLocal_155[35] = 0.7006f;
	iLocal_192[35] = 25;
	fLocal_156[35] = 96787.85f;
	iLocal_242[35] = joaat("landstalker");
	vLocal_216[36 /*3*/] = { -87.112f, -504.988f, 30.9077f };
	fLocal_152[36] = -0.0159f;
	fLocal_153[36] = -0.0149f;
	fLocal_154[36] = 0.7118f;
	fLocal_155[36] = 0.702f;
	iLocal_192[36] = 43;
	fLocal_156[36] = 97140f;
	iLocal_242[36] = joaat("fq2");
	vLocal_216[37 /*3*/] = { 26.5103f, -499.3918f, 34.2088f };
	fLocal_152[37] = -0.0005f;
	fLocal_153[37] = -0.0002f;
	fLocal_154[37] = 0.7186f;
	fLocal_155[37] = 0.6954f;
	iLocal_192[37] = 79;
	fLocal_156[37] = 100001.4f;
	iLocal_242[37] = joaat("packer");
	vLocal_216[39 /*3*/] = { 70.5888f, -526.8503f, 33.7031f };
	fLocal_152[39] = -0.0004f;
	fLocal_153[39] = -0.0004f;
	fLocal_154[39] = -0.7039f;
	fLocal_155[39] = 0.7103f;
	iLocal_192[39] = 46;
	fLocal_156[39] = 102948f;
	iLocal_242[39] = joaat("ninef2");
	vLocal_216[40 /*3*/] = { 99.8609f, -521.5526f, 33.5624f };
	fLocal_152[40] = 0.0145f;
	fLocal_153[40] = -0.0145f;
	fLocal_154[40] = 0.707f;
	fLocal_155[40] = -0.7069f;
	iLocal_192[40] = 47;
	fLocal_156[40] = 104004f;
	iLocal_242[40] = joaat("landstalker");
	vLocal_216[41 /*3*/] = { 196.1974f, -526.9512f, 33.5498f };
	fLocal_152[41] = 0.0178f;
	fLocal_153[41] = -0.0178f;
	fLocal_154[41] = 0.7069f;
	fLocal_155[41] = -0.7068f;
	iLocal_192[41] = 48;
	fLocal_156[41] = 107502f;
	iLocal_242[41] = joaat("landstalker");
	vLocal_216[42 /*3*/] = { 230.2825f, -516.1511f, 33.5591f };
	fLocal_152[42] = -0.0023f;
	fLocal_153[42] = 0.0023f;
	fLocal_154[42] = -0.7071f;
	fLocal_155[42] = 0.7071f;
	iLocal_192[42] = 49;
	fLocal_156[42] = 108624f;
	iLocal_242[42] = joaat("landstalker");
	vLocal_216[44 /*3*/] = { 301.1906f, -521.55f, 33.4621f };
	fLocal_152[44] = 0.0001f;
	fLocal_153[44] = -0.0001f;
	fLocal_154[44] = 0.7071f;
	fLocal_155[44] = -0.7071f;
	iLocal_192[44] = 50;
	fLocal_156[44] = 111198f;
	iLocal_242[44] = joaat("sultan");
	vLocal_217[0 /*3*/] = { -1200.091f, -849.0596f, 13.5431f };
	fLocal_167[0] = -0.0171f;
	fLocal_168[0] = -0.0063f;
	fLocal_169[0] = 0.88f;
	fLocal_170[0] = 0.4747f;
	iLocal_243[0] = joaat("feltzer2");
	vLocal_217[1 /*3*/] = { -1058.345f, -772.2757f, 18.8924f };
	fLocal_167[1] = -0.0028f;
	fLocal_168[1] = 0.0149f;
	fLocal_169[1] = 0.3553f;
	fLocal_170[1] = 0.9346f;
	iLocal_243[1] = joaat("feltzer2");
	vLocal_217[2 /*3*/] = { -1070.664f, -739.6081f, 18.8482f };
	fLocal_167[2] = -0.0111f;
	fLocal_168[2] = 0.0192f;
	fLocal_169[2] = 0.9254f;
	fLocal_170[2] = 0.3784f;
	iLocal_243[2] = joaat("feltzer2");
	vLocal_217[3 /*3*/] = { -1121.096f, -880.1656f, 7.6752f };
	fLocal_167[3] = 0.0021f;
	fLocal_168[3] = -0.0011f;
	fLocal_169[3] = -0.4944f;
	fLocal_170[3] = 0.8692f;
	iLocal_243[3] = joaat("serrano");
	vLocal_217[4 /*3*/] = { -1115.618f, -807.3134f, 16.6315f };
	fLocal_167[4] = -0.0414f;
	fLocal_168[4] = -0.0257f;
	fLocal_169[4] = 0.8471f;
	fLocal_170[4] = -0.5292f;
	iLocal_243[4] = joaat("serrano");
	vLocal_217[5 /*3*/] = { -1112.403f, -774.3158f, 18.3801f };
	fLocal_167[5] = -0.0097f;
	fLocal_168[5] = -0.0319f;
	fLocal_169[5] = 0.5058f;
	fLocal_170[5] = 0.862f;
	iLocal_243[5] = joaat("serrano");
	vLocal_217[6 /*3*/] = { -1130.529f, -792.3233f, 16.5972f };
	fLocal_167[6] = -0.0307f;
	fLocal_168[6] = -0.0293f;
	fLocal_169[6] = 0.9133f;
	fLocal_170[6] = 0.4051f;
	iLocal_243[6] = joaat("feltzer2");
	vLocal_217[7 /*3*/] = { -1045.39f, -778.9995f, 18.3863f };
	fLocal_167[7] = 0.0118f;
	fLocal_168[7] = 0.037f;
	fLocal_169[7] = 0.5106f;
	fLocal_170[7] = 0.859f;
	iLocal_243[7] = joaat("serrano");
	vLocal_217[8 /*3*/] = { -1034.826f, -739.7039f, 18.881f };
	fLocal_167[8] = 0.0195f;
	fLocal_168[8] = 0.019f;
	fLocal_169[8] = -0.4353f;
	fLocal_170[8] = 0.8999f;
	iLocal_243[8] = joaat("radi");
	vLocal_217[9 /*3*/] = { -1033.929f, -712.6562f, 19.4857f };
	fLocal_167[9] = -0.0193f;
	fLocal_168[9] = -0.0194f;
	fLocal_169[9] = 0.9056f;
	fLocal_170[9] = 0.4231f;
	iLocal_243[9] = joaat("serrano");
	vLocal_217[10 /*3*/] = { -1005.538f, -715.5715f, 20.3848f };
	fLocal_167[10] = -0.044f;
	fLocal_168[10] = -0.1329f;
	fLocal_169[10] = -0.3895f;
	fLocal_170[10] = 0.9103f;
	iLocal_243[10] = joaat("bati");
	vLocal_217[11 /*3*/] = { -980.4462f, -670.3936f, 22.8034f };
	fLocal_167[11] = -0.0432f;
	fLocal_168[11] = -0.0121f;
	fLocal_169[11] = 0.8701f;
	fLocal_170[11] = 0.4908f;
	iLocal_243[11] = joaat("washington");
	vLocal_217[12 /*3*/] = { -969.1606f, -664.5714f, 23.887f };
	fLocal_167[12] = -0.046f;
	fLocal_168[12] = -0.0213f;
	fLocal_169[12] = 0.8534f;
	fLocal_170[12] = 0.5187f;
	iLocal_243[12] = joaat("rapidgt");
	vLocal_217[13 /*3*/] = { -928.2644f, -652.7425f, 26.6901f };
	fLocal_167[13] = -0.0303f;
	fLocal_168[13] = -0.0054f;
	fLocal_169[13] = 0.7573f;
	fLocal_170[13] = 0.6524f;
	iLocal_243[13] = joaat("rapidgt");
	vLocal_217[14 /*3*/] = { -916.6693f, -650.6878f, 27.0863f };
	fLocal_167[14] = -0.024f;
	fLocal_168[14] = 0.0101f;
	fLocal_169[14] = 0.7742f;
	fLocal_170[14] = 0.6324f;
	iLocal_243[14] = joaat("feltzer2");
	vLocal_217[15 /*3*/] = { -790.8272f, -667.5106f, 28.4613f };
	fLocal_167[15] = -0.0369f;
	fLocal_168[15] = -0.005f;
	fLocal_169[15] = 0.7209f;
	fLocal_170[15] = -0.6921f;
	iLocal_243[15] = joaat("rapidgt");
	vLocal_217[16 /*3*/] = { -790.0645f, -647.0408f, 28.4882f };
	fLocal_167[16] = -0.037f;
	fLocal_168[16] = 0.0003f;
	fLocal_169[16] = 0.7201f;
	fLocal_170[16] = 0.6929f;
	iLocal_243[16] = joaat("feltzer2");
	vLocal_217[17 /*3*/] = { -716.8614f, -667.7233f, 29.6724f };
	fLocal_167[17] = -0.0267f;
	fLocal_168[17] = -0.0106f;
	fLocal_169[17] = 0.7068f;
	fLocal_170[17] = -0.7068f;
	iLocal_243[17] = joaat("sultan");
	vLocal_217[18 /*3*/] = { -653.5672f, -605.7774f, 32.8442f };
	fLocal_167[18] = 0.0008f;
	fLocal_168[18] = -0.0298f;
	fLocal_169[18] = 0.9991f;
	fLocal_170[18] = 0.031f;
	iLocal_243[18] = joaat("radi");
	vLocal_217[19 /*3*/] = { -598.4409f, -647.7642f, 31.2207f };
	fLocal_167[19] = 0.0659f;
	fLocal_168[19] = -0.1257f;
	fLocal_169[19] = 0.6417f;
	fLocal_170[19] = 0.7537f;
	iLocal_243[19] = joaat("bati");
	vLocal_217[20 /*3*/] = { -457.3376f, -774.9608f, 29.9679f };
	fLocal_167[20] = -0.0002f;
	fLocal_168[20] = 0f;
	fLocal_169[20] = 0.7033f;
	fLocal_170[20] = 0.7109f;
	iLocal_243[20] = joaat("sultan");
	vLocal_217[21 /*3*/] = { -506.0643f, -614.7634f, 29.6699f };
	fLocal_167[21] = -0.0131f;
	fLocal_168[21] = -0.1302f;
	fLocal_169[21] = -0.0218f;
	fLocal_170[21] = 0.9912f;
	iLocal_243[21] = joaat("bati");
	vLocal_217[22 /*3*/] = { -487.6026f, -614.804f, 30.58f };
	fLocal_167[22] = 0.0002f;
	fLocal_168[22] = 0f;
	fLocal_169[22] = 0.9999f;
	fLocal_170[22] = 0.0166f;
	iLocal_243[22] = joaat("sultan");
	vLocal_217[23 /*3*/] = { -856.7647f, -679.063f, 27.2491f };
	fLocal_167[23] = -0.008f;
	fLocal_168[23] = 0.0277f;
	fLocal_169[23] = 0.0148f;
	fLocal_170[23] = 0.9995f;
	iLocal_243[23] = joaat("sultan");
	vLocal_217[24 /*3*/] = { -750.8827f, -607.8928f, 29.5466f };
	fLocal_167[24] = 0.0609f;
	fLocal_168[24] = 0.0021f;
	fLocal_169[24] = 0.9978f;
	fLocal_170[24] = -0.0261f;
	iLocal_243[24] = joaat("sultan");
	vLocal_217[25 /*3*/] = { -477.1844f, -757.5135f, 30.1527f };
	fLocal_167[25] = -0.0022f;
	fLocal_168[25] = -0.0021f;
	fLocal_169[25] = 0.7233f;
	fLocal_170[25] = 0.6905f;
	iLocal_243[25] = joaat("rapidgt");
	vLocal_217[26 /*3*/] = { -471.01f, -624.55f, 30.58f };
	fLocal_167[26] = 0.0001f;
	fLocal_168[26] = -0.0002f;
	fLocal_169[26] = -0.0144f;
	fLocal_170[26] = 0.9999f;
	iLocal_243[26] = joaat("sultan");
	vLocal_217[27 /*3*/] = { -679.3469f, -593.3812f, 24.7059f };
	fLocal_167[27] = -0.0011f;
	fLocal_168[27] = 0.0004f;
	fLocal_169[27] = 0.6772f;
	fLocal_170[27] = 0.7358f;
	iLocal_243[27] = joaat("sultan");
	vLocal_217[28 /*3*/] = { 433.6576f, -608.7065f, 27.7732f };
	fLocal_167[28] = -0.0003f;
	fLocal_168[28] = 0.0005f;
	fLocal_169[28] = 0.7774f;
	fLocal_170[28] = -0.629f;
	iLocal_243[28] = joaat("sultan");
	vLocal_217[29 /*3*/] = { 416.3534f, -638.7431f, 27.8704f };
	fLocal_167[29] = 0.0891f;
	fLocal_168[29] = -0.0957f;
	fLocal_169[29] = 0.7111f;
	fLocal_170[29] = 0.6908f;
	iLocal_243[29] = joaat("bati");
	vLocal_217[30 /*3*/] = { 433.9501f, -603.2841f, 27.8743f };
	fLocal_167[30] = 0.0794f;
	fLocal_168[30] = -0.1039f;
	fLocal_169[30] = 0.6505f;
	fLocal_170[30] = 0.7482f;
	iLocal_243[30] = joaat("bati");
	vLocal_217[31 /*3*/] = { 291.0103f, -589.8865f, 42.9593f };
	fLocal_167[31] = 0.0053f;
	fLocal_168[31] = -0.0026f;
	fLocal_169[31] = 0.9489f;
	fLocal_170[31] = 0.3156f;
	iLocal_243[31] = joaat("ambulance");
	vLocal_218[0 /*3*/] = { -1104.283f, -775.1389f, 18.8468f };
	fLocal_161[0] = -0.0068f;
	fLocal_162[0] = -0.0121f;
	fLocal_163[0] = 0.9186f;
	fLocal_164[0] = 0.3949f;
	iLocal_195[0] = 52;
	fLocal_165[0] = 16000f;
	fLocal_166[0] = 1f;
	iLocal_244[0] = joaat("feltzer2");
	vLocal_218[1 /*3*/] = { -1129.485f, -805.7412f, 15.9592f };
	fLocal_161[1] = 0.0303f;
	fLocal_162[1] = -0.0208f;
	fLocal_163[1] = -0.3298f;
	fLocal_164[1] = 0.9433f;
	iLocal_195[1] = 5;
	fLocal_165[1] = 16488f;
	fLocal_166[1] = 1f;
	iLocal_244[1] = joaat("washington");
	vLocal_218[2 /*3*/] = { -998.2445f, -692.8199f, 21.5328f };
	fLocal_161[2] = -0.0136f;
	fLocal_162[2] = -0.0158f;
	fLocal_163[2] = 0.8929f;
	fLocal_164[2] = 0.4498f;
	iLocal_195[2] = 53;
	fLocal_165[2] = 21412f;
	fLocal_166[2] = 1f;
	iLocal_244[2] = joaat("feltzer2");
	vLocal_218[3 /*3*/] = { -883.8546f, -655.3506f, 27.5493f };
	fLocal_161[3] = 0.0032f;
	fLocal_162[3] = -0.0018f;
	fLocal_163[3] = 0.712f;
	fLocal_164[3] = 0.7021f;
	iLocal_195[3] = 54;
	fLocal_165[3] = 25000f;
	fLocal_166[3] = 1f;
	iLocal_244[3] = joaat("feltzer2");
	vLocal_218[4 /*3*/] = { -850.7409f, -661.5627f, 27.3668f };
	fLocal_161[4] = -0.0015f;
	fLocal_162[4] = 0.0017f;
	fLocal_163[4] = -0.6912f;
	fLocal_164[4] = 0.7227f;
	iLocal_195[4] = 55;
	fLocal_165[4] = 28500f;
	fLocal_166[4] = 1f;
	iLocal_244[4] = joaat("serrano");
	vLocal_218[5 /*3*/] = { -721.2928f, -652.8879f, 29.816f };
	fLocal_161[5] = -0.0024f;
	fLocal_162[5] = -0.0102f;
	fLocal_163[5] = 0.6908f;
	fLocal_164[5] = 0.723f;
	iLocal_195[5] = 56;
	fLocal_165[5] = 32500f;
	fLocal_166[5] = 1f;
	iLocal_244[5] = joaat("serrano");
	vLocal_218[6 /*3*/] = { -724.7061f, -648.64f, 29.7668f };
	fLocal_161[6] = -0.0212f;
	fLocal_162[6] = 0.005f;
	fLocal_163[6] = 0.7061f;
	fLocal_164[6] = 0.7078f;
	iLocal_195[6] = 57;
	fLocal_165[6] = 32750f;
	fLocal_166[6] = 1f;
	iLocal_244[6] = joaat("washington");
	vLocal_218[7 /*3*/] = { -688.4173f, -579.6989f, 24.8499f };
	fLocal_161[7] = 0.0026f;
	fLocal_162[7] = -0.0029f;
	fLocal_163[7] = 0.7397f;
	fLocal_164[7] = -0.673f;
	iLocal_195[7] = 58;
	fLocal_165[7] = 40273f;
	fLocal_166[7] = 1f;
	iLocal_244[7] = joaat("washington");
	vLocal_218[8 /*3*/] = { -563.1786f, -579.4122f, 25.3124f };
	fLocal_161[8] = 0.002f;
	fLocal_162[8] = 0.0021f;
	fLocal_163[8] = 0.7032f;
	fLocal_164[8] = 0.711f;
	iLocal_195[8] = 59;
	fLocal_165[8] = 43500f;
	fLocal_166[8] = 1f;
	iLocal_244[8] = joaat("trash");
	vLocal_218[9 /*3*/] = { -556.1506f, -631.2017f, 30.562f };
	fLocal_161[9] = -0.0352f;
	fLocal_162[9] = 0.0378f;
	fLocal_163[9] = -0.6805f;
	fLocal_164[9] = 0.7309f;
	iLocal_195[9] = 60;
	fLocal_165[9] = 51889f;
	fLocal_166[9] = 1f;
	iLocal_244[9] = joaat("bmx");
	vLocal_218[10 /*3*/] = { -445.0543f, -655.1606f, 31.3466f };
	fLocal_161[10] = 0.0076f;
	fLocal_162[10] = 0.0093f;
	fLocal_163[10] = 0.7136f;
	fLocal_164[10] = 0.7005f;
	iLocal_195[10] = 61;
	fLocal_165[10] = 56772f;
	fLocal_166[10] = 1f;
	iLocal_244[10] = joaat("sultan");
	vLocal_218[11 /*3*/] = { -519.4122f, -666.3391f, 32.7365f };
	fLocal_161[11] = 0.0105f;
	fLocal_162[11] = 0.0179f;
	fLocal_163[11] = -0.6817f;
	fLocal_164[11] = 0.7313f;
	iLocal_195[11] = 62;
	fLocal_165[11] = 57772f;
	fLocal_166[11] = 1f;
	iLocal_244[11] = joaat("washington");
	vLocal_218[12 /*3*/] = { -491.8959f, -716.5375f, 32.5585f };
	fLocal_161[12] = 0.1433f;
	fLocal_162[12] = 0.0787f;
	fLocal_163[12] = 0.9609f;
	fLocal_164[12] = -0.2234f;
	iLocal_195[12] = 63;
	fLocal_165[12] = 60800f;
	fLocal_166[12] = 1.2f;
	iLocal_244[12] = joaat("bmx");
	vLocal_218[13 /*3*/] = { -492.3147f, -827.8944f, 29.9952f };
	fLocal_161[13] = -0.005f;
	fLocal_162[13] = 0.0046f;
	fLocal_163[13] = 0.0169f;
	fLocal_164[13] = 0.9998f;
	iLocal_195[13] = 64;
	fLocal_165[13] = 64030f;
	fLocal_166[13] = 1f;
	iLocal_244[13] = joaat("washington");
	vLocal_218[14 /*3*/] = { -518.8372f, -756.7956f, 31.5421f };
	fLocal_161[14] = -0.0147f;
	fLocal_162[14] = -0.0264f;
	fLocal_163[14] = 0.9686f;
	fLocal_164[14] = -0.2467f;
	iLocal_195[14] = 65;
	fLocal_165[14] = 64230f;
	fLocal_166[14] = 1f;
	iLocal_244[14] = joaat("washington");
	vLocal_218[15 /*3*/] = { -477.6166f, -806.7344f, 30.0523f };
	fLocal_161[15] = 0f;
	fLocal_162[15] = 0.0025f;
	fLocal_163[15] = -0.701f;
	fLocal_164[15] = 0.7132f;
	iLocal_195[15] = 66;
	fLocal_165[15] = 66084f;
	fLocal_166[15] = 1f;
	iLocal_244[15] = joaat("washington");
	vLocal_218[16 /*3*/] = { -417.4774f, -836.1498f, 31.442f };
	fLocal_161[16] = -0.0077f;
	fLocal_162[16] = -0.0047f;
	fLocal_163[16] = 0.7025f;
	fLocal_164[16] = 0.7117f;
	iLocal_195[16] = 67;
	fLocal_165[16] = 65384f;
	fLocal_166[16] = 1f;
	iLocal_244[16] = joaat("benson");
	vLocal_218[17 /*3*/] = { -413.1984f, -831.7321f, 30.8216f };
	fLocal_161[17] = -0.0237f;
	fLocal_162[17] = 0.0144f;
	fLocal_163[17] = 0.7088f;
	fLocal_164[17] = 0.7049f;
	iLocal_195[17] = 68;
	fLocal_165[17] = 67078f;
	fLocal_166[17] = 1f;
	iLocal_244[17] = joaat("sultan");
	vLocal_218[18 /*3*/] = { -528.5989f, -840.7145f, 29.413f };
	fLocal_161[18] = -0.0237f;
	fLocal_162[18] = 0.0236f;
	fLocal_163[18] = 0.7098f;
	fLocal_164[18] = -0.7036f;
	iLocal_195[18] = 69;
	fLocal_165[18] = 64606.32f;
	fLocal_166[18] = 1f;
	iLocal_244[18] = joaat("sultan");
	vLocal_218[19 /*3*/] = { -446.0574f, -767.6522f, 29.9676f };
	fLocal_161[19] = -0.0002f;
	fLocal_162[19] = 0.0001f;
	fLocal_163[19] = 0.711f;
	fLocal_164[19] = 0.7032f;
	iLocal_195[19] = 51;
	fLocal_165[19] = 70071.85f;
	fLocal_166[19] = 1f;
	iLocal_244[19] = joaat("sultan");
	vLocal_218[20 /*3*/] = { -488.5203f, -523.8471f, 24.8363f };
	fLocal_161[20] = -0.001f;
	fLocal_162[20] = 0.0015f;
	fLocal_163[20] = 0.7208f;
	fLocal_164[20] = -0.6931f;
	iLocal_195[20] = 71;
	fLocal_165[20] = 81355.85f;
	fLocal_166[20] = 1f;
	iLocal_244[20] = joaat("landstalker");
	vLocal_218[21 /*3*/] = { -305.7855f, -508.727f, 24.7583f };
	fLocal_161[21] = 0.0168f;
	fLocal_162[21] = -0.0137f;
	fLocal_163[21] = 0.7019f;
	fLocal_164[21] = 0.7119f;
	iLocal_195[21] = 72;
	fLocal_165[21] = 86290.85f;
	fLocal_166[21] = 1f;
	iLocal_244[21] = joaat("landstalker");
	vLocal_218[22 /*3*/] = { 294.6554f, -576.5358f, 42.9547f };
	fLocal_161[22] = 0.0001f;
	fLocal_162[22] = 0.0078f;
	fLocal_163[22] = 0.2262f;
	fLocal_164[22] = 0.974f;
	iLocal_195[22] = 73;
	fLocal_165[22] = 109000f;
	fLocal_166[22] = 1f;
	iLocal_244[22] = joaat("ambulance");
	vLocal_218[23 /*3*/] = { -393.8603f, -503.4236f, 25.4432f };
	fLocal_161[23] = 0.0016f;
	fLocal_162[23] = 0.0018f;
	fLocal_163[23] = 0.7075f;
	fLocal_164[23] = 0.7067f;
	iLocal_195[23] = 74;
	fLocal_165[23] = 82431.85f;
	fLocal_166[23] = 1f;
	iLocal_244[23] = joaat("packer");
	vLocal_218[24 /*3*/] = { -527.6368f, -846.5891f, 29.9361f };
	fLocal_161[24] = 0.0422f;
	fLocal_162[24] = -0.0031f;
	fLocal_163[24] = -0.7009f;
	fLocal_164[24] = 0.712f;
	iLocal_195[24] = 75;
	fLocal_165[24] = 62500f;
	fLocal_166[24] = 1f;
	iLocal_244[24] = joaat("bus");
	vLocal_218[25 /*3*/] = { 3.4457f, -533.8352f, 33.2443f };
	fLocal_161[25] = 0.0232f;
	fLocal_162[25] = 0.0045f;
	fLocal_163[25] = -0.6929f;
	fLocal_164[25] = 0.7206f;
	iLocal_195[25] = 80;
	fLocal_165[25] = 100001.4f;
	fLocal_166[25] = 1f;
	iLocal_244[25] = joaat("asterope");
	vLocal_218[26 /*3*/] = { -483.5551f, -531.6314f, 24.8571f };
	fLocal_161[26] = 0.0034f;
	fLocal_162[26] = -0.0031f;
	fLocal_163[26] = -0.6972f;
	fLocal_164[26] = 0.7168f;
	iLocal_195[26] = 76;
	fLocal_165[26] = 81217.44f;
	fLocal_166[26] = 1f;
	iLocal_244[26] = joaat("asterope");
	vLocal_218[27 /*3*/] = { -277.6243f, -508.3559f, 24.9767f };
	fLocal_161[27] = 0.0108f;
	fLocal_162[27] = -0.0139f;
	fLocal_163[27] = 0.7117f;
	fLocal_164[27] = 0.7023f;
	iLocal_195[27] = 77;
	fLocal_165[27] = 87256.44f;
	fLocal_166[27] = 1f;
	iLocal_244[27] = joaat("asterope");
	vLocal_218[28 /*3*/] = { -201.7354f, -496.1847f, 27.3531f };
	fLocal_161[28] = -0.0125f;
	fLocal_162[28] = -0.0117f;
	fLocal_163[28] = 0.7296f;
	fLocal_164[28] = 0.6837f;
	iLocal_195[28] = 82;
	fLocal_165[28] = 90798.32f;
	fLocal_166[28] = 1f;
	iLocal_244[28] = joaat("packer");
	vLocal_218[29 /*3*/] = { -118.4835f, -529.6654f, 29.6739f };
	fLocal_161[29] = 0.0116f;
	fLocal_162[29] = -0.0127f;
	fLocal_163[29] = -0.686f;
	fLocal_164[29] = 0.7274f;
	iLocal_195[29] = 44;
	fLocal_165[29] = 94954.86f;
	fLocal_166[29] = 1f;
	iLocal_244[29] = joaat("landstalker");
	iVar0 = 0;
	iVar1 = iLocal_251;
	iVar2 = iLocal_248;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (fLocal_165[iVar0] >= 41011f)
		{
			fLocal_165[iVar0] = (fLocal_165[iVar0] - 43.5f);
		}
		if (fLocal_165[iVar0] >= 77018.5f)
		{
			fLocal_165[iVar0] = (fLocal_165[iVar0] - 78.5f);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (fLocal_156[iVar0] >= 41011f)
		{
			fLocal_156[iVar0] = (fLocal_156[iVar0] - 43.5f);
		}
		if (fLocal_156[iVar0] >= 77018.5f)
		{
			fLocal_156[iVar0] = (fLocal_156[iVar0] - 78.5f);
		}
		iVar0++;
	}
}

void func_446(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	StringCopy(&cLocal_232, sParam0, 64);
	bLocal_128 = true;
	iLocal_133 = 0;
	iLocal_199 = 0;
	iLocal_200 = 0;
	iLocal_201 = 0;
	iLocal_202 = iParam1;
	iLocal_203 = 0;
	iLocal_204 = 0;
	iLocal_205 = 0;
	iLocal_209 = 0;
	iLocal_212 = 0;
	iLocal_210 = -1;
	iLocal_211 = -1;
	iLocal_213 = 0;
	iLocal_214 = 0;
	fLocal_187 = 0f;
	fLocal_188 = 0f;
	fLocal_173 = 0f;
	iLocal_134 = 0;
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
		vLocal_220.x = (vVar0.x - 100f);
		vLocal_220.y = (vVar0.y - 100f);
		vLocal_220.z = (vVar0.z - 100f);
		vLocal_221.x = (vVar0.x + 100f);
		vLocal_221.y = (vVar0.y + 100f);
		vLocal_221.z = (vVar0.z + 100f);
		unk_0x68184E06469338F4(vLocal_220, vLocal_221, false, 0);
		if (bParam2)
		{
			unk_0x01AF8CB960828C2B(vVar0, 500f, 0, 0, 0, 0, false, 0);
		}
	}
	unk_0x94E87D83163B4BEB("rgh_traffic", &iLocal_241);
	func_425();
	if (bParam3)
	{
		func_68(1);
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		unk_0xE94887E71DB8489F(unk_0xD4E735F4B6A956AC(), 0);
		unk_0xD6A3711FA2CAF3EF(0);
	}
	func_78();
}

void func_447()
{
	int iVar0;
	
	func_53(&(Local_275.f_35[0]));
	if (!unk_0xDC5D81351D6A4DDB(Local_535))
	{
		unk_0xFDD15D670AD33E10(Local_535.f_3, 2f, 1, 0, 0, false);
		func_448(&Local_535, Local_535.f_3, Local_535.f_6, 0, 1);
		func_434();
	}
	unk_0xA5DE74AE39867B03(Local_535.f_1);
	func_53(&(Local_275.f_35[1]));
	if (!unk_0xDC5D81351D6A4DDB(Local_536))
	{
		unk_0xFDD15D670AD33E10(Local_536.f_3, 2f, 1, 0, 0, false);
		Local_536 = unk_0x48CFBECB146FD1A1(Local_536.f_1, Local_536.f_3, Local_536.f_6, true, true, false);
		if (func_14(Local_536))
		{
			unk_0x4299736016AECE26(Local_536, Local_536.f_3, 1, false, 0, 1);
			unk_0x693A63A8D6B78EA4(Local_536, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		}
		func_430();
	}
	unk_0xA5DE74AE39867B03(Local_536.f_1);
	if (func_14(Local_535))
	{
		if (!unk_0xDC5D81351D6A4DDB(Local_532))
		{
			Local_532 = unk_0x91A7C8CA5E332C03(Local_535, 26, Local_532.f_1, 2, 1, true);
			func_435();
		}
		func_57(&(Local_275.f_28[0]));
		if (!unk_0xDC5D81351D6A4DDB(Local_533))
		{
			Local_533 = unk_0x91A7C8CA5E332C03(Local_535, 26, Local_533.f_1, 0, 1, true);
			func_436();
		}
	}
	unk_0xA5DE74AE39867B03(Local_532.f_1);
	unk_0xA5DE74AE39867B03(Local_533.f_1);
	if (func_14(Local_536))
	{
		if (!unk_0xDC5D81351D6A4DDB(Local_534))
		{
			Local_534 = unk_0x91A7C8CA5E332C03(Local_536, 26, Local_534.f_1, -1, 1, true);
			func_432();
		}
	}
	unk_0xA5DE74AE39867B03(Local_534.f_1);
	if (func_21(unk_0xA19140A5C42D8715()))
	{
		func_433(&uLocal_367, 2, unk_0xA19140A5C42D8715(), "TREVOR", 0, 1);
		unk_0x9D01B1015AD5A3C8(unk_0xA19140A5C42D8715(), 1);
	}
	if (!unk_0xDC5D81351D6A4DDB(Local_540[0 /*2*/]))
	{
		unk_0xFDD15D670AD33E10(-1329.742f, -665.3537f, 26.3413f, 2f, 1, 0, 0, false);
		Local_540[0 /*2*/] = unk_0x48CFBECB146FD1A1(Local_540[0 /*2*/].f_1, -1329.742f, -665.3537f, 26.3413f, 126.9722f, true, true, false);
	}
	if (func_14(Local_540[0 /*2*/]))
	{
		unk_0x693A63A8D6B78EA4(Local_540[0 /*2*/], -0.0318f, 0.0067f, 0.8936f, 0.4476f);
		if (!unk_0xF68525C58EEA45A2(Local_540[0 /*2*/], 2))
		{
			unk_0xD6B4F40F1425E83F(Local_540[0 /*2*/], 2, 0, 0);
		}
		if (!unk_0xF68525C58EEA45A2(Local_540[0 /*2*/], 3))
		{
			unk_0xD6B4F40F1425E83F(Local_540[0 /*2*/], 3, 0, 0);
		}
		unk_0x843CB56BFD84C750(Local_540[0 /*2*/], 1, 1);
		unk_0x843CB56BFD84C750(Local_540[0 /*2*/], 0, 1);
	}
	if (!unk_0xDC5D81351D6A4DDB(Local_540[1 /*2*/]))
	{
		unk_0xFDD15D670AD33E10(-1329.751f, -676.4864f, 25.8557f, 2f, 1, 0, 0, false);
		Local_540[1 /*2*/] = unk_0x48CFBECB146FD1A1(Local_540[1 /*2*/].f_1, -1329.751f, -676.4864f, 25.8557f, 307.7227f, true, true, false);
	}
	if (func_14(Local_540[1 /*2*/]))
	{
		unk_0x693A63A8D6B78EA4(Local_540[1 /*2*/], 0.0248f, 0.0142f, -0.4405f, 0.8973f);
	}
	if (!unk_0xDC5D81351D6A4DDB(Local_540[2 /*2*/]))
	{
		unk_0xFDD15D670AD33E10(-1336.317f, -680.9752f, 25.5144f, 2f, 1, 0, 0, false);
		Local_540[2 /*2*/] = unk_0x48CFBECB146FD1A1(Local_540[2 /*2*/].f_1, -1336.317f, -680.9752f, 25.5144f, 307.7227f, true, true, false);
	}
	if (func_14(Local_540[2 /*2*/]))
	{
		unk_0x693A63A8D6B78EA4(Local_540[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_14(Local_540[iVar0 /*2*/]))
		{
			unk_0xA5DE74AE39867B03(Local_540[iVar0 /*2*/].f_1);
		}
		iVar0++;
	}
	func_428(fLocal_343, vLocal_549);
	if (bLocal_276)
	{
		if (bLocal_306)
		{
			if (!unk_0x3A83743561B4F70C() && !unk_0x3BE8B7AEED1A3971())
			{
				func_22(800, 0);
			}
		}
	}
}

int func_448(int iParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
	unk_0xCACEBBBEAD8F262E(iLocal_93);
	if (iParam4 == 1)
	{
		while (!unk_0x7FC99CCC73354033(iLocal_93))
		{
			wait(0);
		}
	}
	else if (!unk_0x7FC99CCC73354033(iLocal_93))
	{
		return 0;
	}
	func_449(iParam0, iLocal_93, vParam1, fParam2);
	if (func_11(*iParam0))
	{
		unk_0x9174BE523666C5A0(*iParam0, 65, 0);
		unk_0xF4B7B294E1D454A2(*iParam0, 5, false);
		unk_0xAA8C8977AD74EDE5(*iParam0, "28BNT310");
		unk_0xEEF67CF6BF9A762A(*iParam0, 0);
		if (iParam3 == 1)
		{
			unk_0x14293208022014FA(*iParam0, 10);
		}
	}
	unk_0xA5DE74AE39867B03(iLocal_93);
	return 1;
}

void func_449(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	func_53(iParam0);
	*iParam0 = unk_0x48CFBECB146FD1A1(iParam1, vParam2, fParam3, true, true, false);
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		unk_0x99F546A9200EA026(*iParam0, 1084227584);
		unk_0x6259CDB47862A4F3(*iParam0, 1000, 0);
	}
}

void func_450(bool bParam0)
{
	unk_0x6A633E13B2A856AE("NIGEL2", 0);
	unk_0x5C2A13372076C38C(iLocal_333, sLocal_359);
	unk_0xCACEBBBEAD8F262E(Local_536.f_1);
	unk_0xCACEBBBEAD8F262E(Local_535.f_1);
	unk_0xCACEBBBEAD8F262E(Local_534.f_1);
	unk_0xCACEBBBEAD8F262E(Local_532.f_1);
	unk_0xCACEBBBEAD8F262E(Local_533.f_1);
	unk_0xCACEBBBEAD8F262E(Local_540[0 /*2*/].f_1);
	unk_0xCACEBBBEAD8F262E(Local_540[1 /*2*/].f_1);
	unk_0xCACEBBBEAD8F262E(Local_540[2 /*2*/].f_1);
	unk_0x5C2A13372076C38C(2, sLocal_359);
	if (bParam0)
	{
		while ((((((((((!unk_0xD744813D9841CA9A(0) || !unk_0x6F4A062113883115(iLocal_333, sLocal_359)) || !unk_0x7FC99CCC73354033(Local_536.f_1)) || !unk_0x7FC99CCC73354033(Local_535.f_1)) || !unk_0x7FC99CCC73354033(Local_534.f_1)) || !unk_0x7FC99CCC73354033(Local_532.f_1)) || !unk_0x7FC99CCC73354033(Local_533.f_1)) || !unk_0x7FC99CCC73354033(Local_540[0 /*2*/].f_1)) || !unk_0x7FC99CCC73354033(Local_540[1 /*2*/].f_1)) || !unk_0x7FC99CCC73354033(Local_540[2 /*2*/].f_1)) || !unk_0x6F4A062113883115(2, sLocal_359))
		{
			if (bLocal_276)
			{
				if (!unk_0x71364F510A1CB69F())
				{
					func_451(0, 1);
					bLocal_306 = true;
				}
			}
			wait(0);
		}
	}
}

void func_451(int iParam0, bool bParam1)
{
	if (unk_0x3A83743561B4F70C())
	{
		if (!unk_0x607776744A243309())
		{
			unk_0x9662BE461F9FDF9E(iParam0);
			if (bParam1)
			{
				while (!unk_0x71364F510A1CB69F())
				{
					wait(0);
				}
			}
		}
	}
}

void func_452()
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { -1290f, -646.1f, 26.05f };
	fVar1 = 307.66f;
	func_503(-1311.409f, -648.4133f, 24.92526f, -1289.028f, -632.043f, 29.5522f, 17.5f, vVar0, fVar1, func_510(), 1, 0, 1, 0, 0);
	func_503(-1319.69f, -655.7773f, 29.45839f, -1184.461f, -834.8201f, 12.34378f, 30f, vVar0, fVar1, func_510(), 1, 0, 1, 0, 0);
	if (func_501(0f, 0f, 0f, 1))
	{
		func_453(vVar0, fVar1, 0, 145);
	}
	unk_0x413F34FCFABEDE4B(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, false, 1);
	unk_0xF54514EACB543898(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 0);
	unk_0xE537EBD7B736A4E2(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, false, 1);
	unk_0x982F1A2D170EDD0F(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, 0, 0, 1, 1, 0);
	unk_0x2E989BFBA0D3CC0E(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, false, 0);
	unk_0xFF54548CCE498035(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f);
	iLocal_356 = unk_0xF66A39BBE7B3C278(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, 0, 1, 1, 1);
	unk_0x39F8A3E01BC1A69B(-1297.8f, -637.42f, 25.55f, 16f, 0);
	iLocal_358[0] = unk_0xF66A39BBE7B3C278(-1315.68f, -682.7614f, 23.24123f, -1295.266f, -670.376f, 27.9768f, 0, 1, 1, 1);
	unk_0xFDD15D670AD33E10(-1305.332f, -676.3739f, 25.79325f, 10f, 1, 0, 0, false);
	iLocal_358[1] = unk_0xF66A39BBE7B3C278(-1286.906f, -697.5593f, 21.7392f, -1279.698f, -691.5876f, 26.33636f, 0, 1, 1, 1);
	unk_0xFDD15D670AD33E10(-1287.702f, -698.1957f, 27.50166f, 10f, 1, 0, 0, false);
	iLocal_358[2] = unk_0xF66A39BBE7B3C278(-1270.72f, -723.8903f, 19.46898f, -1262.898f, -718.2786f, 24.43682f, 0, 1, 1, 1);
	unk_0xFDD15D670AD33E10(-1269.86f, -722.4664f, 21.54627f, 8f, 1, 0, 0, false);
	iLocal_358[3] = unk_0xF66A39BBE7B3C278(-1268.057f, -731.5182f, 18.92047f, -1263.574f, -727.5502f, 24.05783f, 0, 1, 1, 1);
	unk_0xFDD15D670AD33E10(-1266.431f, -728.9227f, 21.08542f, 2.5f, 1, 0, 0, false);
	iLocal_358[3] = unk_0xF66A39BBE7B3C278(-1237.024f, -777.4222f, 15.58289f, -1221.889f, -764.5969f, 20.58871f, 0, 1, 1, 1);
	unk_0xFDD15D670AD33E10(-1231.441f, -770.9479f, 17.70891f, 8.5f, 1, 0, 0, false);
	iLocal_358[4] = unk_0xF66A39BBE7B3C278(-1222.448f, -786.7349f, 13.60073f, -1215.773f, -780.2021f, 20.43715f, 0, 1, 1, 1);
	unk_0xFDD15D670AD33E10(-1222.008f, -783.6834f, 16.73119f, 7.5f, 1, 0, 0, false);
	unk_0x01AF8CB960828C2B(-1459.2f, -736.9f, 23.6f, 50f, 0, 0, 0, 1, false, 0);
	unk_0x01AF8CB960828C2B(-1332.2f, -537.6f, 31.5f, 30f, 0, 0, 0, 1, false, 0);
}

void func_453(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0xDC5D81351D6A4DDB(Global_96664.f_4))
	{
		if (unk_0x1095F403F52B42E1(Global_96664.f_4, 0))
		{
			if (func_500(24) != Global_96664.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_497(unk_0xE2BBD32891C18569(Global_96664.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_454(Global_96664.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_454(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[25]) && unk_0x1095F403F52B42E1(Global_70024.f_484[25], 0))
			{
				if (Global_70024.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x05ECE2F25303B711(iParam0) || unk_0x8F474E419F56E48D(iParam0) == joaat("bus")) || unk_0x8F474E419F56E48D(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_496(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_492(iParam0, &Var0);
		if (func_61(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0xE2BBD32891C18569(iParam0, true) };
			fParam2 = unk_0x552C823E1D2A019C(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C()) != joaat("vehicle_gen_controller"))
			{
				Global_71012 = unk_0xFEB6EEC0545AF7AA(unk_0x61D2332983ACC05C());
			}
		}
		func_488(iParam3, &Var0, vParam1, fParam2, func_491(iParam0));
		func_455(iParam3, iParam0, 0);
	}
}

void func_455(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_485(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 12) && !unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_70024.f_555[0 /*21*/].f_4 != unk_0x8F474E419F56E48D(iParam1))
		{
			return;
		}
	}
	if (Global_70931 != -1 && Global_70931 != iParam0)
	{
		return;
	}
	if (unk_0xDC5D81351D6A4DDB(iParam1))
	{
		if (unk_0x1095F403F52B42E1(iParam1, 0))
		{
			if (!unk_0x4943BEEC19289B8E(iParam1))
			{
				unk_0x1F7948851FB36E88(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_106070.f_32605.f_4801 = func_474();
			}
			if (iParam1 != Global_70024.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_500(iParam0);
					if ((unk_0xDC5D81351D6A4DDB(iVar0) && unk_0x1095F403F52B42E1(iVar0, 0)) && iParam1 != iVar0)
					{
						func_456(iVar0, 145);
					}
				}
				Global_70930 = iParam1;
				Global_70931 = iParam0;
				Global_70932 = iParam2;
			}
		}
	}
}

void func_456(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_457(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB0D49A1F9F054602(iParam0, -1, 0);
		if (!unk_0xDC5D81351D6A4DDB(iVar0))
		{
			iVar0 = unk_0xBF8685DA34F4F151(iParam0, -1);
		}
		if (unk_0xDC5D81351D6A4DDB(iVar0) && !unk_0x4915F4759304D5CF(iVar0))
		{
			if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x8F474E419F56E48D(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106070.f_2355.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x8F474E419F56E48D(iParam0) == Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x429D45A6C6520026(&(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3CAC2741CC1A631F(unk_0xC5D229CE54955E47(iParam0), &(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106070.f_32605.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x8F474E419F56E48D(iParam0) == Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x429D45A6C6520026(&(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3CAC2741CC1A631F(unk_0xC5D229CE54955E47(iParam0), &(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106070.f_32605.f_5590 = iParam1;
	Global_70929 = iParam0;
	Global_106070.f_32605.f_5588 = 1;
	func_492(iParam0, &(Global_106070.f_32605.f_5510));
}

int func_457(int iParam0)
{
	if ((((((((((!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0)) || func_472(iParam0, 0, 0)) || func_472(iParam0, 1, 0)) || func_472(iParam0, 2, 0)) || func_491(iParam0) != 145) || func_471(iParam0)) || func_470(iParam0)) || func_469(iParam0)) || func_468(iParam0)) || !func_458(unk_0x8F474E419F56E48D(iParam0)))
	{
		if (func_470(iParam0))
		{
		}
		if (func_470(iParam0))
		{
		}
		if (func_472(iParam0, 0, 0))
		{
		}
		if (func_472(iParam0, 1, 0))
		{
		}
		if (func_472(iParam0, 2, 0))
		{
		}
		if (func_491(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_458(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_459(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x71852D4EBD08275F(iParam0) || unk_0xCA8C103FCD316F89(iParam0)) || unk_0x7C197233F79C2CB8(iParam0)) || unk_0x289FBFAD3E416C48(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_459(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x671704836D893828(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x4C9BACA8D249CB13()) || (iParam0 == joaat("buffalo3") && !unk_0x4C9BACA8D249CB13())) || (iParam0 == joaat("gauntlet2") && !unk_0x4C9BACA8D249CB13())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x4C9BACA8D249CB13()))
	{
		if (!func_467())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x730B2D99EC02BFBB())
		{
			if (unk_0xED2E7B72F90BB7CF(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x3B61940560400F58(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_466() && !func_465()) && !func_464()) && !func_463()) && !func_467())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x29A02C184A66D25E() || unk_0x47C01C0E6F4C1D06()) || unk_0x7DD04831D0FC44CA())
		{
		}
		else if (!func_464())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_462(iParam0))
		{
			return 0;
		}
	}
	if (!func_460(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_460(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_461())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_461()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_462(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2503689)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5E0F2F352218B916();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6488 && !Global_262145.f_12797) && iVar1 < Global_262145.f_12798)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14091 && iVar1 < Global_262145.f_14103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14092 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14093 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14094 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14102)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16718 && iVar1 < Global_262145.f_16682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16717 && iVar1 < Global_262145.f_16681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16716 && iVar1 < Global_262145.f_16680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16879 && iVar1 < Global_262145.f_16901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16880 && iVar1 < Global_262145.f_16902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16881 && iVar1 < Global_262145.f_16903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18528 && iVar1 < Global_262145.f_18625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18529 && iVar1 < Global_262145.f_18626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18530 && iVar1 < Global_262145.f_18627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18531 && iVar1 < Global_262145.f_18628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18532 && iVar1 < Global_262145.f_18629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19608 && iVar1 < Global_262145.f_19604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19609 && iVar1 < Global_262145.f_19605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19610 && iVar1 < Global_262145.f_19606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19611 && iVar1 < Global_262145.f_19607)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20487 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20488 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20489 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20490 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20491 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20492 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21264 && iVar1 < Global_262145.f_21284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21267 && iVar1 < Global_262145.f_21287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21265 && iVar1 < Global_262145.f_21285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21266 && iVar1 < Global_262145.f_21286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21268 && iVar1 < Global_262145.f_21288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21269 && iVar1 < Global_262145.f_21289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22225 && iVar1 < Global_262145.f_22253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22226 && iVar1 < Global_262145.f_22254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22227 && iVar1 < Global_262145.f_22255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22228 && iVar1 < Global_262145.f_22256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22229 && iVar1 < Global_262145.f_22257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22230 && iVar1 < Global_262145.f_22258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23432 && iVar1 < Global_262145.f_23448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23433 && iVar1 < Global_262145.f_23449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23437 && iVar1 < Global_262145.f_23453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23431 && iVar1 < Global_262145.f_23447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23434 && iVar1 < Global_262145.f_23450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23436 && iVar1 < Global_262145.f_23452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23435 && iVar1 < Global_262145.f_23451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23522 && iVar1 < Global_262145.f_23509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23523 && iVar1 < Global_262145.f_23510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23528 && iVar1 < Global_262145.f_23515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23527 && iVar1 < Global_262145.f_23514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23525 && iVar1 < Global_262145.f_23512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23524 && iVar1 < Global_262145.f_23511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23526 && iVar1 < Global_262145.f_23513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25628 && iVar1 < Global_262145.f_25630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24683 && iVar1 < Global_262145.f_24676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24684 && iVar1 < Global_262145.f_24677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24685 && iVar1 < Global_262145.f_24678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24686 && iVar1 < Global_262145.f_24679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25629 && iVar1 < Global_262145.f_25631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24687 && iVar1 < Global_262145.f_24680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24688 && iVar1 < Global_262145.f_24681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24689 && iVar1 < Global_262145.f_24682)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_463()
{
	return 0;
}

int func_464()
{
	return 1;
}

int func_465()
{
	return 1;
}

int func_466()
{
	if (unk_0x05BEBC245254F6F2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_467()
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

int func_468(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x8F474E419F56E48D(iParam0);
	sVar1 = unk_0xC5D229CE54955E47(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3CAC2741CC1A631F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_459(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90688[iVar0]))
		{
			if (Global_90688[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_470(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0) && unk_0x1095F403F52B42E1(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]) && unk_0x1095F403F52B42E1(Global_90658[iVar0], 0))
			{
				if (Global_90658[iVar0] == iParam0 && unk_0x8F474E419F56E48D(Global_90658[iVar0]) == unk_0x8F474E419F56E48D(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_471(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[24]))
	{
		if (iParam0 == Global_70024.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70024.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_472(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0) || !unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_473(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0x05EFB6A616B6FADE(Global_106070.f_7201[iVar2], 0))
		{
			if (unk_0xFB166837ACE44C44(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_473(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

var func_474()
{
	var uVar0;
	
	func_484(&uVar0, unk_0xC5B07C33AC7BB174());
	func_483(&uVar0, unk_0x65DA628D62901275());
	func_482(&uVar0, unk_0x34CEB9721AC6A0A9());
	func_477(&uVar0, unk_0xC9A0B68BA813CF99());
	func_476(&uVar0, unk_0x897D202BD69186D5());
	func_475(&uVar0, unk_0x56EBDF0E39D83471());
	return uVar0;
}

void func_475(var uParam0, int iParam1)
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

void func_476(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_477(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_481(*uParam0);
	iVar1 = func_479(*uParam0);
	if (iParam1 < 1 || iParam1 > func_478(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_478(int iParam0, int iParam1)
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

var func_479(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_480(unk_0x05EFB6A616B6FADE(iParam0, 31), -1, 1)) + 2011;
}

int func_480(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_481(var uParam0)
{
	return uParam0 & 15;
}

void func_482(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_483(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_484(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_485(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_486(0, 1);
			uParam0->f_12 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_486(0, 1);
			uParam0->f_12 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_486(1, 1);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_486(1, 2);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 19);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_486(1, 1);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_486(1, 2);
			uParam0->f_12 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 19);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_486(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_486(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_486(2, 1);
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 20);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 14);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 28);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 27);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 27);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 7);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 27);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 24);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 11);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 10);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 11);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 9);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 9);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 22);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_467())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_467())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 13);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 2);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 1);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 0);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 21);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 30);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 23);
			unk_0x2BCFB39E86340DAA(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_106070.f_32605.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_61(Global_106070.f_32605.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_32605.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_106070.f_32605.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_106070.f_32605.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 19))
	{
		if (!func_61(Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x05EFB6A616B6FADE(uParam0->f_9, 20))
	{
		if (!func_61(Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_486(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_238(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_487(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_487(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106070.f_9057.f_99.f_58[128] && !Global_106070.f_9057.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106070.f_9057.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106070.f_9057.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_488(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_485(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 10))
		{
			func_490(iParam0);
			func_489(uParam1, &(Global_106070.f_32605.f_69[Global_70024.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 11))
			{
				Global_106070.f_32605.f_1864[Global_70024.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_106070.f_32605.f_1934[Global_70024.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_106070.f_32605.f_1864[Global_70024.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_106070.f_32605.f_1934[Global_70024.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_265(iParam0, 1);
		}
	}
}

void func_489(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_490(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_485(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xDC5D81351D6A4DDB(Global_70024.f_139[iParam0]))
		{
			unk_0x1F7948851FB36E88(Global_70024.f_139[iParam0], true, 1);
			unk_0x792676988A48387F(&(Global_70024.f_139[iParam0]));
			Global_70024.f_139[iParam0] = 0;
		}
		if (unk_0x05EFB6A616B6FADE(Global_70024.f_555[0 /*21*/].f_9, 13))
		{
			func_265(iParam0, 0);
		}
	}
}

int func_491(int iParam0)
{
	int iVar0;
	
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return 145;
	}
	if (!unk_0x1095F403F52B42E1(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xDC5D81351D6A4DDB(Global_90658[iVar0]))
		{
			if (Global_90658[iVar0] == iParam0)
			{
				return Global_90668[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_492(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		func_115(uParam1);
		uParam1->f_66 = unk_0x8F474E419F56E48D(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC5D229CE54955E47(iParam0), 16);
		*uParam1 = unk_0xDDB38D7590A81CE5(iParam0);
		unk_0x249EC6991E16D61D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD8185C6194306C6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x00D0FF77BA971D60(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xBA6EC692A8E9BD41(iParam0);
		uParam1->f_67 = unk_0x9373D3C23637D009(iParam0);
		uParam1->f_69 = unk_0x8342B65392C8BC37(iParam0);
		uParam1->f_70 = unk_0xED16A3D69B141AED(iParam0);
		unk_0x292472155924CBB5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x922C8705F0BA67E6(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x243FC0956CEB6D1F(iParam0, 2))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 28);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 3))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 29);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 30);
		}
		if (unk_0x243FC0956CEB6D1F(iParam0, 1))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_495(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xEF6267624B1C9336(iParam0, 0))
		{
			uParam1->f_68 = unk_0x392DF1C78010FB0C(iParam0);
		}
		if (unk_0xCA8C103FCD316F89(uParam1->f_66))
		{
			if (unk_0xB4476DCF5073F3D1(iParam0))
			{
				switch (unk_0xED4856750A5EA5E8(iParam0))
				{
					case 3:
					case 0:
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 23);
						unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 23);
						unk_0xFA57C719261AA55D(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xCBFCD862A600B654(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 9);
		}
		if (unk_0x36167F9370DCE78E(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 10);
		}
		if (unk_0x8DEA0E8C80861E9D(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 13);
			unk_0xE5F6CFB0158C9F97(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE9FF101C94B1BBDB(iParam0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 12);
		}
		func_494(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xED6D3EA61B44622B(iParam0, iVar0 + 1))
			{
				unk_0x2BCFB39E86340DAA(&(uParam1->f_77), func_493(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x33C323290E3BDAB1(iParam0, 0))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_77), 11);
		}
		if (unk_0xAEAF59799C2F26E4(iParam0, "IgnoredByQuickSave") && unk_0x13AF6A38CAD2D5DD(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x2BCFB39E86340DAA(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(uParam1->f_77), 27);
		}
	}
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_494(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1095F403F52B42E1(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x857E88DF0C8EDB8B(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x9E68AB02E7DC3B39(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x9E68AB02E7DC3B39(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x22D95AF01E737CA1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB9A77CDBB0A3A5D8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB9A77CDBB0A3A5D8(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_496(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_490(iParam0);
	func_265(iParam0, 0);
}

int func_497(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_498(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_498(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88365[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88365[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_499(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0x499324B3EF19C288(vParam0, Global_88365[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_499(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_106070.f_7201[iParam0], 0);
}

int func_500(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70024.f_139[iParam0];
}

bool func_501(vector3 vParam0, int iParam1)
{
	return func_502(Global_96664.f_2875.f_12.f_66, vParam0, iParam1);
}

int func_502(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		vParam1 = { func_510() };
	}
	unk_0xDFCF5BB9A4E3B293(iParam0, &vVar0, &vVar1);
	if ((vVar1.x - vVar0.x) > vParam1.x)
	{
		return 0;
	}
	else if ((vVar1.y - vVar0.y) > vParam1.y)
	{
		return 0;
	}
	else if ((vVar1.z - vVar0.z) > vParam1.z)
	{
		return 0;
	}
	return 1;
}

void func_503(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_504(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_504(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xC409B91AC4749F88();
	if (unk_0xDC5D81351D6A4DDB(iVar0))
	{
		if (!unk_0x4943BEEC19289B8E(iVar0))
		{
			unk_0x1F7948851FB36E88(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0x1095F403F52B42E1(iVar0, 0))
		{
			if (bParam10)
			{
				func_509(iVar0);
			}
			if (unk_0x54F6F5A823224519(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0xE2BBD32891C18569(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_506(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x1095F403F52B42E1(iVar0, 0))
			{
				if (unk_0xD3C4AB5E628133C1(iVar0, joaat("taxi")))
				{
					if (unk_0xB0D49A1F9F054602(iVar0, -1, 0) != unk_0xA19140A5C42D8715() && unk_0xB0D49A1F9F054602(iVar0, -1, 0) != 0)
					{
						if (unk_0x499324B3EF19C288(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0xE2BBD32891C18569(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_472(iVar0, func_295(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_505(vParam5))
				{
					if (unk_0x1095F403F52B42E1(iVar0, 0))
					{
						iVar7 = unk_0x8F474E419F56E48D(iVar0);
						unk_0xE1D1402484966216(iVar0, &vVar4, &vVar5);
						if (unk_0x7C197233F79C2CB8(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x1095F403F52B42E1(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x01AF8CB960828C2B(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0x92DDCF53AA47A63D(iVar0, fParam4);
						unk_0x4299736016AECE26(iVar0, vParam3, 1, false, 0, 1);
						unk_0x99F546A9200EA026(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0xC19EDC1D7179164C(iVar0, false, true, 0);
							unk_0xC53974682AC939A9(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x4943BEEC19289B8E(iVar0) || !unk_0x82384F63D814C864(iVar0, 1))
						{
							unk_0x1F7948851FB36E88(iVar0, true, 1);
						}
						if (unk_0xE0FD180CD24C0B67(unk_0xA19140A5C42D8715(), iVar0, 0))
						{
							unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), unk_0xE2BBD32891C18569(iVar0, true), 1, false, 0, 1);
						}
						unk_0x4C842FAB634AC89E(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x982F1A2D170EDD0F(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xDC5D81351D6A4DDB(iVar0))
				{
					if (unk_0x4943BEEC19289B8E(iVar0))
					{
						unk_0x792676988A48387F(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x4943BEEC19289B8E(iVar0))
			{
				unk_0x1F7948851FB36E88(iVar0, true, 0);
			}
			iVar8 = unk_0xB0D49A1F9F054602(iVar0, -1, 0);
			if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
			{
				unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, false, 0, 1);
			}
			iVar9 = unk_0xE251DF9395C4E1C4(unk_0x8F474E419F56E48D(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0xB0D49A1F9F054602(iVar0, 0, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
				{
					unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, false, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0xB0D49A1F9F054602(iVar0, 1, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
				{
					unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, false, 0, 1);
				}
				iVar8 = unk_0xB0D49A1F9F054602(iVar0, 2, 0);
				if (unk_0xDC5D81351D6A4DDB(iVar8) && !unk_0x4915F4759304D5CF(iVar8))
				{
					unk_0x4299736016AECE26(iVar8, unk_0xE2BBD32891C18569(iVar8, true), 1, false, 0, 1);
				}
			}
			unk_0x4C842FAB634AC89E(&iVar0);
		}
	}
}

int func_505(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_506(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_508(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0xDFCF5BB9A4E3B293(unk_0x8F474E419F56E48D(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0x3201284584C7CD83(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_507(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_507(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_507(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_507(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_507(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_507(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_507(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_507(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_507(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_507(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_507(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_507(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_507(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_507(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_507(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_507(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_507(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_508(vector3 vParam0)
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

void func_509(int iParam0)
{
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		if (unk_0x1095F403F52B42E1(iParam0, 0))
		{
			if (unk_0x2F78D19B3446544E(iParam0) <= 200f)
			{
				unk_0x70B1045E099298C1(iParam0, 500f);
			}
			if (unk_0xC9396A3FD9FCE75E(iParam0) <= 700f)
			{
				unk_0x70B1045E099298C1(iParam0, 900f);
			}
			if (unk_0x24A1A7BF4ED94B71(iParam0) < 200)
			{
				unk_0x70B1045E099298C1(iParam0, 500f);
			}
		}
	}
}

Vector3 func_510()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_511()
{
	if (bLocal_276)
	{
		if (((iLocal_272 != 5 && iLocal_272 != 0) && iLocal_272 != 3) && iLocal_272 != 4)
		{
			func_512();
			if (iLocal_321 != 0)
			{
				func_291(5);
			}
		}
	}
}

void func_512()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xDC5D81351D6A4DDB(Local_533) && unk_0xDC5D81351D6A4DDB(Local_532))
	{
		if (unk_0x7112137033807390(Local_533, 0) || unk_0x4915F4759304D5CF(Local_533))
		{
			iLocal_321 = 5;
			return;
		}
		if (unk_0x7112137033807390(Local_532, 0) || unk_0x4915F4759304D5CF(Local_532))
		{
			iLocal_321 = 7;
			return;
		}
		if (unk_0xDEAEC99031DCB92A(Local_533, unk_0xA19140A5C42D8715(), 1))
		{
			unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
			iLocal_321 = 4;
			return;
		}
		if (unk_0xDEAEC99031DCB92A(Local_532, unk_0xA19140A5C42D8715(), 1))
		{
			unk_0x111B48287EFA117B(unk_0xD4E735F4B6A956AC());
			iLocal_321 = 6;
			return;
		}
	}
	if (unk_0xDC5D81351D6A4DDB(Local_534))
	{
		if (unk_0x7112137033807390(Local_534, 0) || unk_0x4915F4759304D5CF(Local_534))
		{
			iLocal_321 = 1;
			return;
		}
		else if (unk_0xDC5D81351D6A4DDB(Local_536))
		{
			if (!unk_0x7112137033807390(Local_536, 0) && unk_0x463E3A48A46C9195(Local_536))
			{
				unk_0x67697F97F2A7EE10(Local_536, 1, 0);
			}
		}
	}
	if (unk_0xDC5D81351D6A4DDB(Local_535))
	{
		if ((unk_0x7112137033807390(Local_535, 0) || unk_0x4374EED90C523366(Local_535)) || !unk_0x1095F403F52B42E1(Local_535, 0))
		{
			iLocal_321 = 3;
			return;
		}
		else if (iLocal_272 != 0)
		{
			if (unk_0x2BED1ED73F8FC841(Local_535))
			{
				if (func_289(iLocal_331, 3000))
				{
					iLocal_321 = 3;
					return;
				}
			}
			else
			{
				iLocal_331 = unk_0xFD34717937104F1C();
			}
		}
	}
	if (((iLocal_321 == 8 || iLocal_321 == 9) || iLocal_321 == 10) || iLocal_321 == 2)
	{
		return;
	}
	if (iLocal_272 == 1 || iLocal_272 == 2)
	{
		if (func_21(Local_534))
		{
			if (fLocal_340 > 200f)
			{
				iLocal_321 = 2;
				return;
			}
			if (fLocal_341 > 50000f && fLocal_341 < 58000f)
			{
				if (iLocal_280 || !unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), Local_535))
				{
					if (unk_0x54F6F5A823224519(unk_0xA19140A5C42D8715(), -668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, true, 0))
					{
						iLocal_321 = 2;
						return;
					}
				}
			}
		}
		if ((func_14(Local_535) && func_11(Local_533)) && func_11(Local_532))
		{
			vVar0 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true) };
			if (!unk_0xB10F7FE89663CB5B(Local_533, Local_535))
			{
				if (!unk_0xB10F7FE89663CB5B(Local_532, Local_535))
				{
					if (!iLocal_291)
					{
						if (!func_381(Local_533, vVar0, 60f) || !func_381(Local_532, vVar0, 60f))
						{
							func_19();
							func_328("NIGEL2_08", 7500, 1);
							iLocal_291 = 1;
						}
					}
					else if (func_381(Local_533, vVar0, 30f) && func_381(Local_532, vVar0, 30f))
					{
						if (func_341("NIGEL2_08", 0, 0))
						{
							unk_0xB9509A39A48644C4("NIGEL2_08");
						}
						iLocal_291 = 0;
					}
					else if (!func_381(Local_533, vVar0, 100f) && !func_381(Local_532, vVar0, 100f))
					{
						iLocal_321 = 8;
						return;
					}
				}
				else if (!iLocal_291)
				{
					if (!func_381(Local_533, vVar0, 60f))
					{
						func_19();
						func_328("NIGEL2_05", 7500, 1);
						iLocal_291 = 1;
					}
				}
				else if (func_381(Local_533, vVar0, 30f))
				{
					if (func_341("NIGEL2_05", 0, 0))
					{
						unk_0xB9509A39A48644C4("NIGEL2_05");
					}
					iLocal_291 = 0;
				}
				else if (!func_381(Local_533, vVar0, 100f))
				{
					iLocal_321 = 9;
					return;
				}
			}
			else if (!unk_0xB10F7FE89663CB5B(Local_532, Local_535))
			{
				if (!iLocal_291)
				{
					if (!func_381(Local_532, vVar0, 60f))
					{
						func_19();
						func_328("NIGEL2_09", 7500, 1);
						iLocal_291 = 1;
					}
				}
				else if (func_381(Local_532, vVar0, 30f))
				{
					if (func_341("NIGEL2_09", 0, 0))
					{
						unk_0xB9509A39A48644C4("NIGEL2_09");
					}
					iLocal_291 = 0;
				}
				else if (!func_381(Local_532, vVar0, 100f))
				{
					iLocal_321 = 10;
					return;
				}
			}
			else if (!unk_0xB10F7FE89663CB5B(unk_0xA19140A5C42D8715(), Local_535))
			{
				vVar1 = { unk_0xE2BBD32891C18569(Local_535, true) };
				fLocal_342 = vdist(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), vVar1);
				if (!iLocal_291)
				{
					if (fLocal_342 > 60f)
					{
						func_19();
						func_328("NIGEL2_08", 7500, 1);
						iLocal_291 = 1;
					}
				}
				else if (fLocal_342 > 100f)
				{
					iLocal_321 = 8;
					return;
				}
				else if (fLocal_342 < 30f)
				{
					if (func_341("NIGEL2_08", 0, 0))
					{
						unk_0xB9509A39A48644C4("NIGEL2_08");
					}
					iLocal_291 = 0;
				}
				if (bLocal_300)
				{
					if (fLocal_340 < 35f)
					{
						if (func_513(Local_535))
						{
							iLocal_321 = 8;
							return;
						}
					}
				}
			}
		}
	}
}

int func_513(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	if (!unk_0x893915B076B1DDF7(iLocal_337))
	{
		return 0;
	}
	if (unk_0x1095F403F52B42E1(iParam0, 0))
	{
		vVar0 = { unk_0xE2BBD32891C18569(iParam0, true) };
		if (unk_0x988A25F5907E93F0(vVar0) == iLocal_337)
		{
			iVar1 = unk_0x26F096D1E3BDF502(iParam0);
			if (func_63(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_514(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_71459 != 6)
	{
		if (Global_71461 == -1)
		{
			if (func_525(1, Param0))
			{
				if (Global_71462 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_33 > fVar0)
				{
					Global_71461 = unk_0xFD34717937104F1C();
					vLocal_34 = { unk_0x376AC8BC5AF45434(15) };
					fLocal_33 = 0f;
				}
				else
				{
					fLocal_33 = (fLocal_33 + unk_0xDE089748C4C76C96());
				}
			}
			else
			{
				fLocal_33 = 0f;
			}
		}
		else
		{
			if (!func_525(0, Param0))
			{
				Global_71461 = (unk_0xFD34717937104F1C() - 9000);
			}
			unk_0xD8C147DA332E7F06(7);
			unk_0xD8C147DA332E7F06(6);
			unk_0xD8C147DA332E7F06(8);
			unk_0xD8C147DA332E7F06(9);
			iVar1 = (unk_0xFD34717937104F1C() - Global_71461);
			if (iVar1 < 9000 && !unk_0x71364F510A1CB69F())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = ceil(((to_float(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = ceil(((to_float(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_71459)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				unk_0xCD282E433560A509(82, 66);
				unk_0x6F2FE3F2B8CE9390(1);
				unk_0x38DFCC31D902E792(2);
				iVar11 = func_295();
				if (Global_71462 == 1 && Global_71460 == 62)
				{
					iVar11 = Global_106070.f_2355.f_539.f_4302;
				}
				switch (iVar11)
				{
					case 0:
						unk_0x1C828C4226A9FADF(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						unk_0x1C828C4226A9FADF(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						unk_0x1C828C4226A9FADF(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				unk_0xA6D7328EAA8CB61E(iVar7, iVar8, iVar9, iVar2);
				unk_0x85AFD3602DD5A943();
				Var4 = { func_516(Global_71460, Global_71462, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				unk_0xE4C207949B93A9C7(fVar5, fVar6, 0f, 0.01f);
				unk_0xFD5A6B90A46ACED0(0.67f, 0.67f);
				if (!unk_0x7D67DDE730F596C5() && !unk_0xB8698B5AFA4DC05D())
				{
					fLocal_36 = 0.14f;
				}
				else
				{
					fLocal_36 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_515(&Var4) > fLocal_36)
					{
						if (unk_0xC9A7EEAA81FA9DF2(15))
						{
							unk_0xACDF25AEEEFD68FD(15, vLocal_34.x, (vLocal_34.y + fLocal_35));
							Global_71464 = 1;
						}
					}
				}
				unk_0x7C25BC565D364568(&Var4);
				unk_0xB435CE12BEF0DBF7(fVar5, fVar6, 0);
				unk_0x0DA2C67B1175034B();
				if (Global_71463 == 1)
				{
					func_256();
					fLocal_33 = 0f;
				}
			}
			else
			{
				func_256();
				fLocal_33 = 0f;
			}
		}
	}
}

float func_515(char* sParam0)
{
	unk_0xC42A779360572EA7(sParam0);
	return unk_0x4E0DD18900B7ACAE(1);
}

struct<2> func_516(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_524(iParam0) };
			break;
		
		case 7:
			Var0 = { func_242(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_523(iParam2) };
					break;
				
				case 8:
					Var0 = { func_522(iParam2) };
					break;
				
				case 7:
					Var0 = { func_521(iParam2) };
					break;
				
				case 10:
					Var0 = { func_520(iParam2) };
					break;
				
				case 5:
					Var0 = { func_519(iParam2) };
					break;
				
				case 4:
					Var0 = { func_518(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_517(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_517(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_518(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_519(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_520(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_521(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_522(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_523(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0x429D45A6C6520026(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_524(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_84115[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_106070.f_9057.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_525(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_527(0) || Global_71474) || Global_71463 == 1) || !unk_0x3A83743561B4F70C())
	{
		return 0;
	}
	switch (Global_71459)
	{
		case 0:
			if (unk_0x3CAC2741CC1A631F(&uParam1, "NONE") || unk_0x429D45A6C6520026(&uParam1))
			{
				Global_71459 = 3;
			}
			else
			{
				Global_71459 = 1;
			}
			break;
		
		case 1:
			if (unk_0x7974D616EF03E483())
			{
				Global_71459 = 2;
			}
			break;
		
		case 2:
			if (unk_0x5CA3186381FC012C())
			{
				Global_71459 = 4;
				return 1;
			}
			else if (!unk_0x99E48E2CD778F380())
			{
				Global_71459 = 3;
			}
			break;
		
		case 3:
			if (unk_0x5CA3186381FC012C())
			{
			}
			else
			{
				Global_71459 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x5CA3186381FC012C())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_71459 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x5CA3186381FC012C() || func_9(0)) || func_526(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_526(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

int func_527(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_528(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_528(int iParam0)
{
	return func_529(iParam0, Global_36117);
}

int func_529(int iParam0, int iParam1)
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

void func_530(int iParam0, bool bParam1)
{
	func_539(bParam1, 1);
	if (!func_48())
	{
		func_35("NIGEL2_MISSION_FAIL", 0);
	}
	if (bParam1)
	{
		func_531();
	}
	iLocal_273 = iParam0;
	bLocal_276 = false;
	if (func_48())
	{
		iLocal_277 = 1;
	}
	else
	{
		iLocal_277 = 0;
	}
	if (!func_48())
	{
		if (iLocal_273 == 0)
		{
			if (func_11(unk_0xA19140A5C42D8715()))
			{
				func_17(unk_0xA19140A5C42D8715(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				func_3(unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), true), 50f, 13, 5000, 0, 0);
				iLocal_277 = 1;
			}
		}
	}
	func_1(iLocal_273);
}

void func_531()
{
	func_532(1, 0);
	if (!func_48() && bLocal_276)
	{
		while (!func_35("NIGEL2_MISSION_FAIL", 0))
		{
			wait(0);
		}
	}
	unk_0x8E88E73F74A9FF79(false, false, 3000, 1, 0, 0);
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		if (!func_48())
		{
			unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
		}
		unk_0xF10B3BC4F73177E5(unk_0xD4E735F4B6A956AC(), 0, 0);
		unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
	}
	func_544();
	func_291(0);
}

void func_532(bool bParam0, bool bParam1)
{
	int iVar0;
	
	unk_0x4F93066CECE72793();
	if (unk_0xE06AA0996C4E4E03())
	{
		unk_0x135C61E339DABBAC(1);
	}
	func_19();
	unk_0xBF6EED5D6E0CD9BF(1f);
	func_537(0);
	func_24(1, 1, 1, 1);
	unk_0xF3D41ED309762C0D(0);
	unk_0x90E641761C692B84(0);
	func_300(0);
	if (!iLocal_292)
	{
		unk_0xB6B24463498F5F41();
	}
	unk_0xE724181C8BE2BA29(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 1);
	unk_0xE724181C8BE2BA29(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 1);
	unk_0xE724181C8BE2BA29(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
	unk_0x413F34FCFABEDE4B(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, true, 1);
	unk_0x413F34FCFABEDE4B(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, true, 1);
	unk_0xE70AC26DFC59863A(iLocal_356, 0);
	unk_0xE70AC26DFC59863A(iLocal_357, 0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		unk_0xE70AC26DFC59863A(iLocal_358[iVar0], 0);
		iVar0++;
	}
	unk_0x8C15CE28B371C038(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 28f, 0);
	unk_0x8C15CE28B371C038(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
	unk_0x8C15CE28B371C038(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
	unk_0x8C15CE28B371C038(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 0);
	unk_0xD9F4F897224699B4();
	unk_0x08D48A45317D12F1(0);
	func_536(0);
	if (!func_48() && bLocal_276)
	{
		func_35("NIGEL2_MISSION_FAIL", 0);
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
		unk_0x13E0A8160525AE55(unk_0xA19140A5C42D8715(), 170, false);
	}
	if (unk_0x37B568B777BC65F9(iLocal_320))
	{
		unk_0x930701157A4B9374(iLocal_320, false);
		unk_0x77F0486CE0E598D5(iLocal_320, 0);
	}
	func_535(1, 1, 1);
	func_534(&uLocal_367, 2);
	func_534(&uLocal_367, 3);
	func_534(&uLocal_367, 4);
	func_534(&uLocal_367, 5);
	func_303(&uLocal_20, 0, 0);
	unk_0x514B67C4470F1BEA(1);
	unk_0xDED73F11B8CB95B1(1f);
	unk_0x3E11F609741642B7(iLocal_354);
	unk_0xFC00A668AFC2126D(Local_535.f_1, false);
	unk_0xFC00A668AFC2126D(Local_536.f_1, false);
	func_93();
	func_50(bParam0);
	func_533(bParam1);
	if (iLocal_272 == 4)
	{
		func_268(75, 2, 1, 1, 0);
		func_268(76, 1, 1, 1, 0);
		func_268(181, 2, 1, 1, 0);
	}
	else
	{
		func_268(75, 0, 0, 1, 0);
		func_268(76, 1, 0, 1, 0);
		func_268(181, 1, 0, 1, 0);
	}
}

void func_533(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x893915B076B1DDF7(iLocal_337))
	{
		if (unk_0x2A8A410BC14B59BC(iLocal_337))
		{
			unk_0x40E4EC905662FAF7(iLocal_337, 0);
			unk_0xAFDE4F43F150FE9E(iLocal_337);
		}
	}
	if (unk_0xCD7C9B7A8F43BA15(uLocal_353))
	{
		if (unk_0xA3DC7C2803970902(uLocal_353) != 10)
		{
			unk_0x317CA41ED2351630(uLocal_353, 9);
		}
	}
	unk_0xD2BB05DE6C584878(iLocal_333, sLocal_359);
	unk_0xD2BB05DE6C584878(2, sLocal_359);
	unk_0xD2BB05DE6C584878(1, sLocal_360);
	func_387();
	func_67(0, 1);
	if (unk_0x059A39F1D399060B(iLocal_351))
	{
		unk_0x82E95CCADC55C11E(iLocal_351, 0);
	}
	if (unk_0x059A39F1D399060B(iLocal_352))
	{
		unk_0x82E95CCADC55C11E(iLocal_352, 0);
	}
	unk_0xCF2B4C5AF45D129E();
	if (func_14(Local_536))
	{
		unk_0x3C50F1F859BA232B(Local_536, 0);
	}
	if (unk_0x2F8EAF18929E1E59("NIGEL_02_CHASE"))
	{
		unk_0x5AD7D03C214BDA88("NIGEL_02_CHASE");
	}
	unk_0xB4442316D0B880FD(iLocal_332);
	unk_0x2220B21A4CC075AC();
	unk_0xE2D61CA2ABDF4B17();
	unk_0x4DC885EA8D6AF7FC("rcmnigel2");
	unk_0xA5DE74AE39867B03(Local_349.f_7);
	unk_0xA5DE74AE39867B03(Local_536.f_1);
	unk_0xA5DE74AE39867B03(Local_535.f_1);
	unk_0xA5DE74AE39867B03(Local_534.f_1);
	unk_0xA5DE74AE39867B03(Local_532.f_1);
	unk_0xA5DE74AE39867B03(Local_533.f_1);
	unk_0xA5DE74AE39867B03(iLocal_345);
	unk_0xA5DE74AE39867B03(iLocal_346);
	unk_0xA5DE74AE39867B03(iLocal_347);
	unk_0xA5DE74AE39867B03(iLocal_348);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0xA5DE74AE39867B03(Local_540[iVar0 /*2*/].f_1);
		iVar0++;
	}
	unk_0xA5DE74AE39867B03(Local_541.f_1);
	if (bParam0)
	{
		unk_0x93DA13E8C75A3B00(0, true);
	}
}

void func_534(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_535(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x99E48E2CD778F380())
	{
		while (bVar0)
		{
			bVar0 = unk_0x99E48E2CD778F380();
			if (unk_0x5CA3186381FC012C())
			{
				unk_0x7E0C95613122D046(0);
			}
			if (unk_0x7974D616EF03E483())
			{
				unk_0xFB35B0BAD6F5AD8F();
			}
			if (unk_0x99E48E2CD778F380() && !unk_0x5CA3186381FC012C())
			{
				bVar0 = false;
			}
			wait(0);
		}
		if (bParam0)
		{
			func_24(iParam1, iParam2, 1, 1);
		}
	}
}

void func_536(bool bParam0)
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

void func_537(bool bParam0)
{
	if (bParam0)
	{
		func_538();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_9(0))
		{
			func_6(0);
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

void func_538()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

void func_539(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_535(0, 1, 1);
	}
	if (!unk_0x71364F510A1CB69F())
	{
		unk_0x9662BE461F9FDF9E(0);
	}
	func_293(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_540(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_543())
	{
		unk_0x2F3193E06C2EFF44(0);
		unk_0xFA57C719261AA55D(&(Global_93232.f_20), 2);
		unk_0x62BAB49318F4FE6E(1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
		}
		Global_93228 = { vParam0 };
		Global_93231 = fParam1;
		Global_93227 = 1;
		if (iParam2 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 14);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(Global_93232.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 24);
		}
		else
		{
			unk_0xFA57C719261AA55D(&(Global_93232.f_20), 24);
		}
		func_47(1);
	}
}

int func_541()
{
	if (!Global_93232 == 10 && !Global_93232 == 9)
	{
		return 0;
	}
	return Global_93232.f_2;
}

void func_542(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_11(uParam0->f_28[iVar0]))
		{
			unk_0xD6CDDEFB0FD5B191(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_11(uParam0->f_35[iVar0]))
		{
			unk_0xD6CDDEFB0FD5B191(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_11(uParam0->f_41[iVar0]))
		{
			unk_0xD6CDDEFB0FD5B191(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xD6CDDEFB0FD5B191(unk_0xA19140A5C42D8715(), bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), bParam1);
		if (bParam2)
		{
			unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), true);
		}
	}
}

int func_543()
{
	if (Global_93232 == 10 || Global_93232 == 9)
	{
		return 1;
	}
	return 0;
}

void func_544()
{
	func_548();
	func_546(64, 2, 0);
	unk_0xBF6EED5D6E0CD9BF(0.2f);
	unk_0x60DEFBFF740D4C09(2, false);
	unk_0x60DEFBFF740D4C09(3, false);
	unk_0x60DEFBFF740D4C09(4, false);
	unk_0x60DEFBFF740D4C09(5, false);
	unk_0x08D48A45317D12F1(1);
	func_536(1);
	unk_0x789152CB302E8726(0);
	func_545();
}

void func_545()
{
	Global_87505 = 1;
}

void func_546(int iParam0, int iParam1, bool bParam2)
{
	Global_3069 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		func_324();
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
						func_547();
					}
				}
				else
				{
					Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
					Global_2993[1 /*6*/].f_5 = iParam1;
					func_547();
				}
			}
			else
			{
				Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
				Global_2993[1 /*6*/].f_5 = iParam1;
				func_547();
			}
		}
	}
}

void func_547()
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

void func_548()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iLocal_281[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iLocal_278[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_279[iVar0] = 0;
		iVar0++;
	}
	iLocal_282 = 0;
	iLocal_284 = 0;
	iLocal_291 = 0;
	iLocal_288 = 0;
	iLocal_289 = 0;
	iLocal_285 = 0;
	iLocal_286 = 0;
	iLocal_287 = 0;
	bLocal_300 = false;
	bLocal_298 = false;
	bLocal_295 = false;
	iLocal_290 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_283[iVar0] = 0;
		iVar0++;
	}
	iLocal_310 = 0;
	iLocal_307 = 0;
	iLocal_308 = 0;
	iLocal_309 = 0;
	iLocal_311 = 0;
	iLocal_312 = 1;
	iLocal_313 = 0;
	iLocal_314 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		iLocal_303[iVar0] = 0;
		iVar0++;
	}
	iLocal_297 = 0;
	iLocal_299 = 0;
	iLocal_292 = 1;
	bLocal_293 = false;
	iLocal_296 = 0;
	iLocal_294 = 0;
	bLocal_306 = false;
	iLocal_304 = 0;
	bLocal_305 = false;
	bLocal_301 = false;
	bLocal_302 = false;
	bLocal_315 = false;
	iLocal_316 = 0;
	iLocal_317 = 0;
	iLocal_318 = 0;
	iLocal_319 = 0;
	iLocal_321 = 0;
	iLocal_328 = 0;
	iLocal_323 = 0;
	iLocal_329 = 0;
	iLocal_330 = 0;
	iLocal_331 = 0;
	iLocal_324 = 0;
	iLocal_325 = 0;
	iLocal_322 = 0;
	iLocal_326 = 0;
	iLocal_327 = 0;
	iLocal_332 = -1;
	iLocal_333 = 1;
	iLocal_334 = 0;
	fLocal_340 = 0f;
	fLocal_341 = 0f;
	fLocal_339 = 20.75f;
	fLocal_342 = 0f;
	vLocal_547 = { 368.5714f, -594.9467f, 45.5422f };
	vLocal_548 = { 389.5015f, -614.1279f, 29.618f };
	iLocal_338 = 0;
	Local_540[0 /*2*/].f_1 = joaat("boxville2");
	Local_540[1 /*2*/].f_1 = joaat("washington");
	Local_540[2 /*2*/].f_1 = joaat("washington");
	Local_541.f_1 = joaat("sultan");
	iLocal_345 = joaat("a_m_y_business_01");
	iLocal_346 = joaat("s_m_m_doctor_01");
	iLocal_347 = joaat("s_f_y_scrubs_01");
	iLocal_348 = joaat("a_f_y_bevhills_03");
	Local_536.f_1 = joaat("dubsta");
	Local_536.f_3 = { -1290.73f, -634.603f, 26.1004f };
	Local_536.f_6 = 126.961f;
	Local_535.f_1 = func_550();
	Local_535.f_3 = { -1304.01f, -644.58f, 25.91f };
	Local_535.f_6 = 127.67f;
	Local_534.f_1 = func_549();
	Local_534.f_3 = { -1290.048f, -631.459f, 25.6863f };
	Local_534.f_6 = 121.506f;
	Local_532.f_1 = func_582(63);
	Local_532.f_3 = { -1309.61f, -640.33f, 26.53f };
	Local_532.f_6 = -124f;
	Local_533.f_1 = func_582(64);
	Local_533.f_3 = { -1310.24f, -640.19f, 26.53f };
	Local_533.f_6 = -73.78f;
	Local_349.f_1 = { 299.48f, -584.84f, 41.445f };
	Local_349.f_4 = { 0f, 0f, -20f };
	Local_349.f_7 = joaat("prop_hospitaldoors_start");
	iLocal_542 = 0;
	vLocal_550 = { 394.5f, -619.1f, 28.2f };
	vLocal_551 = { 0f, 0f, 0f };
	unk_0x94E87D83163B4BEB("ENEMIES", &iLocal_354);
	iLocal_355 = unk_0x35546CE87C5336BC(unk_0xA19140A5C42D8715());
	unk_0x80E7C4A78224C8F9(5, iLocal_354, 1862763509);
	unk_0x80E7C4A78224C8F9(5, 1862763509, iLocal_354);
	unk_0x80E7C4A78224C8F9(5, iLocal_354, iLocal_355);
	unk_0x80E7C4A78224C8F9(5, iLocal_355, iLocal_354);
	unk_0x80E7C4A78224C8F9(1, iLocal_355, 1862763509);
	unk_0x80E7C4A78224C8F9(1, 1862763509, iLocal_355);
}

int func_549()
{
	return joaat("u_m_m_aldinapoli");
}

int func_550()
{
	return iLocal_93;
}

void func_551()
{
	func_437();
	if (func_560())
	{
		func_532(0, 1);
	}
	func_552(&Local_275, 1, 0, 0);
	unk_0x8F1A9FE6D91AAFEB();
}

void func_552(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_558(uParam0, iParam1);
	func_556(uParam0, bParam2);
	func_553(uParam0, bParam3);
}

void func_553(var uParam0, bool bParam1)
{
	func_554(&(uParam0->f_41), bParam1);
}

void func_554(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_54(uParam0[iVar0]);
		}
		else
		{
			func_555(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_555(int iParam0, bool bParam1)
{
	if (unk_0xDC5D81351D6A4DDB(*iParam0))
	{
		if (unk_0x9298F1014462FC57(*iParam0))
		{
			unk_0xF334C9B245CD323D(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0xAA1FF14A8DC5C352(iParam0);
		}
		else
		{
			unk_0x0E093EB9C4B28CF5(*iParam0);
		}
	}
}

void func_556(var uParam0, bool bParam1)
{
	func_557(&(uParam0->f_35), bParam1);
}

void func_557(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_53(uParam0[iVar0]);
		}
		else
		{
			func_52(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_558(var uParam0, int iParam1)
{
	func_559(&(uParam0->f_28), iParam1);
}

void func_559(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_57(uParam0[iVar0]);
		}
		else
		{
			func_56(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

int func_560()
{
	int iVar0;
	
	iVar0 = func_287();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_105157[iVar0 /*10*/].f_4)
	{
		return 0;
	}
	Global_105157[iVar0 /*10*/].f_4 = 0;
	unk_0x93DA13E8C75A3B00(0, true);
	unk_0x93DA13E8C75A3B00(3, true);
	unk_0x93DA13E8C75A3B00(2, true);
	if (!func_98(0))
	{
		if (Global_105157[iVar0 /*10*/].f_5 && Global_105157[iVar0 /*10*/].f_6)
		{
			Global_105157[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_105157[iVar0 /*10*/].f_6 && !Global_105157[iVar0 /*10*/].f_5)
		{
			Global_105157[iVar0 /*10*/].f_6 = 1;
		}
	}
	return 1;
}

void func_561(bool bParam0)
{
	int iVar0;
	
	func_577();
	if (!func_576())
	{
		iVar0 = func_287();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_105157[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_105157[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_105157[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_87502 == Global_93269)
		{
			Global_106070.f_18546[iVar0 /*6*/].f_4++;
		}
		Global_87502 = Global_93269;
		if (bParam0)
		{
			func_246(iVar0, 1, 0);
			func_562(unk_0x61D2332983ACC05C(), iVar0);
		}
		else
		{
			if (Global_105157[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_257(&(Global_105157[iVar0 /*10*/].f_9));
			}
			func_245(iVar0, 1, 1, 0);
		}
		Global_105157[iVar0 /*10*/].f_6 = 1;
	}
}

void func_562(char* sParam0, int iParam1)
{
	if (Global_93232 != 12)
	{
		if (func_563(sParam0, 6, iParam1))
		{
			Global_93232.f_1 = iParam1;
		}
	}
}

int func_563(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<32> Var1;
	int iVar2;
	
	func_107();
	func_575();
	Global_93232 = 0;
	StringCopy(&(Global_93232.f_3), sParam0, 32);
	Global_93232.f_11 = iParam1;
	unk_0xDD63978CC283FA2D(1);
	unk_0x4A3FFA36E84DD5F4(0);
	unk_0x95DFD5DB6041DFE5(0);
	func_6(1);
	func_537(1);
	func_572(0);
	func_571(1);
	unk_0xFA57C719261AA55D(&(Global_93232.f_20), 9);
	unk_0xFA57C719261AA55D(&(Global_93232.f_20), 6);
	unk_0xFA57C719261AA55D(&(Global_93232.f_20), 20);
	unk_0xFA57C719261AA55D(&(Global_93232.f_20), 21);
	unk_0xFA57C719261AA55D(&(Global_93232.f_20), 5);
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
			{
				iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
				if (unk_0xEE9EA5C5862BBFA3(iVar0))
				{
					unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 5);
				}
			}
		}
	}
	unk_0x135C61E339DABBAC(1);
	unk_0x4F93066CECE72793();
	func_570(0);
	func_110(1);
	Global_93232.f_2 = Global_93269;
	if (func_569())
	{
		if (func_568())
		{
			if (Global_93269 >= func_565())
			{
				if (!unk_0x05EFB6A616B6FADE(Global_84115[iParam2 /*34*/].f_15, 16))
				{
					if (Global_106070.f_9057.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_87503 = 1;
					}
				}
			}
		}
		else if (Global_93232.f_11 == 6)
		{
			func_248(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_106070.f_18546[iParam2 /*6*/].f_4 >= 2)
				{
					Global_87503 = 1;
				}
			}
		}
		else
		{
			iVar2 = func_564(unk_0x61D2332983ACC05C());
			if (iVar2 > -1)
			{
				if (Global_106070.f_24958.f_4[iVar2] >= 2)
				{
					Global_87503 = 1;
				}
			}
		}
	}
	return 1;
}

int func_564(char* sParam0)
{
	if (unk_0x3CAC2741CC1A631F("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x3CAC2741CC1A631F("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x3CAC2741CC1A631F("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x3CAC2741CC1A631F("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

int func_565()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_566(&(Global_93232.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_566(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xFEB6EEC0545AF7AA(sParam0);
	iVar1 = func_567(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_567(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_84115[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_568()
{
	if ((((Global_93232.f_11 == 0 || Global_93232.f_11 == 1) || Global_93232.f_11 == 2) || Global_93232.f_11 == 3) || Global_93232.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_569()
{
	if ((((Global_93232.f_11 == 0 || Global_93232.f_11 == 1) || Global_93232.f_11 == 2) || Global_93232.f_11 == 6) || Global_93232.f_11 == 3)
	{
		return 1;
	}
	if (Global_93232.f_11 == 5)
	{
		if (func_564(&(Global_93232.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_570(bool bParam0)
{
	unk_0x85685830EFB9A55E(bParam0);
	unk_0xDC374DA4DC566237(bParam0);
}

void func_571(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD8EA6395AE60BF4A();
		unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 3);
	}
	else if (unk_0x05EFB6A616B6FADE(Global_93232.f_20, 3))
	{
		unk_0x21727E2C492FE1B3();
		unk_0xFA57C719261AA55D(&(Global_93232.f_20), 3);
	}
}

void func_572(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0x05EFB6A616B6FADE(Global_93232.f_20, 4))
		{
			func_574();
			unk_0xFA57C719261AA55D(&(Global_93232.f_20), 4);
		}
	}
	else
	{
		func_573();
		unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 4);
	}
}

void func_573()
{
	Global_17228.f_5 = 1;
}

void func_574()
{
	Global_17228.f_5 = 0;
}

void func_575()
{
	Global_87503 = 0;
	Global_87504 = 0;
}

int func_576()
{
	if (((Global_93232 == 13 || Global_93232 == 10) || Global_93232 == 11) || Global_93232 == 12)
	{
		return 0;
	}
	return 1;
}

void func_577()
{
	Global_93267 = 1;
	if (unk_0xD571C0459FC227D0(unk_0xD4E735F4B6A956AC(), 1))
	{
		if (unk_0x429D45A6C6520026(&Global_71437))
		{
			switch (func_295())
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
			switch (func_295())
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

void func_578(char* sParam0)
{
	if (!unk_0x429D45A6C6520026(sParam0))
	{
	}
}

void func_579(var uParam0)
{
	func_580(&(uParam0->f_28));
	func_580(&(uParam0->f_35));
	func_580(&(uParam0->f_41));
}

void func_580(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0xDC5D81351D6A4DDB((*uParam0)[iVar0]))
		{
			unk_0x1F7948851FB36E88((*uParam0)[iVar0], false, 1);
		}
		iVar0++;
	}
}

char* func_581()
{
	return "Al_DiNapoli";
}

int func_582(int iParam0)
{
	if (!func_238(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

