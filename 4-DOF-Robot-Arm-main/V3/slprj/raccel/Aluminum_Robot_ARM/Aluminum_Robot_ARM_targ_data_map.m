  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 104;
      section.data(104)  = dumData; %prealloc
      
	  ;% rtP.dFilt
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.nFilt
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.PIDController_D
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtP.PIDController1_D
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% rtP.PIDController2_D
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtP.PIDController3_D
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtP.PIDController_I
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtP.PIDController1_I
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtP.PIDController2_I
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtP.PIDController3_I
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtP.PIDController_InitialConditionForFilter
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtP.PIDController1_InitialConditionForFilter
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtP.PIDController2_InitialConditionForFilter
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% rtP.PIDController3_InitialConditionForFilter
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% rtP.PIDController_InitialConditionForIntegrator
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% rtP.PIDController1_InitialConditionForIntegrator
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% rtP.PIDController2_InitialConditionForIntegrator
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% rtP.PIDController3_InitialConditionForIntegrator
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% rtP.PIDController_LowerSaturationLimit
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% rtP.PIDController1_LowerSaturationLimit
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
	  ;% rtP.PIDController2_LowerSaturationLimit
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 22;
	
	  ;% rtP.PIDController3_LowerSaturationLimit
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 23;
	
	  ;% rtP.PIDController_N
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 24;
	
	  ;% rtP.PIDController1_N
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 25;
	
	  ;% rtP.PIDController2_N
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% rtP.PIDController3_N
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% rtP.PIDController_P
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 28;
	
	  ;% rtP.PIDController1_P
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 29;
	
	  ;% rtP.PIDController2_P
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 30;
	
	  ;% rtP.PIDController3_P
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 31;
	
	  ;% rtP.PIDController_UpperSaturationLimit
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 32;
	
	  ;% rtP.PIDController1_UpperSaturationLimit
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 33;
	
	  ;% rtP.PIDController2_UpperSaturationLimit
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 34;
	
	  ;% rtP.PIDController3_UpperSaturationLimit
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 35;
	
	  ;% rtP.Step_Time
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% rtP.Step_Y0
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 37;
	
	  ;% rtP.Step_YFinal
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 38;
	
	  ;% rtP.Gain_Gain
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 39;
	
	  ;% rtP.FromWs_Time0
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 40;
	
	  ;% rtP.FromWs_Data0
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 47;
	
	  ;% rtP.Integrator_gainval
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 75;
	
	  ;% rtP.Filter_gainval
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 76;
	
	  ;% rtP.u5_UpperSat
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 77;
	
	  ;% rtP.u5_LowerSat
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 78;
	
	  ;% rtP.Gain_Gain_mzek03xops
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 79;
	
	  ;% rtP.Break_Value
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 80;
	
	  ;% rtP.u5_UpperSat_f1xxbogm20
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 81;
	
	  ;% rtP.u5_LowerSat_aimx5l53y0
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 82;
	
	  ;% rtP.Step1_Time
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 83;
	
	  ;% rtP.Step1_Y0
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 84;
	
	  ;% rtP.Step1_YFinal
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 85;
	
	  ;% rtP.Gain1_Gain
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 86;
	
	  ;% rtP.Step2_Time
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 87;
	
	  ;% rtP.Step2_Y0
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 88;
	
	  ;% rtP.Step2_YFinal
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 89;
	
	  ;% rtP.Gain2_Gain
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 90;
	
	  ;% rtP.Step3_Time
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 91;
	
	  ;% rtP.Step3_Y0
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 92;
	
	  ;% rtP.Step3_YFinal
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 93;
	
	  ;% rtP.Gain3_Gain
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 94;
	
	  ;% rtP.Gain_Gain_eco1mxudja
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 95;
	
	  ;% rtP.Gain2_Gain_fdcexdgxvr
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 96;
	
	  ;% rtP.Gain1_Gain_j1nnjap4ro
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 97;
	
	  ;% rtP.Gain3_Gain_egywykobhy
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 98;
	
	  ;% rtP.IC_Value
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 99;
	
	  ;% rtP.DiscreteTransferFcn1_InitialStates
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 100;
	
	  ;% rtP.Gain4_Gain
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 101;
	
	  ;% rtP.Integrator_gainval_f3eeszil3z
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 102;
	
	  ;% rtP.Filter_gainval_nqnvwj50lp
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 103;
	
	  ;% rtP.u5_UpperSat_hsorbciehn
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 104;
	
	  ;% rtP.u5_LowerSat_odxlmaevjb
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 105;
	
	  ;% rtP.Gain6_Gain
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 106;
	
	  ;% rtP.Gain7_Gain
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 107;
	
	  ;% rtP.DiscreteTransferFcn2_InitialStates
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 108;
	
	  ;% rtP.Gain8_Gain
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 109;
	
	  ;% rtP.u255_UpperSat
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 110;
	
	  ;% rtP.u255_LowerSat
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 111;
	
	  ;% rtP.Gain10_Gain
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 112;
	
	  ;% rtP.Gain9_Gain
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 113;
	
	  ;% rtP.DiscreteTransferFcn3_InitialStates
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 114;
	
	  ;% rtP.Gain11_Gain
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 115;
	
	  ;% rtP.u255_UpperSat_cy5lmsdzoz
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 116;
	
	  ;% rtP.u255_LowerSat_asbda50lue
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 117;
	
	  ;% rtP.Gain5_Gain
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 118;
	
	  ;% rtP.Break1_Value
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 119;
	
	  ;% rtP.Break2_Value
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 120;
	
	  ;% rtP.Break3_Value
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 121;
	
	  ;% rtP.ZeroGain_Gain
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 122;
	
	  ;% rtP.Constant1_Value
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 123;
	
	  ;% rtP.ZeroGain_Gain_chz5ufcktq
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 124;
	
	  ;% rtP.Constant1_Value_ploncjubhz
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 125;
	
	  ;% rtP.ZeroGain_Gain_emqj4r052y
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 126;
	
	  ;% rtP.Constant1_Value_hvrq5qxppi
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 127;
	
	  ;% rtP.ZeroGain_Gain_jxlmlnbspu
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 128;
	
	  ;% rtP.Constant1_Value_g4hj2bwvcs
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 129;
	
	  ;% rtP.Gain_Gain_irbaz43gud
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 130;
	
	  ;% rtP.u5_UpperSat_atus3v43bp
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 131;
	
	  ;% rtP.u5_LowerSat_oryv2y43s1
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 132;
	
	  ;% rtP.Gain_Gain_iboc4vsafp
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 133;
	
	  ;% rtP.u255_UpperSat_m5nwsc4prn
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 134;
	
	  ;% rtP.u255_LowerSat_dzjia1thqe
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 135;
	
	  ;% rtP.Gain_Gain_g0cjd2kme4
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 136;
	
	  ;% rtP.u255_UpperSat_b3symk0lb5
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 137;
	
	  ;% rtP.u255_LowerSat_n1e2cxv13l
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 138;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.Memory_InitialCondition
	  section.data(1).logicalSrcIdx = 104;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Memory_InitialCondition_btlhzlk5fx
	  section.data(2).logicalSrcIdx = 105;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtP.ManualSwitch_1_CurrentSetting
	  section.data(1).logicalSrcIdx = 106;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.ManualSwitch_2_CurrentSetting
	  section.data(2).logicalSrcIdx = 107;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.ManualSwitch_3_CurrentSetting
	  section.data(3).logicalSrcIdx = 108;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.ManualSwitch_4_CurrentSetting
	  section.data(4).logicalSrcIdx = 109;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 101;
      section.data(101)  = dumData; %prealloc
      
	  ;% rtB.ktd2h4wayi
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.olyap2fx01
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 8;
	
	  ;% rtB.nq5ondror4
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 16;
	
	  ;% rtB.aw3y3l5gc0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 17;
	
	  ;% rtB.i53lpxrgtl
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 21;
	
	  ;% rtB.fzkuxy2mpg
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 22;
	
	  ;% rtB.ibymeqo4w3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 23;
	
	  ;% rtB.drh4o4lsrm
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 24;
	
	  ;% rtB.fpfaubmnjj
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 25;
	
	  ;% rtB.pie23wd2bf
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 26;
	
	  ;% rtB.mxbqwluued
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 27;
	
	  ;% rtB.a1olpxanio
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 28;
	
	  ;% rtB.kia1ippuen
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 29;
	
	  ;% rtB.jyxpzlsxjp
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 30;
	
	  ;% rtB.giapxchzsc
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 31;
	
	  ;% rtB.jwbkjot453
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 32;
	
	  ;% rtB.iky3yyt4pc
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 33;
	
	  ;% rtB.bprngneuci
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 34;
	
	  ;% rtB.jws0qcirwo
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 35;
	
	  ;% rtB.j5lrlirlvy
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 36;
	
	  ;% rtB.hwz513wtcp
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 37;
	
	  ;% rtB.jwmopbhf1l
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 38;
	
	  ;% rtB.ny2yf13znw
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 39;
	
	  ;% rtB.ilkoc43ltu
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 40;
	
	  ;% rtB.exgpu4mzzl
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 41;
	
	  ;% rtB.hvq1hssahi
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 42;
	
	  ;% rtB.cuzdkp3u4j
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 43;
	
	  ;% rtB.oerp2b0et4
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 44;
	
	  ;% rtB.d2pifgecao
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 45;
	
	  ;% rtB.hvt3a3pw0z
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 46;
	
	  ;% rtB.jw2daefpkv
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 47;
	
	  ;% rtB.o5l0llujzt
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 48;
	
	  ;% rtB.hjbicvqaq4
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 49;
	
	  ;% rtB.ehzqu1jmju
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 50;
	
	  ;% rtB.mfkgxksgwr
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 51;
	
	  ;% rtB.fcpppxuvag
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 52;
	
	  ;% rtB.p3ywisr0dv
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 53;
	
	  ;% rtB.gpl4kzhqur
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 54;
	
	  ;% rtB.gco3jzxyom
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 55;
	
	  ;% rtB.etnxfpjznh
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 56;
	
	  ;% rtB.c52coq543c
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 57;
	
	  ;% rtB.j0yyb35mlc
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 58;
	
	  ;% rtB.ficpm2krqt
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 59;
	
	  ;% rtB.ipyiynxjfh
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 60;
	
	  ;% rtB.ktl1ztab5m
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 61;
	
	  ;% rtB.kddarmbprq
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 62;
	
	  ;% rtB.e1djqxoyiu
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 63;
	
	  ;% rtB.fpmzk1nlis
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 64;
	
	  ;% rtB.btv3yvuomn
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 65;
	
	  ;% rtB.eeen4ada3p
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 66;
	
	  ;% rtB.br5skhqgef
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 67;
	
	  ;% rtB.inuxleclis
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 68;
	
	  ;% rtB.krtbfhbtm0
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 69;
	
	  ;% rtB.j0gqbgko2i
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 70;
	
	  ;% rtB.oknip1aipe
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 71;
	
	  ;% rtB.kivpoxi4vr
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 72;
	
	  ;% rtB.f0l35tzqgs
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 73;
	
	  ;% rtB.ciyx4ip0mc
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 74;
	
	  ;% rtB.jexlycubeg
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 75;
	
	  ;% rtB.a0sz2tfduf
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 76;
	
	  ;% rtB.mt5eefv21t
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 77;
	
	  ;% rtB.fmmqt4ysyf
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 78;
	
	  ;% rtB.librkmwt3k
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 79;
	
	  ;% rtB.d30bf04ldl
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 80;
	
	  ;% rtB.hjectoyfy3
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 81;
	
	  ;% rtB.bvdhbj54q0
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 82;
	
	  ;% rtB.l3unbkufet
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 83;
	
	  ;% rtB.f5abzmvimg
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 84;
	
	  ;% rtB.lhs5btp42r
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 85;
	
	  ;% rtB.ierntvt5nm
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 86;
	
	  ;% rtB.eustrco4oa
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 87;
	
	  ;% rtB.dqzjzzlnzt
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 88;
	
	  ;% rtB.ctnr2llxd1
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 89;
	
	  ;% rtB.mjvmdy05hg
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 90;
	
	  ;% rtB.l0ydipaxdm
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 94;
	
	  ;% rtB.kfmkfo20tj
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 98;
	
	  ;% rtB.dp5tl3nrhd
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 102;
	
	  ;% rtB.cx5y3yvdok
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 106;
	
	  ;% rtB.p2elnfut2o
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 117;
	
	  ;% rtB.e1jqwcx00o
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 119;
	
	  ;% rtB.plozcdvjyj
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 123;
	
	  ;% rtB.mm054drprn
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 127;
	
	  ;% rtB.ech2ew1rr2
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 131;
	
	  ;% rtB.eirl2ntjhd
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 135;
	
	  ;% rtB.fk1jgig4mk
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 146;
	
	  ;% rtB.i2goomhryg
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 147;
	
	  ;% rtB.j2fnpsqpqo
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 151;
	
	  ;% rtB.he3hlshzz3
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 155;
	
	  ;% rtB.c1eemeez3i
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 159;
	
	  ;% rtB.n5wwmjhbo3
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 163;
	
	  ;% rtB.ex1x01f4oc
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 167;
	
	  ;% rtB.m4tugv1m5k
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 171;
	
	  ;% rtB.f2wzumnwx4
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 182;
	
	  ;% rtB.chzxe3k2dn
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 183;
	
	  ;% rtB.ke4jnme1cl
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 187;
	
	  ;% rtB.jgkcsd20s3
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 191;
	
	  ;% rtB.nu0fcm3rf4
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 195;
	
	  ;% rtB.enbi2t101n
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 199;
	
	  ;% rtB.ilihvuljus
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 203;
	
	  ;% rtB.dbqqr4x2jx
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 214;
	
	  ;% rtB.pnk1tj1sdk
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 215;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtB.elkmica4fl
	  section.data(1).logicalSrcIdx = 101;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.jkg3quvkxc
	  section.data(2).logicalSrcIdx = 102;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.avhyg1sjte
	  section.data(3).logicalSrcIdx = 103;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.czs44yka0h
	  section.data(4).logicalSrcIdx = 104;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 44;
      section.data(44)  = dumData; %prealloc
      
	  ;% rtDW.brd5pvpnwz
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.aph4a3hagw
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.nmj1xcahr1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.k2qwlebtbj
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.pfrj0uy4xn
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.faouxk0mcc
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.j5idu3rbuu
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.mpnq3ofhxk
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.jtqxtmo1oi
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.g5fnflwjfz
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.lzyoonlrrq
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 11;
	
	  ;% rtDW.fahg2tibp4
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtDW.n4e3fjrbpf
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 15;
	
	  ;% rtDW.jaoyvsgqpt
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 16;
	
	  ;% rtDW.fo4d3b1zug
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 17;
	
	  ;% rtDW.oa43d4a4ep
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% rtDW.jubld2f0oy
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 21;
	
	  ;% rtDW.m0ux4nsemt
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 23;
	
	  ;% rtDW.e0qmamr2s3
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 25;
	
	  ;% rtDW.cdofc10d2c
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 27;
	
	  ;% rtDW.laqbkmsqgt
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 28;
	
	  ;% rtDW.esdkzybfai
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 29;
	
	  ;% rtDW.ia553yu2wz
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 31;
	
	  ;% rtDW.at0rqsdgt1
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 33;
	
	  ;% rtDW.dll33owect
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 35;
	
	  ;% rtDW.efm5wrkv3j
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 37;
	
	  ;% rtDW.hug3ibj3ji
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 38;
	
	  ;% rtDW.hbdiwwiuy3
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 39;
	
	  ;% rtDW.izya5bz1fe
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 41;
	
	  ;% rtDW.iijr2xg2li
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 43;
	
	  ;% rtDW.deyfcmgmsf
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 45;
	
	  ;% rtDW.g42hzkrdme
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 47;
	
	  ;% rtDW.aw3x413kxh
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 48;
	
	  ;% rtDW.irz3pmh2ot
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 49;
	
	  ;% rtDW.f2nbr3luvy
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 50;
	
	  ;% rtDW.mpmqkaspx1
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 51;
	
	  ;% rtDW.cxsjqpuo4e
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 52;
	
	  ;% rtDW.jy0kf1gtnz
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 53;
	
	  ;% rtDW.l1mlsom4no
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 54;
	
	  ;% rtDW.hkg4huthek
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 55;
	
	  ;% rtDW.g3r1cnilme
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 56;
	
	  ;% rtDW.hwhuf1w0bo
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 57;
	
	  ;% rtDW.l23eqhz4lj
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 58;
	
	  ;% rtDW.dqtlecgkn4
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 59;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 73;
      section.data(73)  = dumData; %prealloc
      
	  ;% rtDW.gpclr5jytr
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hwxj03owez
	  section.data(2).logicalSrcIdx = 45;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fb2s2iht4c
	  section.data(3).logicalSrcIdx = 46;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.k3bhkg1udv
	  section.data(4).logicalSrcIdx = 47;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.pqkloj3n3k
	  section.data(5).logicalSrcIdx = 48;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.a0idm12ybz
	  section.data(6).logicalSrcIdx = 49;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.hfzjpix1m2
	  section.data(7).logicalSrcIdx = 50;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.psm45qaiki
	  section.data(8).logicalSrcIdx = 51;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.ndryjsauqt
	  section.data(9).logicalSrcIdx = 52;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.clj03fazmq
	  section.data(10).logicalSrcIdx = 53;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.cizvyg3haq.AQHandles
	  section.data(11).logicalSrcIdx = 54;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.nxn4r2j4ni.TimePtr
	  section.data(12).logicalSrcIdx = 55;
	  section.data(12).dtTransOffset = 15;
	
	  ;% rtDW.o4zjtouqv1.AQHandles
	  section.data(13).logicalSrcIdx = 56;
	  section.data(13).dtTransOffset = 16;
	
	  ;% rtDW.kk11noexzo.AQHandles
	  section.data(14).logicalSrcIdx = 57;
	  section.data(14).dtTransOffset = 20;
	
	  ;% rtDW.otmjf3k0yc.AQHandles
	  section.data(15).logicalSrcIdx = 58;
	  section.data(15).dtTransOffset = 21;
	
	  ;% rtDW.kpxx2wlm0j.AQHandles
	  section.data(16).logicalSrcIdx = 59;
	  section.data(16).dtTransOffset = 22;
	
	  ;% rtDW.hhil12yx2a.AQHandles
	  section.data(17).logicalSrcIdx = 60;
	  section.data(17).dtTransOffset = 23;
	
	  ;% rtDW.e0ybehcbdl.LoggedData
	  section.data(18).logicalSrcIdx = 61;
	  section.data(18).dtTransOffset = 24;
	
	  ;% rtDW.c3kh11hlq0.LoggedData
	  section.data(19).logicalSrcIdx = 62;
	  section.data(19).dtTransOffset = 28;
	
	  ;% rtDW.m2xuz0rl23.LoggedData
	  section.data(20).logicalSrcIdx = 63;
	  section.data(20).dtTransOffset = 32;
	
	  ;% rtDW.f0org12oie.LoggedData
	  section.data(21).logicalSrcIdx = 64;
	  section.data(21).dtTransOffset = 36;
	
	  ;% rtDW.oiyi4iq2ei.LoggedData
	  section.data(22).logicalSrcIdx = 65;
	  section.data(22).dtTransOffset = 40;
	
	  ;% rtDW.h3yefwqha0.LoggedData
	  section.data(23).logicalSrcIdx = 66;
	  section.data(23).dtTransOffset = 43;
	
	  ;% rtDW.dmlu2cvdth.LoggedData
	  section.data(24).logicalSrcIdx = 67;
	  section.data(24).dtTransOffset = 44;
	
	  ;% rtDW.m4ybtmpe04.LoggedData
	  section.data(25).logicalSrcIdx = 68;
	  section.data(25).dtTransOffset = 45;
	
	  ;% rtDW.dsr4ci5ezz.LoggedData
	  section.data(26).logicalSrcIdx = 69;
	  section.data(26).dtTransOffset = 46;
	
	  ;% rtDW.lay2ajedkj.LoggedData
	  section.data(27).logicalSrcIdx = 70;
	  section.data(27).dtTransOffset = 47;
	
	  ;% rtDW.a3jz1vhf4h
	  section.data(28).logicalSrcIdx = 71;
	  section.data(28).dtTransOffset = 48;
	
	  ;% rtDW.ox0bnvu31g
	  section.data(29).logicalSrcIdx = 72;
	  section.data(29).dtTransOffset = 49;
	
	  ;% rtDW.dhy2lo1oyd
	  section.data(30).logicalSrcIdx = 73;
	  section.data(30).dtTransOffset = 50;
	
	  ;% rtDW.duwjflxffa
	  section.data(31).logicalSrcIdx = 74;
	  section.data(31).dtTransOffset = 51;
	
	  ;% rtDW.kf1tdxa4de
	  section.data(32).logicalSrcIdx = 75;
	  section.data(32).dtTransOffset = 52;
	
	  ;% rtDW.i2rvvnjeqf
	  section.data(33).logicalSrcIdx = 76;
	  section.data(33).dtTransOffset = 53;
	
	  ;% rtDW.am2r0bghwi
	  section.data(34).logicalSrcIdx = 77;
	  section.data(34).dtTransOffset = 54;
	
	  ;% rtDW.eyjwwignxd
	  section.data(35).logicalSrcIdx = 78;
	  section.data(35).dtTransOffset = 55;
	
	  ;% rtDW.anuu03dolc
	  section.data(36).logicalSrcIdx = 79;
	  section.data(36).dtTransOffset = 56;
	
	  ;% rtDW.iyfy1t030u
	  section.data(37).logicalSrcIdx = 80;
	  section.data(37).dtTransOffset = 57;
	
	  ;% rtDW.m2kh0iykjh.LoggedData
	  section.data(38).logicalSrcIdx = 81;
	  section.data(38).dtTransOffset = 58;
	
	  ;% rtDW.b0ercmpblz.LoggedData
	  section.data(39).logicalSrcIdx = 82;
	  section.data(39).dtTransOffset = 59;
	
	  ;% rtDW.hyjdfylux2.LoggedData
	  section.data(40).logicalSrcIdx = 83;
	  section.data(40).dtTransOffset = 60;
	
	  ;% rtDW.iqe1gchloi.LoggedData
	  section.data(41).logicalSrcIdx = 84;
	  section.data(41).dtTransOffset = 61;
	
	  ;% rtDW.la3jhngrnl
	  section.data(42).logicalSrcIdx = 85;
	  section.data(42).dtTransOffset = 62;
	
	  ;% rtDW.bj3ze5yj42
	  section.data(43).logicalSrcIdx = 86;
	  section.data(43).dtTransOffset = 63;
	
	  ;% rtDW.lieaetbmrt
	  section.data(44).logicalSrcIdx = 87;
	  section.data(44).dtTransOffset = 64;
	
	  ;% rtDW.ozm3gvpfzi
	  section.data(45).logicalSrcIdx = 88;
	  section.data(45).dtTransOffset = 65;
	
	  ;% rtDW.b3xra5qedg
	  section.data(46).logicalSrcIdx = 89;
	  section.data(46).dtTransOffset = 66;
	
	  ;% rtDW.o3onksh0um
	  section.data(47).logicalSrcIdx = 90;
	  section.data(47).dtTransOffset = 67;
	
	  ;% rtDW.j23zdmwkkl
	  section.data(48).logicalSrcIdx = 91;
	  section.data(48).dtTransOffset = 68;
	
	  ;% rtDW.npoaqa0aen
	  section.data(49).logicalSrcIdx = 92;
	  section.data(49).dtTransOffset = 69;
	
	  ;% rtDW.ioj5ac2qgb
	  section.data(50).logicalSrcIdx = 93;
	  section.data(50).dtTransOffset = 70;
	
	  ;% rtDW.huxngibetu
	  section.data(51).logicalSrcIdx = 94;
	  section.data(51).dtTransOffset = 71;
	
	  ;% rtDW.pafgzxfqbf.LoggedData
	  section.data(52).logicalSrcIdx = 95;
	  section.data(52).dtTransOffset = 72;
	
	  ;% rtDW.pwksrlmfas.LoggedData
	  section.data(53).logicalSrcIdx = 96;
	  section.data(53).dtTransOffset = 73;
	
	  ;% rtDW.fhthr4gruq
	  section.data(54).logicalSrcIdx = 97;
	  section.data(54).dtTransOffset = 74;
	
	  ;% rtDW.gwtjdjy24g
	  section.data(55).logicalSrcIdx = 98;
	  section.data(55).dtTransOffset = 75;
	
	  ;% rtDW.dt5cmcttgx
	  section.data(56).logicalSrcIdx = 99;
	  section.data(56).dtTransOffset = 76;
	
	  ;% rtDW.dvaor03ch4
	  section.data(57).logicalSrcIdx = 100;
	  section.data(57).dtTransOffset = 77;
	
	  ;% rtDW.ajovsjrrzu
	  section.data(58).logicalSrcIdx = 101;
	  section.data(58).dtTransOffset = 78;
	
	  ;% rtDW.klkrr1jmqr
	  section.data(59).logicalSrcIdx = 102;
	  section.data(59).dtTransOffset = 79;
	
	  ;% rtDW.p4tamc0yv4
	  section.data(60).logicalSrcIdx = 103;
	  section.data(60).dtTransOffset = 80;
	
	  ;% rtDW.pb3ij5lml1
	  section.data(61).logicalSrcIdx = 104;
	  section.data(61).dtTransOffset = 81;
	
	  ;% rtDW.fyfyt3vgzn
	  section.data(62).logicalSrcIdx = 105;
	  section.data(62).dtTransOffset = 82;
	
	  ;% rtDW.hykmwsuzxo
	  section.data(63).logicalSrcIdx = 106;
	  section.data(63).dtTransOffset = 83;
	
	  ;% rtDW.mxvpzlsras
	  section.data(64).logicalSrcIdx = 107;
	  section.data(64).dtTransOffset = 84;
	
	  ;% rtDW.gx5a0stbnw
	  section.data(65).logicalSrcIdx = 108;
	  section.data(65).dtTransOffset = 85;
	
	  ;% rtDW.h4w0g3bulz
	  section.data(66).logicalSrcIdx = 109;
	  section.data(66).dtTransOffset = 86;
	
	  ;% rtDW.by1emf5y3g
	  section.data(67).logicalSrcIdx = 110;
	  section.data(67).dtTransOffset = 87;
	
	  ;% rtDW.jaqsbgiutc
	  section.data(68).logicalSrcIdx = 111;
	  section.data(68).dtTransOffset = 88;
	
	  ;% rtDW.pogmy1p0md
	  section.data(69).logicalSrcIdx = 112;
	  section.data(69).dtTransOffset = 89;
	
	  ;% rtDW.isu1bsjo01
	  section.data(70).logicalSrcIdx = 113;
	  section.data(70).dtTransOffset = 90;
	
	  ;% rtDW.p5u2wq1dfl
	  section.data(71).logicalSrcIdx = 114;
	  section.data(71).dtTransOffset = 91;
	
	  ;% rtDW.g3fkpimayx
	  section.data(72).logicalSrcIdx = 115;
	  section.data(72).dtTransOffset = 92;
	
	  ;% rtDW.dpfuvpgag5
	  section.data(73).logicalSrcIdx = 116;
	  section.data(73).dtTransOffset = 93;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 23;
      section.data(23)  = dumData; %prealloc
      
	  ;% rtDW.l0fbymf1qf
	  section.data(1).logicalSrcIdx = 117;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hnatrkqrtk
	  section.data(2).logicalSrcIdx = 118;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fhyyuxa0yu.PrevIndex
	  section.data(3).logicalSrcIdx = 119;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.gbzd5pugdl
	  section.data(4).logicalSrcIdx = 120;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.itey1ecn4p
	  section.data(5).logicalSrcIdx = 121;
	  section.data(5).dtTransOffset = 8;
	
	  ;% rtDW.hsxy3n0vne
	  section.data(6).logicalSrcIdx = 122;
	  section.data(6).dtTransOffset = 9;
	
	  ;% rtDW.ffx44a5ccg
	  section.data(7).logicalSrcIdx = 123;
	  section.data(7).dtTransOffset = 14;
	
	  ;% rtDW.dmcndn514o
	  section.data(8).logicalSrcIdx = 124;
	  section.data(8).dtTransOffset = 15;
	
	  ;% rtDW.ievrpb2b23
	  section.data(9).logicalSrcIdx = 125;
	  section.data(9).dtTransOffset = 20;
	
	  ;% rtDW.e5bbdxb5mf
	  section.data(10).logicalSrcIdx = 126;
	  section.data(10).dtTransOffset = 21;
	
	  ;% rtDW.g420u1faqi
	  section.data(11).logicalSrcIdx = 127;
	  section.data(11).dtTransOffset = 26;
	
	  ;% rtDW.jeyjmatrkm
	  section.data(12).logicalSrcIdx = 128;
	  section.data(12).dtTransOffset = 27;
	
	  ;% rtDW.kevcm4tkte
	  section.data(13).logicalSrcIdx = 129;
	  section.data(13).dtTransOffset = 28;
	
	  ;% rtDW.p2vhcjso24
	  section.data(14).logicalSrcIdx = 130;
	  section.data(14).dtTransOffset = 29;
	
	  ;% rtDW.bejosmavsz
	  section.data(15).logicalSrcIdx = 131;
	  section.data(15).dtTransOffset = 30;
	
	  ;% rtDW.ddvttsm35w
	  section.data(16).logicalSrcIdx = 132;
	  section.data(16).dtTransOffset = 31;
	
	  ;% rtDW.ozk21ex1fn
	  section.data(17).logicalSrcIdx = 133;
	  section.data(17).dtTransOffset = 32;
	
	  ;% rtDW.m22bguur0b
	  section.data(18).logicalSrcIdx = 134;
	  section.data(18).dtTransOffset = 33;
	
	  ;% rtDW.ajjzhp3ldi
	  section.data(19).logicalSrcIdx = 135;
	  section.data(19).dtTransOffset = 34;
	
	  ;% rtDW.o51g2ohecp
	  section.data(20).logicalSrcIdx = 136;
	  section.data(20).dtTransOffset = 35;
	
	  ;% rtDW.eckwmjhlyk
	  section.data(21).logicalSrcIdx = 137;
	  section.data(21).dtTransOffset = 36;
	
	  ;% rtDW.lboglrrbuz
	  section.data(22).logicalSrcIdx = 138;
	  section.data(22).dtTransOffset = 37;
	
	  ;% rtDW.mq5tzhz5sr
	  section.data(23).logicalSrcIdx = 139;
	  section.data(23).dtTransOffset = 38;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.kaatgekvbb
	  section.data(1).logicalSrcIdx = 140;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.lsqosgc1dj
	  section.data(2).logicalSrcIdx = 141;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fje1tm10vl
	  section.data(3).logicalSrcIdx = 142;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.e5efcpoufx
	  section.data(4).logicalSrcIdx = 143;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% rtDW.f311qku23a
	  section.data(1).logicalSrcIdx = 144;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.htztxl2g4g
	  section.data(2).logicalSrcIdx = 145;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.joeszm1q20
	  section.data(3).logicalSrcIdx = 146;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.kmlkzpy3eu
	  section.data(4).logicalSrcIdx = 147;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.pden1paxeu
	  section.data(5).logicalSrcIdx = 148;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.ksnx1fvtcv
	  section.data(6).logicalSrcIdx = 149;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.i0yeepj0lf
	  section.data(7).logicalSrcIdx = 150;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.bf50kmffwm
	  section.data(8).logicalSrcIdx = 151;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.fl5zdmtbiu
	  section.data(9).logicalSrcIdx = 152;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.m1kxujqwzt
	  section.data(10).logicalSrcIdx = 153;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.bacve1cbmd
	  section.data(11).logicalSrcIdx = 154;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.ba3leuf343
	  section.data(12).logicalSrcIdx = 155;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.mjcxfqix55
	  section.data(13).logicalSrcIdx = 156;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.okptqdewzq
	  section.data(14).logicalSrcIdx = 157;
	  section.data(14).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 308429821;
  targMap.checksum1 = 3914746239;
  targMap.checksum2 = 165390107;
  targMap.checksum3 = 1326075722;

