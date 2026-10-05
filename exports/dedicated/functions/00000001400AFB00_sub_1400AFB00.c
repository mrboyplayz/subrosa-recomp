/* Address: 0x1400afb00 | Name: sub_1400AFB00 | Size: 237 bytes */
__int64 __fastcall sub_1400AFB00(_DWORD *a1, int a2)
{
  unsigned int v2; // r9d
  char v3; // r11
  int v4; // ebx
  int v5; // r10d
  int v6; // eax

  v2 = qword_197BD727C;
  if ( (int)qword_197BD727C >= 0x10000 || (int)qword_197BD727C + (a2 >> 3) > dword_197BD7278 )
    return 0;
  v3 = 0;
  v4 = 0;
  if ( a2 > 0 )
  {
    v5 = HIDWORD(qword_197BD727C);
    while ( 1 )
    {
      v6 = 8 - v5;
      v4 |= (~(-1 << a2) & ((unsigned __int8)*(&Src + (int)v2) >> SBYTE4(qword_197BD727C))) << v3;
      if ( a2 < (unsigned int)(8 - v5) )
        break;
      if ( a2 == v6 )
      {
        HIDWORD(qword_197BD727C) = 0;
        LODWORD(qword_197BD727C) = v2 + 1;
        goto LABEL_11;
      }
      ++v2;
      v5 = 0;
      a2 -= v6;
      v3 += v6;
      qword_197BD727C = v2;
      if ( a2 <= 0 )
        goto LABEL_11;
    }
    HIDWORD(qword_197BD727C) = a2 + v5;
  }
LABEL_11:
  *a1 = v4;
  return 1;
}

