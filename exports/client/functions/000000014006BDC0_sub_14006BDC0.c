/* Address: 0x14006bdc0 | Name: sub_14006BDC0 | Size: 263 bytes */
__int64 sub_14006BDC0()
{
  const char *v0; // rcx
  _DWORD v2[20]; // [rsp+0h] [rbp-268h] BYREF
  _BYTE v3[512]; // [rsp+50h] [rbp-218h] BYREF
  __int64 v4; // [rsp+250h] [rbp-18h]

  switch ( dword_140404A6C[179668277] )
  {
    case 0u:
      if ( dword_140404A6C[278384725] )
      {
        v0 = "Steam Auth...";
        if ( !dword_140404A6C[278384987] )
          v0 = "Steam Ticket...";
      }
      else
      {
        v0 = "Steam Init Failed";
      }
      goto LABEL_11;
    case 1u:
      v0 = "CS Auth...";
LABEL_11:
      v2[16] = 1065353216;
      v2[14] = 1065353216;
      v2[12] = 1065353216;
      v2[10] = 1065353216;
      sub_14006D930(
        v0,
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x440C0000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41400000u),
        0);
      return MEMORY[0x1401F8B20]((unsigned __int64)v2 ^ v4);
    case 2u:
      sub_140158AB0(v3, "%03d-%04d", dword_140404A6C[134050337] / 0x2710, dword_140404A6C[134050337] % 0x2710);
      v0 = v3;
      goto LABEL_11;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v2 ^ v4);
}

