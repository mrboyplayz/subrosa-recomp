/* Address: 0x1400bc500 | Name: sub_1400BC500 | Size: 643 bytes */
_DWORD *__fastcall sub_1400BC500(int a1)
{
  _DWORD *v2; // r10
  _DWORD *result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = &unk_191541A3C;
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
          *((_DWORD *)&unk_19025F0C0 + 1760 * v5 + 7) = 0;
        *(result - 276) = -1;
      }
      if ( *(result - 1) && !*result && result[1] == a1 )
      {
        v6 = (int)result[3];
        if ( (unsigned int)v6 < 0x400 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * v6 + 7) = 0;
        result[3] = -1;
      }
      if ( result[278] && !result[279] && result[280] == a1 )
      {
        v7 = (int)result[282];
        if ( (unsigned int)v7 < 0x400 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * v7 + 7) = 0;
        result[282] = -1;
      }
      if ( result[557] && !result[558] && result[559] == a1 )
      {
        v8 = (int)result[561];
        if ( (unsigned int)v8 < 0x400 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * v8 + 7) = 0;
        result[561] = -1;
      }
      if ( result[836] && !result[837] && result[838] == a1 )
      {
        v9 = (int)result[840];
        if ( (unsigned int)v9 < 0x400 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * v9 + 7) = 0;
        result[840] = -1;
      }
      if ( result[1115] && !result[1116] && result[1117] == a1 )
      {
        v10 = (int)result[1119];
        if ( (unsigned int)v10 < 0x400 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * v10 + 7) = 0;
        result[1119] = -1;
      }
      if ( result[1394] && !result[1395] && result[1396] == a1 )
      {
        v11 = (int)result[1398];
        if ( (unsigned int)v11 < 0x400 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * v11 + 7) = 0;
        result[1398] = -1;
      }
      if ( result[1673] && !result[1674] && result[1675] == a1 )
      {
        v12 = (int)result[1677];
        if ( (unsigned int)v12 < 0x400 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * v12 + 7) = 0;
        result[1677] = -1;
      }
      result += 2232;
      --v4;
    }
    while ( v4 );
    v2 += 5873;
  }
  while ( (__int64)v2 < (__int64)dword_1915640D4 );
  return result;
}

