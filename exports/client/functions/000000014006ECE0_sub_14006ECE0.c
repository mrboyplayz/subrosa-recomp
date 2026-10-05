/* Address: 0x14006ece0 | Name: sub_14006ECE0 | Size: 230 bytes */
__int64 __fastcall sub_14006ECE0(__int64 a1, __int64 a2, __int64 a3)
{
  double v3; // xmm2_8
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // r10d
  __int64 v8; // [rsp+0h] [rbp-448h] BYREF
  _BYTE v9[1024]; // [rsp+30h] [rbp-418h] BYREF
  __int64 v10; // [rsp+430h] [rbp-18h]

  v4 = dword_140404A6C[129454557];
  v5 = dword_140404A6C[129454558];
  if ( (int)dword_140404A6C[129454557] < (int)dword_140404A6C[129454558] )
  {
    do
    {
      a2 = *((unsigned __int8 *)&dword_140404A6C[129454559] + (int)v4);
      if ( (_BYTE)a2 != 47 && (char)a2 > 44 && (char)a2 < 58 )
        break;
      v4 = (unsigned int)(v4 + 1);
      dword_140404A6C[129454557] = v4;
    }
    while ( (int)v4 < (int)dword_140404A6C[129454558] );
  }
  v6 = 0;
  if ( (int)v4 < (int)dword_140404A6C[129454558] )
  {
    a2 = 0;
    do
    {
      if ( a2 >= 255 )
        break;
      a3 = *((unsigned __int8 *)&dword_140404A6C[129454559] + (int)v4);
      if ( (unsigned __int8)(a3 - 48) > 9u && (unsigned __int8)(a3 - 45) > 1u )
        break;
      v4 = (unsigned int)(v4 + 1);
      v9[a2++] = a3;
      dword_140404A6C[129454557] = v4;
      ++v6;
    }
    while ( (int)v4 < v5 );
  }
  if ( (unsigned __int64)v6 >= 0x400 )
    sub_1401F8694(v4, a2, a3);
  v9[v6] = 0;
  sub_14015B070(v9, "%f", v3);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v10);
}

