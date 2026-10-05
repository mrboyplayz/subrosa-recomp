/* Address: 0x140084eb0 | Name: sub_140084EB0 | Size: 3044 bytes */
__int64 sub_140084EB0()
{
  unsigned int v0; // eax
  __m128i v1; // xmm9
  const char *v2; // rcx
  const char *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  signed int v6; // r11d
  signed int v7; // r9d
  signed int v8; // ebx
  unsigned int *v9; // r10
  char *v10; // rcx
  bool v11; // zf
  char *v12; // rax
  const char *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  signed int v16; // r11d
  signed int v17; // r9d
  signed int v18; // ebx
  unsigned int *v19; // r10
  char *v20; // rcx
  char *v21; // rax
  const char *v22; // rcx
  signed int v23; // r11d
  signed int v24; // r9d
  signed int v25; // ebx
  unsigned int *v26; // r10
  char *v27; // rcx
  char *v28; // rax
  unsigned int v29; // eax
  unsigned int *v30; // rcx
  int v31; // edx
  unsigned int *v32; // rsi
  int i; // ebp
  __int64 v34; // rbx
  int v35; // edx
  float v36; // xmm10_4
  __int64 v37; // rbx
  __m128i v38; // xmm2
  _BYTE v40[32]; // [rsp+0h] [rbp-528h] BYREF
  float v41; // [rsp+20h] [rbp-508h]
  float v42; // [rsp+28h] [rbp-500h]
  float v43; // [rsp+30h] [rbp-4F8h]
  int v44; // [rsp+38h] [rbp-4F0h]
  int v45; // [rsp+40h] [rbp-4E8h]
  int v46; // [rsp+48h] [rbp-4E0h]
  int v47; // [rsp+50h] [rbp-4D8h]
  _BYTE v48[1024]; // [rsp+60h] [rbp-4C8h] BYREF
  __int64 v49; // [rsp+460h] [rbp-C8h]

  v0 = dword_140404A6C[283831448];
  v1 = (__m128i)0x43000000u;
  if ( dword_140404A6C[283831448] == 3 )
  {
    if ( (int)dword_140404A6C[283831505] <= 0 )
    {
      v2 = "Eliminator Wins!";
      if ( dword_140404A6C[284022317] != 1 )
        v2 = "Eliminators Wins!";
    }
    else
    {
      v2 = "Humans Win!";
    }
    v42 = 1.0;
    sub_14006D930(
      v2,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
      32);
    v45 = 1065353216;
    v3 = "The Eliminator";
    v44 = 1065353216;
    v43 = 0.75;
    v4 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u);
    v5 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x43000000u);
    if ( dword_140404A6C[284022317] != 1 )
      v3 = "The Eliminators";
    v42 = 0.75;
    sub_14006D930(v3, (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u), v5, v4, 32);
    v6 = dword_140404A6C[284022317];
    v48[0] = 0;
    v7 = 0;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v8 = dword_140404A6C[284022317] - 1;
      v9 = &dword_140404A6C[284022319];
      do
      {
        v10 = &v40[95];
        do
          v11 = *++v10 == 0;
        while ( !v11 );
        strcpy(v10, (const char *)&dword_140404A6C[3597 * *v9 + 71856254]);
        if ( v7 < v8 )
        {
          v12 = &v40[95];
          do
            v11 = *++v12 == 0;
          while ( !v11 );
          strcpy(v12, ", ");
        }
        ++v7;
        v9 += 9;
      }
      while ( v7 < v6 );
    }
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      v48,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43140000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v45 = 1065353216;
    v13 = "The Savior";
    v44 = 1065353216;
    v43 = 0.75;
    v14 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u);
    v15 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x433C0000u);
    if ( dword_140404A6C[284022317] != 1 )
      v13 = "The Saviors";
    v42 = 0.75;
    sub_14006D930(v13, (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u), v15, v14, 32);
    v16 = dword_140404A6C[284022317];
    v17 = 0;
    v48[0] = 0;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v18 = dword_140404A6C[284022317] - 1;
      v19 = &dword_140404A6C[284022318];
      do
      {
        v20 = &v40[95];
        do
          v11 = *++v20 == 0;
        while ( !v11 );
        strcpy(v20, (const char *)&dword_140404A6C[3597 * *v19 + 71856254]);
        if ( v17 < v18 )
        {
          v21 = &v40[95];
          do
            v11 = *++v21 == 0;
          while ( !v11 );
          strcpy(v21, ", ");
        }
        ++v17;
        v19 += 9;
      }
      while ( v17 < v16 );
    }
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      v48,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43500000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v22 = "The Protector";
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    if ( dword_140404A6C[284022317] != 1 )
      v22 = "The Protectors";
    v42 = 0.75;
    sub_14006D930(
      v22,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43780000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v23 = dword_140404A6C[284022317];
    v24 = 0;
    v48[0] = 0;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v25 = dword_140404A6C[284022317] - 1;
      v26 = &dword_140404A6C[284022320];
      do
      {
        v27 = &v40[95];
        do
          v11 = *++v27 == 0;
        while ( !v11 );
        strcpy(v27, (const char *)&dword_140404A6C[3597 * *v26 + 71856254]);
        if ( v24 < v25 )
        {
          v28 = &v40[95];
          do
            v11 = *++v28 == 0;
          while ( !v11 );
          strcpy(v28, ", ");
        }
        ++v24;
        v26 += 9;
      }
      while ( v24 < v23 );
    }
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      v48,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43860000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v0 = dword_140404A6C[283831448];
  }
  if ( v0 == 1 )
  {
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    dword_140404A6C[438291413] = 2;
    sub_14006D930(
      "THE ELIMINATOR",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "It is the present, the year 1985.",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "A robot from the year 2019 has been sent back in time",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42A80000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "to eliminate the future resistance leader.  The future people",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42D00000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "also sent someone back to stop the robot.",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42F80000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "The Eliminator",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43240000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "You must kill the future resistance leader.",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x433C0000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "A red box will appear in the HUD showing their last known location.",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43500000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "The Protector",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43780000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "You must stop The Eliminator, the only way to destroy it is with grenades.",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43880000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "Civilian//The Savior",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x439C0000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      32);
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 0.75;
    v42 = 0.75;
    sub_14006D930(
      "Your goal is to survive, one of you is the future savior of mankind.",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x43A80000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v29 = 0;
    v30 = &dword_140404A6C[71859139];
    dword_140404A6C[346695797] = 0;
    v31 = 0;
    v32 = &dword_140404A6C[346695798];
    do
    {
      if ( *(v30 - 2886) && !*v30 )
      {
        dword_140404A6C[2 * v29 + 346695798] = v31;
        v29 = ++dword_140404A6C[346695797];
      }
      ++v31;
      v30 += 3597;
    }
    while ( v31 < 256 );
    v45 = 1065353216;
    v44 = 1065353216;
    v43 = 1.0;
    v42 = 1.0;
    sub_14006D930(
      "The Players",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44420000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42C40000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x418C0000u),
      96);
    for ( i = 0; i < (int)dword_140404A6C[346695797]; v32 += 2 )
    {
      v34 = *v32;
      if ( (unsigned int)v34 > 0xFF )
        v34 = 0;
      if ( dword_140404A6C[283831448] != 2 && (_DWORD)v34 != dword_140404A6C[284024501] )
      {
        v47 = 1065353216;
        v46 = 1065353216;
        v45 = 1065353216;
        v44 = 1065353216;
        v43 = 0.0;
        v42 = 24.0;
        v41 = 24.0;
        if ( dword_140404A6C[v34 + 284023074] )
          v35 = dword_140404A6C[346696312];
        else
          v35 = dword_140404A6C[3597 * (unsigned int)v34 + 71856270]
              ? dword_140404A6C[346696311]
              : dword_140404A6C[346696310];
        sub_14006D300(0, v35, 752.0, *(float *)v1.m128i_i32, v41, v42, SLOBYTE(v43), v44, v45, v46, v47);
        if ( dword_140404A6C[284024633] )
        {
          if ( !dword_140404A6C[346696313]
            && *(float *)&dword_140404A6C[284024597] >= 752.0
            && *(float *)&dword_140404A6C[284024597] < 776.0
            && *(float *)&dword_140404A6C[284024598] >= *(float *)v1.m128i_i32
            && *(float *)&dword_140404A6C[284024598] < (float)(*(float *)v1.m128i_i32 + 24.0) )
          {
            dword_140404A6C[v34 + 284023074] ^= 1u;
          }
        }
      }
      v36 = 1.0;
      if ( dword_140404A6C[283831448] == 1 && !dword_140404A6C[3597 * (unsigned int)v34 + 71856271] )
        v36 = 0.5;
      v45 = 1065353216;
      v44 = LODWORD(v36);
      v37 = 3597LL * (unsigned int)v34;
      v43 = v36 * 0.75;
      v42 = v36 * 0.75;
      sub_14006D930(
        &dword_140404A6C[v37 + 71856254],
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44420000u),
        (unsigned int)_mm_cvtsi128_si32(v1),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x418C0000u),
        96);
      sub_140158AB0(
        v48,
        "%03d-%04d",
        dword_140404A6C[v37 + 71856265] / 0x2710,
        dword_140404A6C[v37 + 71856265] % 0x2710);
      v45 = 1065353216;
      v38 = v1;
      *(float *)v38.m128i_i32 = *(float *)v1.m128i_i32 + 18.0;
      v44 = LODWORD(v36);
      v43 = v36 * 0.75;
      v42 = v36 * 0.75;
      sub_14006D930(
        v48,
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44420000u),
        (unsigned int)_mm_cvtsi128_si32(v38),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41200000u),
        96);
      ++i;
      *(float *)v1.m128i_i32 = *(float *)v1.m128i_i32 + 24.0;
    }
  }
  dword_140404A6C[438291413] = 0;
  return MEMORY[0x1401F8B20]((unsigned __int64)v40 ^ v49);
}

