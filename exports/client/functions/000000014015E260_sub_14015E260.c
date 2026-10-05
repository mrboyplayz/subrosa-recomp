/* Address: 0x14015e260 | Name: sub_14015E260 | Size: 911 bytes */
__int64 __fastcall sub_14015E260(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r14d
  int *v9; // rcx
  int v10; // r11d
  int v11; // edi
  int v12; // r8d
  int v13; // ecx
  int v14; // ecx
  void *v15; // rax
  int v16; // r10d
  __int64 v17; // r15
  int *v18; // r8
  unsigned int v19; // r9d
  unsigned __int32 v20; // ecx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // r12
  unsigned int v24; // r9d
  int v25; // ecx
  signed int v26; // esi
  unsigned int v27; // ebx
  signed int v28; // r14d
  int v29; // ecx
  int v30; // eax
  int v31; // esi
  int v32; // r8d
  int v33; // ebx
  __int64 v35; // [rsp+0h] [rbp-100h] BYREF
  int v36; // [rsp+40h] [rbp-C0h]
  signed int v37; // [rsp+44h] [rbp-BCh]
  int v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+4Ch] [rbp-B4h]
  void *Block; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+58h] [rbp-A8h]
  unsigned int v42; // [rsp+5Ch] [rbp-A4h]
  int v43; // [rsp+60h] [rbp-A0h]
  unsigned int v44; // [rsp+64h] [rbp-9Ch]
  int v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+6Ch] [rbp-94h]
  unsigned int v47; // [rsp+70h] [rbp-90h]
  signed int v48; // [rsp+74h] [rbp-8Ch]
  int v49; // [rsp+78h] [rbp-88h]
  unsigned int v50; // [rsp+7Ch] [rbp-84h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __m128i v53; // [rsp+90h] [rbp-70h]
  int v54; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+A4h] [rbp-5Ch]
  int v56; // [rsp+A8h] [rbp-58h]
  __m128i si128; // [rsp+B0h] [rbp-50h]
  int v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C4h] [rbp-3Ch]
  __m128i v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E4h] [rbp-1Ch]
  int v63; // [rsp+E8h] [rbp-18h]
  __m128i v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+108h] [rbp+8h]
  __int64 v67; // [rsp+110h] [rbp+10h]

  v51 = a2;
  v41 = a4;
  v7 = a2;
  v36 = a3;
  v9 = *(int **)a1;
  v10 = a3;
  v11 = a4 * ((a5 == 16) + 1);
  if ( a7 )
  {
    v12 = v9[1];
    v13 = *v9;
    if ( v13 < 0
      || v12 < 0
      || v12 && v13 > 0x7FFFFFFF / v12
      || (v14 = v12 * v13, v14 < 0)
      || v11 < 0
      || v11 && v14 > 0x7FFFFFFF / v11 )
    {
      Block = nullptr;
    }
    else
    {
      v15 = (void *)j__malloc_base(v11 * v14);
      v10 = v36;
      Block = v15;
    }
    v16 = 0;
    v39 = 0;
    v17 = 0;
    v52 = 0;
    while ( 1 )
    {
      v18 = *(int **)a1;
      si128 = _mm_load_si128((const __m128i *)&xmmword_140278F00);
      v54 = 2;
      v64 = _mm_load_si128((const __m128i *)&xmmword_140278E00);
      v55 = 2;
      v53 = _mm_load_si128((const __m128i *)&xmmword_140278F70);
      v56 = 1;
      v19 = *(unsigned __int32 *)((char *)v53.m128i_u32 + v17);
      v58 = 0;
      v59 = 1;
      v20 = v19 - *(__int32 *)((char *)si128.m128i_i32 + v17);
      v45 = *(__int32 *)((char *)si128.m128i_i32 + v17);
      v21 = *v18 - 1;
      v61 = 4;
      v62 = 2;
      v22 = (v20 + v21) / v19;
      v60 = _mm_load_si128((const __m128i *)&xmmword_140278F90);
      v23 = v22;
      v63 = 2;
      v44 = v19;
      v24 = *(unsigned __int32 *)((char *)v60.m128i_u32 + v17);
      v47 = v22;
      v65 = 2;
      v66 = 1;
      v42 = v24;
      if ( v22 )
      {
        v25 = v18[1] - *(__int32 *)((char *)v64.m128i_i32 + v17);
        v43 = *(__int32 *)((char *)v64.m128i_i32 + v17);
        v48 = (v25 + v24 - 1) / v24;
        v26 = v48;
        if ( v48 )
        {
          v27 = v48 * (((int)(a5 * v22 * v18[2] + 7) >> 3) + 1);
          v50 = v27;
          if ( !(unsigned int)sub_14015E5F0(a1, v7, v10, v41, v22, v48, a5, a6) )
          {
            free(Block);
            return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v67);
          }
          v28 = 0;
          v37 = 0;
          if ( v48 > 0 )
          {
            v29 = 0;
            v30 = v11 * v23;
            v38 = 0;
            v49 = v11 * v23;
            do
            {
              if ( (int)v23 > 0 )
              {
                v31 = v29;
                v32 = v43 + v28 * v42;
                v46 = v32;
                v33 = v11 * v45;
                do
                {
                  MEMORY[0x1401FC920](
                    (char *)Block + (unsigned int)(v11 * v32 * **(_DWORD **)a1) + v33,
                    *(_QWORD *)(a1 + 24) + v31);
                  v32 = v46;
                  v31 += v11;
                  v33 += v11 * v44;
                  --v23;
                }
                while ( v23 );
                v28 = v37;
                v29 = v38;
                v23 = v47;
                v26 = v48;
                v30 = v49;
              }
              ++v28;
              v29 += v30;
              v37 = v28;
              v38 = v29;
            }
            while ( v28 < v26 );
            v27 = v50;
            v17 = v52;
          }
          free(*(void **)(a1 + 24));
          v10 = v36 - v27;
          v16 = v39;
          v7 = v27 + v51;
          v36 -= v27;
          v51 += v27;
        }
      }
      ++v16;
      v17 += 4;
      v39 = v16;
      v52 = v17;
      if ( v16 >= 7 )
      {
        *(_QWORD *)(a1 + 24) = Block;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v67);
      }
    }
  }
  sub_14015E5F0(a1, a2, a3, a4, *v9, v9[1], a5, a6);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v67);
}

