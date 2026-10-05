/* Address: 0x140020580 | Name: sub_140020580 | Size: 3421 bytes */
__int64 __fastcall sub_140020580(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  unsigned int v7; // r13d
  int v8; // r12d
  unsigned int v9; // r15d
  int v10; // r14d
  int v11; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // r10d
  int v15; // r11d
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r12d
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // r9d
  __int64 v26; // rbx
  unsigned int v27; // r8d
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rbx
  int v31; // r9d
  int v32; // edx
  unsigned int v33; // r9d
  signed int v34; // eax
  signed int v35; // ebx
  __int16 v36; // ax
  __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  signed int v40; // ebx
  __int64 v41; // r9
  int i; // ebx
  int v43; // ecx
  unsigned int v44; // r8d
  int v45; // edx
  __int64 v46; // rcx
  int v47; // eax
  int v48; // ebx
  __int64 v49; // r10
  __int64 v50; // r8
  unsigned int v51; // r12d
  unsigned int v52; // r14d
  unsigned int v53; // r13d
  int v54; // r12d
  unsigned int v55; // r15d
  int v56; // r14d
  int v57; // r9d
  int v58; // r8d
  int v59; // ecx
  int v60; // r11d
  int v61; // ecx
  int v62; // eax
  int v63; // r9d
  int v64; // esi
  int v65; // edx
  __int64 v66; // r8
  unsigned int v67; // r12d
  __int64 v68; // rcx
  int v69; // r14d
  int v70; // edx
  __int64 v71; // rbx
  unsigned int v72; // r8d
  unsigned int v73; // eax
  unsigned int v74; // ecx
  __int64 v75; // rbx
  int v76; // edx
  int v77; // r9d
  unsigned int v78; // edx
  signed int v79; // eax
  signed int v80; // ebx
  __int64 v81; // r14
  __int16 v82; // ax
  bool v83; // cc
  __int64 v84; // rax
  unsigned int v85; // ecx
  unsigned int v86; // ecx
  signed int v87; // ebx
  __int64 v88; // rdx
  int j; // ebx
  int v90; // ecx
  int v91; // r9d
  __int64 v92; // rcx
  int v93; // eax
  __int64 v95; // [rsp+8h] [rbp-69h] BYREF
  __int64 v96; // [rsp+28h] [rbp-49h]
  __int64 *v97; // [rsp+30h] [rbp-41h]
  int v98; // [rsp+38h] [rbp-39h]
  int v99; // [rsp+3Ch] [rbp-35h]
  int v100; // [rsp+40h] [rbp-31h]
  int v101; // [rsp+44h] [rbp-2Dh]
  int v102; // [rsp+48h] [rbp-29h]
  signed int v103; // [rsp+4Ch] [rbp-25h]
  signed int v104; // [rsp+50h] [rbp-21h]
  int v105; // [rsp+54h] [rbp-1Dh]
  __int64 v106; // [rsp+58h] [rbp-19h]
  int v107; // [rsp+60h] [rbp-11h]
  __int64 v108; // [rsp+68h] [rbp-9h] BYREF
  __int64 v109; // [rsp+70h] [rbp-1h]
  __int64 v110; // [rsp+78h] [rbp+7h]

  v1 = 396LL * a1;
  if ( !dword_140404A6C[v1 + 225426058] )
  {
    v2 = 6;
    v3 = (int)dword_140404A6C[v1 + 225426056];
    v4 = 34LL * (int)dword_140404A6C[v1 + 225426057];
    v5 = dword_140404A6C[v4 + 225391230] - dword_140404A6C[v4 + 225391242];
    v6 = dword_140404A6C[v4 + 225391231];
    v99 = 6;
    v7 = dword_140404A6C[34 * v3 + 225391231];
    v8 = v5 - (dword_140404A6C[34 * v3 + 225391240] + dword_140404A6C[34 * v3 + 225391230]);
    v9 = dword_140404A6C[34 * v3 + 225391232];
    v10 = v6 - v7;
    v100 = dword_140404A6C[34 * v3 + 225391240] + dword_140404A6C[34 * v3 + 225391230];
    v102 = v10;
    v107 = v8;
    v11 = abs32(v10);
    if ( v11 > 0 )
    {
      v2 = v8 / v11;
      v99 = v8 / v11;
    }
    v12 = v8 >> 1;
    v13 = (v2 * v11) >> 1;
    v14 = (v8 >> 1) - v13;
    v101 = v14;
    v15 = (v8 >> 1) + v13;
    v104 = v15;
    if ( dword_140404A6C[284024893] )
    {
      v2 = 6;
      v99 = 6;
      if ( v11 > 0 )
      {
        if ( v8 / 10 >= v11 )
          v2 = 10;
        v99 = v2;
      }
      v16 = v11 * ((unsigned int)v2 >> 1);
      v14 = v12 - v16;
      v101 = v12 - v16;
      v15 = v12 + v16;
      v104 = v12 + v16;
    }
    v17 = 0;
    v18 = 0;
    v98 = 0;
    if ( v8 > 0 )
    {
      v19 = v8 - 1;
      v20 = v2;
      v21 = v7 + 1;
      v106 = v2;
      v103 = v7 + 1;
      v105 = v19;
      while ( 1 )
      {
        if ( v18 >= v14 && v18 < v15 && v10 > 0 )
        {
          v19 = v105;
          v22 = v17 % v2 == 0;
          v17 = v98;
          if ( v22 )
          {
            ++v7;
            v103 = ++v21;
          }
        }
        v108 = 0;
        v109 = 0;
        if ( v18 )
        {
          if ( v18 < v19 )
          {
            if ( v18 < v14 || v18 >= v15 )
            {
              v24 = v18 + v100;
              sub_14000F830(
                0,
                v18 + v100,
                v21,
                v9 - dword_140404A6C[v1 + 225426059] - 1,
                dword_140404A6C[19928887] | 0x80000000,
                &v108);
              v28 = dword_140404A6C[19928887];
              v27 = v21;
              v29 = dword_140404A6C[v1 + 225426060];
            }
            else
            {
              v23 = v20 << 6;
              v24 = v18 + v100;
              v25 = v9 - dword_140404A6C[v1 + 225426059] - 1;
              if ( v102 <= 0 )
              {
                v30 = v23 + v2 - v17;
                sub_14000F830(0, v24, v7, v25, dword_140404A6C[v30 + 19930121] | 0x80000000, &v108);
                v27 = v7;
                v28 = dword_140404A6C[v30 + 19930121];
              }
              else
              {
                v26 = v23 + v17;
                sub_14000F830(0, v24, v7, v25, dword_140404A6C[v26 + 19930090] | 0x80000000, &v108);
                v27 = v7;
                v28 = dword_140404A6C[v26 + 19930090];
              }
              v29 = dword_140404A6C[v1 + 225426060];
            }
            v31 = v29 + v9;
            v32 = v24;
            v97 = &v108;
            LODWORD(v96) = v28 | 0x80000000;
            goto LABEL_31;
          }
          if ( v18 != v19 )
            goto LABEL_32;
          sub_14000F830(
            0,
            v18 + v100,
            v21,
            v9 - dword_140404A6C[v1 + 225426059] - 1,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v32 = v18 + v100;
        }
        else
        {
          sub_14000F830(
            0,
            v100,
            v21,
            v9 - dword_140404A6C[v1 + 225426059] - 1,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v32 = v100;
        }
        v33 = dword_140404A6C[v1 + 225426060];
        v97 = &v108;
        v31 = v9 + v33;
        LODWORD(v96) = dword_140404A6C[19928887] | 0x80000000;
        v27 = v21;
LABEL_31:
        sub_14000F830(0, v32, v27, v31, v96, v97);
        v14 = v101;
        v20 = v106;
LABEL_32:
        v108 = 0x1000100010001LL;
        v34 = dword_140404A6C[v1 + 225426060];
        v35 = -dword_140404A6C[v1 + 225426059];
        v109 = 0x1000100010001LL;
        if ( v35 >= v34 )
          goto LABEL_52;
        do
        {
          if ( v35 == -1 )
          {
            v36 = 16897;
          }
          else if ( v35 )
          {
            if ( v35 > -2 )
            {
              if ( v35 >= v34 - 1 )
              {
LABEL_42:
                v36 = 1;
                goto LABEL_43;
              }
              v36 = 17409;
            }
            else
            {
              if ( -v35 > (int)(dword_140404A6C[v1 + 225426059] - 1) )
                goto LABEL_42;
              v36 = 17665;
            }
          }
          else
          {
            v36 = 16641;
          }
LABEL_43:
          WORD1(v109) = v36;
          if ( v18 < v14 || v18 >= v104 )
          {
            v39 = 0x40000000;
          }
          else
          {
            LOWORD(v108) = v36;
            v37 = v20 << 6;
            if ( v102 <= 0 )
              v38 = dword_140404A6C[v20 + 19929097 + v37 - v98];
            else
              v38 = dword_140404A6C[v98 + 19929066 + v37];
            v39 = v38 | 0x80000000;
          }
          sub_14000F830(0, v18 + v100, v7, v9 + v35, v39, &v108);
          v14 = v101;
          v34 = dword_140404A6C[v1 + 225426060];
          ++v35;
          v20 = v106;
        }
        while ( v35 < v34 );
        v21 = v103;
LABEL_52:
        v40 = ~dword_140404A6C[v1 + 225426059];
        if ( v40 <= v34 )
        {
          do
          {
            sub_14003FA40((unsigned int)(v18 + v100), v40 + v9);
            ++v40;
          }
          while ( v40 <= (int)dword_140404A6C[v1 + 225426060] );
          v21 = v103;
        }
        v14 = v101;
        v15 = v104;
        v10 = v102;
        if ( v18 < v101 || v18 >= v104 )
        {
          v17 = v98;
          v2 = v99;
        }
        else
        {
          v2 = v99;
          if ( v102 < 0 && v98 % v99 == v99 - 1 )
          {
            --v7;
            v103 = --v21;
          }
          v17 = (v98 + 1) % v99;
          v98 = v17;
        }
        v20 = v106;
        ++v18;
        v19 = v105;
        if ( v18 >= v107 )
        {
          LODWORD(v3) = dword_140404A6C[v1 + 225426056];
          break;
        }
      }
    }
    v41 = 34LL * (int)v3;
    for ( i = dword_140404A6C[v41 + 225391232] - dword_140404A6C[v1 + 225426059];
          i < (int)(dword_140404A6C[v1 + 225426060] + dword_140404A6C[v41 + 225391232]);
          v41 = 34LL * (int)dword_140404A6C[v1 + 225426056] )
    {
      v43 = dword_140404A6C[v41 + 225391240];
      v44 = dword_140404A6C[v41 + 225391231];
      v45 = v43 + dword_140404A6C[v41 + 225391230];
      WORD1(v109) = 18433;
      if ( v43 > 0 && ((int)dword_140404A6C[v41 + 225391241] > 0 || (int)dword_140404A6C[v41 + 225391243] > 0) )
        sub_14000F830(0, v45, v44, i, 0x40000000u, &v108);
      v46 = 34LL * (int)dword_140404A6C[v1 + 225426057];
      v47 = dword_140404A6C[v46 + 225391242];
      if ( v47 > 0 && ((int)dword_140404A6C[v46 + 225391241] > 0 || (int)dword_140404A6C[v46 + 225391243] > 0) )
        sub_14000F830(
          0,
          dword_140404A6C[v46 + 225391230] - v47 - 1,
          dword_140404A6C[v46 + 225391231],
          i,
          0x40000000u,
          &v108);
      ++i;
    }
  }
  if ( dword_140404A6C[v1 + 225426058] == 1 )
  {
    v48 = 6;
    v49 = (int)dword_140404A6C[v1 + 225426056];
    v50 = 34LL * (int)dword_140404A6C[v1 + 225426057];
    v51 = dword_140404A6C[v50 + 225391232] - dword_140404A6C[v50 + 225391243];
    v52 = dword_140404A6C[v50 + 225391231];
    v99 = 6;
    v53 = dword_140404A6C[34 * v49 + 225391231];
    v54 = v51 - (dword_140404A6C[34 * v49 + 225391241] + dword_140404A6C[34 * v49 + 225391232]);
    v55 = dword_140404A6C[34 * v49 + 225391230];
    v56 = v52 - v53;
    v101 = dword_140404A6C[34 * v49 + 225391241] + dword_140404A6C[34 * v49 + 225391232];
    v102 = v56;
    v107 = v54;
    v57 = abs32(v56);
    if ( v57 > 0 )
    {
      v48 = v54 / v57;
      v99 = v54 / v57;
    }
    v58 = v54 >> 1;
    v59 = (v48 * v57) >> 1;
    v60 = (v54 >> 1) - v59;
    v61 = (v54 >> 1) + v59;
    v100 = v60;
    v103 = v61;
    if ( dword_140404A6C[284024893] )
    {
      v48 = 6;
      v99 = 6;
      if ( v57 > 0 )
      {
        if ( v54 / 10 >= v57 )
          v48 = 10;
        v99 = v48;
      }
      v62 = v57 * ((unsigned int)v48 >> 1);
      v60 = v58 - v62;
      v100 = v58 - v62;
      v61 = v58 + v62;
      v103 = v58 + v62;
    }
    v98 = 0;
    v63 = 0;
    v64 = 0;
    if ( v54 > 0 )
    {
      v65 = v54 - 1;
      v66 = v48;
      v67 = v53 + 1;
      v106 = v48;
      v104 = v53 + 1;
      v105 = v65;
      while ( 1 )
      {
        if ( v64 >= v60 && v64 < v61 && v56 > 0 )
        {
          v65 = v105;
          if ( !(v63 % v48) )
          {
            ++v53;
            v104 = ++v67;
          }
        }
        v108 = 0;
        v109 = 0;
        if ( !v64 )
        {
          sub_14000F830(
            0,
            v55 - dword_140404A6C[v1 + 225426059] - 1,
            v67,
            v101,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v77 = v101;
          goto LABEL_103;
        }
        if ( v64 < v65 )
          break;
        if ( v64 == v65 )
        {
          sub_14000F830(
            0,
            v55 - dword_140404A6C[v1 + 225426059] - 1,
            v67,
            v64 + v101,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v77 = v64 + v101;
LABEL_103:
          v78 = dword_140404A6C[v1 + 225426060];
          v97 = &v108;
          v76 = v55 + v78;
          LODWORD(v96) = dword_140404A6C[19928887] | 0x80000000;
          v72 = v67;
LABEL_104:
          sub_14000F830(0, v76, v72, v77, v96, v97);
          v60 = v100;
          v66 = v106;
          v63 = v98;
        }
        v108 = 0x1000100010001LL;
        v79 = dword_140404A6C[v1 + 225426060];
        v80 = -dword_140404A6C[v1 + 225426059];
        v109 = 0x1000100010001LL;
        if ( v80 >= v79 )
          goto LABEL_125;
        v81 = v63;
        do
        {
          if ( v80 == -1 )
          {
            v82 = 18177;
          }
          else if ( v80 )
          {
            if ( v80 > -2 )
            {
              v83 = v80 < v79 - 1;
              v82 = 18689;
              if ( !v83 )
LABEL_115:
                v82 = 1;
            }
            else
            {
              if ( -v80 > (int)(dword_140404A6C[v1 + 225426059] - 1) )
                goto LABEL_115;
              v82 = 18945;
            }
          }
          else
          {
            v82 = 17921;
          }
          WORD1(v109) = v82;
          if ( v64 < v60 || v64 >= v103 )
          {
            v86 = 0x40000000;
          }
          else
          {
            LOWORD(v108) = v82;
            v84 = v66 << 6;
            if ( v102 <= 0 )
              v85 = dword_140404A6C[v66 + 19929113 + v84 - v81];
            else
              v85 = dword_140404A6C[v81 + 19929082 + v84];
            v86 = v85 | 0x80000000;
          }
          sub_14000F830(0, v55 + v80, v53, v64 + v101, v86, &v108);
          v60 = v100;
          v79 = dword_140404A6C[v1 + 225426060];
          ++v80;
          v66 = v106;
        }
        while ( v80 < v79 );
        v67 = v104;
LABEL_125:
        v87 = ~dword_140404A6C[v1 + 225426059];
        if ( v87 <= v79 )
        {
          do
          {
            sub_14003FA40(v87 + v55, (unsigned int)(v64 + v101));
            ++v87;
          }
          while ( v87 <= (int)dword_140404A6C[v1 + 225426060] );
          v67 = v104;
        }
        v60 = v100;
        v61 = v103;
        v56 = v102;
        v48 = v99;
        if ( v64 < v100 || v64 >= v103 )
        {
          v63 = v98;
        }
        else
        {
          if ( v102 < 0 && v98 % v99 == v99 - 1 )
          {
            --v53;
            v104 = --v67;
          }
          v63 = (v98 + 1) % v99;
          v98 = v63;
        }
        v66 = v106;
        ++v64;
        v65 = v105;
        if ( v64 >= v107 )
        {
          LODWORD(v49) = dword_140404A6C[v1 + 225426056];
          goto LABEL_137;
        }
      }
      if ( v64 < v60 || v64 >= v61 )
      {
        v69 = v64 + v101;
        sub_14000F830(
          0,
          v55 - dword_140404A6C[v1 + 225426059] - 1,
          v67,
          v64 + v101,
          dword_140404A6C[19928887] | 0x80000000,
          &v108);
        v73 = dword_140404A6C[19928887];
        v72 = v67;
        v74 = dword_140404A6C[v1 + 225426060];
      }
      else
      {
        v68 = v66 << 6;
        v69 = v64 + v101;
        v70 = v55 - dword_140404A6C[v1 + 225426059] - 1;
        if ( v102 <= 0 )
        {
          v75 = v68 + v48 - v63;
          sub_14000F830(0, v70, v53, v69, dword_140404A6C[v75 + 19930137] | 0x80000000, &v108);
          v72 = v53;
          v73 = dword_140404A6C[v75 + 19930137];
        }
        else
        {
          v71 = v68 + v63;
          sub_14000F830(0, v70, v53, v69, dword_140404A6C[v71 + 19930106] | 0x80000000, &v108);
          v72 = v53;
          v73 = dword_140404A6C[v71 + 19930106];
        }
        v74 = dword_140404A6C[v1 + 225426060];
      }
      v76 = v74 + v55;
      v77 = v69;
      v97 = &v108;
      LODWORD(v96) = v73 | 0x80000000;
      goto LABEL_104;
    }
LABEL_137:
    v88 = 34LL * (int)v49;
    for ( j = dword_140404A6C[v88 + 225391230] - dword_140404A6C[v1 + 225426059];
          j < (int)(dword_140404A6C[v1 + 225426060] + dword_140404A6C[v88 + 225391230]);
          v88 = 34LL * (int)dword_140404A6C[v1 + 225426056] )
    {
      v90 = dword_140404A6C[v88 + 225391241];
      v91 = v90 + dword_140404A6C[v88 + 225391232];
      WORD1(v109) = 17153;
      if ( v90 > 0 && ((int)dword_140404A6C[v88 + 225391240] > 0 || (int)dword_140404A6C[v88 + 225391242] > 0) )
        sub_14000F830(0, j, dword_140404A6C[v88 + 225391231], v91, 0x40000000u, &v108);
      v92 = 34LL * (int)dword_140404A6C[v1 + 225426057];
      v93 = dword_140404A6C[v92 + 225391243];
      if ( v93 > 0 && ((int)dword_140404A6C[v92 + 225391240] > 0 || (int)dword_140404A6C[v92 + 225391242] > 0) )
        sub_14000F830(
          0,
          j,
          dword_140404A6C[v92 + 225391231],
          dword_140404A6C[v92 + 225391232] - v93 - 1,
          0x40000000u,
          &v108);
      ++j;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v95 ^ v110);
}

