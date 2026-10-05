/* Address: 0x1400bedf0 | Name: sub_1400BEDF0 | Size: 340 bytes */
void __fastcall sub_1400BEDF0(u_long hostlong, u_short a2, __int64 a3, _BYTE *a4)
{
  __int64 v7; // rbx
  unsigned int v8; // r9d
  int v9; // eax
  int v10; // r8d
  int v11; // ecx
  int v12; // edx

  v7 = -1;
  do
    ++v7;
  while ( a4[v7] );
  *(_QWORD *)&qword_197BC725C = 5;
  byte_197BC7268 = 3;
  if ( (int)v7 > 63 )
    LODWORD(v7) = 63;
  *(_DWORD *)dword_197BC7264 = dword_140104000;
  v8 = v7 & 0x3F;
  v9 = 5;
  v10 = 6;
  while ( 1 )
  {
    *((_BYTE *)&dword_197BC7200[25] + v9) &= -1 << v10;
    *((_BYTE *)&dword_197BC7200[25] + qword_197BC725C) |= (_BYTE)v8 << *((char *)&qword_197BC725C + 4);
    v11 = 8 - *(&qword_197BC725C + 1);
    v9 = qword_197BC725C;
    if ( v10 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
      break;
    v12 = 0;
    *(&qword_197BC725C + 1) = 0;
    if ( v10 == v11 )
    {
      v9 = ++qword_197BC725C;
      goto LABEL_12;
    }
    v9 = qword_197BC725C + 1;
    v8 >>= v11;
    v10 -= v11;
    ++qword_197BC725C;
    if ( v10 <= 0 )
      goto LABEL_12;
  }
  v12 = v10 + *(&qword_197BC725C + 1);
  *(&qword_197BC725C + 1) += v10;
LABEL_12:
  if ( v9 < 0x10000 )
  {
    if ( v12 > 0 )
    {
      ++v9;
      *(&qword_197BC725C + 1) = 0;
      qword_197BC725C = v9;
    }
    memcpy(&dword_197BC7264[v9], a4, (int)v7);
    qword_197BC725C += v7;
  }
  sub_1400BC790(hostlong, a2);
}

