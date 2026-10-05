/* Address: 0x14018dbf0 | Name: sub_14018DBF0 | Size: 4930 bytes */
__int64 __fastcall sub_14018DBF0(int a1)
{
  __int64 v1; // rsi
  int *v2; // r15
  __int64 result; // rax
  int v4; // eax
  _DWORD *v5; // r12
  int v6; // r13d
  _DWORD *v7; // rbx
  int *v8; // r15
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edi
  char *v12; // rbx
  int v13; // r14d
  unsigned int v14; // eax
  signed int v15; // ebx
  int v16; // ebp
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // xmm0_8
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // r15
  unsigned int v26; // eax
  int v27; // edx
  __int64 v28; // r10
  int v29; // r8d
  char v30; // r9
  int v31; // eax
  unsigned int *v32; // r15
  int v33; // r8d
  unsigned int v34; // r10d
  char v35; // r9
  int v36; // eax
  _DWORD *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // xmm0_8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // r14d
  __int64 v57; // rax
  __int64 v58; // xmm0_8
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r9d
  char v68; // r8
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // xmm0_8
  __int64 v72; // rax
  __int64 v73; // xmm0_8
  __int64 v74; // rax
  __int64 v75; // rax
  signed int v76; // ecx
  unsigned int v77; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v78; // [rsp+78h] [rbp+10h]
  char *v79; // [rsp+80h] [rbp+18h]
  _DWORD *v80; // [rsp+88h] [rbp+20h]

  v1 = (__int64)a1 << 7;
  v2 = (int *)((char *)&dword_140404A6C[297756285] + v1);
  v79 = (char *)&dword_140404A6C[297756285] + v1;
  result = sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756285] + v1), 6);
  if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1) != 23 )
  {
    sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756286] + v1), 28);
    v4 = *v2;
    v5 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v1);
    v6 = 10;
    if ( !*v2 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 4);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756294] + v1), 10);
      sub_14007ADF0((__int64)&dword_140404A6C[297756287] + v1, 4, 3);
      sub_14007ADF0((__int64)&dword_140404A6C[297756290] + v1, 4, 3);
      v4 = *v2;
    }
    if ( v4 == 1 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 4);
      v7 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      v78 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756294] + v1), 6);
      sub_14007ADF0((__int64)&dword_140404A6C[297756287] + v1, 4, 3);
      sub_14007ADF0((__int64)&dword_140404A6C[297756290] + v1, 4, 3);
      v4 = *v2;
    }
    else
    {
      v7 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      v78 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
    }
    if ( v4 == 2 )
    {
      v8 = (int *)((char *)&dword_140404A6C[297756293] + v1);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 6);
      sub_140115AE0(v7, 4);
      sub_140115AE0(&v77, 10);
      v9 = v77;
      if ( v77 == 1023 )
        v9 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v9;
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756296] + v1), 4);
      v10 = *v8;
      v11 = 0;
      if ( *v8 <= 0 )
      {
        LOBYTE(v13) = v77;
      }
      else
      {
        v12 = (char *)&dword_140404A6C[297756301] + v1;
        do
        {
          sub_140115AE0(&v77, 7);
          LOBYTE(v13) = v77;
          ++v11;
          *v12++ = v77;
          v10 = *v8;
        }
        while ( v11 < *v8 );
        v7 = v78;
      }
      v2 = (int *)v79;
      *((_BYTE *)&dword_140404A6C[297756301] + v1 + v10) = 0;
      v4 = *v2;
    }
    else
    {
      LOBYTE(v13) = v77;
    }
    if ( v4 == 3 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 10);
      sub_140115AE0(v7, 8);
      sub_140115AE0(&v77, 4);
      v14 = v77;
      if ( v77 == 15 )
        v14 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v14;
    }
    if ( *v2 == 4 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 10);
      sub_140115AE0(v7, 4);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756295] + v1), 10);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v18 = v15;
          v15 += 12;
          v19 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v18);
          LODWORD(v18) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v18);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v19;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v18;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 12 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v20 = v15;
          v15 += 12;
          v21 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v20);
          LODWORD(v20) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v20);
          *(_QWORD *)((char *)&dword_140404A6C[297756290] + v1) = v21;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v1) = v20;
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    else
    {
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    v22 = *v2;
    if ( *v2 == 5 )
    {
      sub_140115AE0(v5, 20);
      sub_140115AE0(&v77, 10);
      v23 = v77;
      if ( v77 == 1023 )
        v23 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = v23;
      sub_140115AE0(&v77, 10);
      v24 = v77;
      if ( v77 == 1023 )
        v24 = -1;
      v25 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v1);
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v24;
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756296] + v1), 4);
      v22 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1);
      v15 = dword_140404A6C[289317484];
      v17 = dword_140404A6C[289317485];
      v16 = dword_140404A6C[289317483];
    }
    else
    {
      v25 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v1);
    }
    if ( v22 == 6 )
    {
      sub_140115AE0(v5, 10);
      sub_140115AE0(v78, 3);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756295] + v1), 16);
      sub_140115AE0(v25, 2);
      v22 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1);
      v15 = dword_140404A6C[289317484];
      v17 = dword_140404A6C[289317485];
      v16 = dword_140404A6C[289317483];
    }
    v80 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v1);
    if ( v22 == 7 )
    {
      sub_140115AE0(v5, 16);
      sub_140115AE0(&v77, 10);
      v26 = v77;
      v27 = dword_140404A6C[289317484];
      if ( v77 == 1023 )
        v26 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = v26;
      if ( v27 < 0x10000 && v27 + 4 <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          ++v27;
          dword_140404A6C[289317485] = 0;
          dword_140404A6C[289317484] = v27;
        }
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v27);
        dword_140404A6C[289317484] = v27 + 4;
      }
      sub_140115AE0(v25, 24);
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      v28 = 0;
      v15 = dword_140404A6C[289317484];
      do
      {
        v29 = 7;
        if ( v15 < 0x10000 && v15 <= v16 )
        {
          v13 = 0;
          v30 = 0;
          while ( 1 )
          {
            v31 = 8 - v17;
            v13 |= (~(-1 << v29)
                  & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v30;
            if ( v29 < (unsigned int)(8 - v17) )
              break;
            if ( v29 == v31 )
            {
              dword_140404A6C[289317484] = ++v15;
              v17 = 0;
              goto LABEL_60;
            }
            ++v15;
            v17 = 0;
            v29 -= v31;
            dword_140404A6C[289317484] = v15;
            v30 += v31;
            dword_140404A6C[289317485] = 0;
            if ( v29 <= 0 )
              goto LABEL_61;
          }
          v17 += v29;
LABEL_60:
          dword_140404A6C[289317485] = v17;
        }
LABEL_61:
        *((_BYTE *)&dword_140404A6C[297756301] + v1 + v28++) = v13;
      }
      while ( v28 < 31 );
      v32 = (unsigned int *)v79;
      *((_BYTE *)&dword_140404A6C[297756308] + v1 + 3) = 0;
      v22 = *v32;
    }
    else
    {
      v32 = (unsigned int *)v79;
    }
    if ( v22 == 17 )
    {
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238528), 10);
      sub_140115AE0(v78, 1);
      v15 = dword_140404A6C[289317484];
      v33 = 8;
      v16 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
      {
        v34 = v77;
        v17 = dword_140404A6C[289317485];
      }
      else
      {
        v17 = dword_140404A6C[289317485];
        v34 = 0;
        v35 = 0;
        while ( 1 )
        {
          v36 = 8 - v17;
          v34 |= (~(-1 << v33)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v35;
          if ( v33 < (unsigned int)(8 - v17) )
            break;
          if ( v33 == v36 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
            goto LABEL_75;
          }
          ++v15;
          v17 = 0;
          v33 -= v36;
          dword_140404A6C[289317484] = v15;
          v35 += v36;
          dword_140404A6C[289317485] = 0;
          if ( v33 <= 0 )
            goto LABEL_75;
        }
        v17 += v33;
        dword_140404A6C[289317485] = v17;
      }
LABEL_75:
      if ( v34 == 255 )
        v34 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v34;
    }
    v37 = v80;
    if ( *v32 == 8 )
    {
      sub_140115AE0(v80, 8);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v38 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v38);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v39 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v39);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v40 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v40);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 9 )
    {
      sub_140115AE0(v37, 8);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v41 = v15;
          v15 += 12;
          v42 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v41);
          LODWORD(v41) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v41);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v42;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v41;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v43 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756297] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v43);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v44 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756298] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v44);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 19 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238532), 16);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v45 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v45);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v46 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v46);
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    v47 = *v32;
    if ( *v32 == 10 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238532), 1);
      v47 = *v32;
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    else
    {
      v37 = (_DWORD *)(0x140000000LL + v1 + 1195238528);
    }
    if ( v47 == 11 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v48 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v48);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v49 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v49);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v50 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v50);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v51 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v51);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 12 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v52 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v52);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v53 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v53);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v54 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v54);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v55 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v55);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 22 )
    {
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238528), 16);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238532), 6);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238536), 7);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000 )
      {
        v17 = dword_140404A6C[289317485];
      }
      else
      {
        v56 = *(_DWORD *)(0x140000000LL + v1 + 1195238536);
        v17 = dword_140404A6C[289317485];
        if ( (signed int)(dword_140404A6C[289317484] + v56) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          MEMORY[0x1401FC920]((char *)&dword_140404A6C[297756301] + v1, (char *)&dword_140404A6C[289317486] + v15);
          v15 += v56;
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    if ( *v32 == 21 )
    {
      sub_140115AE0(v37, 10);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238532), 4);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238536), 4);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238540), 30);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000
        && (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v15 = dword_140404A6C[289317484] + 1;
          v17 = 0;
          ++dword_140404A6C[289317484];
          dword_140404A6C[289317485] = 0;
        }
        v57 = v15;
        v15 += 12;
        v58 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v57);
        LODWORD(v57) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v57);
        *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v58;
        *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v57;
        dword_140404A6C[289317484] = v15;
      }
    }
    if ( *v32 == 13 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v59 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v59);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v60 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v60);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v61 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v61);
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    result = *v32;
    if ( (_DWORD)result == 14 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238532), 8);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238536), 8);
      sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238540), 20);
      result = *v32;
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    if ( (_DWORD)result == 15 )
    {
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v62 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v62);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v63 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v63);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v15;
            }
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v15);
            dword_140404A6C[289317484] = v15 + 4;
          }
        }
      }
      result = sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238540), 2);
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    if ( *v32 == 16 )
    {
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v64 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v64);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v65 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v65);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v66 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v66);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 || v15 + 1 > v16 )
      {
LABEL_240:
        v67 = v77;
      }
      else
      {
        v67 = 0;
        v68 = 0;
        while ( 1 )
        {
          v69 = 8 - v17;
          v67 |= (~(-1 << v6)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v68;
          if ( v6 < (unsigned int)(8 - v17) )
            break;
          if ( v6 == v69 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
            goto LABEL_241;
          }
          ++v15;
          v17 = 0;
          v6 -= v69;
          dword_140404A6C[289317484] = v15;
          v68 += v69;
          dword_140404A6C[289317485] = 0;
          if ( v6 <= 0 )
            goto LABEL_241;
        }
        v17 += v6;
        dword_140404A6C[289317485] = v17;
      }
LABEL_241:
      result = 0xFFFFFFFFLL;
      if ( v67 == 1023 )
        v67 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = v67;
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 12);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v70 = v15;
          v15 += 12;
          v71 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v70);
          result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v70);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v71;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = result;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 12);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v72 = v15;
            v15 += 12;
            v73 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v72);
            result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v72);
            *(_QWORD *)((char *)&dword_140404A6C[297756290] + v1) = v73;
            *(unsigned int *)((char *)&dword_140404A6C[297756292] + v1) = result;
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 18 && v15 < 0x10000 )
    {
      result = (unsigned int)(v15 + 4);
      if ( (int)result <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v74 = v15;
        v15 += 4;
        result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v74);
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = result;
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 4);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v75 = v15;
          v15 += 4;
          result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v75);
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = result;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 4);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v15;
            }
            result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v15);
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = result;
            dword_140404A6C[289317484] = v15 + 4;
          }
        }
      }
    }
    if ( *v32 == 20 )
    {
      result = sub_140115AE0((_DWORD *)(0x140000000LL + v1 + 1195238528), 8);
      v76 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        result = dword_140404A6C[289317484] + 12;
        if ( (int)result <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v76 = dword_140404A6C[289317484] + 1;
            dword_140404A6C[289317485] = 0;
            ++dword_140404A6C[289317484];
          }
          result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v76);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v76);
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = result;
          dword_140404A6C[289317484] = v76 + 12;
        }
      }
    }
  }
  return result;
}

