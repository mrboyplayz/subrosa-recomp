/* Address: 0x140079140 | Name: ui_reload_mouse_texture_candidate | Size: 1790 bytes */
__int64 __fastcall ui_reload_mouse_texture_candidate(unsigned int a1, const char *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // ebx
  __int64 v6; // rsi
  int v7; // r8d
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdi
  void *v14; // rcx
  __int64 v15; // rax
  int v16; // r9d
  int v17; // ecx
  int i; // r8d
  char *v19; // r10
  float *v20; // r11
  _DWORD *v21; // rbx
  float *v22; // r9
  int v23; // r8d
  unsigned int v24; // eax
  float v25; // xmm1_4
  unsigned int v26; // ecx
  int v27; // edx
  float v28; // xmm2_4
  float v29; // xmm0_4
  __m128i v30; // xmm0
  unsigned int v31; // eax
  int v32; // r8d
  float v33; // xmm1_4
  float v34; // xmm2_4
  __m128i v35; // xmm0
  int v36; // ecx
  __m128i v37; // xmm0
  int v38; // eax
  float v39; // xmm1_4
  float v40; // xmm1_4
  __m128i v41; // xmm0
  unsigned int v42; // eax
  int v43; // r8d
  int v44; // ecx
  int v45; // edx
  __m128i v46; // xmm0
  int v47; // eax
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  __int64 v52; // [rsp+0h] [rbp-A08h] BYREF
  _BYTE v53[2]; // [rsp+50h] [rbp-9B8h] BYREF
  char v54; // [rsp+52h] [rbp-9B6h] BYREF
  _BYTE v55[512]; // [rsp+7D0h] [rbp-238h] BYREF
  __int64 v56; // [rsp+9D0h] [rbp-38h]

  v2 = (int)a1;
  if ( a1 <= 0x3F )
  {
    sub_140158AB0(v55, "font/%s.ttf", a2);
    v3 = MEMORY[0x14020B8D8](v55, "rb");
    v4 = v3;
    if ( v3 )
    {
      fread(&MEMORY[0x18406CD00], 1, 0x100000, v3);
      sub_14020B9E8(v4);
      v5 = 512;
      v6 = 32;
      sub_140177E50(
        (unsigned int)&MEMORY[0x18406CD00],
        0,
        v7,
        (unsigned int)MEMORY[0x18402CCC0],
        512,
        512,
        32,
        96,
        (__int64)v53);
      v8 = 512;
      MEMORY[0x1B0037420] = 512;
      v9 = 0;
      MEMORY[0x1B0037424] = 512;
      do
      {
        v10 = 0;
        if ( v5 > 0 )
        {
          do
          {
            v11 = MEMORY[0x18402CCC0][v10 + v5 * (v8 - v9 - 1)];
            v12 = v10 + v9 * v5;
            ++v10;
            MEMORY[0x1B0037428][v12] = (v11 << 24) + 0xFFFFFF;
            v5 = MEMORY[0x1B0037420];
            v8 = MEMORY[0x1B0037424];
          }
          while ( v10 < MEMORY[0x1B0037420] );
        }
        ++v9;
      }
      while ( v9 < v8 );
      v13 = 14368 * v2;
      *(_DWORD *)((char *)&MEMORY[0x1519A4070] + v13) = v8;
      v14 = *(void **)((char *)&MEMORY[0x1519A4078] + v13);
      *(_DWORD *)((char *)&MEMORY[0x1519A406C] + v13) = v5;
      free(v14);
      v15 = j__malloc_base(4 * *(_DWORD *)((char *)&MEMORY[0x1519A406C] + v13)
                             * *(_DWORD *)((char *)&MEMORY[0x1519A4070] + v13));
      v16 = 0;
      for ( *(_QWORD *)((char *)&MEMORY[0x1519A4078] + v13) = v15;
            v16 < *(_DWORD *)((char *)&MEMORY[0x1519A4070] + v13);
            ++v16 )
      {
        v17 = *(_DWORD *)((char *)&MEMORY[0x1519A406C] + v13);
        for ( i = 0; i < v17; ++i )
        {
          if ( v16 >= *(int *)((char *)&MEMORY[0x1519A4070] + v13) >> 4 || i >= v17 >> 4 )
            *(_DWORD *)(*(_QWORD *)((char *)&MEMORY[0x1519A4078] + v13) + 4LL * (i + v16 * v17)) = MEMORY[0x1B0037428][i + v16 * v17];
          else
            *(_DWORD *)(*(_QWORD *)((char *)&MEMORY[0x1519A4078] + v13) + 4LL * (i + v16 * v17)) = -1;
          v17 = *(_DWORD *)((char *)&MEMORY[0x1519A406C] + v13);
        }
      }
      unk_140404060(1, (char *)&MEMORY[0x1519A4064] + v13);
      unk_140404050(3553, *(unsigned int *)((char *)&MEMORY[0x1519A4064] + v13));
      MEMORY[0x144980D00](3553, 10242, 33071);
      MEMORY[0x144980D00](3553, 10243, 33071);
      MEMORY[0x144980D00](3553, 10240, 9729);
      MEMORY[0x144980D00](3553, 10241, 9729);
      MEMORY[0x144980D18](
        3553,
        0,
        6408,
        *(unsigned int *)((char *)&MEMORY[0x1519A406C] + v13),
        *(_DWORD *)((char *)&MEMORY[0x1519A4070] + v13),
        0,
        6408,
        5121,
        *(_QWORD *)((char *)&MEMORY[0x1519A4078] + v13));
      v19 = &v54;
      v20 = (float *)((char *)&MEMORY[0x1519A6A94] + v13);
      v21 = (_DWORD *)((char *)&MEMORY[0x1519A4108] + v13);
      v22 = (float *)((char *)&MEMORY[0x1519A48A4] + v13);
      do
      {
        v23 = *(unsigned __int16 *)v19;
        v24 = *((unsigned __int16 *)v19 + 2);
        v25 = 1.0 - (float)((float)v23 * 0.001953125);
        v26 = *((unsigned __int16 *)v19 + 1) - *((unsigned __int16 *)v19 - 1);
        v27 = *((unsigned __int16 *)v19 + 9);
        v28 = (float)*((unsigned __int16 *)v19 - 1) * 0.001953125;
        v29 = (float)*((unsigned __int16 *)v19 + 1) * 0.001953125;
        *(v22 - 8) = v25;
        *(v22 - 6) = v25;
        *(v22 - 7) = v29;
        *(v22 - 5) = v29;
        *(v22 - 9) = v28;
        *(v22 - 3) = v28;
        v30 = _mm_cvtsi32_si128(v24);
        v31 = v24 - v23;
        v32 = *((unsigned __int16 *)v19 + 10);
        v33 = 1.0 - (float)(_mm_cvtepi32_ps(v30).m128_f32[0] * 0.001953125);
        *(float *)v30.m128i_i32 = *(float *)(v19 + 14) * 0.07692308;
        v34 = (float)v27 * 0.001953125;
        *(v22 - 4) = v33;
        *(v22 - 2) = v33;
        *(v21 - 2) = v30.m128i_i32[0];
        v35 = _mm_cvtsi32_si128(v26);
        v36 = *((unsigned __int16 *)v19 + 11);
        *(v20 - 3) = *(float *)(v19 + 6) * 0.07692308;
        *(v20 - 5) = _mm_cvtepi32_ps(v35).m128_f32[0] * 0.07692308;
        v37 = _mm_cvtsi32_si128(v31);
        v38 = *((unsigned __int16 *)v19 + 12);
        *(v20 - 4) = _mm_cvtepi32_ps(v37).m128_f32[0] * 0.07692308;
        *(v20 - 2) = (float)(*(float *)(v19 + 10) * 0.07692308) + 0.75;
        *(v22 - 1) = v34;
        v22[5] = v34;
        v39 = 1.0 - (float)((float)v32 * 0.001953125);
        *v22 = v39;
        *(float *)v37.m128i_i32 = (float)v36 * 0.001953125;
        v22[2] = v39;
        v22[1] = *(float *)v37.m128i_i32;
        v22[3] = *(float *)v37.m128i_i32;
        v40 = 1.0 - (float)((float)v38 * 0.001953125);
        *(float *)v37.m128i_i32 = *(float *)(v19 + 34) * 0.07692308;
        v22[4] = v40;
        v22[6] = v40;
        *(v21 - 1) = v37.m128i_i32[0];
        v41 = _mm_cvtsi32_si128(v36 - v27);
        v42 = v38 - v32;
        v43 = *((unsigned __int16 *)v19 + 20);
        v44 = *((unsigned __int16 *)v19 + 21);
        v45 = *((unsigned __int16 *)v19 + 19);
        v20[1] = *(float *)(v19 + 26) * 0.07692308;
        *(v20 - 1) = _mm_cvtepi32_ps(v41).m128_f32[0] * 0.07692308;
        v46 = _mm_cvtsi32_si128(v42);
        v47 = *((unsigned __int16 *)v19 + 22);
        v48 = (float)v45 * 0.001953125;
        *v20 = _mm_cvtepi32_ps(v46).m128_f32[0] * 0.07692308;
        v20[2] = (float)(*(float *)(v19 + 30) * 0.07692308) + 0.75;
        v22[7] = v48;
        v22[13] = v48;
        v49 = 1.0 - (float)((float)v43 * 0.001953125);
        v22[8] = v49;
        *(float *)v46.m128i_i32 = (float)v44 * 0.001953125;
        v22[10] = v49;
        v22[9] = *(float *)v46.m128i_i32;
        v22[11] = *(float *)v46.m128i_i32;
        *(float *)v46.m128i_i32 = *(float *)(v19 + 54) * 0.07692308;
        v22[12] = 1.0 - (float)((float)v47 * 0.001953125);
        v22[14] = 1.0 - (float)((float)v47 * 0.001953125);
        v22 += 24;
        v50 = *(float *)(v19 + 46);
        *v21 = v46.m128i_i32[0];
        v21 += 3;
        v20[5] = v50 * 0.07692308;
        v20[3] = (float)(v44 - v45) * 0.07692308;
        v20[4] = (float)(v47 - v43) * 0.07692308;
        v46.m128i_i32[0] = *(_DWORD *)(v19 + 50);
        v19 += 60;
        v20[6] = (float)(*(float *)v46.m128i_i32 * 0.07692308) + 0.75;
        v20 += 12;
        --v6;
      }
      while ( v6 );
      unk_140404060(1, (char *)&MEMORY[0x1519A4068] + v13);
      if ( (unsigned int)sub_140079840("texture/mouse01.png") )
      {
        unk_140404050(3553, *(unsigned int *)((char *)&MEMORY[0x1519A4068] + v13));
        MEMORY[0x144980D00](3553, 10242, 33071);
        MEMORY[0x144980D00](3553, 10243, 33071);
        MEMORY[0x144980D00](3553, 10240, 9729);
        MEMORY[0x144980D00](3553, 10241, 9729);
        MEMORY[0x144980D18](
          3553,
          0,
          6408,
          (unsigned int)MEMORY[0x1B0037420],
          MEMORY[0x1B0037424],
          0,
          6408,
          5121,
          MEMORY[0x1B0037428]);
      }
      *(_DWORD *)((char *)&MEMORY[0x1519A4060] + v13) = 1;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v52 ^ v56);
}

