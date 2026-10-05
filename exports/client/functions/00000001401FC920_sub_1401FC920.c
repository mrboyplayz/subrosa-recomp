/* Address: 0x1401fc920 | Name: sub_1401FC920 | Size: 981 bytes */
__int64 __fastcall MEMORY[0x1401FC920](__m128i *a1, const __m128i *a2, unsigned __int64 a3)
{
  bool v5; // cf
  __int64 v6; // rdx
  __int64 result; // rax
  __m128i v8; // xmm1
  __int8 v9; // r8
  __int16 v10; // cx
  __int8 v11; // r9
  __int8 v12; // r8
  __int16 v13; // r8
  __int16 v14; // r8
  __int8 v15; // r9
  __int32 v16; // ecx
  __int8 v17; // r9
  __int8 v18; // cl
  __int16 v19; // cx
  __int32 v20; // ecx
  __int32 v21; // ecx
  __int16 v22; // r9
  __int32 v23; // ecx
  __int16 v24; // r9
  __int8 v25; // r10
  __m128 v26; // xmm0
  __int8 *v27; // r8
  unsigned __int64 v28; // rcx
  __m128 v29; // xmm1
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r9
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  unsigned __int64 j; // r9
  unsigned __int64 v40; // r8
  __m128 v41; // xmm0
  __m128 v42; // xmm1
  __m128 v43; // xmm1
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  __int8 *v46; // rcx
  __int128 v47; // xmm0
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r8
  _OWORD *v50; // rax
  __int128 v51; // xmm1
  unsigned __int64 v52; // r9
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm1
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  unsigned __int64 i; // r9

  result = (__int64)a1;
  switch ( a3 )
  {
    case 0uLL:
      return result;
    case 1uLL:
      a1->m128i_i8[0] = a2->m128i_i8[0];
      break;
    case 2uLL:
      a1->m128i_i16[0] = a2->m128i_i16[0];
      break;
    case 3uLL:
      v9 = a2->m128i_i8[2];
      a1->m128i_i16[0] = a2->m128i_i16[0];
      a1->m128i_i8[2] = v9;
      break;
    case 4uLL:
      a1->m128i_i32[0] = a2->m128i_i32[0];
      break;
    case 5uLL:
      v12 = a2->m128i_i8[4];
      a1->m128i_i32[0] = a2->m128i_i32[0];
      a1->m128i_i8[4] = v12;
      break;
    case 6uLL:
      v13 = a2->m128i_i16[2];
      a1->m128i_i32[0] = a2->m128i_i32[0];
      a1->m128i_i16[2] = v13;
      break;
    case 7uLL:
      v14 = a2->m128i_i16[2];
      v15 = a2->m128i_i8[6];
      a1->m128i_i32[0] = a2->m128i_i32[0];
      a1->m128i_i16[2] = v14;
      a1->m128i_i8[6] = v15;
      break;
    case 8uLL:
      a1->m128i_i64[0] = a2->m128i_i64[0];
      break;
    case 9uLL:
      v18 = a2->m128i_i8[8];
      *(_QWORD *)result = a2->m128i_i64[0];
      *(_BYTE *)(result + 8) = v18;
      break;
    case 0xAuLL:
      v19 = a2->m128i_i16[4];
      *(_QWORD *)result = a2->m128i_i64[0];
      *(_WORD *)(result + 8) = v19;
      break;
    case 0xBuLL:
      v10 = a2->m128i_i16[4];
      v11 = a2->m128i_i8[10];
      *(_QWORD *)result = a2->m128i_i64[0];
      *(_WORD *)(result + 8) = v10;
      *(_BYTE *)(result + 10) = v11;
      break;
    case 0xCuLL:
      v20 = a2->m128i_i32[2];
      *(_QWORD *)result = a2->m128i_i64[0];
      *(_DWORD *)(result + 8) = v20;
      break;
    case 0xDuLL:
      v16 = a2->m128i_i32[2];
      v17 = a2->m128i_i8[12];
      *(_QWORD *)result = a2->m128i_i64[0];
      *(_DWORD *)(result + 8) = v16;
      *(_BYTE *)(result + 12) = v17;
      break;
    case 0xEuLL:
      v21 = a2->m128i_i32[2];
      v22 = a2->m128i_i16[6];
      *(_QWORD *)result = a2->m128i_i64[0];
      *(_DWORD *)(result + 8) = v21;
      *(_WORD *)(result + 12) = v22;
      break;
    case 0xFuLL:
      v23 = a2->m128i_i32[2];
      v24 = a2->m128i_i16[6];
      v25 = a2->m128i_i8[14];
      *(_QWORD *)result = a2->m128i_i64[0];
      *(_DWORD *)(result + 8) = v23;
      *(_WORD *)(result + 12) = v24;
      *(_BYTE *)(result + 14) = v25;
      break;
    case 0x10uLL:
      *a1 = _mm_loadu_si128(a2);
      break;
    default:
      if ( a3 <= 0x20 )
      {
        v8 = *(const __m128i *)((char *)a2 + a3 - 16);
        *a1 = *a2;
        *(__m128i *)((char *)a1 + a3 - 16) = v8;
        result = (__int64)a1;
      }
      else
      {
        v5 = a2 < a1;
        v6 = (char *)a2 - (char *)a1;
        if ( v5 && a1 < (__m128i *)&a2->m128i_i8[a3] )
        {
          v46 = &a1->m128i_i8[a3];
          v47 = *(_OWORD *)&v46[v6 - 16];
          v48 = (unsigned __int64)(v46 - 16);
          v49 = a3 - 16;
          if ( (v48 & 0xF) != 0 )
          {
            v50 = (_OWORD *)v48;
            v48 &= 0xFFFFFFFFFFFFFFF0uLL;
            v51 = v47;
            v47 = *(_OWORD *)(v48 + v6);
            *v50 = v51;
            v49 = v48 - (_QWORD)a1;
          }
          v52 = v49 >> 7;
          if ( v49 >> 7 )
          {
            for ( *(_OWORD *)v48 = v47; ; *(_OWORD *)v48 = v58 )
            {
              v53 = *(_OWORD *)(v48 + v6 - 16);
              v54 = *(_OWORD *)(v48 + v6 - 32);
              v48 -= 128LL;
              *(_OWORD *)(v48 + 112) = v53;
              *(_OWORD *)(v48 + 96) = v54;
              v55 = *(_OWORD *)(v48 + v6 + 64);
              --v52;
              *(_OWORD *)(v48 + 80) = *(_OWORD *)(v48 + v6 + 80);
              *(_OWORD *)(v48 + 64) = v55;
              v56 = *(_OWORD *)(v48 + v6 + 32);
              *(_OWORD *)(v48 + 48) = *(_OWORD *)(v48 + v6 + 48);
              *(_OWORD *)(v48 + 32) = v56;
              v57 = *(_OWORD *)(v48 + v6 + 16);
              v58 = *(_OWORD *)(v48 + v6);
              if ( !v52 )
                break;
              *(_OWORD *)(v48 + 16) = v57;
            }
            *(_OWORD *)(v48 + 16) = v57;
            v49 &= 0x7Fu;
            v47 = v58;
          }
          for ( i = v49 >> 4; i; --i )
          {
            *(_OWORD *)v48 = v47;
            v48 -= 16LL;
            v47 = *(_OWORD *)(v48 + v6);
          }
          if ( (v49 & 0xF) != 0 )
            *a1 = *a2;
          *(_OWORD *)v48 = v47;
          result = (__int64)a1;
        }
        else
        {
          if ( a3 <= 0x80 )
          {
            v26 = *(__m128 *)((char *)a1 + v6);
            v28 = (unsigned __int64)&a1[1];
            v31 = a3 - 16;
          }
          else
          {
            if ( (dword_140404A6C[19064469] & 2) != 0 )
              return sub_1401FC900(a1, v6, a3);
            v26 = *(__m128 *)((char *)a1 + v6);
            v27 = &a1->m128i_i8[a3];
            v28 = (unsigned __int64)&a1[1];
            if ( ((unsigned __int8)a1 & 0xF) != 0 )
            {
              v29 = v26;
              v30 = v28 & 0xFFFFFFFFFFFFFFF0uLL;
              v26 = *(__m128 *)(v30 + v6);
              v28 = v30 + 16;
              *a1 = (__m128i)v29;
            }
            v31 = (unsigned __int64)&v27[-v28];
            v32 = v31 >> 7;
            if ( v31 >> 7 )
            {
              *(__m128 *)(v28 - 16) = v26;
              if ( v32 <= qword_140302088 )
              {
                while ( 1 )
                {
                  v33 = *(_OWORD *)(v28 + v6);
                  v34 = *(_OWORD *)(v28 + v6 + 16);
                  v28 += 128LL;
                  *(_OWORD *)(v28 - 128) = v33;
                  *(_OWORD *)(v28 - 112) = v34;
                  v35 = *(_OWORD *)(v28 + v6 - 80);
                  --v32;
                  *(_OWORD *)(v28 - 96) = *(_OWORD *)(v28 + v6 - 96);
                  *(_OWORD *)(v28 - 80) = v35;
                  v36 = *(_OWORD *)(v28 + v6 - 48);
                  *(_OWORD *)(v28 - 64) = *(_OWORD *)(v28 + v6 - 64);
                  *(_OWORD *)(v28 - 48) = v36;
                  v37 = *(__m128 *)(v28 + v6 - 32);
                  v38 = *(__m128 *)(v28 + v6 - 16);
                  if ( !v32 )
                    break;
                  *(__m128 *)(v28 - 32) = v37;
                  *(__m128 *)(v28 - 16) = v38;
                }
              }
              else
              {
                while ( 1 )
                {
                  _mm_prefetch((const char *)(v28 + v6 + 512), 0);
                  v41 = *(__m128 *)(v28 + v6);
                  v42 = *(__m128 *)(v28 + v6 + 16);
                  v28 += 128LL;
                  _mm_stream_ps((float *)(v28 - 128), v41);
                  _mm_stream_ps((float *)(v28 - 112), v42);
                  v43 = *(__m128 *)(v28 + v6 - 80);
                  --v32;
                  _mm_stream_ps((float *)(v28 - 96), *(__m128 *)(v28 + v6 - 96));
                  _mm_stream_ps((float *)(v28 - 80), v43);
                  v44 = *(__m128 *)(v28 + v6 - 64);
                  v45 = *(__m128 *)(v28 + v6 - 48);
                  _mm_prefetch((const char *)(v28 + v6 + 576), 0);
                  _mm_stream_ps((float *)(v28 - 64), v44);
                  _mm_stream_ps((float *)(v28 - 48), v45);
                  v37 = *(__m128 *)(v28 + v6 - 32);
                  v38 = *(__m128 *)(v28 + v6 - 16);
                  if ( !v32 )
                    break;
                  _mm_stream_ps((float *)(v28 - 32), v37);
                  _mm_stream_ps((float *)(v28 - 16), v38);
                }
                _mm_sfence();
              }
              *(__m128 *)(v28 - 32) = v37;
              v31 &= 0x7Fu;
              v26 = v38;
            }
          }
          for ( j = v31 >> 4; j; --j )
          {
            *(__m128 *)(v28 - 16) = v26;
            v26 = *(__m128 *)(v28 + v6);
            v28 += 16LL;
          }
          v40 = v31 & 0xF;
          if ( v40 )
            *(_OWORD *)(v28 + v40 - 16) = *(_OWORD *)(v28 + v40 + v6 - 16);
          *(__m128 *)(v28 - 16) = v26;
          result = (__int64)a1;
        }
      }
      break;
  }
  return result;
}

