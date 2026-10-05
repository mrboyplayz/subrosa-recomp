/* Address: 0x1401e23f0 | Name: sub_1401E23F0 | Size: 451 bytes */
__int64 __fastcall sub_1401E23F0(int *a1, signed int a2, unsigned int a3)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // [rsp+24h] [rbp-24h] BYREF
  _DWORD *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  if ( a2 != 48000 && a2 != 24000 && a2 != 16000 && a2 != 12000 && a2 != 8000 || a3 != 1 && a3 != 2 )
    return 0xFFFFFFFFLL;
  v4 = sub_1401E2280(a3);
  MEMORY[0x1401FCD30](a1, 0, v4);
  if ( (unsigned int)sub_1401CCA90(&v6) )
    return 4294967293LL;
  v6 = sub_1401E99B0(v6);
  a1[1] = sub_1401E99B0(88);
  *a1 = v6 + a1[1];
  v8 = (__int64)a1 + a1[1];
  v7 = (int *)((char *)a1 + *a1);
  a1[2] = a3;
  a1[12] = a3;
  a1[3] = a2;
  a1[6] = a1[3];
  a1[4] = a1[2];
  if ( (unsigned int)sub_1401CCAC0(v8) )
    return 4294967293LL;
  if ( (unsigned int)sub_14019F190((__int64)v7, a2, a3) )
    return 4294967293LL;
  sub_140199AA0(v7, 10016, nullptr);
  a1[15] = 0;
  v5 = (unsigned int)(a2 >> 31);
  LODWORD(v5) = a2 % 400;
  a1[16] = a2 / 400;
  a1[11] = sub_1401A13B0(a1, v5);
  return 0;
}

