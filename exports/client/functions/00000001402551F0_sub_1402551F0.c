/* Address: 0x1402551f0 | Name: sub_1402551F0 | Size: 95 bytes */
__int64 __fastcall sub_1402551F0(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  void *v6; // rcx

  sub_140258B64(*a2);
  v6 = *(void **)(**(_QWORD **)a3 + 136LL);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 && v6 != &unk_1403025A0 )
    free_base(v6);
  return sub_140258BB8(*a4);
}

