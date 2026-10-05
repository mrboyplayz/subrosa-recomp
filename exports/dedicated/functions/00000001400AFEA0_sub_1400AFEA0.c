/* Address: 0x1400afea0 | Name: sub_1400AFEA0 | Size: 237 bytes */
__int64 __fastcall sub_1400AFEA0(_DWORD *a1, int a2, unsigned int a3)
{
  int v3; // r10d
  int v4; // r9d
  unsigned int v6; // r11d
  int v7; // r8d
  int v8; // ecx

  v3 = qword_197BC725C;
  v4 = a2;
  if ( qword_197BC725C >= 0x10000 )
    return 0;
  v6 = ~(-1 << a2) & (*a1 / a3);
  if ( a2 > 0 )
  {
    v7 = *(&qword_197BC725C + 1);
    while ( 1 )
    {
      if ( v7 )
        *((_BYTE *)&dword_197BC7200[25] + v3) |= (_BYTE)v6 << v7;
      else
        *((_BYTE *)&dword_197BC7200[25] + v3) = v6;
      v8 = 8 - *(&qword_197BC725C + 1);
      if ( v4 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
        break;
      if ( v4 == v8 )
      {
        ++qword_197BC725C;
        *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        return 1;
      }
      v7 = 0;
      v3 = qword_197BC725C + 1;
      v6 >>= v8;
      v4 -= v8;
      ++qword_197BC725C;
      *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
      if ( v4 <= 0 )
        return 1;
    }
    *(&qword_197BC725C + 1) += v4;
  }
  return 1;
}

