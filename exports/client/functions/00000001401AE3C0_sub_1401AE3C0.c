/* Address: 0x1401ae3c0 | Name: sub_1401AE3C0 | Size: 315 bytes */
__int64 __fastcall sub_1401AE3C0(_DWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  int v5; // eax
  _QWORD *v6; // r8

  if ( a3 > 2 )
    return 0xFFFFFFFFLL;
  if ( !a1 || !a2 )
    return 4294967289LL;
  v5 = sub_1401AE360(a2, a3);
  MEMORY[0x1401FCD30](a1, 0, v5);
  *(_QWORD *)a1 = a2;
  a1[2] = a3;
  a1[3] = a3;
  a1[8] = 1;
  a1[9] = 0;
  a1[10] = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  a1[13] = 1;
  a1[19] = a4;
  a1[14] = 1;
  a1[5] = 1;
  a1[11] = -1;
  a1[12] = 0;
  a1[4] = 0;
  a1[7] = 5;
  a1[16] = 24;
  sub_140199190(a1, 4028, v6);
  return 0;
}

