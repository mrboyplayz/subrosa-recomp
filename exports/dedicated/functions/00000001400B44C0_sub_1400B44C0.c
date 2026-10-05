/* Address: 0x1400b44c0 | Name: sub_1400B44C0 | Size: 710 bytes */
__int64 sub_1400B44C0()
{
  int v0; // ebx
  int v1; // eax
  __int128 v2; // xmm1
  unsigned int v3; // eax
  int v4; // edi
  int v5; // r8d
  __int64 v6; // rbx
  int v7; // eax
  char v8; // r9
  unsigned int v9; // r10d
  int v10; // ecx
  int v11; // r8d
  __int64 result; // rax

  v0 = qword_16D1ED470;
  if ( !(_DWORD)qword_16D1ED470 )
  {
    *(_QWORD *)&qword_197BC725C = 1;
    dword_197BC7264[0] = 6;
    sub_1400AFDB0(&dword_19154118C, 4);
    v1 = qword_197BC725C;
    if ( qword_197BC725C < 0x10000 )
    {
      if ( *(&qword_197BC725C + 1) > 0 )
      {
        v1 = ++qword_197BC725C;
        *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
      }
      v2 = xmmword_1915411A0;
      *(_OWORD *)((char *)&dword_197BC7200[25] + v1) = *(_OWORD *)xmmword_191541190;
      *(_OWORD *)((char *)&dword_197BC7200[29] + v1) = v2;
      v1 = qword_197BC725C + 32;
    }
    v3 = v1 + 1;
    qword_197BC725C = v3;
    if ( v3 < dword_16D1ED460 )
    {
      memcpy(Buffer, dword_197BC7264, (int)v3);
      v0 = qword_197BC725C + qword_16D1ED470;
      LODWORD(qword_16D1ED470) = qword_197BC725C + qword_16D1ED470;
    }
    HIDWORD(qword_16D1ED470) = v0;
  }
  *(_QWORD *)&qword_197BC725C = 1;
  dword_197BC7264[0] = 5;
  sub_1400AFDB0(&dword_1915413AC, 4);
  sub_1400AFDB0(&qword_1915413B4, 24);
  sub_1400AFDB0(&dword_178C5B8E0, 30);
  qword_163D39520 = 0;
  dword_163D39528 = 0;
  sub_1400AAD20(255, -1);
  dword_163D197D4 = dword_163D75FAC;
  sub_1400A05A0(255);
  v4 = dword_16D1ED46C;
  v5 = 16;
  dword_163D4754C = dword_163D47544;
  v6 = (unsigned int)(dword_196199564 - dword_16D1ED46C + 0x10000);
  v7 = qword_197BC725C;
  if ( dword_196199564 >= dword_16D1ED46C )
    v6 = (unsigned int)(dword_196199564 - dword_16D1ED46C);
  if ( qword_197BC725C < 0x10000 )
  {
    v8 = *((_BYTE *)&qword_197BC725C + 4);
    v9 = (unsigned __int16)v6;
    while ( 1 )
    {
      *((_BYTE *)&dword_197BC7200[25] + v7) &= ~(((1 << v5) - 1) << v8);
      *((_BYTE *)&dword_197BC7200[25] + qword_197BC725C) |= (_BYTE)v9 << *((char *)&qword_197BC725C + 4);
      v10 = 8 - *(&qword_197BC725C + 1);
      if ( v5 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
        break;
      *(&qword_197BC725C + 1) = 0;
      if ( v5 == v10 )
      {
        ++qword_197BC725C;
        goto LABEL_19;
      }
      v5 -= v10;
      v7 = qword_197BC725C + 1;
      v9 >>= v10;
      ++qword_197BC725C;
      v8 = 0;
      if ( v5 <= 0 )
        goto LABEL_19;
    }
    *(&qword_197BC725C + 1) += v5;
  }
LABEL_19:
  sub_1400AFDB0(&dword_16D1ED46C, 16);
  if ( (int)v6 > 0 )
  {
    while ( 1 )
    {
      sub_1400A9010(v4, 255);
      ++dword_16D1ED46C;
      HIWORD(dword_16D1ED46C) = 0;
      if ( !--v6 )
        break;
      v4 = dword_16D1ED46C;
    }
  }
  v11 = qword_197BC725C + 1;
  qword_197BC725C = v11;
  result = (unsigned int)(v11 + qword_16D1ED470);
  if ( (unsigned int)result >= dword_16D1ED460 )
  {
    HIDWORD(qword_16D1ED470) = qword_16D1ED470;
  }
  else
  {
    memcpy((char *)Buffer + (int)qword_16D1ED470, dword_197BC7264, v11);
    result = (unsigned int)(qword_197BC725C + qword_16D1ED470);
    LODWORD(qword_16D1ED470) = result;
    HIDWORD(qword_16D1ED470) = result;
  }
  return result;
}

