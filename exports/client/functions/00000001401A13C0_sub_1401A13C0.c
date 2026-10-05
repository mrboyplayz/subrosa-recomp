/* Address: 0x1401a13c0 | Name: sub_1401A13C0 | Size: 192 bytes */
__int64 __fastcall sub_1401A13C0(__int64 a1, __int64 a2, __int64 a3)
{
  int i; // [rsp+20h] [rbp-18h]
  float v5; // [rsp+24h] [rbp-14h]
  float v6[4]; // [rsp+28h] [rbp-10h]

  v5 = *(float *)(a1 + 4);
  for ( i = 0; i < *(_DWORD *)a1; ++i )
  {
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 8LL * i);
    *(float *)(a3 + 8LL * *(__int16 *)(*(_QWORD *)(a1 + 48) + 2LL * i)) = v5 * v6[0];
    *(float *)(a3 + 8LL * *(__int16 *)(*(_QWORD *)(a1 + 48) + 2LL * i) + 4) = v5 * v6[1];
  }
  return sub_1401A15A0(a1, a3);
}

