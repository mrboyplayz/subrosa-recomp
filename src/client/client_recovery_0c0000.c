#include "shared_client.h"

// 1400BF580: conditional instruction was optimized away because edi.4==D

//----- (00000001400C2D50) ----------------------------------------------------
__int64            sub_1400C2D50(unsigned int a1)
{
  __int64 result;
  __int64 v2;
  unsigned int v3;

  g_144AF96E0 = a1;
  LODWORD(result) = 1;
  do
  {
    v2 = (int)result;
    v3 = result
       + 1812433253 * (dword_140404A6C[(int)result + 18600732] ^ (dword_140404A6C[(int)result + 18600732] >> 30));
    result = (unsigned int)(result + 1);
    dword_140404A6C[v2 + 18600733] = v3;
  }
  while ( (int)result < 624 );
  dword_14030186C = result;
  return result;
}

//----- (00000001400C2F90) ----------------------------------------------------
/* Existing callers carry the native XMM3 float word in a double container. */
_UNKNOWN ** sub_1400C2F90(float *a1,float *a2,float *a3,double a4)
{
  float alpha;
  memcpy(&alpha,&a4,sizeof alpha);
  __m128 factor=_mm_set1_ps(alpha),left,right;
  sub_14010E370((float *)(void *)&left,a2);
  sub_14010E370((float *)(void *)&right,a3);
  float l[4],r[4];
  _mm_storeu_ps(l,left);_mm_storeu_ps(r,right);
  float p2=l[2]*r[2],p0=l[0]*r[0];
  float p3=l[3]*r[3]+p2,p1=l[1]*r[1]+p0;
  float dot=p3+p1;
  if(!_mm_comige_ss(_mm_set_ss(dot),_mm_setzero_ps()))
    right=_mm_xor_ps(right,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279870)));
  __m128 weights=_mm_sub_ps(_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279700)),factor);
  __m128 blended=_mm_add_ps(_mm_mul_ps(weights,left),_mm_mul_ps(factor,right));
  float q[4];_mm_storeu_ps(q,blended);
  float s2=q[2]*q[2],s3=q[3]*q[3];
  float s0=q[0]*q[0],s1=q[1]*q[1];
  float sum23=s3+s2,sum01=s0+s1,norm=sum23+sum01;
  __m128d root=_mm_sqrt_pd(_mm_cvtss_sd(_mm_setzero_pd(),_mm_set_ss(norm)));
  unsigned char zero_or_unordered;
  __asm__ volatile("ucomisd %2, %1; sete %0" : "=qm"(zero_or_unordered)
                   : "x"(root),"x"(_mm_setzero_pd()) : "cc");
  if(zero_or_unordered)
    _mm_storeu_ps(q,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279490)));
  else
  {
    __m128d inverse=_mm_div_sd(_mm_set_sd(1.0),root);
    inverse=_mm_unpacklo_pd(inverse,inverse);
    for(unsigned i=0;i<2;i++)
    {
      __m128 pair=_mm_castpd_ps(_mm_load_sd((const double *)(const void *)(q+2*i)));
      __m128 converted=_mm_cvtpd_ps(_mm_mul_pd(_mm_cvtps_pd(pair),inverse));
      uint64_t words;
      memcpy(&words,&converted,sizeof words);
      memcpy(q+2*i,&words,sizeof words);
    }
  }
  return sub_14011C340(a1,q);
}

//----- (00000001400C30E0) ----------------------------------------------------
void            sub_1400C30E0(float *a1, float *a2, float *a3, float a4)
{
  float v4;
  float v5;
  float v6;
  float v7;

  v4 = a3[1];
  v5 = a2[1];
  v6 = a2[2];
  v7 = a3[2];
  *a1 = (float)((float)(*a3 - *a2) * a4) + *a2;
  a1[1] = (float)((float)(v4 - v5) * a4) + a2[1];
  a1[2] = (float)((float)(v7 - v6) * a4) + a2[2];
}

//----- (00000001400C3140) ----------------------------------------------------
__int64            sub_1400C3140(unsigned __int64 a1, float *a2)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  __m128 v65;
  __m128 v66;
  __m128 v67;
  float v68;
  float v69;
  float v70;
  __m128 v71;
  __m128 v72;
  __m128 v73;
  float v74;
  float v75;
  __m128 v76;
  __m128 v77;
  __m128 v78;
  float v79;
  __m128 v80;
  float v81;
  __m128 v82;
  __m128 v83;
  __m128 v84;
  float v85;
  float v86;
  __m128 v87;
  float v88;
  float v89;
  float v90;
  float v91;
  __m128 v92;
  __m128 v93;
  _BYTE *v94;
  __int8 *v95;
  unsigned __int64 v96;
  __int64 v97;
  float v98;
  float v99;
  float v100;
  __m128 v101;
  __m128 v102;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C3140[160];
#define v104 (*(float (*))(void *)(sr_frame_1400C3140 + 0)) /* [rsp+0h] */
#define v105 (*(float (*))(void *)(sr_frame_1400C3140 + 4)) /* [rsp+4h] */
#define v106 (*(float (*))(void *)(sr_frame_1400C3140 + 8)) /* [rsp+8h] */
#define v107 (*(float (*))(void *)(sr_frame_1400C3140 + 12)) /* [rsp+Ch] */
#define v108 (*(float (*))(void *)(sr_frame_1400C3140 + 16)) /* [rsp+10h] */
#define v109 (*(float (*))(void *)(sr_frame_1400C3140 + 20)) /* [rsp+14h] */
#define v110 (*(float (*))(void *)(sr_frame_1400C3140 + 24)) /* [rsp+18h] */
#define v111 (*(float (*))(void *)(sr_frame_1400C3140 + 28)) /* [rsp+1Ch] */
#define v112 (*(float (*))(void *)(sr_frame_1400C3140 + 32)) /* [rsp+20h] */
#define v113 (*(float (*))(void *)(sr_frame_1400C3140 + 36)) /* [rsp+24h] */
#define v114 (*(float (*))(void *)(sr_frame_1400C3140 + 40)) /* [rsp+28h] */
#define v115 (*(float (*))(void *)(sr_frame_1400C3140 + 44)) /* [rsp+2Ch] */
#define v116 (*(float (*))(void *)(sr_frame_1400C3140 + 48)) /* [rsp+30h] */
#define v117 (*(float (*))(void *)(sr_frame_1400C3140 + 52)) /* [rsp+34h] */
#define v118 (*(float (*))(void *)(sr_frame_1400C3140 + 56)) /* [rsp+38h] */
#define v119 (*(float (*))(void *)(sr_frame_1400C3140 + 60)) /* [rsp+3Ch] */
#define v120 (*(__m128 (*))(void *)(sr_frame_1400C3140 + 64)) /* [rsp+40h] */
#define v121 (*(__m128 (*))(void *)(sr_frame_1400C3140 + 80)) /* [rsp+50h] */
#define v122 (*(_BYTE (*)[48])(void *)(sr_frame_1400C3140 + 96)) /* [rsp+60h] */
#define v123 (*(__int64 (*))(void *)(sr_frame_1400C3140 + 144)) /* [rsp+90h] */

  v2 = a2[15];
  v3 = a2[11];
  v4 = a2[7];
  v5 = a2[10];
  v6 = a2[14];
  v7 = a2[6];
  v8 = a2[13];
  v9 = a2[4];
  v10 = a2[8];
  v11 = a2[12];
  v12 = (float)(v7 * a2[9]) * v2;
  v13 = v10 * v4;
  v14 = (float)((float)(a2[5] * v5) * v2) - (float)((float)(v3 * a2[5]) * v6);
  v15 = v10 * v7;
  v104 = v9 * v5;
  v16 = v14 - v12;
  v17 = v8 * v7;
  v18 = v11 * a2[6];
  v19 = (float)(v8 * v4) * v5;
  v20 = v11 * v4;
  v106 = (float)((float)(v16 + (float)((float)(v4 * a2[9]) * v6)) + (float)(v17 * v3)) - v19;
  v21 = (float)(v9 * v3) * v8;
  v22 = (float)(v10 * v4) * v6;
  v23 = (float)((float)((float)(v9 * v3) * v6) - (float)(v104 * v2)) + (float)(v15 * v2);
  v24 = v18 * v3;
  v25 = v11 * a2[5];
  v26 = (float)(v23 - v22) - v24;
  v27 = v9 * a2[9];
  *(float *)v122 = v26 + (float)(v20 * a2[10]);
  v28 = (float)(v10 * a2[5]) * v6;
  v29 = v25 * a2[11];
  v30 = v25 * a2[10];
  v31 = (float)((float)((float)((float)((float)(v27 * v2) - v21) - (float)((float)(v10 * a2[5]) * v2))
                      + (float)(v13 * v8))
              + v29)
      - (float)(v20 * a2[9]);
  v32 = a2[9];
  v107 = v31;
  v33 = (float)((float)(v104 * v8) - (float)(v27 * v6)) + v28;
  v34 = *a2;
  v35 = v33 - (float)(v15 * v8);
  v36 = a2[1];
  v114 = *a2 * a2[10];
  v37 = v35 - v30;
  v38 = a2[2];
  v105 = v36 * v11;
  v39 = v38 * v32;
  v40 = v37 + (float)(v18 * v32);
  v41 = a2[3];
  v110 = v38 * v10;
  v42 = v41 * v32;
  v104 = v40;
  v43 = v38 * v8;
  v44 = v41 * a2[13];
  v115 = v34 * a2[11];
  v112 = v38 * v11;
  v111 = v41 * v10;
  v45 = v41 * v11;
  v46 = a2[14];
  v113 = v45;
  v47 = v34 * v32;
  v48 = v36 * v10;
  v49 = a2[13];
  v119 = v47;
  v118 = v48;
  v50 = v36 * a2[6];
  *(float *)&v122[36] = (float)((float)((float)((float)((float)(v46 * v47) - (float)(v49 * v114)) - (float)(v46 * v48))
                                      + (float)(v49 * v110))
                              + (float)(a2[10] * v105))
                      - (float)(a2[9] * v112);
  v51 = *a2;
  v52 = a2[2];
  v53 = a2[1];
  v54 = v41 * a2[5];
  v55 = a2[3];
  v56 = v36 * a2[7];
  v57 = v52 * a2[5];
  v58 = *a2 * a2[7];
  v109 = *a2 * a2[6];
  v108 = v52 * v9;
  v59 = v51 * a2[5];
  v60 = a2[13] * v109;
  v116 = v59;
  v117 = v53 * v9;
  v61 = v55 * v9;
  v62 = (float)((float)((float)((float)(v60 - (float)(a2[14] * v59)) + (float)(a2[14] * (float)(v53 * v9)))
                      - (float)(a2[13] * v108))
              - (float)(a2[6] * v105))
      + (float)(a2[5] * v112);
  v63 = a2[11] * v50;
  v64 = a2[11] * v57;
  *(float *)&v122[40] = v62;
  v65 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 10))));
  v66 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 15))));
  v67 = v66;
  SR_VEC_LANES(128, v67, f32)[0] = SR_VEC_LANES(128, v66, f32)[0] * v50;
  v68 = a2[14];
  SR_VEC_LANES(128, v65, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v65, f32)[0] * v56) - v63) + v64) - (float)(a2[10] * v54))
                          - (float)(a2[7] * v39))
                  + (float)(a2[6] * v42);
  v69 = v68 * v54;
  v70 = a2[7];
  SR_VEC_LANES(128, v67, f32)[0] = (float)((float)((float)((float)(SR_VEC_LANES(128, v67, f32)[0] - (float)(v68 * v56)) - (float)(a2[15] * v57)) + v69)
                          + (float)(v70 * v43))
                  - (float)(a2[6] * v44);
  v71 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 1))));
  v72 = _mm_unpacklo_ps(v67, v65);
  v73 = ((__m128)_mm_cvtsi32_si128((int)(LODWORD(v68))));
  v74 = a2[15] * v39;
  v75 = a2[10];
  SR_VEC_LANES(128, v71, f32)[0] = (float)((float)((float)((float)((float)((float)(SR_VEC_LANES(128, v71, f32)[0] * a2[11]) * v68)
                                                  - (float)((float)(SR_VEC_LANES(128, v71, f32)[0] * v75) * SR_VEC_LANES(128, v66, f32)[0]))
                                          + v74)
                                  - (float)(v68 * v42))
                          - (float)(a2[11] * v43))
                  + (float)(v75 * v44);
  v76 = _mm_unpacklo_ps(((__m128)_mm_cvtsi32_si128((int)(LODWORD(v106)))), v71);
  SR_VEC_LANES(128, v71, f32)[0] = a2[6];
  v77 = _mm_movelh_ps(v76, v72);
  v78 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 11))));
  v120 = v77;
  v121 = v77;
  SR_VEC_LANES(128, v78, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v78, f32)[0] * v109) - (float)(v75 * v58))
                                          - (float)(a2[11] * v108))
                                  + (float)(v75 * v61))
                          + (float)(v70 * v110))
                  - (float)(SR_VEC_LANES(128, v71, f32)[0] * v111);
  v79 = SR_VEC_LANES(128, v71, f32)[0] * v113;
  v80 = v66;
  SR_VEC_LANES(128, v73, f32)[0] = (float)((float)((float)((float)((float)(v68 * v58) - (float)(SR_VEC_LANES(128, v66, f32)[0] * v109))
                                          + (float)(SR_VEC_LANES(128, v66, f32)[0] * v108))
                                  - (float)(v68 * v61))
                          - (float)(v70 * v112))
                  + v79;
  SR_VEC_LANES(128, v80, f32)[0] = (float)((float)((float)(SR_VEC_LANES(128, v66, f32)[0] * v114) - (float)(v68 * v115))
                          - (float)(SR_VEC_LANES(128, v66, f32)[0] * v110))
                  + (float)(v68 * v111);
  v81 = a2[11];
  SR_VEC_LANES(128, v80, f32)[0] = (float)(SR_VEC_LANES(128, v80, f32)[0] + (float)(v81 * v112)) - (float)(a2[10] * v113);
  v82 = _mm_movelh_ps(_mm_unpacklo_ps(v80, v73), _mm_unpacklo_ps(v78, ((__m128)_mm_cvtsi32_si128((int)(LODWORD(v107))))));
  SR_VEC_LANES(128, v78, f32)[0] = a2[9];
  v83 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, v78, u32)[0]));
  *(__m128_u *)&v122[4] = v82;
  v84 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 15))));
  SR_VEC_LANES(128, v83, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v78, f32)[0] * v58) - (float)(v81 * v116))
                                          + (float)(v81 * v117))
                                  - (float)(SR_VEC_LANES(128, v78, f32)[0] * v61))
                          - (float)(v70 * v118))
                  + (float)(a2[5] * v111);
  v85 = a2[13] * v61;
  v86 = a2[5];
  v87 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)a2 + 13))));
  SR_VEC_LANES(128, v84, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v84, f32)[0] * v116) - (float)(a2[13] * v58))
                                          - (float)(SR_VEC_LANES(128, v84, f32)[0] * v117))
                                  + v85)
                          + (float)(v70 * v105))
                  - (float)(v86 * v113);
  SR_VEC_LANES(128, v87, f32)[0] = (float)((float)((float)((float)((float)(SR_VEC_LANES(128, v87, f32)[0] * v115) - (float)(a2[15] * v119))
                                          + (float)(a2[15] * v118))
                                  - (float)(a2[13] * v111))
                          - (float)(a2[11] * v105))
                  + (float)(a2[9] * v113);
  v88 = a2[9] * v109;
  v89 = a2[9] * v108;
  SR_VEC_LANES(128, v82, f32)[0] = a2[10];
  *(__m128_u *)&v122[20] = _mm_movelh_ps(_mm_unpacklo_ps(v87, v84), _mm_unpacklo_ps(v83, ((__m128)_mm_cvtsi32_si128((int)(LODWORD(v104))))));
  SR_VEC_LANES(128, v82, f32)[0] = (float)((float)((float)((float)(SR_VEC_LANES(128, v82, f32)[0] * v116) - v88) - (float)(SR_VEC_LANES(128, v82, f32)[0] * v117))
                          + v89)
                  + (float)(a2[6] * v118);
  SR_VEC_LANES(128, v87, f32)[0] = (float)(*(float *)v122 * a2[1]) + (float)(v106 * *a2);
  v90 = a2[3] * v104;
  *(float *)&v122[44] = SR_VEC_LANES(128, v82, f32)[0] - (float)(v86 * v110);
  v91 = SR_VEC_LANES(128, v87, f32)[0] + (float)(v90 + (float)(a2[2] * v107));
  if ( v91 != 0.0 )
  {
    v92 = ((__m128)_mm_cvtsi32_si128((int)(0x3F800000u)));
    SR_VEC_LANES(128, v92, f32)[0] = 1.0 / v91;
    v93 = _mm_shuffle_ps(v92, v92, 0);
    if ( a1 > (unsigned __int64)&v122[44] || a1 + 60 < (unsigned __int64)&v121 )
    {
      v101 = _mm_mul_ps(*(__m128_u *)&v122[16], v93);
      *(__m128_u *)a1 = _mm_mul_ps(v120, v93);
      *(__m128_u *)(a1 + 16) = _mm_mul_ps(*(__m128_u *)v122, v93);
      v102 = _mm_mul_ps(*(__m128_u *)&v122[32], v93);
      *(__m128_u *)(a1 + 32) = v101;
      *(__m128_u *)(a1 + 48) = v102;
    }
    else
    {
      v94 = (char *)&v121 - a1;
      v95 = &SR_VEC_LANES(128, v121, i8)[-a1 + 4];
      v96 = a1 + 8;
      v97 = 4;
      do
      {
        v96 += 16LL;
        v98 = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v95[v96 - 24];
        *(float *)(v96 - 24) = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v94[v96 - 24];
        v99 = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v94[v96 - 16];
        *(float *)(v96 - 20) = v98;
        v100 = SR_VEC_LANES(128, v92, f32)[0] * *(float *)&v95[v96 - 16];
        *(float *)(v96 - 16) = v99;
        *(float *)(v96 - 12) = v100;
        --v97;
      }
      while ( v97 );
    }
  }
  return 0; /* the function has no caller */
}
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123

// 1400C39C9: conditional instruction was optimized away because r11.8==10

//----- (00000001400C3BA0) ----------------------------------------------------
unsigned int *sub_1400C3BA0(int item, unsigned int link, unsigned int slot)
{
  /* src/engine/item_state.c */
  extern uintptr_t item_register_link(int, unsigned int, int32_t);
  return (unsigned int *)item_register_link(item, link, (int32_t)slot);
}

//----- (00000001400C3C90) ----------------------------------------------------
__int64 sub_1400C3C90(unsigned int item, int human, int slot)
{
  extern unsigned long long item_append_inventory(unsigned int, int, int);
  /* src/engine/item_state.c */
  return (__int64)item_append_inventory(item, human, slot);
}

//----- (00000001400C3D10) ----------------------------------------------------
__int64 sub_1400C3D10(int item)
{
  extern unsigned long long item_cash_value(int);
  /* src/engine/item_state.c */
  return (__int64)item_cash_value(item);
}

//----- (00000001400C6AB0) ----------------------------------------------------
unsigned int *           sub_1400C6AB0(int a1, int a2, char *a3, char a4, int a5)
{
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned int *v8;
  char v9;

  v5 = 0;
  v6 = a1;
  v7 = a5;
  if ( a5 > 0 )
  {
    v5 = a5;
    v8 = &dword_140404A6C[16 * (a2 + 110LL * a1) + 278846626];
    do
    {
      v9 = *a3;
      if ( *a3 )
        ++a3;
      else
        v9 = 32;
      *((_BYTE *)v8 - 2048) = v9;
      *(_BYTE *)v8 = a4;
      v8 = (unsigned int *)((char *)v8 + 1);
      --v7;
    }
    while ( v7 );
  }
  *((_BYTE *)&dword_140404A6C[16 * (a2 + 110 * v6) + 278846114] + v5) = 0;
  return &g_182BBB4F4;
}

//----- (00000001400C6B30) ----------------------------------------------------
void            sub_1400C6B30(_BYTE *a1, int a2, int a3)
{
  __int64 v3;
  __int64 v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  char *v9;
  int *v10;
  char *v11;
  bool v12;
  int v13;
  _WORD *v14;

  v3 = a3;
  if ( a3 == 2 )
  {
    v5 = 1760LL * a2;
    v6 = dword_140404A6C[v5 + 278846098];
  }
  else
  {
    if ( a3 )
      goto LABEL_17;
    v5 = 1760LL * a2;
    if ( (int)dword_140404A6C[v5 + 278845906] <= 0 )
      goto LABEL_17;
    v6 = dword_140404A6C[1760 * dword_140404A6C[v5 + 278845907] + 278846098];
  }
  if ( v6 == -1 )
  {
LABEL_17:
    *a1 = 0;
    return;
  }
  crt_sprintf(a1, "%c:\\", (unsigned int)(a3 + 65));
  v7 = 1;
  v8 = v5 * 4 + 72 * v3;
  v9 = (char *)&g_182BBB180 + v8;
  if ( *(int *)((char *)&g_182BBC57C + v8) >= 1 )
  {
    v10 = (int *)((char *)&g_182BBC584 + v8);
    do
    {
      v11 = a1 - 1;
      do
        v12 = *++v11 == 0;
      while ( !v12 );
      strcpy(v11, (     char *)&dword_140404A6C[2570 * v6 + 275753048 + 4 * *v10]);
      v13 = *((_DWORD *)v9 + 1279);
      if ( v7 < v13 )
      {
        v14 = a1 - 1;
        do
        {
          v12 = *((_BYTE *)v14 + 1) == 0;
          v14 = (_WORD *)((char *)v14 + 1);
        }
        while ( !v12 );
        *v14 = 92;
        v13 = *((_DWORD *)v9 + 1279);
      }
      ++v7;
      ++v10;
    }
    while ( v7 <= v13 );
  }
}

//----- (00000001400C6C90) ----------------------------------------------------
__m128i *           sub_1400C6C90(int a1)
{
  __int64 v2;
  __int64 v3;
  signed int v4;
  __int64 v5;
  __m128i *result;
  __m128i si128;

  v2 = 1760LL * a1;
  v3 = (int)dword_140404A6C[v2 + 278846111];
  v4 = 2;
  dword_140404A6C[v2 + 278847170] = 2;
  dword_140404A6C[v2 + 278847323] = -1;
  strcpy((char *)&dword_140404A6C[1760 * a1 + 278846114 + 16 * v3], "STARTING CS-DOS...");
  sub_1400C3E00(a1);
  sub_1400C3E00(a1);
  sub_1400C6D90(a1, 0);
  do
    sub_140050F90(a1, v4++);
  while ( v4 < 24 );
  v5 = 32;
  result = (__m128i *)&dword_140404A6C[v2 + 278846626];
  do
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
    *result = si128;
    result[1] = si128;
    result[2] = si128;
    result += 4;
    SR_VEC_LANES(128, result[-1], i64)[0] = SR_VEC_LANES(128, si128, i64)[0];
    SR_VEC_LANES(128, result[-1], i32)[2] = SR_VEC_LANES(128, si128, i32)[0];
    SR_VEC_LANES(128, result[-1], i16)[6] = SR_VEC_LANES(128, si128, i16)[0];
    SR_VEC_LANES(128, result[-1], i8)[14] = SR_VEC_LANES(128, si128, i8)[0];
    --v5;
  }
  while ( v5 );
  return result;
}

//----- (00000001400C8AD0) ----------------------------------------------------
__int64            sub_1400C8AD0(_BYTE *a1, __int64 a2, int *a3)
{
  int v3;
  unsigned int v4;
  int v7;
  int v8;
  char v9;
  _BYTE *v10;
  char v11;

  v3 = *a3;
  v4 = 0;
  v7 = 0;
  if ( *a3 < 62 )
  {
    v8 = *a3;
    do
    {
      v9 = *(_BYTE *)(v3 + a2);
      if ( (unsigned __int8)(v9 - 97) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 65) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 48) <= 9u )
        break;
      if ( !v9 )
        break;
      *a3 = ++v3;
      v8 = v3;
    }
    while ( v3 < 62 );
    if ( v8 < 62 )
    {
      v10 = a1;
      do
      {
        v11 = *(_BYTE *)(v8 + a2);
        if ( (unsigned __int8)(v11 - 97) > 0x19u
          && (unsigned __int8)(v11 - 65) > 0x19u
          && (unsigned __int8)(v11 - 48) > 9u
          && v11 != 46 )
        {
          break;
        }
        *v10 = v11;
        ++v7;
        ++v10;
        v8 = *a3 + 1;
        *a3 = v8;
      }
      while ( v8 < 62 );
    }
  }
  a1[v7] = 0;
  LOBYTE(v4) = v7 > 0;
  return v4;
}

// 1400C8B63: conditional instruction was optimized away because cl.1 is in (==2E|30..39)

//----- (00000001400C8BA0) ----------------------------------------------------
__int64            sub_1400C8BA0(_BYTE *a1, __int64 a2, int *a3)
{
  int v3;
  unsigned int v4;
  int v7;
  int v8;
  char v9;
  _BYTE *v10;
  char v11;

  v3 = *a3;
  v4 = 0;
  v7 = 0;
  if ( *a3 < 62 )
  {
    v8 = *a3;
    do
    {
      v9 = *(_BYTE *)(v3 + a2);
      if ( (unsigned __int8)(v9 - 97) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 65) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 48) <= 9u )
        break;
      if ( !v9 )
        break;
      *a3 = ++v3;
      v8 = v3;
    }
    while ( v3 < 62 );
    if ( v8 < 62 )
    {
      v10 = a1;
      do
      {
        v11 = *(_BYTE *)(v8 + a2);
        if ( (unsigned __int8)(v11 - 97) > 0x19u
          && (unsigned __int8)(v11 - 65) > 0x19u
          && (unsigned __int8)(v11 - 48) > 9u )
        {
          break;
        }
        *v10 = v11;
        ++v7;
        ++v10;
        v8 = *a3 + 1;
        *a3 = v8;
      }
      while ( v8 < 62 );
    }
  }
  a1[v7] = 0;
  LOBYTE(v4) = v7 > 0;
  return v4;
}

// 1400C8C2E: conditional instruction was optimized away because cl.1 is in (30..39)

//----- (00000001400C8C70) ----------------------------------------------------
__int64            sub_1400C8C70(_BYTE *a1, __int64 a2, int *a3)
{
  int v3;
  int v4;
  int v6;
  char v7;
  __int64 v8;
  char v9;

  v3 = *a3;
  v4 = 0;
  if ( *a3 < 62 )
  {
    v6 = *a3;
    do
    {
      if ( *(_BYTE *)(v6 + a2) != 32 )
        break;
      *a3 = ++v6;
      v3 = v6;
    }
    while ( v6 < 62 );
  }
  v7 = *(_BYTE *)(v3 + a2);
  if ( (unsigned __int8)(v7 - 97) <= 0x19u || (unsigned __int8)(v7 - 65) <= 0x19u || (unsigned __int8)(v7 - 48) <= 9u )
  {
    *a1 = 0;
  }
  else
  {
    if ( v7 && v3 < 62 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= 2 )
          break;
        v9 = *(_BYTE *)(v3 + a2);
        if ( !v9 )
          break;
        a1[v8] = v9;
        ++v4;
        ++v8;
        v3 = *a3 + 1;
        *a3 = v3;
      }
      while ( v3 < 62 );
    }
    a1[v4] = 0;
    if ( v4 > 0 )
      return 1;
  }
  return 0;
}

//----- (00000001400C8D20) ----------------------------------------------------
__int64            sub_1400C8D20(int a1, int a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  char *v6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C8D20[2096];
#define v9 (*(_BYTE (*)[32])(void *)(sr_frame_1400C8D20 + 0)) /* [rsp+0h] */
#define v10 (*(__m128i (*)[64])(void *)(sr_frame_1400C8D20 + 32)) /* [rsp+20h] */
#define v11 (*(char (*)[1024])(void *)(sr_frame_1400C8D20 + 1056)) /* [rsp+420h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_1400C8D20 + 2080)) /* [rsp+820h] */

  SR_VEC_LANES(128, v10[0], i8)[0] = 0;
  v3 = 110LL * a2;
  v4 = 23;
  v5 = dword_140404A6C[1760 * a2 + 278846112];
  do
  {
    crt_sprintf(v11, "%s\n", (     char *)&dword_140404A6C[16 * (v3 + v5) + 278846114]);
    v6 = &v9[31];
    while ( *++v6 != 0 )
      ;
    strcpy(v6, v11);
    v5 = ((_BYTE)v5 + 1) & 0x1F;
    --v4;
  }
  while ( v4 );
  return sub_1400584B0(a1, v10); /* 0x1400C8DE3: the result of this call is still in rax at the exit */
}
#undef v9
#undef v10
#undef v11
#undef v12

//----- (00000001400C90D0) ----------------------------------------------------
__int64            sub_1400C90D0(int a1)
{
  __int64 v2;

  v2 = 1760LL * a1;
  *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v2 + 278847325]), 0, 0x520u);
  return sub_1400C92B0(a1);
}

//----- (00000001400C9D20) ----------------------------------------------------
unsigned __int64 sub_1400C9D20()
{
  extern void world_update_item_bounds(void);
  /* src/engine/world_items.c; the original's return value is a leftover, no caller reads it. */
  world_update_item_bounds();
  return 0;
}

//----- (00000001400CA740) ----------------------------------------------------
__int64 sub_1400CA740(int item, int bill)
{
  extern unsigned long long item_remove_cash_bill(int item, int bill);
  return (__int64)item_remove_cash_bill(item, bill);
}

//----- (00000001400CA9B0) ----------------------------------------------------
__int64            sub_1400CA9B0(unsigned int a1, unsigned int a2)
{
  extern void world_detach_item(int item, int parent);
  /* src/engine/world_items.c. The original returns a leftover pointer; no caller reads it. */
  world_detach_item((int)a1, (int)a2);
  return 0;
}

//----- (00000001400CDBD0) ----------------------------------------------------
__int64 sub_1400CDBD0(unsigned int block, int part, int layer, int x, int y, int z)
{
  extern unsigned long long item_break_block_part(unsigned int block, int part, int layer, int x, int y, int z);
  return (__int64)item_break_block_part(block, part, layer, x, y, z);
}

//----- (00000001400CE370) ----------------------------------------------------
__int64 sub_1400CE370(void)
{
  /* src/engine/item_physics.c */
  extern void item_update_physics(void);
  item_update_physics();
  return 0;
}

//----- (00000001400CF610) ----------------------------------------------------
void            sub_1400CF610()
{
  int v0;
  unsigned int *v1;
  int v2;

  v0 = 0;
  v1 = &g_182BBB19C;
  do
  {
    if ( *(v1 - 7) )
    {
      v2 = *v1;
      if ( (int)*v1 < 0xFFFF )
        *v1 = --v2;
      if ( v2 <= 0 )
        sub_14007F970(v0);
    }
    ++v0;
    v1 += 1760;
  }
  while ( v0 < 1024 );
}

//----- (00000001400CFC80) ----------------------------------------------------
void sub_1400CFC80(int a1,unsigned a2,float x,float y,float width,float height,unsigned flags)
{
  (void)a2;
  float outer=0.625f,inner=(flags&1)?0.5f:0.0f;
  if(flags&8){outer=0.25f;inner=0.0f;}
  unsigned color=sr_text_float_bits(outer);
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,color,color,color,0x3f800000);
  color=sr_text_float_bits(inner);
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,color,color,color,0x3f800000);
  __int64 row=23LL*a1;
  float middle=height*0.5f+y;
  sr_text_draw_recovered((char *)&dword_140404A6C[row+179473704],x+4.0f,middle,16.0f,68,1,1,1,1,NULL);
  uint64_t ping[]={dword_140404A6C[row+179473720]};
  sr_text_draw_recovered("/i",480.0f,middle,16.0f,6,1,1,1,1,ping);
  uint64_t players[]={dword_140404A6C[row+179473717],dword_140404A6C[row+179473719]};
  sr_text_draw_recovered("/i///i",560.0f,middle,16.0f,6,1,1,1,1,players);
  unsigned mode=dword_140404A6C[row+179473721];
  if(mode==5)sr_text_draw_recovered("Eliminator",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==3)sr_text_draw_recovered("Round",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==4)sr_text_draw_recovered("World",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==7)sr_text_draw_recovered("Versus",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  uint64_t version[]={dword_140404A6C[row+179473701],(uint32_t)(dword_140404A6C[row+179473702]+97u)};
  sr_text_draw_recovered("Alpha /i/c",784.0f,middle,16.0f,6,1,1,1,1,version);
  if(dword_140404A6C[row+179473723])sr_text_draw_recovered("Yes",878.0f,middle,16.0f,6,1,1,1,1,NULL);
}

//----- (00000001400D00F0) ----------------------------------------------------
__int64            sub_1400D00F0(int a1)
{
  int v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  __int64 v18;
  float v19;
  __int64 v20;
  int v21;
  __int16 v22;
  unsigned int v23;
  unsigned int v24;
  float v25;
  unsigned int v26;
  float v27;
  float v28;
  int v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  int v38;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D00F0[272];
#define v40 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 0)) /* [rsp+20h] */
#define v41 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 4)) /* [rsp+24h] */
#define v42 (*(__int16 (*))(void *)(sr_frame_1400D00F0 + 8)) /* [rsp+28h] */
#define v43 (*(__int64 (*))(void *)(sr_frame_1400D00F0 + 16)) /* [rsp+30h] */
#define v44 (*(__int64 (*))(void *)(sr_frame_1400D00F0 + 24)) /* [rsp+38h] */
#define v45 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 240)) /* [rsp+110h] */
#define v46 (*(int (*))(void *)(sr_frame_1400D00F0 + 248)) /* [rsp+118h] */
#define v47 (*(int (*))(void *)(sr_frame_1400D00F0 + 256)) /* [rsp+120h] */
#define v48 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 264)) /* [rsp+128h] */

  v1 = -1;
  v2 = -1;
  v44 = a1;
  v3 = 3336LL * a1;
  v47 = -1;
  v4 = *(_QWORD *)&dword_140404A6C[v3 + 272034683];
  v5 = *(float *)&dword_140404A6C[v3 + 272034677];
  v6 = *(float *)&dword_140404A6C[v3 + 272034678];
  v7 = *(float *)&dword_140404A6C[v3 + 272034679];
  v8 = dword_140404A6C[v3 + 272034680] << 11;
  v9 = dword_140404A6C[v3 + 272034681] << 11;
  v10 = 0;
  v48 = v8;
  v46 = 0;
  v45 = v9;
  v43 = v4;
  do
  {
    if ( v1 >= 0 )
    {
      v11 = v1;
      if ( v1 > 2048 )
        v11 = 2048;
    }
    else
    {
      v11 = 0;
    }
    v12 = 2049LL * v11;
    v13 = -1;
    v14 = -1;
    v15 = -1;
    v40 = (int)(v9 + v11 - 128) >> 11;
    v42 = v11 + v9 + 128;
    v41 = (int)(v11 + v9 + 128) >> 11;
    v16 = 6 * v10;
    do
    {
      if ( v14 >= 0 )
      {
        if ( v14 <= 2048 )
        {
          v17 = v14;
          v18 = v13;
        }
        else
        {
          v17 = 2048;
          v18 = 2048;
        }
      }
      else
      {
        v17 = 0;
        v18 = 0;
      }
      if ( v15 > 0x800 || v2 > 0x800 )
        v19 = *(float *)(v4 + 4 * (v12 + v18)) - 16.0;
      else
        v19 = *(float *)(v4 + 4 * (v12 + v18));
      v20 = v16;
      v21 = v8 + v17;
      v22 = v8 + v17 - 128;
      v23 = (v21 - 128) >> 11;
      *(float *)&dword_140404A6C[v16 + 271182638] = v19 + v6;
      *(float *)&dword_140404A6C[v16 + 271182639] = (float)v11 + v7;
      *(float *)&dword_140404A6C[v16 + 271182637] = v5 + (float)v17;
      v24 = (int)(v11 + v45) >> 11;
      if ( v23 > 7 || v24 > 7 )
        v25 = 0.0;
      else
        v25 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v23 + 8 * v24) + 272034683]
                       + 4LL * (2049 * (((_WORD)v11 + (_WORD)v45) & 0x7FF) + (v22 & 0x7FFu)));
      v26 = (v21 + 128) >> 11;
      if ( v26 > 7 || v24 > 7 )
        v27 = 0.0;
      else
        v27 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v26 + 8 * v24) + 272034683]
                       + 4LL * (2049 * (v11 & 0x7FF) + (((_WORD)v21 + 128) & 0x7FFu)));
      v28 = v25 - v27;
      v29 = v21 >> 11;
      if ( (unsigned int)(v21 >> 11) > 7 )
      {
        v30 = 0.0;
      }
      else
      {
        if ( v40 > 7 )
          v30 = 0.0;
        else
          v30 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v29 + 8 * v40) + 272034683]
                         + 4LL * ((v21 & 0x7FF) + 2049 * (((_WORD)v11 + (_WORD)v45 - 128) & 0x7FFu)));
        if ( v41 <= 7 )
        {
          v31 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v29 + 8 * v41) + 272034683]
                         + 4LL * ((v17 & 0x7FF) + 2049 * (v42 & 0x7FFu)));
          goto LABEL_32;
        }
      }
      v31 = 0.0;
LABEL_32:
      v32 = v30 - v31;
      v33 = v32 * 0.0078125;
      v34 = fsqrt((float)((float)((float)(v32 * v32) + (float)(v28 * v28)) * 0.000061035156) + 1.0);
      if ( v34 == 0.0 )
      {
        v36 = 0.0;
        v35 = 0.0;
        v37 = 0.0;
      }
      else
      {
        v35 = 1.0 / v34;
        v36 = (float)(1.0 / v34) * (float)(v28 * 0.0078125);
        v37 = v35 * v33;
      }
      v10 = v46 + 1;
      *(float *)&dword_140404A6C[v16 + 271182640] = v36;
      v16 += 6;
      *(float *)&dword_140404A6C[v20 + 271182641] = v35;
      *(float *)&dword_140404A6C[v20 + 271182642] = v37;
      ++v46;
      if ( v15 <= 0x7FF )
      {
        v14 += 127;
        v15 += 127;
        v13 += 127;
      }
      v4 = v43;
      ++v14;
      v8 = v48;
      ++v15;
      ++v13;
    }
    while ( v14 <= 2049 );
    v38 = v47;
    if ( v2 <= 0x7FF )
    {
      v38 = v47 + 127;
      v2 += 127;
    }
    v9 = v45;
    v1 = v38 + 1;
    ++v2;
    v47 = v1;
  }
  while ( v1 <= 2049 );
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v44 + 283791496] + 283793813]);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))glBufferData)(34962, 24 * v10, &g_180E7F720, 35048);
}
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48

//----- (00000001400D05B0) ----------------------------------------------------
__int64            sub_1400D05B0(int *a1, float *a2, float *a3)
{
  float *v4;
  __int64 result;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  int v29;
  float *v30;
  float *v31;
  int v32;
  int v33;
  float *v34;
  int v35;
  float *v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float *v41;
  __int64 v42;
  float v43;
  float *v44;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D05B0[16];
#define v46 (*(unsigned int (*))(void *)(sr_frame_1400D05B0 + 0)) /* [rsp+100h] */
#define v47 (*(int (*))(void *)(sr_frame_1400D05B0 + 8)) /* [rsp+108h] */

  v4 = a2;
  result = (unsigned int)(int)(float)(*a2 - g_181290040);
  v6 = (int)(float)(a3[2] - g_181290048);
  v46 = (int)(float)(*a2 - g_181290040);
  v7 = (int)(float)(*a3 - g_181290040);
  v47 = v6;
  v8 = (int)(float)(a2[2] - g_181290048);
  if ( v8 > v6 )
    return result;
  do
  {
    v9 = result;
    if ( (int)result > v7 )
      goto LABEL_52;
    v10 = v8 >> 11;
    do
    {
      if ( (unsigned int)(v9 >> 11) > 7 )
        goto LABEL_50;
      if ( v10 > 7 )
        goto LABEL_50;
      v11 = v8 >> 2;
      if ( (unsigned int)(v9 >> 2) > 0xFFF )
        goto LABEL_50;
      if ( v11 > 0xFFF )
        goto LABEL_50;
      v12 = *(unsigned __int16 *)(g_181290050 + 2LL * ((v9 >> 4) + (v8 >> 4 << 10)));
      if ( !_bittest(&v12, (unsigned __int8)(((v9 >> 2) & 3) + 4 * (v11 & 3))) )
        goto LABEL_50;
      v13 = 3336LL * (int)((v9 >> 11) + 8 * v10);
      v14 = *(_QWORD *)&dword_140404A6C[v13 + 272034683];
      v15 = *(float *)&dword_140404A6C[v13 + 272034678];
      v16 = *(float *)&dword_140404A6C[v13 + 272034677];
      v17 = *(float *)&dword_140404A6C[v13 + 272034679];
      v18 = (float)(v9 & 0x7FF) + v16;
      v19 = (v9 & 0x7FF) + 2049 * (v8 & 0x7FFu);
      v20 = v15 + *(float *)(v14 + 4 * v19);
      v21 = v15 + *(float *)(v14 + 4 * v19 + 4);
      v22 = v15 + *(float *)(v14 + 4 * v19 + 8200);
      v23 = v15 + *(float *)(v14 + 4 * v19 + 8196);
      v24 = (float)((v8 & 0x7FF) + 1) + v17;
      v25 = (float)(v8 & 0x7FF) + v17;
      v26 = (float)((v9 & 0x7FF) + 1) + v16;
      if ( a1[8193] >= 1023 )
        goto LABEL_50;
      v27 = v4[1];
      if ( v20 <= v27 && v21 <= v27 && v22 <= v27 && v23 <= v27 )
        goto LABEL_50;
      v28 = *a1;
      v29 = 0;
      if ( (int)v28 > 0 )
      {
        v30 = (float *)(a1 + 3);
        while ( fabs(v18 - *(v30 - 1)) >= 0.000061035156
             || fabs(v20 - *v30) >= 0.000061035156
             || fabs(v25 - v30[1]) >= 0.000061035156 )
        {
          ++v29;
          v30 += 4;
          if ( v29 >= (int)v28 )
            goto LABEL_20;
        }
LABEL_23:
        v31 = (float *)(a1 + 3);
        v32 = 0;
        while ( fabs(v26 - *(v31 - 1)) >= 0.000061035156
             || fabs(v21 - *v31) >= 0.000061035156
             || fabs(v25 - v31[1]) >= 0.000061035156 )
        {
          LODWORD(v28) = *a1;
          ++v32;
          v31 += 4;
          if ( v32 >= *a1 )
            goto LABEL_28;
        }
        goto LABEL_31;
      }
LABEL_20:
      if ( (int)v28 < 2048 )
      {
        v28 *= 2;
        *(float *)&a1[2 * v28 + 2] = v18;
        *(float *)&a1[2 * v28 + 3] = v20;
        *(float *)&a1[2 * v28 + 4] = v25;
        LODWORD(v28) = *a1 + 1;
        *a1 = v28;
      }
      v29 = v28 - 1;
      if ( (int)v28 > 0 )
        goto LABEL_23;
LABEL_28:
      if ( (int)v28 < 2048 )
      {
        v28 = 2LL * (int)v28;
        *(float *)&a1[2 * v28 + 2] = v26;
        *(float *)&a1[2 * v28 + 3] = v21;
        *(float *)&a1[2 * v28 + 4] = v25;
        LODWORD(v28) = *a1 + 1;
        *a1 = v28;
      }
      v32 = v28 - 1;
LABEL_31:
      v33 = 0;
      if ( (int)v28 <= 0 )
      {
LABEL_37:
        if ( (int)v28 < 2048 )
        {
          v28 = 2LL * (int)v28;
          *(float *)&a1[2 * v28 + 2] = v26;
          *(float *)&a1[2 * v28 + 3] = v22;
          *(float *)&a1[2 * v28 + 4] = v24;
          LODWORD(v28) = *a1 + 1;
          *a1 = v28;
        }
        v33 = v28 - 1;
      }
      else
      {
        v34 = (float *)(a1 + 3);
        while ( fabs(v26 - *(v34 - 1)) >= 0.000061035156
             || fabs(v22 - *v34) >= 0.000061035156
             || fabs(v24 - v34[1]) >= 0.000061035156 )
        {
          LODWORD(v28) = *a1;
          ++v33;
          v34 += 4;
          if ( v33 >= *a1 )
            goto LABEL_37;
        }
      }
      v35 = 0;
      if ( (int)v28 <= 0 )
      {
LABEL_46:
        if ( (int)v28 < 2048 )
        {
          v28 = 2LL * (int)v28;
          *(float *)&a1[2 * v28 + 2] = v18;
          *(float *)&a1[2 * v28 + 3] = v23;
          *(float *)&a1[2 * v28 + 4] = v24;
          LODWORD(v28) = *a1 + 1;
          *a1 = v28;
        }
        v35 = v28 - 1;
      }
      else
      {
        v36 = (float *)(a1 + 3);
        while ( fabs(v18 - *(v36 - 1)) >= 0.000061035156
             || fabs(v23 - *v36) >= 0.000061035156
             || fabs(v24 - v36[1]) >= 0.000061035156 )
        {
          LODWORD(v28) = *a1;
          ++v35;
          v36 += 4;
          if ( v35 >= *a1 )
            goto LABEL_46;
        }
      }
      v37 = v21 - v20;
      v38 = v26 - v18;
      v39 = v24 - v25;
      v40 = v22 - v20;
      a1[8 * a1[8193] + 8194] = 3;
      a1[8 * a1[8193] + 8195] = v29;
      a1[8 * a1[8193] + 8196] = v32;
      a1[8 * a1[8193] + 8197] = v33;
      v41 = (float *)&a1[8 * a1[8193] + 8199];
      *v41 = -(float)(v39 * v37);
      v41[1] = v39 * v38;
      v41[2] = (float)(v37 * v38) - (float)(v40 * v38);
      sub_14007A240((__int64)v41, v41);
      v42 = a1[8193];
      v43 = v23 - v20;
      a1[8193] = v42 + 1;
      a1[8 * v42 + 8202] = 3;
      a1[8 * a1[8193] + 8195] = v29;
      a1[8 * a1[8193] + 8196] = v33;
      a1[8 * a1[8193] + 8197] = v35;
      v44 = (float *)&a1[8 * a1[8193] + 8199];
      *v44 = (float)(v43 * v39) - (float)(v39 * v40);
      v44[1] = v39 * v38;
      v44[2] = -(float)(v43 * v38);
      sub_14007A240((__int64)v44, v44);
      ++a1[8193];
      v4 = a2;
LABEL_50:
      ++v9;
    }
    while ( v9 <= v7 );
    result = v46;
    v6 = v47;
LABEL_52:
    ++v8;
  }
  while ( v8 <= v6 );
  return result;
}
#undef v46
#undef v47

//----- (00000001400D0C10) ----------------------------------------------------
double            sub_1400D0C10(signed int a1, signed int a2, int a3)
{
  double result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  float v24;
  float v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  float v33;
  int v34;
  float v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  float v40;
  int v41;
  unsigned int v42;
  float v43;
  int v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  int v53;
  int v54;
  signed int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D0C10[288];
#define v59 (*(int (*))(void *)(sr_frame_1400D0C10 + 0)) /* [rsp+20h] */
#define v60 (*(int (*))(void *)(sr_frame_1400D0C10 + 4)) /* [rsp+24h] */
#define v61 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 8)) /* [rsp+28h] */
#define v62 (*(__int16 (*))(void *)(sr_frame_1400D0C10 + 12)) /* [rsp+2Ch] */
#define v63 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 16)) /* [rsp+30h] */
#define v64 (*(int (*))(void *)(sr_frame_1400D0C10 + 20)) /* [rsp+34h] */
#define v65 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 24)) /* [rsp+38h] */
#define v66 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 28)) /* [rsp+3Ch] */
#define v67 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 32)) /* [rsp+40h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 40)) /* [rsp+48h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 48)) /* [rsp+50h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 56)) /* [rsp+58h] */
#define v73 (*(int (*))(void *)(sr_frame_1400D0C10 + 272)) /* [rsp+130h] */
#define v74 (*(int (*))(void *)(sr_frame_1400D0C10 + 280)) /* [rsp+138h] */

  v4 = a2;
  v5 = a1;
  v6 = 13LL * a2;
  v7 = a3;
  v68 = a3;
  v70 = a3 + v6 + 3336LL * a1;
  v8 = (int)dword_140404A6C[v70 + 272034690];
  if ( (_DWORD)v8 != -1 )
  {
    dword_140404A6C[24582 * a3 + 271838029 + 3 * v8] = 4;
    return result;
  }
  v9 = -1;
  v10 = 0;
  v11 = 0;
  v12 = -1;
  v13 = 1 << a3;
  v14 = 98328 * v7;
  v15 = 3336LL * a1;
  v69 = v14;
  v16 = v13 - 1;
  *(unsigned int *)((char *)&g_1810FF780 + v14) = 6;
  v17 = *(float *)&dword_140404A6C[v15 + 272034677];
  v18 = *(float *)&dword_140404A6C[v15 + 272034678];
  v19 = v15 * 4 + 52 * v4;
  v20 = *(_QWORD *)&dword_140404A6C[3336 * v5 + 272034683];
  LODWORD(v14) = dword_140404A6C[3336 * v5 + 272034680] << 11;
  v21 = *(unsigned int *)((char *)&g_1811BF870 + v19) << 7;
  v22 = *(unsigned int *)((char *)&g_1811BF86C + v19) << 7;
  v23 = dword_140404A6C[v15 + 272034681] << 11;
  v24 = *(float *)&dword_140404A6C[v15 + 272034679];
  v74 = v14;
  v66 = v23;
  v73 = v13;
  v25 = 1.0 / (float)((float)(v13 - 1) + 1.0);
  v59 = 0;
  v65 = v21;
  v60 = -1;
  v67 = v20;
  do
  {
    if ( v9 >= 0 )
    {
      v26 = v9;
      if ( v9 > 128 )
        v26 = 128;
    }
    else
    {
      v26 = 0;
    }
    v27 = -1;
    v28 = 2049 * (v26 + v21);
    v29 = v21 + v26 + v23;
    v64 = v28;
    v30 = v21 + v23 + v26 - v16 - 1;
    v31 = -1;
    v62 = v30;
    v63 = (v13 + v29) >> 11;
    v32 = 6 * v11;
    v61 = v30 >> 11;
    v33 = (float)(int)(v26 + v21) + v24;
    do
    {
      if ( v27 >= 0 )
      {
        v34 = v27;
        if ( v27 > 128 )
          v34 = 128;
      }
      else
      {
        v34 = 0;
      }
      if ( v31 > 0x80 || v12 > 0x80 )
        v35 = *(float *)(v20 + 4LL * (int)(v22 + v28 + v34)) - 16.0;
      else
        v35 = *(float *)(v20 + 4LL * (int)(v22 + v28 + v34));
      v36 = v32;
      v37 = v74 + v34 - v16;
      *(float *)&dword_140404A6C[v32 + 271182638] = v35 + v18;
      *(float *)&dword_140404A6C[v32 + 271182639] = v33;
      *(float *)&dword_140404A6C[v32 + 271182637] = v17 + (float)(int)(v34 + v22);
      v38 = v29 >> 11;
      v39 = (int)(v37 + v22 - 1) >> 11;
      if ( v39 > 7 || v38 > 7 )
        v40 = 0.0;
      else
        v40 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v39 + 8 * v38) + 272034683]
                       + 4LL * (2049 * (v29 & 0x7FF) + (((_WORD)v37 + (_WORD)v22 - 1) & 0x7FFu)));
      v41 = v22 + v34 + v74;
      v42 = (v41 + v73) >> 11;
      if ( v42 > 7 || v38 > 7 )
        v43 = 0.0;
      else
        v43 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v42 + 8 * v38) + 272034683]
                       + 4LL * (2049 * (v29 & 0x7FF) + (((_WORD)v41 + (_WORD)v73) & 0x7FFu)));
      v44 = v41 >> 11;
      v45 = (float)(v40 - v43) * v25;
      if ( (unsigned int)(v41 >> 11) > 7 )
      {
        v46 = 0.0;
      }
      else
      {
        if ( v61 > 7 )
          v46 = 0.0;
        else
          v46 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v44 + 8 * v61) + 272034683]
                         + 4LL * ((v41 & 0x7FF) + 2049 * (v62 & 0x7FFu)));
        if ( v63 <= 7 )
        {
          v47 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v44 + 8 * v63) + 272034683]
                         + 4LL * ((v41 & 0x7FF) + 2049 * (((_WORD)v29 + (_WORD)v73) & 0x7FFu)));
          goto LABEL_33;
        }
      }
      v47 = 0.0;
LABEL_33:
      v48 = (float)(v46 - v47) * v25;
      v49 = fsqrt((float)((float)(v45 * v45) + 1.0) + (float)(v48 * v48));
      if ( v49 == 0.0 )
      {
        v51 = 0.0;
        v50 = 0.0;
        v52 = 0.0;
      }
      else
      {
        v50 = 1.0 / v49;
        v51 = (float)(1.0 / v49) * v45;
        v52 = (float)(1.0 / v49) * v48;
      }
      v32 += 6;
      *(float *)&dword_140404A6C[v36 + 271182640] = v51;
      *(float *)&dword_140404A6C[v36 + 271182641] = v50;
      *(float *)&dword_140404A6C[v36 + 271182642] = v52;
      v11 = ++v59;
      if ( v31 <= 0x7F )
      {
        v27 += v16;
        v31 += v16;
      }
      v28 = v64;
      ++v27;
      v20 = v67;
      ++v31;
    }
    while ( v27 <= 129 );
    v53 = v60;
    if ( v12 <= 0x7F )
    {
      v53 = v16 + v60;
      v12 += v16;
    }
    v13 = v73;
    v9 = v53 + 1;
    v21 = v65;
    ++v12;
    v23 = v66;
    v60 = v9;
  }
  while ( v9 <= 129 );
  v54 = *(unsigned int *)((char *)&g_1810FF788 + v69);
  v55 = (v54 - 1) & (*(unsigned int *)((char *)&g_1810FF794 + v69) + 1);
  *(unsigned int *)((char *)&g_1810FF794 + v69) = v55;
  if ( v54 > 0 )
  {
    do
    {
      if ( (int)dword_140404A6C[24582 * v68 + 271838029 + 3 * v55] <= 0 )
        break;
      v55 = (v54 - 1) & (v55 + 1);
      ++v10;
      *(unsigned int *)((char *)&g_1810FF794 + v69) = v55;
    }
    while ( v10 < v54 );
  }
  v56 = v55 + 8194 * v68;
  v57 = (int)dword_140404A6C[3 * v56 + 271838027];
  if ( (unsigned int)v57 <= 0x3F )
  {
    v58 = (int)dword_140404A6C[3 * v56 + 271838028];
    if ( (unsigned int)v58 <= 0xFF )
      dword_140404A6C[3336 * v57 + 272034690 + 13 * v58 + v68] = -1;
  }
  dword_140404A6C[3 * v56 + 271838027] = a1;
  dword_140404A6C[3 * v56 + 271838028] = a2;
  dword_140404A6C[3 * v56 + 271838029] = 4;
  dword_140404A6C[v70 + 272034690] = v55;
  ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34962, dword_140404A6C[2 * dword_140404A6C[v68 + 283791752] + 283793813], 3 * v56);
  return ((double (*)(_QWORD, _QWORD, _QWORD, _QWORD))glBufferSubData)(
           34962,
           (int)(v55 * *(unsigned int *)((char *)&g_1810FF790 + v69)),
           (int)(4 * *(unsigned int *)((char *)&g_1810FF780 + v69) * v11),
           &g_180E7F720);
}
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v73
#undef v74

//----- (00000001400D26A0) ----------------------------------------------------
unsigned int *           sub_1400D26A0(float *a1)
{
  int v1;
  float *v2;
  unsigned int *v3;
  int v4;
  unsigned int *v5;
  int v6;
  unsigned int *v7;
  int v8;
  unsigned int *v9;
  int v10;
  unsigned int *v11;
  int v12;
  unsigned int *v13;
  int v14;
  unsigned int *v15;
  unsigned int *result;
  float *v17;
  signed int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  _DWORD *v22;
  int v23;
  __int64 i;
  float v25;
  float v26;
  float v27;
  int v28;
  __int64 v29;
  unsigned int *v30;
  signed int v31;
  unsigned int *v33;

  v1 = 0;
  v2 = a1;
  g_180E6F600 = 0;
  if ( (int)g_1810FF788 > 0 )
  {
    v3 = &g_1810FF7A0;
    do
    {
      if ( (*(v3 - 2) & 0x80000000) != 0 )
      {
        *v3 = 0;
      }
      else if ( (int)*v3 > 0 )
      {
        --*v3;
      }
      ++v1;
      v3 += 3;
    }
    while ( v1 < (int)g_1810FF788 );
  }
  v4 = 0;
  g_180E6F604 = 0;
  if ( (int)g_1811177A0 > 0 )
  {
    v5 = &g_1811177B8;
    do
    {
      if ( (*(v5 - 2) & 0x80000000) != 0 )
      {
        *v5 = 0;
      }
      else if ( (int)*v5 > 0 )
      {
        --*v5;
      }
      ++v4;
      v5 += 3;
    }
    while ( v4 < (int)g_1811177A0 );
  }
  v6 = 0;
  g_180E6F608 = 0;
  if ( (int)g_18112F7B8 > 0 )
  {
    v7 = &g_18112F7D0;
    do
    {
      if ( (*(v7 - 2) & 0x80000000) != 0 )
      {
        *v7 = 0;
      }
      else if ( (int)*v7 > 0 )
      {
        --*v7;
      }
      ++v6;
      v7 += 3;
    }
    while ( v6 < (int)g_18112F7B8 );
  }
  v8 = 0;
  g_180E6F60C = 0;
  if ( (int)g_1811477D0 > 0 )
  {
    v9 = &g_1811477E8;
    do
    {
      if ( (*(v9 - 2) & 0x80000000) != 0 )
      {
        *v9 = 0;
      }
      else if ( (int)*v9 > 0 )
      {
        --*v9;
      }
      ++v8;
      v9 += 3;
    }
    while ( v8 < (int)g_1811477D0 );
  }
  v10 = 0;
  g_180E6F610 = 0;
  if ( (int)g_18115F7E8 > 0 )
  {
    v11 = &g_18115F800;
    do
    {
      if ( (*(v11 - 2) & 0x80000000) != 0 )
      {
        *v11 = 0;
      }
      else if ( (int)*v11 > 0 )
      {
        --*v11;
      }
      ++v10;
      v11 += 3;
    }
    while ( v10 < (int)g_18115F7E8 );
  }
  v12 = 0;
  g_180E6F614 = 0;
  if ( (int)g_181177800 > 0 )
  {
    v13 = &g_181177818;
    do
    {
      if ( (*(v13 - 2) & 0x80000000) != 0 )
      {
        *v13 = 0;
      }
      else if ( (int)*v13 > 0 )
      {
        --*v13;
      }
      ++v12;
      v13 += 3;
    }
    while ( v12 < (int)g_181177800 );
  }
  v14 = 0;
  g_180E6F618 = 0;
  if ( (int)g_18118F818 > 0 )
  {
    v15 = &g_18118F830;
    do
    {
      if ( (*(v15 - 2) & 0x80000000) != 0 )
      {
        *v15 = 0;
      }
      else if ( (int)*v15 > 0 )
      {
        --*v15;
      }
      ++v14;
      v15 += 3;
    }
    while ( v14 < (int)g_18118F818 );
  }
  result = &g_180E6F620;
  v17 = (float *)&g_1811BF848;
  v18 = 0;
  v19 = 0;
  v33 = &g_180E6F620;
  do
  {
    if ( (float)((float)((float)((float)(v2[1] - *(v17 - 1)) * (float)(v2[1] - *(v17 - 1)))
                       + (float)((float)(*v2 - (float)(*(v17 - 2) + 1024.0))
                               * (float)(*v2 - (float)(*(v17 - 2) + 1024.0))))
               + (float)((float)(v2[2] - (float)(*v17 + 1024.0)) * (float)(v2[2] - (float)(*v17 + 1024.0)))) >= 16777216.0 )
    {
      *result = 0;
      goto LABEL_78;
    }
    v20 = 0;
    *result = 1;
    v21 = 0;
    v22 = v17 + 10;
    do
    {
      v23 = 0;
      for ( i = 0; i < 16; ++i )
      {
        v25 = *v2 - (float)((float)((float)(int)(*(v22 - 1) << 7) + *(v17 - 2)) + 64.0);
        v26 = (float)((float)(int)(*v22 << 7) + *v17) + 64.0;
        v27 = (float)((float)(v25 * v25) + (float)((float)(v2[1] - *(v17 - 1)) * (float)(v2[1] - *(v17 - 1))))
            + (float)((float)(v2[2] - v26) * (float)(v2[2] - v26));
        if ( v27 >= 262144.0 )
        {
          if ( v27 >= 589824.0 )
          {
            if ( v27 >= 1048576.0 )
            {
              if ( v27 >= 2359296.0 )
              {
                if ( v27 >= 4194304.0 )
                {
                  if ( v27 >= 9437184.0 )
                  {
                    v29 = 6;
                    v28 = 6;
                    goto LABEL_73;
                  }
                  v29 = 5;
                }
                else
                {
                  v29 = 4;
                }
              }
              else
              {
                v29 = 3;
              }
            }
            else
            {
              v29 = 2;
            }
          }
          else
          {
            v29 = 1;
          }
          v28 = v29;
        }
        else
        {
          v28 = 0;
          v29 = 0;
        }
        v30 = &dword_140404A6C[24582 * v29 + 271838023];
        do
        {
          if ( (int)dword_140404A6C[v29 + 271166181] < (int)*v30 )
            break;
          ++v28;
          ++v29;
          v30 += 24582;
        }
        while ( (__int64)v30 < (__int64)&g_18118F818 );
LABEL_73:
        v31 = dword_140404A6C[v29 + 271166181];
        if ( v31 < (int)dword_140404A6C[24582 * v29 + 271838023] )
        {
          dword_140404A6C[v29 + 271166181] = v31 + 1;
          dword_140404A6C[i + 271166190 + v19 + v21] = v28;
          sub_1400D0C10(v18, v20 + v23, v28);
          v2 = a1;
        }
        ++v23;
        v22 += 13;
      }
      v20 += 16;
      v21 += 16;
    }
    while ( v20 < 256 );
    result = v33;
LABEL_78:
    result += 257;
    ++v18;
    v17 += 3336;
    v33 = result;
    v19 += 257;
  }
  while ( v18 < 64 );
  return result;
}

//----- (00000001400D2B90) ----------------------------------------------------
__int64            sub_1400D2B90(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D2B90[80];
#define v5 (*(_DWORD (*)[10])(void *)(sr_frame_1400D2B90 + 0)) /* [rsp+0h] */
#define v6 (*(__int64 (*))(void *)(sr_frame_1400D2B90 + 40)) /* [rsp+28h] */
#define v7 (*(__int128 (*))(void *)(sr_frame_1400D2B90 + 48)) /* [rsp+30h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_1400D2B90 + 64)) /* [rsp+40h] */

  v1 = a1;
  v7 = xmmword_140279700;
  glVertexAttrib4fv(2, &v7);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C58 + 283793814]);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v1 + 283791496] + 283793813]);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(0));
  v6 = 12;
  v5[8] = 24;
  glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(12));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * g_1811477CC),5125,NULL);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v5
#undef v6
#undef v7
#undef v8

//----- (00000001400D3190) ----------------------------------------------------
__int64 sub_1400D3190()
{
  int v0;
  unsigned int *v1;
  unsigned int *v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 result;

  v0 = 1;
  v1 = &g_183E98C4C;
  v2 = &g_1810FF784;
  v3 = 7;
  do
  {
    v4 = 0;
    g_180FFF760 = 0;
    v5 = 0;
    v6 = 128 / v0;
    v7 = 128 / v0 + 2;
    if ( v7 > 0 )
    {
      do
      {
        ++v5;
        v8 = (unsigned int)v7;
        v9 = (v6 + 3) * v5 + 1;
        do
        {
          v10 = v9 - 1 - (v6 + 3);
          dword_140404A6C[3 * (_DWORD)v4 + 271575870] = v10;
          dword_140404A6C[3 * g_180FFF760 + 271575871] = v9 - (v6 + 3);
          v11 = v9 - 1;
          dword_140404A6C[3 * g_180FFF760++ + 271575872] = v9;
          dword_140404A6C[3 * g_180FFF760 + 271575870] = v10;
          dword_140404A6C[3 * g_180FFF760 + 271575871] = v9++;
          dword_140404A6C[3 * g_180FFF760 + 271575872] = v11;
          v4 = ++g_180FFF760;
          --v8;
        }
        while ( v8 );
      }
      while ( v5 < v7 );
    }
    v12 = (int)*v1;
    *v2 = v4;
    glBindBuffer(34963, dword_140404A6C[2 * v12 + 283793814]);
    result = ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))glBufferData)(34963, 12 * g_180FFF760, &g_180FFF764, 35044);
    v0 = __ROL4__(v0, 1);
    v2 += 24582;
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (00000001400D40C0) ----------------------------------------------------
double            sub_1400D40C0(double result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  signed int v4;
  unsigned __int64 v5;
  __int64 v6;
  signed int v7;
  __int64 i;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  signed int v15;

  v1 = g_183EBF154;
  v2 = 44LL * (int)g_183EBF154;
  dword_140404A6C[v2 + 284024933] = 2048;
  dword_140404A6C[v2 + 284024934] = 2048;
  dword_140404A6C[v2 + 284024935] = 1;
  dword_140404A6C[v2 + 284024936] = 6408;
  dword_140404A6C[v2 + 284024937] = 6408;
  dword_140404A6C[v2 + 284024943] = 0;
  dword_140404A6C[v2 + 284024938] = 33071;
  dword_140404A6C[v2 + 284024939] = 33071;
  dword_140404A6C[v2 + 284024940] = 9729;
  dword_140404A6C[v2 + 284024941] = 9987;
  if ( *(_QWORD *)&dword_140404A6C[v2 + 284024945]
    || (v3 = sr_path_malloc(0x1000000), (*(_QWORD *)&dword_140404A6C[v2 + 284024945] = v3) != 0) )
  {
    v4 = 0;
    if ( (int)dword_140404A6C[v2 + 284024934] > 0 )
    {
      v5 = -1;
      v6 = 0;
      do
      {
        v7 = 0;
        for ( i = 0;
              v7 < (int)dword_140404A6C[v2 + 284024933];
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v2 + 284024945] + 4LL * v15) = ((int)(float)((float)(v12 * 127.0)
                                                                                                 + 128.0) << 8)
                                                                                   - ((int)(float)((float)(v14 * 127.0)
                                                                                                 + -128.0) << 16)
                                                                                   - 0x1000000
                                                                                   + (int)(float)((float)(v13 * 127.0)
                                                                                                + 128.0) )
        {
          v9 = 0.0;
          v10 = 0.0;
          if ( (unsigned __int64)(i - 1) <= 0x7FE )
            v9 = (float)(*(float *)&dword_140404A6C[v6 + 188872559 + i] - *(float *)&dword_140404A6C[v6 + 188872561 + i])
               * 0.5;
          if ( v5 <= 0x7FE )
            v10 = (float)(*(float *)&dword_140404A6C[v6 + 188874609 + i] - *(float *)&dword_140404A6C[v6 + 188870511 + i])
                * 0.5;
          v11 = fsqrt((float)((float)(v9 * v9) + 1.0) + (float)(v10 * v10));
          if ( v11 == 0.0 )
          {
            v13 = 0.0;
            v12 = 0.0;
            v14 = 0.0;
          }
          else
          {
            v12 = 1.0 / v11;
            v13 = v9 * (float)(1.0 / v11);
            v14 = v10 * (float)(1.0 / v11);
          }
          ++i;
          v15 = v7 + dword_140404A6C[v2 + 284024933] * (dword_140404A6C[v2 + 284024934] - v4 - 1);
          ++v7;
        }
        ++v4;
        ++v5;
        v6 += 2049;
      }
      while ( v4 < (int)dword_140404A6C[v2 + 284024934] );
    }
    sub_14014D3E0(v1, 0);
    return ((double (*)(_QWORD))glGenerateMipmap)(3553);
  }
  return result;
}

//----- (00000001400D4740) ----------------------------------------------------
__int64            sub_1400D4740(__int64 a1)
{
  return ((__int64 (           *)(_QWORD,      char *, __int64, char *,      char *, int))ShellExecuteA)(
           0,
           "open",
           a1,
           Parameters,
           "c:\\",
           1);
}

// 14026E558: invalid function type 'HINSTANCE (__stdcall *ShellExecuteA)(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd)' has been ignored

//----- (00000001400D47A0) ----------------------------------------------------
__m128            sub_1400D47A0(float a1, float a2, int a3)
{
  __int128 v4;
  int v5;
  int v6;
  int v7;
  int v8;
  float v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v4 = 0x3F800000u;
  v5 = (int)a1;
  v6 = 57 * (int)a2;
  v7 = a3 & ((int)a1 + 1);
  v8 = 15731 * (((v6 + v5) << 13) ^ (v6 + v5)) * (((v6 + v5) << 13) ^ (v6 + v5));
  v9 = a1 - (float)(int)a1;
  v10 = (((v7 + v6) << 13) ^ (v7 + v6)) * (((v7 + v6) << 13) ^ (v7 + v6));
  v11 = 57 * (a3 & ((int)a2 + 1));
  v12 = ((15731 * v10 + 789221) * (15731 * v10 + 789221) - 771171059) & 0x7FFFFFFF;
  v13 = (((v11 + v7) << 13) ^ (v11 + v7)) * (((v11 + v7) << 13) ^ (v11 + v7));
  v14 = 15731 * (((v11 + v5) << 13) ^ (v11 + v5)) * (((v11 + v5) << 13) ^ (v11 + v5)) + 789221;
  *(float *)&v4 = (float)((float)((float)((float)(1.0
                                                - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * (float)(1.0 - v9))
                                + (float)((float)(1.0 - (float)((float)v12 * 9.3132257e-10)) * v9))
                        * (float)(1.0 - (float)(a2 - (float)(int)a2)))
                + (float)((float)((float)((float)(1.0
                                                - (float)((float)((v14 * v14 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                        * (float)(1.0 - v9))
                                + (float)((float)(1.0
                                                - (float)((float)(((15731 * v13 + 789221) * (15731 * v13 + 789221)
                                                                 - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * v9))
                        * (float)(a2 - (float)(int)a2));
  return (__m128)v4;
}

//----- (00000001400D4960) ----------------------------------------------------
void sub_1400D4960()
{
  g_175FD13A0 = xmmword_140279810;
  g_175FD13E4 = 1061158912;
  g_175FD13E0 = 1115684864;
  g_175FD13B0 = xmmword_140279710;
  g_175FD13C0 = xmmword_140279490;
  g_175FD13D0 = xmmword_140279490;
  sub_14007B2A0((__int64)&g_175FD13BC, (float *)&g_175FD13BC, sr_export_float_lane_container(1070141403));
  g_16E486868 = 3;
  g_16E48686C = 3;
  g_16E486848 = -1;
  g_16E486864 = -1;
}

//----- (00000001400D4A90) ----------------------------------------------------
__int64            sub_1400D4A90(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  int v5;
  unsigned int *v6;
  int v7;
  __int64 v8;
  unsigned int *v9;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;

  v2 = a2;
  v3 = a1;
  if ( a1 == a2 )
    return 0xFFFFFFFFLL;
  v4 = g_16E48987C;
  v5 = 0;
  if ( (int)g_16E48987C <= 0 )
  {
LABEL_9:
    v8 = 3 * v3;
    v9 = &dword_140404A6C[3 * v2 + 193070965];
    if ( dword_140404A6C[3 * v3 + 193070980] == v9[15] )
    {
      dword_140404A6C[13 * g_16E48987C + 193074055] = 1;
      v4 = g_16E48987C;
      if ( (int)dword_140404A6C[v8 + 193070982] > (int)v9[17] )
      {
        v11 = v3;
        LODWORD(v3) = v2;
        LODWORD(v2) = v11;
      }
    }
    else if ( dword_140404A6C[v8 + 193070982] != v9[17] )
    {
      return 0xFFFFFFFFLL;
    }
    v12 = 3LL * (int)v3;
    v13 = 3LL * (int)v2;
    if ( dword_140404A6C[v12 + 193070982] == dword_140404A6C[v13 + 193070982] )
    {
      dword_140404A6C[13 * v4 + 193074055] = 0;
      v4 = g_16E48987C;
      if ( (int)dword_140404A6C[v12 + 193070980] > (int)dword_140404A6C[v13 + 193070980] )
      {
        v14 = v3;
        LODWORD(v3) = v2;
        LODWORD(v2) = v14;
      }
    }
    dword_140404A6C[13 * v4 + 193074053] = v3;
    dword_140404A6C[13 * g_16E48987C + 193074054] = v2;
    dword_140404A6C[13 * g_16E48987C + 193074056] = g_16E486868;
    dword_140404A6C[13 * g_16E48987C + 193074057] = *(unsigned int *)&g_16E48686C;
    strcpy((char *)&dword_140404A6C[13 * g_16E48987C + 193074058], "Street");
    return g_16E48987C++;
  }
  v6 = &g_16E489884;
  while ( 1 )
  {
    v7 = *(v6 - 1);
    if ( v7 == (_DWORD)v3 && *v6 == (_DWORD)v2 )
      break;
    if ( v7 == (_DWORD)v2 && *v6 == (_DWORD)v3 )
      break;
    ++v5;
    v6 += 13;
    if ( v5 >= (int)g_16E48987C )
      goto LABEL_9;
  }
  return (unsigned int)v5;
}

//----- (00000001400D4C40) ----------------------------------------------------
void            sub_1400D4C40(unsigned int a1, int a2, int a3, int a4, unsigned int a5, _WORD *a6)
{
  int v6;
  char v7;
  int v8;
  int v10;
  int v11;
  char v12;
  char v13;
  signed int v14;
  unsigned int *v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;

  v6 = a2 >> 3;
  v7 = a4;
  v8 = a3 >> 3;
  v10 = a4 >> 3;
  v11 = 0;
  v12 = a3;
  v13 = a2;
  v14 = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    v15 = &g_1726DA090;
    do
    {
      if ( *(v15 - 1) == a1 && *v15 == v6 && v15[1] == v8 && v15[2] == v10 )
        v14 = v11;
      ++v11;
      v15 += 3588;
    }
    while ( v11 < (int)g_1726DA088 );
    if ( v14 != -1 )
      goto LABEL_12;
  }
  if ( (int)g_1726DA088 < 4096 )
  {
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
    dword_140404A6C[3588 * g_1726DA088 + 210457992] = a1;
    dword_140404A6C[3588 * g_1726DA088 + 210457993] = v6;
    dword_140404A6C[3588 * g_1726DA088 + 210457994] = v8;
    dword_140404A6C[3588 * g_1726DA088 + 210457995] = v10;
    v14 = g_1726DA088++;
    if ( v14 != -1 )
    {
LABEL_12:
      v16 = v12 & 7;
      v17 = v7 & 7;
      v18 = v13 & 7;
      dword_140404A6C[3588 * v14 + 210457996 + 64 * (_DWORD)v16 + 8 * (_DWORD)v17 + v18] = a5;
      v19 = 2 * (v18 + 897LL * v14 + 8 * (v17 + 8 * v16));
      LOWORD(dword_140404A6C[2 * v19 + 210458508]) = *a6;
      HIWORD(dword_140404A6C[2 * v19 + 210458508]) = a6[1];
      LOWORD(dword_140404A6C[2 * v19 + 210458509]) = a6[2];
      HIWORD(dword_140404A6C[2 * v19 + 210458509]) = a6[3];
      LOWORD(dword_140404A6C[2 * v19 + 210458510]) = a6[4];
      HIWORD(dword_140404A6C[2 * v19 + 210458510]) = a6[5];
      LOWORD(dword_140404A6C[2 * v19 + 210458511]) = a6[6];
      HIWORD(dword_140404A6C[2 * v19 + 210458511]) = a6[7];
    }
  }
}

//----- (00000001400D4E50) ----------------------------------------------------
void            sub_1400D4E50(unsigned int a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5;
  int v6;
  char v7;
  int v8;
  int v10;
  char v11;
  char v12;
  unsigned int v13;
  unsigned int *v14;

  v5 = a4 >> 3;
  v6 = a2 >> 3;
  v7 = a4;
  v8 = a3 >> 3;
  v10 = 0;
  v11 = a3;
  v12 = a2;
  v13 = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    v14 = &g_1726DA090;
    do
    {
      if ( *(v14 - 1) == a1 && *v14 == v6 && v14[1] == v8 && v14[2] == v5 )
        v13 = v10;
      ++v10;
      v14 += 3588;
    }
    while ( v10 < (int)g_1726DA088 );
    if ( v13 != -1 )
      goto LABEL_12;
  }
  if ( (int)g_1726DA088 < 4096 )
  {
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
    dword_140404A6C[3588 * g_1726DA088 + 210457992] = a1;
    dword_140404A6C[3588 * g_1726DA088 + 210457993] = v6;
    dword_140404A6C[3588 * g_1726DA088 + 210457994] = v8;
    dword_140404A6C[3588 * g_1726DA088 + 210457995] = v5;
    v13 = g_1726DA088++;
    if ( v13 != -1 )
LABEL_12:
      dword_140404A6C[3588 * v13 + 210461068 + 64 * (v11 & 7) + 8 * (v7 & 7) + (v12 & 7)] = a5;
  }
}

//----- (00000001400D4FC0) ----------------------------------------------------
__int64            sub_1400D4FC0(signed int a1, int a2, signed int a3, int a4, unsigned int a5)
{
  int v5;
  int v7;
  int v8;
  int v10;
  unsigned int v13;
  unsigned int *v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int64 v18;
  unsigned int v19;
  __int64 v20;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D4FC0[80];
#define v22 (*(__int64 (*))(void *)(sr_frame_1400D4FC0 + 0)) /* [rsp+0h] */
#define v23 (*(unsigned int (*))(void *)(sr_frame_1400D4FC0 + 32)) /* [rsp+20h] */
#define v24 (*(__int16 * (*))(void *)(sr_frame_1400D4FC0 + 40)) /* [rsp+28h] */
#define v25 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 48)) /* [rsp+30h] */
#define v26 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 50)) /* [rsp+32h] */
#define v27 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 52)) /* [rsp+34h] */
#define v28 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 54)) /* [rsp+36h] */
#define v29 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 56)) /* [rsp+38h] */
#define v30 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 58)) /* [rsp+3Ah] */
#define v31 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 60)) /* [rsp+3Ch] */
#define v32 (*(__int16 (*))(void *)(sr_frame_1400D4FC0 + 62)) /* [rsp+3Eh] */
#define v33 (*(__int64 (*))(void *)(sr_frame_1400D4FC0 + 64)) /* [rsp+40h] */

  v5 = a2 >> 3;
  v7 = a3 >> 3;
  v8 = 0;
  v10 = a4 >> 3;
  v13 = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    v14 = &g_1726DA090;
    do
    {
      if ( *(v14 - 1) == a1 && *v14 == v5 && v14[1] == v7 && v14[2] == v10 )
        v13 = v8;
      ++v8;
      v14 += 3588;
    }
    while ( v8 < (int)g_1726DA088 );
    if ( v13 != -1 )
      goto LABEL_12;
  }
  if ( (int)g_1726DA088 < 4096 )
  {
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
    dword_140404A6C[3588 * g_1726DA088 + 210457992] = a1;
    dword_140404A6C[3588 * g_1726DA088 + 210457993] = v5;
    dword_140404A6C[3588 * g_1726DA088 + 210457994] = v7;
    dword_140404A6C[3588 * g_1726DA088 + 210457995] = v10;
    v13 = g_1726DA088++;
    if ( v13 != -1 )
    {
LABEL_12:
      v15 = a5 & 0xFFF;
      dword_140404A6C[3588 * v13 + 210460556 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
      v16 = HIBYTE(a5) & 3;
      v17 = dword_140404A6C[4242 * v15 + 193082775];
      v18 = (((unsigned __int64)a5 >> 16) & 0x1F) - 1;
      v19 = -v16 & 3;
      v20 = 16968 * v15 + 528 * v18;
      v25 = *(_WORD *)((char *)&g_16E4922D0 + v20);
      if ( (v17 & 0xE0000000) == 0x40000000 )
      {
        v26 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + v19 + 1);
        v27 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + (((unsigned __int8)v19 + 1) & 3) + 1);
        v28 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + (((unsigned __int8)v19 - 2) & 3) + 1);
        v29 = *((_WORD *)&dword_140404A6C[4242 * v15 + 193082905 + 132 * v18] + (((unsigned __int8)v19 - 1) & 3) + 1);
        v30 = *(_WORD *)((char *)&g_16E4922D8 + v20 + 2);
        v31 = *(_WORD *)((char *)&g_16E4922DC + v20);
        v32 = *(_WORD *)((char *)&g_16E4922DC + v20 + 2);
        v24 = &v25;
        v23 = 0x40000000;
      }
      else
      {
        v26 = *(_WORD *)((char *)&g_16E4922D0 + v20 + 2);
        v27 = *(_WORD *)((char *)&g_16E4922D4 + v20);
        v28 = *(_WORD *)((char *)&g_16E4922D4 + v20 + 2);
        v29 = *(_WORD *)((char *)&g_16E4922D8 + v20);
        v30 = *(_WORD *)((char *)&g_16E4922D8 + v20 + 2);
        v31 = *(_WORD *)((char *)&g_16E4922DC + v20);
        v32 = *(_WORD *)((char *)&g_16E4922DC + v20 + 2);
        v24 = &v25;
        v23 = v17 + v16;
      }
      sub_14000F830(a1, a2, a3, a4, v23, v24);
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33

//----- (00000001400D52E0) ----------------------------------------------------
__int64            sub_1400D52E0(unsigned int a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  int v9;
  __int64 result;
  unsigned int *v11;

  v5 = a2 >> 3;
  v6 = 0;
  v7 = a3 >> 3;
  v9 = a4 >> 3;
  result = 0xFFFFFFFFLL;
  if ( (int)g_1726DA088 <= 0 )
    goto LABEL_10;
  v11 = &g_1726DA090;
  do
  {
    if ( *(v11 - 1) == a1 && *v11 == v5 && v11[1] == v7 && v11[2] == v9 )
      result = (unsigned int)v6;
    ++v6;
    v11 += 3588;
  }
  while ( v6 < (int)g_1726DA088 );
  if ( (_DWORD)result == -1 )
  {
LABEL_10:
    if ( (int)g_1726DA088 < 4096 )
    {
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[3588 * g_1726DA088 + 210457992]), 0, 0x3810u);
      dword_140404A6C[3588 * g_1726DA088 + 210457992] = a1;
      dword_140404A6C[3588 * g_1726DA088 + 210457993] = v5;
      dword_140404A6C[3588 * g_1726DA088 + 210457994] = v7;
      dword_140404A6C[3588 * g_1726DA088 + 210457995] = v9;
      return g_1726DA088++;
    }
  }
  return result;
}

//----- (00000001400D5400) ----------------------------------------------------
void            sub_1400D5400(int a1, int a2, int a3, int a4)
{
  char v4;
  int v5;
  int v6;
  int v7;
  unsigned int *v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned int *v13;
  __int64 v14;
  unsigned int *v15;
  __int64 v16;
  unsigned int *v17;

  v4 = a3;
  v5 = a3 >> 3;
  v6 = 0;
  v7 = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    v8 = &g_1726DA090;
    do
    {
      if ( *(v8 - 1) == a1 && *v8 == a2 >> 3 && v8[1] == v5 && v8[2] == a4 >> 3 )
        v7 = v6;
      ++v6;
      v8 += 3588;
    }
    while ( v6 < (int)g_1726DA088 );
    if ( v7 != -1 )
    {
      v9 = 3588LL * v7;
      v10 = (a4 & 7) + 8 * (v4 & 7);
      v11 = 0;
      v12 = 3588LL * v7 + (a2 & 7u) + 8 * v10;
      v13 = &dword_140404A6C[v9 + 210457996];
      dword_140404A6C[v12 + 210457996] = 0;
LABEL_11:
      v14 = 0;
      v15 = v13;
LABEL_12:
      v16 = 0;
      v17 = v15;
      while ( !*v17 )
      {
        ++v16;
        ++v17;
        if ( v16 >= 8 )
        {
          ++v14;
          v15 += 8;
          if ( v14 < 8 )
            goto LABEL_12;
          ++v11;
          v13 += 64;
          if ( v11 >= 8 )
          {
            --g_1726DA088;
            crt_memcpy(
              (__m128i *)&dword_140404A6C[v9 + 210457992],
              (     __m128i *)&dword_140404A6C[3588 * g_1726DA088 + 210457992],
              0x3810u);
            return;
          }
          goto LABEL_11;
        }
      }
    }
  }
}

//----- (00000001400D5560) ----------------------------------------------------
void            sub_1400D5560(int a1)
{
  __int64 v1;
  unsigned int v2;
  signed int v3;
  int v4;
  signed int v5;
  __int64 v6;
  unsigned int *v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int *v11;

  v1 = a1;
  if ( a1 >= 0 )
  {
    v2 = g_16E486878;
    if ( (int)v1 < (int)g_16E486878 )
    {
      v3 = g_16E48987C;
      v4 = 0;
      v5 = 0;
      if ( (int)g_16E48987C > 0 )
      {
        v6 = 0;
        v7 = &g_16E489880;
        do
        {
          if ( *v7 == (_DWORD)v1 || v7[1] == (_DWORD)v1 )
          {
            if ( v6 >= 0 )
            {
              if ( v5 >= v3 )
                break;
              g_16E48987C = v3 - 1;
              v8 = 13LL * (v3 - 1);
              *(_OWORD *)v7 = *(_OWORD *)&dword_140404A6C[v8 + 193074053];
              *((_OWORD *)v7 + 1) = *(_OWORD *)&dword_140404A6C[v8 + 193074057];
              *((_OWORD *)v7 + 2) = *(_OWORD *)&dword_140404A6C[v8 + 193074061];
              v7[12] = dword_140404A6C[v8 + 193074065];
              v3 = g_16E48987C;
            }
          }
          else
          {
            ++v5;
            ++v6;
            v7 += 13;
          }
        }
        while ( v5 < v3 );
        v2 = g_16E486878;
      }
      g_16E486878 = v2 - 1;
      v9 = (int)(v2 - 1);
      v10 = 3 * v1;
      *(_QWORD *)&dword_140404A6C[v10 + 193070980] = *(_QWORD *)&dword_140404A6C[3 * v9 + 193070980];
      dword_140404A6C[v10 + 193070982] = dword_140404A6C[3 * v9 + 193070982];
      if ( (int)g_16E48987C > 0 )
      {
        v11 = &g_16E489884;
        do
        {
          if ( *(v11 - 1) == g_16E486878 )
            *(v11 - 1) = v1;
          if ( *v11 == g_16E486878 )
            *v11 = v1;
          ++v4;
          v11 += 13;
        }
        while ( v4 < (int)g_16E48987C );
      }
    }
  }
}

//----- (00000001400D5690) ----------------------------------------------------
void            sub_1400D5690(signed int a1, signed int a2, signed int a3, signed int a4)
{
  int v5;
  int v7;
  int v10;
  unsigned int *v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int *v15;
  __int64 v16;
  unsigned int *v17;
  __int64 v18;
  unsigned int *v19;

  v5 = a3 >> 3;
  v7 = 0;
  v10 = -1;
  if ( (int)g_1726DA088 > 0 )
  {
    v11 = &g_1726DA090;
    do
    {
      if ( *(v11 - 1) == a1 && *v11 == a2 >> 3 && v11[1] == v5 && v11[2] == a4 >> 3 )
        v10 = v7;
      ++v7;
      v11 += 3588;
    }
    while ( v7 < (int)g_1726DA088 );
    if ( v10 != -1 )
    {
      v12 = 0;
      v13 = 3588LL * v10;
      v14 = 3588LL * v10 + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7u));
      v15 = &dword_140404A6C[v13 + 210460556];
      dword_140404A6C[v14 + 210460556] = 0;
LABEL_11:
      v16 = 0;
      v17 = v15;
LABEL_12:
      v18 = 0;
      v19 = v17;
      while ( !*(v19 - 2560) && !*v19 && !v19[512] )
      {
        ++v18;
        ++v19;
        if ( v18 >= 8 )
        {
          ++v16;
          v17 += 8;
          if ( v16 < 8 )
            goto LABEL_12;
          ++v12;
          v15 += 64;
          if ( v12 >= 8 )
          {
            --g_1726DA088;
            crt_memcpy(
              (__m128i *)&dword_140404A6C[v13 + 210457992],
              (     __m128i *)&dword_140404A6C[3588 * g_1726DA088 + 210457992],
              0x3810u);
            break;
          }
          goto LABEL_11;
        }
      }
      sub_140017AC0(a1, a2, a3, a4, 0);
    }
  }
}

//----- (00000001400D5820) ----------------------------------------------------
__m128i *           sub_1400D5820(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int *v4;
  __int64 v5;
  __m128i *v6;
  __int64 v7;
  __m128i *result;

  v2 = 3588LL * a2;
  v3 = 0;
  v4 = &dword_140404A6C[v2 + 210460556];
LABEL_2:
  v5 = 0;
  v6 = (__m128i *)v4;
LABEL_3:
  v7 = 0;
  result = v6;
  while ( !SR_VEC_LANES(128, result[-640], i32)[0] && !SR_VEC_PTR_LANES(128, result, i32)[0] && !SR_VEC_LANES(128, result[128], i32)[0] )
  {
    ++v7;
    result = (__m128i *)((char *)result + 4);
    if ( v7 >= 8 )
    {
      ++v5;
      v6 += 2;
      if ( v5 < 8 )
        goto LABEL_3;
      ++v3;
      v4 += 64;
      if ( v3 >= 8 )
      {
        --g_1726DA088;
        return crt_memcpy(
                 (__m128i *)&dword_140404A6C[v2 + 210457992],
                 (     __m128i *)&dword_140404A6C[3588 * g_1726DA088 + 210457992],
                 0x3810u);
      }
      goto LABEL_2;
    }
  }
  return result;
}

//----- (00000001400D5950) ----------------------------------------------------
__int64            sub_1400D5950(int a1, int a2, int a3, int a4)
{
  char v4;
  int v5;
  int v6;
  int v7;
  unsigned int *v8;

  v4 = a4;
  v5 = a4 >> 3;
  v6 = 0;
  v7 = -1;
  if ( (int)g_1726DA088 <= 0 )
    return 0;
  v8 = &g_1726DA090;
  do
  {
    if ( *(v8 - 1) == a1 && *v8 == a2 >> 3 && v8[1] == a3 >> 3 && v8[2] == v5 )
      v7 = v6;
    ++v6;
    v8 += 3588;
  }
  while ( v6 < (int)g_1726DA088 );
  if ( v7 == -1 )
    return 0;
  else
    return dword_140404A6C[3588 * v7 + 210457996 + 64 * (a3 & 7) + 8 * (v4 & 7) + (a2 & 7)];
}

//----- (00000001400D6890) ----------------------------------------------------
_BOOL8            sub_1400D6890(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  extern int collision_segment_segment(float *on_a, float *on_b, float *distance, const float *a0, const float *a1,
                                       const float *b0, const float *b1, float radius);
  /* src/engine/collision.c */
  return collision_segment_segment(a1, a2, a3, a4, a5, a6, a7, a8);
}

//----- (00000001400D8790) ----------------------------------------------------
_BOOL8            sub_1400D8790(float *a1, __int64 a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  int *v7;
  int *v11;
  int v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  float v31;
  _BOOL8 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D8790[80];
#define v33 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 0)) /* [rsp+40h] */
#define v34 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 16)) /* [rsp+50h] */
#define v35 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 32)) /* [rsp+60h] */
#define v36 (*(float (*)[8])(void *)(sr_frame_1400D8790 + 48)) /* [rsp+70h] */

  v7 = dword_1402B3664;
  v11 = dword_1402B3558;
  v13 = 0;
  while ( 1 )
  {
    v14 = 3LL * *(v7 - 1);
    v15 = *a6;
    v16 = a6[1];
    v17 = a6[2];
    v18 = *a7;
    v19 = a7[1];
    v20 = a7[2];
    v21 = *v7;
    v34[0] = (float)(*a7 * *(float *)&dword_1402B34F0[3 * *(v7 - 1)]) + *a6;
    v34[1] = (float)(v19 * *(float *)&dword_1402B34F0[v14 + 1]) + v16;
    v22 = v20 * *(float *)&dword_1402B34F0[v14 + 2];
    v23 = 3 * v21;
    v24 = v7[1];
    v34[2] = v22 + v17;
    v35[0] = (float)(v18 * *(float *)&dword_1402B34F0[v23]) + v15;
    v35[1] = (float)(v19 * *(float *)&dword_1402B34F0[v23 + 1]) + v16;
    v25 = v20 * *(float *)&dword_1402B34F0[v23 + 2];
    v26 = 3 * v24;
    v27 = v7[2];
    v35[2] = v25 + v17;
    v33[0] = (float)(v18 * *(float *)&dword_1402B34F0[v26]) + v15;
    v33[1] = (float)(v19 * *(float *)&dword_1402B34F0[v26 + 1]) + v16;
    v28 = v19 * *(float *)&dword_1402B34F0[3 * v27 + 1];
    v29 = (float)(v20 * *(float *)&dword_1402B34F0[v26 + 2]) + v17;
    v30 = v20 * *(float *)&dword_1402B34F0[3 * v27 + 2];
    v31 = (float)(v18 * *(float *)&dword_1402B34F0[3 * v27]) + v15;
    *(_DWORD *)a2 = *(v11 - 2);
    *(_DWORD *)(a2 + 4) = *(v11 - 1);
    *(_DWORD *)(a2 + 8) = *v11;
    v33[2] = v29;
    v36[0] = v31;
    v36[1] = v28 + v16;
    v36[2] = v30 + v17;
    if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v34, v35, v33) )
      break;
    result = sub_140077FA0(a1, (float *)a2, a3, a4, a5, v34, v33, v36);
    if ( result )
      break;
    ++v13;
    v7 += 4;
    v11 += 3;
    if ( v13 >= 6 )
      return result;
  }
  return 1;
}
#undef v33
#undef v34
#undef v35
#undef v36

//----- (00000001400D89E0) ----------------------------------------------------
_BOOL8            sub_1400D89E0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D89E0[48];
#define v21 (*(float (*))(void *)(sr_frame_1400D89E0 + 0)) /* [rsp+44h] */
#define v22 (*(float (*)[4])(void *)(sr_frame_1400D89E0 + 4)) /* [rsp+48h] */
#define v23 (*(float (*)[6])(void *)(sr_frame_1400D89E0 + 20)) /* [rsp+58h] */

  if ( sub_1400D6890(v22, v23, &v21, a4, a5, a6, a7, a8) )
  {
    v12 = v22[0];
    v13 = v22[2];
    a1[1] = v22[1];
    v14 = v23[0];
    a1[2] = v13;
    v15 = v23[1];
    *a1 = v12;
    *a2 = v14 - v12;
    v16 = v23[2];
    a2[1] = v15 - a1[1];
    a2[2] = v16 - a1[2];
    sub_14007A240((__int64)a2, a2);
    v17 = a5[1] - a4[1];
    v18 = a5[2] - a4[2];
    v19 = v21;
    *a3 = (float)((float)((float)((float)(*a1 - *a4) * (float)(*a5 - *a4)) + (float)((float)(a1[1] - a4[1]) * v17))
                + (float)((float)(a1[2] - a4[2]) * v18))
        / (float)((float)((float)(v17 * v17) + (float)((float)(*a5 - *a4) * (float)(*a5 - *a4))) + (float)(v18 * v18));
  }
  else
  {
    v19 = 65536.0;
  }
  return v19 < 65536.0;
}
#undef v21
#undef v22
#undef v23

//----- (00000001400DA300) ----------------------------------------------------
_BOOL8            sub_1400DA300(__int64 a1, int *a2, float *a3, float *a4)
{
  int v4;
  float *v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA300[240];
#define v34 (*(float (*)[2])(void *)(sr_frame_1400DA300 + 0)) /* [rsp+48h] */
#define v35 (*(float (*))(void *)(sr_frame_1400DA300 + 8)) /* [rsp+50h] */
#define v36 (*(float (*)[4])(void *)(sr_frame_1400DA300 + 16)) /* [rsp+58h] */
#define v37 (*(float (*)[4])(void *)(sr_frame_1400DA300 + 32)) /* [rsp+68h] */
#define v38 (*(float (*)[4])(void *)(sr_frame_1400DA300 + 48)) /* [rsp+78h] */
#define v39 (*(float (*)[6])(void *)(sr_frame_1400DA300 + 64)) /* [rsp+88h] */
#define v40 (*(float (*))(void *)(sr_frame_1400DA300 + 224)) /* [rsp+128h] */

  v4 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  if ( *a2 <= 0 )
    return 0;
  v9 = (float *)(a2 + 3);
  do
  {
    v10 = v9[6];
    v11 = *(v9 - 1);
    v12 = *v9;
    v13 = v9[4];
    v14 = v9[5];
    v15 = v9[3];
    v16 = v9[2];
    v17 = v9[1];
    v38[0] = *(v9 - 2);
    v38[2] = v12;
    v36[2] = v10;
    v18 = v10 - v12;
    v37[2] = v15;
    v19 = v15 - v12;
    v36[0] = v13;
    v36[1] = v14;
    v20 = v14 - v11;
    v38[1] = v11;
    v37[1] = v16;
    v21 = v16 - v11;
    v37[0] = v17;
    v22 = v17 - v38[0];
    v23 = (float)(v20 * v19) - (float)(v18 * v21);
    v24 = (float)(v13 - v38[0]) * v19;
    v25 = (float)((float)(v13 - v38[0]) * v21) - (float)(v20 * v22);
    v26 = (float)(v18 * v22) - v24;
    v27 = fsqrt((float)((float)(v26 * v26) + (float)(v23 * v23)) + (float)(v25 * v25));
    if ( v27 == 0.0 )
    {
      v34[0] = 0.0;
      v28 = 0.0;
      v35 = 0.0;
      v30 = 0.0;
      v29 = 0.0;
    }
    else
    {
      v28 = v23 * (float)(1.0 / v27);
      v29 = v25 * (float)(1.0 / v27);
      v34[0] = v28;
      v30 = v26 * (float)(1.0 / v27);
      v35 = v29;
    }
    v34[1] = v30;
    if ( sub_140077FA0(v39, v34, &v40, a3, a4, v38, v37, v36) )
    {
      v31 = v40;
      if ( v40 < *(float *)(a1 + 24) )
      {
        v32 = v39[1];
        *(float *)a1 = v39[0];
        *(float *)(a1 + 8) = v39[2];
        *(float *)(a1 + 4) = v32;
        *(float *)(a1 + 12) = v28;
        *(float *)(a1 + 16) = v30;
        *(float *)(a1 + 20) = v29;
        *(float *)(a1 + 24) = v31;
      }
    }
    ++v4;
    v9 += 12;
  }
  while ( v4 < *a2 );
  return *(float *)(a1 + 24) < 1.0;
}
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40

//----- (00000001400DA580) ----------------------------------------------------
_BOOL8            sub_1400DA580(__int64 a1, __int64 a2, float *a3, float *a4)
{
  int v4;
  int *v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  int v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  int v37;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA580[256];
#define v39 (*(float (*)[2])(void *)(sr_frame_1400DA580 + 0)) /* [rsp+48h] */
#define v40 (*(float (*))(void *)(sr_frame_1400DA580 + 8)) /* [rsp+50h] */
#define v41 (*(int (*))(void *)(sr_frame_1400DA580 + 16)) /* [rsp+58h] */
#define v42 (*(int (*))(void *)(sr_frame_1400DA580 + 20)) /* [rsp+5Ch] */
#define v43 (*(int (*))(void *)(sr_frame_1400DA580 + 24)) /* [rsp+60h] */
#define v44 (*(float (*)[2])(void *)(sr_frame_1400DA580 + 32)) /* [rsp+68h] */
#define v45 (*(float (*))(void *)(sr_frame_1400DA580 + 40)) /* [rsp+70h] */
#define v46 (*(float (*)[4])(void *)(sr_frame_1400DA580 + 48)) /* [rsp+78h] */
#define v47 (*(float (*)[4])(void *)(sr_frame_1400DA580 + 64)) /* [rsp+88h] */
#define v48 (*(float (*)[6])(void *)(sr_frame_1400DA580 + 80)) /* [rsp+98h] */
#define v49 (*(float (*))(void *)(sr_frame_1400DA580 + 240)) /* [rsp+138h] */

  v4 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  v9 = (int *)(a2 + 32784);
  do
  {
    v10 = *(float *)(a2 + 16LL * *(v9 - 1) + 12);
    v11 = *(float *)(a2 + 16LL * *(v9 - 1) + 16);
    v12 = 2LL * *v9;
    v46[0] = *(float *)(a2 + 16LL * *(v9 - 1) + 8);
    v46[2] = v11;
    v46[1] = v10;
    v13 = *(float *)(a2 + 8 * v12 + 16);
    v14 = *(float *)(a2 + 8 * v12 + 8);
    v15 = *(float *)(a2 + 8 * v12 + 12);
    v16 = 2LL * v9[1];
    v47[2] = v13;
    v17 = v13 - v11;
    v47[1] = v15;
    v18 = v15 - v10;
    v47[0] = v14;
    v19 = v14 - v46[0];
    v20 = *(float *)(a2 + 8 * v16 + 8);
    v21 = *(float *)(a2 + 8 * v16 + 12);
    v45 = *(float *)(a2 + 8 * v16 + 16);
    v44[0] = v20;
    v22 = v20 - v46[0];
    v44[1] = v21;
    v23 = v21 - v10;
    v24 = (float)(v23 * v17) - (float)((float)(v45 - v11) * v18);
    v25 = (float)((float)(v45 - v11) * v19) - (float)(v22 * v17);
    v26 = (float)(v22 * v18) - (float)(v23 * v19);
    v27 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26));
    if ( v27 == 0.0 )
    {
      v39[0] = 0.0;
      v28 = 0.0;
      v40 = 0.0;
      v30 = 0.0;
      v29 = 0.0;
    }
    else
    {
      v28 = v24 * (float)(1.0 / v27);
      v29 = v26 * (float)(1.0 / v27);
      v39[0] = v28;
      v30 = v25 * (float)(1.0 / v27);
      v40 = v29;
    }
    v39[1] = v30;
    if ( sub_140077FA0((float *)&v41, v39, &v49, a3, a4, v46, v47, v44) )
    {
      v31 = v49;
      if ( v49 < *(float *)(a1 + 24) )
      {
        v32 = v42;
        *(_DWORD *)a1 = v41;
        *(_DWORD *)(a1 + 8) = v43;
        *(_DWORD *)(a1 + 4) = v32;
        *(float *)(a1 + 12) = v28;
        *(float *)(a1 + 16) = v30;
        *(float *)(a1 + 20) = v29;
        *(float *)(a1 + 24) = v31;
      }
    }
    if ( *(v9 - 2) == 4 )
    {
      v33 = 2LL * v9[2];
      v34 = *(float *)(a2 + 16LL * v9[2] + 12);
      v48[0] = *(float *)(a2 + 16LL * v9[2] + 8);
      v35 = *(float *)(a2 + 8 * v33 + 16);
      v48[1] = v34;
      v48[2] = v35;
      if ( sub_140077FA0((float *)&v41, v39, &v49, a3, a4, v46, v44, v48) )
      {
        v36 = v49;
        if ( v49 < *(float *)(a1 + 24) )
        {
          v37 = v42;
          *(_DWORD *)a1 = v41;
          *(_DWORD *)(a1 + 8) = v43;
          *(_DWORD *)(a1 + 4) = v37;
          *(float *)(a1 + 12) = v28;
          *(float *)(a1 + 16) = v30;
          *(float *)(a1 + 20) = v29;
          *(float *)(a1 + 24) = v36;
        }
      }
    }
    ++v4;
    v9 += 8;
  }
  while ( v4 < *(_DWORD *)(a2 + 32772) );
  return *(float *)(a1 + 24) < 1.0;
}
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49

//----- (00000001400DA8E0) ----------------------------------------------------
__int64            sub_1400DA8E0(__int64 a1, __int64 a2, float *a3, float *a4)
{
  float *v4;
  float *v6;
  __int64 v9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA8E0[6256];
#define v10 (*(_BYTE (*)[6144])(void *)(sr_frame_1400DA8E0 + 0)) /* [rsp+10h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1400DA8E0 + 6144)) /* [rsp+1810h] */
#define v12 (*(float * (*))(void *)(sr_frame_1400DA8E0 + 6240)) /* [rsp+1870h] */
#define v13 (*(float * (*))(void *)(sr_frame_1400DA8E0 + 6248)) /* [rsp+1878h] */

  v4 = v12;
  v6 = v13;
  sub_14011BF40((__int64)v10, a2, a3, a4);
  return sub_1400DA960(a1, a2, (__int64)v10, v4, v6); /* 0x1400DA937: the result of this call is still in rax at the exit */
}
#undef v10
#undef v11
#undef v12
#undef v13

//----- (00000001400DA960) ----------------------------------------------------
_BOOL8            sub_1400DA960(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  int v5;
  float *v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  bool v37;
  __int64 v38;
  float v39;
  float v40;
  int v41;
  float v42;
  int v43;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA960[288];
#define v45 (*(int (*))(void *)(sr_frame_1400DA960 + 0)) /* [rsp+48h] */
#define v46 (*(float (*)[2])(void *)(sr_frame_1400DA960 + 8)) /* [rsp+50h] */
#define v47 (*(float (*))(void *)(sr_frame_1400DA960 + 16)) /* [rsp+58h] */
#define v48 (*(int (*))(void *)(sr_frame_1400DA960 + 24)) /* [rsp+60h] */
#define v49 (*(int (*))(void *)(sr_frame_1400DA960 + 28)) /* [rsp+64h] */
#define v50 (*(int (*))(void *)(sr_frame_1400DA960 + 32)) /* [rsp+68h] */
#define v51 (*(float (*)[2])(void *)(sr_frame_1400DA960 + 40)) /* [rsp+70h] */
#define v52 (*(float (*))(void *)(sr_frame_1400DA960 + 48)) /* [rsp+78h] */
#define v53 (*(float (*)[4])(void *)(sr_frame_1400DA960 + 56)) /* [rsp+80h] */
#define v54 (*(float (*)[4])(void *)(sr_frame_1400DA960 + 72)) /* [rsp+90h] */
#define v55 (*(float (*)[4])(void *)(sr_frame_1400DA960 + 88)) /* [rsp+A0h] */
#define v56 (*(float (*))(void *)(sr_frame_1400DA960 + 272)) /* [rsp+158h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_1400DA960 + 280)) /* [rsp+160h] */

  v57 = a2;
  v5 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v45 = 0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  v9 = a5;
  v10 = a2 + 48;
  do
  {
    v11 = 0;
    if ( *(int *)v10 > 0 )
    {
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(v10 + 8);
        v14 = 3 * *(_DWORD *)(v13 + v12 + 8);
        v15 = *(float *)(a3 + 4 * v14);
        v16 = *(float *)(a3 + 4 * v14 + 4);
        v17 = *(float *)(a3 + 4 * v14 + 8);
        LODWORD(v14) = *(_DWORD *)(v13 + v12 + 12);
        v53[0] = v15;
        v53[2] = v17;
        v53[1] = v16;
        v18 = 3 * (int)v14;
        v19 = *(float *)(a3 + 4 * v18 + 8);
        v20 = *(float *)(a3 + 4 * v18);
        v21 = *(float *)(a3 + 4 * v18 + 4);
        LODWORD(v18) = *(_DWORD *)(v13 + v12 + 16);
        v54[2] = v19;
        v22 = v19 - v17;
        v54[1] = v21;
        v23 = v21 - v16;
        v54[0] = v20;
        v24 = v20 - v15;
        v25 = 3 * (int)v18;
        v26 = *(float *)(a3 + 4 * v25);
        v27 = *(float *)(a3 + 4 * v25 + 4);
        v52 = *(float *)(a3 + 4 * v25 + 8);
        v51[0] = v26;
        v28 = v26 - v15;
        v51[1] = v27;
        v29 = v27 - v16;
        v30 = (float)(v29 * v22) - (float)((float)(v52 - v17) * v23);
        v31 = (float)((float)(v52 - v17) * v24) - (float)(v28 * v22);
        v32 = (float)(v28 * v23) - (float)(v29 * v24);
        v33 = fsqrt((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32));
        if ( v33 == 0.0 )
        {
          v46[0] = 0.0;
          v34 = 0.0;
          v47 = 0.0;
          v36 = 0.0;
          v35 = 0.0;
        }
        else
        {
          v34 = v30 * (float)(1.0 / v33);
          v35 = v32 * (float)(1.0 / v33);
          v46[0] = v34;
          v36 = v31 * (float)(1.0 / v33);
          v47 = v35;
        }
        v37 = *(_DWORD *)(v13 + v12 + 4) == 4;
        v46[1] = v36;
        if ( v37 )
        {
          v38 = 3 * *(_DWORD *)(v13 + v12 + 20);
          v39 = *(float *)(a3 + 4 * v38 + 4);
          v55[0] = *(float *)(a3 + 4 * v38);
          v55[2] = *(float *)(a3 + 4 * v38 + 8);
          v55[1] = v39;
        }
        if ( sub_140077FA0((float *)&v48, v46, &v56, a4, v9, v53, v54, v51) )
        {
          v40 = v56;
          if ( v56 < *(float *)(a1 + 24) )
          {
            v41 = v49;
            *(_DWORD *)a1 = v48;
            *(_DWORD *)(a1 + 8) = v50;
            *(_DWORD *)(a1 + 4) = v41;
            *(float *)(a1 + 12) = v34;
            *(float *)(a1 + 16) = v36;
            *(float *)(a1 + 20) = v35;
            *(float *)(a1 + 24) = v40;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(v10 + 8) + v12 + 4) == 4
          && sub_140077FA0((float *)&v48, v46, &v56, a4, v9, v53, v51, v55) )
        {
          v42 = v56;
          if ( v56 < *(float *)(a1 + 24) )
          {
            v43 = v49;
            *(_DWORD *)a1 = v48;
            *(_DWORD *)(a1 + 8) = v50;
            *(_DWORD *)(a1 + 4) = v43;
            *(float *)(a1 + 12) = v34;
            *(float *)(a1 + 16) = v36;
            *(float *)(a1 + 20) = v35;
            *(float *)(a1 + 24) = v42;
          }
        }
        ++v11;
        v12 += 36;
      }
      while ( v11 < *(_DWORD *)v10 );
      v5 = v45;
      a2 = v57;
    }
    ++v5;
    v10 += 56;
    v45 = v5;
  }
  while ( v5 < *(_DWORD *)(a2 + 16) );
  return *(float *)(a1 + 24) < 1.0;
}
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57

//----- (00000001400DB460) ----------------------------------------------------
__int64            sub_1400DB460(_DWORD *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  signed int v8;
  unsigned __int64 v9;
  float *v13;
  unsigned int *v14;
  float v15;
  unsigned __int64 v16;
  float v17;
  float v18;
  float v19;
  unsigned __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  unsigned __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  bool v45;
  float v46;
  float v47;
  float v48;
  unsigned __int64 v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  int v59;
  float v60;
  int v61;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DB460[368];
#define v63 (*(float (*))(void *)(sr_frame_1400DB460 + 0)) /* [rsp+40h] */
#define v64 (*(float (*)[2])(void *)(sr_frame_1400DB460 + 8)) /* [rsp+48h] */
#define v65 (*(float (*))(void *)(sr_frame_1400DB460 + 16)) /* [rsp+50h] */
#define v66 (*(int (*))(void *)(sr_frame_1400DB460 + 24)) /* [rsp+58h] */
#define v67 (*(int (*))(void *)(sr_frame_1400DB460 + 28)) /* [rsp+5Ch] */
#define v68 (*(int (*))(void *)(sr_frame_1400DB460 + 32)) /* [rsp+60h] */
#define v69 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 40)) /* [rsp+68h] */
#define v70 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 56)) /* [rsp+78h] */
#define v71 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 72)) /* [rsp+88h] */
#define v72 (*(float (*)[6])(void *)(sr_frame_1400DB460 + 88)) /* [rsp+98h] */
#define v73 (*(float (*))(void *)(sr_frame_1400DB460 + 352)) /* [rsp+1A0h] */
#define v74 (*(float (*))(void *)(sr_frame_1400DB460 + 360)) /* [rsp+1A8h] */

  v8 = 0;
  v9 = 5072LL * a4;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v9 / 4 + 278521861] <= 0 )
    return 0;
  v13 = a5;
  v14 = &dword_140404A6C[v9 / 4 + 278521865];
  do
  {
    v15 = a6[3];
    v16 = v9 + 12LL * (int)*(v14 - 1);
    v17 = *(float *)((char *)&g_182A7E780 + v16);
    v18 = *(float *)((char *)&g_182A7E784 + v16);
    v19 = *(float *)((char *)&g_182A7E788 + v16);
    v20 = v9 + 12LL * (int)*v14;
    v21 = *(float *)((char *)&g_182A7E780 + v20);
    v22 = a6[4] * v18;
    v23 = (float)(v15 * v18) + (float)(*a6 * v17);
    v24 = a6[5] * v18;
    v25 = *(float *)((char *)&g_182A7E784 + v20);
    v26 = v23 + (float)(a6[6] * v19);
    v27 = v22 + (float)(a6[1] * v17);
    v28 = a6[2] * v17;
    v29 = *(float *)((char *)&g_182A7E788 + v20);
    v30 = v27 + (float)(a6[7] * v19);
    v31 = (float)(v24 + v28) + (float)(a6[8] * v19);
    v32 = v9 + 12LL * (int)v14[1];
    v33 = (float)((float)(v21 * *a6) + (float)(v25 * v15)) + (float)(v29 * a6[6]);
    v34 = (float)((float)(v21 * a6[1]) + (float)(v25 * a6[4])) + (float)(v29 * a6[7]);
    v35 = (float)((float)(v21 * a6[2]) + (float)(v25 * a6[5])) + (float)(v29 * a6[8]);
    v36 = *(float *)((char *)&g_182A7E788 + v32);
    v73 = (float)((float)(*(float *)((char *)&g_182A7E780 + v32) * *a6)
                + (float)(*(float *)((char *)&g_182A7E784 + v32) * v15))
        + (float)(v36 * a6[6]);
    v37 = (float)((float)(*(float *)((char *)&g_182A7E780 + v32) * a6[2])
                + (float)(*(float *)((char *)&g_182A7E784 + v32) * a6[5]))
        + (float)(v36 * a6[8]);
    v63 = (float)((float)(*(float *)((char *)&g_182A7E780 + v32) * a6[1])
                + (float)(*(float *)((char *)&g_182A7E784 + v32) * a6[4]))
        + (float)(v36 * a6[7]);
    v38 = (float)((float)(v63 - v30) * (float)(v35 - v31)) - (float)((float)(v37 - v31) * (float)(v34 - v30));
    v39 = (float)((float)(v37 - v31) * (float)(v33 - v26)) - (float)((float)(v73 - v26) * (float)(v35 - v31));
    v40 = (float)((float)(v73 - v26) * (float)(v34 - v30)) - (float)((float)(v63 - v30) * (float)(v33 - v26));
    v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
    if ( v41 == 0.0 )
    {
      v64[0] = 0.0;
      v42 = 0.0;
      v65 = 0.0;
      v44 = 0.0;
      v43 = 0.0;
    }
    else
    {
      v42 = v38 * (float)(1.0 / v41);
      v43 = v40 * (float)(1.0 / v41);
      v64[0] = v42;
      v44 = v39 * (float)(1.0 / v41);
      v65 = v43;
    }
    v45 = *(v14 - 2) == 4;
    v46 = *v13;
    v64[1] = v44;
    v70[0] = v26 + v46;
    v47 = v13[1];
    v71[0] = v33 + v46;
    v69[0] = v73 + v46;
    v70[1] = v30 + v47;
    v48 = v13[2];
    v71[1] = v34 + v47;
    v69[1] = v63 + v47;
    v70[2] = v31 + v48;
    v71[2] = v35 + v48;
    v69[2] = v37 + v48;
    if ( v45 )
    {
      v49 = v9 + 12LL * (int)v14[2];
      v50 = (float)(*(float *)((char *)&g_182A7E784 + v49) * a6[3]) + v46;
      v51 = *(float *)((char *)&g_182A7E788 + v49);
      v52 = *(float *)((char *)&g_182A7E780 + v49);
      v53 = (float)((float)(v51 * a6[6]) + (float)(v52 * *a6)) + v50;
      v54 = (float)(v51 * a6[8]) + (float)(v52 * a6[2]);
      v55 = *(float *)((char *)&g_182A7E784 + v49) * a6[5];
      v56 = (float)(v51 * a6[7]) + (float)(v52 * a6[1]);
      v57 = (float)(*(float *)((char *)&g_182A7E784 + v49) * a6[4]) + v47;
      v72[0] = v53;
      v72[1] = v56 + v57;
      v72[2] = v54 + (float)(v55 + v48);
    }
    if ( sub_140077FA0((float *)&v66, v64, &v74, a7, a8, v70, v71, v69) )
    {
      v58 = v74;
      if ( v74 < *a3 )
      {
        v59 = v67;
        *a1 = v66;
        a1[2] = v68;
        a1[1] = v59;
        *a2 = v42;
        a2[1] = v44;
        a2[2] = v43;
        *a3 = v58;
      }
    }
    if ( *(v14 - 2) == 4 && sub_140077FA0((float *)&v66, v64, &v74, a7, a8, v70, v69, v72) )
    {
      v60 = v74;
      if ( v74 < *a3 )
      {
        v61 = v67;
        *a1 = v66;
        a1[2] = v68;
        a1[1] = v61;
        *a2 = v42;
        a2[1] = v44;
        a2[2] = v43;
        *a3 = v60;
      }
    }
    ++v8;
    v14 += 6;
  }
  while ( v8 < (int)dword_140404A6C[v9 / 4 + 278521861] );
  if ( *a3 >= 1.0 )
    return 0;
  g_151A848A0 = 0;
  g_151A848A8 = 0;
  return 1;
}
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74

//----- (00000001400DBAD0) ----------------------------------------------------
__int64            sub_1400DBAD0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  signed int v8;
  __int64 v9;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DBAD0[368];
#define v61 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 0)) /* [rsp+40h] */
#define v62 (*(float (*))(void *)(sr_frame_1400DBAD0 + 16)) /* [rsp+50h] */
#define v63 (*(float (*))(void *)(sr_frame_1400DBAD0 + 20)) /* [rsp+54h] */
#define v64 (*(float (*))(void *)(sr_frame_1400DBAD0 + 24)) /* [rsp+58h] */
#define v65 (*(float (*))(void *)(sr_frame_1400DBAD0 + 28)) /* [rsp+5Ch] */
#define v66 (*(float (*))(void *)(sr_frame_1400DBAD0 + 32)) /* [rsp+60h] */
#define v67 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 40)) /* [rsp+68h] */
#define v68 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 56)) /* [rsp+78h] */
#define v69 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 72)) /* [rsp+88h] */
#define v70 (*(float (*)[6])(void *)(sr_frame_1400DBAD0 + 88)) /* [rsp+98h] */
#define v71 (*(float (*))(void *)(sr_frame_1400DBAD0 + 352)) /* [rsp+1A0h] */
#define v72 (*(float (*))(void *)(sr_frame_1400DBAD0 + 360)) /* [rsp+1A8h] */
#define v73 (*(float (*))(void *)(sr_frame_1400DBAD0 + 360)) /* [rsp+1A8h] */

  v8 = 0;
  v9 = 50LL * a4;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v9 + 272248227] <= 0 )
    return 0;
  v13 = 0;
  do
  {
    v14 = *(_QWORD *)&dword_140404A6C[v9 + 272248223];
    v15 = *(_QWORD *)&dword_140404A6C[v9 + 272248229];
    v16 = 3 * *(_DWORD *)(v13 + v15);
    v17 = *(float *)(v14 + 4 * v16);
    v18 = *(float *)(v14 + 4 * v16 + 4);
    v19 = *(float *)(v14 + 4 * v16 + 8);
    v20 = a6[3];
    v21 = *a6;
    v22 = a6[6];
    v23 = a6[4];
    v24 = a6[1];
    v25 = a6[7];
    v26 = a6[5];
    v27 = a6[8];
    v62 = (float)((float)(v20 * v18) + (float)(*a6 * v17)) + (float)(v22 * v19);
    v63 = (float)((float)(v23 * v18) + (float)(v24 * v17)) + (float)(v25 * v19);
    v28 = a6[2];
    v29 = (float)(v26 * v18) + (float)(v28 * v17);
    v30 = 3 * *(_DWORD *)(v13 + v15 + 4);
    v31 = *(float *)(v14 + 4 * v30 + 4);
    v32 = *(float *)(v14 + 4 * v30 + 8);
    v64 = v29 + (float)(v27 * v19);
    v33 = *(float *)(v14 + 4 * v30);
    v34 = 3 * *(_DWORD *)(v13 + v15 + 8);
    v35 = v31;
    v36 = v33 * v24;
    v65 = (float)((float)(v33 * v21) + (float)(v31 * v20)) + (float)(v32 * v22);
    v37 = (float)(v33 * v28) + (float)(v31 * v26);
    v38 = *(float *)(v14 + 4 * v34 + 4);
    v72 = v36 + (float)(v35 * v23);
    v39 = v32;
    v40 = v37 + (float)(v32 * v27);
    v41 = *(float *)(v14 + 4 * v34 + 8);
    v73 = v72 + (float)(v39 * v25);
    v42 = v38 * v20;
    v43 = *(float *)(v14 + 4 * v34);
    v44 = (float)((float)(v43 * v21) + v42) + (float)(v41 * v22);
    v45 = (float)((float)(v43 * v28) + (float)(v38 * v26)) + (float)(v41 * v27);
    v71 = (float)((float)(v43 * v24) + (float)(v38 * v23)) + (float)(v41 * v25);
    v46 = (float)((float)(v71 - v63) * (float)(v40 - v64)) - (float)((float)(v45 - v64) * (float)(v73 - v63));
    v47 = (float)((float)(v45 - v64) * (float)(v65 - v62)) - (float)((float)(v44 - v62) * (float)(v40 - v64));
    v48 = (float)((float)(v44 - v62) * (float)(v73 - v63)) - (float)((float)(v71 - v63) * (float)(v65 - v62));
    v49 = fsqrt((float)((float)(v47 * v47) + (float)(v46 * v46)) + (float)(v48 * v48));
    if ( v49 == 0.0 )
    {
      v61[0] = 0.0;
      v50 = 0.0;
      v51 = 0.0;
      v52 = 0.0;
    }
    else
    {
      v50 = v46 * (float)(1.0 / v49);
      v51 = v47 * (float)(1.0 / v49);
      v61[0] = v50;
      v52 = v48 * (float)(1.0 / v49);
    }
    v53 = a5[1];
    v54 = v62 + *a5;
    v55 = a5[2];
    v56 = v44 + *a5;
    v57 = v65 + *a5;
    v61[2] = v52;
    v61[1] = v51;
    v69[0] = v54;
    v67[1] = v71 + v53;
    v69[1] = v63 + v53;
    v69[2] = v64 + v55;
    v68[0] = v57;
    v68[1] = v73 + v53;
    v68[2] = v40 + v55;
    v67[0] = v56;
    v67[2] = v45 + v55;
    if ( sub_140077FA0(v70, v61, &v66, a7, a8, v69, v68, v67) )
    {
      v58 = v66;
      if ( v66 < *a3 )
      {
        v59 = v70[1];
        *a1 = v70[0];
        a1[2] = v70[2];
        a1[1] = v59;
        *a2 = v50;
        a2[1] = v51;
        a2[2] = v52;
        *a3 = v58;
      }
    }
    ++v8;
    v13 += 12;
  }
  while ( v8 < (int)dword_140404A6C[v9 + 272248227] );
  if ( *a3 >= 1.0 )
    return 0;
  g_151A848A0 = 0;
  g_151A848A8 = 0;
  return 1;
}
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73

//----- (00000001400DC650) ----------------------------------------------------
__int64            sub_1400DC650(float *a1, __int64 a2, float *a3, float *a4, float *a5, int *a6, int a7, float a8)
{
  int *v9;
  int *v10;
  signed int v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float sr_cell_ray_vertex_c[3];
  float sr_cell_ray_vertex_b[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DC650[80];
#define v45 (*(float (*)[20])(void *)(sr_frame_1400DC650 + 0)) /* [rsp+60h] */

  v9 = dword_1402B3668;
  v10 = dword_1402B3558;
  v15 = 0;
  v16 = (float)*a6;
  v17 = (float)a6[1];
  v18 = (float)a6[2];
  while ( 1 )
  {
    if ( ((((64 << v15) & a7) != 0) & _bittest(&a7, v15)) != 0 )
    {
      v19 = 3LL * *(v9 - 2);
      v20 = *(v9 - 1);
      v21 = (float)(v17 + *(float *)&dword_1402B34F0[3 * *(v9 - 2) + 1]) * a8;
      v45[0] = (float)(v16 + *(float *)&dword_1402B34F0[3 * *(v9 - 2)]) * a8;
      v22 = v18 + *(float *)&dword_1402B34F0[v19 + 2];
      v23 = 3 * v20;
      v45[1] = v21;
      v24 = *v9;
      v25 = (float)(v17 + *(float *)&dword_1402B34F0[v23 + 1]) * a8;
      v45[2] = v22 * a8;
      v26 = v16 + *(float *)&dword_1402B34F0[v23];
      sr_cell_ray_vertex_b[1] = v25;
      sr_cell_ray_vertex_b[0] = v26 * a8;
      v27 = v18 + *(float *)&dword_1402B34F0[v23 + 2];
      v28 = 3 * v24;
      LODWORD(v24) = *(v10 - 2);
      v29 = (float)(v17 + *(float *)&dword_1402B34F0[v28 + 1]) * a8;
      sr_cell_ray_vertex_b[2] = v27 * a8;
      v30 = v16 + *(float *)&dword_1402B34F0[v28];
      sr_cell_ray_vertex_c[1] = v29;
      sr_cell_ray_vertex_c[0] = v30 * a8;
      v31 = v18 + *(float *)&dword_1402B34F0[v28 + 2];
      *(_DWORD *)a2 = v24;
      *(_DWORD *)(a2 + 4) = *(v10 - 1);
      *(_DWORD *)(a2 + 8) = *v10;
      sr_cell_ray_vertex_c[2] = v31 * a8;
      if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v45, &sr_cell_ray_vertex_b[0], &sr_cell_ray_vertex_c[0]) )
        break;
      v32 = 3LL * *v9;
      v33 = v9[1];
      v34 = (float)(v17 + *(float *)&dword_1402B34F0[3 * *v9 + 1]) * a8;
      sr_cell_ray_vertex_b[0] = (float)(v16 + *(float *)&dword_1402B34F0[3 * *v9]) * a8;
      v35 = v18 + *(float *)&dword_1402B34F0[v32 + 2];
      sr_cell_ray_vertex_b[1] = v34;
      v36 = v17 + *(float *)&dword_1402B34F0[3 * v33 + 1];
      sr_cell_ray_vertex_b[2] = v35 * a8;
      v37 = v16 + *(float *)&dword_1402B34F0[3 * v33];
      sr_cell_ray_vertex_c[1] = v36 * a8;
      sr_cell_ray_vertex_c[0] = v37 * a8;
      sr_cell_ray_vertex_c[2] = (float)(v18 + *(float *)&dword_1402B34F0[3 * v33 + 2]) * a8;
      if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v45, &sr_cell_ray_vertex_b[0], &sr_cell_ray_vertex_c[0]) )
        break;
    }
    ++v15;
    v10 += 3;
    v9 += 4;
    if ( v15 >= 6 )
      return 0;
  }
  g_151A848EC = v15;
  return 1;
}
#undef v45

//----- (00000001400DE770) ----------------------------------------------------
_BOOL8            sub_1400DE770(_DWORD *a1, float *a2, float *a3, float *a4, float *a5, __int64 a6, float a7, float a8)
{
  float v10;
  signed int v12;
  float v13;
  int v14;
  __int64 v15;
  __m128i v16;
  __m128i v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  int v57;
  __int64 v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  int v69;
  __int64 v70;
  signed int v71;
  __int16 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  int v105;
  float v106;
  int v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  int v119;
  BOOL v120;
  float v121;
  int v122;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DE770[416];
#define v124 (*(float (*))(void *)(sr_frame_1400DE770 + 0)) /* [rsp+40h] */
#define v125 (*(float (*))(void *)(sr_frame_1400DE770 + 4)) /* [rsp+44h] */
#define v126 (*(float (*))(void *)(sr_frame_1400DE770 + 8)) /* [rsp+48h] */
#define v127 (*(int (*))(void *)(sr_frame_1400DE770 + 16)) /* [rsp+50h] */
#define v128 (*(int (*))(void *)(sr_frame_1400DE770 + 20)) /* [rsp+54h] */
#define v129 (*(int (*))(void *)(sr_frame_1400DE770 + 24)) /* [rsp+58h] */
#define v130 (*(float (*))(void *)(sr_frame_1400DE770 + 32)) /* [rsp+60h] */
#define v131 (*(float (*))(void *)(sr_frame_1400DE770 + 36)) /* [rsp+64h] */
#define v132 (*(float (*))(void *)(sr_frame_1400DE770 + 40)) /* [rsp+68h] */
#define v133 (*(float (*))(void *)(sr_frame_1400DE770 + 44)) /* [rsp+6Ch] */
#define v134 (*(float (*))(void *)(sr_frame_1400DE770 + 48)) /* [rsp+70h] */
#define v135 (*(float (*))(void *)(sr_frame_1400DE770 + 52)) /* [rsp+74h] */
#define v136 (*(float (*))(void *)(sr_frame_1400DE770 + 56)) /* [rsp+78h] */
#define v137 (*(float (*))(void *)(sr_frame_1400DE770 + 60)) /* [rsp+7Ch] */
#define v138 (*(float (*))(void *)(sr_frame_1400DE770 + 64)) /* [rsp+80h] */
#define v139 (*(float (*))(void *)(sr_frame_1400DE770 + 72)) /* [rsp+88h] */
#define v140 (*(float (*))(void *)(sr_frame_1400DE770 + 76)) /* [rsp+8Ch] */
#define v141 (*(float (*))(void *)(sr_frame_1400DE770 + 80)) /* [rsp+90h] */
#define v142 (*(float (*))(void *)(sr_frame_1400DE770 + 88)) /* [rsp+98h] */
#define v143 (*(float (*))(void *)(sr_frame_1400DE770 + 92)) /* [rsp+9Ch] */
#define v144 (*(float (*))(void *)(sr_frame_1400DE770 + 96)) /* [rsp+A0h] */
#define v145 (*(float (*))(void *)(sr_frame_1400DE770 + 104)) /* [rsp+A8h] */
#define v146 (*(float (*))(void *)(sr_frame_1400DE770 + 108)) /* [rsp+ACh] */
#define v147 (*(float (*))(void *)(sr_frame_1400DE770 + 112)) /* [rsp+B0h] */
#define v148 (*(float (*))(void *)(sr_frame_1400DE770 + 120)) /* [rsp+B8h] */
#define v149 (*(__int64 (*))(void *)(sr_frame_1400DE770 + 128)) /* [rsp+C0h] */
#define v150 (*(__int16 (*))(void *)(sr_frame_1400DE770 + 384)) /* [rsp+1C0h] */
#define v151 (*(float * (*))(void *)(sr_frame_1400DE770 + 392)) /* [rsp+1C8h] */
#define v152 (*(float (*))(void *)(sr_frame_1400DE770 + 408)) /* [rsp+1D8h] */

  v151 = a4;
  v10 = a8;
  v12 = 0;
  v13 = 1.0;
  v14 = HIWORD(LODWORD(a7));
  v15 = 58LL * LOWORD(a7);
  v16 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 4));
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 8));
  v18 = (float)*(int *)a6;
  *a3 = 1.0;
  v150 = v14;
  v19 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v16), f32)[0];
  v20 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v17), f32)[0];
  v132 = v18;
  v152 = v19;
  v131 = v20;
  if ( (int)dword_140404A6C[v15 + 20074623] > 0 )
  {
    v21 = 0;
    v22 = 0;
    v149 = 0;
    do
    {
      v23 = *(_QWORD *)&dword_140404A6C[v15 + 20074615];
      v24 = *(_QWORD *)&dword_140404A6C[v15 + 20074631];
      v25 = 3 * *(_DWORD *)(v22 + v24);
      v26 = v18 + *(float *)(v23 + 4 * v25);
      v27 = v19 + *(float *)(v23 + 4 * v25 + 4);
      v28 = v20 + *(float *)(v23 + 4 * v25 + 8);
      v29 = 3 * *(_DWORD *)(v22 + v24 + 4);
      v30 = v28 * v10;
      v148 = v26 * v10;
      v31 = v18 + *(float *)(v23 + 4 * v29);
      v32 = v19 + *(float *)(v23 + 4 * v29 + 4);
      v33 = v20 + *(float *)(v23 + 4 * v29 + 8);
      LODWORD(v29) = *(_DWORD *)(v22 + v24 + 8);
      v139 = v26 * v10;
      v34 = 3 * (int)v29;
      v133 = v27 * v10;
      v35 = v20 + *(float *)(v23 + 4 * v34 + 8);
      v36 = v18 + *(float *)(v23 + 4 * v34);
      v37 = v19 + *(float *)(v23 + 4 * v34 + 4);
      LODWORD(v34) = *(_DWORD *)(v22 + v24 + 12);
      v140 = v27 * v10;
      v38 = 3 * (int)v34;
      v138 = v35 * v10;
      v39 = v18 + *(float *)(v23 + 4 * v38);
      v40 = v19 + *(float *)(v23 + 4 * v38 + 4);
      v41 = v20 + *(float *)(v23 + 4 * v38 + 8);
      v137 = v37 * v10;
      v42 = (float)(v37 * v10) - (float)(v27 * v10);
      v135 = (float)(v35 * v10) - v30;
      v43 = v39 * v10;
      v44 = v40 * v10;
      v45 = v41 * v10;
      v143 = v32 * v10;
      v46 = (float)(v32 * v10) - (float)(v27 * v10);
      v144 = v33 * v10;
      v47 = (float)(v33 * v10) - v30;
      v142 = v31 * v10;
      v48 = (float)(v31 * v10) - (float)(v26 * v10);
      v136 = v36 * v10;
      v49 = (float)(v36 * v10) - (float)(v26 * v10);
      v134 = v30;
      v141 = v30;
      v50 = (float)(v42 * v47) - (float)(v135 * v46);
      v145 = v43;
      v146 = v44;
      v147 = v45;
      v51 = (float)(v135 * v48) - (float)(v49 * v47);
      v130 = (float)(v49 * v46) - (float)(v42 * v48);
      v52 = fsqrt((float)((float)(v51 * v51) + (float)(v50 * v50)) + (float)(v130 * v130));
      if ( v52 == 0.0 )
      {
        v124 = 0.0;
        v54 = 0.0;
        v125 = 0.0;
        v55 = 0.0;
        v126 = 0.0;
        v53 = 0.0;
      }
      else
      {
        v53 = (float)(1.0 / v52) * v130;
        v54 = (float)(1.0 / v52) * v50;
        v55 = (float)(1.0 / v52) * v51;
        v124 = v54;
        v126 = v53;
        v125 = v55;
      }
      if ( sub_140077FA0((float *)&v127, &v124, &a7, a4, a5, &v139, &v142, &v136) )
      {
        v56 = a7;
        if ( a7 < *a3 )
        {
          v57 = v128;
          *a1 = v127;
          a1[2] = v129;
          a1[1] = v57;
          *a2 = v54;
          a2[1] = v55;
          a2[2] = v53;
          *a3 = v56;
          v58 = *(_QWORD *)&dword_140404A6C[v15 + 20074633];
          g_151A848F4 = v12;
          g_151A848EC = *(_DWORD *)(v58 + v21);
        }
      }
      v59 = v43 - v148;
      v60 = v44 - v133;
      v61 = (float)(v60 * v135) - (float)((float)(v45 - v134) * v42);
      v62 = (float)((float)(v45 - v134) * v49) - (float)(v59 * v135);
      v63 = (float)(v59 * v42) - (float)(v60 * v49);
      v64 = fsqrt((float)((float)(v62 * v62) + (float)(v61 * v61)) + (float)(v63 * v63));
      if ( v64 == 0.0 )
      {
        v124 = 0.0;
        v65 = 0.0;
        v125 = 0.0;
        v66 = 0.0;
        v126 = 0.0;
        v67 = 0.0;
      }
      else
      {
        v65 = (float)(1.0 / v64) * v61;
        v66 = (float)(1.0 / v64) * v62;
        v67 = (float)(1.0 / v64) * v63;
        v124 = v65;
        v125 = v66;
        v126 = v67;
      }
      if ( sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v136, &v145) )
      {
        v68 = a7;
        if ( a7 < *a3 )
        {
          v69 = v128;
          *a1 = v127;
          a1[2] = v129;
          a1[1] = v69;
          *a2 = v65;
          a2[1] = v66;
          a2[2] = v67;
          *a3 = v68;
          v70 = *(_QWORD *)&dword_140404A6C[v15 + 20074633];
          g_151A848F4 = v12;
          g_151A848EC = *(_DWORD *)(v70 + v21);
        }
      }
      v10 = a8;
      v22 = v149 + 16;
      v18 = v132;
      ++v12;
      v19 = v152;
      v21 += 4;
      v20 = v131;
      a4 = v151;
      v149 += 16;
    }
    while ( v12 < (int)dword_140404A6C[v15 + 20074623] );
    v13 = *a3;
    LOWORD(v14) = v150;
  }
  v71 = 0;
  if ( (int)dword_140404A6C[v15 + 20074651] > 0 )
  {
    v72 = 1;
    v73 = 0;
    LODWORD(v130) = 1;
    v74 = 0;
    do
    {
      if ( ((unsigned __int16)v72 & (unsigned __int16)v14 & 0x3FF) == 0 )
      {
        v75 = *(_QWORD *)&dword_140404A6C[v15 + 20074653];
        v76 = v19;
        v77 = v20 + *(float *)(v75 + v74 + 8);
        v78 = v152 + *(float *)(v75 + v74 + 40);
        v79 = v19 + *(float *)(v75 + v74 + 16);
        v80 = v19 + *(float *)(v75 + v74 + 28);
        v81 = v131 + *(float *)(v75 + v74 + 32);
        v82 = v20 + *(float *)(v75 + v74 + 20);
        v83 = (float)(v76 + *(float *)(v75 + v74 + 4)) * v10;
        v84 = (float)(v18 + *(float *)(v75 + v74 + 24)) * v10;
        v85 = v18 + *(float *)(v75 + v74 + 12);
        v86 = (float)(v18 + *(float *)(v75 + v74)) * v10;
        v145 = (float)(v18 + *(float *)(v75 + v74 + 36)) * v10;
        v87 = v131 + *(float *)(v75 + v74 + 44);
        v139 = v86;
        v88 = v79 * v10;
        v147 = v87 * v10;
        v89 = v80 * v10;
        v90 = v81 * v10;
        v91 = v88 - v83;
        v92 = v82 * v10;
        v134 = v83;
        v140 = v83;
        v133 = v77 * v10;
        v141 = v77 * v10;
        v146 = v78 * v10;
        v93 = v92 - (float)(v77 * v10);
        v142 = v85 * v10;
        v94 = (float)(v85 * v10) - v86;
        v136 = v84;
        v95 = v84 - v86;
        v143 = v88;
        v144 = v92;
        v96 = v89 - v83;
        v137 = v89;
        v138 = v90;
        v97 = v90 - (float)(v77 * v10);
        v98 = (float)(v96 * v93) - (float)(v97 * v91);
        v135 = (float)(v95 * v91) - (float)(v96 * v94);
        v99 = (float)(v97 * v94) - (float)(v95 * v93);
        v100 = fsqrt((float)((float)(v99 * v99) + (float)(v98 * v98)) + (float)(v135 * v135));
        if ( v100 == 0.0 )
        {
          v124 = 0.0;
          v102 = 0.0;
          v125 = 0.0;
          v103 = 0.0;
          v126 = 0.0;
          v101 = 0.0;
        }
        else
        {
          v101 = (float)(1.0 / v100) * v135;
          v102 = (float)(1.0 / v100) * v98;
          v103 = (float)(1.0 / v100) * v99;
          v124 = v102;
          v126 = v101;
          v125 = v103;
        }
        if ( sub_140077FA0((float *)&v127, &v124, &a7, a4, a5, &v139, &v142, &v136) )
        {
          v104 = a7;
          if ( a7 < *a3 )
          {
            v105 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v105;
            *a2 = v102;
            a2[1] = v103;
            a2[2] = v101;
            *a3 = v104;
            g_151A848F4 = v71 | 0x10000;
            g_151A848EC = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
        if ( sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v136, &v145) )
        {
          v106 = a7;
          if ( a7 < *a3 )
          {
            v107 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v107;
            *a2 = v102;
            a2[1] = v103;
            a2[2] = v101;
            *a3 = v106;
            g_151A848F4 = v71 | 0x10000;
            g_151A848EC = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
        v108 = v89 - v134;
        v109 = v88 - v134;
        v110 = v90 - v133;
        v111 = (float)(v109 * v110) - (float)((float)(v92 - v133) * v108);
        v112 = (float)(v108 * v94) - (float)(v109 * v95);
        v113 = (float)((float)(v92 - v133) * v95) - (float)(v110 * v94);
        v114 = fsqrt((float)((float)(v113 * v113) + (float)(v111 * v111)) + (float)(v112 * v112));
        if ( v114 == 0.0 )
        {
          v124 = 0.0;
          v115 = 0.0;
          v125 = 0.0;
          v116 = 0.0;
          v126 = 0.0;
          v117 = 0.0;
        }
        else
        {
          v115 = (float)(1.0 / v114) * v111;
          v116 = (float)(1.0 / v114) * v113;
          v117 = (float)(1.0 / v114) * v112;
          v124 = v115;
          v125 = v116;
          v126 = v117;
        }
        if ( sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v136, &v142) )
        {
          v118 = a7;
          if ( a7 < *a3 )
          {
            v119 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v119;
            *a2 = v115;
            a2[1] = v116;
            a2[2] = v117;
            *a3 = v118;
            g_151A848F4 = v71 | 0x10000;
            g_151A848EC = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
        v120 = sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v145, &v136);
        LOWORD(v14) = v150;
        if ( v120 )
        {
          v121 = a7;
          if ( a7 < *a3 )
          {
            v122 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v122;
            *a2 = v115;
            a2[1] = v116;
            a2[2] = v117;
            *a3 = v121;
            g_151A848F4 = v71 | 0x10000;
            g_151A848EC = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
      }
      ++v71;
      v10 = a8;
      v74 += 48;
      v18 = v132;
      v73 += 4;
      v19 = v152;
      v20 = v131;
      a4 = v151;
      v130 = COERCE_FLOAT(__ROL4__(LODWORD(v130), 1));
      v72 = LOWORD(v130);
    }
    while ( v71 < (int)dword_140404A6C[v15 + 20074651] );
    v13 = *a3;
  }
  return v13 < 1.0;
}
#undef v124
#undef v125
#undef v126
#undef v127
#undef v128
#undef v129
#undef v130
#undef v131
#undef v132
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v147
#undef v148
#undef v149
#undef v150
#undef v151
#undef v152

//----- (00000001400DF380) ----------------------------------------------------
__int64            sub_1400DF380(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float a7)
{
  extern int collision_ray_sphere(float *point, float *normal, float *fraction, const float *from, const float *to,
                                  const float *centre, float radius);
  /* src/engine/collision.c */
  return collision_ray_sphere(a1, a2, a3, a4, a5, a6, a7);
}

//----- (00000001400DF5B0) ----------------------------------------------------
_BOOL8            sub_1400DF5B0(float *a1, float *a2, int a3, int a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int *v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DF5B0[256];
#define v33 (*(float (*)[2])(void *)(sr_frame_1400DF5B0 + 0)) /* [rsp+48h] */
#define v34 (*(float (*))(void *)(sr_frame_1400DF5B0 + 8)) /* [rsp+50h] */
#define v35 (*(float (*))(void *)(sr_frame_1400DF5B0 + 16)) /* [rsp+58h] */
#define v36 (*(float (*))(void *)(sr_frame_1400DF5B0 + 20)) /* [rsp+5Ch] */
#define v37 (*(float (*))(void *)(sr_frame_1400DF5B0 + 24)) /* [rsp+60h] */
#define v38 (*(float (*)[4])(void *)(sr_frame_1400DF5B0 + 32)) /* [rsp+68h] */
#define v39 (*(float (*)[4])(void *)(sr_frame_1400DF5B0 + 48)) /* [rsp+78h] */
#define v40 (*(unsigned int (*))(void *)(sr_frame_1400DF5B0 + 64)) /* [rsp+88h] */
#define v41 (*(__int64 (*))(void *)(sr_frame_1400DF5B0 + 68)) /* [rsp+8Ch] */
#define v42 (*(__int64 (*))(void *)(sr_frame_1400DF5B0 + 240)) /* [rsp+138h] */

  *(unsigned int *)&world_unknown_151a84898 = 1065353216;
  v6 = a4 + 15432LL * a3;
  v7 = (int)dword_140404A6C[v6 + 358300580];
  if ( (int)v7 >= (int)dword_140404A6C[v6 + 358300584] )
    return 0;
  v8 = 5144LL * a3;
  v9 = &dword_140404A6C[3 * v8 + 358300589 + 3 * v7];
  do
  {
    v10 = v8 + (int)*v9;
    v11 = *(float *)&dword_140404A6C[3 * v8 + 358297508 + 3 * (int)*(v9 - 1)];
    v12 = *(float *)&dword_140404A6C[3 * v8 + 358297509 + 3 * (int)*(v9 - 1)];
    LODWORD(v39[0]) = dword_140404A6C[3 * v8 + 358297507 + 3 * (int)*(v9 - 1)];
    v39[1] = v11;
    v13 = *(float *)&dword_140404A6C[3 * v10 + 358297509];
    v14 = *(float *)&dword_140404A6C[3 * v10 + 358297507];
    v15 = *(float *)&dword_140404A6C[3 * v10 + 358297508];
    v16 = (int)v9[1];
    v38[2] = v13;
    v17 = v8 + v16;
    v18 = v13 - v12;
    v38[1] = v15;
    v19 = v15 - v11;
    v38[0] = v14;
    v20 = v14 - v39[0];
    v39[2] = v12;
    v21 = *(float *)&dword_140404A6C[3 * v17 + 358297509];
    v22 = *(float *)&dword_140404A6C[3 * v17 + 358297507];
    v36 = *(float *)&dword_140404A6C[3 * v17 + 358297508];
    v37 = v21;
    v23 = v21 - v12;
    v35 = v22;
    v24 = v22 - v39[0];
    v25 = (float)((float)(v36 - v11) * v18) - (float)(v23 * v19);
    v26 = (float)(v23 * v20) - (float)(v24 * v18);
    v27 = (float)(v24 * v19) - (float)((float)(v36 - v11) * v20);
    v28 = fsqrt((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27));
    if ( v28 == 0.0 )
    {
      v33[0] = 0.0;
      v29 = 0.0;
      v34 = 0.0;
      v31 = 0.0;
      v30 = 0.0;
    }
    else
    {
      v29 = v25 * (float)(1.0 / v28);
      v30 = v27 * (float)(1.0 / v28);
      v33[0] = v29;
      v31 = v26 * (float)(1.0 / v28);
      v34 = v30;
    }
    v33[1] = v31;
    if ( sub_140077FA0((float *)&v40, v33, (float *)&v42, a1, a2, v39, v38, &v35)
      && *(float *)&v42 < (world_unknown_151a84898) )
    {
      g_151A84880 = v40;
      *(_QWORD *)&ragdoll_unknown_height = v41;
      g_151A8488C = v29;
      g_151A84890 = v31;
      g_151A84894 = v30;
      *(unsigned int *)&world_unknown_151a84898 = v42;
    }
    LODWORD(v7) = v7 + 1;
    v9 += 3;
  }
  while ( (int)v7 < (int)dword_140404A6C[v6 + 358300584] );
  return (world_unknown_151a84898) < 1.0;
}
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42

//----- (00000001400DF8C0) ----------------------------------------------------
_BOOL8            sub_1400DF8C0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        int a9)
{
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;

  if ( a9 )
  {
    if ( !(unsigned int)sub_140077B30(a1, a2, a3, a4, a5, a6) )
      return 0;
  }
  else if ( !(unsigned int)sub_1400779F0(a1, a2, a3, a4, a5, a6) )
  {
    return 0;
  }
  v12 = a6[1];
  v13 = a6[2];
  v14 = *a6;
  v15 = a1[1];
  v16 = a1[2];
  v17 = *a1;
  if ( (float)((float)((float)((float)((float)((float)(v15 - v12) * (float)(a7[2] - v13))
                                     - (float)((float)(v16 - v13) * (float)(a7[1] - v12)))
                             * *a2)
                     + (float)((float)((float)((float)(v16 - v13) * (float)(*a7 - v14))
                                     - (float)((float)(*a1 - v14) * (float)(a7[2] - v13)))
                             * a2[1]))
             + (float)((float)((float)((float)(*a1 - v14) * (float)(a7[1] - v12))
                             - (float)((float)(v15 - v12) * (float)(*a7 - v14)))
                     * a2[2])) < 0.0 )
    return 0;
  v18 = v15 - a7[1];
  v19 = a8[2] - a7[2];
  v21 = v16 - a7[2];
  v22 = *a8 - *a7;
  v24 = a8[1] - a7[1];
  v25 = v21 * v22;
  v26 = (float)(v18 * v19) - (float)(v21 * v24);
  v27 = v17 - *a7;
  v28 = v27 * v24;
  v29 = a2[2];
  v30 = v27 * v19;
  v31 = a2[1];
  if ( (float)((float)((float)(v26 * *a2) + (float)((float)(v25 - v30) * v31))
             + (float)((float)(v28 - (float)(v18 * v22)) * v29)) < 0.0 )
    return 0;
  v20 = *a8;
  v23 = a8[1];
  return (float)((float)((float)((float)((float)((float)(v15 - v23) * (float)(v13 - a8[2]))
                                       - (float)((float)(v16 - a8[2]) * (float)(v12 - v23)))
                               * *a2)
                       + (float)((float)((float)((float)(v16 - a8[2]) * (float)(v14 - v20))
                                       - (float)((float)(v17 - v20) * (float)(v13 - a8[2])))
                               * v31))
               + (float)((float)((float)((float)(v17 - v20) * (float)(v12 - v23))
                               - (float)((float)(v15 - v23) * (float)(v14 - v20)))
                       * v29)) >= 0.0;
}

//----- (00000001400DFB70) ----------------------------------------------------
__int64            sub_1400DFB70(int a1, float *a2, float *a3, int a4)
{
  extern int collision_ray_vehicle(int vehicle, const float *from, const float *to, int wheels);
  /* src/engine/collision.c */
  return collision_ray_vehicle(a1, a2, a3, a4);
}
