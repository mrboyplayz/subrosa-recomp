/* Address: 0x140165c60 | Name: sub_140165C60 | Size: 876 bytes */
__int64 __fastcall sub_140165C60(char *Block, int a2, int a3, int a4)
{
  __int64 v4; // r15
  char *v5; // r12
  int v7; // ebp
  int v8; // eax
  __int64 v9; // r13
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rcx
  float v13; // xmm7_4
  __int64 v14; // rax
  char *v15; // rsi
  float v16; // xmm8_4
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rdi
  double v22; // xmm0_8
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r11
  char *v27; // r8
  __int64 v28; // rcx
  float *v29; // r9
  unsigned int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // eax
  float v33; // xmm1_4
  __m128i v34; // xmm0
  int v35; // eax
  int v36; // eax
  float *v37; // r8
  char *v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // [rsp+20h] [rbp-88h]
  __int64 v42; // [rsp+38h] [rbp-70h]

  v4 = a4;
  v5 = Block;
  if ( !Block )
    return 0;
  if ( a2 < 0
    || a3 < 0
    || a3 && a2 > (int)(0x7FFFFFFFu / a3)
    || (v7 = a3 * a2, a3 * a2 < 0)
    || a4 < 0
    || a4 && v7 > (int)(0x7FFFFFFFu / a4)
    || (v8 = a4 * v7, a4 * v7 < 0)
    || v8 > 0x1FFFFFFF
    || (v42 = j__malloc_base(4 * v8), (v9 = v42) == 0) )
  {
    free(v5);
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
    return 0;
  }
  else
  {
    v10 = v4;
    if ( (v4 & 1) == 0 )
      v10 = v4 - 1;
    v11 = 0;
    v41 = v10;
    if ( v7 > 0 )
    {
      v12 = 4 * v4;
      v13 = *(float *)&dword_140301838;
      v14 = v4;
      v15 = v5;
      v16 = *(float *)&dword_14030183C;
      v17 = v42;
      v18 = (unsigned int)v7;
      v19 = v10;
      do
      {
        if ( v19 > 0 )
        {
          v20 = 0;
          v21 = v17;
          do
          {
            v22 = pow((float)((float)(unsigned __int8)v15[v20] * 0.0039215689), v13);
            v21 += 4;
            ++v20;
            *(float *)&v22 = v22 * v16;
            *(_DWORD *)(v21 - 4) = LODWORD(v22);
          }
          while ( v20 < v19 );
          v14 = v4;
          v12 = 4 * v4;
        }
        v17 += v12;
        v15 += v14;
        --v18;
      }
      while ( v18 );
      LODWORD(v4) = a4;
      v11 = 0;
      v10 = v41;
      v5 = Block;
      v9 = v42;
    }
    if ( v10 < (int)v4 )
    {
      if ( v7 >= 4 )
      {
        v23 = 4 * (int)v4;
        v24 = v10 + 2 * (int)v4;
        v25 = v10 + (int)v4 - v24;
        v26 = (int)v4 + v10 + 2 * (int)v4 - v24;
        v27 = &v5[v24];
        v28 = v10 - v24;
        v29 = (float *)(v9 + 4 * v24);
        v30 = ((unsigned int)(v7 - 4) >> 2) + 1;
        v31 = v30;
        v11 = 4 * v30;
        do
        {
          v32 = (unsigned __int8)*v27;
          v33 = (float)(unsigned __int8)v27[v25];
          v29[v28] = (float)(unsigned __int8)v27[v28] * 0.0039215689;
          v34 = _mm_cvtsi32_si128(v32);
          v35 = (unsigned __int8)v27[v26];
          v27 += v23;
          v29[v25] = v33 * 0.0039215689;
          *v29 = _mm_cvtepi32_ps(v34).m128_f32[0] * 0.0039215689;
          v29[v26] = (float)v35 * 0.0039215689;
          v29 += v23;
          --v31;
        }
        while ( v31 );
      }
      if ( v11 < v7 )
      {
        v36 = v10 + v4 * v11;
        v37 = (float *)(v9 + 4LL * v36);
        v38 = &v5[v36];
        v39 = (unsigned int)(v7 - v11);
        do
        {
          v40 = (unsigned __int8)*v38;
          v38 += (int)v4;
          *v37 = (float)v40 * 0.0039215689;
          v37 += (int)v4;
          --v39;
        }
        while ( v39 );
      }
    }
    free(v5);
    return v9;
  }
}

