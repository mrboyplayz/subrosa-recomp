/* Address: 0x1401e0880 | Name: sub_1401E0880 | Size: 1080 bytes */
__int64 __fastcall sub_1401E0880(int *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v5; // eax
  unsigned int v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+24h] [rbp-24h]
  _DWORD *v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  if ( a2 != 48000 && a2 != 24000 && a2 != 16000 && a2 != 12000 && a2 != 8000
    || a3 != 1 && a3 != 2
    || a4 != 2048 && a4 != 2049 && a4 != 2051 )
  {
    return 0xFFFFFFFFLL;
  }
  v5 = sub_1401E06F0(a3);
  MEMORY[0x1401FCD30](a1, 0, v5);
  v7 = sub_1401CAAA0(&v6);
  if ( v7 )
    return 0xFFFFFFFFLL;
  v6 = sub_1401E99B0(v6);
  a1[1] = sub_1401E99B0(18144);
  *a1 = v6 + a1[1];
  v10 = (__int64)a1 + a1[1];
  v9 = (int *)((char *)a1 + *a1);
  a1[28] = a3;
  a1[3548] = a3;
  a1[36] = a2;
  a1[45] = sub_1401A13B0();
  v7 = sub_1401CAAD0(v10, a1[45], (__int64)(a1 + 2));
  if ( v7 )
    return 4294967293LL;
  a1[2] = a3;
  a1[3] = a3;
  a1[4] = a1[36];
  a1[5] = 16000;
  a1[6] = 8000;
  a1[7] = 16000;
  a1[8] = 20;
  a1[9] = 25000;
  a1[10] = 0;
  a1[11] = 9;
  a1[12] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[19] = 0;
  if ( (unsigned int)sub_14019F0E0((__int64)v9, a2, a3, a1[45]) )
    return 4294967293LL;
  sub_140199190(v9, 10016, nullptr);
  sub_140199190(v9, 4010, (_QWORD *)(unsigned int)a1[11]);
  a1[37] = 1;
  a1[38] = 1;
  a1[41] = -1000;
  a1[40] = a3 * a2 + 3000;
  a1[27] = a4;
  a1[31] = -1000;
  a1[32] = -1000;
  a1[33] = 1105;
  a1[30] = -1000;
  a1[34] = -1000;
  a1[35] = -1;
  a1[43] = a1[36] / 100;
  a1[42] = 24;
  a1[39] = 5000;
  a1[29] = a1[36] / 250;
  *((_WORD *)a1 + 7098) = 0x4000;
  a1[3551] = 1065353216;
  a1[3550] = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
  a1[3563] = 1;
  a1[3556] = 1001;
  a1[3560] = 1105;
  sub_1401EBEC0(a1 + 47, (unsigned int)a1[36]);
  a1[48] = a1[27];
  return 0;
}

