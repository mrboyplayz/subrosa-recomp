/* Address: 0x140115d90 | Name: sub_140115D90 | Size: 204 bytes */
__int64 __fastcall sub_140115D90(_DWORD *a1, signed int a2)
{
  signed int v2; // eax
  unsigned int v4; // r9d
  char v5; // r10
  unsigned int v6; // ecx

  v2 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[289301092] >= 0x10000 )
    return 0;
  v4 = *a1 & ~(-1 << a2);
  if ( a2 > 0 )
  {
    v5 = dword_140404A6C[289301093];
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v2) &= ~(((1 << a2) - 1) << v5);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v4 << SLOBYTE(dword_140404A6C[289301093]);
      v6 = 8 - dword_140404A6C[289301093];
      if ( a2 < 8 - dword_140404A6C[289301093] )
        break;
      if ( a2 == v6 )
      {
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        return 1;
      }
      v5 = 0;
      v2 = dword_140404A6C[289301092] + 1;
      v4 >>= v6;
      a2 -= v6;
      ++dword_140404A6C[289301092];
      dword_140404A6C[289301093] = 0;
      if ( a2 <= 0 )
        return 1;
    }
    dword_140404A6C[289301093] += a2;
  }
  return 1;
}

