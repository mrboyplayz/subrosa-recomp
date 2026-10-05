/* Address: 0x1401ba4e0 | Name: sub_1401BA4E0 | Size: 1339 bytes */
__int64 __fastcall sub_1401BA4E0(__int64 a1, int a2, int a3, int a4)
{
  char v5; // [rsp+20h] [rbp-38h]

  MEMORY[0x1401FCD30](a1, 0, 304);
  if ( a4 )
  {
    if ( a2 != 8000 && a2 != 12000 && a2 != 16000 && a2 != 24000 && a2 != 48000
      || a3 != 8000 && a3 != 12000 && a3 != 16000 )
    {
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 292) = byte_1402821D0[3 * (((a2 >> 12) - (a2 > 16000)) >> (a2 > 24000))
                                         - 4
                                         + (((a3 >> 12) - (a3 > 16000)) >> (a3 > 24000))];
  }
  else
  {
    if ( a2 != 8000 && a2 != 12000 && a2 != 16000
      || a3 != 8000 && a3 != 12000 && a3 != 16000 && a3 != 24000 && a3 != 48000 )
    {
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 292) = byte_1402821E0[5 * (((a2 >> 12) - (a2 > 16000)) >> (a2 > 24000))
                                         - 6
                                         + (((a3 >> 12) - (a3 > 16000)) >> (a3 > 24000))];
  }
  *(_DWORD *)(a1 + 284) = a2 / 1000;
  *(_DWORD *)(a1 + 288) = a3 / 1000;
  *(_DWORD *)(a1 + 268) = 10 * *(_DWORD *)(a1 + 284);
  v5 = 0;
  if ( a3 <= a2 )
  {
    if ( a3 >= a2 )
    {
      *(_DWORD *)(a1 + 264) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 264) = 3;
      if ( 4 * a3 == 3 * a2 )
      {
        *(_DWORD *)(a1 + 280) = 3;
        *(_DWORD *)(a1 + 276) = 18;
        *(_QWORD *)(a1 + 296) = &unk_140282100;
      }
      else if ( 3 * a3 == 2 * a2 )
      {
        *(_DWORD *)(a1 + 280) = 2;
        *(_DWORD *)(a1 + 276) = 18;
        *(_QWORD *)(a1 + 296) = &unk_14027FFE8;
      }
      else if ( 2 * a3 == a2 )
      {
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 24;
        *(_QWORD *)(a1 + 296) = &unk_140282140;
      }
      else if ( 3 * a3 == a2 )
      {
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 36;
        *(_QWORD *)(a1 + 296) = &unk_140280058;
      }
      else if ( 4 * a3 == a2 )
      {
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 36;
        *(_QWORD *)(a1 + 296) = &unk_1402800C8;
      }
      else
      {
        if ( 6 * a3 != a2 )
          return 0xFFFFFFFFLL;
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 36;
        *(_QWORD *)(a1 + 296) = &unk_140280138;
      }
    }
  }
  else if ( a3 == 2 * a2 )
  {
    *(_DWORD *)(a1 + 264) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 264) = 2;
    v5 = 1;
  }
  for ( *(_DWORD *)(a1 + 272) = 4 * ((a2 << (v5 + 14)) / a3);
        (int)((a3 * (__int64)*(int *)(a1 + 272)) >> 16) < a2 << v5;
        ++*(_DWORD *)(a1 + 272) )
  {
    ;
  }
  return 0;
}

