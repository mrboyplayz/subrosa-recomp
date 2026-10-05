/* Address: 0x14006c360 | Name: sub_14006C360 | Size: 419 bytes */
__int64 __fastcall sub_14006C360(int a1, _DWORD *a2, int a3, int a4)
{
  __int64 v4; // rsi
  signed int v5; // r10d
  __int64 result; // rax
  unsigned int v7; // r11d
  unsigned int i; // ebx
  int v9; // ecx
  int v10; // ebp
  char v11; // bl
  char v12; // cl
  unsigned int j; // edi

  v4 = 16387LL * a1;
  v5 = dword_140404A6C[v4 + 135184965];
  result = (unsigned int)(v5 + (a3 >> 8));
  if ( (int)result < 0x10000 )
  {
    if ( a4 )
    {
      v7 = *a2 & ~(-1 << a3);
      if ( a3 > 0 )
      {
        for ( i = dword_140404A6C[v4 + 135184966]; ; LOBYTE(i) = 0 )
        {
          *((_BYTE *)&dword_140404A6C[v4 + 135184968] + v5) &= ~(((1 << a3) - 1) << i);
          *((_BYTE *)&dword_140404A6C[v4 + 135184968] + (int)dword_140404A6C[v4 + 135184965]) |= (_BYTE)v7 << dword_140404A6C[v4 + 135184966];
          result = dword_140404A6C[v4 + 135184966];
          v9 = 8 - result;
          if ( a3 < (unsigned int)(8 - result) )
            break;
          v5 = dword_140404A6C[v4 + 135184965] + 1;
          *(_QWORD *)&dword_140404A6C[v4 + 135184965] = (unsigned int)v5;
          if ( a3 == v9 )
            return result;
          a3 -= v9;
          v7 >>= v9;
          if ( a3 <= 0 )
            return result;
        }
        result = (unsigned int)(a3 + result);
        dword_140404A6C[v4 + 135184966] = result;
      }
    }
    else
    {
      v10 = 0;
      v11 = 0;
      if ( a3 > 0 )
      {
        v12 = dword_140404A6C[v4 + 135184966];
        for ( j = dword_140404A6C[v4 + 135184966]; ; j = 0 )
        {
          result = 8 - j;
          v10 |= (~(-1 << a3) & (*((unsigned __int8 *)&dword_140404A6C[v4 + 135184968] + v5) >> v12)) << v11;
          if ( a3 < (unsigned int)result )
            break;
          *(_QWORD *)&dword_140404A6C[v4 + 135184965] = (unsigned int)++v5;
          if ( a3 == (_DWORD)result )
            goto LABEL_17;
          a3 -= result;
          v11 += 8 - j;
          if ( a3 <= 0 )
            goto LABEL_17;
          v12 = 0;
        }
        result = j + a3;
        dword_140404A6C[v4 + 135184966] = result;
      }
LABEL_17:
      *a2 = v10;
    }
  }
  return result;
}

