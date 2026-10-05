/* Address: 0x1400afdb0 | Name: sub_1400AFDB0 | Size: 204 bytes */
__int64 __fastcall sub_1400AFDB0(_DWORD *a1, int a2)
{
  int v2; // eax
  unsigned int v4; // r9d
  char v5; // r10
  int v6; // ecx

  v2 = qword_197BC725C;
  if ( qword_197BC725C >= 0x10000 )
    return 0;
  v4 = *a1 & ~(-1 << a2);
  if ( a2 > 0 )
  {
    v5 = *((_BYTE *)&qword_197BC725C + 4);
    while ( 1 )
    {
      *((_BYTE *)&dword_197BC7200[25] + v2) &= ~(((1 << a2) - 1) << v5);
      *((_BYTE *)&dword_197BC7200[25] + qword_197BC725C) |= (_BYTE)v4 << *((char *)&qword_197BC725C + 4);
      v6 = 8 - *(&qword_197BC725C + 1);
      if ( a2 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
        break;
      if ( a2 == v6 )
      {
        ++qword_197BC725C;
        *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        return 1;
      }
      v5 = 0;
      v2 = qword_197BC725C + 1;
      v4 >>= v6;
      a2 -= v6;
      ++qword_197BC725C;
      *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
      if ( a2 <= 0 )
        return 1;
    }
    *(&qword_197BC725C + 1) += a2;
  }
  return 1;
}

