/* Address: 0x14019b2e0 | Name: sub_14019B2E0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14019B2E0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, unsigned int *a6)
{
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  float v8; // xmm0_4
  int v9; // eax
  int v10; // eax
  double v11; // xmm0_8
  int v12; // eax
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  unsigned __int64 v21; // rcx
  void *v22; // rsp
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rcx
  void *v26; // rsp
  unsigned __int64 v27; // rcx
  void *v28; // rsp
  unsigned __int64 v29; // rcx
  void *v30; // rsp
  unsigned __int64 v31; // rcx
  void *v32; // rsp
  unsigned __int64 v33; // rcx
  void *v34; // rsp
  unsigned __int64 v35; // rcx
  void *v36; // rsp
  float v37; // xmm0_4
  int v38; // eax
  unsigned __int64 v39; // rcx
  void *v40; // rsp
  unsigned __int64 v41; // rcx
  void *v42; // rsp
  unsigned __int64 v43; // rcx
  void *v44; // rsp
  unsigned __int64 v45; // rcx
  void *v46; // rsp
  int v47; // eax
  unsigned __int64 v48; // rcx
  void *v49; // rsp
  int v50; // eax
  int j; // [rsp+C0h] [rbp+0h] BYREF
  int v53; // [rsp+C4h] [rbp+4h]
  int v54; // [rsp+C8h] [rbp+8h]
  int k; // [rsp+CCh] [rbp+Ch]
  int i; // [rsp+D0h] [rbp+10h]
  int v57; // [rsp+D4h] [rbp+14h]
  int v58; // [rsp+D8h] [rbp+18h]
  int v59; // [rsp+DCh] [rbp+1Ch]
  __int64 v60; // [rsp+E0h] [rbp+20h]
  int v61; // [rsp+E8h] [rbp+28h]
  int v62; // [rsp+ECh] [rbp+2Ch]
  int v63; // [rsp+F0h] [rbp+30h]
  int v64; // [rsp+F4h] [rbp+34h]
  int v65; // [rsp+F8h] [rbp+38h]
  float v66; // [rsp+FCh] [rbp+3Ch]
  float v67; // [rsp+100h] [rbp+40h]
  int v68; // [rsp+104h] [rbp+44h]
  int v69; // [rsp+108h] [rbp+48h]
  BOOL v70; // [rsp+10Ch] [rbp+4Ch]
  int v71; // [rsp+110h] [rbp+50h]
  int v72; // [rsp+114h] [rbp+54h]
  int v73; // [rsp+118h] [rbp+58h]
  int v74; // [rsp+11Ch] [rbp+5Ch]
  int v75; // [rsp+120h] [rbp+60h] BYREF
  int v76; // [rsp+124h] [rbp+64h]
  int v77; // [rsp+128h] [rbp+68h]
  float v78; // [rsp+12Ch] [rbp+6Ch]
  float v79; // [rsp+130h] [rbp+70h]
  BOOL v80; // [rsp+134h] [rbp+74h]
  __m128i *v81; // [rsp+138h] [rbp+78h]
  float *v82; // [rsp+140h] [rbp+80h]
  float v83; // [rsp+148h] [rbp+88h]
  float v84; // [rsp+14Ch] [rbp+8Ch] BYREF
  int v85; // [rsp+150h] [rbp+90h]
  const __m128i *v86; // [rsp+158h] [rbp+98h]
  int v87; // [rsp+160h] [rbp+A0h]
  int v88; // [rsp+164h] [rbp+A4h]
  int v89; // [rsp+168h] [rbp+A8h]
  int v90; // [rsp+16Ch] [rbp+ACh]
  int v91; // [rsp+170h] [rbp+B0h]
  int v92; // [rsp+174h] [rbp+B4h]
  int v93; // [rsp+178h] [rbp+B8h]
  float v94; // [rsp+17Ch] [rbp+BCh]
  float v95; // [rsp+180h] [rbp+C0h]
  float v96; // [rsp+184h] [rbp+C4h]
  int v97; // [rsp+188h] [rbp+C8h]
  __m128i *v98; // [rsp+190h] [rbp+D0h]
  int n; // [rsp+198h] [rbp+D8h]
  int v100; // [rsp+19Ch] [rbp+DCh]
  int v101; // [rsp+1A0h] [rbp+E0h]
  int v102; // [rsp+1A4h] [rbp+E4h]
  int v103; // [rsp+1A8h] [rbp+E8h]
  int v104; // [rsp+1ACh] [rbp+ECh]
  int v105; // [rsp+1B0h] [rbp+F0h]
  int m; // [rsp+1B4h] [rbp+F4h]
  float v107; // [rsp+1B8h] [rbp+F8h]
  int v108; // [rsp+1BCh] [rbp+FCh]
  __int64 v109; // [rsp+1C0h] [rbp+100h]
  __m128i *v110; // [rsp+1C8h] [rbp+108h]
  int *v111; // [rsp+1D0h] [rbp+110h]
  int v112; // [rsp+1D8h] [rbp+118h]
  unsigned int v113; // [rsp+1DCh] [rbp+11Ch]
  int v114; // [rsp+1E0h] [rbp+120h]
  int v115; // [rsp+1E4h] [rbp+124h]
  int v116; // [rsp+1E8h] [rbp+128h] BYREF
  int v117; // [rsp+1ECh] [rbp+12Ch]
  int v118; // [rsp+1F0h] [rbp+130h]
  BOOL v119; // [rsp+1F4h] [rbp+134h] BYREF
  int v120; // [rsp+1F8h] [rbp+138h]
  float v121; // [rsp+1FCh] [rbp+13Ch] BYREF
  int v122; // [rsp+200h] [rbp+140h]
  int *v123; // [rsp+208h] [rbp+148h]
  int *p_j; // [rsp+210h] [rbp+150h]
  int *v125; // [rsp+218h] [rbp+158h]
  __m128i *v126; // [rsp+220h] [rbp+160h]
  int *v127; // [rsp+228h] [rbp+168h]
  int v128; // [rsp+230h] [rbp+170h]
  int v129; // [rsp+234h] [rbp+174h]
  int v130; // [rsp+238h] [rbp+178h]
  int v131; // [rsp+23Ch] [rbp+17Ch]
  int v132; // [rsp+240h] [rbp+180h]
  float v133; // [rsp+244h] [rbp+184h]
  float v134; // [rsp+248h] [rbp+188h]
  BOOL v135; // [rsp+24Ch] [rbp+18Ch]
  int v136; // [rsp+250h] [rbp+190h]
  BOOL v137; // [rsp+254h] [rbp+194h]
  BOOL v138; // [rsp+258h] [rbp+198h]
  BOOL v139; // [rsp+25Ch] [rbp+19Ch]
  BOOL v140; // [rsp+260h] [rbp+1A0h]
  BOOL v141; // [rsp+264h] [rbp+1A4h]
  float v142; // [rsp+268h] [rbp+1A8h]
  int v143; // [rsp+26Ch] [rbp+1ACh]
  int v144; // [rsp+270h] [rbp+1B0h]
  float v145; // [rsp+274h] [rbp+1B4h]
  int v146; // [rsp+278h] [rbp+1B8h]
  float v147; // [rsp+27Ch] [rbp+1BCh]
  float v148; // [rsp+280h] [rbp+1C0h]
  int v149; // [rsp+284h] [rbp+1C4h]
  int v150; // [rsp+288h] [rbp+1C8h]
  float v151; // [rsp+28Ch] [rbp+1CCh]
  float v152; // [rsp+290h] [rbp+1D0h]
  float v153; // [rsp+294h] [rbp+1D4h]
  float v154; // [rsp+298h] [rbp+1D8h]
  float v155; // [rsp+29Ch] [rbp+1DCh]
  float v156; // [rsp+2A0h] [rbp+1E0h]
  float v157; // [rsp+2A4h] [rbp+1E4h]
  int v158; // [rsp+2A8h] [rbp+1E8h]
  float v159; // [rsp+2ACh] [rbp+1ECh]
  BOOL v160; // [rsp+2B0h] [rbp+1F0h]
  BOOL v161; // [rsp+2B4h] [rbp+1F4h]
  int v162; // [rsp+2B8h] [rbp+1F8h]
  int v163; // [rsp+2BCh] [rbp+1FCh] BYREF
  BOOL v164; // [rsp+2C0h] [rbp+200h]
  int v165; // [rsp+2C4h] [rbp+204h]
  BOOL v166; // [rsp+2C8h] [rbp+208h]
  int v167; // [rsp+2CCh] [rbp+20Ch]
  int v168; // [rsp+2D0h] [rbp+210h]
  int v169; // [rsp+2D4h] [rbp+214h]
  int v170; // [rsp+2D8h] [rbp+218h]
  BOOL v171; // [rsp+2DCh] [rbp+21Ch]
  BOOL v172; // [rsp+2E0h] [rbp+220h]
  int v173; // [rsp+2E4h] [rbp+224h]
  int v174; // [rsp+2E8h] [rbp+228h]
  int v175; // [rsp+2ECh] [rbp+22Ch]
  int v176; // [rsp+2F0h] [rbp+230h]
  int v177; // [rsp+2F4h] [rbp+234h]
  float v178; // [rsp+2F8h] [rbp+238h]
  int v179; // [rsp+2FCh] [rbp+23Ch]
  int v180; // [rsp+300h] [rbp+240h]
  float v181; // [rsp+304h] [rbp+244h]
  BOOL v182; // [rsp+308h] [rbp+248h]
  int v183; // [rsp+30Ch] [rbp+24Ch]
  int v184; // [rsp+310h] [rbp+250h]
  int v185; // [rsp+314h] [rbp+254h]
  int v186; // [rsp+318h] [rbp+258h]
  int v187; // [rsp+31Ch] [rbp+25Ch]
  int v188; // [rsp+320h] [rbp+260h]
  int v189; // [rsp+324h] [rbp+264h]
  float v190; // [rsp+328h] [rbp+268h]
  int v191; // [rsp+32Ch] [rbp+26Ch]
  int v192; // [rsp+330h] [rbp+270h]
  int v193; // [rsp+334h] [rbp+274h]
  int v194; // [rsp+338h] [rbp+278h]
  int v195; // [rsp+33Ch] [rbp+27Ch]
  int v196; // [rsp+340h] [rbp+280h]
  int v197; // [rsp+344h] [rbp+284h]
  BOOL v198; // [rsp+348h] [rbp+288h]
  BOOL v199; // [rsp+34Ch] [rbp+28Ch]
  float v200; // [rsp+350h] [rbp+290h]
  __int32 v201; // [rsp+354h] [rbp+294h]
  int v202; // [rsp+358h] [rbp+298h]
  __int32 v203; // [rsp+35Ch] [rbp+29Ch]
  int v204; // [rsp+360h] [rbp+2A0h]
  BOOL v205; // [rsp+364h] [rbp+2A4h]
  int v206; // [rsp+368h] [rbp+2A8h]
  int v207; // [rsp+36Ch] [rbp+2ACh]
  BOOL v208; // [rsp+370h] [rbp+2B0h]
  BOOL v209; // [rsp+374h] [rbp+2B4h]
  int v210; // [rsp+378h] [rbp+2B8h]
  BOOL v211; // [rsp+37Ch] [rbp+2BCh]
  BOOL v212; // [rsp+380h] [rbp+2C0h]
  int v213; // [rsp+384h] [rbp+2C4h]
  int v214; // [rsp+388h] [rbp+2C8h]
  int v215; // [rsp+38Ch] [rbp+2CCh]
  int v216; // [rsp+390h] [rbp+2D0h]
  int v217; // [rsp+394h] [rbp+2D4h]
  int *v218; // [rsp+398h] [rbp+2D8h]
  __m128i *v219; // [rsp+3A0h] [rbp+2E0h]
  int v220[4]; // [rsp+3A8h] [rbp+2E8h] BYREF
  int v221; // [rsp+3B8h] [rbp+2F8h]
  int v222; // [rsp+3BCh] [rbp+2FCh]
  unsigned int v223; // [rsp+3C0h] [rbp+300h] BYREF
  int v224; // [rsp+3C4h] [rbp+304h]
  int v225; // [rsp+3C8h] [rbp+308h]
  float v226; // [rsp+3CCh] [rbp+30Ch]
  int v227; // [rsp+3D0h] [rbp+310h]
  int v228; // [rsp+3D4h] [rbp+314h]
  int v229; // [rsp+3D8h] [rbp+318h]
  BOOL v230; // [rsp+3DCh] [rbp+31Ch]
  int v231[2]; // [rsp+3E0h] [rbp+320h] BYREF
  int v232; // [rsp+3E8h] [rbp+328h]
  float v233; // [rsp+3ECh] [rbp+32Ch]
  BOOL v234; // [rsp+3F0h] [rbp+330h]
  int v235; // [rsp+3F4h] [rbp+334h]
  int v236; // [rsp+3F8h] [rbp+338h]
  int v237; // [rsp+3FCh] [rbp+33Ch]
  float v238; // [rsp+400h] [rbp+340h]
  int *v239; // [rsp+408h] [rbp+348h]
  int *v240; // [rsp+410h] [rbp+350h]
  __int16 *v241; // [rsp+418h] [rbp+358h]
  int *v242; // [rsp+420h] [rbp+360h]
  int *v243; // [rsp+428h] [rbp+368h]
  int *v244; // [rsp+430h] [rbp+370h]
  int *v245; // [rsp+438h] [rbp+378h]
  int *v246; // [rsp+440h] [rbp+380h]
  __int64 v247; // [rsp+448h] [rbp+388h]
  __int64 v248; // [rsp+450h] [rbp+390h]
  __int64 v249; // [rsp+458h] [rbp+398h]
  __int64 v250; // [rsp+460h] [rbp+3A0h]
  int *v251; // [rsp+468h] [rbp+3A8h]
  _BYTE v252[56]; // [rsp+470h] [rbp+3B0h] BYREF
  __int64 v253; // [rsp+4A8h] [rbp+3E8h]
  int v256; // [rsp+4D0h] [rbp+410h]
  int v258; // [rsp+4E0h] [rbp+420h]
  int v259; // [rsp+4E0h] [rbp+420h]

  v74 = 0;
  v64 = 0;
  v59 = *(_DWORD *)(a1 + 8);
  v53 = *(_DWORD *)(a1 + 12);
  v75 = 15;
  v121 = 0.0;
  v119 = 0;
  v104 = 0;
  v199 = 0;
  v80 = 0;
  v116 = 0;
  v183 = 0;
  v204 = 0;
  v181 = 0.0;
  v79 = 0.0;
  v178 = 0.0;
  v163 = 0;
  v60 = *(_QWORD *)a1;
  v54 = *(_DWORD *)(v60 + 8);
  v76 = *(_DWORD *)(v60 + 4);
  v109 = *(_QWORD *)(v60 + 32);
  v62 = *(_DWORD *)(a1 + 36);
  v57 = *(_DWORD *)(a1 + 40);
  v205 = v62 != 0;
  v70 = v205;
  v84 = 0.0;
  if ( a5 >= 2 && a2 )
  {
    v256 = *(_DWORD *)(a1 + 32) * a3;
    for ( i = 0; i <= *(_DWORD *)(v60 + 40); ++i )
    {
      v247 = v60;
      if ( *(_DWORD *)(v60 + 48) << i == v256 )
        break;
    }
    if ( i <= *(_DWORD *)(v60 + 40) )
    {
      v225 = 1;
      v97 = 1 << i;
      v69 = *(_DWORD *)(v60 + 48) * (1 << i);
      v249 = a1 + 4LL * v76 * v59 + 252;
      v81 = (__m128i *)(a1 + 4LL * (v76 + 1024) * v59 + 252);
      v98 = (__m128i *)((char *)v81 + 4 * v54 * v59);
      v219 = (__m128i *)((char *)v98 + 4 * v54 * v59);
      v241 = &v219->m128i_i16[2 * v54 * v59];
      if ( a6 )
      {
        v117 = sub_14019A0E0((__int64)a6);
        v61 = sub_14019A0A0((__int64)a6);
        v88 = (v61 + 4) >> 3;
      }
      else
      {
        v61 = 1;
        v117 = 1;
        v88 = 0;
      }
      if ( a5 >= 1275 )
        v206 = 1275;
      else
        v206 = a5;
      v258 = v206;
      v58 = v206 - v88;
      if ( !*(_DWORD *)(a1 + 48) || *(_DWORD *)(a1 + 44) == -1 )
      {
        v65 = 0;
        v87 = v256 * *(_DWORD *)(a1 + 44);
        if ( v61 > 1 )
          v87 += v61;
        if ( *(_DWORD *)(a1 + 44) != -1 )
        {
          v208 = *(_DWORD *)(a1 + 52) != 0;
          if ( v206 >= (v87 + 4 * *(_DWORD *)v60) / (8 * *(_DWORD *)v60) - v208 )
          {
            v209 = *(_DWORD *)(a1 + 52) != 0;
            v210 = (v87 + 4 * *(_DWORD *)v60) / (8 * *(_DWORD *)v60) - v209;
          }
          else
          {
            v210 = v206;
          }
          if ( v210 >= 2 )
          {
            v211 = *(_DWORD *)(a1 + 52) != 0;
            if ( v206 >= (v87 + 4 * *(_DWORD *)v60) / (8 * *(_DWORD *)v60) - v211 )
            {
              v212 = *(_DWORD *)(a1 + 52) != 0;
              v213 = (v87 + 4 * *(_DWORD *)v60) / (8 * *(_DWORD *)v60) - v212;
            }
            else
            {
              v213 = v206;
            }
            v214 = v213;
          }
          else
          {
            v214 = 2;
          }
          v258 = v214;
        }
        v72 = v258 - v88;
      }
      else
      {
        v207 = *(int *)v60 >> 3;
        v65 = ((v207 >> 1) + v256 * *(_DWORD *)(a1 + 44)) / v207;
        v72 = v65 >> 6;
      }
      v228 = 40 * v53 + 20;
      v73 = ((400 * v258) >> (3 - i)) - ((400 >> i) - 50) * v228;
      if ( *(_DWORD *)(a1 + 44) != -1 )
      {
        if ( v73 >= *(_DWORD *)(a1 + 44) - ((400 >> i) - 50) * (40 * v53 + 20) )
          v215 = *(_DWORD *)(a1 + 44) - ((400 >> i) - 50) * (40 * v53 + 20);
        else
          v215 = v73;
        v73 = v215;
      }
      if ( !a6 )
      {
        sub_14019A1E0(v252, a4, (unsigned int)v258);
        a6 = (unsigned int *)v252;
      }
      if ( v65 > 0 && *(_DWORD *)(a1 + 56) )
      {
        v105 = v65;
        v216 = v61 == 1 ? 2 : 0;
        if ( v216 <= (v105 + v65 - *(_DWORD *)(a1 + 212)) >> 6 )
        {
          v128 = (v105 + v65 - *(_DWORD *)(a1 + 212)) >> 6;
        }
        else
        {
          v217 = v61 == 1 ? 2 : 0;
          v128 = v217;
        }
        if ( v128 >= v58 )
        {
          v132 = v58;
        }
        else
        {
          v129 = v61 == 1 ? 2 : 0;
          if ( v129 <= (v105 + v65 - *(_DWORD *)(a1 + 212)) >> 6 )
          {
            v131 = (v105 + v65 - *(_DWORD *)(a1 + 212)) >> 6;
          }
          else
          {
            v130 = v61 == 1 ? 2 : 0;
            v131 = v130;
          }
          v132 = v131;
        }
        v112 = v132;
        if ( v132 < v58 )
        {
          v258 = v112 + v88;
          v58 = v112;
          sub_14019A8F0((__int64)a6, v112 + v88);
        }
      }
      v71 = 8 * v258;
      v68 = v57;
      if ( v57 > *(_DWORD *)(v60 + 12) )
        v68 = *(_DWORD *)(v60 + 12);
      v6 = 4LL * (v76 + v69) * v59 + 15;
      if ( v6 <= 4LL * (v76 + v69) * v59 )
        v6 = 0xFFFFFFFFFFFFFF0LL;
      v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
      v127 = &j;
      v226 = *(float *)(a1 + 228);
      v8 = sub_1401A6D80(a2, (v69 - v76) * v53 / *(_DWORD *)(a1 + 32));
      if ( v226 <= v8 )
        v133 = sub_1401A6D80(a2, (v69 - v76) * v53 / *(_DWORD *)(a1 + 32));
      else
        v133 = *(float *)(a1 + 228);
      v94 = v133;
      v227 = v76 * v53 / *(_DWORD *)(a1 + 32);
      *(float *)(a1 + 228) = sub_1401A6D80(a2 + 4LL * ((v69 - v76) * v53 / *(_DWORD *)(a1 + 32)), v227);
      if ( v94 <= *(float *)(a1 + 228) )
        v134 = *(float *)(a1 + 228);
      else
        v134 = v94;
      v94 = v134;
      v9 = *(_DWORD *)(a1 + 64);
      v229 = 1;
      v135 = (float)(1.0 / (float)(1 << v9)) >= v134;
      v80 = v135;
      if ( v61 == 1 )
        sub_14019A450(a6, v80, 15);
      else
        v80 = 0;
      if ( v80 )
      {
        if ( v65 > 0 )
        {
          if ( v258 >= v88 + 2 )
            v136 = v88 + 2;
          else
            v136 = v258;
          v258 = v136;
          v72 = v136;
          v71 = 8 * v136;
          v58 = 2;
          sub_14019A8F0((__int64)a6, v136);
        }
        v61 = 8 * v258;
        v10 = sub_14019A0A0((__int64)a6);
        a6[6] += v61 - v10;
      }
      k = 0;
      do
      {
        v138 = 0;
        v137 = *(_DWORD *)(a1 + 20) && v94 > 65536.0;
        v138 = v137;
        v248 = a2 + 4LL * k;
        sub_1401A08E0(
          v248,
          &v127[(v76 + v69) * k + v76],
          v69,
          v59,
          *(_DWORD *)(a1 + 32),
          (float *)(v60 + 16),
          (float *)(a1 + 4LL * k + 196),
          v137);
        ++k;
      }
      while ( k < v59 );
      v139 = (*(_DWORD *)(a1 + 68) && v58 > 3 || v58 > 12 * v53)
          && !v70
          && !v80
          && !*(_DWORD *)(a1 + 24)
          && *(int *)(a1 + 28) >= 5;
      v230 = v139;
      v104 = *(_DWORD *)(a1 + 104);
      v165 = sub_1401B2750((__int64 *)a1, (__int64)v127, v249, v59, v69, v104, &v75, &v121, v231, v139, v58, a1 + 124);
      if ( v121 > 0.40000001 || (LODWORD(v11) = *(_DWORD *)(a1 + 112), *(float *)&v11 > 0.40000001) )
      {
        if ( !*(_DWORD *)(a1 + 124) || (v11 = *(float *)(a1 + 128), v11 > 0.3) )
        {
          v11 = (double)v75;
          if ( (double)v75 > 1.26 * (double)*(int *)(a1 + 108)
            || (v11 = (double)v75, 0.79 * (double)*(int *)(a1 + 108) > (double)v75) )
          {
            v183 = 1;
          }
        }
      }
      if ( v165 )
      {
        sub_14019A450(a6, 1, 1);
        v113 = sub_14019A020(++v75) - 4;
        sub_14019A5E0(a6, v113, 6);
        sub_14019A6D0(a6, v75 - (16 << v113), v113 + 4);
        --v75;
        sub_14019A6D0(a6, v231[0], 3);
        sub_14019A4F0(a6, v104, (__int64)&unk_140279CE8, 2);
      }
      else if ( !v70 && v61 + 16 <= v71 )
      {
        sub_14019A450(a6, 0, 1);
      }
      v64 = 0;
      v74 = 0;
      if ( *(int *)(a1 + 28) >= 1 && !*(_DWORD *)(a1 + 68) )
      {
        v140 = v70 && v72 < 15 && *(_DWORD *)(a1 + 188) != 2;
        v231[1] = v140;
        v64 = sub_1401AE510((__int64)v127, v76 + v69, v59, &v84, &v116, v140, &v163);
      }
      if ( i <= 0 || (v12 = sub_14019A0A0((__int64)a6), v12 + 3 > v71) )
      {
        v64 = 0;
        v204 = 1;
      }
      else if ( v64 )
      {
        v74 = v97;
      }
      v13 = 4LL * v69 * v59 + 15;
      if ( v13 <= 4LL * v69 * v59 )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
      v123 = &j;
      v15 = 4LL * v59 * v54 + 15;
      if ( v15 <= 4LL * v59 * v54 )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      v82 = (float *)&j;
      v17 = 4LL * v59 * v54 + 15;
      if ( v17 <= 4LL * v59 * v54 )
        v17 = 0xFFFFFFFFFFFFFF0LL;
      v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
      v86 = (const __m128i *)&j;
      v141 = v74 && *(int *)(a1 + 28) >= 8;
      v160 = v141;
      v19 = 4LL * v54 * v53 + 15;
      if ( v19 <= 4LL * v54 * v53 )
        v19 = 0xFFFFFFFFFFFFFF0LL;
      v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
      v110 = (__m128i *)&j;
      if ( v160 )
      {
        sub_1401AF0F0(v60, 0, (__int64)v127, (__int64)v123, v53, v59, i, *(_DWORD *)(a1 + 32));
        sub_1401A3450(v60, (__int64)v123, (__int64)v82, v68, v53, i);
        sub_1401A6EA0(v60, v68, v57, (__int64)v82, (__int64)v110, v53);
        for ( j = 0; j < v54 * v53; ++j )
        {
          *(float *)&v11 = *(float *)&v110->m128i_i32[j] + (float)(0.5 * (float)i);
          v110->m128i_i32[j] = LODWORD(v11);
        }
      }
      sub_1401AF0F0(v60, v74, (__int64)v127, (__int64)v123, v53, v59, i, *(_DWORD *)(a1 + 32));
      if ( v59 == 2 && v53 == 1 )
        v116 = 0;
      sub_1401A3450(v60, (__int64)v123, (__int64)v82, v68, v53, i);
      if ( *(_DWORD *)(a1 + 68) )
      {
        for ( j = 2; j < v57; ++j )
        {
          if ( (float)(0.000099999997 * *v82) <= v82[j] )
            v142 = 0.000099999997 * *v82;
          else
            v142 = v82[j];
          v82[j] = v142;
          if ( v82[j] <= 1.0e-15 )
            v143 = 646978941;
          else
            v143 = LODWORD(v82[j]);
          LODWORD(v11) = v143;
          LODWORD(v82[j]) = v143;
        }
      }
      sub_1401A6EA0(v60, v68, v57, (__int64)v82, (__int64)v86, v53);
      v21 = 4LL * v54 * v53 + 15;
      if ( v21 <= 4LL * v54 * v53 )
        v21 = 0xFFFFFFFFFFFFFF0LL;
      v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
      p_j = &j;
      MEMORY[0x1401FCD30](&j, 0, 4LL * v57);
      if ( !v70 && *(_QWORD *)(a1 + 240) && !*(_DWORD *)(a1 + 68) )
      {
        v67 = 0.0;
        v66 = 0.0;
        v114 = 0;
        if ( *(int *)(a1 + 96) >= 2 )
          v144 = *(_DWORD *)(a1 + 96);
        else
          v144 = 2;
        v77 = v144;
        for ( k = 0; k < v53; ++k )
        {
          for ( j = 0; j < v77; ++j )
          {
            if ( *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * v54)) >= 0.25 )
              v145 = 0.25;
            else
              v145 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * v54));
            if ( v145 <= -2.0 )
            {
              v147 = -2.0;
            }
            else
            {
              if ( *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * v54)) >= 0.25 )
                *(float *)&v146 = 0.25;
              else
                v146 = *(int *)(*(_QWORD *)(a1 + 240) + 4LL * (j + k * v54));
              v147 = *(float *)&v146;
            }
            v95 = v147;
            if ( v147 > 0.0 )
              v95 = 0.5 * v95;
            v67 = v67 + (float)(v95 * (float)(*(__int16 *)(v109 + 2LL * (j + 1)) - *(__int16 *)(v109 + 2LL * j)));
            v114 += *(__int16 *)(v109 + 2LL * (j + 1)) - *(__int16 *)(v109 + 2LL * j);
            v66 = v66 + (float)(v95 * (float)(2 * j + 1 - v77));
          }
        }
        v67 = v67 / (float)v114;
        v67 = v67 + 0.2;
        v66 = (float)(v66 * 6.0) / (float)(v77 * (v77 + 1) * (v77 - 1) * v53);
        v66 = 0.5 * v66;
        if ( v66 >= 0.030999999 )
          v148 = 0.030999999;
        else
          v148 = v66;
        if ( v148 <= -0.030999999 )
        {
          *(float *)&v150 = -0.030999999;
        }
        else
        {
          if ( v66 >= 0.030999999 )
            v149 = 1023275958;
          else
            v149 = LODWORD(v66);
          v150 = v149;
        }
        v66 = *(float *)&v150;
        for ( m = 0; ; ++m )
        {
          v232 = *(__int16 *)(v109 + 2LL * (m + 1));
          if ( v232 >= *(__int16 *)(v109 + 2LL * v77) / 2 )
            break;
        }
        v115 = 0;
        for ( j = 0; j < v77; ++j )
        {
          v233 = v67 + (float)(v66 * (float)(j - m));
          if ( v53 == 2 )
          {
            if ( *(float *)(*(_QWORD *)(a1 + 240) + 4LL * j) <= *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + v54)) )
              v151 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * (j + v54));
            else
              v151 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * j);
            v78 = v151;
          }
          else
          {
            v78 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * j);
          }
          if ( v78 >= 0.0 )
            v152 = 0.0;
          else
            v152 = v78;
          v78 = v152 - v233;
          if ( (float)(v152 - v233) > 0.25 )
          {
            *(float *)&p_j[j] = v78 - 0.25;
            ++v115;
          }
        }
        if ( v115 >= 3 )
        {
          v67 = v67 + 0.25;
          if ( v67 <= 0.0 )
          {
            for ( j = 0; j < v77; ++j )
            {
              if ( (float)(*(float *)&p_j[j] - 0.25) >= 0.0 )
                v153 = *(float *)&p_j[j] - 0.25;
              else
                v153 = 0.0;
              *(float *)&p_j[j] = v153;
            }
          }
          else
          {
            v67 = 0.0;
            v66 = 0.0;
            MEMORY[0x1401FCD30](p_j, 0, 4LL * v77);
          }
        }
        v67 = v67 + 0.2;
        v178 = 64.0 * v66;
        *(float *)&v11 = v67;
        v181 = v67;
      }
      if ( !*(_DWORD *)(a1 + 68) )
      {
        v83 = -10.0;
        v96 = 0.0;
        if ( v74 )
          v154 = 0.5 * (float)i;
        else
          v154 = 0.0;
        v107 = v154;
        for ( j = v62; j < v57; ++j )
        {
          if ( (float)(v83 - 1.0) <= (float)(*(float *)&v86->m128i_i32[j] - v107) )
            v155 = *(float *)&v86->m128i_i32[j] - v107;
          else
            v155 = v83 - 1.0;
          v83 = v155;
          if ( v53 == 2 )
          {
            if ( v83 <= (float)(*(float *)&v86->m128i_i32[v54 + j] - v107) )
              v156 = *(float *)&v86->m128i_i32[v54 + j] - v107;
            else
              v156 = v83;
            v83 = v156;
          }
          v96 = v96 + v83;
        }
        v96 = v96 / (float)(v57 - v62);
        v79 = v96 - *(float *)(a1 + 248);
        if ( v79 >= -1.5 )
          v157 = v79;
        else
          v157 = -1.5;
        if ( v157 <= 3.0 )
        {
          if ( v79 >= -1.5 )
            *(float *)&v158 = v79;
          else
            *(float *)&v158 = -1.5;
          v159 = *(float *)&v158;
        }
        else
        {
          v159 = 3.0;
        }
        v79 = v159;
        *(float *)&v11 = *(float *)(a1 + 248) + (float)(0.02 * v159);
        *(_DWORD *)(a1 + 248) = LODWORD(v11);
      }
      if ( !v160 )
        MEMORY[0x1401FC920](v110, v86, 4LL * v54 * v53);
      if ( i > 0 )
      {
        v23 = sub_14019A0A0((__int64)a6);
        if ( v23 + 3 <= v71
          && !v64
          && *(int *)(a1 + 28) >= 5
          && !*(_DWORD *)(a1 + 68)
          && !v70
          && (unsigned int)sub_1401AEB90((__int64)v86, (__int64)v81, v54, v62, v57, v53) )
        {
          v64 = 1;
          v74 = v97;
          sub_1401AF0F0(v60, v97, (__int64)v127, (__int64)v123, v53, v59, i, *(_DWORD *)(a1 + 32));
          sub_1401A3450(v60, (__int64)v123, (__int64)v82, v68, v53, i);
          sub_1401A6EA0(v60, v68, v57, (__int64)v82, (__int64)v86, v53);
          for ( j = 0; j < v54 * v53; ++j )
            *(float *)&v110->m128i_i32[j] = *(float *)&v110->m128i_i32[j] + (float)(0.5 * (float)i);
          LODWORD(v11) = 1045220557;
          v84 = 0.2;
        }
      }
      if ( i > 0 )
      {
        v24 = sub_14019A0A0((__int64)a6);
        if ( v24 + 3 <= v71 )
          sub_14019A450(a6, v64, 3);
      }
      v25 = 4LL * v69 * v53 + 15;
      if ( v25 <= 4LL * v69 * v53 )
        v25 = 0xFFFFFFFFFFFFFF0LL;
      v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
      v125 = &j;
      sub_1401A35F0(v60, (__int64)v123, (__int64)&j, (__int64)v82, v68, v53, v97);
      v161 = v72 >= 15 * v53 && !v70 && *(int *)(a1 + 28) >= 2 && !*(_DWORD *)(a1 + 68);
      v234 = v161;
      v27 = 4LL * v54 + 15;
      if ( v27 <= 4LL * v54 )
        v27 = 0xFFFFFFFFFFFFFF0LL;
      v28 = alloca(v27 & 0xFFFFFFFFFFFFFFF0uLL);
      v218 = &j;
      v29 = 4LL * v54 + 15;
      if ( v29 <= 4LL * v54 )
        v29 = 0xFFFFFFFFFFFFFF0LL;
      v30 = alloca(v29 & 0xFFFFFFFFFFFFFFF0uLL);
      v242 = &j;
      v31 = 4LL * v54 + 15;
      if ( v31 <= 4LL * v54 )
        v31 = 0xFFFFFFFFFFFFFF0LL;
      v32 = alloca(v31 & 0xFFFFFFFFFFFFFFF0uLL);
      v243 = &j;
      sub_1401B1250(
        (__int64)v86,
        (__int64)v110,
        v54,
        v62,
        v57,
        v53,
        v218,
        *(_DWORD *)(a1 + 64),
        *(_QWORD *)(v60 + 64),
        v64,
        *(_DWORD *)(a1 + 48),
        *(_DWORD *)(a1 + 56),
        v109,
        i,
        v72,
        v220,
        *(_DWORD *)(a1 + 68),
        (__int64)p_j,
        (_DWORD *)(a1 + 124),
        (__int64)v242,
        (__int64)&j);
      v238 = *(float *)&v11;
      v33 = 4LL * v54 + 15;
      if ( v33 <= 4LL * v54 )
        v33 = 0xFFFFFFFFFFFFFF0LL;
      v34 = alloca(v33 & 0xFFFFFFFFFFFFFFF0uLL);
      v111 = &j;
      if ( v234 )
      {
        if ( 20480 / v72 + 2 >= 80 )
          v162 = 20480 / v72 + 2;
        else
          v162 = 80;
        v235 = v162;
        v108 = sub_1401AF4F0(v60, v68, v64, (__int64)v111, v162, (__int64)v125, v69, i, v84, v116, (__int64)v242);
        for ( j = v68; j < v57; ++j )
          v111[j] = v111[v68 - 1];
      }
      else if ( v70 && v163 )
      {
        for ( j = 0; j < v57; ++j )
          v111[j] = 1;
        v108 = 0;
      }
      else if ( !v70 || v72 >= 15 || *(_DWORD *)(a1 + 188) == 2 )
      {
        for ( j = 0; j < v57; ++j )
          v111[j] = v64;
        v108 = 0;
      }
      else
      {
        for ( j = 0; j < v57; ++j )
          v111[j] = 0;
        v108 = v64;
      }
      v35 = 4LL * v54 * v53 + 15;
      if ( v35 <= 4LL * v54 * v53 )
        v35 = 0xFFFFFFFFFFFFFF0LL;
      v36 = alloca(v35 & 0xFFFFFFFFFFFFFFF0uLL);
      v126 = (__m128i *)&j;
      k = 0;
      do
      {
        for ( j = v62; j < v57; ++j )
        {
          v37 = sub_140244390();
          if ( v37 < 2.0 )
            *(float *)&v86->m128i_i32[v54 * k + j] = *(float *)&v86->m128i_i32[v54 * k + j]
                                                   - (float)(*(float *)&v241[2 * v54 * k + 2 * j] * 0.25);
        }
        ++k;
      }
      while ( k < v53 );
      v164 = *(_DWORD *)(a1 + 28) >= 4;
      sub_1401A6FC0(
        v60,
        v62,
        v57,
        v68,
        (__int64)v86,
        v81,
        v71,
        v126,
        a6,
        v53,
        i,
        v58,
        *(_DWORD *)(a1 + 16),
        (float *)(a1 + 88),
        v164,
        *(_DWORD *)(a1 + 60),
        *(_DWORD *)(a1 + 68));
      sub_1401B0110(v62, v57, v64, (__int64)v111, i, v108, a6);
      v38 = sub_14019A0A0((__int64)a6);
      if ( v38 + 4 <= v71 )
      {
        if ( *(_DWORD *)(a1 + 68) )
        {
          *(_DWORD *)(a1 + 104) = 0;
          *(_DWORD *)(a1 + 84) = 2;
        }
        else if ( v70 )
        {
          if ( *(_DWORD *)(a1 + 28) )
          {
            if ( v64 )
              *(_DWORD *)(a1 + 84) = 2;
            else
              *(_DWORD *)(a1 + 84) = 3;
          }
          else
          {
            *(_DWORD *)(a1 + 84) = 0;
          }
        }
        else if ( v74 || *(int *)(a1 + 28) < 3 || v58 < 10 * v53 )
        {
          if ( *(_DWORD *)(a1 + 28) )
            *(_DWORD *)(a1 + 84) = 2;
          else
            *(_DWORD *)(a1 + 84) = 0;
        }
        else
        {
          v166 = v165 != 0;
          *(_DWORD *)(a1 + 84) = sub_1401A3A00(
                                   v60,
                                   (__int64)v125,
                                   (int *)(a1 + 92),
                                   *(_DWORD *)(a1 + 84),
                                   (int *)(a1 + 100),
                                   (_DWORD *)(a1 + 104),
                                   v166,
                                   v68,
                                   v53,
                                   v97,
                                   (__int64)v243);
        }
        sub_14019A4F0(a6, *(_DWORD *)(a1 + 84), (__int64)&unk_140279CE4, 5);
      }
      if ( *(_DWORD *)(a1 + 68) )
      {
        if ( v72 / 3 <= 8 )
          v167 = v72 / 3;
        else
          v167 = 8;
        *v218 = v167;
      }
      v39 = 4LL * v54 + 15;
      if ( v39 <= 4LL * v54 )
        v39 = 0xFFFFFFFFFFFFFF0LL;
      v40 = alloca(v39 & 0xFFFFFFFFFFFFFFF0uLL);
      v239 = &j;
      sub_1401A12E0(v60, (__int64)&j, i, v53);
      v100 = 6;
      v71 *= 8;
      v85 = 0;
      v61 = sub_14019A0E0((__int64)a6);
      for ( j = v62; j < v57; ++j )
      {
        v89 = ((*(__int16 *)(v109 + 2LL * (j + 1)) - *(__int16 *)(v109 + 2LL * j)) * v53) << i;
        if ( v89 >= 48 )
          v168 = v89;
        else
          v168 = 48;
        if ( 8 * v89 >= v168 )
        {
          if ( v89 >= 48 )
            v169 = v89;
          else
            v169 = 48;
          v170 = v169;
        }
        else
        {
          v170 = 8 * v89;
        }
        v173 = v170;
        v122 = v100;
        v101 = 0;
        for ( n = 0; v61 + 8 * v122 < v71 - v85; ++n )
        {
          if ( v101 >= v239[j] )
            break;
          v171 = n < v218[j];
          v172 = v171;
          sub_14019A450(a6, v171, v122);
          v61 = sub_14019A0E0((__int64)a6);
          if ( !v172 )
            break;
          v101 += v173;
          v85 += v173;
          v122 = 1;
        }
        if ( n )
        {
          if ( v100 - 1 >= 2 )
            v174 = v100 - 1;
          else
            v174 = 2;
          v100 = v174;
        }
        v218[j] = v101;
      }
      if ( v53 == 2 )
      {
        if ( i )
          v119 = sub_1401B0C90(v60, (__int64)v125, i);
        *(_DWORD *)(a1 + 236) = sub_1401A5C90(
                                  (float)(v73 / 1000),
                                  (__int64)&unk_14027BBC0,
                                  (__int64)&unk_14027BC20,
                                  21,
                                  *(_DWORD *)(a1 + 236));
        if ( v62 <= *(_DWORD *)(a1 + 236) )
          v175 = *(_DWORD *)(a1 + 236);
        else
          v175 = v62;
        if ( v57 >= v175 )
        {
          if ( v62 <= *(_DWORD *)(a1 + 236) )
            v176 = *(_DWORD *)(a1 + 236);
          else
            v176 = v62;
          v177 = v176;
        }
        else
        {
          v177 = v57;
        }
        *(_DWORD *)(a1 + 236) = v177;
      }
      v103 = 5;
      if ( v61 + 48 <= v71 - v85 )
      {
        if ( v62 > 0 || *(_DWORD *)(a1 + 68) )
        {
          *(_DWORD *)(a1 + 232) = 0;
          v103 = 5;
        }
        else
        {
          v103 = sub_1401B0380(
                   v60,
                   (__int64)v125,
                   (__int64)v86,
                   v57,
                   i,
                   v53,
                   v69,
                   a1 + 124,
                   (float *)(a1 + 232),
                   v84,
                   *(_DWORD *)(a1 + 236),
                   v178,
                   v73);
        }
        sub_14019A4F0(a6, v103, (__int64)&unk_14027BB88, 7);
        v61 = sub_14019A0E0((__int64)a6);
      }
      if ( v65 > 0 )
      {
        v188 = *(_DWORD *)(v60 + 40) - i;
        v236 = 1275;
        if ( v258 >= 1275 >> (3 - i) )
        {
          v237 = 1275;
          v179 = 1275 >> (3 - i);
        }
        else
        {
          v179 = v258;
        }
        v259 = v179;
        if ( v70 )
        {
          if ( v65 - (72 * v53 + 32) >= 0 )
            v180 = v65 - (72 * v53 + 32);
          else
            v180 = 0;
          v92 = v180;
        }
        else
        {
          v92 = v65 - (320 * v53 + 160);
        }
        if ( *(_DWORD *)(a1 + 56) )
        {
          v250 = a1;
          v92 += *(int *)(a1 + 220) >> v188;
        }
        if ( v70 )
        {
          v63 = v92;
          if ( *(int *)(a1 + 192) < 100 )
          {
            v220[1] = 96;
            v63 += 96 >> (3 - i);
          }
          if ( *(int *)(a1 + 192) > 100 )
          {
            v220[2] = 144;
            v63 -= 144 >> (3 - i);
          }
          v63 += (int)(float)((float)(v84 - 0.25) * 400.0);
          if ( v84 > 0.69999999 )
          {
            if ( v63 <= 400 )
              v184 = 400;
            else
              v184 = v63;
            v63 = v184;
          }
        }
        else
        {
          v182 = *(_QWORD *)(a1 + 240) != 0;
          v63 = sub_1401B32A0(
                  v60,
                  a1 + 124,
                  v92,
                  i,
                  v73,
                  *(_DWORD *)(a1 + 96),
                  v53,
                  *(_DWORD *)(a1 + 236),
                  *(_DWORD *)(a1 + 56),
                  *(float *)(a1 + 232),
                  v220[0],
                  v84,
                  v183,
                  v238,
                  *(_DWORD *)(a1 + 68),
                  v182,
                  v181,
                  v79);
        }
        v63 += v61;
        v93 = ((v61 + v85 + 63) >> 6) + 2;
        if ( v70 )
        {
          if ( v93 <= (v117 + v85 + 359) >> 6 )
            v185 = (v117 + v85 + 359) >> 6;
          else
            v185 = v93;
          v93 = v185;
        }
        v58 = (v63 + 32) >> 6;
        if ( v93 <= v58 )
          v186 = v58;
        else
          v186 = v93;
        v58 = v186;
        if ( v259 >= v186 )
          v187 = v58;
        else
          v187 = v259;
        v58 = v187;
        v189 = v63 - v65;
        v63 = v187 << 6;
        if ( v80 )
        {
          v58 = 2;
          v63 = 128;
          v189 = 0;
        }
        if ( *(int *)(a1 + 224) >= 970 )
          v190 = 0.001;
        else
          v190 = 1.0 / (float)(++*(_DWORD *)(a1 + 224) + 20);
        if ( *(_DWORD *)(a1 + 56) )
          *(_DWORD *)(a1 + 212) += v63 - v65;
        if ( *(_DWORD *)(a1 + 56) )
        {
          v220[3] = 1;
          *(_DWORD *)(a1 + 216) += (int)(float)(v190
                                              * (float)((1 << v188) * v189
                                                      - *(_DWORD *)(a1 + 220)
                                                      - *(_DWORD *)(a1 + 216)));
          *(_DWORD *)(a1 + 220) = -*(_DWORD *)(a1 + 216);
        }
        if ( *(_DWORD *)(a1 + 56) && *(int *)(a1 + 212) < 0 )
        {
          v221 = (((-*(_DWORD *)(a1 + 212) >> 31) & 0x3F) - *(_DWORD *)(a1 + 212)) >> 6;
          if ( v80 )
            v191 = 0;
          else
            v191 = v221;
          v58 += v191;
          *(_DWORD *)(a1 + 212) = 0;
        }
        if ( v259 >= v58 )
          v192 = v58;
        else
          v192 = v259;
        v258 = v192;
        sub_14019A8F0((__int64)a6, v192);
      }
      v41 = 4LL * v54 + 15;
      if ( v41 <= 4LL * v54 )
        v41 = 0xFFFFFFFFFFFFFF0LL;
      v42 = alloca(v41 & 0xFFFFFFFFFFFFFFF0uLL);
      v240 = &j;
      v43 = 4LL * v54 + 15;
      if ( v43 <= 4LL * v54 )
        v43 = 0xFFFFFFFFFFFFFF0LL;
      v44 = alloca(v43 & 0xFFFFFFFFFFFFFFF0uLL);
      v244 = &j;
      v45 = 4LL * v54 + 15;
      if ( v45 <= 4LL * v54 )
        v45 = 0xFFFFFFFFFFFFFF0LL;
      v46 = alloca(v45 & 0xFFFFFFFFFFFFFFF0uLL);
      v246 = &j;
      v222 = v258 << 6;
      v47 = sub_14019A0E0((__int64)a6);
      v102 = v222 - v47 - 1;
      if ( v64 && i >= 2 && v102 >= 8 * i + 16 )
        v193 = 8;
      else
        v193 = 0;
      v120 = v193;
      v102 -= v193;
      v118 = v57 - 1;
      if ( *(_DWORD *)(a1 + 124) )
      {
        if ( v73 >= 32000 * v53 )
        {
          if ( v73 >= 48000 * v53 )
          {
            if ( v73 >= 60000 * v53 )
            {
              if ( v73 >= 80000 * v53 )
                v90 = 20;
              else
                v90 = 19;
            }
            else
            {
              v90 = 18;
            }
          }
          else
          {
            v90 = 16;
          }
        }
        else
        {
          v90 = 13;
        }
        if ( *(_DWORD *)(a1 + 156) <= v90 )
          v194 = v90;
        else
          v194 = *(_DWORD *)(a1 + 156);
        v118 = v194;
      }
      if ( *(_DWORD *)(a1 + 68) )
        v118 = 1;
      v91 = sub_1401A29F0(
              v60,
              v62,
              v57,
              (__int64)v218,
              (__int64)v239,
              v103,
              (int *)(a1 + 236),
              &v119,
              v102,
              (int *)&v223,
              (__int64)v244,
              (__int64)v240,
              (__int64)v246,
              v53,
              i,
              a6,
              1,
              *(_DWORD *)(a1 + 96),
              v118);
      if ( *(_DWORD *)(a1 + 96) )
      {
        if ( *(_DWORD *)(a1 + 96) - 1 <= v91 )
          v195 = v91;
        else
          v195 = *(_DWORD *)(a1 + 96) - 1;
        if ( *(_DWORD *)(a1 + 96) + 1 >= v195 )
        {
          if ( *(_DWORD *)(a1 + 96) - 1 <= v91 )
            v196 = v91;
          else
            v196 = *(_DWORD *)(a1 + 96) - 1;
          v197 = v196;
        }
        else
        {
          v197 = *(_DWORD *)(a1 + 96) + 1;
        }
        *(_DWORD *)(a1 + 96) = v197;
      }
      else
      {
        *(_DWORD *)(a1 + 96) = v91;
      }
      sub_1401A7710(v60, v62, v57, (__int64)v81, (__int64)v126, (__int64)v240, a6, v53);
      v48 = v54 * v53 + 15LL;
      if ( v48 <= v54 * v53 )
        v48 = 0xFFFFFFFFFFFFFF0LL;
      v49 = alloca(v48 & 0xFFFFFFFFFFFFFFF0uLL);
      v251 = &j;
      if ( v53 == 2 )
        v245 = &v125[v69];
      else
        v245 = nullptr;
      sub_1401A4050(
        1u,
        v60,
        v62,
        v57,
        (__int64)v125,
        (__int64)v245,
        (__int64)v251,
        (__int64)v82,
        (__int64)v244,
        v74,
        *(_DWORD *)(a1 + 84),
        v119,
        *(_DWORD *)(a1 + 236),
        (__int64)v111,
        (v258 << 6) - v120,
        v223,
        a6,
        i,
        v91,
        (_DWORD *)(a1 + 80),
        *(_DWORD *)(a1 + 28),
        *(_DWORD *)(a1 + 76),
        *(_DWORD *)(a1 + 72));
      if ( v120 > 0 )
      {
        v198 = *(_DWORD *)(a1 + 120) < 2;
        v199 = v198;
        sub_14019A6D0(a6, v198, 1);
      }
      v224 = 8 * v258;
      v50 = sub_14019A0A0((__int64)a6);
      sub_1401A7930(v60, v62, v57, (__int64)v81, (__int64)v126, (__int64)v240, (__int64)v246, v224 - v50, a6, v53);
      MEMORY[0x1401FCD30](v241, 0, 4LL * v59 * v54);
      k = 0;
      do
      {
        for ( j = v62; j < v57; ++j )
        {
          if ( *(float *)&v126->m128i_i32[v54 * k + j] <= 0.5 )
            v200 = *(float *)&v126->m128i_i32[v54 * k + j];
          else
            v200 = 0.5;
          if ( v200 >= -0.5 )
          {
            if ( *(float *)&v126->m128i_i32[v54 * k + j] <= 0.5 )
              v201 = v126->m128i_i32[v54 * k + j];
            else
              v201 = 1056964608;
            v202 = v201;
          }
          else
          {
            v202 = -1090519040;
          }
          *(_DWORD *)&v241[2 * v54 * k + 2 * j] = v202;
        }
        ++k;
      }
      while ( k < v53 );
      if ( v80 )
      {
        for ( j = 0; j < v54 * v53; ++j )
          v81->m128i_i32[j] = -1042284544;
      }
      *(_DWORD *)(a1 + 108) = v75;
      *(float *)(a1 + 112) = v121;
      *(_DWORD *)(a1 + 116) = v104;
      if ( v59 == 2 && v53 == 1 )
        MEMORY[0x1401FC920]((__m128i *)((char *)v81 + 4 * v54), v81, 4LL * v54);
      if ( v64 )
      {
        for ( j = 0; j < v54 * v59; ++j )
        {
          if ( *(float *)&v81->m128i_i32[j] <= *(float *)&v98->m128i_i32[j] )
            v203 = v81->m128i_i32[j];
          else
            v203 = v98->m128i_i32[j];
          v98->m128i_i32[j] = v203;
        }
      }
      else
      {
        MEMORY[0x1401FC920](v219, v98, 4LL * v54 * v59);
        MEMORY[0x1401FC920](v98, v81, 4LL * v54 * v59);
      }
      k = 0;
      do
      {
        for ( j = 0; j < v62; ++j )
        {
          v81->m128i_i32[j + v54 * k] = 0;
          v219->m128i_i32[j + v54 * k] = -1042284544;
          v98->m128i_i32[j + v54 * k] = -1042284544;
        }
        for ( j = v57; j < v54; ++j )
        {
          v81->m128i_i32[j + v54 * k] = 0;
          v219->m128i_i32[j + v54 * k] = -1042284544;
          v98->m128i_i32[j + v54 * k] = -1042284544;
        }
        ++k;
      }
      while ( k < v59 );
      if ( v64 || v204 )
        ++*(_DWORD *)(a1 + 120);
      else
        *(_DWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 80) = a6[8];
      sub_14019A9C0(a6);
      unknown_libname_997(a6);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v253);
}

