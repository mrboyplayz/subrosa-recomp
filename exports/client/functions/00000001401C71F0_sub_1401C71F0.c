/* Address: 0x1401c71f0 | Name: sub_1401C71F0 | Size: 686 bytes */
__int64 __fastcall sub_1401C71F0(__int64 a1, int a2, int a3)
{
  unsigned int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+24h] [rbp-14h]

  v4 = 0;
  *(_DWORD *)(a1 + 2332) = 5 * (__int16)a2;
  v5 = *(__int16 *)(a1 + 2332) * *(__int16 *)(a1 + 2324);
  if ( *(_DWORD *)(a1 + 2316) != a2 || *(_DWORD *)(a1 + 2320) != a3 )
  {
    v4 = sub_1401BA4E0(a1 + 2448, 1000 * (__int16)a2, a3, 0);
    *(_DWORD *)(a1 + 2320) = a3;
  }
  if ( *(_DWORD *)(a1 + 2316) != a2 || v5 != *(_DWORD *)(a1 + 2328) )
  {
    if ( a2 == 8 )
    {
      if ( *(_DWORD *)(a1 + 2324) == 4 )
        *(_QWORD *)(a1 + 2392) = &unk_1402822D0;
      else
        *(_QWORD *)(a1 + 2392) = &unk_140281F84;
    }
    else if ( *(_DWORD *)(a1 + 2324) == 4 )
    {
      *(_QWORD *)(a1 + 2392) = &unk_1402822A8;
    }
    else
    {
      *(_QWORD *)(a1 + 2392) = &unk_1402822E0;
    }
    if ( *(_DWORD *)(a1 + 2316) != a2 )
    {
      *(_DWORD *)(a1 + 2336) = 20 * (__int16)a2;
      if ( a2 == 8 || a2 == 12 )
      {
        *(_DWORD *)(a1 + 2340) = 10;
        *(_QWORD *)(a1 + 2752) = &unk_140282870;
      }
      else
      {
        *(_DWORD *)(a1 + 2340) = 16;
        *(_QWORD *)(a1 + 2752) = &unk_140282800;
      }
      switch ( a2 )
      {
        case 16:
          *(_QWORD *)(a1 + 2384) = &unk_140282538;
          break;
        case 12:
          *(_QWORD *)(a1 + 2384) = &unk_14028225C;
          break;
        case 8:
          *(_QWORD *)(a1 + 2384) = &unk_1402821FC;
          break;
      }
      *(_DWORD *)(a1 + 2376) = 1;
      *(_DWORD *)(a1 + 2308) = 100;
      *(_BYTE *)(a1 + 2312) = 10;
      *(_DWORD *)(a1 + 4188) = 0;
      MEMORY[0x1401FCD30](a1 + 1348, 0, 960);
      MEMORY[0x1401FCD30](a1 + 1284, 0, 64);
    }
    *(_DWORD *)(a1 + 2316) = a2;
    *(_DWORD *)(a1 + 2328) = v5;
  }
  return v4;
}

