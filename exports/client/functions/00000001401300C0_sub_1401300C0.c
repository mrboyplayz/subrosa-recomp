/* Address: 0x1401300c0 | Name: sub_1401300C0 | Size: 643 bytes */
unsigned int *__fastcall sub_1401300C0(int a1)
{
  unsigned int *v2; // r10
  unsigned int *result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = &dword_140404A6C[283831868];
  do
  {
    result = v2;
    v4 = 2;
    do
    {
      if ( *(result - 280) && !*(result - 279) && *(result - 278) == a1 )
      {
        v5 = (int)*(result - 276);
        if ( (unsigned int)v5 < 0x400 )
          dword_140404A6C[1760 * v5 + 278845900] = 0;
        *(result - 276) = -1;
      }
      if ( *(result - 1) && !*result && result[1] == a1 )
      {
        v6 = (int)result[3];
        if ( (unsigned int)v6 < 0x400 )
          dword_140404A6C[1760 * v6 + 278845900] = 0;
        result[3] = -1;
      }
      if ( result[278] && !result[279] && result[280] == a1 )
      {
        v7 = (int)result[282];
        if ( (unsigned int)v7 < 0x400 )
          dword_140404A6C[1760 * v7 + 278845900] = 0;
        result[282] = -1;
      }
      if ( result[557] && !result[558] && result[559] == a1 )
      {
        v8 = (int)result[561];
        if ( (unsigned int)v8 < 0x400 )
          dword_140404A6C[1760 * v8 + 278845900] = 0;
        result[561] = -1;
      }
      if ( result[836] && !result[837] && result[838] == a1 )
      {
        v9 = (int)result[840];
        if ( (unsigned int)v9 < 0x400 )
          dword_140404A6C[1760 * v9 + 278845900] = 0;
        result[840] = -1;
      }
      if ( result[1115] && !result[1116] && result[1117] == a1 )
      {
        v10 = (int)result[1119];
        if ( (unsigned int)v10 < 0x400 )
          dword_140404A6C[1760 * v10 + 278845900] = 0;
        result[1119] = -1;
      }
      if ( result[1394] && !result[1395] && result[1396] == a1 )
      {
        v11 = (int)result[1398];
        if ( (unsigned int)v11 < 0x400 )
          dword_140404A6C[1760 * v11 + 278845900] = 0;
        result[1398] = -1;
      }
      if ( result[1673] && !result[1674] && result[1675] == a1 )
      {
        v12 = (int)result[1677];
        if ( (unsigned int)v12 < 0x400 )
          dword_140404A6C[1760 * v12 + 278845900] = 0;
        result[1677] = -1;
      }
      result += 2232;
      --v4;
    }
    while ( v4 );
    v2 += 5873;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[283867106] );
  return result;
}

