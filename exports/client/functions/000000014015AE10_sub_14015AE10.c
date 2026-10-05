/* Address: 0x14015ae10 | Name: sub_14015AE10 | Size: 440 bytes */
__int64 __fastcall sub_14015AE10(int a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  signed int v4; // r9d
  unsigned int v6; // r11d
  unsigned int j; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // ebp
  char v11; // bl
  char v12; // cl
  unsigned int i; // edi
  unsigned int v14; // eax

  v3 = 16388LL * a1;
  v4 = dword_140404A6C[v3 + 291021661];
  if ( v4 + (a3 >> 8) >= 0x10000 )
    return 0;
  if ( dword_140404A6C[v3 + 291021664] )
  {
    v10 = 0;
    v11 = 0;
    if ( a3 > 0 )
    {
      v12 = dword_140404A6C[v3 + 291021662];
      for ( i = dword_140404A6C[v3 + 291021662]; ; i = 0 )
      {
        v14 = 8 - i;
        v10 |= (~(-1 << a3) & (*((unsigned __int8 *)&dword_140404A6C[v3 + 291021665] + v4) >> v12)) << v11;
        if ( a3 < 8 - i )
          break;
        *(_QWORD *)&dword_140404A6C[v3 + 291021661] = (unsigned int)++v4;
        if ( a3 == v14 )
          goto LABEL_18;
        a3 -= v14;
        v11 += v14;
        if ( a3 <= 0 )
          goto LABEL_18;
        v12 = 0;
      }
      dword_140404A6C[v3 + 291021662] = i + a3;
    }
LABEL_18:
    *a2 = v10;
    return 1;
  }
  v6 = *a2 & ~(-1 << a3);
  if ( a3 <= 0 )
    return 1;
  for ( j = dword_140404A6C[v3 + 291021662]; ; LOBYTE(j) = 0 )
  {
    *((_BYTE *)&dword_140404A6C[v3 + 291021665] + v4) &= ~(((1 << a3) - 1) << j);
    *((_BYTE *)&dword_140404A6C[v3 + 291021665] + (int)dword_140404A6C[v3 + 291021661]) |= (_BYTE)v6 << dword_140404A6C[v3 + 291021662];
    v8 = dword_140404A6C[v3 + 291021662];
    v9 = 8 - v8;
    if ( a3 < 8 - v8 )
      break;
    v4 = dword_140404A6C[v3 + 291021661] + 1;
    *(_QWORD *)&dword_140404A6C[v3 + 291021661] = (unsigned int)v4;
    if ( a3 == v9 )
      return 1;
    a3 -= v9;
    v6 >>= v9;
    if ( a3 <= 0 )
      return 1;
  }
  dword_140404A6C[v3 + 291021662] = a3 + v8;
  return 1;
}

