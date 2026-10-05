/* Address: 0x1400afc40 | Name: sub_1400AFC40 | Size: 250 bytes */
__int64 __fastcall sub_1400AFC40(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r9d
  char v4; // r11
  int v5; // ebx
  int v6; // r10d
  int v7; // eax

  v3 = qword_197BD727C;
  if ( (int)qword_197BD727C >= 0x10000 || (int)qword_197BD727C + (a2 >> 3) > dword_197BD7278 )
    return 0;
  v4 = 0;
  v5 = 0;
  if ( a2 > 0 )
  {
    v6 = HIDWORD(qword_197BD727C);
    while ( 1 )
    {
      v7 = 8 - v6;
      v5 |= (~(-1 << a2) & ((unsigned __int8)*(&Src + (int)v3) >> SBYTE4(qword_197BD727C))) << v4;
      if ( a2 < (unsigned int)(8 - v6) )
        break;
      if ( a2 == v7 )
      {
        HIDWORD(qword_197BD727C) = 0;
        LODWORD(qword_197BD727C) = v3 + 1;
        goto LABEL_11;
      }
      ++v3;
      v6 = 0;
      a2 -= v7;
      v4 += v7;
      qword_197BD727C = v3;
      if ( a2 <= 0 )
        goto LABEL_11;
    }
    HIDWORD(qword_197BD727C) = a2 + v6;
  }
LABEL_11:
  *a1 = a3 * v5;
  return 1;
}

