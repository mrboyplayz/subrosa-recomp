/* Address: 0x140085aa0 | Name: sub_140085AA0 | Size: 1371 bytes */
__int64 sub_140085AA0()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __m128i v2; // xmm7
  __int64 v3; // rbx
  __int64 v4; // rsi
  bool v5; // cc
  __m128i v6; // xmm10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // eax
  const char *v12; // rcx
  __int64 v14; // [rsp+0h] [rbp-2B8h] BYREF
  int v15; // [rsp+20h] [rbp-298h]
  int v16; // [rsp+28h] [rbp-290h]
  int v17; // [rsp+30h] [rbp-288h]
  int v18; // [rsp+38h] [rbp-280h]
  int v19; // [rsp+40h] [rbp-278h]
  _BYTE v20[512]; // [rsp+50h] [rbp-268h] BYREF
  __int64 v21; // [rsp+250h] [rbp-68h]

  if ( dword_140404A6C[284024501] == -1 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v21);
  v0 = 3597LL * (int)dword_140404A6C[284024501];
  v1 = (int)dword_140404A6C[v0 + 71856292];
  if ( dword_140404A6C[280649838] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v21);
  v19 = 1065353216;
  v18 = 1065353216;
  v17 = 1065353216;
  v16 = 1065353216;
  sub_14006D930(
    "Press F1 to toggle help",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x42C00000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
    32);
  v2 = (__m128i)0x43080000u;
  if ( (_DWORD)v1 == -1 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v21);
  v3 = 7166 * v1;
  if ( (int)dword_140404A6C[v3 + 280658149] > 0
    && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[v3 + 280658150] + 278845898] + 278521289] )
  {
    v19 = 1065353216;
    v18 = 1065353216;
    v17 = 1065353216;
    v16 = 1065353216;
    sub_14006D930(
      "Press F to swap your weapon to your right hand",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43080000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v2 = (__m128i)0x431C0000u;
  }
  if ( (int)dword_140404A6C[v3 + 280658139] > 0 )
  {
    v4 = 1760LL * (int)dword_140404A6C[v3 + 280658140];
    if ( dword_140404A6C[v4 + 278845898] == 13 )
    {
      sub_14006D930(
        "Press R to arm grenade",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32(v2),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
        32);
      v19 = 1065353216;
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 + 20.0;
      v18 = 1065353216;
      v17 = 1065353216;
      v16 = 1065353216;
      sub_14006D930(
        "Hold Q, move mouse up and release Q to throw",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32(v2),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
        32);
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 + 20.0;
    }
    if ( dword_140404A6C[1268 * dword_140404A6C[v4 + 278845898] + 278521289] )
    {
      if ( (int)dword_140404A6C[v3 + 280658149] <= 0 )
      {
        v10 = (int)dword_140404A6C[v0 + 71857715] >> 8;
        if ( !v10 || v10 == 3 )
        {
          v19 = 1065353216;
          v18 = 1065353216;
          v17 = 1065353216;
          v16 = 1065353216;
          sub_14006D930(
            "Press 2-5 to put a magazine in your left hand",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
            (unsigned int)_mm_cvtsi128_si32(v2),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
            32);
          *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 + 20.0;
        }
      }
      else if ( dword_140404A6C[1760 * dword_140404A6C[v3 + 280658150] + 278845898] - 1 == dword_140404A6C[v4 + 278845898] )
      {
        v5 = (dword_140404A6C[v0 + 71857724] & 0x80000000) != 0 || (dword_140404A6C[v0 + 71857724] & 0xFFFFFF00) == 0;
        v6 = v2;
        v19 = 1065353216;
        v18 = 1065353216;
        v17 = 1065353216;
        v16 = 1065353216;
        v15 = 32;
        v7 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u);
        v8 = (unsigned int)_mm_cvtsi128_si32(v2);
        v9 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u);
        if ( v5 )
          sub_14006D930("Press Q to drop empty magazine", v9, v8, v7, v15);
        else
          sub_14006D930("Press R to load magazine", v9, v8, v7, v15);
        *(float *)v6.m128i_i32 = *(float *)v2.m128i_i32 + 20.0;
        v2 = v6;
      }
    }
    v11 = dword_140404A6C[v4 + 278845898];
    if ( v11 == 15 )
    {
      sub_140158AB0(v20, "%s to open briefcase", off_1402B29C0[0]);
      v19 = 1065353216;
      v18 = 1065353216;
      v17 = 1065353216;
      v16 = 1065353216;
      sub_14006D930(
        v20,
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32(v2),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
        32);
      v11 = dword_140404A6C[v4 + 278845898];
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 + 20.0;
    }
    if ( v11 == 16 )
    {
      sub_140158AB0(v20, "%s to close briefcase", off_1402B29C0[0]);
      v19 = 1065353216;
      v18 = 1065353216;
      v17 = 1065353216;
      v16 = 1065353216;
      sub_14006D930(
        v20,
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32(v2),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
        32);
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 + 20.0;
      if ( (int)dword_140404A6C[v3 + 280658149] <= 0 )
      {
        if ( (dword_140404A6C[v0 + 71857715] & 0xFFFFFF00) != 0x100 )
          goto LABEL_28;
        v12 = "Press R to unload item from briefcase";
      }
      else
      {
        v12 = "Press R to load item into briefcase";
      }
      v19 = 1065353216;
      v18 = 1065353216;
      v17 = 1065353216;
      v16 = 1065353216;
      sub_14006D930(
        v12,
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32(v2),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
        32);
      *(float *)v2.m128i_i32 = *(float *)v2.m128i_i32 + 20.0;
    }
  }
LABEL_28:
  if ( *(float *)&dword_140404A6C[v3 + 280651456] < 0.69999999 )
  {
    v19 = 1065353216;
    v18 = 1065353216;
    v17 = 1065353216;
    v16 = 1065353216;
    sub_14006D930(
      "Hold CTRL to stand up",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32(v2),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v21);
}

