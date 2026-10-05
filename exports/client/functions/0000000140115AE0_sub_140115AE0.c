/* Address: 0x140115ae0 | Name: sub_140115AE0 | Size: 237 bytes */
__int64 __fastcall sub_140115AE0(_DWORD *a1, int a2)
{
  signed int v2; // r9d
  char v3; // r11
  int v4; // ebx
  unsigned int v5; // r10d
  unsigned int v6; // eax

  v2 = dword_140404A6C[289317484];
  if ( (int)dword_140404A6C[289317484] >= 0x10000
    || (signed int)(dword_140404A6C[289317484] + (a2 >> 3)) > (int)dword_140404A6C[289317483] )
  {
    return 0;
  }
  v3 = 0;
  v4 = 0;
  if ( a2 > 0 )
  {
    v5 = dword_140404A6C[289317485];
    while ( 1 )
    {
      v6 = 8 - v5;
      v4 |= (~(-1 << a2)
           & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v2) >> SLOBYTE(dword_140404A6C[289317485]))) << v3;
      if ( a2 < 8 - v5 )
        break;
      if ( a2 == v6 )
      {
        dword_140404A6C[289317485] = 0;
        dword_140404A6C[289317484] = v2 + 1;
        goto LABEL_11;
      }
      ++v2;
      v5 = 0;
      a2 -= v6;
      dword_140404A6C[289317484] = v2;
      v3 += v6;
      dword_140404A6C[289317485] = 0;
      if ( a2 <= 0 )
        goto LABEL_11;
    }
    dword_140404A6C[289317485] = a2 + v5;
  }
LABEL_11:
  *a1 = v4;
  return 1;
}

