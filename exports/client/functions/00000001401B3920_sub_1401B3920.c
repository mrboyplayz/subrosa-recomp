/* Address: 0x1401b3920 | Name: sub_1401B3920 | Size: 272 bytes */
__int64 __fastcall sub_1401B3920(_DWORD *a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  int *v5; // r8

  if ( a3 > 2 )
    return 0xFFFFFFFFLL;
  if ( !a1 )
    return 4294967289LL;
  v4 = sub_1401B38C0(a2, a3);
  MEMORY[0x1401FCD30](a1, 0, v4);
  *(_QWORD *)a1 = a2;
  a1[2] = *(_DWORD *)(a2 + 4);
  a1[3] = a3;
  a1[4] = a3;
  a1[5] = 1;
  a1[6] = 0;
  a1[7] = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  a1[8] = 1;
  a1[9] = a3 == 1;
  a1[10] = sub_1401A13B0();
  sub_140199AA0(a1, 4028, v5);
  return 0;
}

