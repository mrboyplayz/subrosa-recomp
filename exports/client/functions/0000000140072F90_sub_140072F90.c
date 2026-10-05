/* Address: 0x140072f90 | Name: sub_140072F90 | Size: 1179 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_140072F90(unsigned int a1, double a2, __int64 a3)
{
  double v3; // xmm2_8
  int v4; // xmm0_4
  double v6; // xmm10_8
  __int64 v7; // rdi
  __m128i v8; // xmm9
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __m128i v14; // xmm2
  unsigned int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int *v19; // rcx
  __int64 v20; // rbx
  __m128i v21; // xmm2
  double v22; // xmm6_8
  double v23; // xmm0_8
  __int64 v24; // r8
  unsigned int v25; // ebx
  unsigned int v26; // ebp
  double v27; // xmm0_8
  __int64 v28; // rdx
  float v29; // xmm6_4
  __int64 v30; // r8
  __int64 v32; // [rsp+0h] [rbp-2F8h] BYREF
  int v33; // [rsp+28h] [rbp-2D0h]
  int v34; // [rsp+30h] [rbp-2C8h]
  int v35; // [rsp+38h] [rbp-2C0h]
  int v36; // [rsp+40h] [rbp-2B8h]
  double v37; // [rsp+48h] [rbp-2B0h]
  _BYTE v38[512]; // [rsp+50h] [rbp-2A8h] BYREF
  __int64 v39; // [rsp+250h] [rbp-A8h]

  v4 = 1044381696;
  v6 = v3;
  v7 = 122LL * (int)a1;
  v8 = *(__m128i *)&a2;
  if ( dword_140404A6C[v7 + 70087116] )
  {
    v4 = 1054867456;
  }
  else if ( a1 == dword_140404A6C[70087109] )
  {
    v4 = 1050673152;
  }
  sub_14006D660(a2, v3, a3, *(float *)&dword_140404A6C[v7 + 70087128], 0, v4, v4, v4, 1056964608);
  v9 = (__m128i)dword_140404A6C[v7 + 70087128];
  *(float *)&a2 = *(float *)&a2 + *(float *)&dword_140404A6C[v7 + 70087127];
  v10 = (__m128i)dword_140404A6C[v7 + 70087133];
  v36 = 1065353216;
  v35 = 1065353216;
  *(float *)&a2 = *(float *)&a2 + 4.0;
  v34 = 1065353216;
  *(float *)v9.m128i_i32 = (float)(*(float *)v9.m128i_i32 * 0.5) + *(float *)&v6;
  v33 = 1065353216;
  sub_14006D930(
    &dword_140404A6C[v7 + 70087151],
    (unsigned int)_mm_cvtsi128_si32(*(__m128i *)&a2),
    (unsigned int)_mm_cvtsi128_si32(v9),
    (unsigned int)_mm_cvtsi128_si32(v10),
    68);
  if ( dword_140404A6C[v7 + 70087124] )
  {
    v20 = -1;
    if ( a1 == dword_140404A6C[70087106] )
    {
      do
        ++v20;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v20) );
    }
    else
    {
      do
        ++v20;
      while ( *(_BYTE *)(*(_QWORD *)&dword_140404A6C[v7 + 70087215] + v20) );
    }
    if ( (int)v20 <= 31 )
    {
      if ( (int)v20 <= 0 )
      {
LABEL_21:
        if ( (unsigned __int64)(int)v20 >= 0x200 )
          sub_1401F8694(v12, v11, v13);
        v38[(int)v20] = 0;
        v19 = (unsigned int *)v38;
        goto LABEL_23;
      }
    }
    else
    {
      LODWORD(v20) = 31;
    }
    LOBYTE(v11) = 42;
    MEMORY[0x1401FCD30](v38, v11, (unsigned int)v20);
    goto LABEL_21;
  }
  if ( a1 == dword_140404A6C[70087106] )
  {
    v19 = &dword_140404A6C[70318069];
LABEL_23:
    v21 = (__m128i)dword_140404A6C[v7 + 70087128];
    v17 = (unsigned int)_mm_cvtsi128_si32(v8);
    v16 = (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[v7 + 70087133]);
    *(float *)v21.m128i_i32 = (float)(*(float *)v21.m128i_i32 * 0.5) + *(float *)&v6;
    v18 = (unsigned int)_mm_cvtsi128_si32(v21);
    goto LABEL_24;
  }
  v14 = (__m128i)dword_140404A6C[v7 + 70087128];
  v15 = dword_140404A6C[v7 + 70087115];
  v16 = (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[v7 + 70087133]);
  v17 = (unsigned int)_mm_cvtsi128_si32(v8);
  *(float *)v14.m128i_i32 = (float)(*(float *)v14.m128i_i32 * 0.5) + *(float *)&v6;
  v18 = (unsigned int)_mm_cvtsi128_si32(v14);
  if ( v15 != 4 )
  {
    if ( v15 == 5 )
    {
      LODWORD(v37) = **(_DWORD **)&dword_140404A6C[v7 + 70087217];
      v36 = 1065353216;
      v35 = 1065353216;
      v34 = 1065353216;
      v33 = 1065353216;
      sub_14006D930("/i", v17, v18, v16, 4);
      goto LABEL_25;
    }
    v19 = *(unsigned int **)&dword_140404A6C[v7 + 70087215];
LABEL_24:
    v36 = 1065353216;
    v35 = 1065353216;
    v34 = 1065353216;
    v33 = 1065353216;
    sub_14006D930(v19, v17, v18, v16, 68);
    goto LABEL_25;
  }
  v37 = **(float **)&dword_140404A6C[v7 + 70087217];
  v36 = 1065353216;
  v35 = 1065353216;
  v34 = 1065353216;
  v33 = 1065353216;
  sub_14006D930("/f", v17, v18, v16, 4);
LABEL_25:
  if ( a1 == dword_140404A6C[70087106] )
  {
    *(_QWORD *)&v22 = dword_140404A6C[v7 + 70087128];
    *(float *)&v22 = (float)((float)(*(float *)&v22 * 0.5) + *(float *)&v6)
                   + (float)(*(float *)&dword_140404A6C[v7 + 70087133] * 0.25);
    v23 = sub_140074CE0(a1, dword_140404A6C[70318066]);
    *(float *)&v23 = *(float *)&v23 + *(float *)v8.m128i_i32;
    sub_14006D660(v23, v22, v24, 4.0, 0, 1065353216, 1065353216, 1065353216, 1056964608);
    v25 = dword_140404A6C[70318066];
    v26 = dword_140404A6C[70318065];
    if ( dword_140404A6C[70318066] != dword_140404A6C[70318065] )
    {
      if ( (int)dword_140404A6C[70318066] >= (int)dword_140404A6C[70318065] )
      {
        v27 = sub_140074CE0(a1, dword_140404A6C[70318065]);
        v28 = v25;
      }
      else
      {
        v27 = sub_140074CE0(a1, dword_140404A6C[70318066]);
        v28 = v26;
      }
      v29 = *(float *)&v27;
      sub_140074CE0(a1, v28);
      *(float *)v8.m128i_i32 = *(float *)v8.m128i_i32 + v29;
      sub_14006D660(
        *(double *)v8.m128i_i64,
        v6,
        v30,
        *(float *)&dword_140404A6C[v7 + 70087128],
        0,
        1065353216,
        1065353216,
        1065353216,
        1048576000);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v32 ^ v39);
}

