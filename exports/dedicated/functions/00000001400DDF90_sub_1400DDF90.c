/* Address: 0x1400ddf90 | Name: sub_1400DDF90 | Size: 1807 bytes */
unsigned __int8 *__fastcall sub_1400DDF90(__int64 a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // esi
  int v7; // r12d
  int v8; // r15d
  int v9; // ebp
  int v10; // eax
  char *v11; // rbx
  int v13; // eax
  __int64 v14; // rdi
  int v15; // r13d
  int v16; // esi
  int v17; // r12d
  int v18; // r15d
  int v19; // r10d
  __int64 v20; // rcx
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i v23; // xmm0
  __m128i v24; // xmm2
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm3
  int v28; // r8d
  int v29; // r9d
  int v30; // eax
  int v31; // edx
  int v32; // eax
  _BYTE *v33; // rax
  _BYTE *v34; // rsi
  void *v35; // r15
  size_t v36; // rbp
  int v37; // ebx
  unsigned __int8 *v38; // rax
  unsigned __int8 *v39; // r14
  int *v40; // r13
  __int64 v41; // r9
  unsigned int v42; // edx
  unsigned int v43; // r8d
  unsigned int v44; // edx
  unsigned int v45; // r8d
  unsigned int v46; // edx
  unsigned int v47; // r8d
  unsigned int v48; // edx
  unsigned int v49; // r8d
  unsigned int v50; // edx
  unsigned int v51; // r8d
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // edx
  unsigned int v55; // r8d
  unsigned int v56; // edx
  unsigned int v57; // r8d
  unsigned int v58; // edx
  int v59; // r8d
  size_t v60; // rbx
  unsigned int v61; // r8d
  unsigned __int64 v62; // rdx
  int v63; // edx
  int v64; // r8d
  unsigned int v65; // r8d
  unsigned int v66; // edx
  int v67; // r8d
  int v69; // [rsp+44h] [rbp-B4h]
  int v71; // [rsp+50h] [rbp-A8h] BYREF
  int v72; // [rsp+54h] [rbp-A4h]
  int v73[2]; // [rsp+58h] [rbp-A0h]
  _BYTE *v74; // [rsp+60h] [rbp-98h]
  void *Block; // [rsp+68h] [rbp-90h]
  __int64 v76; // [rsp+70h] [rbp-88h]
  int *v77; // [rsp+78h] [rbp-80h]
  __m128i si128; // [rsp+80h] [rbp-78h]
  int v79; // [rsp+90h] [rbp-68h]
  __int64 v80; // [rsp+98h] [rbp-60h]

  v6 = a5;
  v7 = a3;
  v8 = a2;
  v9 = a3 * a5;
  v77 = a6;
  v10 = dword_140146A24;
  v69 = a2;
  *(_QWORD *)v73 = a1;
  v79 = 6;
  v80 = 0xA1A0A0D474E5089LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1400F79A0);
  if ( !a2 )
  {
    v8 = a3 * a5;
    v69 = a3 * a5;
  }
  if ( dword_140146A24 >= 5 )
    v10 = -1;
  v71 = v10;
  v72 = a4 * (v9 + 1);
  Block = malloc(v72);
  if ( !Block )
    return nullptr;
  v11 = (char *)malloc(v9);
  if ( !v11 )
  {
    free(Block);
    return nullptr;
  }
  v13 = a4;
  v14 = 0;
  v15 = 0;
  if ( a4 > 0 )
  {
    v76 = v9 + 1;
    v74 = Block;
    do
    {
      if ( v71 <= -1 )
      {
        v17 = 0;
        v18 = 0x7FFFFFFF;
        v16 = 0;
        do
        {
          sub_1400E0080(v73[0], v69, a3, v13, v15, a5, v16, v11);
          v19 = 0;
          v20 = 0;
          if ( v9 >= 8 && dword_140148180 >= 2 )
          {
            v21 = 0;
            v22 = 0;
            do
            {
              v23 = _mm_cvtsi32_si128(*(_DWORD *)&v11[v20 + 4]);
              v24 = _mm_add_epi32(_mm_abs_epi32(_mm_cvtepi8_epi32(_mm_cvtsi32_si128(*(_DWORD *)&v11[v20]))), v21);
              v20 += 8;
              v21 = v24;
              v25 = _mm_add_epi32(_mm_abs_epi32(_mm_cvtepi8_epi32(v23)), v22);
              v22 = v25;
            }
            while ( v20 < (int)(v9 - (v9 & 0x80000007)) );
            v26 = _mm_add_epi32(v21, v25);
            v27 = _mm_add_epi32(v26, _mm_srli_si128(v26, 8));
            v19 = _mm_cvtsi128_si32(_mm_add_epi32(v27, _mm_srli_si128(v27, 4)));
          }
          v28 = 0;
          v29 = 0;
          if ( v20 < v9 )
          {
            if ( v9 - v20 < 2 )
              goto LABEL_23;
            do
            {
              v28 += abs8(v11[v20]);
              v30 = v11[v20 + 1];
              v31 = (unsigned __int64)v11[v20 + 1] >> 32;
              v20 += 2;
              v29 += (v31 ^ v30) - v31;
            }
            while ( v20 < v9 - 1LL );
            if ( v20 < v9 )
LABEL_23:
              v19 += abs8(v11[v20]);
            v19 += v29 + v28;
          }
          v32 = v16;
          if ( v19 >= v18 )
            v32 = v17;
          ++v16;
          v17 = v32;
          v13 = a4;
          if ( v19 >= v18 )
            v19 = v18;
          v18 = v19;
        }
        while ( v16 < 5 );
        v8 = v69;
        if ( v16 != v17 )
        {
          sub_1400E0080(v73[0], v69, a3, a4, v15, a5, v17, v11);
          LOBYTE(v16) = v17;
        }
        v7 = a3;
      }
      else
      {
        LOBYTE(v16) = v71;
        sub_1400E0080(v73[0], v8, v7, v13, v15, a5, v71, v11);
      }
      v33 = v74;
      *v74 = v16;
      v34 = v33;
      memcpy(v33 + 1, v11, v9);
      ++v15;
      v13 = a4;
      v74 = &v34[v76];
    }
    while ( v15 < a4 );
    v6 = a5;
  }
  free(v11);
  v35 = (void *)sub_1400DEC80(Block, (unsigned int)v72, &v71, (unsigned int)dword_140146A14);
  free(Block);
  if ( !v35 )
    return nullptr;
  v36 = v71;
  v37 = v71 + 57;
  v38 = (unsigned __int8 *)malloc(v71 + 57);
  v39 = v38;
  if ( !v38 )
    return nullptr;
  *(_QWORD *)v38 = v80;
  v40 = v77;
  v38[16] = HIBYTE(v7);
  v38[17] = BYTE2(v7);
  v38[18] = BYTE1(v7);
  v38[20] = HIBYTE(a4);
  v38[21] = BYTE2(a4);
  v38[22] = BYTE1(a4);
  v38[23] = a4;
  v38[19] = v7;
  *((_DWORD *)v38 + 2) = 218103808;
  *((_DWORD *)v38 + 3) = 1380206665;
  v38[24] = 8;
  *((_WORD *)v38 + 13) = 0;
  v38[28] = 0;
  *v40 = v37;
  v41 = si128.m128i_u8[4 * v6];
  v38[25] = v41;
  v42 = ((dword_140147D00[(unsigned __int8)~v38[12]] ^ 0xFFFFFFu) >> 8)
      ^ dword_140147D00[v38[13] ^ (unsigned __int64)(unsigned __int8)~LOBYTE(dword_140147D00[(unsigned __int8)~v38[12]])];
  v43 = (v42 >> 8) ^ dword_140147D00[v38[14] ^ (unsigned __int64)(unsigned __int8)v42];
  v44 = (v43 >> 8) ^ dword_140147D00[v38[15] ^ (unsigned __int64)(unsigned __int8)v43];
  v45 = (v44 >> 8) ^ dword_140147D00[v38[16] ^ (unsigned __int64)(unsigned __int8)v44];
  v46 = (v45 >> 8) ^ dword_140147D00[v38[17] ^ (unsigned __int64)(unsigned __int8)v45];
  v47 = (v46 >> 8) ^ dword_140147D00[v38[18] ^ (unsigned __int64)(unsigned __int8)v46];
  v48 = (v47 >> 8) ^ dword_140147D00[v38[19] ^ (unsigned __int64)(unsigned __int8)v47];
  v49 = (v48 >> 8) ^ dword_140147D00[v38[20] ^ (unsigned __int64)(unsigned __int8)v48];
  v50 = (v49 >> 8) ^ dword_140147D00[v38[21] ^ (unsigned __int64)(unsigned __int8)v49];
  v51 = (v50 >> 8) ^ dword_140147D00[v38[22] ^ (unsigned __int64)(unsigned __int8)v50];
  v52 = v38[23] ^ (unsigned __int64)(unsigned __int8)v51;
  v53 = v38[24];
  v39[36] = v36;
  *(_DWORD *)(v39 + 37) = 1413563465;
  v54 = (v51 >> 8) ^ dword_140147D00[v52];
  v55 = (v54 >> 8) ^ dword_140147D00[v53 ^ (unsigned __int8)v54];
  v56 = (v55 >> 8) ^ dword_140147D00[v41 ^ (unsigned __int8)v55];
  v57 = (v56 >> 8) ^ dword_140147D00[(unsigned __int8)v56];
  v58 = (v57 >> 8) ^ dword_140147D00[(unsigned __int8)v57];
  v59 = ~((v58 >> 8) ^ dword_140147D00[(unsigned __int8)v58]);
  v39[32] = v59;
  v39[29] = HIBYTE(v59);
  v39[30] = BYTE2(v59);
  v39[31] = BYTE1(v59);
  v39[33] = BYTE3(v36);
  v39[34] = BYTE2(v36);
  v39[35] = BYTE1(v36);
  memcpy(v39 + 41, v35, v36);
  v60 = (size_t)&v39[v36 + 41];
  free(v35);
  v61 = -1;
  if ( (int)v36 + 4 > 0 )
  {
    do
    {
      v62 = v39[v14 + 37];
      ++v14;
      v61 = (v61 >> 8) ^ dword_140147D00[(unsigned __int8)v61 ^ v62];
    }
    while ( v14 < (int)v36 + 4 );
  }
  v63 = dword_140147FD8;
  v64 = ~v61;
  *(_BYTE *)(v60 + 3) = v64;
  *(_BYTE *)v60 = HIBYTE(v64);
  *(_BYTE *)(v60 + 1) = BYTE2(v64);
  *(_BYTE *)(v60 + 2) = BYTE1(v64);
  *(_DWORD *)(v60 + 4) = 0;
  *(_DWORD *)(v60 + 8) = 1145980233;
  v65 = ((v63 ^ 0xFFFFFFu) >> 8)
      ^ dword_140147D00[*(unsigned __int8 *)(v60 + 9) ^ (unsigned __int64)(unsigned __int8)~(_BYTE)v63];
  v66 = (v65 >> 8) ^ dword_140147D00[*(unsigned __int8 *)(v60 + 10) ^ (unsigned __int64)(unsigned __int8)v65];
  v67 = ~((v66 >> 8) ^ dword_140147D00[*(unsigned __int8 *)(v60 + 11) ^ (unsigned __int64)(unsigned __int8)v66]);
  *(_BYTE *)(v60 + 15) = v67;
  *(_BYTE *)(v60 + 12) = HIBYTE(v67);
  *(_BYTE *)(v60 + 14) = BYTE1(v67);
  *(_BYTE *)(v60 + 13) = BYTE2(v67);
  if ( (unsigned __int8 *)(v60 + 16) != &v39[*v40] )
    _wassert(L"o == out + *out_len", L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x49Bu);
  return v39;
}

