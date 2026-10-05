/* Address: 0x140182ad0 | Name: sub_140182AD0 | Size: 3396 bytes */
__int64 __fastcall sub_140182AD0(__int64 a1, int a2, __int64 a3)
{
  int v4; // r15d
  int v5; // edi
  __m128i v6; // xmm1
  __m128i *v7; // rax
  float v8; // xmm13_4
  float v9; // xmm14_4
  __int64 v10; // r9
  float v11; // xmm15_4
  float v12; // xmm11_4
  float v13; // xmm10_4
  float v14; // xmm12_4
  float v15; // xmm9_4
  float v16; // xmm6_4
  int v17; // r13d
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // r14d
  int v23; // esi
  int v24; // esi
  __int32 v25; // ebx
  int v26; // r11d
  float v28; // xmm0_4
  float v29; // xmm1_4
  int v30; // esi
  float *v31; // rbx
  int v32; // r14d
  float *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // r11d
  float v38; // xmm5_4
  __int64 v39; // rax
  int v40; // esi
  float *v41; // rbx
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm4_4
  __int64 v45; // r14
  int v46; // ebx
  __int64 v47; // rax
  __m128i *v48; // rax
  unsigned __int8 v49; // al
  __int32 v50; // ecx
  __int64 v51; // rax
  int v52; // edx
  unsigned __int8 v53; // al
  unsigned int v54; // edx
  int v55; // eax
  int v56; // r8d
  __m128i v57; // xmm0
  char v58; // al
  float v59; // xmm6_4
  float v60; // xmm7_4
  float v61; // xmm2_4
  float v62; // xmm3_4
  float v63; // xmm3_4
  __int32 v64; // esi
  int v65; // ebx
  __int16 v66; // ax
  float v67; // xmm0_4
  unsigned __int8 v68; // al
  int v69; // ecx
  unsigned __int8 v70; // al
  __int64 v71; // rax
  int v72; // ecx
  unsigned __int8 v73; // al
  __int64 v74; // rax
  int v75; // ecx
  unsigned __int8 v76; // al
  __int64 v77; // rax
  __int64 v78; // [rsp+8h] [rbp-100h] BYREF
  float v79; // [rsp+30h] [rbp-D8h]
  float v80; // [rsp+38h] [rbp-D0h]
  int v81; // [rsp+48h] [rbp-C0h]
  __m128i v82; // [rsp+58h] [rbp-B0h] BYREF
  int v83; // [rsp+68h] [rbp-A0h]
  int v84; // [rsp+6Ch] [rbp-9Ch]
  __int64 v85; // [rsp+70h] [rbp-98h]
  __m128i v86; // [rsp+78h] [rbp-90h] BYREF
  int v87; // [rsp+88h] [rbp-80h]
  __int64 v88; // [rsp+90h] [rbp-78h]
  __int128 v89; // [rsp+98h] [rbp-70h] BYREF
  __int128 v90; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v91; // [rsp+B8h] [rbp-50h] BYREF
  float v92; // [rsp+C8h] [rbp-40h]
  float v93; // [rsp+CCh] [rbp-3Ch]
  float v94; // [rsp+D0h] [rbp-38h] BYREF
  float v95; // [rsp+D4h] [rbp-34h]
  float v96; // [rsp+D8h] [rbp-30h] BYREF
  float v97; // [rsp+DCh] [rbp-2Ch]
  float v98; // [rsp+E0h] [rbp-28h]
  float v99; // [rsp+E4h] [rbp-24h]
  float v100; // [rsp+E8h] [rbp-20h]
  float v101; // [rsp+ECh] [rbp-1Ch]
  float v102; // [rsp+F0h] [rbp-18h]
  float v103; // [rsp+F4h] [rbp-14h]
  __m128i v104[10]; // [rsp+188h] [rbp+80h]
  __int64 v105; // [rsp+228h] [rbp+120h]

  v88 = a1;
  v87 = a2;
  v83 = 0;
  v4 = 0;
  v85 = 0;
  v5 = 0;
  v6 = *(__m128i *)(a1 + 80);
  v89 = *(_OWORD *)(a1 + 112);
  v84 = 1;
  v86 = v6;
  v7 = (__m128i *)sub_14017F410(&v82, (__int64)&v86, a2);
  v8 = v98;
  v9 = v97;
  v10 = 0;
  v11 = v96;
  v12 = v95;
  v13 = v94;
  v14 = v93;
  v15 = v92;
  v16 = v100;
  v82 = *v7;
  v17 = v82.m128i_i32[2];
  while ( v17 < v82.m128i_i32[3] )
  {
    v18 = v82.m128i_i64[0];
    v19 = 0;
    v20 = v17++;
    v81 = 1;
    v21 = v17;
    v82.m128i_i32[2] = v17;
    v22 = *(unsigned __int8 *)(v20 + v82.m128i_i64[0]);
    v23 = v22;
    switch ( *(_BYTE *)(v20 + v82.m128i_i64[0]) )
    {
      case 1:
      case 3:
      case 0x12:
      case 0x17:
        v83 += v5 / 2;
        v5 = 0;
        continue;
      case 4:
        v84 = 0;
        if ( v5 < 1 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        sub_140180120(a3, 0.0, *((float *)&v91 + v5 + 3));
        v10 = 0;
        v5 = 0;
        continue;
      case 5:
        if ( v5 < 2 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        do
          sub_140180060(a3, v18, v21, v10);
        while ( v26 + 2 < v5 );
        v10 = 0;
        v5 = 0;
        continue;
      case 6:
        if ( v5 >= 1 )
          goto LABEL_26;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
      case 7:
        if ( v5 < 1 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        while ( v19 < v5 )
        {
          sub_140180060(a3, v18, v21, v10);
          ++v19;
LABEL_26:
          if ( v19 >= v5 )
            break;
          sub_140180060(a3, v18, v21, v10);
          ++v19;
        }
        goto LABEL_66;
      case 8:
        if ( v5 < 6 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        v30 = 5;
        v31 = &v96;
        do
        {
          sub_14017FFC0(a3, *(v31 - 4), *(v31 - 3), *(v31 - 2), *(v31 - 1), *v31, v31[1]);
          v30 += 6;
          v31 += 6;
        }
        while ( v30 < v5 );
        v10 = 0;
        v5 = 0;
        continue;
      case 0xA:
        v45 = v88;
        if ( !HIDWORD(v85) )
        {
          if ( *(_DWORD *)(v88 + 156) )
            v89 = *sub_14017F820(&v90, v88, v87);
          HIDWORD(v85) = 1;
        }
        goto LABEL_73;
      case 0xB:
        if ( v4 <= 0 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        LODWORD(v85) = --v4;
        v82 = v104[v4];
        v17 = v82.m128i_i32[2];
        continue;
      case 0xC:
        if ( v17 < v82.m128i_i32[3] )
        {
          v58 = *(_BYTE *)(v17++ + v82.m128i_i64[0]);
          v82.m128i_i32[2] = v21 + 1;
        }
        else
        {
          v58 = 0;
        }
        switch ( v58 )
        {
          case '"':
            if ( v5 < 7 )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
            sub_14017FFC0(a3, v15, 0.0, v14, v13, v12, 0.0);
            sub_14017FFC0(a3, v11, 0.0, v9, -v13, v8, 0.0);
            v10 = 0;
            v5 = 0;
            break;
          case '#':
            if ( v5 < 13 )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
            sub_14017FFC0(a3, v15, v14, v13, v12, v11, v9);
            v80 = v103;
            v79 = v102;
LABEL_114:
            v63 = v100;
            sub_14017FFC0(a3, v8, v99, v100, v101, v79, v80);
            v10 = 0;
            v16 = v63;
            v5 = 0;
            continue;
          case '$':
            if ( v5 < 9 )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
            sub_14017FFC0(a3, v15, v14, v13, v12, v11, 0.0);
            sub_14017FFC0(a3, v9, 0.0, v8, v99, v16, -(float)((float)(v12 + v14) + v99));
            v10 = 0;
            v5 = 0;
            break;
          default:
            if ( v58 != 37 || v5 < 11 )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
            v59 = v102;
            v60 = v102;
            v61 = (float)((float)((float)(v13 + v15) + v11) + v8) + v100;
            v62 = (float)((float)((float)(v12 + v14) + v9) + v99) + v101;
            if ( fabs(v61) <= fabs(v62) )
              v60 = -v61;
            else
              v59 = -v62;
            sub_14017FFC0(a3, v15, v14, v13, v12, v11, v9);
            v80 = v59;
            v79 = v60;
            goto LABEL_114;
        }
        break;
      case 0xE:
        sub_14017FF00(a3, v82.m128i_i64[0], v17, 0);
        return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
      case 0x13:
      case 0x14:
        v24 = v83;
        if ( v84 )
        {
          v24 = v5 / 2 + v83;
          v83 = v24;
        }
        v25 = v82.m128i_i32[3];
        v84 = 0;
        v17 += (v24 + 7) / 8;
        if ( v17 > v82.m128i_i32[3] || v17 < 0 )
        {
          sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
          v10 = 0;
        }
        if ( v17 > v25 || v17 < 0 )
        {
          v82.m128i_i32[2] = v25;
          v17 = v25;
          v5 = 0;
        }
        else
        {
          v82.m128i_i32[2] = v17;
          v5 = 0;
        }
        continue;
      case 0x15:
        v84 = 0;
        if ( v5 < 2 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        sub_140180120(a3, *((float *)&v91 + v5 + 2), *((float *)&v91 + v5 + 3));
        v10 = 0;
        v5 = 0;
        continue;
      case 0x16:
        v84 = 0;
        if ( v5 < 1 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        sub_140180120(a3, *((float *)&v91 + v5 + 3), 0.0);
        v10 = 0;
        v5 = 0;
        continue;
      case 0x18:
        if ( v5 < 8 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        v32 = 5;
        v33 = &v96;
        do
        {
          sub_14017FFC0(a3, *(v33 - 4), *(v33 - 3), *(v33 - 2), *(v33 - 1), *v33, v33[1]);
          v19 += 6;
          v33 += 6;
          v32 += 6;
        }
        while ( v32 < v5 - 2 );
        if ( v19 + 1 >= v5 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        sub_140180060(a3, v34, v35, v36);
        v10 = 0;
        v4 = v85;
        v5 = 0;
        continue;
      case 0x19:
        if ( v5 < 8 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        do
        {
          sub_140180060(a3, v18, v21, v10);
          v19 += 2;
        }
        while ( v37 + 2 < v5 - 6 );
        if ( v19 + 5 >= v5 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        sub_14017FFC0(a3, *(&v92 + v19), *(&v93 + v19), *(&v94 + v19), *(&v95 + v19), *(&v96 + v19), *(&v97 + v19));
        v10 = 0;
        v5 = 0;
        continue;
      case 0x1A:
      case 0x1B:
        if ( v5 < 4 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        v38 = 0.0;
        v39 = v5 & 1;
        if ( (v5 & 1) != 0 )
          v38 = v15;
        v40 = v39 + 3;
        if ( (int)v39 + 3 >= v5 )
          goto LABEL_67;
        v41 = &v94 + v39;
        do
        {
          v42 = v41[1];
          if ( (_BYTE)v22 == 27 )
          {
            v43 = v41[1];
            v44 = *(v41 - 2);
            v42 = 0.0;
          }
          else
          {
            v44 = v38;
            v43 = 0.0;
            v38 = *(v41 - 2);
          }
          sub_14017FFC0(a3, v44, v38, *(v41 - 1), *v41, v43, v42);
          v40 += 4;
          v41 += 4;
          v38 = 0.0;
        }
        while ( v40 < v5 );
        v10 = 0;
        v5 = 0;
        continue;
      case 0x1D:
        v45 = v88;
LABEL_73:
        if ( v5 < 1 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        v46 = (int)*(&v92 + --v5);
        if ( v4 >= 10 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        v47 = v4++;
        LODWORD(v85) = v4;
        v104[v47] = v82;
        v48 = (__m128i *)&v89;
        if ( v23 != 10 )
          v48 = (__m128i *)(v45 + 96);
        v82 = *v48;
        if ( _mm_srli_si128(v82, 8).m128i_i32[1] < 0 )
          sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
        v49 = 0;
        v50 = v82.m128i_i32[3];
        if ( v82.m128i_i32[3] >= 0 )
          v50 = 0;
        v82.m128i_i32[2] = v50;
        if ( v50 < v82.m128i_i32[3] )
        {
          v51 = v50++;
          v82.m128i_i32[2] = v50;
          v49 = *(_BYTE *)(v51 + v82.m128i_i64[0]);
        }
        v52 = v49;
        if ( v50 < v82.m128i_i32[3] )
        {
          v82.m128i_i32[2] = v50 + 1;
          v53 = *(_BYTE *)(v50 + v82.m128i_i64[0]);
        }
        else
        {
          v53 = 0;
        }
        v54 = v53 | (v52 << 8);
        if ( v54 < 0x846C )
        {
          v55 = 107;
          if ( v54 >= 0x4D8 )
            v55 = 1131;
        }
        else
        {
          v55 = 0x8000;
        }
        v56 = v55 + v46;
        if ( v55 + v46 < 0 || v56 >= (int)v54 )
        {
          v86 = 0u;
          v57 = 0u;
        }
        else
        {
          v86 = v82;
          v57 = *(__m128i *)sub_14017F410(&v91, (__int64)&v86, v56);
          v86 = v57;
        }
        v82 = v57;
        if ( !_mm_srli_si128(v57, 8).m128i_u32[1] )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        v10 = 0;
        v82.m128i_i32[2] = 0;
        v17 = 0;
        continue;
      case 0x1E:
        if ( v5 >= 4 )
          goto LABEL_33;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
      case 0x1F:
        if ( v5 < 4 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        while ( v19 + 3 < v5 )
        {
          v29 = v5 - v19 == 5 ? *(&v92 + v19 + 4) : 0.0;
          sub_14017FFC0(a3, *(&v92 + v19), 0.0, *(&v93 + v19), *(&v94 + v19), v29, *(&v95 + v19));
          v19 += 4;
LABEL_33:
          if ( v19 + 3 >= v5 )
            break;
          if ( v5 - v19 == 5 )
            v28 = *(&v92 + v19 + 4);
          else
            v28 = 0.0;
          sub_14017FFC0(a3, 0.0, *(&v92 + v19), *(&v93 + v19), *(&v94 + v19), *(&v95 + v19), v28);
          v19 += 4;
        }
LABEL_66:
        v10 = 0;
LABEL_67:
        v5 = 0;
        continue;
      default:
        if ( v22 == 255 )
        {
          if ( v17 < v82.m128i_i32[3] )
          {
            v68 = *(_BYTE *)(v17++ + v82.m128i_i64[0]);
            v82.m128i_i32[2] = v21 + 1;
            LODWORD(v21) = v21 + 1;
          }
          else
          {
            v68 = 0;
          }
          v69 = v68;
          if ( (int)v21 < v82.m128i_i32[3] )
          {
            v71 = v17++;
            v82.m128i_i32[2] = v17;
            v70 = *(_BYTE *)(v71 + v82.m128i_i64[0]);
          }
          else
          {
            v70 = 0;
          }
          v72 = v70 | (v69 << 8);
          if ( v17 < v82.m128i_i32[3] )
          {
            v74 = v17++;
            v82.m128i_i32[2] = v17;
            v73 = *(_BYTE *)(v74 + v82.m128i_i64[0]);
          }
          else
          {
            v73 = 0;
          }
          v75 = v73 | (v72 << 8);
          if ( v17 < v82.m128i_i32[3] )
          {
            v77 = v17++;
            v82.m128i_i32[2] = v17;
            v76 = *(_BYTE *)(v77 + v82.m128i_i64[0]);
          }
          else
          {
            v76 = 0;
          }
          v67 = (float)(v76 | (v75 << 8)) * 0.000015258789;
        }
        else
        {
          if ( v22 != 28 && (unsigned int)(v22 - 32) > 0xDE )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
          v64 = v82.m128i_i32[3];
          v65 = v17 - 1;
          if ( v17 - 1 > v82.m128i_i32[3] || v65 < 0 )
            sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
          if ( v65 > v64 || (v82.m128i_i32[2] = v17 - 1, v65 < 0) )
            v82.m128i_i32[2] = v64;
          v66 = sub_14017F5B0((__int64)&v82);
          v17 = v82.m128i_i32[2];
          v10 = 0;
          v67 = (float)v66;
        }
        if ( v5 >= 48 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
        *(&v92 + v5) = v67;
        v8 = v98;
        v9 = v97;
        ++v5;
        v11 = v96;
        v12 = v95;
        v13 = v94;
        v14 = v93;
        v15 = v92;
        v16 = v100;
        continue;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v78 ^ v105);
}

