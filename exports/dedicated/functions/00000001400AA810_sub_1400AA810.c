/* Address: 0x1400aa810 | Name: sub_1400AA810 | Size: 1284 bytes */
char __fastcall sub_1400AA810(int a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  _DWORD *v5; // rbx
  int v6; // r13d
  unsigned int v7; // esi
  int v8; // eax
  int v9; // r8d
  char v10; // r10
  unsigned int v11; // r9d
  int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rbx
  char v17; // r8
  __int64 v18; // r15
  int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rbp
  _DWORD *v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rsi
  int v25; // eax
  int v26; // r9d
  unsigned int v27; // r10d
  int v28; // ecx
  int v29; // r9d
  unsigned int v30; // r10d
  int v31; // ecx

  v3 = a3;
  v4 = a2;
  v5 = (_DWORD *)((char *)&unk_160F2AB08 + 188896 * a1 + 12 * a3);
  sub_1400AFDB0(v5, 8);
  v6 = dword_163D75FAC - *v5;
  v7 = (unsigned __int8)*v5;
  if ( v6 >= 192 )
    v7 = 0;
  sub_1400AFDB0(&dword_1909419F0[7166 * v3], 8);
  sub_1400AFDB0(&dword_1909419F4[7166 * v3], 4);
  v8 = qword_197BC725C;
  v9 = 1;
  if ( qword_197BC725C < 0x10000 )
  {
    v10 = *((_BYTE *)&qword_197BC725C + 4);
    v11 = dword_190941A04[7166 * v3] > 0;
    while ( 1 )
    {
      dword_197BC7264[v8] &= ~(((1 << v9) - 1) << v10);
      dword_197BC7264[qword_197BC725C] |= (_BYTE)v11 << *((char *)&qword_197BC725C + 4);
      v12 = 8 - *(&qword_197BC725C + 1);
      if ( v9 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
        break;
      *(&qword_197BC725C + 1) = 0;
      if ( v9 == v12 )
      {
        ++qword_197BC725C;
        goto LABEL_11;
      }
      v9 -= v12;
      v8 = qword_197BC725C + 1;
      v11 >>= v12;
      ++qword_197BC725C;
      v10 = 0;
      if ( v9 <= 0 )
        goto LABEL_11;
    }
    *(&qword_197BC725C + 1) += v9;
  }
LABEL_11:
  sub_1400AFDB0((char *)&unk_190948720 + 28664 * v3, 1);
  v13 = v7;
  v14 = 318464LL * v7;
  v15 = 318464 * v4 + 484 * v3;
  v16 = 484 * v3 + v14;
  sub_1400A86E0((char *)&unk_16F0DFBC8 + v15, *(_DWORD *)((char *)&unk_16F0DFBC8 + v16), v6 < 192, 0x1Cu);
  sub_1400A86E0((char *)&unk_16F0DFBCC + v15, *(_DWORD *)((char *)&unk_16F0DFBCC + v16), v6 < 192, 0x1Cu);
  sub_1400A86E0((char *)&unk_16F0DFBD0 + v15, *(_DWORD *)((char *)&unk_16F0DFBD0 + v16), v6 < 192, 0x1Cu);
  sub_1400AFDB0((char *)&unk_16F0DFBD4 + v15, 2);
  sub_1400A89D0((char *)&unk_16F0DFBD8 + v15, *(_DWORD *)((char *)&unk_16F0DFBD8 + v16), v6 < 192, 0xEu);
  sub_1400A89D0((char *)&unk_16F0DFBDC + v15, *(_DWORD *)((char *)&unk_16F0DFBDC + v16), v6 < 192, 0xEu);
  sub_1400A89D0((char *)&unk_16F0DFBE0 + v15, *(_DWORD *)((char *)&unk_16F0DFBE0 + v16), v6 < 192, 0xEu);
  v17 = *((_BYTE *)&qword_197BC725C + 4);
  v18 = 318464 * v4 + 16;
  v19 = qword_197BC725C;
  v20 = v13 - v4;
  v21 = 484 * v3;
  v22 = (_DWORD *)((char *)&unk_16F0DFCB4 + v15);
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
          dword_197BC7264[v19] &= ~(((1 << v26) - 1) << v17);
          LOBYTE(v25) = (_BYTE)v27 << *((char *)&qword_197BC725C + 4);
          *(_BYTE *)(qword_197BC725C + 1471967844LL + 0x140000000LL) |= (_BYTE)v27 << *((char *)&qword_197BC725C + 4);
          v28 = 8 - *(&qword_197BC725C + 1);
          v19 = qword_197BC725C;
          if ( v26 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          v17 = 0;
          *(&qword_197BC725C + 1) = 0;
          if ( v26 == v28 )
          {
            v19 = ++qword_197BC725C;
            goto LABEL_34;
          }
          v19 = qword_197BC725C + 1;
          v27 >>= v28;
          v26 -= v28;
          ++qword_197BC725C;
          if ( v26 <= 0 )
            goto LABEL_34;
        }
        v17 = v26 + *((_BYTE *)&qword_197BC725C + 4);
        *(&qword_197BC725C + 1) += v26;
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
          dword_197BC7264[v19] &= ~(((1 << v29) - 1) << v17);
          *(_BYTE *)(qword_197BC725C + 1471967844LL + 0x140000000LL) |= (_BYTE)v30 << *((char *)&qword_197BC725C + 4);
          v31 = 8 - *(&qword_197BC725C + 1);
          if ( v29 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          if ( v29 == v31 )
          {
            ++qword_197BC725C;
            *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
            goto LABEL_33;
          }
          v17 = 0;
          v19 = qword_197BC725C + 1;
          v30 >>= v31;
          v29 -= v31;
          ++qword_197BC725C;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
          if ( v29 <= 0 )
            goto LABEL_33;
        }
        *(&qword_197BC725C + 1) += v29;
      }
LABEL_33:
      sub_1400AFDB0((char *)&unk_16F0DFCA4 + v18 + v21, 2);
      sub_1400A89D0((char *)&unk_16F0DFCA8 + v18 + v21, v22[v23 + 1], v6 < 192, 0xCu);
      sub_1400A89D0((char *)&unk_16F0DFCAC + v18 + v21, v22[v23 + 2], v6 < 192, 0xCu);
      LOBYTE(v25) = sub_1400A89D0((char *)&unk_16F0DFCB0 + v18 + v21, v22[v23 + 3], v6 < 192, 0xCu);
      v17 = *((_BYTE *)&qword_197BC725C + 4);
      v19 = qword_197BC725C;
    }
LABEL_34:
    v18 += 16;
    v22 += 4;
    --v24;
  }
  while ( v24 );
  return v25;
}

