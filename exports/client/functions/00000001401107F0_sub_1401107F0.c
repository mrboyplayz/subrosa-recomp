/* Address: 0x1401107f0 | Name: sub_1401107F0 | Size: 1284 bytes */
char __fastcall sub_1401107F0(int a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned int *v5; // rbx
  signed int v6; // r13d
  unsigned int v7; // esi
  signed int v8; // eax
  signed int v9; // r8d
  char v10; // r10
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rbx
  char v17; // r8
  __int64 v18; // r15
  signed int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rbp
  _DWORD *v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rsi
  int v25; // eax
  signed int v26; // r9d
  unsigned int v27; // r10d
  unsigned int v28; // ecx
  signed int v29; // r9d
  unsigned int v30; // r10d
  unsigned int v31; // ecx

  v3 = a3;
  v4 = a2;
  v5 = &dword_140404A6C[47224 * a1 + 438888535 + 3 * a3];
  sub_140115D90(v5, 8);
  v6 = dword_140404A6C[456202728] - *v5;
  v7 = (unsigned __int8)*v5;
  if ( v6 >= 192 )
    v7 = 0;
  sub_140115D90(&dword_140404A6C[7166 * v3 + 280651313], 8);
  sub_140115D90(&dword_140404A6C[7166 * v3 + 280651314], 4);
  v8 = dword_140404A6C[289301092];
  v9 = 1;
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v10 = dword_140404A6C[289301093];
    v11 = (int)dword_140404A6C[7166 * v3 + 280651318] > 0;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v8) &= ~(((1 << v9) - 1) << v10);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v11 << SLOBYTE(dword_140404A6C[289301093]);
      v12 = 8 - dword_140404A6C[289301093];
      if ( v9 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v9 == v12 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_11;
      }
      v9 -= v12;
      v8 = dword_140404A6C[289301092] + 1;
      v11 >>= v12;
      ++dword_140404A6C[289301092];
      v10 = 0;
      if ( v9 <= 0 )
        goto LABEL_11;
    }
    dword_140404A6C[289301093] += v9;
  }
LABEL_11:
  sub_140115D90(&dword_140404A6C[7166 * v3 + 280658301], 1);
  v13 = v7;
  v14 = 318464LL * v7;
  v15 = 318464 * v4 + 484 * v3;
  v16 = 484 * v3 + v14;
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137297855] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297855] + v16),
    v6 < 192,
    0x1Cu);
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137297856] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297856] + v16),
    v6 < 192,
    0x1Cu);
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137297857] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297857] + v16),
    v6 < 192,
    0x1Cu);
  sub_140115D90((char *)&dword_140404A6C[137297858] + v15, 2);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137297859] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297859] + v16),
    v6 < 192,
    0xEu);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137297860] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297860] + v16),
    v6 < 192,
    0xEu);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137297861] + v15),
    *(unsigned int *)((char *)&dword_140404A6C[137297861] + v16),
    v6 < 192,
    0xEu);
  v17 = dword_140404A6C[289301093];
  v18 = 318464 * v4 + 16;
  v19 = dword_140404A6C[289301092];
  v20 = v13 - v4;
  v21 = 484 * v3;
  v22 = (unsigned int *)((char *)&dword_140404A6C[137297914] + v15);
  v23 = 79616 * v20;
  v24 = 15;
  do
  {
    if ( v6 < 192
      && *v22 == v22[v23]
      && v22[1] == v22[v23 + 1]
      && v22[2] == v22[v23 + 2]
      && (v25 = v22[v23 + 3], v22[3] == v25) )
    {
      v26 = 1;
      if ( v19 < 0x10000 )
      {
        v27 = 0;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v19) &= ~(((1 << v26) - 1) << v17);
          LOBYTE(v25) = (_BYTE)v27 << SLOBYTE(dword_140404A6C[289301093]);
          *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + 0x140000000LL) |= (_BYTE)v27 << SLOBYTE(dword_140404A6C[289301093]);
          v28 = 8 - dword_140404A6C[289301093];
          v19 = dword_140404A6C[289301092];
          if ( v26 < 8 - dword_140404A6C[289301093] )
            break;
          v17 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v26 == v28 )
          {
            v19 = ++dword_140404A6C[289301092];
            goto LABEL_34;
          }
          v19 = dword_140404A6C[289301092] + 1;
          v27 >>= v28;
          v26 -= v28;
          ++dword_140404A6C[289301092];
          if ( v26 <= 0 )
            goto LABEL_34;
        }
        v17 = v26 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v26;
      }
    }
    else
    {
      v29 = 1;
      if ( v19 < 0x10000 )
      {
        v30 = 1;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v19) &= ~(((1 << v29) - 1) << v17);
          *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + 0x140000000LL) |= (_BYTE)v30 << SLOBYTE(dword_140404A6C[289301093]);
          v31 = 8 - dword_140404A6C[289301093];
          if ( v29 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v29 == v31 )
          {
            ++dword_140404A6C[289301092];
            dword_140404A6C[289301093] = 0;
            goto LABEL_33;
          }
          v17 = 0;
          v19 = dword_140404A6C[289301092] + 1;
          v30 >>= v31;
          v29 -= v31;
          ++dword_140404A6C[289301092];
          dword_140404A6C[289301093] = 0;
          if ( v29 <= 0 )
            goto LABEL_33;
        }
        dword_140404A6C[289301093] += v29;
      }
LABEL_33:
      sub_140115D90((char *)&dword_140404A6C[137297910] + v18 + v21, 2);
      sub_14010E9B0((unsigned int *)((char *)&dword_140404A6C[137297911] + v18 + v21), v22[v23 + 1], v6 < 192, 0xCu);
      sub_14010E9B0((unsigned int *)((char *)&dword_140404A6C[137297912] + v18 + v21), v22[v23 + 2], v6 < 192, 0xCu);
      LOBYTE(v25) = sub_14010E9B0(
                      (unsigned int *)((char *)&dword_140404A6C[137297913] + v18 + v21),
                      v22[v23 + 3],
                      v6 < 192,
                      0xCu);
      v17 = dword_140404A6C[289301093];
      v19 = dword_140404A6C[289301092];
    }
LABEL_34:
    v18 += 16;
    v22 += 4;
    --v24;
  }
  while ( v24 );
  return v25;
}

