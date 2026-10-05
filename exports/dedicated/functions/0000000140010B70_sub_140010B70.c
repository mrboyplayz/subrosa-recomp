/* Address: 0x140010b70 | Name: sub_140010B70 | Size: 2555 bytes */
__int64 __fastcall sub_140010B70(int a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // ecx
  signed int v5; // ebx
  int *v6; // rdi
  int v7; // r13d
  unsigned __int64 v8; // rsi
  int v9; // r14d
  signed int v10; // r15d
  int v11; // r12d
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // edx
  bool v15; // zf
  char v16; // al
  int v17; // edi
  char v18; // bl
  int *v19; // r14
  signed int i; // edi
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // ecx
  int v26; // r9d
  _WORD *v27; // r8
  int *j; // rdx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // [rsp+40h] [rbp-78h]
  __int64 v35; // [rsp+48h] [rbp-70h] BYREF
  int v36; // [rsp+50h] [rbp-68h]
  int v37; // [rsp+58h] [rbp-60h]
  int v38; // [rsp+5Ch] [rbp-5Ch]
  int v39; // [rsp+60h] [rbp-58h]
  _DWORD v40[4]; // [rsp+68h] [rbp-50h] BYREF

  v2 = a2 & 0xFFFFFF;
  v39 = a1;
  if ( a1 )
  {
    v4 = 0xFFFF;
    v34 = 0xFFFF;
  }
  else
  {
    result = (unsigned int)dword_15BF61800[v2];
    if ( (_DWORD)result != -1 )
      return result;
    v4 = dword_15ADEF2A0;
    v34 = dword_15ADEF2A0;
    if ( dword_15ADEF2A0 >= 0x10000 )
      return 0;
    dword_15BF61800[v2] = dword_15ADEF2A0;
    dword_15ADEF2A0 = v4 + 1;
  }
  v5 = 0;
  v6 = v40;
  v7 = v2 & 0xF;
  v8 = 232LL * v4;
  v37 = v2 & 0x10000;
  v9 = (unsigned __int8)v2 >> 4;
  v10 = ((unsigned int)v2 >> 8) & 0xF;
  *(_DWORD *)((char *)&unk_15AE3182C + v8) = 0;
  v11 = (unsigned __int16)v2 >> 12;
  dword_1605618A0[0] = 0;
  dword_1607918A4 = 0;
  dword_1608418A8 = 0;
  dword_160A130F4 = 0;
  v38 = v2 & 0x20000;
  v40[0] = (unsigned __int8)v7;
  v40[1] = (unsigned __int8)v9;
  v40[2] = v10;
  v40[3] = (unsigned __int16)v11;
  v12 = ((unsigned int)v2 >> 18) & 0xF;
  do
  {
    v13 = *v6;
    if ( (unsigned int)(v13 - 3) <= 0xC
      && (!*((_DWORD *)&unk_143C7A240 + 3088 * v12 + 192 * v13 - 576) || (unsigned int)v5 < 2) )
    {
      sub_140010770(v5, v12, v13 - 3);
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 4 );
  v14 = v37;
  v15 = v37 == 0;
  *(_DWORD *)((char *)&unk_15AE31830 + v8) = 0;
  v16 = !v15;
  if ( v7 > 0 && v7 != 2 )
    v16 |= 2u;
  if ( v9 > 0 && v9 != 2 )
    v16 |= 4u;
  if ( v10 > 0 && v10 != 2 )
    v16 |= 8u;
  if ( v11 > 0 && v11 != 2 )
    v16 |= 0x10u;
  v17 = v38;
  v18 = v16 | 0x20;
  if ( !v38 )
    v18 = v16;
  if ( v14 )
  {
    v35 = 0;
    v36 = 0;
    sub_14000F690(0, (float *)&v35, v18);
    *(_DWORD *)((char *)&unk_15AE31830 + v8) |= 1u;
  }
  if ( v17 )
  {
    v35 = 0;
    v36 = 0;
    sub_14000F690(5, (float *)&v35, v18);
    *(_DWORD *)((char *)&unk_15AE31830 + v8) |= 0x20u;
  }
  v19 = v40;
  for ( i = 0; i < 4; ++i )
  {
    v21 = *v19;
    if ( *v19 == 1 )
    {
      v35 = 0;
      v36 = 0;
      sub_14000F320(i + 1, (float *)&v35);
      *(_DWORD *)((char *)&unk_15AE31830 + v8) |= 1 << (i + 1);
    }
    else
    {
      if ( (unsigned int)(v21 - 3) <= 0xC )
        sub_1400103A0(i, v12, v21 - 3);
      if ( v21 == 2 )
      {
        qword_15ADEF160 = 0x3F80000000000000LL;
        dword_15ADEF168 = 1031798784;
        qword_15ADEF184 = 0x3F8000003D800000LL;
        dword_15ADEF18C = 1031798784;
        *(_QWORD *)&xmmword_15ADEF214 = 1031798784;
        DWORD2(xmmword_15ADEF214) = 1031798784;
        qword_15ADEF1F0 = 0;
        dword_15ADEF1F8 = 1031798784;
        v22 = sub_1400117A0((unsigned int)i, 393216);
        sub_140001320((__int64)&qword_15ADEF160, (__int64)&xmmword_15ADEF214 + 12, 1, 1, 1, 1, v22 | (i + 1));
        qword_15ADEF160 = 0x3F8000003D800000LL;
        dword_15ADEF168 = 1031798784;
        LODWORD(qword_15ADEF184) = 1031798784;
        *(__int64 *)((char *)&qword_15ADEF184 + 4) = 1065353216;
        *(_QWORD *)&xmmword_15ADEF214 = 1031798784;
        DWORD2(xmmword_15ADEF214) = 0;
        qword_15ADEF1F0 = 1031798784;
        dword_15ADEF1F8 = 1031798784;
        v23 = sub_1400117A0((unsigned int)i, 0x20000);
        sub_140001320(
          (__int64)&qword_15ADEF160,
          (__int64)&xmmword_15ADEF214 + 12,
          1,
          1,
          1,
          1,
          v23 | ((((_BYTE)i - 1) & 3) + 1));
      }
    }
    ++v19;
  }
  dword_15AE31820[v8 / 4] = 1;
  dword_15AE31824[v8 / 4] = 1;
  dword_15AE31828[v8 / 4] = 1;
  if ( v39 )
  {
    v25 = dword_1607918A4;
    v26 = 0;
    if ( dword_1607918A4 <= 0 )
      return v34;
    v27 = (_WORD *)dword_1607D18A8 + 1;
    for ( j = dword_1607918AC; ; j += 4 )
    {
      v29 = *(_DWORD *)(v27 - 1) & 0xF0000;
      if ( v29 )
        break;
LABEL_60:
      ++v26;
      v27 += 2;
      if ( v26 >= v25 )
        return v34;
    }
    switch ( v29 )
    {
      case 65536:
        dword_1606F18A4[3 * *(j - 1)] = LODWORD(dword_1606618AC[3 * *(j - 1)]);
        dword_1606F18A8[3 * *(j - 1)] = dword_1606618A8[3 * *(j - 1)];
        dword_1606F18A4[3 * *j] = LODWORD(dword_1606618AC[3 * *j]);
        dword_1606F18A8[3 * *j] = dword_1606618A8[3 * *j];
        dword_1606F18A4[3 * j[1]] = LODWORD(dword_1606618AC[3 * j[1]]);
        dword_1606F18A8[3 * j[1]] = dword_1606618A8[3 * j[1]];
        v30 = 3LL * j[2];
        v31 = LODWORD(dword_1606618AC[3 * j[2]]);
LABEL_56:
        dword_1606F18A4[v30] = v31;
        goto LABEL_57;
      case 131072:
        *(float *)&dword_1606F18A4[3 * *(j - 1)] = 1.0 - dword_1606618AC[3 * *(j - 1)];
        dword_1606F18A8[3 * *(j - 1)] = dword_1606618A8[3 * *(j - 1)];
        *(float *)&dword_1606F18A4[3 * *j] = 1.0 - dword_1606618AC[3 * *j];
        dword_1606F18A8[3 * *j] = dword_1606618A8[3 * *j];
        *(float *)&dword_1606F18A4[3 * j[1]] = 1.0 - dword_1606618AC[3 * j[1]];
        dword_1606F18A8[3 * j[1]] = dword_1606618A8[3 * j[1]];
        *(float *)&dword_1606F18A4[3 * j[2]] = 1.0 - dword_1606618AC[3 * j[2]];
LABEL_57:
        v32 = 3LL * j[2];
        v33 = dword_1606618A8[3 * j[2]];
        goto LABEL_58;
      case 196608:
        dword_1606F18A4[3 * *(j - 1)] = dword_1606618A4[3 * *(j - 1)];
        dword_1606F18A8[3 * *(j - 1)] = LODWORD(dword_1606618AC[3 * *(j - 1)]);
        dword_1606F18A4[3 * *j] = dword_1606618A4[3 * *j];
        dword_1606F18A8[3 * *j] = LODWORD(dword_1606618AC[3 * *j]);
        dword_1606F18A4[3 * j[1]] = dword_1606618A4[3 * j[1]];
        dword_1606F18A8[3 * j[1]] = LODWORD(dword_1606618AC[3 * j[1]]);
        dword_1606F18A4[3 * j[2]] = dword_1606618A4[3 * j[2]];
        v32 = 3LL * j[2];
        v33 = LODWORD(dword_1606618AC[3 * j[2]]);
LABEL_58:
        dword_1606F18A8[v32] = v33;
        break;
      case 262144:
        dword_1606F18A4[3 * *(j - 1)] = dword_1606618A4[3 * *(j - 1)];
        *(float *)&dword_1606F18A8[3 * *(j - 1)] = 1.0 - dword_1606618AC[3 * *(j - 1)];
        dword_1606F18A4[3 * *j] = dword_1606618A4[3 * *j];
        *(float *)&dword_1606F18A8[3 * *j] = 1.0 - dword_1606618AC[3 * *j];
        dword_1606F18A4[3 * j[1]] = dword_1606618A4[3 * j[1]];
        *(float *)&dword_1606F18A8[3 * j[1]] = 1.0 - dword_1606618AC[3 * j[1]];
        dword_1606F18A4[3 * j[2]] = dword_1606618A4[3 * j[2]];
        *(float *)&dword_1606F18A8[3 * j[2]] = 1.0 - dword_1606618AC[3 * j[2]];
        break;
      case 327680:
        *(float *)&dword_1606F18A4[3 * *(j - 1)] = 1.0 - *(float *)&dword_1606618A4[3 * *(j - 1)];
        dword_1606F18A8[3 * *(j - 1)] = dword_1606618A8[3 * *(j - 1)];
        *(float *)&dword_1606F18A4[3 * *j] = 1.0 - *(float *)&dword_1606618A4[3 * *j];
        dword_1606F18A8[3 * *j] = dword_1606618A8[3 * *j];
        *(float *)&dword_1606F18A4[3 * j[1]] = 1.0 - *(float *)&dword_1606618A4[3 * j[1]];
        dword_1606F18A8[3 * j[1]] = dword_1606618A8[3 * j[1]];
        *(float *)&dword_1606F18A4[3 * j[2]] = 1.0 - *(float *)&dword_1606618A4[3 * j[2]];
        goto LABEL_57;
      case 393216:
        dword_1606F18A4[3 * *(j - 1)] = dword_1606618A4[3 * *(j - 1)];
        dword_1606F18A8[3 * *(j - 1)] = dword_1606618A8[3 * *(j - 1)];
        dword_1606F18A4[3 * *j] = dword_1606618A4[3 * *j];
        dword_1606F18A8[3 * *j] = dword_1606618A8[3 * *j];
        dword_1606F18A4[3 * j[1]] = dword_1606618A4[3 * j[1]];
        dword_1606F18A8[3 * j[1]] = dword_1606618A8[3 * j[1]];
        v30 = 3LL * j[2];
        v31 = dword_1606618A4[3 * j[2]];
        goto LABEL_56;
    }
    *v27 = 0;
    v25 = dword_1607918A4;
    goto LABEL_60;
  }
  v24 = v34;
  sub_14000DE50(v34);
  return v24;
}

