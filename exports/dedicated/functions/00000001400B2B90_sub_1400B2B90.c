/* Address: 0x1400b2b90 | Name: sub_1400B2B90 | Size: 799 bytes */
__int64 __fastcall sub_1400B2B90(int a1, int a2)
{
  __int64 v2; // r11
  __int64 result; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r10
  float v8; // xmm2_4
  int *v9; // rcx
  int v10; // r8d
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // r8d
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // r8d
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  int v24; // r8d
  int v25; // r8d
  int v26; // r9d
  int v27; // eax
  int v28; // r8d
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  int v32; // r8d
  int v33; // r8d
  int v34; // r9d
  int v35; // eax
  int v36; // r8d
  int v37; // r8d
  int v38; // r9d
  int v39; // eax
  float v40; // xmm3_4
  __m128i v41; // xmm1

  v2 = 3597LL * a1;
  result = dword_16D67D624[v2];
  if ( (unsigned int)result <= 5 )
  {
    v5 = dword_16D67D62C[v2];
    if ( v5 >= a2 )
    {
      v6 = 3 * result;
      v7 = 2;
      v8 = dword_1961996A4[6 * result];
      v9 = (int *)((char *)&unk_191541A84 + 23492 * result);
      do
      {
        if ( *(v9 - 298) )
        {
          v10 = *(v9 - 279);
          if ( v10 > 0 )
          {
            v11 = v10 - dword_1961996B4[2 * v6];
            v12 = dword_1961996A0[2 * v6];
            if ( v12 > 0 )
            {
              v13 = 0;
              if ( v11 >= 0 )
                v13 = v11;
              v8 = v8 - (float)((float)v13 / (float)v12);
            }
          }
        }
        if ( *(v9 - 19) )
        {
          if ( *v9 > 0 )
          {
            v14 = dword_1961996A0[2 * v6];
            if ( v14 > 0 )
            {
              v15 = 0;
              if ( *v9 - dword_1961996B4[2 * v6] >= 0 )
                v15 = *v9 - dword_1961996B4[2 * v6];
              v8 = v8 - (float)((float)v15 / (float)v14);
            }
          }
        }
        if ( v9[260] )
        {
          v16 = v9[279];
          if ( v16 > 0 )
          {
            v17 = v16 - dword_1961996B4[2 * v6];
            v18 = dword_1961996A0[2 * v6];
            if ( v18 > 0 )
            {
              v19 = 0;
              if ( v17 >= 0 )
                v19 = v17;
              v8 = v8 - (float)((float)v19 / (float)v18);
            }
          }
        }
        if ( v9[539] )
        {
          v20 = v9[558];
          if ( v20 > 0 )
          {
            v21 = v20 - dword_1961996B4[2 * v6];
            v22 = dword_1961996A0[2 * v6];
            if ( v22 > 0 )
            {
              v23 = 0;
              if ( v21 >= 0 )
                v23 = v21;
              v8 = v8 - (float)((float)v23 / (float)v22);
            }
          }
        }
        if ( v9[818] )
        {
          v24 = v9[837];
          if ( v24 > 0 )
          {
            v25 = v24 - dword_1961996B4[2 * v6];
            v26 = dword_1961996A0[2 * v6];
            if ( v26 > 0 )
            {
              v27 = 0;
              if ( v25 >= 0 )
                v27 = v25;
              v8 = v8 - (float)((float)v27 / (float)v26);
            }
          }
        }
        if ( v9[1097] )
        {
          v28 = v9[1116];
          if ( v28 > 0 )
          {
            v29 = v28 - dword_1961996B4[2 * v6];
            v30 = dword_1961996A0[2 * v6];
            if ( v30 > 0 )
            {
              v31 = 0;
              if ( v29 >= 0 )
                v31 = v29;
              v8 = v8 - (float)((float)v31 / (float)v30);
            }
          }
        }
        if ( v9[1376] )
        {
          v32 = v9[1395];
          if ( v32 > 0 )
          {
            v33 = v32 - dword_1961996B4[2 * v6];
            v34 = dword_1961996A0[2 * v6];
            if ( v34 > 0 )
            {
              v35 = 0;
              if ( v33 >= 0 )
                v35 = v33;
              v8 = v8 - (float)((float)v35 / (float)v34);
            }
          }
        }
        if ( v9[1655] )
        {
          v36 = v9[1674];
          if ( v36 > 0 )
          {
            v37 = v36 - dword_1961996B4[2 * v6];
            v38 = dword_1961996A0[2 * v6];
            if ( v38 > 0 )
            {
              v39 = 0;
              if ( v37 >= 0 )
                v39 = v37;
              v8 = v8 - (float)((float)v39 / (float)v38);
            }
          }
        }
        v9 += 2232;
        --v7;
      }
      while ( v7 );
      v40 = 0.94999999;
      if ( dword_19154118C == 3 )
        v40 = 0.98000002;
      v41 = _mm_cvtsi32_si128(dword_16D67D5EC[v2]);
      dword_1961996A0[2 * v6] -= a2;
      dword_16D67D62C[v2] = v5 - a2;
      result = (unsigned int)(int)(float)((float)((float)(v40 * v8) * (float)a2) + _mm_cvtepi32_ps(v41).m128_f32[0]);
      dword_16D67D5EC[v2] = result;
    }
  }
  return result;
}

