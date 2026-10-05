/* Address: 0x140029120 | Name: sub_140029120 | Size: 1755 bytes */
__int64 sub_140029120()
{
  int v0; // ecx
  int v1; // r12d
  int v2; // ebp
  int v3; // r13d
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r11
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // r8
  __int64 v12; // rbx
  _WORD *v13; // rcx
  unsigned int *v14; // r9
  unsigned int *v15; // rdx
  __int64 v16; // r10
  unsigned int v17; // eax
  __int64 result; // rax
  signed int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // rbp
  unsigned int v29; // edx
  int v30; // edi
  __int64 i; // rsi
  unsigned int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // r10d
  __int64 v35; // r11
  int v36; // ecx
  unsigned int v37; // r9d
  unsigned int *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // r8d
  unsigned int v43; // r10d
  __int64 v44; // r11
  int v45; // ecx
  unsigned int v46; // r9d
  unsigned int *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // eax
  unsigned int v51; // r8d
  unsigned int v52; // r10d
  __int64 v53; // r11
  int v54; // ecx
  unsigned int v55; // r9d
  unsigned int *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // eax
  unsigned int v60; // r8d
  unsigned int v61; // r10d
  __int64 v62; // r11
  int v63; // ecx
  unsigned int v64; // r9d
  unsigned int *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // [rsp+0h] [rbp-58h]
  __int64 v69; // [rsp+8h] [rbp-50h]
  int v70; // [rsp+60h] [rbp+8h]
  __int64 v71; // [rsp+70h] [rbp+18h]
  __int64 v72; // [rsp+78h] [rbp+20h]

  v0 = dword_140404A6C[460788389];
  v1 = dword_140404A6C[460788388];
  v2 = 0;
  if ( (int)dword_140404A6C[460788389] > 0 )
  {
    v3 = dword_140404A6C[460788387];
    v4 = 0;
    do
    {
      v5 = 0;
      if ( v1 >= 0 )
      {
        v6 = (unsigned int)(v1 + 1);
        do
        {
          v7 = 0;
          if ( v3 >= 0 )
          {
            v8 = v0 - 1;
            v9 = v5 + (v4 << 6);
            v10 = 960 * v9;
            v11 = &dword_140404A6C[1216 * v9 + 451221710];
            v12 = (unsigned int)(v3 + 1);
            v13 = (_WORD *)(0x140000000LL + 4864 * v9 + 1809100224);
            v14 = &dword_140404A6C[v10 + 460788395];
            v15 = &dword_140404A6C[v10 + 460788400];
            do
            {
              *(v11 - 1) = *(v14 - 1);
              *v11 = *v14;
              *(v13 - 2) = *((_WORD *)v15 - 2);
              *(v13 - 1) = *((_WORD *)v15 - 1);
              *v13 = *(_WORD *)v15;
              v13[1] = *((_WORD *)v15 + 1);
              v13[2] = *((_WORD *)v15 + 2);
              v13[3] = *((_WORD *)v15 + 3);
              v13[4] = *((_WORD *)v15 + 4);
              v13[5] = *((_WORD *)v15 + 5);
              v13[6] = *((_WORD *)v15 + 6);
              v13[7] = *((_WORD *)v15 + 7);
              v13[8] = *((_WORD *)v15 + 8);
              v13[9] = *((_WORD *)v15 + 9);
              v13[10] = *((_WORD *)v15 + 10);
              v13[11] = *((_WORD *)v15 + 11);
              v13[12] = *((_WORD *)v15 + 12);
              v13[13] = *((_WORD *)v15 + 13);
              *((_QWORD *)v11 + 2) = v14[3];
              if ( v2 >= v8
                || (v16 = 15 * (v7 + ((v5 + ((v4 + 1) << 6)) << 6)), !dword_140404A6C[v16 + 460788394])
                || !dword_140404A6C[v16 + 460788395]
                || dword_140404A6C[v16 + 460788398] )
              {
                v11[5] = 1;
              }
              ++v7;
              v11[1] = *(v14 - 2);
              v15 += 15;
              v13 += 38;
              v11[2] = v14[1];
              v11[3] = v14[2];
              v17 = v14[12];
              v14 += 15;
              v11[17] = v17;
              v11 += 19;
              --v12;
            }
            while ( v12 );
            v0 = dword_140404A6C[460788389];
          }
          ++v5;
          --v6;
        }
        while ( v6 );
        v1 = dword_140404A6C[460788388];
      }
      ++v2;
      ++v4;
    }
    while ( v2 < v0 );
  }
  result = 0;
  v70 = 0;
  if ( v0 > 0 )
  {
    v19 = dword_140404A6C[421769141];
    v20 = 0;
    v69 = 0;
    do
    {
      v21 = 0;
      v72 = 0;
      if ( v1 >= 0 )
      {
        v22 = dword_140404A6C[460788387];
        v23 = (unsigned int)(v1 + 1);
        v68 = v23;
        do
        {
          v24 = 0;
          if ( v22 >= 0 )
          {
            v25 = (unsigned int)(v22 + 1);
            v26 = v21 + (v20 << 6);
            v71 = v25;
            v27 = 2432 * v26;
            v28 = 1216 * v26;
            do
            {
              if ( dword_140404A6C[v28 + 451221709] == 0x40000000 )
              {
                v29 = dword_140404A6C[v28 + 451221710];
                if ( v29 == 0xFFFF
                  || !v29
                  || dword_140404A6C[58 * (unsigned __int16)v29 + 20074650]
                  || (v29 & 0xC0000000) == 0xC0000000 )
                {
                  v30 = 1;
                  for ( i = 1; i < 5; i += 4 )
                  {
                    switch ( i )
                    {
                      case 1LL:
                        v32 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                        break;
                      case 2LL:
                        v32 = dword_140404A6C[v28 + 451221713];
                        break;
                      case 3LL:
                        v32 = dword_140404A6C[v28 + 451221712];
                        break;
                      default:
                        v32 = dword_140404A6C[v28 + 451221732];
                        break;
                    }
                    v33 = v32 - 3;
                    if ( v32 - 3 <= 0xC )
                    {
                      v34 = dword_140404A6C[v28 + 451221711];
                      v35 = 2 * (v27 + i) + 1809100220;
                      v36 = 0;
                      v37 = *(unsigned __int16 *)(v35 + 0x140000000LL);
                      v38 = &dword_140404A6C[421769143];
                      v39 = 0;
                      do
                      {
                        if ( v36 >= v19 )
                          break;
                        if ( *(v38 - 1) == v37 && *v38 == v34 && v38[1] == v33 )
                          goto LABEL_46;
                        ++v36;
                        ++v39;
                        v38 += 3;
                      }
                      while ( (__int64)v38 < (__int64)&dword_140404A6C[421781431] );
                      if ( v36 < 4096 )
                      {
                        v40 = 3 * v39;
                        v19 = v36 + 1;
                        dword_140404A6C[v40 + 421769142] = v37;
                        dword_140404A6C[v40 + 421769143] = v34;
                        dword_140404A6C[v40 + 421769144] = v33;
                        dword_140404A6C[421769141] = v36 + 1;
                      }
                      else
                      {
                        LOWORD(v36) = 0;
                      }
LABEL_46:
                      *(_WORD *)(v35 + 0x140000000LL) = v36 + 0x8000;
                    }
                    if ( v30 )
                    {
                      if ( v30 == 1 )
                      {
                        v41 = dword_140404A6C[v28 + 451221713];
                      }
                      else if ( v30 == 2 )
                      {
                        v41 = dword_140404A6C[v28 + 451221712];
                      }
                      else
                      {
                        v41 = dword_140404A6C[v28 + 451221732];
                      }
                    }
                    else
                    {
                      v41 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                    }
                    v42 = v41 - 3;
                    if ( v41 - 3 <= 0xC )
                    {
                      v43 = dword_140404A6C[v28 + 451221711];
                      v44 = 2 * (v27 + i) + 1809100222;
                      v45 = 0;
                      v46 = *(unsigned __int16 *)(v44 + 0x140000000LL);
                      v47 = &dword_140404A6C[421769143];
                      v48 = 0;
                      do
                      {
                        if ( v45 >= v19 )
                          break;
                        if ( *(v47 - 1) == v46 && *v47 == v43 && v47[1] == v42 )
                          goto LABEL_64;
                        ++v45;
                        ++v48;
                        v47 += 3;
                      }
                      while ( (__int64)v47 < (__int64)&dword_140404A6C[421781431] );
                      if ( v45 < 4096 )
                      {
                        v49 = 3 * v48;
                        dword_140404A6C[v49 + 421769142] = v46;
                        v19 = v45 + 1;
                        dword_140404A6C[v49 + 421769143] = v43;
                        dword_140404A6C[v49 + 421769144] = v42;
                        dword_140404A6C[421769141] = v45 + 1;
                      }
                      else
                      {
                        LOWORD(v45) = 0;
                      }
LABEL_64:
                      *(_WORD *)(v44 + 0x140000000LL) = v45 + 0x8000;
                    }
                    if ( v30 == -1 )
                    {
                      v50 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                    }
                    else if ( v30 )
                    {
                      if ( v30 == 1 )
                        v50 = dword_140404A6C[v28 + 451221712];
                      else
                        v50 = dword_140404A6C[v28 + 451221732];
                    }
                    else
                    {
                      v50 = dword_140404A6C[v28 + 451221713];
                    }
                    v51 = v50 - 3;
                    if ( v50 - 3 <= 0xC )
                    {
                      v52 = dword_140404A6C[v28 + 451221711];
                      v53 = 2 * (v27 + i) + 1809100224;
                      v54 = 0;
                      v55 = *(unsigned __int16 *)(v53 + 0x140000000LL);
                      v56 = &dword_140404A6C[421769143];
                      v57 = 0;
                      do
                      {
                        if ( v54 >= v19 )
                          break;
                        if ( *(v56 - 1) == v55 && *v56 == v52 && v56[1] == v51 )
                          goto LABEL_82;
                        ++v54;
                        ++v57;
                        v56 += 3;
                      }
                      while ( (__int64)v56 < (__int64)&dword_140404A6C[421781431] );
                      if ( v54 < 4096 )
                      {
                        v58 = 3 * v57;
                        dword_140404A6C[v58 + 421769142] = v55;
                        v19 = v54 + 1;
                        dword_140404A6C[v58 + 421769143] = v52;
                        dword_140404A6C[v58 + 421769144] = v51;
                        dword_140404A6C[421769141] = v54 + 1;
                      }
                      else
                      {
                        LOWORD(v54) = 0;
                      }
LABEL_82:
                      *(_WORD *)(v53 + 0x140000000LL) = v54 + 0x8000;
                    }
                    if ( v30 == -2 )
                    {
                      v59 = dword_140404A6C[1216 * v26 + 451222928 + 19 * v24];
                    }
                    else if ( v30 == -1 )
                    {
                      v59 = dword_140404A6C[v28 + 451221713];
                    }
                    else if ( v30 )
                    {
                      v59 = dword_140404A6C[v28 + 451221732];
                    }
                    else
                    {
                      v59 = dword_140404A6C[v28 + 451221712];
                    }
                    v60 = v59 - 3;
                    if ( v59 - 3 <= 0xC )
                    {
                      v61 = dword_140404A6C[v28 + 451221711];
                      v62 = 2 * (v27 + i) + 1809100226;
                      v63 = 0;
                      v64 = *(unsigned __int16 *)(v62 + 0x140000000LL);
                      v65 = &dword_140404A6C[421769143];
                      v66 = 0;
                      do
                      {
                        if ( v63 >= v19 )
                          break;
                        if ( *(v65 - 1) == v64 && *v65 == v61 && v65[1] == v60 )
                          goto LABEL_100;
                        ++v63;
                        ++v66;
                        v65 += 3;
                      }
                      while ( (__int64)v65 < (__int64)&dword_140404A6C[421781431] );
                      if ( v63 < 4096 )
                      {
                        v67 = 3 * v66;
                        dword_140404A6C[v67 + 421769142] = v64;
                        v19 = v63 + 1;
                        dword_140404A6C[v67 + 421769143] = v61;
                        dword_140404A6C[v67 + 421769144] = v60;
                        dword_140404A6C[421769141] = v63 + 1;
                      }
                      else
                      {
                        LOWORD(v63) = 0;
                      }
LABEL_100:
                      *(_WORD *)(v62 + 0x140000000LL) = v63 + 0x8000;
                    }
                    v30 += 4;
                  }
                  v25 = v71;
                }
              }
              ++v24;
              v28 += 19;
              v27 += 38;
              v71 = --v25;
            }
            while ( v25 );
            v21 = v72;
            v23 = v68;
            v20 = v69;
            v22 = dword_140404A6C[460788387];
          }
          ++v21;
          --v23;
          v72 = v21;
          v68 = v23;
        }
        while ( v23 );
        LODWORD(result) = v70;
        v1 = dword_140404A6C[460788388];
      }
      result = (unsigned int)(result + 1);
      ++v20;
      v70 = result;
      v69 = v20;
    }
    while ( (int)result < (int)dword_140404A6C[460788389] );
  }
  return result;
}

