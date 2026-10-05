/* Address: 0x1400711d0 | Name: sub_1400711D0 | Size: 611 bytes */
__int64 __fastcall sub_1400711D0(unsigned __int8 *a1, float *a2, float a3, float a4, float a5)
{
  int v8; // eax
  signed int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __m128 v12; // xmm2
  __m128d v13; // xmm1
  int v14; // ecx
  float v15; // xmm2_4

  v8 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v9 = sub_140070380(
         v8,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v10 = v9;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v11 = 122LL * v9;
  dword_140404A6C[70087065] = v9;
  dword_140404A6C[v11 + 70087115] = 12;
  sub_14006F120((__int64)&dword_140404A6C[v11 + 70087151], (char *)a1);
  *(float *)&dword_140404A6C[v11 + 70087219] = a5;
  *(float *)&dword_140404A6C[v11 + 70087217] = a3;
  *(float *)&dword_140404A6C[v11 + 70087218] = a4;
  *(_QWORD *)&dword_140404A6C[v11 + 70087215] = a2;
  dword_140404A6C[v11 + 70087220] = 1098907648;
  if ( v10 == dword_140404A6C[70087106] )
  {
    if ( dword_140404A6C[70317817] )
    {
      v12 = (__m128)dword_140404A6C[468760125];
      v12.m128_f32[0] = (float)((float)((float)(*(float *)&dword_140404A6C[468760125]
                                              - *(float *)&dword_140404A6C[v11 + 70087134])
                                      - 8.0)
                              / (float)(*(float *)&dword_140404A6C[v11 + 70087127] - 16.0))
                      * fmaxf(a4 - a3, 0.0);
      if ( LOBYTE(dword_140404A6C[70317069]) && a5 != 0.0 )
      {
        v12.m128_f32[0] = (float)(v12.m128_f32[0] / a5) + 0.5;
        v13 = _mm_cvtps_pd(v12);
        v14 = (int)v13.m128d_f64[0];
        if ( (double)v14 != v13.m128d_f64[0] )
          v13.m128d_f64[0] = (double)(v14 - (_mm_movemask_pd(_mm_unpacklo_pd(v13, v13)) & 1));
        v12.m128_f32[0] = v13.m128d_f64[0] * a5;
      }
      v15 = fmaxf(v12.m128_f32[0] + a3, a3);
      if ( v15 > a4 )
        v15 = a4;
      *a2 = v15;
    }
    else
    {
      dword_140404A6C[v11 + 70087116] = 0;
    }
  }
  return v10;
}

