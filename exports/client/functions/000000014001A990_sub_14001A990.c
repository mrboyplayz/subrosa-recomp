/* Address: 0x14001a990 | Name: sub_14001A990 | Size: 2555 bytes */
__int64 __fastcall sub_14001A990(int a1, int a2)
{
  __int64 v2; // rdx
  signed int v3; // ecx
  signed int v4; // ebx
  int *v5; // rdi
  int v6; // r13d
  __int64 v7; // rsi
  int v8; // r14d
  signed int v9; // r15d
  int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // edx
  bool v14; // zf
  char v15; // al
  int v16; // edi
  char v17; // bl
  int *v18; // r14
  signed int i; // edi
  int v20; // ebx
  int v21; // eax
  int v22; // eax
  signed int v23; // ecx
  signed int v24; // r9d
  _WORD *v25; // r8
  unsigned int *j; // rdx
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v33; // [rsp+0h] [rbp-B8h] BYREF
  int v34; // [rsp+40h] [rbp-78h]
  __int64 v35; // [rsp+48h] [rbp-70h] BYREF
  int v36; // [rsp+50h] [rbp-68h]
  int v37; // [rsp+58h] [rbp-60h]
  int v38; // [rsp+5Ch] [rbp-5Ch]
  int v39; // [rsp+60h] [rbp-58h]
  _DWORD v40[4]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v41; // [rsp+78h] [rbp-40h]

  v2 = a2 & 0xFFFFFF;
  v39 = a1;
  if ( a1 )
  {
    v3 = 0xFFFF;
    v34 = 0xFFFF;
LABEL_6:
    v4 = 0;
    v5 = v40;
    v6 = v2 & 0xF;
    v7 = 58LL * v3;
    v37 = v2 & 0x10000;
    v8 = (unsigned __int8)v2 >> 4;
    v9 = ((unsigned int)v2 >> 8) & 0xF;
    dword_140404A6C[v7 + 20074648] = 0;
    v10 = (unsigned __int16)v2 >> 12;
    dword_140404A6C[70425405] = 0;
    dword_140404A6C[70998846] = 0;
    dword_140404A6C[71179071] = 0;
    dword_140404A6C[71655762] = 0;
    v38 = v2 & 0x20000;
    v40[0] = (unsigned __int8)v6;
    v40[1] = (unsigned __int8)v8;
    v40[2] = v9;
    v40[3] = (unsigned __int16)v10;
    v11 = ((unsigned int)v2 >> 18) & 0xF;
    do
    {
      v12 = *v5;
      if ( (unsigned int)(v12 - 3) <= 0xC
        && (!dword_140404A6C[3088 * v11 + 451023413 + 192 * v12] || (unsigned int)v4 < 2) )
      {
        sub_14001A590(v4, v11, v12 - 3);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 4 );
    v13 = v37;
    v14 = v37 == 0;
    dword_140404A6C[v7 + 20074649] = 0;
    v15 = !v14;
    if ( v6 > 0 && v6 != 2 )
      v15 |= 2u;
    if ( v8 > 0 && v8 != 2 )
      v15 |= 4u;
    if ( v9 > 0 && v9 != 2 )
      v15 |= 8u;
    if ( v10 > 0 && v10 != 2 )
      v15 |= 0x10u;
    v16 = v38;
    v17 = v15 | 0x20;
    if ( !v38 )
      v17 = v15;
    if ( v13 )
    {
      v35 = 0;
      v36 = 0;
      sub_1400194B0(0, (float *)&v35, v17);
      dword_140404A6C[v7 + 20074649] |= 1u;
    }
    if ( v16 )
    {
      v35 = 0;
      v36 = 0;
      sub_1400194B0(5, (float *)&v35, v17);
      dword_140404A6C[v7 + 20074649] |= 0x20u;
    }
    v18 = v40;
    for ( i = 0; i < 4; ++i )
    {
      v20 = *v18;
      if ( *v18 == 1 )
      {
        v35 = 0;
        v36 = 0;
        sub_140019140(i + 1, (float *)&v35);
        dword_140404A6C[v7 + 20074649] |= 1 << (i + 1);
      }
      else
      {
        if ( (unsigned int)(v20 - 3) <= 0xC )
          sub_14001A1C0(i, v11, v20 - 3);
        if ( v20 == 2 )
        {
          dword_140404A6C[19928789] = 0;
          dword_140404A6C[19928790] = 1065353216;
          dword_140404A6C[19928791] = 1031798784;
          dword_140404A6C[19928798] = 1031798784;
          dword_140404A6C[19928799] = 1065353216;
          dword_140404A6C[19928800] = 1031798784;
          *(_QWORD *)&dword_140404A6C[19928834] = 1031798784;
          dword_140404A6C[19928836] = 1031798784;
          *(_QWORD *)&dword_140404A6C[19928825] = 0;
          dword_140404A6C[19928827] = 1031798784;
          v21 = sub_14001B5C0((unsigned int)i, 393216);
          sub_140001F20(
            (__int64)&dword_140404A6C[19928789],
            (__int64)&dword_140404A6C[19928837],
            1,
            1,
            1,
            1,
            v21 | (i + 1));
          dword_140404A6C[19928789] = 1031798784;
          dword_140404A6C[19928790] = 1065353216;
          dword_140404A6C[19928791] = 1031798784;
          dword_140404A6C[19928798] = 1031798784;
          *(_QWORD *)&dword_140404A6C[19928799] = 1065353216;
          *(_QWORD *)&dword_140404A6C[19928834] = 1031798784;
          dword_140404A6C[19928836] = 0;
          *(_QWORD *)&dword_140404A6C[19928825] = 1031798784;
          dword_140404A6C[19928827] = 1031798784;
          v22 = sub_14001B5C0((unsigned int)i, 0x20000);
          sub_140001F20(
            (__int64)&dword_140404A6C[19928789],
            (__int64)&dword_140404A6C[19928837],
            1,
            1,
            1,
            1,
            v22 | ((((_BYTE)i - 1) & 3) + 1));
        }
      }
      ++v18;
    }
    dword_140404A6C[v7 + 20074645] = 1;
    dword_140404A6C[v7 + 20074646] = 1;
    dword_140404A6C[v7 + 20074647] = 1;
    if ( !v39 )
    {
      sub_140017CA0(v34);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v33 ^ v41);
    }
    v23 = dword_140404A6C[70998846];
    v24 = 0;
    if ( (int)dword_140404A6C[70998846] <= 0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v33 ^ v41);
    v25 = (_WORD *)&dword_140404A6C[71064383] + 1;
    for ( j = &dword_140404A6C[70998848]; ; j += 4 )
    {
      v27 = *(_DWORD *)(v25 - 1) & 0xF0000;
      if ( v27 )
        break;
LABEL_59:
      ++v24;
      v25 += 2;
      if ( v24 >= v23 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v33 ^ v41);
    }
    switch ( v27 )
    {
      case 65536:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        v28 = 3LL * (int)j[2];
        v29 = dword_140404A6C[3 * j[2] + 70687552];
LABEL_55:
        dword_140404A6C[v28 + 70835006] = v29;
        goto LABEL_56;
      case 131072:
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        *(float *)&dword_140404A6C[3 * *j + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        *(float *)&dword_140404A6C[3 * j[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        *(float *)&dword_140404A6C[3 * j[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687552];
LABEL_56:
        v30 = 3LL * (int)j[2];
        v31 = dword_140404A6C[3 * j[2] + 70687551];
        goto LABEL_57;
      case 196608:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[2] + 70835006] = dword_140404A6C[3 * j[2] + 70687550];
        v30 = 3LL * (int)j[2];
        v31 = dword_140404A6C[3 * j[2] + 70687552];
LABEL_57:
        dword_140404A6C[v30 + 70835007] = v31;
        break;
      case 262144:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        *(float *)&dword_140404A6C[3 * *j + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        *(float *)&dword_140404A6C[3 * j[1] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[2] + 70835006] = dword_140404A6C[3 * j[2] + 70687550];
        *(float *)&dword_140404A6C[3 * j[2] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687552];
        break;
      case 327680:
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        *(float *)&dword_140404A6C[3 * *j + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        *(float *)&dword_140404A6C[3 * j[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        *(float *)&dword_140404A6C[3 * j[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687550];
        goto LABEL_56;
      case 393216:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        v28 = 3LL * (int)j[2];
        v29 = dword_140404A6C[3 * j[2] + 70687550];
        goto LABEL_55;
    }
    *v25 = 0;
    v23 = dword_140404A6C[70998846];
    goto LABEL_59;
  }
  if ( dword_140404A6C[v2 + 23937125] == -1 )
  {
    v3 = dword_140404A6C[19928869];
    v34 = dword_140404A6C[19928869];
    if ( (int)dword_140404A6C[19928869] < 0x10000 )
    {
      dword_140404A6C[v2 + 23937125] = dword_140404A6C[19928869];
      dword_140404A6C[19928869] = v3 + 1;
      goto LABEL_6;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v33 ^ v41);
}

