/* Address: 0x14022f1f4 | Name: sub_14022F1F4 | Size: 1425 bytes */
void __fastcall sub_14022F1F4(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int *a3)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // r13d
  unsigned __int8 *v6; // r9
  unsigned int v7; // r11d
  unsigned __int64 v8; // r8
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // r12d
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  __int64 v22; // r11
  unsigned int v23; // r10d
  unsigned __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rbx
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  __m128i *v32; // rcx
  unsigned int v33; // r10d
  __int64 v34; // r9
  unsigned __int64 v35; // rcx
  bool v36; // cf
  __m128i *v37; // rdx
  unsigned int v38; // edi
  __m128i *v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // r10
  __int64 v42; // r12
  unsigned __int64 v43; // rbx
  unsigned int v44; // r8d
  __int64 v45; // rsi
  __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  __m128i *v52; // rcx
  int v53; // r13d
  unsigned int v54; // eax
  unsigned int v55; // r10d
  unsigned __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // r8
  unsigned __int64 v61; // rdx
  __int64 v62; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v63; // [rsp+20h] [rbp-E0h]
  unsigned int v64; // [rsp+24h] [rbp-DCh]
  int v65; // [rsp+28h] [rbp-D8h]
  unsigned int v66; // [rsp+2Ch] [rbp-D4h]
  __m128i *v67; // [rsp+30h] [rbp-D0h]
  __m128i *v68; // [rsp+38h] [rbp-C8h]
  unsigned int v69; // [rsp+40h] [rbp-C0h]
  __m128i v70; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v71; // [rsp+210h] [rbp+110h]
  __m128i Src[28]; // [rsp+214h] [rbp+114h] BYREF
  __int64 v73; // [rsp+3E0h] [rbp+2E0h]

  if ( a1 != a2 )
  {
    LODWORD(v3) = 0;
    v5 = 0;
    v6 = a1;
    do
    {
      if ( v5 == 9 )
      {
        v7 = *a3;
        if ( *a3 )
        {
          LODWORD(v8) = 0;
          v9 = 0;
          do
          {
            v10 = (unsigned int)v8 + 1000000000LL * a3[v9 + 1];
            a3[v9 + 1] = v10;
            v8 = HIDWORD(v10);
            v9 = (unsigned int)(v9 + 1);
          }
          while ( (_DWORD)v9 != v7 );
          if ( HIDWORD(v10) )
          {
            if ( *a3 >= 0x73 )
              *a3 = 0;
            else
              a3[++*a3] = HIDWORD(v10);
          }
        }
        if ( (_DWORD)v3 )
        {
          v11 = *a3;
          v12 = 0;
          if ( (_DWORD)v11 )
          {
            do
            {
              v13 = (unsigned int)v3 + (unsigned __int64)a3[v12 + 1];
              a3[v12 + 1] = v13;
              v11 = *a3;
              v12 = (unsigned int)(v12 + 1);
              v3 = HIDWORD(v13);
            }
            while ( (_DWORD)v12 != (_DWORD)v11 );
          }
          if ( (_DWORD)v3 )
          {
            if ( (unsigned int)v11 >= 0x73 )
            {
              *a3 = 0;
            }
            else
            {
              a3[v11 + 1] = v3;
              ++*a3;
            }
          }
        }
        LODWORD(v3) = 0;
        v5 = 0;
      }
      v14 = *v6;
      ++v5;
      ++v6;
      LODWORD(v3) = v14 + 10 * v3;
    }
    while ( v6 != a2 );
    if ( v5 )
    {
      v15 = v5 / 0xA;
      v66 = v5 / 0xA;
      v16 = v5 / 0xA;
      v64 = v5 / 0xA;
      if ( v5 / 0xA )
      {
        while ( 1 )
        {
          v17 = v16;
          if ( v16 > 0x26 )
            v17 = 38;
          v65 = v17;
          v18 = (unsigned int)(v17 - 1);
          v19 = (unsigned int)v18;
          v20 = (unsigned __int8)byte_1402855F3[4 * v18];
          v21 = 4LL * (unsigned __int8)byte_1402855F2[4 * v18];
          v71 = v20 + (unsigned __int8)byte_1402855F2[4 * v18];
          MEMORY[0x1401FCD30](Src, 0, v21);
          MEMORY[0x1401FC920](
            (__m128i *)((char *)Src + v21),
            (const __m128i *)((char *)&unk_140284CE0 + 4 * (unsigned __int16)word_1402855F0[2 * v19]),
            4 * v20);
          v22 = v71;
          if ( v71 <= 1 )
          {
            if ( !Src[0].m128i_i32[0] )
              goto LABEL_26;
            if ( Src[0].m128i_i32[0] == 1 )
              goto LABEL_82;
            v23 = *a3;
            if ( !*a3 )
              goto LABEL_82;
            LODWORD(v24) = 0;
            v25 = Src[0].m128i_u32[0];
            v26 = 0;
            do
            {
              v27 = (unsigned int)v24 + v25 * a3[v26 + 1];
              a3[v26 + 1] = v27;
              v24 = HIDWORD(v27);
              v26 = (unsigned int)(v26 + 1);
            }
            while ( (_DWORD)v26 != v23 );
            goto LABEL_31;
          }
          if ( *a3 > 1 )
          {
            v36 = v71 < *a3;
            v37 = Src;
            v38 = *a3;
            v39 = Src;
            if ( v71 >= *a3 )
              v37 = (__m128i *)(a3 + 1);
            else
              v38 = v71;
            if ( v71 < *a3 )
              v39 = (__m128i *)(a3 + 1);
            v68 = v37;
            v67 = v39;
            v63 = v38;
            if ( v36 )
              LODWORD(v22) = *a3;
            v40 = 0;
            v41 = 0;
            v69 = 0;
            if ( v38 )
            {
              while ( 1 )
              {
                v42 = v37->m128i_u32[v41];
                if ( (_DWORD)v42 )
                {
                  LODWORD(v43) = 0;
                  v44 = v41;
                  if ( (_DWORD)v22 )
                  {
                    do
                    {
                      if ( v44 == 115 )
                        break;
                      v45 = v44;
                      if ( v44 == v40 )
                      {
                        v70.m128i_i32[v44] = 0;
                        v69 = v44 + 1;
                      }
                      v46 = v44 - (unsigned int)v41;
                      ++v44;
                      v47 = (unsigned int)v43 + v70.m128i_u32[v45] + v42 * v67->m128i_u32[v46];
                      v70.m128i_i32[v45] = v47;
                      v43 = HIDWORD(v47);
                      v40 = v69;
                    }
                    while ( v44 - (_DWORD)v41 != (_DWORD)v22 );
                    if ( (_DWORD)v43 )
                    {
                      while ( v44 != 115 )
                      {
                        v48 = v44;
                        if ( v44 == v40 )
                        {
                          v70.m128i_i32[v44] = 0;
                          v69 = v44 + 1;
                        }
                        ++v44;
                        v49 = (unsigned int)v43 + (unsigned __int64)v70.m128i_u32[v48];
                        v70.m128i_i32[v48] = v49;
                        v40 = v69;
                        LODWORD(v43) = HIDWORD(v49);
                        if ( !HIDWORD(v49) )
                          goto LABEL_70;
                      }
LABEL_95:
                      *a3 = 0;
                      goto LABEL_96;
                    }
LABEL_70:
                    v38 = v63;
                  }
                  if ( v44 == 115 )
                    goto LABEL_95;
                  v37 = v68;
                }
                else if ( (_DWORD)v41 == v40 )
                {
                  v70.m128i_i32[v41] = 0;
                  v40 = v41 + 1;
                  v69 = v41 + 1;
                }
                v41 = (unsigned int)(v41 + 1);
                if ( (_DWORD)v41 == v38 )
                {
                  v16 = v64;
                  break;
                }
              }
            }
            v50 = 4LL * v40;
            *a3 = v40;
            if ( !v50 )
              goto LABEL_82;
            if ( a3 == (unsigned int *)-4LL )
            {
              *errno() = 22;
            }
            else
            {
              v52 = (__m128i *)(a3 + 1);
              if ( v50 <= 0x1CC )
              {
                MEMORY[0x1401FC920](v52, &v70, v50);
                goto LABEL_82;
              }
              MEMORY[0x1401FCD30](v52, 0, 0x1CCu);
              *errno() = 34;
            }
            sub_14024CF6C(v51);
            goto LABEL_82;
          }
          v29 = a3[1];
          v30 = 4LL * v71;
          *a3 = v71;
          if ( 4 * v22 )
          {
            if ( a3 == (unsigned int *)-4LL )
            {
              *errno() = 22;
LABEL_42:
              sub_14024CF6C(v31);
              goto LABEL_43;
            }
            v32 = (__m128i *)(a3 + 1);
            if ( v30 > 0x1CC )
            {
              MEMORY[0x1401FCD30](v32, 0, 0x1CCu);
              *errno() = 34;
              goto LABEL_42;
            }
            MEMORY[0x1401FC920](v32, Src, v30);
          }
LABEL_43:
          if ( !(_DWORD)v29 )
          {
LABEL_26:
            *a3 = 0;
LABEL_82:
            v28 = 1;
            goto LABEL_83;
          }
          if ( (_DWORD)v29 == 1 )
            goto LABEL_82;
          v33 = *a3;
          if ( !*a3 )
            goto LABEL_82;
          LODWORD(v24) = 0;
          v34 = 0;
          do
          {
            v35 = (unsigned int)v24 + v29 * a3[v34 + 1];
            a3[v34 + 1] = v35;
            v24 = HIDWORD(v35);
            v34 = (unsigned int)(v34 + 1);
          }
          while ( (_DWORD)v34 != v33 );
LABEL_31:
          if ( !(_DWORD)v24 )
            goto LABEL_82;
          if ( *a3 < 0x73 )
          {
            a3[++*a3] = v24;
            goto LABEL_82;
          }
          *a3 = 0;
          v28 = 0;
LABEL_83:
          if ( !v28 )
            goto LABEL_95;
          v16 -= v65;
          v64 = v16;
          if ( !v16 )
          {
            v15 = v66;
            break;
          }
        }
      }
      v53 = v5 - 10 * v15;
      if ( v53 )
      {
        v54 = dword_140285688[v53 - 1];
        if ( !v54 )
          goto LABEL_95;
        if ( v54 != 1 )
        {
          v55 = *a3;
          if ( *a3 )
          {
            LODWORD(v56) = 0;
            v57 = 0;
            do
            {
              v58 = (unsigned int)v56 + v54 * (unsigned __int64)a3[v57 + 1];
              a3[v57 + 1] = v58;
              v56 = HIDWORD(v58);
              v57 = (unsigned int)(v57 + 1);
            }
            while ( (_DWORD)v57 != v55 );
            if ( HIDWORD(v58) )
            {
              if ( *a3 >= 0x73 )
                goto LABEL_95;
              a3[++*a3] = HIDWORD(v58);
            }
          }
        }
      }
LABEL_96:
      if ( (_DWORD)v3 )
      {
        v59 = *a3;
        v60 = 0;
        if ( (_DWORD)v59 )
        {
          do
          {
            v61 = (unsigned int)v3 + (unsigned __int64)a3[v60 + 1];
            a3[v60 + 1] = v61;
            v60 = (unsigned int)(v60 + 1);
            v59 = *a3;
            LODWORD(v3) = HIDWORD(v61);
          }
          while ( (_DWORD)v60 != (_DWORD)v59 );
        }
        if ( (_DWORD)v3 )
        {
          if ( (unsigned int)v59 >= 0x73 )
          {
            *a3 = 0;
          }
          else
          {
            a3[v59 + 1] = v3;
            ++*a3;
          }
        }
      }
    }
    MEMORY[0x1401F8B20]((unsigned __int64)&v62 ^ v73);
  }
}

