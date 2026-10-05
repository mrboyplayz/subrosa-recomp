/* Address: 0x1400dbd50 | Name: sub_1400DBD50 | Size: 440 bytes */
__int64 __fastcall sub_1400DBD50(int a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  int v4; // r9d
  unsigned int v6; // r11d
  int j; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // ebp
  char v11; // bl
  char v12; // cl
  int i; // edi
  int v14; // eax

  v3 = 65552LL * a1;
  v4 = *(int *)((char *)&qword_19A257E20 + v3);
  if ( v4 + (a3 >> 8) >= 0x10000 )
    return 0;
  if ( *(int *)((char *)&qword_19A257E20 + v3 + 12) )
  {
    v10 = 0;
    v11 = 0;
    if ( a3 > 0 )
    {
      v12 = *((_BYTE *)&qword_19A257E20 + v3 + 4);
      for ( i = *(int *)((char *)&qword_19A257E20 + v3 + 4); ; i = 0 )
      {
        v14 = 8 - i;
        v10 |= (~(-1 << a3) & (*((unsigned __int8 *)&qword_19A257E20 + v3 + v4 + 16) >> v12)) << v11;
        if ( a3 < (unsigned int)(8 - i) )
          break;
        *(_QWORD *)((char *)&qword_19A257E20 + v3) = (unsigned int)++v4;
        if ( a3 == v14 )
          goto LABEL_18;
        a3 -= v14;
        v11 += v14;
        if ( a3 <= 0 )
          goto LABEL_18;
        v12 = 0;
      }
      *(int *)((char *)&qword_19A257E20 + v3 + 4) = i + a3;
    }
LABEL_18:
    *a2 = v10;
    return 1;
  }
  v6 = *a2 & ~(-1 << a3);
  if ( a3 <= 0 )
    return 1;
  for ( j = *(int *)((char *)&qword_19A257E20 + v3 + 4); ; LOBYTE(j) = 0 )
  {
    *((_BYTE *)&qword_19A257E20 + v3 + v4 + 16) &= ~(((1 << a3) - 1) << j);
    *((_BYTE *)&qword_19A257E20 + v3 + *(int *)((char *)&qword_19A257E20 + v3) + 16) |= (_BYTE)v6 << *(int *)((char *)&qword_19A257E20 + v3 + 4);
    v8 = *(int *)((char *)&qword_19A257E20 + v3 + 4);
    v9 = 8 - v8;
    if ( a3 < (unsigned int)(8 - v8) )
      break;
    v4 = *(int *)((char *)&qword_19A257E20 + v3) + 1;
    *(_QWORD *)((char *)&qword_19A257E20 + v3) = (unsigned int)v4;
    if ( a3 == v9 )
      return 1;
    a3 -= v9;
    v6 >>= v9;
    if ( a3 <= 0 )
      return 1;
  }
  *(int *)((char *)&qword_19A257E20 + v3 + 4) = a3 + v8;
  return 1;
}

