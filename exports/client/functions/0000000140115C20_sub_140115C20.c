/* Address: 0x140115c20 | Name: sub_140115C20 | Size: 250 bytes */
__int64 __fastcall sub_140115C20(_DWORD *a1, int a2, int a3)
{
  signed int v3; // r9d
  char v4; // r11
  int v5; // ebx
  unsigned int v6; // r10d
  unsigned int v7; // eax

  v3 = dword_140404A6C[289317484];
  if ( (int)dword_140404A6C[289317484] >= 0x10000
    || (signed int)(dword_140404A6C[289317484] + (a2 >> 3)) > (int)dword_140404A6C[289317483] )
  {
    return 0;
  }
  v4 = 0;
  v5 = 0;
  if ( a2 > 0 )
  {
    v6 = dword_140404A6C[289317485];
    while ( 1 )
    {
      v7 = 8 - v6;
      v5 |= (~(-1 << a2)
           & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v3) >> SLOBYTE(dword_140404A6C[289317485]))) << v4;
      if ( a2 < 8 - v6 )
        break;
      if ( a2 == v7 )
      {
        dword_140404A6C[289317485] = 0;
        dword_140404A6C[289317484] = v3 + 1;
        goto LABEL_11;
      }
      ++v3;
      v6 = 0;
      a2 -= v7;
      dword_140404A6C[289317484] = v3;
      v4 += v7;
      dword_140404A6C[289317485] = 0;
      if ( a2 <= 0 )
        goto LABEL_11;
    }
    dword_140404A6C[289317485] = a2 + v6;
  }
LABEL_11:
  *a1 = a3 * v5;
  return 1;
}

