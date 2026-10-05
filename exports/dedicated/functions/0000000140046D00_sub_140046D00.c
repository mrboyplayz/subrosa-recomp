/* Address: 0x140046d00 | Name: sub_140046D00 | Size: 419 bytes */
__int64 __fastcall sub_140046D00(int a1, _DWORD *a2, int a3, int a4)
{
  __int64 v4; // rsi
  int v5; // r10d
  __int64 result; // rax
  unsigned int v7; // r11d
  int i; // ebx
  int v9; // ecx
  int v10; // ebp
  char v11; // bl
  char v12; // cl
  int j; // edi

  v4 = 65548LL * a1;
  v5 = *(_DWORD *)((char *)&unk_1962BCCE0 + v4);
  result = (unsigned int)(v5 + (a3 >> 8));
  if ( (int)result < 0x10000 )
  {
    if ( a4 )
    {
      v7 = *a2 & ~(-1 << a3);
      if ( a3 > 0 )
      {
        for ( i = *(_DWORD *)((char *)&unk_1962BCCE0 + v4 + 4); ; LOBYTE(i) = 0 )
        {
          *((_BYTE *)&unk_1962BCCE0 + v4 + v5 + 12) &= ~(((1 << a3) - 1) << i);
          *((_BYTE *)&unk_1962BCCE0 + v4 + *(int *)((char *)&unk_1962BCCE0 + v4) + 12) |= (_BYTE)v7 << *(_DWORD *)((char *)&unk_1962BCCE0 + v4 + 4);
          result = *(unsigned int *)((char *)&unk_1962BCCE0 + v4 + 4);
          v9 = 8 - result;
          if ( a3 < (unsigned int)(8 - result) )
            break;
          v5 = *(_DWORD *)((char *)&unk_1962BCCE0 + v4) + 1;
          *(_QWORD *)((char *)&unk_1962BCCE0 + v4) = (unsigned int)v5;
          if ( a3 == v9 )
            return result;
          a3 -= v9;
          v7 >>= v9;
          if ( a3 <= 0 )
            return result;
        }
        result = (unsigned int)(a3 + result);
        *(_DWORD *)((char *)&unk_1962BCCE0 + v4 + 4) = result;
      }
    }
    else
    {
      v10 = 0;
      v11 = 0;
      if ( a3 > 0 )
      {
        v12 = *((_BYTE *)&unk_1962BCCE0 + v4 + 4);
        for ( j = *(_DWORD *)((char *)&unk_1962BCCE0 + v4 + 4); ; j = 0 )
        {
          result = (unsigned int)(8 - j);
          v10 |= (~(-1 << a3) & (*((unsigned __int8 *)&unk_1962BCCE0 + v4 + v5 + 12) >> v12)) << v11;
          if ( a3 < (unsigned int)result )
            break;
          *(_QWORD *)((char *)&unk_1962BCCE0 + v4) = (unsigned int)++v5;
          if ( a3 == (_DWORD)result )
            goto LABEL_17;
          a3 -= result;
          v11 += 8 - j;
          if ( a3 <= 0 )
            goto LABEL_17;
          v12 = 0;
        }
        result = (unsigned int)(j + a3);
        *(_DWORD *)((char *)&unk_1962BCCE0 + v4 + 4) = result;
      }
LABEL_17:
      *a2 = v10;
    }
  }
  return result;
}

