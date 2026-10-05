/* Address: 0x14006edd0 | Name: sub_14006EDD0 | Size: 240 bytes */
__int64 __fastcall sub_14006EDD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // r9d
  int v5; // r10d
  __int64 v7; // [rsp+0h] [rbp-448h] BYREF
  int v8; // [rsp+20h] [rbp-428h] BYREF
  _BYTE v9[1024]; // [rsp+30h] [rbp-418h] BYREF
  __int64 v10; // [rsp+430h] [rbp-18h]

  v3 = dword_140404A6C[129454557];
  v4 = dword_140404A6C[129454558];
  if ( (int)dword_140404A6C[129454557] < (int)dword_140404A6C[129454558] )
  {
    do
    {
      a2 = *((unsigned __int8 *)&dword_140404A6C[129454559] + (int)v3);
      if ( (unsigned __int8)(a2 - 48) <= 9u )
        break;
      if ( (_BYTE)a2 == 45 )
        break;
      v3 = (unsigned int)(v3 + 1);
      dword_140404A6C[129454557] = v3;
    }
    while ( (int)v3 < (int)dword_140404A6C[129454558] );
  }
  v5 = 0;
  if ( (int)v3 < (int)dword_140404A6C[129454558] )
  {
    a2 = 0;
    do
    {
      if ( a2 >= 255 )
        break;
      a3 = *((unsigned __int8 *)&dword_140404A6C[129454559] + (int)v3);
      if ( (unsigned __int8)(a3 - 48) > 9u && (_BYTE)a3 != 45 )
        break;
      v3 = (unsigned int)(v3 + 1);
      v9[a2++] = a3;
      dword_140404A6C[129454557] = v3;
      ++v5;
    }
    while ( (int)v3 < v4 );
  }
  if ( (unsigned __int64)v5 >= 0x400 )
    sub_1401F8694(v3, a2, a3);
  v9[v5] = 0;
  sub_14015B070(v9, "%d", (unsigned int)&v8);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v10);
}

