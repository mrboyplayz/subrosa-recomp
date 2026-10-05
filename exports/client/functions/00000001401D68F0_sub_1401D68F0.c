/* Address: 0x1401d68f0 | Name: sub_1401D68F0 | Size: 544 bytes */
__int64 __fastcall sub_1401D68F0(__int64 a1, _DWORD *a2)
{
  BOOL v3; // [rsp+0h] [rbp-28h]

  *a2 = *(_DWORD *)(a1 + 20240);
  a2[1] = *(_DWORD *)(a1 + 20244);
  a2[2] = *(_DWORD *)(a1 + 4556);
  a2[3] = *(_DWORD *)(a1 + 4564);
  a2[4] = *(_DWORD *)(a1 + 4568);
  a2[5] = *(_DWORD *)(a1 + 4572);
  a2[6] = *(_DWORD *)(a1 + 4612);
  a2[7] = *(_DWORD *)(a1 + 4608);
  a2[8] = *(_DWORD *)(a1 + 4616);
  a2[9] = *(_DWORD *)(a1 + 4624);
  a2[10] = *(_DWORD *)(a1 + 6108);
  a2[12] = *(_DWORD *)(a1 + 6096);
  a2[13] = *(_DWORD *)(a1 + 4676);
  a2[18] = 1000 * *(__int16 *)(a1 + 4576);
  a2[19] = *(_DWORD *)(a1 + 4536);
  v3 = *(_DWORD *)(a1 + 4576) == 16 && !*(_DWORD *)(a1 + 28);
  a2[20] = v3;
  return 0;
}

