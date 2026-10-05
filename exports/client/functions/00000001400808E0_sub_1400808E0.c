/* Address: 0x1400808e0 | Name: sub_1400808E0 | Size: 3050 bytes */
__int64 sub_1400808E0()
{
  int v0; // eax
  unsigned int *v1; // rsi
  unsigned int *v2; // rcx
  unsigned int v3; // ecx
  unsigned int *v4; // rdi
  int i; // ebx
  __m128i v6; // xmm2
  int v7; // edi
  unsigned int *v8; // rbx
  __m128i v9; // xmm8
  unsigned int v10; // eax
  int v11; // ebx
  unsigned int *v12; // rdi
  __m128i v13; // xmm2
  __m128i v14; // xmm8
  unsigned int *v15; // rbx
  __int64 v16; // rdi
  __m128i v17; // xmm8
  int v18; // esi
  unsigned int *v19; // rdi
  int v20; // ebx
  unsigned int *v21; // rdi
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __m128i v25; // xmm8
  __int64 v27; // [rsp+0h] [rbp-148h] BYREF
  int v28; // [rsp+28h] [rbp-120h]
  int v29; // [rsp+30h] [rbp-118h]
  int v30; // [rsp+38h] [rbp-110h]
  int v31; // [rsp+40h] [rbp-108h]
  double v32; // [rsp+48h] [rbp-100h]
  unsigned int v33; // [rsp+50h] [rbp-F8h]
  unsigned int v34; // [rsp+58h] [rbp-F0h]
  unsigned int v35; // [rsp+60h] [rbp-E8h]
  unsigned int v36; // [rsp+68h] [rbp-E0h]
  unsigned int v37; // [rsp+70h] [rbp-D8h]
  unsigned int v38; // [rsp+78h] [rbp-D0h]
  unsigned int v39; // [rsp+80h] [rbp-C8h]
  _BYTE v40[64]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-78h]

  dword_140404A6C[438291413] = 2;
  v0 = 0;
  v1 = &dword_140404A6C[71859139];
  dword_140404A6C[179955148] = 0;
  v2 = &dword_140404A6C[71859139];
  do
  {
    if ( *(v2 - 2886) && !*v2 )
      dword_140404A6C[179955148] = ++v0;
    if ( v2[711] && !v2[3597] )
      dword_140404A6C[179955148] = ++v0;
    if ( v2[4308] && !v2[7194] )
      dword_140404A6C[179955148] = ++v0;
    if ( v2[7905] && !v2[10791] )
      dword_140404A6C[179955148] = ++v0;
    v2 += 14388;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[72779971] );
  v3 = dword_140404A6C[179668286];
  if ( (int)dword_140404A6C[179668286] > 0 )
  {
    sub_140158AB0(v40, "%.2f", dword_140404A6C[179955081]);
    sub_14006D930(
      v40,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43FA0000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    sub_140158AB0(v40, "%.2f", dword_140404A6C[179955147]);
    sub_14006D930(
      v40,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44010000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    v39 = dword_140404A6C[179955869];
    v38 = dword_140404A6C[179955868];
    v37 = dword_140404A6C[179955867];
    v36 = dword_140404A6C[179955866];
    v35 = dword_140404A6C[179955865];
    v34 = dword_140404A6C[179955864];
    v33 = dword_140404A6C[179955863];
    sub_14006D930(
      "Toggle:/i /i /i /i /i /i /i /i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44050000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    LODWORD(v32) = dword_140404A6C[283785903];
    v31 = 1065353216;
    v30 = 1065353216;
    v29 = 1065353216;
    v28 = 1065353216;
    sub_14006D930(
      "Cheat:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44090000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    v4 = &dword_140404A6C[308307077];
    for ( i = 0; i < 8; ++i )
    {
      LODWORD(v32) = *v4;
      v31 = 1065353216;
      v30 = 1065353216;
      v6 = (__m128i)COERCE_UNSIGNED_INT((float)i);
      v29 = 1065353216;
      *(float *)v6.m128i_i32 = (float)(*(float *)v6.m128i_i32 * 16.0) + 320.0;
      v28 = 1065353216;
      sub_14006D930(
        "V:/i",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x447F0000u),
        (unsigned int)_mm_cvtsi128_si32(v6),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        2);
      v4 += 96401;
    }
    v3 = dword_140404A6C[179668286];
  }
  if ( v3 == 1 )
  {
    v7 = 0;
    if ( (int)dword_140404A6C[179955926] <= 0 )
      goto LABEL_54;
    v8 = &dword_140404A6C[179955927];
    do
    {
      v31 = 1065353216;
      v30 = 1065353216;
      v29 = 1065353216;
      v9 = (__m128i)COERCE_UNSIGNED_INT((float)v7);
      v28 = 1065353216;
      *(float *)v9.m128i_i32 = (float)(*(float *)v9.m128i_i32 * 16.0) + 32.0;
      sub_14006D930(
        &dword_140404A6C[35 * v7 + 179955930],
        (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
        (unsigned int)_mm_cvtsi128_si32(v9),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        32);
      v10 = *v8;
      if ( !*v8 )
      {
        LODWORD(v32) = v8[1];
        v31 = 1065353216;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        sub_14006D930(
          "/i",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43400000u),
          (unsigned int)_mm_cvtsi128_si32(v9),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          32);
        v10 = *v8;
      }
      if ( v10 == 1 )
      {
        v32 = *((float *)v8 + 2);
        v31 = 1065353216;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        sub_14006D930(
          "/f",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43400000u),
          (unsigned int)_mm_cvtsi128_si32(v9),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          32);
      }
      ++v7;
      v8 += 35;
    }
    while ( v7 < (int)dword_140404A6C[179955926] );
    v3 = dword_140404A6C[179668286];
  }
  if ( v3 == 2 )
  {
    v11 = 0;
    v12 = &dword_140404A6C[179955149];
    do
    {
      LODWORD(v32) = *v12;
      v31 = 1065353216;
      v30 = 1065353216;
      v13 = (__m128i)COERCE_UNSIGNED_INT((float)v11);
      v29 = 1065353216;
      *(float *)v13.m128i_i32 = (float)(*(float *)v13.m128i_i32 * 16.0) + 192.0;
      v28 = 1065353216;
      sub_14006D930(
        "/i",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
        (unsigned int)_mm_cvtsi128_si32(v13),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        32);
      ++v11;
      ++v12;
    }
    while ( v11 < 16 );
    v14 = (__m128i)0x42800000u;
    v15 = &dword_140404A6C[71856254];
    v16 = 256;
    do
    {
      if ( *(v1 - 2886) && !*v1 )
      {
        v31 = 1065353216;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        sub_14006D930(
          v15,
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32(v14),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          0);
        *(float *)v14.m128i_i32 = *(float *)v14.m128i_i32 + 16.0;
      }
      v15 += 3597;
      v1 += 3597;
      --v16;
    }
    while ( v16 );
    v3 = dword_140404A6C[179668286];
  }
  if ( v3 - 3 <= 1 )
  {
    v17 = (__m128i)0x43000000u;
    if ( v3 == 3 )
    {
      v18 = 64;
      if ( (int)dword_140404A6C[179457254] <= 64 )
        goto LABEL_54;
      v19 = &dword_140404A6C[179664074];
      do
      {
        v31 = 1065353216;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        sub_14006D930(
          &dword_140404A6C[22 * v18 + 179662645],
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
          (unsigned int)_mm_cvtsi128_si32(v17),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          32);
        LODWORD(v32) = *(v19 - 1);
        v31 = 1065353216;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        sub_14006D930(
          "/u",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43240000u),
          (unsigned int)_mm_cvtsi128_si32(v17),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          32);
        LODWORD(v32) = *v19;
        v31 = 1065353216;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        sub_14006D930(
          "/u",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43A20000u),
          (unsigned int)_mm_cvtsi128_si32(v17),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          32);
        v20 = dword_140404A6C[179457254];
        *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 + 16.0;
        ++v18;
        v19 += 22;
      }
      while ( v18 < (int)dword_140404A6C[179457254] );
      v3 = dword_140404A6C[179668286];
    }
    else
    {
      v20 = dword_140404A6C[179457254];
    }
    if ( v3 == 4 )
    {
      if ( v20 >= (int)dword_140404A6C[179457253] )
        goto LABEL_54;
      v21 = &dword_140404A6C[22 * v20 + 179662666];
      do
      {
        v31 = 1065353216;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        sub_14006D930(
          &dword_140404A6C[22 * v20 + 179662645],
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
          (unsigned int)_mm_cvtsi128_si32(v17),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          32);
        LODWORD(v32) = *(v21 - 1);
        v31 = 1065353216;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        sub_14006D930(
          "/u",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43240000u),
          (unsigned int)_mm_cvtsi128_si32(v17),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          32);
        LODWORD(v32) = *v21;
        v31 = 1065353216;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        sub_14006D930(
          "/u",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43A20000u),
          (unsigned int)_mm_cvtsi128_si32(v17),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          32);
        ++v20;
        *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 + 16.0;
        v21 += 22;
      }
      while ( v20 < (int)dword_140404A6C[179457253] );
      v3 = dword_140404A6C[179668286];
    }
  }
  if ( v3 == 5 )
  {
    v22 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u);
    v23 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u);
    v24 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u);
    if ( dword_140404A6C[456202453] )
    {
      LODWORD(v32) = dword_140404A6C[456202445];
      v31 = 1065353216;
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      sub_14006D930("Numofconnections:/i", v24, v23, v22, 0);
      v25 = (__m128i)0x43340000u;
    }
    else
    {
      sub_14006D930("Roundnum:/i", v24, v23, v22, 0);
      LODWORD(v32) = dword_140404A6C[421831838];
      v31 = 1065353216;
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      sub_14006D930(
        "ClientRoundnum:/i",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x43340000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
        0);
      v25 = (__m128i)0x43480000u;
    }
    sub_14006D930(
      "Packetsize:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32(v25),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      0);
    *(float *)v25.m128i_i32 = *(float *)v25.m128i_i32 + 20.0;
    sub_14006D930(
      "MaxPacketsize:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32(v25),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      0);
    *(float *)v25.m128i_i32 = *(float *)v25.m128i_i32 + 20.0;
    sub_14006D930(
      "Numofevents:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32(v25),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      0);
    *(float *)v25.m128i_i32 = *(float *)v25.m128i_i32 + 20.0;
    sub_14006D930(
      "objpacketsize:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32(v25),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      0);
    *(float *)v25.m128i_i32 = *(float *)v25.m128i_i32 + 20.0;
    sub_14006D930(
      "conn0bytes:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32(v25),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      0);
    *(float *)v25.m128i_i32 = *(float *)v25.m128i_i32 + 20.0;
    sub_14006D930(
      "players:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32(v25),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      0);
    *(float *)v25.m128i_i32 = *(float *)v25.m128i_i32 + 20.0;
    LODWORD(v32) = dword_140404A6C[284024501];
    v31 = 1065353216;
    v30 = 1065353216;
    v29 = 1065353216;
    v28 = 1065353216;
    sub_14006D930(
      "playernum:/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32(v25),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      0);
  }
LABEL_54:
  dword_140404A6C[438291413] = 0;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v27 ^ v41);
}

