/* Address: 0x140115e80 | Name: sub_140115E80 | Size: 237 bytes */
__int64 __fastcall sub_140115E80(_DWORD *a1, int a2, unsigned int a3)
{
  signed int v3; // r10d
  signed int v4; // r9d
  unsigned int v6; // r11d
  unsigned int v7; // r8d
  unsigned int v8; // ecx

  v3 = dword_140404A6C[289301092];
  v4 = a2;
  if ( (int)dword_140404A6C[289301092] >= 0x10000 )
    return 0;
  v6 = ~(-1 << a2) & (*a1 / a3);
  if ( a2 > 0 )
  {
    v7 = dword_140404A6C[289301093];
    while ( 1 )
    {
      if ( v7 )
        *((_BYTE *)&dword_140404A6C[289301094] + v3) |= (_BYTE)v6 << v7;
      else
        *((_BYTE *)&dword_140404A6C[289301094] + v3) = v6;
      v8 = 8 - dword_140404A6C[289301093];
      if ( v4 < 8 - dword_140404A6C[289301093] )
        break;
      if ( v4 == v8 )
      {
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        return 1;
      }
      v7 = 0;
      v3 = dword_140404A6C[289301092] + 1;
      v6 >>= v8;
      v4 -= v8;
      ++dword_140404A6C[289301092];
      dword_140404A6C[289301093] = 0;
      if ( v4 <= 0 )
        return 1;
    }
    dword_140404A6C[289301093] += v4;
  }
  return 1;
}

