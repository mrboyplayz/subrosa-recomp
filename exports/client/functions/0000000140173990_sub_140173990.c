/* Address: 0x140173990 | Name: sub_140173990 | Size: 1806 bytes */
__int64 __fastcall sub_140173990(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  int v6; // esi
  int v7; // r12d
  int v8; // r15d
  int v9; // ebp
  int v10; // eax
  _BYTE *v11; // rbx
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
  __int64 v36; // rbp
  int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r14
  int v40; // r9d
  int *v41; // r13
  __int64 v42; // r9
  unsigned int v43; // edx
  unsigned int v44; // r8d
  unsigned int v45; // edx
  unsigned int v46; // r8d
  unsigned int v47; // edx
  unsigned int v48; // r8d
  unsigned int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // edx
  unsigned int v52; // r8d
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // edx
  unsigned int v56; // r8d
  unsigned int v57; // edx
  unsigned int v58; // r8d
  unsigned int v59; // edx
  int v60; // r8d
  __int64 v61; // rbx
  unsigned int v62; // r8d
  unsigned __int64 v63; // rdx
  int v64; // edx
  int v65; // r8d
  unsigned int v66; // r8d
  unsigned int v67; // edx
  int v68; // r8d
  __int64 v69; // [rsp+0h] [rbp-F8h] BYREF
  int v70; // [rsp+40h] [rbp-B8h]
  int v71; // [rsp+44h] [rbp-B4h]
  int v72; // [rsp+48h] [rbp-B0h]
  int v73; // [rsp+4Ch] [rbp-ACh]
  int v74; // [rsp+50h] [rbp-A8h] BYREF
  int v75; // [rsp+54h] [rbp-A4h]
  __int64 v76; // [rsp+58h] [rbp-A0h]
  _BYTE *v77; // [rsp+60h] [rbp-98h]
  void *Block; // [rsp+68h] [rbp-90h]
  __int64 v79; // [rsp+70h] [rbp-88h]
  __int64 v80; // [rsp+78h] [rbp-80h]
  __m128i si128; // [rsp+80h] [rbp-78h]
  int v82; // [rsp+90h] [rbp-68h]
  __int64 v83; // [rsp+98h] [rbp-60h]
  __int64 v84; // [rsp+A0h] [rbp-58h]

  v6 = a5;
  v7 = a3;
  v8 = a2;
  v9 = a3 * a5;
  v80 = a6;
  v10 = dword_1402B2BD0;
  v70 = a4;
  v72 = a3;
  v71 = a2;
  v76 = a1;
  v73 = a5;
  v82 = 6;
  v83 = 0xA1A0A0D474E5089LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140278F30);
  if ( !a2 )
  {
    v8 = a3 * a5;
    v71 = a3 * a5;
  }
  if ( dword_1402B2BD0 >= 5 )
    v10 = -1;
  v74 = v10;
  v75 = a4 * (v9 + 1);
  Block = (void *)j__malloc_base(v75);
  if ( Block )
  {
    v11 = (_BYTE *)j__malloc_base(v9);
    if ( v11 )
    {
      v13 = v70;
      v14 = 0;
      v15 = 0;
      if ( v70 > 0 )
      {
        v79 = v9 + 1;
        v77 = Block;
        do
        {
          if ( v74 <= -1 )
          {
            v17 = 0;
            v18 = 0x7FFFFFFF;
            v16 = 0;
            do
            {
              sub_140175EB0(v76, v71, v72, v13, v15, v73, v16, (__int64)v11);
              v19 = 0;
              v20 = 0;
              if ( v9 >= 8 && dword_140302080 >= 2 )
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
                  v30 = (char)v11[v20 + 1];
                  v31 = (unsigned __int64)(char)v11[v20 + 1] >> 32;
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
              v13 = v70;
              if ( v19 >= v18 )
                v19 = v18;
              v18 = v19;
            }
            while ( v16 < 5 );
            v8 = v71;
            if ( v16 != v17 )
            {
              sub_140175EB0(v76, v71, v72, v70, v15, v73, v17, (__int64)v11);
              LOBYTE(v16) = v17;
            }
            v7 = v72;
          }
          else
          {
            LOBYTE(v16) = v74;
            sub_140175EB0(v76, v8, v7, v13, v15, v73, v74, (__int64)v11);
          }
          v33 = v77;
          *v77 = v16;
          v34 = v33;
          MEMORY[0x1401FC920](v33 + 1, v11);
          ++v15;
          v13 = v70;
          v77 = &v34[v79];
        }
        while ( v15 < v70 );
        v6 = v73;
      }
      free(v11);
      v35 = (void *)sub_140174680(Block, (unsigned int)v75, &v74, (unsigned int)dword_1402B2918);
      free(Block);
      if ( v35 )
      {
        v36 = v74;
        v37 = v74 + 57;
        v38 = j__malloc_base(v74 + 57);
        v39 = v38;
        if ( v38 )
        {
          v40 = v70;
          *(_QWORD *)v38 = v83;
          v41 = (int *)v80;
          *(_BYTE *)(v38 + 16) = HIBYTE(v7);
          *(_BYTE *)(v38 + 17) = BYTE2(v7);
          *(_BYTE *)(v38 + 18) = BYTE1(v7);
          *(_BYTE *)(v38 + 20) = HIBYTE(v40);
          *(_BYTE *)(v38 + 21) = BYTE2(v40);
          *(_BYTE *)(v38 + 22) = BYTE1(v40);
          *(_BYTE *)(v38 + 23) = v40;
          *(_BYTE *)(v38 + 19) = v7;
          *(_DWORD *)(v38 + 8) = 218103808;
          *(_DWORD *)(v38 + 12) = 1380206665;
          *(_BYTE *)(v38 + 24) = 8;
          *(_WORD *)(v38 + 26) = 0;
          *(_BYTE *)(v38 + 28) = 0;
          *v41 = v37;
          v42 = si128.m128i_u8[4 * v6];
          *(_BYTE *)(v38 + 25) = v42;
          v43 = ((dword_140301980[(unsigned __int8)~*(_BYTE *)(v38 + 12)] ^ 0xFFFFFFu) >> 8)
              ^ dword_140301980[*(unsigned __int8 *)(v38 + 13)
                              ^ (unsigned __int64)(unsigned __int8)~LOBYTE(dword_140301980[(unsigned __int8)~*(_BYTE *)(v38 + 12)])];
          v44 = (v43 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 14) ^ (unsigned __int64)(unsigned __int8)v43];
          v45 = (v44 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 15) ^ (unsigned __int64)(unsigned __int8)v44];
          v46 = (v45 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 16) ^ (unsigned __int64)(unsigned __int8)v45];
          v47 = (v46 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 17) ^ (unsigned __int64)(unsigned __int8)v46];
          v48 = (v47 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 18) ^ (unsigned __int64)(unsigned __int8)v47];
          v49 = (v48 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 19) ^ (unsigned __int64)(unsigned __int8)v48];
          v50 = (v49 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 20) ^ (unsigned __int64)(unsigned __int8)v49];
          v51 = (v50 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 21) ^ (unsigned __int64)(unsigned __int8)v50];
          v52 = (v51 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 22) ^ (unsigned __int64)(unsigned __int8)v51];
          v53 = *(unsigned __int8 *)(v38 + 23) ^ (unsigned __int64)(unsigned __int8)v52;
          v54 = *(unsigned __int8 *)(v38 + 24);
          *(_BYTE *)(v39 + 36) = v36;
          *(_DWORD *)(v39 + 37) = 1413563465;
          v55 = (v52 >> 8) ^ dword_140301980[v53];
          v56 = (v55 >> 8) ^ dword_140301980[v54 ^ (unsigned __int8)v55];
          v57 = (v56 >> 8) ^ dword_140301980[v42 ^ (unsigned __int8)v56];
          v58 = (v57 >> 8) ^ dword_140301980[(unsigned __int8)v57];
          v59 = (v58 >> 8) ^ dword_140301980[(unsigned __int8)v58];
          v60 = ~((v59 >> 8) ^ dword_140301980[(unsigned __int8)v59]);
          *(_BYTE *)(v39 + 32) = v60;
          *(_BYTE *)(v39 + 29) = HIBYTE(v60);
          *(_BYTE *)(v39 + 30) = BYTE2(v60);
          *(_BYTE *)(v39 + 31) = BYTE1(v60);
          *(_BYTE *)(v39 + 33) = BYTE3(v36);
          *(_BYTE *)(v39 + 34) = BYTE2(v36);
          *(_BYTE *)(v39 + 35) = BYTE1(v36);
          MEMORY[0x1401FC920](v39 + 41, v35);
          v61 = v36 + v39 + 41;
          free(v35);
          v62 = -1;
          if ( (int)v36 + 4 > 0 )
          {
            do
            {
              v63 = *(unsigned __int8 *)(v14 + v39 + 41 - 4);
              ++v14;
              v62 = (v62 >> 8) ^ dword_140301980[(unsigned __int8)v62 ^ v63];
            }
            while ( v14 < (int)v36 + 4 );
          }
          v64 = dword_140301C58;
          v65 = ~v62;
          *(_BYTE *)(v61 + 3) = v65;
          *(_BYTE *)v61 = HIBYTE(v65);
          *(_BYTE *)(v61 + 1) = BYTE2(v65);
          *(_BYTE *)(v61 + 2) = BYTE1(v65);
          *(_DWORD *)(v61 + 4) = 0;
          *(_DWORD *)(v61 + 8) = 1145980233;
          v66 = ((v64 ^ 0xFFFFFFu) >> 8)
              ^ dword_140301980[*(unsigned __int8 *)(v61 + 9) ^ (unsigned __int64)(unsigned __int8)~(_BYTE)v64];
          v67 = (v66 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v61 + 10) ^ (unsigned __int64)(unsigned __int8)v66];
          v68 = ~((v67 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v61 + 11) ^ (unsigned __int64)(unsigned __int8)v67]);
          *(_BYTE *)(v61 + 15) = v68;
          *(_BYTE *)(v61 + 12) = HIBYTE(v68);
          *(_BYTE *)(v61 + 14) = BYTE1(v68);
          *(_BYTE *)(v61 + 13) = BYTE2(v68);
          if ( v61 + 16 != v39 + *v41 )
            sub_14023E640(L"o == out + *out_len", L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 1179);
        }
      }
    }
    else
    {
      free(Block);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v69 ^ v84);
}

