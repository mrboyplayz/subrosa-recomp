/* Address: 0x1400814d0 | Name: sub_1400814D0 | Size: 746 bytes */
__int64 __fastcall sub_1400814D0(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char *v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-4B8h] BYREF
  int v7; // [rsp+28h] [rbp-490h]
  int v8; // [rsp+30h] [rbp-488h]
  int v9; // [rsp+38h] [rbp-480h]
  int v10; // [rsp+40h] [rbp-478h]
  unsigned int v11; // [rsp+48h] [rbp-470h]
  _BYTE v12[1024]; // [rsp+50h] [rbp-468h] BYREF
  __int64 v13; // [rsp+450h] [rbp-68h]

  if ( a1 != -1 )
  {
    v2 = a2;
    if ( a2 != -1 )
    {
      v10 = 1065353216;
      v9 = 0;
      v3 = 3597LL * a1;
      v8 = 0;
      v7 = 0;
      sub_14006D930(
        &dword_140404A6C[v3 + 71856254],
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42400000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        0);
      sub_140158AB0(v12, "%03d-%04d", dword_140404A6C[v3 + 71856265] / 0x2710, dword_140404A6C[v3 + 71856265] % 0x2710);
      v10 = 1065353216;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sub_14006D930(
        v12,
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42800000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        0);
      v11 = dword_140404A6C[v3 + 71856275];
      v10 = 1065353216;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sub_14006D930(
        "Corporate rating: /i",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42A00000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        0);
      if ( (unsigned int)v2 <= 5 )
      {
        v4 = off_1402B2890[v2];
        v10 = 1065353216;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sub_14006D930(
          v4,
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42E00000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          0);
        v11 = dword_140404A6C[v3 + 71856273];
        v10 = 1065353216;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sub_14006D930(
          "$/I",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          0);
        v11 = dword_140404A6C[v3 + 71856274];
        v10 = 1065353216;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sub_14006D930(
          "Budget: $/I",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x442A0000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          0);
      }
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v13);
  }
  return result;
}

