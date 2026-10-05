/* Address: 0x140015ea0 | Name: sub_140015EA0 | Size: 3421 bytes */
__int64 __fastcall sub_140015EA0(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned int v6; // r13d
  int v7; // r12d
  int v8; // r15d
  int v9; // r14d
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // r10d
  int v14; // r11d
  int v15; // eax
  int v16; // edx
  int v17; // esi
  int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // r12d
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // r14d
  int v24; // r9d
  __int64 v25; // rbx
  unsigned int v26; // r8d
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rbx
  int v30; // edx
  int v31; // eax
  int v32; // ebx
  __int16 v33; // ax
  __int64 v34; // rax
  int v35; // ecx
  unsigned int v36; // ecx
  int v37; // ebx
  __int64 v38; // r9
  int v39; // ebx
  int v40; // ecx
  unsigned int v41; // r8d
  int v42; // edx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // ebx
  __int64 v46; // r10
  __int64 v47; // r8
  unsigned int v48; // r13d
  int v49; // r12d
  int v50; // r15d
  int v51; // r14d
  int v52; // r9d
  int v53; // r8d
  int v54; // ecx
  int v55; // r11d
  int v56; // ecx
  int v57; // eax
  int v58; // r9d
  int v59; // esi
  int v60; // edx
  __int64 v61; // r8
  unsigned int v62; // r12d
  __int64 v63; // rcx
  int v64; // r14d
  int v65; // edx
  __int64 v66; // rbx
  unsigned int v67; // r8d
  int v68; // eax
  int v69; // ecx
  __int64 v70; // rbx
  int v71; // r9d
  int v72; // eax
  int v73; // ebx
  __int64 v74; // r14
  __int16 v75; // ax
  bool v76; // cc
  __int64 v77; // rax
  int v78; // ecx
  unsigned int v79; // ecx
  int v80; // ebx
  __int64 v81; // rdx
  int v82; // ebx
  int v83; // ecx
  int v84; // r9d
  __int64 v85; // rcx
  int v86; // eax
  int v87; // [rsp+38h] [rbp-39h]
  int v88; // [rsp+38h] [rbp-39h]
  int v89; // [rsp+3Ch] [rbp-35h]
  int v90; // [rsp+3Ch] [rbp-35h]
  int v91; // [rsp+40h] [rbp-31h]
  int v92; // [rsp+40h] [rbp-31h]
  int v93; // [rsp+44h] [rbp-2Dh]
  int v94; // [rsp+44h] [rbp-2Dh]
  int v95; // [rsp+48h] [rbp-29h]
  int v96; // [rsp+48h] [rbp-29h]
  unsigned int v97; // [rsp+4Ch] [rbp-25h]
  int v98; // [rsp+4Ch] [rbp-25h]
  int v99; // [rsp+50h] [rbp-21h]
  unsigned int v100; // [rsp+50h] [rbp-21h]
  int v101; // [rsp+54h] [rbp-1Dh]
  int v102; // [rsp+54h] [rbp-1Dh]
  __int64 v103; // [rsp+58h] [rbp-19h]
  __int64 v104; // [rsp+58h] [rbp-19h]
  int v105; // [rsp+60h] [rbp-11h]
  int v106; // [rsp+60h] [rbp-11h]
  __int64 v107; // [rsp+68h] [rbp-9h] BYREF
  __int64 v108; // [rsp+70h] [rbp-1h]

  result = a1;
  v2 = 1584LL * a1;
  if ( !*(_DWORD *)((char *)&unk_1839ABF14 + v2) )
  {
    v3 = 6;
    v4 = dword_1839ABF0C[v2 / 4];
    v5 = 136LL * *(int *)((char *)&unk_1839ABF10 + v2);
    v89 = 6;
    v6 = *((_DWORD *)&unk_183989EE8 + 34 * v4);
    v7 = *(_DWORD *)&algn_183989EE4[v5]
       - *(_DWORD *)((char *)&unk_183989F14 + v5)
       - (*(_DWORD *)&algn_183989F0C[136 * v4]
        + *(_DWORD *)&algn_183989EE4[136 * v4]);
    v8 = *((_DWORD *)&unk_183989EEC + 34 * v4);
    v9 = *(_DWORD *)((char *)&unk_183989EE8 + v5) - v6;
    v91 = *(_DWORD *)&algn_183989F0C[136 * v4] + *(_DWORD *)&algn_183989EE4[136 * v4];
    v95 = v9;
    v105 = v7;
    v10 = abs32(v9);
    if ( v10 > 0 )
    {
      v3 = v7 / v10;
      v89 = v7 / v10;
    }
    v11 = v7 >> 1;
    v12 = (v3 * v10) >> 1;
    v13 = (v7 >> 1) - v12;
    v93 = v13;
    v14 = (v7 >> 1) + v12;
    v99 = v14;
    if ( dword_1915FDF00 )
    {
      v3 = 6;
      v89 = 6;
      if ( v10 > 0 )
      {
        if ( v7 / 10 >= v10 )
          v3 = 10;
        v89 = v3;
      }
      v15 = v10 * ((unsigned int)v3 >> 1);
      v13 = v11 - v15;
      v93 = v11 - v15;
      v14 = v11 + v15;
      v99 = v11 + v15;
    }
    v16 = 0;
    v17 = 0;
    v87 = 0;
    if ( v7 > 0 )
    {
      v18 = v7 - 1;
      v19 = v3;
      v20 = v6 + 1;
      v103 = v3;
      v97 = v6 + 1;
      v101 = v18;
      while ( 1 )
      {
        if ( v17 >= v13 && v17 < v14 && v9 > 0 )
        {
          v18 = v101;
          v21 = v16 % v3 == 0;
          v16 = v87;
          if ( v21 )
          {
            ++v6;
            v97 = ++v20;
          }
        }
        v107 = 0;
        v108 = 0;
        if ( v17 )
        {
          if ( v17 < v18 )
          {
            if ( v17 < v13 || v17 >= v14 )
            {
              v23 = v17 + v91;
              sub_140008D00(
                0,
                v17 + v91,
                v20,
                v8 - *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1,
                dword_15ADEF2E8 | 0x80000000,
                (__int16 *)&v107);
              v27 = dword_15ADEF2E8;
              v26 = v20;
              v28 = *(_DWORD *)((char *)&unk_1839ABF1C + v2);
            }
            else
            {
              v22 = v19 << 6;
              v23 = v17 + v91;
              v24 = v8 - *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1;
              if ( v95 <= 0 )
              {
                v29 = v22 + v3 - v16;
                sub_140008D00(0, v23, v6, v24, dword_15ADF0630[v29] | 0x80000000, (__int16 *)&v107);
                v26 = v6;
                v27 = dword_15ADF0630[v29];
              }
              else
              {
                v25 = v22 + v16;
                sub_140008D00(0, v23, v6, v24, dword_15ADF05B4[v25] | 0x80000000, (__int16 *)&v107);
                v26 = v6;
                v27 = dword_15ADF05B4[v25];
              }
              v28 = *(_DWORD *)((char *)&unk_1839ABF1C + v2);
            }
            sub_140008D00(0, v23, v26, v28 + v8, v27 | 0x80000000, (__int16 *)&v107);
            goto LABEL_31;
          }
          if ( v17 != v18 )
            goto LABEL_32;
          sub_140008D00(
            0,
            v17 + v91,
            v20,
            v8 - *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1,
            dword_15ADEF2E8 | 0x80000000,
            (__int16 *)&v107);
          v30 = v17 + v91;
        }
        else
        {
          sub_140008D00(
            0,
            v91,
            v20,
            v8 - *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1,
            dword_15ADEF2E8 | 0x80000000,
            (__int16 *)&v107);
          v30 = v91;
        }
        sub_140008D00(
          0,
          v30,
          v20,
          v8 + *(_DWORD *)((char *)&unk_1839ABF1C + v2),
          dword_15ADEF2E8 | 0x80000000,
          (__int16 *)&v107);
LABEL_31:
        v13 = v93;
        v19 = v103;
LABEL_32:
        v107 = 0x1000100010001LL;
        v31 = *(_DWORD *)((char *)&unk_1839ABF1C + v2);
        v32 = -*(_DWORD *)((char *)&unk_1839ABF18 + v2);
        v108 = 0x1000100010001LL;
        if ( v32 >= v31 )
          goto LABEL_52;
        do
        {
          if ( v32 == -1 )
          {
            v33 = 16897;
          }
          else if ( v32 )
          {
            if ( v32 > -2 )
            {
              if ( v32 >= v31 - 1 )
              {
LABEL_42:
                v33 = 1;
                goto LABEL_43;
              }
              v33 = 17409;
            }
            else
            {
              if ( -v32 > *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1 )
                goto LABEL_42;
              v33 = 17665;
            }
          }
          else
          {
            v33 = 16641;
          }
LABEL_43:
          WORD1(v108) = v33;
          if ( v17 < v13 || v17 >= v99 )
          {
            v36 = 0x40000000;
          }
          else
          {
            LOWORD(v107) = v33;
            v34 = v19 << 6;
            if ( v95 <= 0 )
              v35 = dword_15ADEF630[v19 + v34 - v87];
            else
              v35 = dword_15ADEF5B4[v87 + v34];
            v36 = v35 | 0x80000000;
          }
          sub_140008D00(0, v17 + v91, v6, v8 + v32, v36, (__int16 *)&v107);
          v13 = v93;
          v31 = *(_DWORD *)((char *)&unk_1839ABF1C + v2);
          ++v32;
          v19 = v103;
        }
        while ( v32 < v31 );
        v20 = v97;
LABEL_52:
        v37 = ~*(_DWORD *)((char *)&unk_1839ABF18 + v2);
        if ( v37 <= v31 )
        {
          do
          {
            sub_14002C210((unsigned int)(v17 + v91), (unsigned int)(v37 + v8));
            ++v37;
          }
          while ( v37 <= *(_DWORD *)((char *)&unk_1839ABF1C + v2) );
          v20 = v97;
        }
        v13 = v93;
        v14 = v99;
        v9 = v95;
        if ( v17 < v93 || v17 >= v99 )
        {
          v16 = v87;
          v3 = v89;
        }
        else
        {
          v3 = v89;
          if ( v95 < 0 && v87 % v89 == v89 - 1 )
          {
            --v6;
            v97 = --v20;
          }
          v16 = (v87 + 1) % v89;
          v87 = v16;
        }
        v19 = v103;
        ++v17;
        v18 = v101;
        if ( v17 >= v105 )
        {
          LODWORD(v4) = dword_1839ABF0C[v2 / 4];
          break;
        }
      }
    }
    result = (int)v4;
    v38 = 136LL * (int)v4;
    v39 = *(_DWORD *)((char *)&unk_183989EEC + v38) - *(_DWORD *)((char *)&unk_1839ABF18 + v2);
    if ( v39 < *(_DWORD *)((char *)&unk_1839ABF1C + v2) + *(_DWORD *)((char *)&unk_183989EEC + v38) )
    {
      do
      {
        v40 = *(_DWORD *)&algn_183989F0C[v38];
        v41 = *(_DWORD *)((char *)&unk_183989EE8 + v38);
        v42 = v40 + *(_DWORD *)&algn_183989EE4[v38];
        WORD1(v108) = 18433;
        if ( v40 > 0 && (*(int *)((char *)&unk_183989F10 + v38) > 0 || *(int *)((char *)&unk_183989F18 + v38) > 0) )
          sub_140008D00(0, v42, v41, v39, 0x40000000u, (__int16 *)&v107);
        v43 = 136LL * *(int *)((char *)&unk_1839ABF10 + v2);
        v44 = *(_DWORD *)((char *)&unk_183989F14 + v43);
        if ( v44 > 0 && (*(int *)((char *)&unk_183989F10 + v43) > 0 || *(int *)((char *)&unk_183989F18 + v43) > 0) )
          sub_140008D00(
            0,
            *(_DWORD *)&algn_183989EE4[v43] - v44 - 1,
            *(_DWORD *)((char *)&unk_183989EE8 + v43),
            v39,
            0x40000000u,
            (__int16 *)&v107);
        ++v39;
        v38 = 136LL * dword_1839ABF0C[v2 / 4];
        result = (unsigned int)(*(_DWORD *)((char *)&unk_1839ABF1C + v2) + *(_DWORD *)((char *)&unk_183989EEC + v38));
      }
      while ( v39 < (int)result );
    }
  }
  if ( *(_DWORD *)((char *)&unk_1839ABF14 + v2) == 1 )
  {
    v45 = 6;
    v46 = dword_1839ABF0C[v2 / 4];
    v47 = 136LL * *(int *)((char *)&unk_1839ABF10 + v2);
    v90 = 6;
    v48 = *((_DWORD *)&unk_183989EE8 + 34 * v46);
    v49 = *(_DWORD *)((char *)&unk_183989EEC + v47)
        - *(_DWORD *)((char *)&unk_183989F18 + v47)
        - (*((_DWORD *)&unk_183989F10 + 34 * v46)
         + *((_DWORD *)&unk_183989EEC + 34 * v46));
    v50 = *(_DWORD *)&algn_183989EE4[136 * v46];
    v51 = *(_DWORD *)((char *)&unk_183989EE8 + v47) - v48;
    v94 = *((_DWORD *)&unk_183989F10 + 34 * v46) + *((_DWORD *)&unk_183989EEC + 34 * v46);
    v96 = v51;
    v106 = v49;
    v52 = abs32(v51);
    if ( v52 > 0 )
    {
      v45 = v49 / v52;
      v90 = v49 / v52;
    }
    v53 = v49 >> 1;
    v54 = (v45 * v52) >> 1;
    v55 = (v49 >> 1) - v54;
    v56 = (v49 >> 1) + v54;
    v92 = v55;
    v98 = v56;
    if ( dword_1915FDF00 )
    {
      v45 = 6;
      v90 = 6;
      if ( v52 > 0 )
      {
        if ( v49 / 10 >= v52 )
          v45 = 10;
        v90 = v45;
      }
      v57 = v52 * ((unsigned int)v45 >> 1);
      v55 = v53 - v57;
      v92 = v53 - v57;
      v56 = v53 + v57;
      v98 = v53 + v57;
    }
    v88 = 0;
    v58 = 0;
    v59 = 0;
    if ( v49 > 0 )
    {
      v60 = v49 - 1;
      v61 = v45;
      v62 = v48 + 1;
      v104 = v45;
      v100 = v48 + 1;
      v102 = v60;
      while ( 1 )
      {
        if ( v59 >= v55 && v59 < v56 && v51 > 0 )
        {
          v60 = v102;
          if ( !(v58 % v45) )
          {
            ++v48;
            v100 = ++v62;
          }
        }
        v107 = 0;
        v108 = 0;
        if ( !v59 )
        {
          sub_140008D00(
            0,
            v50 - *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1,
            v62,
            v94,
            dword_15ADEF2E8 | 0x80000000,
            (__int16 *)&v107);
          v71 = v94;
          goto LABEL_103;
        }
        if ( v59 < v60 )
          break;
        if ( v59 == v60 )
        {
          sub_140008D00(
            0,
            v50 - *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1,
            v62,
            v59 + v94,
            dword_15ADEF2E8 | 0x80000000,
            (__int16 *)&v107);
          v71 = v59 + v94;
LABEL_103:
          sub_140008D00(
            0,
            v50 + *(_DWORD *)((char *)&unk_1839ABF1C + v2),
            v62,
            v71,
            dword_15ADEF2E8 | 0x80000000,
            (__int16 *)&v107);
LABEL_104:
          v55 = v92;
          v61 = v104;
          v58 = v88;
        }
        v107 = 0x1000100010001LL;
        v72 = *(_DWORD *)((char *)&unk_1839ABF1C + v2);
        v73 = -*(_DWORD *)((char *)&unk_1839ABF18 + v2);
        v108 = 0x1000100010001LL;
        if ( v73 >= v72 )
          goto LABEL_125;
        v74 = v58;
        do
        {
          if ( v73 == -1 )
          {
            v75 = 18177;
          }
          else if ( v73 )
          {
            if ( v73 > -2 )
            {
              v76 = v73 < v72 - 1;
              v75 = 18689;
              if ( !v76 )
LABEL_115:
                v75 = 1;
            }
            else
            {
              if ( -v73 > *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1 )
                goto LABEL_115;
              v75 = 18945;
            }
          }
          else
          {
            v75 = 17921;
          }
          WORD1(v108) = v75;
          if ( v59 < v55 || v59 >= v98 )
          {
            v79 = 0x40000000;
          }
          else
          {
            LOWORD(v107) = v75;
            v77 = v61 << 6;
            if ( v96 <= 0 )
              v78 = dword_15ADEF670[v61 + v77 - v74];
            else
              v78 = dword_15ADEF5F4[v74 + v77];
            v79 = v78 | 0x80000000;
          }
          sub_140008D00(0, v50 + v73, v48, v59 + v94, v79, (__int16 *)&v107);
          v55 = v92;
          v72 = *(_DWORD *)((char *)&unk_1839ABF1C + v2);
          ++v73;
          v61 = v104;
        }
        while ( v73 < v72 );
        v62 = v100;
LABEL_125:
        v80 = ~*(_DWORD *)((char *)&unk_1839ABF18 + v2);
        if ( v80 <= v72 )
        {
          do
          {
            sub_14002C210((unsigned int)(v80 + v50), (unsigned int)(v59 + v94));
            ++v80;
          }
          while ( v80 <= *(_DWORD *)((char *)&unk_1839ABF1C + v2) );
          v62 = v100;
        }
        v55 = v92;
        v56 = v98;
        v51 = v96;
        v45 = v90;
        if ( v59 < v92 || v59 >= v98 )
        {
          v58 = v88;
        }
        else
        {
          if ( v96 < 0 && v88 % v90 == v90 - 1 )
          {
            --v48;
            v100 = --v62;
          }
          v58 = (v88 + 1) % v90;
          v88 = v58;
        }
        v61 = v104;
        ++v59;
        v60 = v102;
        if ( v59 >= v106 )
        {
          LODWORD(v46) = dword_1839ABF0C[v2 / 4];
          goto LABEL_137;
        }
      }
      if ( v59 < v55 || v59 >= v56 )
      {
        v64 = v59 + v94;
        sub_140008D00(
          0,
          v50 - *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1,
          v62,
          v59 + v94,
          dword_15ADEF2E8 | 0x80000000,
          (__int16 *)&v107);
        v68 = dword_15ADEF2E8;
        v67 = v62;
        v69 = *(_DWORD *)((char *)&unk_1839ABF1C + v2);
      }
      else
      {
        v63 = v61 << 6;
        v64 = v59 + v94;
        v65 = v50 - *(_DWORD *)((char *)&unk_1839ABF18 + v2) - 1;
        if ( v96 <= 0 )
        {
          v70 = v63 + v45 - v58;
          sub_140008D00(0, v65, v48, v64, dword_15ADF0670[v70] | 0x80000000, (__int16 *)&v107);
          v67 = v48;
          v68 = dword_15ADF0670[v70];
        }
        else
        {
          v66 = v63 + v58;
          sub_140008D00(0, v65, v48, v64, dword_15ADF05F4[v66] | 0x80000000, (__int16 *)&v107);
          v67 = v48;
          v68 = dword_15ADF05F4[v66];
        }
        v69 = *(_DWORD *)((char *)&unk_1839ABF1C + v2);
      }
      sub_140008D00(0, v69 + v50, v67, v64, v68 | 0x80000000, (__int16 *)&v107);
      goto LABEL_104;
    }
LABEL_137:
    result = (int)v46;
    v81 = 136LL * (int)v46;
    v82 = *(_DWORD *)&algn_183989EE4[v81] - *(_DWORD *)((char *)&unk_1839ABF18 + v2);
    if ( v82 < *(_DWORD *)((char *)&unk_1839ABF1C + v2) + *(_DWORD *)&algn_183989EE4[v81] )
    {
      do
      {
        v83 = *(_DWORD *)((char *)&unk_183989F10 + v81);
        v84 = v83 + *(_DWORD *)((char *)&unk_183989EEC + v81);
        WORD1(v108) = 17153;
        if ( v83 > 0 && (*(int *)&algn_183989F0C[v81] > 0 || *(int *)((char *)&unk_183989F14 + v81) > 0) )
          sub_140008D00(0, v82, *(_DWORD *)((char *)&unk_183989EE8 + v81), v84, 0x40000000u, (__int16 *)&v107);
        v85 = 136LL * *(int *)((char *)&unk_1839ABF10 + v2);
        v86 = *(_DWORD *)((char *)&unk_183989F18 + v85);
        if ( v86 > 0 && (*(int *)&algn_183989F0C[v85] > 0 || *(int *)((char *)&unk_183989F14 + v85) > 0) )
          sub_140008D00(
            0,
            v82,
            *(_DWORD *)((char *)&unk_183989EE8 + v85),
            *(_DWORD *)((char *)&unk_183989EEC + v85) - v86 - 1,
            0x40000000u,
            (__int16 *)&v107);
        ++v82;
        v81 = 136LL * dword_1839ABF0C[v2 / 4];
        result = (unsigned int)(*(_DWORD *)((char *)&unk_1839ABF1C + v2) + *(_DWORD *)&algn_183989EE4[v81]);
      }
      while ( v82 < (int)result );
    }
  }
  return result;
}

