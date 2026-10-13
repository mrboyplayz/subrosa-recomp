#include "shared_client.h"

//----- (00000001400EE400) ----------------------------------------------------
__int64            sub_1400EE400(int a1, __int64 a2, float a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  int v5; // ebp
  __int64 v6; // rdi
  signed int v7; // ebx
  void *v8; // rcx
  float v9; // xmm1_4
  __int64 v10; // rdx
  sr_wave_spec sr_spec;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EE400[32];
#define v13 (*(unsigned int (*))(void *)(sr_frame_1400EE400 + 0)) /* [rsp+80h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1400EE400 + 24)) /* [rsp+98h] */

  v3 = a1;
  result = sub_14024C22C("sound");
  v5 = result;
  if ( (unsigned int)v3 <= 0xFFF )
  {
    v6 = 8 * v3;
    v7 = 0;
    dword_140404A6C[v6 + 18165777] = 0;
    void *sr_stream = sr_wave_file((const char *)(uintptr_t)a2,"rb");
    result = (uintptr_t)sr_wave_load(sr_stream,1,&sr_spec,(unsigned char **)&v14,&v13);
    if ( result )
    {
      if ( sr_spec.channels == 1 )
      {
        result = (unsigned int)sr_spec.freq;
        if ( sr_spec.freq > 0 )
        {
          v8 = *(void **)&dword_140404A6C[v6 + 18165779];
          dword_140404A6C[v6 + 18165777] = 1;
          *(float *)&dword_140404A6C[v6 + 18165783] = a3;
          dword_140404A6C[v6 + 18165778] = (int)(float)((float)(v13 >> 1) * (float)(48000.0 / (float)sr_spec.freq));
          free(v8);
          v9 = 0.0;
          *(_QWORD *)&dword_140404A6C[v6 + 18165779] = sr_path_malloc((int)(4 * dword_140404A6C[v6 + 18165778]));
          if ( (int)dword_140404A6C[v6 + 18165778] > 0 )
          {
            v10 = 0;
            do
            {
              ++v7;
              *(float *)(v10 + *(_QWORD *)&dword_140404A6C[v6 + 18165779]) = (float)*(__int16 *)(v14 + 2LL * (int)v9)
                                                                           * 3.0517578125e-05;
              v10 += 4;
              v9 = fminf(v9 + (float)(1.0 / (float)(48000.0 / (float)sr_spec.freq)), (float)(int)((v13 >> 1) - 1));
            }
            while ( v7 < (int)dword_140404A6C[v6 + 18165778] );
          }
          sr_wave_free((unsigned char *)(uintptr_t)v14);
        }
      }
    }
  }
  if ( !v5 )
    return sub_14024C22C("..");
  return result;
}
#undef v13
#undef v14

//----- (000000014005ED40) ----------------------------------------------------
__int64            sub_14005ED40(int a1, float *a2, __int64 a3, float a4, float a5)
{
  __int64 v6; // rdi
  float v7; // xmm6_4
  float v8; // xmm7_4

  v6 = a1;
  v7 = 1.0;
  v8 = fminf(a4, 1.0);
  if ( fsqrt(
         (float)((float)((float)(*(float *)&dword_140404A6C[284024503] - a2[1])
                       * (float)(*(float *)&dword_140404A6C[284024503] - a2[1]))
               + (float)((float)(*(float *)&dword_140404A6C[284024502] - *a2)
                       * (float)(*(float *)&dword_140404A6C[284024502] - *a2)))
       + (float)((float)(*(float *)&dword_140404A6C[284024504] - a2[2])
               * (float)(*(float *)&dword_140404A6C[284024504] - a2[2]))) > 128.0
    || (unsigned int)sub_1400DC050(a2, (float *)&dword_140404A6C[284024502], 0) )
  {
    v7 = 0.5;
  }
  if ( dword_140404A6C[8 * v6 + 18165777] )
    sub_140069FA0(v6, (unsigned int *)a2, v8 * v7, a5, 0);
  return 0xFFFFFFFFLL;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140065AE0) ----------------------------------------------------
void            sub_140065AE0(signed int a1, float a2)
{
  float v3; // xmm8_4
  float v4; // xmm10_4
  unsigned int v5; // r14d
  float v6; // xmm12_4
  float v7; // xmm13_4
  float v8; // xmm0_4
  unsigned int v9; // ecx
  float v10; // xmm2_4
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // esi
  float v15; // xmm15_4
  float v16; // xmm0_4
  __int64 v17; // rdi
  float v18; // xmm9_4
  double v19; // xmm6_8
  double v20; // xmm0_8
  unsigned int v21; // edi
  float v22; // xmm3_4
  float v23; // xmm5_4
  unsigned int *v24; // rdx
  __int64 v25; // r9
  __m128d v26; // xmm0
  int v27; // ecx
  double v28; // xmm1_8
  int v29; // r8d
  __m128d v30; // xmm1
  double v31; // xmm2_8
  float v32; // xmm2_4
  float v33; // xmm11_4
  float v34; // xmm12_4
  float v35; // xmm3_4
  unsigned int v36; // r9d
  _WORD *v37; // r10
  int v38; // r11d
  int v39; // r8d
  __int16 *v40; // rdx
  int v41; // ecx
  float v42; // xmm13_4
  float v43; // xmm14_4
  float v44; // xmm15_4
  float v45; // xmm8_4
  int v46; // ecx
  float v47; // xmm11_4
  float v48; // xmm13_4
  float v49; // xmm14_4
  float v50; // xmm3_4
  int v51; // ecx
  float v52; // xmm12_4
  float v53; // xmm15_4
  float v54; // xmm13_4
  float v55; // xmm8_4
  int v56; // ecx
  float v57; // xmm11_4
  float v58; // xmm14_4
  float v59; // xmm15_4
  float v60; // xmm3_4
  int v61; // ecx
  float v62; // xmm12_4
  float v63; // xmm11_4
  float v64; // xmm14_4
  float v65; // xmm8_4
  int v66; // ecx
  float v67; // xmm13_4
  float v68; // xmm15_4
  float v69; // xmm3_4
  float v70; // xmm3_4
  int v71; // ecx
  float v72; // xmm11_4
  float v73; // xmm12_4
  float v74; // xmm14_4
  float v75; // xmm13_4
  int v76; // ecx
  __int16 *v77; // rdx
  int v78; // ecx
  float v79; // xmm13_4
  float v80; // xmm14_4
  float v81; // xmm15_4
  float v82; // xmm8_4
  int v83; // ecx
  float v84; // xmm11_4
  float v85; // xmm13_4
  float v86; // xmm14_4
  float v87; // xmm3_4
  int v88; // ecx
  float v89; // xmm12_4
  float v90; // xmm15_4
  float v91; // xmm13_4
  float v92; // xmm8_4
  int v93; // ecx
  float v94; // xmm11_4
  float v95; // xmm14_4
  float v96; // xmm15_4
  float v97; // xmm3_4
  int v98; // ecx
  float v99; // xmm12_4
  float v100; // xmm11_4
  float v101; // xmm14_4
  float v102; // xmm8_4
  int v103; // ecx
  float v104; // xmm13_4
  float v105; // xmm15_4
  float v106; // xmm3_4
  float v107; // xmm3_4
  int v108; // ecx
  float v109; // xmm11_4
  float v110; // xmm12_4
  float v111; // xmm14_4
  float v112; // xmm13_4
  int v113; // ecx
  __m128i *v114; // rax
  __m128i v115; // xmm0
  __m128i v116; // xmm1
  __m128i v117; // xmm0
  __m128i v118; // xmm0

  v3 = 0.0;
  if ( a1 >= (int)dword_140404A6C[283785984] && a1 <= (int)dword_140404A6C[283785994] )
  {
    v4 = 1.0;
    v5 = 0x4000;
    v6 = 0.0;
    if ( a1 == dword_140404A6C[283785994] )
      v5 = 22050;
    v7 = 0.0;
    v8 = 0.0;
    v9 = a1 - dword_140404A6C[283785984];
    v10 = 0.0;
    if ( a1 - dword_140404A6C[283785984] <= 7 )
    {
      v11 = 146;
      if ( _bittest(&v11, v9) )
        v8 = 1209.0;
    }
    if ( v9 <= 8 )
    {
      v12 = 293;
      if ( _bittest(&v12, v9) )
        v8 = 1336.0;
    }
    if ( v9 <= 9 )
    {
      v13 = 584;
      if ( _bittest(&v13, v9) )
        v8 = 1477.0;
    }
    if ( v9 - 1 <= 2 )
      v10 = 697.0;
    if ( v9 - 4 <= 2 )
      v10 = 770.0;
    if ( v9 - 7 <= 2 )
      v10 = 852.0;
    if ( v9 )
    {
      if ( v9 == 10 )
      {
        v8 = 480.0;
        v10 = 620.0;
      }
    }
    else
    {
      v10 = 941.0;
    }
    v14 = 0;
    v15 = (float)(v8 + v8) * 0.00006544984694979166;
    v17 = 0;
    v16 = (float)(v10 + v10) * 0.00006544984694979166;
    v18 = v16;
    do
    {
      v19 = (double)(__int16)(int)(sin(v6) * v4 * 8192.0);
      v20 = sin(v7);
      v6 = v6 + v15;
      v7 = v7 + v18;
      *((_WORD *)&dword_140404A6C[70357813] + v17) = (int)(v19 + v20 * v4 * 8192.0);
      if ( v14 >= v5 - 32 )
        v4 = v4 * 0.8999999761581421;
      ++v14;
      ++v17;
    }
    while ( v17 < v5 );
    sub_140069930(a1, v5, (__int16 *)&dword_140404A6C[70357813], a2);
  }
  if ( a1 >= (int)dword_140404A6C[283786011] && a1 <= (int)dword_140404A6C[283786014] )
  {
    v21 = dword_140404A6C[283786013];
    v22 = 0.0;
    v23 = 0.0009765625;
    if ( a1 == dword_140404A6C[283786013] )
      v23 = 0.001953125;
    v24 = &dword_140404A6C[70357813];
    v25 = 0x10000;
    do
    {
      v26 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
      SR_VEC_LANES(128, v26, f64)[0] = v22;
      v27 = (int)v22;
      v28 = v22;
      if ( (double)v27 != v22 )
        v28 = (double)(v27 - (_mm_movemask_pd(_mm_unpacklo_pd(v26, v26)) & 1));
      v29 = (int)(fabs(SR_VEC_LANES(128, v26, f64)[0] - v28) * 16384.0 - 8192.0);
      *(_WORD *)v24 = v29;
      if ( a1 == v21 )
      {
        v30 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
        SR_VEC_LANES(128, v30, f64)[0] = (float)(v22 * 1.5);
        v31 = SR_VEC_LANES(128, v30, f64)[0];
        if ( (double)(int)SR_VEC_LANES(128, v30, f64)[0] != SR_VEC_LANES(128, v30, f64)[0] )
          v31 = (double)((int)SR_VEC_LANES(128, v30, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v30, v30)) & 1));
        *(_WORD *)v24 = (int)(fabs(SR_VEC_LANES(128, v30, f64)[0] - v31) * 8192.0 + (double)(__int16)v29 - 4096.0);
      }
      v24 = (unsigned int *)((char *)v24 + 2);
      v22 = v22 + v23;
      --v25;
    }
    while ( v25 );
    v32 = 4.0;
    v33 = 0.0;
    v34 = 0.0;
    v35 = 0.0;
    if ( a1 == v21 )
      v32 = 1.0;
    v36 = dword_140404A6C[283786012];
    if ( a1 == dword_140404A6C[283786012] )
      v32 = 0.125;
    v37 = (_WORD *)&dword_140404A6C[70357813] + 1;
    v38 = 2;
    v39 = 2;
    v40 = (__int16 *)&dword_140404A6C[70357813] + 1;
    do
    {
      if ( a1 == v36 )
      {
        v41 = ((int)(float)((float)(v39 - 2) * 0.00390625) << 13) ^ (int)(float)((float)(v39 - 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v41 * v41 + 789221) * (15731 * v41 * v41 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v42 = (float)((float)((float)((float)((float)*(v40 - 1) * 0.000030517578f) - (float)(v35 * v32)) - v3) * 0.025f)
          + v3;
      v43 = (float)((float)(v42 - v33) * 0.025f) + v33;
      v44 = (float)((float)(v43 - v34) * 0.025f) + v34;
      v45 = (float)((float)((float)(v44 - v35) * 0.025f) + v35)
          - (float)((float)((float)((float)((float)(v44 - v35) * 0.025f) + v35)
                          * (float)((float)((float)(v44 - v35) * 0.025f) + v35))
                  * (float)((float)((float)((float)(v44 - v35) * 0.025f) + v35) * 0.16666667f));
      if ( v39 - 2 >= 0x4000 )
        *(v40 - 1) = (int)(float)(v45 * 65536.0);
      if ( a1 == v36 )
      {
        v46 = ((int)(float)((float)(v39 - 1) * 0.00390625) << 13) ^ (int)(float)((float)(v39 - 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v46 * v46 + 789221) * (15731 * v46 * v46 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v47 = (float)((float)((float)((float)((float)*v40 * 0.000030517578f) - (float)(v45 * v32)) - v42) * 0.025f) + v42;
      v48 = (float)((float)(v47 - v43) * 0.025f) + v43;
      v49 = (float)((float)(v48 - v44) * 0.025f) + v44;
      v50 = (float)((float)((float)(v49 - v45) * 0.025f) + v45)
          - (float)((float)((float)((float)((float)(v49 - v45) * 0.025f) + v45)
                          * (float)((float)((float)(v49 - v45) * 0.025f) + v45))
                  * (float)((float)((float)((float)(v49 - v45) * 0.025f) + v45) * 0.16666667f));
      if ( v39 > 0x4000 )
        *v40 = (int)(float)(v50 * 65536.0);
      if ( a1 == v36 )
      {
        v51 = ((int)(float)((float)v39 * 0.00390625) << 13) ^ (int)(float)((float)v39 * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v51 * v51 + 789221) * (15731 * v51 * v51 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v52 = (float)((float)((float)((float)((float)v40[1] * 0.000030517578f) - (float)(v50 * v32)) - v47) * 0.025f) + v47;
      v53 = (float)((float)(v52 - v48) * 0.025f) + v48;
      v54 = (float)((float)(v53 - v49) * 0.025f) + v49;
      v55 = (float)((float)((float)(v54 - v50) * 0.025f) + v50)
          - (float)((float)((float)((float)((float)(v54 - v50) * 0.025f) + v50)
                          * (float)((float)((float)(v54 - v50) * 0.025f) + v50))
                  * (float)((float)((float)((float)(v54 - v50) * 0.025f) + v50) * 0.16666667f));
      if ( v39 >= 0x4000 )
        v40[1] = (int)(float)(v55 * 65536.0);
      if ( a1 == v36 )
      {
        v56 = ((int)(float)((float)(v39 + 1) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v56 * v56 + 789221) * (15731 * v56 * v56 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v57 = (float)((float)((float)((float)((float)v40[2] * 0.000030517578f) - (float)(v55 * v32)) - v52) * 0.025f) + v52;
      v58 = (float)((float)(v57 - v53) * 0.025f) + v53;
      v59 = (float)((float)(v58 - v54) * 0.025f) + v54;
      v60 = (float)((float)((float)(v59 - v55) * 0.025f) + v55)
          - (float)((float)((float)((float)((float)(v59 - v55) * 0.025f) + v55)
                          * (float)((float)((float)(v59 - v55) * 0.025f) + v55))
                  * (float)((float)((float)((float)(v59 - v55) * 0.025f) + v55) * 0.16666667f));
      if ( v39 + 1 >= 0x4000 )
        v40[2] = (int)(float)(v60 * 65536.0);
      if ( a1 == v36 )
      {
        v61 = ((int)(float)((float)(v39 + 2) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v61 * v61 + 789221) * (15731 * v61 * v61 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v62 = (float)((float)((float)((float)((float)v40[3] * 0.000030517578f) - (float)(v60 * v32)) - v57) * 0.025f) + v57;
      v63 = (float)((float)(v62 - v58) * 0.025f) + v58;
      v64 = (float)((float)(v63 - v59) * 0.025f) + v59;
      v65 = (float)((float)((float)(v64 - v60) * 0.025f) + v60)
          - (float)((float)((float)((float)((float)(v64 - v60) * 0.025f) + v60)
                          * (float)((float)((float)(v64 - v60) * 0.025f) + v60))
                  * (float)((float)((float)((float)(v64 - v60) * 0.025f) + v60) * 0.16666667f));
      if ( v39 + 2 >= 0x4000 )
        v40[3] = (int)(float)(v65 * 65536.0);
      if ( a1 == v36 )
      {
        v66 = ((int)(float)((float)(v39 + 3) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 3) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v66 * v66 + 789221) * (15731 * v66 * v66 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v67 = (float)((float)((float)((float)((float)v40[4] * 0.000030517578f) - (float)(v65 * v32)) - v62) * 0.025f) + v62;
      v68 = (float)((float)(v67 - v63) * 0.025f) + v63;
      v69 = (float)((float)((float)((float)((float)(v68 - v64) * 0.025f) + v64) - v65) * 0.025f) + v65;
      v70 = v69 - (float)((float)(v69 * v69) * (float)(v69 * 0.16666667f));
      if ( v39 + 3 >= 0x4000 )
        v40[4] = (int)(float)(v70 * 65536.0);
      if ( a1 == v36 )
      {
        v71 = ((int)(float)((float)(v39 + 4) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 4) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v71 * v71 + 789221) * (15731 * v71 * v71 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v72 = (float)((float)((float)((float)((float)v40[5] * 0.000030517578f) - (float)(v70 * v32)) - v67) * 0.025f) + v67;
      v73 = (float)((float)(v72 - v68) * 0.025f) + v68;
      v74 = (float)((float)(v73 - (float)((float)((float)(v68 - v64) * 0.025f) + v64)) * 0.025f)
          + (float)((float)((float)(v68 - v64) * 0.025f) + v64);
      v75 = (float)((float)((float)(v74 - v70) * 0.025f) + v70)
          - (float)((float)((float)((float)((float)(v74 - v70) * 0.025f) + v70)
                          * (float)((float)((float)(v74 - v70) * 0.025f) + v70))
                  * (float)((float)((float)((float)(v74 - v70) * 0.025f) + v70) * 0.16666667f));
      if ( v39 + 4 >= 0x4000 )
        v40[5] = (int)(float)(v75 * 65536.0);
      if ( a1 == v36 )
      {
        v76 = ((int)(float)((float)(v39 + 5) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 5) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v76 * v76 + 789221) * (15731 * v76 * v76 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v3 = (float)((float)((float)((float)((float)v40[6] * 0.000030517578f) - (float)(v75 * v32)) - v72) * 0.025f) + v72;
      v33 = (float)((float)(v3 - v73) * 0.025f) + v73;
      v34 = (float)((float)(v33 - v74) * 0.025f) + v74;
      v35 = (float)((float)((float)(v34 - v75) * 0.025f) + v75)
          - (float)((float)((float)((float)((float)(v34 - v75) * 0.025f) + v75)
                          * (float)((float)((float)(v34 - v75) * 0.025f) + v75))
                  * (float)((float)((float)((float)(v34 - v75) * 0.025f) + v75) * 0.16666667f));
      if ( v39 + 5 >= 0x4000 )
        v40[6] = (int)(float)(v35 * 65536.0);
      v40 += 8;
      v39 += 8;
    }
    while ( (__int64)v40 < (__int64)((__int16 *)&dword_140404A6C[70390581] + 1) );
    v77 = (__int16 *)&dword_140404A6C[70357813] + 1;
    do
    {
      if ( a1 == v36 )
      {
        v78 = ((int)(float)((float)(v38 - 2) * 0.00390625) << 13) ^ (int)(float)((float)(v38 - 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v78 * v78 + 789221) * (15731 * v78 * v78 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v79 = (float)((float)((float)((float)((float)*(v77 - 1) * 0.000030517578f) - (float)(v35 * v32)) - v3) * 0.025f)
          + v3;
      v80 = (float)((float)(v79 - v33) * 0.025f) + v33;
      v81 = (float)((float)(v80 - v34) * 0.025f) + v34;
      v82 = (float)((float)((float)(v81 - v35) * 0.025f) + v35)
          - (float)((float)((float)((float)((float)(v81 - v35) * 0.025f) + v35)
                          * (float)((float)((float)(v81 - v35) * 0.025f) + v35))
                  * (float)((float)((float)((float)(v81 - v35) * 0.025f) + v35) * 0.16666667f));
      *(v77 - 1) = (int)(float)(v82 * 65536.0);
      if ( a1 == v36 )
      {
        v83 = ((int)(float)((float)(v38 - 1) * 0.00390625) << 13) ^ (int)(float)((float)(v38 - 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v83 * v83 + 789221) * (15731 * v83 * v83 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v84 = (float)((float)((float)((float)((float)*v77 * 0.000030517578f) - (float)(v82 * v32)) - v79) * 0.025f) + v79;
      v85 = (float)((float)(v84 - v80) * 0.025f) + v80;
      v86 = (float)((float)(v85 - v81) * 0.025f) + v81;
      v87 = (float)((float)((float)(v86 - v82) * 0.025f) + v82)
          - (float)((float)((float)((float)((float)(v86 - v82) * 0.025f) + v82)
                          * (float)((float)((float)(v86 - v82) * 0.025f) + v82))
                  * (float)((float)((float)((float)(v86 - v82) * 0.025f) + v82) * 0.16666667f));
      *v77 = (int)(float)(v87 * 65536.0);
      if ( a1 == v36 )
      {
        v88 = ((int)(float)((float)v38 * 0.00390625) << 13) ^ (int)(float)((float)v38 * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v88 * v88 + 789221) * (15731 * v88 * v88 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v89 = (float)((float)((float)((float)((float)v77[1] * 0.000030517578f) - (float)(v87 * v32)) - v84) * 0.025f) + v84;
      v90 = (float)((float)(v89 - v85) * 0.025f) + v85;
      v91 = (float)((float)(v90 - v86) * 0.025f) + v86;
      v92 = (float)((float)((float)(v91 - v87) * 0.025f) + v87)
          - (float)((float)((float)((float)((float)(v91 - v87) * 0.025f) + v87)
                          * (float)((float)((float)(v91 - v87) * 0.025f) + v87))
                  * (float)((float)((float)((float)(v91 - v87) * 0.025f) + v87) * 0.16666667f));
      v77[1] = (int)(float)(v92 * 65536.0);
      if ( a1 == v36 )
      {
        v93 = ((int)(float)((float)(v38 + 1) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v93 * v93 + 789221) * (15731 * v93 * v93 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v94 = (float)((float)((float)((float)((float)v77[2] * 0.000030517578f) - (float)(v92 * v32)) - v89) * 0.025f) + v89;
      v95 = (float)((float)(v94 - v90) * 0.025f) + v90;
      v96 = (float)((float)(v95 - v91) * 0.025f) + v91;
      v97 = (float)((float)((float)(v96 - v92) * 0.025f) + v92)
          - (float)((float)((float)((float)((float)(v96 - v92) * 0.025f) + v92)
                          * (float)((float)((float)(v96 - v92) * 0.025f) + v92))
                  * (float)((float)((float)((float)(v96 - v92) * 0.025f) + v92) * 0.16666667f));
      v77[2] = (int)(float)(v97 * 65536.0);
      if ( a1 == v36 )
      {
        v98 = ((int)(float)((float)(v38 + 2) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v98 * v98 + 789221) * (15731 * v98 * v98 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v99 = (float)((float)((float)((float)((float)v77[3] * 0.000030517578f) - (float)(v97 * v32)) - v94) * 0.025f) + v94;
      v100 = (float)((float)(v99 - v95) * 0.025f) + v95;
      v101 = (float)((float)(v100 - v96) * 0.025f) + v96;
      v102 = (float)((float)((float)(v101 - v97) * 0.025f) + v97)
           - (float)((float)((float)((float)((float)(v101 - v97) * 0.025f) + v97)
                           * (float)((float)((float)(v101 - v97) * 0.025f) + v97))
                   * (float)((float)((float)((float)(v101 - v97) * 0.025f) + v97) * 0.16666667f));
      v77[3] = (int)(float)(v102 * 65536.0);
      if ( a1 == v36 )
      {
        v103 = ((int)(float)((float)(v38 + 3) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 3) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v103 * v103 + 789221) * (15731 * v103 * v103 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v104 = (float)((float)((float)((float)((float)v77[4] * 0.000030517578f) - (float)(v102 * v32)) - v99) * 0.025f)
           + v99;
      v105 = (float)((float)(v104 - v100) * 0.025f) + v100;
      v106 = (float)((float)((float)((float)((float)(v105 - v101) * 0.025f) + v101) - v102) * 0.025f) + v102;
      v107 = v106 - (float)((float)(v106 * v106) * (float)(v106 * 0.16666667f));
      v77[4] = (int)(float)(v107 * 65536.0);
      if ( a1 == v36 )
      {
        v108 = ((int)(float)((float)(v38 + 4) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 4) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v108 * v108 + 789221) * (15731 * v108 * v108 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v109 = (float)((float)((float)((float)((float)v77[5] * 0.000030517578f) - (float)(v107 * v32)) - v104) * 0.025f)
           + v104;
      v110 = (float)((float)(v109 - v105) * 0.025f) + v105;
      v111 = (float)((float)(v110 - (float)((float)((float)(v105 - v101) * 0.025f) + v101)) * 0.025f)
           + (float)((float)((float)(v105 - v101) * 0.025f) + v101);
      v112 = (float)((float)((float)(v111 - v107) * 0.025f) + v107)
           - (float)((float)((float)((float)((float)(v111 - v107) * 0.025f) + v107)
                           * (float)((float)((float)(v111 - v107) * 0.025f) + v107))
                   * (float)((float)((float)((float)(v111 - v107) * 0.025f) + v107) * 0.16666667f));
      v77[5] = (int)(float)(v112 * 65536.0);
      if ( a1 == v36 )
      {
        v113 = ((int)(float)((float)(v38 + 5) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 5) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v113 * v113 + 789221) * (15731 * v113 * v113 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v38 += 8;
      v3 = (float)((float)((float)((float)((float)v77[6] * 0.000030517578f) - (float)(v112 * v32)) - v109) * 0.025f)
         + v109;
      v33 = (float)((float)(v3 - v110) * 0.025f) + v110;
      v34 = (float)((float)(v33 - v111) * 0.025f) + v111;
      v35 = (float)((float)((float)(v34 - v112) * 0.025f) + v112)
          - (float)((float)((float)((float)((float)(v34 - v112) * 0.025f) + v112)
                          * (float)((float)((float)(v34 - v112) * 0.025f) + v112))
                  * (float)((float)((float)((float)(v34 - v112) * 0.025f) + v112) * 0.16666667f));
      v77[6] = (int)(float)(v35 * 65536.0);
      v77 += 8;
    }
    while ( v38 - 2 < 0x4000 );
    if ( a1 == v21 )
    {
      v114 = (__m128i *)&dword_140404A6C[70357817];
      do
      {
        v115 = _mm_loadu_si128(v114 - 1);
        _mm_storeu_si128(v114 - 1, _mm_add_epi16(v115, v115));
        v116 = _mm_loadu_si128(v114);
        _mm_storeu_si128(v114, _mm_add_epi16(v116, v116));
        v117 = _mm_loadu_si128(v114 + 1);
        _mm_storeu_si128(v114 + 1, _mm_add_epi16(v117, v117));
        v118 = _mm_loadu_si128(v114 + 2);
        _mm_storeu_si128(v114 + 2, _mm_add_epi16(v118, v118));
        v114 += 4;
      }
      while ( (__int64)v114 < (__int64)&dword_140404A6C[70390585] );
    }
    else
    {
      do
      {
        *(v37 - 1) *= 3;
        *v37 *= 3;
        v37 += 2;
      }
      while ( (__int64)v37 < (__int64)((_WORD *)&dword_140404A6C[70390581] + 1) );
    }
    sub_140069930(a1, 0x20000, (__int16 *)&dword_140404A6C[70357813], a2);
  }
}

// 140065C5F: conditional instruction was optimized away because r14d.4 is in (==4000|==5622)
// 140065DA5: conditional instruction was optimized away because rcx.8<100000000u
// 140065E05: conditional instruction was optimized away because rcx.8<100000000u
// 140279850: using guessed type __int128 xmmword_140279850;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E936DC: using guessed type unsigned int;
// 183E936E0: using guessed type unsigned int;

//----- (0000000140069400) ----------------------------------------------------
void            sub_140069400(__int64 a1, __m128i *a2, int a3)
{
  sub_1401FC920(a2, (     __m128i *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[9] + 11], a3);
  dword_140404A6C[9] ^= 1u;
  SDL_SemPost(*(void **)&dword_140404A6C[1]);
}

// 140069439: control flows out of bounds to 140198E69
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140069440) ----------------------------------------------------
__int64 sub_140069440()
{
  int v0; // eax
  int v1; // ebx
  int v2; // edi
  char *v3; // rax
  int v4; // r8d
  char *v5; // rdx
  char v6; // cl
  int v7; // eax
  char *v8; // rax
  int v9; // r8d
  char *v10; // rdx
  char v11; // cl
  __int64 result; // rax

  v0 = sub_140198E7B();
  v1 = 0;
  *(_QWORD *)&dword_140404A6C[18198670] = 0x746C7561666544LL;
  v2 = 0;
  if ( v0 < 0 )
    v0 = 0;
  dword_140404A6C[18198669] = v0;
  if ( v0 > 0 )
  {
    do
    {
      v3 = (char *)sub_140198E81();
      v4 = v2 + 1;
      v5 = (char *)&dword_140404A6C[1] + ((__int64)v2 << 9) - (_QWORD)v3;
      do
      {
        v6 = *v3;
        v3[(_QWORD)v5 + 72795188] = *v3;
        ++v3;
      }
      while ( v6 );
      v0 = dword_140404A6C[18198669];
      ++v2;
    }
    while ( v4 < (int)dword_140404A6C[18198669] );
  }
  dword_140404A6C[18198669] = v0 + 1;
  v7 = sub_140198E7B();
  *(_QWORD *)&dword_140404A6C[18206865] = 0x746C7561666544LL;
  if ( v7 < 0 )
    v7 = 0;
  dword_140404A6C[18206864] = v7;
  if ( v7 > 0 )
  {
    do
    {
      v8 = (char *)sub_140198E81();
      v9 = v1 + 1;
      v10 = (char *)&dword_140404A6C[1] + ((__int64)v1 << 9) - (_QWORD)v8;
      do
      {
        v11 = *v8;
        v8[(_QWORD)v10 + 72827968] = *v8;
        ++v8;
      }
      while ( v11 );
      v7 = dword_140404A6C[18206864];
      ++v1;
    }
    while ( v9 < (int)dword_140404A6C[18206864] );
  }
  result = (unsigned int)(v7 + 1);
  dword_140404A6C[18206864] = result;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144970CA0: using guessed type unsigned int;
// 144970CA4: using guessed type __int64[4096];
// 144978CAC: using guessed type unsigned int;
// 144978CB0: using guessed type __int64[4096];

//----- (0000000140069580) ----------------------------------------------------
__int64 sub_140069580()
{
  __int64 result; // rax

  if ( !dword_140404A6C[196619] )
    return 0;
  result = dword_140404A6C[196622] - dword_140404A6C[196623] + 0x40000;
  if ( (signed int)(dword_140404A6C[196622] - dword_140404A6C[196623]) >= -131072 )
    return dword_140404A6C[196622] - dword_140404A6C[196623];
  return result;
}

//----- (0000000140069630) ----------------------------------------------------
__int64 sub_140069630()
{
  int v0; // eax
  int v1; // ebx
  char *v2; // rax
  int v3; // r8d
  char *v4; // rdx
  char v5; // cl
  int v6; // eax
  int v7; // ebx
  char *v8; // rax
  int v9; // r8d
  char *v10; // rdx
  char v11; // cl
  unsigned int v12; // eax
  unsigned int v13; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140069630[16];
#define v15 (*(char (*))(void *)(sr_frame_140069630 + 0)) /* [rsp+56h] */
#define v16 (*(unsigned __int16 (*))(void *)(sr_frame_140069630 + 2)) /* [rsp+58h] */

  dword_140404A6C[18198666] = 1048576000;
  sub_140069A00();
  v0 = sr_audio_count(0);
  *(_QWORD *)&dword_140404A6C[18198670] = 0x746C7561666544LL;
  v1 = 0;
  if ( v0 < 0 )
    v0 = 0;
  dword_140404A6C[18198669] = v0;
  if ( v0 > 0 )
  {
    do
    {
      v2 = (char *)sr_audio_name(v1,0);
      v3 = v1 + 1;
      v4 = (char *)&dword_140404A6C[1] + ((__int64)v1 << 9) - (_QWORD)v2;
      do
      {
        v5 = *v2;
        v2[(_QWORD)v4 + 72795188] = *v2;
        ++v2;
      }
      while ( v5 );
      v0 = dword_140404A6C[18198669];
      ++v1;
    }
    while ( v3 < (int)dword_140404A6C[18198669] );
  }
  dword_140404A6C[18198669] = v0 + 1;
  v6 = sr_audio_count(1);
  *(_QWORD *)&dword_140404A6C[18206865] = 0x746C7561666544LL;
  v7 = 0;
  if ( v6 < 0 )
    v6 = 0;
  dword_140404A6C[18206864] = v6;
  if ( v6 > 0 )
  {
    do
    {
      v8 = (char *)sr_audio_name(v7,1);
      v9 = v7 + 1;
      v10 = (char *)&dword_140404A6C[1] + ((__int64)v7 << 9) - (_QWORD)v8;
      do
      {
        v11 = *v8;
        v8[(_QWORD)v10 + 72827968] = *v8;
        ++v8;
      }
      while ( v11 );
      v6 = dword_140404A6C[18206864];
      ++v7;
    }
    while ( v9 < (int)dword_140404A6C[18206864] );
  }
  dword_140404A6C[18206864] = v6 + 1;
  {
    void *semaphore=sr_audio_semaphore(0);
    void *thread;
    sr_startup_audio_spec desired,obtained;
    __builtin_memcpy(&dword_140404A6C[1],&semaphore,8);
    thread=sr_audio_thread((void *)(uintptr_t)sub_14006BB10,"cs_audio_updatethread",NULL,
       (void *)(uintptr_t)sub_14023D25C,(void *)(uintptr_t)sub_14023D33C);
    __builtin_memcpy(&dword_140404A6C[3],&thread,8);
    memset(&desired,0,32);
    desired.freq=48000;desired.format=0x8120;desired.channels=2;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_140069400;
    v12=sr_audio_open(NULL,0,&desired,&obtained,0);
    dword_140404A6C[8]=obtained.samples;
    if(obtained.channels!=2 || obtained.samples!=1024)v12=0;
    dword_140404A6C[7]=v12;
    memset(&desired,0,32);memset(&obtained,0,32);
    desired.freq=48000;desired.format=0x8010;desired.channels=1;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_14006A380;
    v13=sr_audio_open(sr_audio_name(0,1),1,&desired,&obtained,0);
  }
  dword_140404A6C[5] = 1124856083;
  *(_OWORD *)&dword_140404A6C[18198549] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[18198553] = xmmword_140278D30;
  dword_140404A6C[18198557] = 1065353216;
  dword_140404A6C[196619] = v13;
  if(!dword_140404A6C[7])return 0;
  sr_audio_pause(dword_140404A6C[7],0);
  sr_audio_pause(dword_140404A6C[196619],0);
  return 1;
}
#undef v15
#undef v16

// 1400697ED: variable 'v16' is possibly undefined
// 1400697F3: variable 'v15' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 140404A70: using guessed type unsigned int;
// 140404A78: using guessed type unsigned int;
// 140404A80: using guessed type unsigned int;
// 140404A88: using guessed type unsigned int;
// 1404C4A98: using guessed type unsigned int;
// 144970AC0: using guessed type unsigned int;
// 144970AD0: using guessed type unsigned int;
// 144970AE0: using guessed type unsigned int;
// 144970C94: using guessed type unsigned int;
// 144970CA0: using guessed type unsigned int;
// 144970CA4: using guessed type __int64[4096];
// 144978CAC: using guessed type unsigned int;
// 144978CB0: using guessed type __int64[4096];

//----- (0000000140069930) ----------------------------------------------------
void            sub_140069930(unsigned int a1, int a2, __int16 *a3, float a4)
{
  __int64 v4; // rdi
  void *v6; // rcx
  __int64 v7; // rax
  signed int v8; // ecx
  __int64 v9; // rdx
  int v10; // eax

  if ( a1 <= 0xFFF )
  {
    v4 = 8LL * (int)a1;
    v6 = *(void **)&dword_140404A6C[v4 + 18165779];
    *(float *)&dword_140404A6C[v4 + 18165783] = a4;
    dword_140404A6C[v4 + 18165777] = 1;
    dword_140404A6C[v4 + 18165778] = a2 / 2;
    free(v6);
    v7 = sr_path_malloc((int)(4 * dword_140404A6C[v4 + 18165778]));
    v8 = 0;
    *(_QWORD *)&dword_140404A6C[v4 + 18165779] = v7;
    if ( (int)dword_140404A6C[v4 + 18165778] > 0 )
    {
      v9 = 0;
      do
      {
        v10 = *a3++;
        ++v8;
        v9 += 4;
        *(float *)(v9 + *(_QWORD *)&dword_140404A6C[v4 + 18165779] - 4) = (float)v10 * 3.0517578125e-05;
      }
      while ( v8 < (int)dword_140404A6C[v4 + 18165778] );
    }
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140069A00) ----------------------------------------------------
void sub_140069A00()
{
  __int64 v0; // rax
  __int64 v1; // r15
  unsigned int *v2; // r12
  int v3; // ecx
  int i; // ebx
  int v5; // edx
  int v6; // eax
  unsigned int *v7; // r8
  unsigned int *v8; // r13
  signed int v9; // r14d
  __int64 v10; // r12
  int v11; // ebx
  __int64 v12; // rbp
  unsigned int *v13; // rsi
  unsigned int *v14; // rdi
  int v15; // eax
  int v16; // ebp
  unsigned int *v17; // rdi
  signed int v18; // ebx
  signed int v19; // eax
  signed int v20; // r14d
  unsigned int *v21; // r15
  __int64 v22; // rbp
  int v23; // ecx
  signed int v24; // r11d
  __int64 v25; // rdi
  unsigned int *v26; // rbx
  int v27; // r9d
  int v28; // edx
  __int64 v29; // rsi
  _WORD *v30; // r8
  __int64 v31; // r10
  unsigned int *v32; // rcx
  __int64 v33; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140069A00[336];
#define v35 (*(__int64 (*))(void *)(sr_frame_140069A00 + 0)) /* [rsp+0h] */
#define v36 (*(int (*))(void *)(sr_frame_140069A00 + 32)) /* [rsp+20h] */
#define v37 (*(unsigned int * (*))(void *)(sr_frame_140069A00 + 40)) /* [rsp+28h] */
#define v38 (*(unsigned int * (*))(void *)(sr_frame_140069A00 + 48)) /* [rsp+30h] */
#define Buffer (*(char (*)[256])(void *)(sr_frame_140069A00 + 64)) /* [rsp+40h] */
#define v40 (*(__int64 (*))(void *)(sr_frame_140069A00 + 320)) /* [rsp+140h] */

  v0 = sub_14020B8D8("default-48000.mhr", "rb");
  v1 = v0;
  v2 = &dword_140404A6C[175561672];
  if ( v0 )
  {
    fread_sr((void *)(uintptr_t)(Buffer), 8, 1, (FILE *)(uintptr_t)(v0));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[175561669]), 4, 1, (FILE *)(uintptr_t)(v1));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[175561670]), 1, 1, (FILE *)(uintptr_t)(v1));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[175561671]), 1, 1, (FILE *)(uintptr_t)(v1));
    v3 = dword_140404A6C[175561671];
    for ( i = 0; i < (int)dword_140404A6C[175561671]; ++i )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[i + 175561672]), 1, 1, (FILE *)(uintptr_t)(v1));
      v3 = dword_140404A6C[175561671];
    }
    v5 = 0;
    v36 = 0;
    if ( v3 > 0 )
    {
      v6 = dword_140404A6C[175561670];
      v7 = nullptr;
      v37 = nullptr;
      v8 = &dword_140404A6C[175561672];
      v38 = &dword_140404A6C[175561672];
      do
      {
        v9 = 0;
        v10 = 0;
        if ( (int)*v8 > 0 )
        {
          do
          {
            v11 = 0;
            if ( v6 > 0 )
            {
              v12 = 32 * (v9 + ((__int64)v5 << 7));
              v13 = &dword_140404A6C[64 * ((_QWORD)v7 + v10) + 176118984];
              v14 = &dword_140404A6C[32 * ((_QWORD)v7 + v10) + 175561928];
              do
              {
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[v12 + 175561928 + v11]), 2, 1, (FILE *)(uintptr_t)(v1));
                v15 = *(__int16 *)v14++;
                ++v11;
                v13 += 2;
                *((float *)v13 - 2) = (float)v15 * 3.0517578125e-05;
                v6 = dword_140404A6C[175561670];
              }
              while ( v11 < (int)dword_140404A6C[175561670] );
              v8 = v38;
              v5 = v36;
              v7 = v37;
            }
            ++v9;
            ++v10;
          }
          while ( v9 < (int)*v8 );
          v3 = dword_140404A6C[175561671];
        }
        ++v5;
        ++v8;
        v7 += 32;
        v36 = v5;
        v38 = v8;
        v37 = v7;
      }
      while ( v5 < v3 );
      v2 = &dword_140404A6C[175561672];
    }
    v16 = 0;
    if ( v3 > 0 )
    {
      v17 = &dword_140404A6C[175561672];
      do
      {
        v18 = 0;
        if ( (int)*v17 > 0 )
        {
          do
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[256 * (__int64)v16 + 176086216 + 2 * v18++]), 1, 1, (FILE *)(uintptr_t)(v1));
          while ( v18 < (int)*v17 );
          v3 = dword_140404A6C[175561671];
        }
        ++v16;
        ++v17;
      }
      while ( v16 < v3 );
    }
    sub_14020B9E8(v1);
  }
  v19 = dword_140404A6C[175561671];
  v20 = 0;
  v36 = 0;
  if ( (int)dword_140404A6C[175561671] > 0 )
  {
    v21 = &dword_140404A6C[176086216];
    v22 = 0;
    v37 = &dword_140404A6C[176086216];
    do
    {
      v23 = *v2;
      v24 = 0;
      v25 = 0;
      if ( (int)*v2 > 0 )
      {
        v26 = v21;
        do
        {
          v27 = 0;
          v28 = (v23 - v24) % v23;
          v29 = v28;
          if ( (int)dword_140404A6C[175561670] > 0 )
          {
            v30 = (_WORD *)&dword_140404A6C[32 * (v28 + v22) + 175561928] + 1;
            v31 = (v25 - v28) << 8;
            v32 = &dword_140404A6C[64 * (v28 + v22) + 176118985];
            v33 = (v25 - v28) << 7;
            do
            {
              ++v27;
              *v32 = *(unsigned int *)((char *)v32 + v31 - 4);
              v32 += 2;
              *v30 = *(_WORD *)((char *)v30 + v33 - 2);
              v30 += 2;
            }
            while ( v27 < (int)dword_140404A6C[175561670] );
          }
          dword_140404A6C[2 * v29 + 176086217 + 2 * v22] = *v26;
          ++v24;
          v23 = *v2;
          ++v25;
          v26 += 2;
        }
        while ( v24 < (int)*v2 );
        v19 = dword_140404A6C[175561671];
        v20 = v36;
        v21 = v37;
      }
      ++v20;
      v21 += 256;
      v22 += 128;
      v36 = v20;
      ++v2;
      v37 = v21;
    }
    while ( v20 < v19 );
  }
  dword_140404A6C[177167560] = 127;
  return;
}
#undef v35
#undef v36
#undef v37
#undef v38
#undef Buffer
#undef v40

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A1BB984: using guessed type unsigned int;
// 16A1BB988: using guessed type unsigned int;
// 16A7DBD8C: using guessed type unsigned int;

//----- (0000000140069DE0) ----------------------------------------------------
void            sub_140069DE0(unsigned int a1, __int64 a2, float a3)
{
  signed int v3; // ebx
  __int64 v4; // rdi
  void *v5; // rcx
  float v6; // xmm1_4
  __int64 v7; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140069DE0[112];
#define v8 (*(int (*))(void *)(sr_frame_140069DE0 + 0)) /* [rsp+30h] */
#define v9 (*(char (*))(void *)(sr_frame_140069DE0 + 6)) /* [rsp+36h] */
#define v10 (*(unsigned int (*))(void *)(sr_frame_140069DE0 + 80)) /* [rsp+80h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_140069DE0 + 104)) /* [rsp+98h] */

  if ( a1 <= 0xFFF )
  {
    v3 = 0;
    v4 = 8LL * (int)a1;
    dword_140404A6C[v4 + 18165777] = 0;
    sub_140198E75();
    if ( sub_140198E93() )
    {
      if ( v9 == 1 && v8 > 0 )
      {
        v5 = *(void **)&dword_140404A6C[v4 + 18165779];
        dword_140404A6C[v4 + 18165777] = 1;
        *(float *)&dword_140404A6C[v4 + 18165783] = a3;
        dword_140404A6C[v4 + 18165778] = (int)(float)((float)(v10 >> 1) * (float)(48000.0 / (float)v8));
        free(v5);
        v6 = 0.0;
        *(_QWORD *)&dword_140404A6C[v4 + 18165779] = sr_path_malloc((int)(4 * dword_140404A6C[v4 + 18165778]));
        if ( (int)dword_140404A6C[v4 + 18165778] > 0 )
        {
          v7 = 0;
          do
          {
            ++v3;
            *(float *)(v7 + *(_QWORD *)&dword_140404A6C[v4 + 18165779]) = (float)*(__int16 *)(v11 + 2LL * (int)v6)
                                                                        * 3.0517578125e-05;
            v7 += 4;
            v6 = fminf(v6 + (float)(1.0 / (float)(48000.0 / (float)v8)), (float)(int)((v10 >> 1) - 1));
          }
          while ( v3 < (int)dword_140404A6C[v4 + 18165778] );
        }
        sub_140198E99();
      }
    }
  }
}
#undef v8
#undef v9
#undef v10
#undef v11

// 140069E66: variable 'v9' is possibly undefined
// 140069E72: variable 'v8' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140069FA0) ----------------------------------------------------
__int64            sub_140069FA0(signed int a1, unsigned int *a2, float a3, float a4, unsigned int a5)
{
  __int64 v7; // rsi
  unsigned int *v8; // rax
  unsigned int v9; // edi
  __int64 v11; // rbx

  if ( !dword_140404A6C[7] )
    return 0xFFFFFFFFLL;
  v7 = 8LL * a1;
  if ( !dword_140404A6C[v7 + 18165777] )
    return 0xFFFFFFFFLL;
  v8 = &dword_140404A6C[327697];
  v9 = 0;
  while ( *v8 )
  {
    ++v9;
    v8 += 278720;
    if ( (__int64)v8 >= (__int64)&dword_140404A6C[15936017] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 278720LL * (int)v9;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v11 + 327698]), 0, 0x1102FCu);
  *(float *)&dword_140404A6C[v11 + 327699] = a3;
  *(_QWORD *)&dword_140404A6C[v11 + 327697] = 1;
  dword_140404A6C[v11 + 327772] = 0;
  dword_140404A6C[v11 + 589917] = 0;
  dword_140404A6C[v11 + 327708] = a5;
  *(float *)&dword_140404A6C[v11 + 327704] = a3;
  *(float *)&dword_140404A6C[v11 + 327705] = a3;
  *(float *)&dword_140404A6C[v11 + 327706] = a4;
  *(float *)&dword_140404A6C[v11 + 327707] = a4;
  dword_140404A6C[v11 + 327700] = 1;
  dword_140404A6C[v11 + 327702] = a1;
  *(_QWORD *)&dword_140404A6C[v7 + 18165781] = 0;
  dword_140404A6C[v11 + 606302] = *a2;
  dword_140404A6C[v11 + 606303] = a2[1];
  dword_140404A6C[v11 + 606304] = a2[2];
  dword_140404A6C[v11 + 606308] = dword_140404A6C[v7 + 18165783];
  dword_140404A6C[v11 + 606310] = 1;
  dword_140404A6C[v11 + 606414] = 0;
  return v9;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006A140) ----------------------------------------------------
__int64            sub_14006A140(int a1, int a2, float a3, float a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx

  v5 = a2;
  if ( dword_140404A6C[7] )
  {
    result = a1;
    v7 = 278720LL * a1;
    if ( !dword_140404A6C[v7 + 327697] )
    {
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v7 + 327698]), 0, 0x1102FCu);
      *(_QWORD *)&dword_140404A6C[v7 + 327697] = 1;
      dword_140404A6C[v7 + 327772] = 0;
      dword_140404A6C[v7 + 589917] = 0;
      *(float *)&dword_140404A6C[v7 + 327704] = a3;
      *(float *)&dword_140404A6C[v7 + 327705] = a3;
      *(float *)&dword_140404A6C[v7 + 327706] = a4;
      *(float *)&dword_140404A6C[v7 + 327707] = a4;
      dword_140404A6C[v7 + 327700] = 1;
      dword_140404A6C[v7 + 327702] = v5;
      dword_140404A6C[v7 + 327708] = a5;
      result = dword_140404A6C[8 * v5 + 18165783];
      dword_140404A6C[v7 + 606308] = result;
      *(_QWORD *)&dword_140404A6C[8 * v5 + 18165781] = 0;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006A240) ----------------------------------------------------
__int64            sub_14006A240(int a1, int a2, unsigned int *a3, float a4, unsigned int a5, unsigned int a6)
{
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rbx

  v7 = a2;
  if ( dword_140404A6C[7] )
  {
    result = a1;
    v9 = 278720LL * a1;
    if ( !dword_140404A6C[v9 + 327697] )
    {
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 327698]), 0, 0x1102FCu);
      *(float *)&dword_140404A6C[v9 + 327699] = a4;
      *(_QWORD *)&dword_140404A6C[v9 + 327697] = 1;
      dword_140404A6C[v9 + 327772] = 0;
      dword_140404A6C[v9 + 589917] = 0;
      *(float *)&dword_140404A6C[v9 + 327704] = a4;
      *(float *)&dword_140404A6C[v9 + 327705] = a4;
      dword_140404A6C[v9 + 327706] = a5;
      dword_140404A6C[v9 + 327707] = a5;
      dword_140404A6C[v9 + 327700] = 1;
      dword_140404A6C[v9 + 327702] = v7;
      dword_140404A6C[v9 + 327708] = a6;
      *(_QWORD *)&dword_140404A6C[8 * v7 + 18165781] = 0;
      dword_140404A6C[v9 + 606302] = *a3;
      dword_140404A6C[v9 + 606303] = a3[1];
      dword_140404A6C[v9 + 606304] = a3[2];
      result = dword_140404A6C[8 * v7 + 18165783];
      dword_140404A6C[v9 + 606308] = result;
      dword_140404A6C[v9 + 606310] = 1;
      dword_140404A6C[v9 + 606414] = 0;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006A380) ----------------------------------------------------
__m128i *           sub_14006A380(__int64 a1,      __m128i *a2, int a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // ebx
  int v6; // edi
  __m128i *result; // rax

  v3 = dword_140404A6C[196622];
  v5 = 0;
  v6 = a3 / 2;
  if ( (signed int)(dword_140404A6C[196622] + a3 / 2) > 0x40000 )
  {
    v5 = 0x40000 - dword_140404A6C[196622];
    sub_1401FC920(
      (__m128i *)((char *)&dword_140404A6C[196624] + 2 * (int)dword_140404A6C[196622]),
      a2,
      2 * (0x40000 - dword_140404A6C[196622]));
    v6 -= v5;
    v3 = 0;
    dword_140404A6C[196622] = 0;
  }
  result = sub_1401FC920(
             (__m128i *)((char *)&dword_140404A6C[196624] + 2 * (int)v3),
             (     __m128i *)((char *)a2 + 2 * (int)v5),
             2 * v6);
  dword_140404A6C[196622] = (v6 + dword_140404A6C[196622]) & 0x3FFFF;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1404C4AA4: using guessed type unsigned int;

//----- (000000014006A5C0) ----------------------------------------------------
__int64 sub_14006A5C0()
{
  __int64 result; // rax

  if ( (int)dword_140404A6C[196619] > 0 )
    result = sub_140198E9F();
  if ( (int)dword_140404A6C[7] > 0 )
    return sub_140198E9F();
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006B4C0) ----------------------------------------------------
__int64            sub_14006B4C0(int a1, int a2, int a3, int a4)
{
  __int64 v5; // r9
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rdi
  float v10; // xmm2_4
  float v11; // xmm4_4
  int v12; // ebx
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float i; // xmm5_4
  float v17; // xmm1_4
  int v18; // edx
  int v19; // r10d
  __int64 v20; // r9
  float v21; // xmm1_4
  int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm1_4

  v5 = 278720LL * a1;
  v7 = v5 * 4 + 36LL * a2;
  v8 = *(int *)((char *)&dword_140404A6C[327702] + v7);
  if ( (unsigned int)v8 > 0xFFF )
    return 0;
  v9 = 8 * v8;
  if ( !*(_QWORD *)&dword_140404A6C[8 * v8 + 18165779] )
    return 0;
  v10 = *(float *)((char *)&dword_140404A6C[327705] + v7);
  if ( dword_140404A6C[v5 + 327698] == 1 )
    *(unsigned int *)((char *)&dword_140404A6C[327704] + v7) = 0;
  v11 = *(float *)((char *)&dword_140404A6C[327704] + v7);
  v12 = 0;
  v13 = *(float *)((char *)&dword_140404A6C[327706] + v7);
  v14 = *(float *)((char *)&dword_140404A6C[327707] + v7);
  *(float *)((char *)&dword_140404A6C[327705] + v7) = v11;
  *(float *)((char *)&dword_140404A6C[327707] + v7) = v13;
  v15 = (float)(v11 - v10) * (float)(1.0 / (float)a4);
  for ( i = (float)(v13 - v14) * (float)(1.0 / (float)a4); v12 < a4; v14 = v14 + i )
  {
    v17 = *(float *)((char *)&dword_140404A6C[327703] + v7);
    v18 = 0;
    v19 = dword_140404A6C[v9 + 18165778];
    if ( (int)v17 < v19 )
      v18 = (int)v17;
    v20 = 278720LL * a1 + a3;
    v21 = v17 - (float)v18;
    v22 = 0;
    if ( v18 + 1 < v19 )
      v22 = v18 + 1;
    a3 = (a3 + 1) & 0x3FFFF;
    *(float *)&dword_140404A6C[v20 + 327773] = (float)((float)((float)((float)(1.0 - v21)
                                                                     * *(float *)(*(_QWORD *)&dword_140404A6C[v9 + 18165779]
                                                                                + 4LL * v18))
                                                             + (float)(v21
                                                                     * *(float *)(*(_QWORD *)&dword_140404A6C[v9 + 18165779]
                                                                                + 4LL * v22)))
                                                     * v10)
                                             + *(float *)&dword_140404A6C[v20 + 327773];
    v23 = v14 + *(float *)((char *)&dword_140404A6C[327703] + v7);
    *(float *)((char *)&dword_140404A6C[327703] + v7) = v23;
    v24 = (float)(int)dword_140404A6C[v9 + 18165778];
    if ( v23 >= v24 )
    {
      if ( !*(unsigned int *)((char *)&dword_140404A6C[327708] + v7) )
      {
        *(unsigned int *)((char *)&dword_140404A6C[327700] + v7) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[327701] + v7) = 2;
        break;
      }
      *(float *)((char *)&dword_140404A6C[327703] + v7) = v23 - v24;
    }
    ++v12;
    v10 = v10 + v15;
  }
  dword_140404A6C[v9 + 18165782] = (int)*(float *)((char *)&dword_140404A6C[327703] + v7);
  return *(unsigned int *)((char *)&dword_140404A6C[327700] + v7);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006B6F0) ----------------------------------------------------
__int64            sub_14006B6F0(int a1, int a2)
{
  __int64 v3; // rsi
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebp
  unsigned int *v10; // rdi
  int i; // ebx
  __int64 result; // rax

  v3 = 278720LL * a1;
  v5 = dword_140404A6C[v3 + 327772];
  if ( a2 > 0 )
  {
    v6 = 278720LL * a1;
    v7 = (unsigned int)a2;
    do
    {
      v8 = v6 + v5;
      v5 = (v5 + 1) & 0x3FFFF;
      dword_140404A6C[v8 + 327773] = 0;
      --v7;
    }
    while ( v7 );
  }
  v9 = 0;
  v10 = &dword_140404A6C[v3 + 327700];
  for ( i = 0; i < 8; ++i )
  {
    if ( *v10 && (unsigned int)sub_14006B4C0(a1, i, dword_140404A6C[v3 + 327772], a2) )
      v9 = 1;
    v10 += 9;
  }
  dword_140404A6C[v3 + 327772] = (a2 + dword_140404A6C[v3 + 327772]) & 0x3FFFF;
  result = sub_14006A5F0(a1, a2);
  dword_140404A6C[v3 + 589917] = (a2 + dword_140404A6C[v3 + 589917]) & 0x3FFFF;
  if ( !v9 && *(float *)&dword_140404A6C[v3 + 327703] < *(float *)&dword_140404A6C[v3 + 606309] )
    dword_140404A6C[v3 + 327697] = 0;
  if ( dword_140404A6C[v3 + 327698] == 1 )
    dword_140404A6C[v3 + 327697] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006B850) ----------------------------------------------------
void sub_14006B850()
{
  int v0; // esi
  int v1; // r8d
  int v2; // r14d
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int *v6; // rbx
  int v7; // r12d
  __int64 v8; // r13
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r15d
  unsigned int *v13; // rbp
  int i; // edi
  int v15; // r9d
  __int64 v16; // r10
  float *v17; // r8
  int v18; // eax
  float v19; // xmm0_4
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax

  if ( dword_140404A6C[7] && dword_140404A6C[10] != dword_140404A6C[9] )
  {
    v0 = 0;
    v1 = 0;
    v2 = dword_140404A6C[8];
    if ( (int)dword_140404A6C[8] > 0 )
    {
      v3 = 0;
      do
      {
        v4 = 2 * v1++;
        dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v4] = 0;
        v5 = v3 + ((__int64)(int)dword_140404A6C[10] << 15);
        ++v3;
        dword_140404A6C[2 * v5 + 12] = 0;
        v2 = dword_140404A6C[8];
      }
      while ( v1 < (int)dword_140404A6C[8] );
    }
    dword_140404A6C[6] = 0;
    v6 = &dword_140404A6C[327772];
    v7 = 0;
    v8 = 0;
    do
    {
      if ( *(v6 - 75) )
      {
        v9 = *v6;
        if ( v2 > 0 )
        {
          v10 = (unsigned int)v2;
          do
          {
            v11 = v8 + v9;
            v9 = (v9 + 1) & 0x3FFFF;
            dword_140404A6C[v11 + 327773] = 0;
            --v10;
          }
          while ( v10 );
        }
        v12 = 0;
        v13 = v6 - 72;
        for ( i = 0; i < 8; ++i )
        {
          if ( *v13 && (unsigned int)sub_14006B4C0(v7, i, *v6, v2) )
            v12 = 1;
          v13 += 9;
        }
        *v6 = (v2 + *v6) & 0x3FFFF;
        sub_14006A5F0(v7, v2);
        v6[262145] = (v2 + v6[262145]) & 0x3FFFF;
        if ( !v12 && *((float *)v6 - 69) < *((float *)v6 + 278537) )
          *(v6 - 75) = 0;
        if ( *(v6 - 74) == 1 )
          *(v6 - 75) = 0;
        v2 = dword_140404A6C[8];
        v15 = 0;
        v16 = 0;
        if ( (int)dword_140404A6C[8] > 0 )
        {
          v17 = (float *)(v6 + 262147);
          do
          {
            v18 = 2 * v15++;
            *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v18] = *(v17 - 1)
                                                                                               + *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v18];
            v19 = *v17;
            v17 += 2;
            v20 = v16 + ((__int64)(int)dword_140404A6C[10] << 15);
            ++v16;
            *(float *)&dword_140404A6C[2 * v20 + 12] = v19 + *(float *)&dword_140404A6C[2 * v20 + 12];
            v2 = dword_140404A6C[8];
          }
          while ( v15 < (int)dword_140404A6C[8] );
        }
        ++dword_140404A6C[6];
      }
      ++v7;
      v8 += 278720;
      v6 += 278720;
    }
    while ( v7 < 64 );
    if ( v2 > 0 )
    {
      v21 = 0;
      do
      {
        v22 = 2 * v0++;
        *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22] = *(float *)&dword_140404A6C[18198666]
                                                                                           * *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22];
        v23 = v21 + ((__int64)(int)dword_140404A6C[10] << 15);
        ++v21;
        *(float *)&dword_140404A6C[2 * v23 + 12] = *(float *)&dword_140404A6C[18198666]
                                                 * *(float *)&dword_140404A6C[2 * v23 + 12];
      }
      while ( v0 < (int)dword_140404A6C[8] );
    }
    dword_140404A6C[10] ^= 1u;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 140404A84: using guessed type unsigned int;
// 140404A8C: using guessed type unsigned int;

//----- (000000014006BB10) ----------------------------------------------------
void __attribute__((noreturn)) sub_14006BB10()
{
  int v0; // r14d
  int v1; // r8d
  __int64 i; // r9
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int *v5; // rbx
  int v6; // r15d
  __int64 v7; // r12
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  unsigned int *v12; // rsi
  int j; // edi
  int v14; // r9d
  __int64 v15; // r10
  float *v16; // r8
  int v17; // eax
  float v18; // xmm0_4
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rax

  while ( 1 )
  {
    do
    {
      do
        sub_140198E63();
      while ( !dword_140404A6C[7] );
    }
    while ( dword_140404A6C[10] == dword_140404A6C[9] );
    v0 = dword_140404A6C[8];
    v1 = 0;
    for ( i = 0; v1 < (int)dword_140404A6C[8]; v0 = dword_140404A6C[8] )
    {
      v3 = 2 * v1++;
      dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v3] = 0;
      v4 = i + ((__int64)(int)dword_140404A6C[10] << 15);
      ++i;
      dword_140404A6C[2 * v4 + 12] = 0;
    }
    dword_140404A6C[6] = 0;
    v5 = &dword_140404A6C[327772];
    v6 = 0;
    v7 = 0;
    do
    {
      if ( *(v5 - 75) )
      {
        v8 = *v5;
        if ( v0 > 0 )
        {
          v9 = (unsigned int)v0;
          do
          {
            v10 = v7 + v8;
            v8 = (v8 + 1) & 0x3FFFF;
            dword_140404A6C[v10 + 327773] = 0;
            --v9;
          }
          while ( v9 );
        }
        v11 = 0;
        v12 = v5 - 72;
        for ( j = 0; j < 8; ++j )
        {
          if ( *v12 && (unsigned int)sub_14006B4C0(v6, j, *v5, v0) )
            v11 = 1;
          v12 += 9;
        }
        *v5 = (v0 + *v5) & 0x3FFFF;
        sub_14006A5F0(v6, v0);
        v5[262145] = (v0 + v5[262145]) & 0x3FFFF;
        if ( !v11 && *((float *)v5 - 69) < *((float *)v5 + 278537) )
          *(v5 - 75) = 0;
        if ( *(v5 - 74) == 1 )
          *(v5 - 75) = 0;
        v0 = dword_140404A6C[8];
        v14 = 0;
        v15 = 0;
        if ( (int)dword_140404A6C[8] > 0 )
        {
          v16 = (float *)(v5 + 262147);
          do
          {
            v17 = 2 * v14++;
            *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v17] = *(v16 - 1)
                                                                                               + *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v17];
            v18 = *v16;
            v16 += 2;
            v19 = v15 + ((__int64)(int)dword_140404A6C[10] << 15);
            ++v15;
            *(float *)&dword_140404A6C[2 * v19 + 12] = v18 + *(float *)&dword_140404A6C[2 * v19 + 12];
            v0 = dword_140404A6C[8];
          }
          while ( v14 < (int)dword_140404A6C[8] );
        }
        ++dword_140404A6C[6];
      }
      ++v6;
      v7 += 278720;
      v5 += 278720;
    }
    while ( v6 < 64 );
    v20 = 0;
    v21 = 0;
    if ( v0 > 0 )
    {
      do
      {
        v22 = 2 * v20++;
        *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22] = *(float *)&dword_140404A6C[18198666]
                                                                                           * *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22];
        v23 = v21 + ((__int64)(int)dword_140404A6C[10] << 15);
        ++v21;
        *(float *)&dword_140404A6C[2 * v23 + 12] = *(float *)&dword_140404A6C[18198666]
                                                 * *(float *)&dword_140404A6C[2 * v23 + 12];
      }
      while ( v20 < (int)dword_140404A6C[8] );
    }
    dword_140404A6C[10] ^= 1u;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 140404A84: using guessed type unsigned int;
// 140404A8C: using guessed type unsigned int;

//----- (000000014007D610) ----------------------------------------------------
__int64            sub_14007D610(unsigned int a1, float a2)
{
  __int64 v3; // rbx
  void *v4; // rcx
  _WORD *v5; // rax

  v3 = 8LL * (int)a1;
  v4 = *(void **)&dword_140404A6C[v3 + 18165779];
  *(float *)&dword_140404A6C[v3 + 18165783] = a2;
  dword_140404A6C[v3 + 18165777] = 1;
  dword_140404A6C[v3 + 18165778] = 0x40000;
  free(v4);
  v5 = (_WORD *)sr_path_malloc(0x100000);
  *(_QWORD *)&dword_140404A6C[v3 + 18165779] = (uint64)(uintptr_t)(v5);
  sub_1401FCD30((void *)(uintptr_t)(v5), 0, 0x100000u);
  *(_QWORD *)&dword_140404A6C[v3 + 18165781] = 0;
  return a1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007D6C0) ----------------------------------------------------
__int64            sub_14007D6C0(int a1)
{
  __int64 v1; // rax
  unsigned int v2; // r10d
  int v3; // r8d

  v1 = 8LL * a1;
  v2 = dword_140404A6C[v1 + 18165782];
  v3 = dword_140404A6C[v1 + 18165781] - v2;
  if ( v3 >= (int)dword_140404A6C[v1 + 18165778] / -2 )
    return (unsigned int)v3;
  else
    return dword_140404A6C[v1 + 18165781] + dword_140404A6C[v1 + 18165778] - v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140105BD0) ----------------------------------------------------
__int64            sub_140105BD0(float a1)
{
  float v1; // xmm1_4

  v1 = pow(a1, 1.75);
  return (unsigned int)(int)(float)((float)(1.0 - (float)(v1 * 0.00390625)) * 256.0);
}


//----- (000000014010E190) ----------------------------------------------------
_WORD *           sub_14010E190(int a1, _WORD *a2, int a3, int a4)
{
  __int64 v5; // rdx
  int v6; // r8d
  int *v7; // rcx

  v5 = a3;
  v6 = dword_140404A6C[96401 * a3 + 308337813 + a4];
  v7 = *(int **)&dword_140404A6C[2 * a1 + 299853565];
  if ( v6 > 0 )
    return (_WORD *)sub_1401E25C0(
                      v7,
                      (char *)&dword_140404A6C[96401 * v5 + 308337941 + 512 * (__int64)a4],
                      v6,
                      (__int64)a2,
                      2048,
                      0);
  sub_1401E25C0(v7, nullptr, 0, (__int64)a2, 2048, 0);
  return sub_1401FCD30((void *)(uintptr_t)(a2), 0, 0x780u);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010E230) ----------------------------------------------------
__int64            sub_14010E230(int a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 result; // rax

  v4 = a4;
  v5 = a3;
  result = sub_1401E0CC0(
             *(int **)&dword_140404A6C[2 * a1 + 299853437],
             a2,
             960,
             (__m128i *)&dword_140404A6C[32901 * a3 + 299853826 + 512 * (__int64)a4],
             2048);
  dword_140404A6C[32901 * v5 + 299853762 + v4] = result;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010E2B0) ----------------------------------------------------
int *sub_14010E2B0()
{
  unsigned int *v0; // rbx
  int *result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&dword_140404A6C[299853437] = (uint64)(uintptr_t)(sub_1401E0760(0xBB80u, 1, 2048, &v2));
  sub_1401E0F40(*(int **)&dword_140404A6C[299853437], 4002, 16000);
  v0 = &dword_140404A6C[299853565];
  do
  {
    result = sub_1401E22F0(48000, 1, &v2);
    *(_QWORD *)v0 = (uint64)(uintptr_t)(result);
    v0 += 2;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[299853581] );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 187BDE460: using guessed type unsigned int;

//----- (000000014010E330) ----------------------------------------------------
void sub_14010E330()
{
  void **v0; // rbx

  sub_1401E0F20(*(void **)&dword_140404A6C[299853437]);
  v0 = (void **)&dword_140404A6C[299853565];
  do
    sub_1401E2C30(*v0++);
  while ( (__int64)v0 < (__int64)&dword_140404A6C[299853581] );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014014CA70) ----------------------------------------------------
__int64 sub_14014CA70()
{
  unsigned int *v0; // rbx
  void *v1; // rcx
  _WORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 result; // rax

  v0 = &dword_140404A6C[18182167];
  do
  {
    v1 = *((void **)v0 - 2);
    *(v0 - 6) = 1;
    *v0 = 1086324736;
    *(v0 - 5) = 0x40000;
    free(v1);
    v2 = (_WORD *)sr_path_malloc(0x100000);
    *((_QWORD *)v0 - 2) = (uint64)(uintptr_t)(v2);
    sub_1401FCD30((void *)(uintptr_t)(v2), 0, 0x100000u);
    v3 = 0;
    v4 = 384;
    *((_QWORD *)v0 - 1) = 0;
    do
    {
      *(_DWORD *)(*((_QWORD *)v0 - 2) + 4 * v3) = 0;
      v5 = *((_QWORD *)v0 - 2);
      v6 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v6;
      *(_DWORD *)(v5 + 4 * v6) = 0;
      v7 = *((_QWORD *)v0 - 2);
      v8 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v8;
      *(_DWORD *)(v7 + 4 * v8) = 0;
      v9 = *((_QWORD *)v0 - 2);
      v10 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v10;
      *(_DWORD *)(v9 + 4 * v10) = 0;
      v11 = *((_QWORD *)v0 - 2);
      v12 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v12;
      *(_DWORD *)(v11 + 4 * v12) = 0;
      v13 = *((_QWORD *)v0 - 2);
      v14 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v14;
      *(_DWORD *)(v13 + 4 * v14) = 0;
      v15 = *((_QWORD *)v0 - 2);
      v16 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v16;
      *(_DWORD *)(v15 + 4 * v16) = 0;
      v17 = *((_QWORD *)v0 - 2);
      v18 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v18;
      *(_DWORD *)(v17 + 4 * v18) = 0;
      v19 = *((_QWORD *)v0 - 2);
      v20 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v20;
      *(_DWORD *)(v19 + 4 * v20) = 0;
      v21 = *((_QWORD *)v0 - 2);
      v22 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v22;
      *(_DWORD *)(v21 + 4 * v22) = 0;
      result = (*(v0 - 2) + 1) & 0x3FFFF;
      v3 = (unsigned int)result;
      *(v0 - 2) = result;
      --v4;
    }
    while ( v4 );
    v0 += 8;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[18182231] );
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014014FCF0) ----------------------------------------------------
void               sub_14014FCF0(float *a1, unsigned int *a2, unsigned int *a3)
{
  union { __int64 first; float coordinates[3]; } sr_position;
  unsigned int v4; // r15d
  float v5; // xmm1_4
  unsigned int v6; // r13d
  unsigned int v7; // xmm0_4
  unsigned int *v8; // rcx
  unsigned int v9; // xmm0_4
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int *v12; // r14
  int v13; // edx
  unsigned int *v14; // rsi
  int v15; // r11d
  float *v16; // rbp
  int v17; // ecx
  float v18; // xmm7_4
  unsigned int *v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r10
  int v23; // edi
  __int64 v24; // rbx
  float v25; // xmm3_4
  unsigned int *v26; // r9
  __int64 v27; // rax
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebp
  unsigned int *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  float v38; // xmm7_4
  float v39; // xmm9_4
  float v40; // xmm10_4
  signed int v41; // eax
  float v42; // xmm7_4
  float v43; // xmm1_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm9_4
  float v47; // xmm1_4
  float v48; // xmm10_4
  bool v49; // zf
  __int64 v50; // rcx
  unsigned int v51; // eax
  float v52; // xmm6_4
  float v53; // xmm8_4
  float v54; // xmm6_4
  float v55; // xmm6_4
  float v56; // xmm7_4
  __int64 v57; // rcx
  float v58; // xmm7_4
  float v59; // xmm9_4
  float v60; // xmm7_4
  float v61; // xmm8_4
  float v62; // xmm0_4
  float v63; // xmm9_4
  float v64; // xmm6_4
  __int64 v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rcx
  float v68; // xmm10_4
  float v69; // xmm6_4
  __int64 v70; // rcx
  float v71; // xmm6_4
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // r8d
  unsigned int *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // r8d
  unsigned int v79; // edx
  unsigned int *v80; // rax
  float v81; // xmm3_4
  unsigned int *v82; // rbx
  float v83; // xmm4_4
  float v84; // xmm5_4
  float v85; // xmm6_4
  float v86; // xmm7_4
  unsigned int *v87; // rdx
  float v88; // xmm8_4
  __int64 v89; // r10
  int v90; // r8d
  __int64 v91; // r9
  __int64 v92; // rax
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm2_4
  __int64 v96; // rax
  unsigned int v97; // r8d
  __int64 v98; // r9
  __int64 v99; // rax
  float v100; // xmm0_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  __int64 v103; // rax
  int **v104; // r8
  __int64 v105; // r14
  int v106; // r13d
  unsigned int *v107; // rdi
  __int64 v108; // r15
  unsigned int v109; // ecx
  int v110; // edx
  __int64 v111; // rsi
  unsigned int v112; // eax
  __int64 v113; // rcx
  int **v114; // r12
  __int64 v115; // rbp
  __int64 v116; // rcx
  __int64 v117; // rdx
  int v118; // r8d
  int *v119; // rcx
  unsigned int *v120; // r9
  __int16 *v121; // r8
  int v122; // edx
  __int64 v123; // r9
  __m128i v124; // xmm0
  int v125; // ecx
  signed int v126; // edx
  signed int v127; // r8d
  int v128; // ecx
  float *v129; // r12
  unsigned int *v130; // r11
  __int64 v131; // rdx
  float v132; // xmm0_4
  float v133; // xmm3_4
  float v134; // xmm4_4
  __int64 v135; // rcx
  int v136; // eax
  float v137; // xmm6_4
  float v138; // xmm6_4
  float v139; // xmm6_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14014FCF0[96];
#define v141 (*(__int64 (*))(void *)(sr_frame_14014FCF0 + 0)) /* [rsp+0h] */
#define v142 (*(int (*))(void *)(sr_frame_14014FCF0 + 32)) /* [rsp+20h] */
#define v143 (*(unsigned int (*))(void *)(sr_frame_14014FCF0 + 40)) /* [rsp+28h] */
#define v144 (*(unsigned int * (*))(void *)(sr_frame_14014FCF0 + 48)) /* [rsp+30h] */
#define v145 (*(float * (*))(void *)(sr_frame_14014FCF0 + 56)) /* [rsp+38h] */
#define v146 (*(unsigned int * (*))(void *)(sr_frame_14014FCF0 + 64)) /* [rsp+40h] */
#define v149 (*(__int64 (*))(void *)(sr_frame_14014FCF0 + 88)) /* [rsp+58h] */

  v4 = dword_140404A6C[283831309];
  v5 = 1.0;
  v6 = dword_140404A6C[283831448];
  v146 = a3;
  v145 = a1;
  if ( dword_140404A6C[283831309] && dword_140404A6C[283831448] == 2 )
    v5 = fminf(fmaxf((float)(int)dword_140404A6C[283831450] * 0.016666668f, 0.0), 1.0);
  *(float *)&dword_140404A6C[18198666] = (float)((float)((float)(int)dword_140404A6C[73991612] * v5)
                                               * (float)((float)(int)dword_140404A6C[73991612] * v5))
                                       * 0.000099999997f;
  dword_140404A6C[18198546] = *(unsigned int *)a1;
  __builtin_memcpy(&dword_140404A6C[18198547], a1 + 1, 4);
  v7 = *((_DWORD *)a1 + 2);
  v8 = &dword_140404A6C[129721918];
  dword_140404A6C[18198548] = v7;
  dword_140404A6C[18198549] = *a2;
  dword_140404A6C[18198550] = a2[1];
  dword_140404A6C[18198551] = a2[2];
  dword_140404A6C[18198552] = a2[3];
  dword_140404A6C[18198553] = a2[4];
  dword_140404A6C[18198554] = a2[5];
  dword_140404A6C[18198555] = a2[6];
  dword_140404A6C[18198556] = a2[7];
  dword_140404A6C[18198557] = a2[8];
  dword_140404A6C[18198558] = *a3;
  dword_140404A6C[18198559] = a3[1];
  v9 = a3[2];
  v10 = 512;
  dword_140404A6C[18198560] = v9;
  do
  {
    v11 = (int)*v8;
    if ( (_DWORD)v11 != -1 && (!*(v8 - 5209) || !v4) )
    {
      if ( !dword_140404A6C[278720 * v11 + 327698] )
        dword_140404A6C[278720 * v11 + 327698] = 1;
      *v8 = -1;
    }
    v8 += 5210;
    --v10;
  }
  while ( v10 );
  v12 = &dword_140404A6C[70326528];
  v13 = dword_140404A6C[70326525];
  if ( !v4 )
    goto LABEL_91;
  if ( v6 != 3 )
  {
    v14 = &dword_140404A6C[129716710];
    v15 = 0;
    v16 = (float *)&dword_140404A6C[285044403];
    do
    {
      if ( *(v14 - 1) && ((*v14 - 12) & 0xFFFFFFFD) != 0 && (int)v14[3659] > 0 )
      {
        v17 = 0;
        v18 = fsqrt(
                (float)((float)((float)(a1[1] - *(v16 - 1)) * (float)(a1[1] - *(v16 - 1)))
                      + (float)((float)(*a1 - *(v16 - 2)) * (float)(*a1 - *(v16 - 2))))
              + (float)((float)(a1[2] - *v16) * (float)(a1[2] - *v16)));
        if ( v13 <= 0 )
        {
LABEL_22:
          if ( v13 >= 8 )
          {
            v21 = 0;
            v22 = 0;
            v23 = -1;
            v24 = -1;
            v25 = 65536.0;
            v26 = &dword_140404A6C[70326526];
            do
            {
              v27 = (int)*v26;
              if ( (_DWORD)v27 != v15 )
              {
                v28 = a1[1] - *(float *)&dword_140404A6C[77 * v27 + 285044402];
                v29 = a1[2] - *(float *)&dword_140404A6C[77 * v27 + 285044403];
                v30 = fsqrt(
                        (float)((float)(v28 * v28)
                              + (float)((float)(*a1 - *(float *)&dword_140404A6C[77 * v27 + 285044401])
                                      * (float)(*a1 - *(float *)&dword_140404A6C[77 * v27 + 285044401])))
                      + (float)(v29 * v29));
                if ( v18 < v30 && v25 > v30 )
                {
                  v23 = v21;
                  v24 = v22;
                  v25 = v30;
                }
              }
              ++v21;
              ++v22;
              v26 += 5;
            }
            while ( v21 < v13 );
            if ( v23 != -1 )
            {
              v31 = (int)dword_140404A6C[5 * v24 + 70326527];
              if ( (_DWORD)v31 != -1 && !dword_140404A6C[278720 * v31 + 327698] )
                dword_140404A6C[278720 * v31 + 327698] = 1;
              v32 = (int)dword_140404A6C[5 * v24 + 70326528];
              if ( (_DWORD)v32 != -1 && !dword_140404A6C[278720 * v32 + 327698] )
                dword_140404A6C[278720 * v32 + 327698] = 1;
              dword_140404A6C[5 * v24 + 70326526] = v15;
              *(_QWORD *)&dword_140404A6C[5 * v24 + 70326529] = 0;
              *(_QWORD *)&dword_140404A6C[5 * v24 + 70326527] = -1;
              v13 = dword_140404A6C[70326525];
            }
          }
          else
          {
            v20 = 5LL * v13;
            dword_140404A6C[v20 + 70326526] = v15;
            dword_140404A6C[5 * v13 + 70326527] = -1;
            dword_140404A6C[v20 + 70326528] = -1;
            *(_QWORD *)&dword_140404A6C[v20 + 70326529] = 0;
            v13 = ++dword_140404A6C[70326525];
          }
        }
        else
        {
          v19 = &dword_140404A6C[70326526];
          while ( *v19 != v15 )
          {
            ++v17;
            v19 += 5;
            if ( v17 >= v13 )
              goto LABEL_22;
          }
        }
      }
      ++v15;
      v14 += 5210;
      v16 += 77;
    }
    while ( v15 < 512 );
    v4 = dword_140404A6C[283831309];
    v33 = 0;
    if ( v13 > 0 )
    {
      v34 = &dword_140404A6C[70326527];
      while ( 1 )
      {
        v35 = (int)*(v34 - 1);
        v36 = 77 * v35;
        v37 = 5210 * v35;
        v38 = *(float *)&dword_140404A6C[77 * v35 + 285044401];
        v39 = *(float *)&dword_140404A6C[77 * v35 + 285044402];
        v40 = *(float *)&dword_140404A6C[77 * v35 + 285044403];
        if ( dword_140404A6C[5210 * v35 + 129716709]
          && (float)((float)((float)((float)(a1[1] - v39) * (float)(a1[1] - v39))
                           + (float)((float)(*a1 - v38) * (float)(*a1 - v38)))
                   + (float)((float)(a1[2] - v40) * (float)(a1[2] - v40))) < 65536.0
          && (int)dword_140404A6C[v37 + 129720369] > 0 )
        {
          v41 = *v34;
          v42 = (float)(v38 - (float)(*(float *)&dword_140404A6C[v36 + 285044410] * 2.5))
              - (float)(*(float *)&dword_140404A6C[v36 + 285044407] * 0.25);
          v43 = *(float *)&dword_140404A6C[v36 + 285044408] * 0.25;
          v44 = v39 - (float)(*(float *)&dword_140404A6C[v36 + 285044411] * 2.5);
          v45 = *(float *)&dword_140404A6C[v36 + 285044412] * 2.5;
          *(float *)&sr_position.first = v42;
          v46 = v44 - v43;
          v47 = *(float *)&dword_140404A6C[v36 + 285044409] * 0.25;
          *((float *)&sr_position.first + 1) = v46;
          v48 = (float)(v40 - v45) - v47;
          sr_position.coordinates[2] = v48;
          if ( v41 != -1
            || ((v49 = dword_140404A6C[v37 + 129716710] == 13, v142 = 1, !v49)
              ? (v41 = sub_140069FA0(dword_140404A6C[283785942], (unsigned int *)&sr_position.first, 0.5, 1.0, v142))
              : (v41 = sub_140069FA0(dword_140404A6C[283786013], (unsigned int *)&sr_position.first, 0.125, 1.0, v142)),
                *v34 = v41,
                v41 != -1) )
          {
            v50 = 278720LL * v41;
            v51 = dword_140404A6C[v37 + 129716744];
            *(float *)&dword_140404A6C[v50 + 606302] = v42;
            *(float *)&dword_140404A6C[v50 + 606303] = v46;
            *(float *)&dword_140404A6C[v50 + 606304] = v48;
            dword_140404A6C[v50 + 606305] = v51;
            dword_140404A6C[v50 + 606306] = dword_140404A6C[v37 + 129716745];
            dword_140404A6C[v50 + 606307] = dword_140404A6C[v37 + 129716746];
            v52 = (float)(int)dword_140404A6C[v37 + 129720369];
            if ( (int)dword_140404A6C[v37 + 129720369] < 100 )
              v53 = 0.298828125;
            else
              v53 = (float)(v52 * 0.00048828125) + 0.25;
            if ( dword_140404A6C[v37 + 129716710] == 13 )
            {
              v55 = v52 * 0.0078125;
              if ( v55 < 0.25 )
                v55 = 0.0;
              v54 = fminf(v55, 1.0);
              v53 = fmaxf(v53, 0.5) * 0.5;
            }
            else
            {
              v54 = fminf(v52 * 0.015625, 0.5);
            }
            if ( (float)((float)((float)((float)(a1[1] - v46) * (float)(a1[1] - v46))
                               + (float)((float)(*a1 - v42) * (float)(*a1 - v42)))
                       + (float)((float)(a1[2] - v48) * (float)(a1[2] - v48))) <= 16384.0 )
            {
              v56 = 1.0;
              if ( (unsigned int)sub_1400DC050((float *)&sr_position.first, a1, 0) )
                v56 = 0.5;
            }
            else
            {
              v56 = 0.5;
            }
            v57 = 278720LL * (int)*v34;
            v58 = (float)((float)((float)((float)(v56 * v54) * 0.5) - *((float *)v34 + 2)) * 0.125)
                + *((float *)v34 + 2);
            *(float *)&dword_140404A6C[v57 + 327704] = v58;
            *(float *)&dword_140404A6C[v57 + 327706] = v53;
            *((float *)v34 + 2) = v58;
          }
          v49 = dword_140404A6C[v37 + 129716710] == 13;
          v59 = (float)(*(float *)&dword_140404A6C[v36 + 285044412] * 0.125)
              + *(float *)&dword_140404A6C[v36 + 285044403];
          v60 = (float)((float)(*(float *)&dword_140404A6C[v36 + 285044410] * 0.125)
                      + *(float *)&dword_140404A6C[v36 + 285044401])
              - (float)(*(float *)&dword_140404A6C[v36 + 285044407] * 0.25);
          v61 = (float)((float)(*(float *)&dword_140404A6C[v36 + 285044411] * 0.125)
                      + *(float *)&dword_140404A6C[v36 + 285044402])
              - (float)(*(float *)&dword_140404A6C[v36 + 285044408] * 0.25);
          *(float *)&sr_position.first = v60;
          v62 = *(float *)&dword_140404A6C[v36 + 285044409] * 0.25;
          *((float *)&sr_position.first + 1) = v61;
          v63 = v59 - v62;
          sr_position.coordinates[2] = v63;
          if ( !v49 && v34[1] == -1 )
          {
            v64 = fminf(
                    (float)(*(float *)&dword_140404A6C[v37 + 129720536] + *(float *)&dword_140404A6C[v37 + 129720493])
                  + (float)(*(float *)&dword_140404A6C[v37 + 129720450] + *(float *)&dword_140404A6C[v37 + 129720407]),
                    0.25);
            if ( v64 > 0.0625 )
            {
              v34[1] = sub_140069FA0(dword_140404A6C[283785946], (unsigned int *)&sr_position.first, v64, 1.0, 1u);
              *((float *)v34 + 3) = v64;
            }
          }
          v65 = (int)v34[1];
          if ( (_DWORD)v65 == -1 )
            goto LABEL_86;
          v66 = dword_140404A6C[v37 + 129716744];
          v67 = 278720 * v65;
          v68 = fminf(
                  (float)(*(float *)&dword_140404A6C[v37 + 129720536] + *(float *)&dword_140404A6C[v37 + 129720493])
                + (float)(*(float *)&dword_140404A6C[v37 + 129720450] + *(float *)&dword_140404A6C[v37 + 129720407]),
                  1.0);
          *(float *)&dword_140404A6C[v67 + 606302] = v60;
          *(float *)&dword_140404A6C[v67 + 606303] = v61;
          *(float *)&dword_140404A6C[v67 + 606304] = v63;
          dword_140404A6C[v67 + 606305] = v66;
          dword_140404A6C[v67 + 606306] = dword_140404A6C[v37 + 129716745];
          dword_140404A6C[v67 + 606307] = dword_140404A6C[v37 + 129716746];
          if ( (float)((float)((float)((float)(a1[1] - v61) * (float)(a1[1] - v61))
                             + (float)((float)(*a1 - v60) * (float)(*a1 - v60)))
                     + (float)((float)(a1[2] - v63) * (float)(a1[2] - v63))) <= 16384.0 )
          {
            v69 = 1.0;
            if ( (unsigned int)sub_1400DC050((float *)&sr_position.first, a1, 0) )
              v69 = 0.5;
            LODWORD(v65) = v34[1];
          }
          else
          {
            v69 = 0.5;
          }
          v70 = 278720LL * (int)v65;
          v71 = (float)((float)((float)(v69 * v68) - *((float *)v34 + 3)) * 0.125) + *((float *)v34 + 3);
          *((float *)v34 + 3) = v71;
          *(float *)&dword_140404A6C[v70 + 327704] = v71;
          if ( v71 >= 0.0625 || (_DWORD)v65 == -1 )
            goto LABEL_86;
          if ( !dword_140404A6C[v70 + 327698] )
            dword_140404A6C[v70 + 327698] = 1;
        }
        else
        {
          v72 = (int)*v34;
          if ( (_DWORD)v72 != -1 )
          {
            if ( !dword_140404A6C[278720 * v72 + 327698] )
              dword_140404A6C[278720 * v72 + 327698] = 1;
            *v34 = -1;
            v13 = dword_140404A6C[70326525];
          }
          v73 = (int)v34[1];
          if ( (_DWORD)v73 == -1 )
            goto LABEL_87;
          if ( !dword_140404A6C[278720 * v73 + 327698] )
            dword_140404A6C[278720 * v73 + 327698] = 1;
        }
        v34[1] = -1;
LABEL_86:
        v13 = dword_140404A6C[70326525];
LABEL_87:
        ++v33;
        v34 += 5;
        if ( v33 >= v13 )
        {
          v6 = dword_140404A6C[283831448];
          v4 = dword_140404A6C[283831309];
          break;
        }
      }
    }
  }
  if ( !v4 || v6 == 3 )
  {
LABEL_91:
    v74 = 0;
    if ( v13 > 0 )
    {
      v75 = &dword_140404A6C[70326528];
      do
      {
        v76 = (int)*(v75 - 1);
        if ( (_DWORD)v76 != -1 )
        {
          if ( !dword_140404A6C[278720 * v76 + 327698] )
            dword_140404A6C[278720 * v76 + 327698] = 1;
          *(v75 - 1) = -1;
          v13 = dword_140404A6C[70326525];
        }
        v77 = (int)*v75;
        if ( (_DWORD)v77 != -1 )
        {
          if ( !dword_140404A6C[278720 * v77 + 327698] )
            dword_140404A6C[278720 * v77 + 327698] = 1;
          *v75 = -1;
          v13 = dword_140404A6C[70326525];
        }
        ++v74;
        v75 += 5;
      }
      while ( v74 < v13 );
    }
  }
  v78 = 0;
  while ( v78 < v13 )
  {
    if ( *(v12 - 1) == -1 && *v12 == -1 )
    {
      v79 = v13 - 1;
      dword_140404A6C[70326525] = v79;
      __builtin_memcpy(v12 - 2, &dword_140404A6C[5 * v79 + 70326526], 16);
      v12[2] = dword_140404A6C[5 * v79 + 70326530];
      v13 = dword_140404A6C[70326525];
    }
    else
    {
      ++v78;
      v12 += 5;
    }
  }
  v80 = &dword_140404A6C[71856270];
  do
  {
    *v80 = 0;
    v80 += 3597;
  }
  while ( (__int64)v80 < (__int64)&dword_140404A6C[72777102] );
  if ( !v4 )
  {
    dword_140404A6C[308307077] = 0;
    dword_140404A6C[308403478] = 0;
    dword_140404A6C[308499879] = 0;
    dword_140404A6C[308596280] = 0;
    dword_140404A6C[308692681] = 0;
    dword_140404A6C[308789082] = 0;
    dword_140404A6C[308885483] = 0;
    dword_140404A6C[308981884] = 0;
  }
  v81 = *(float *)&dword_140404A6C[284024513];
  v82 = &dword_140404A6C[308307086];
  v83 = *(float *)&dword_140404A6C[284024512];
  v84 = *(float *)&dword_140404A6C[284024511];
  v85 = *(float *)&dword_140404A6C[284024504];
  v86 = *(float *)&dword_140404A6C[284024503];
  v87 = &dword_140404A6C[308307086];
  v88 = *(float *)&dword_140404A6C[284024502];
  v89 = 4;
  do
  {
    v90 = *(v87 - 9);
    if ( v90 )
    {
      v91 = (int)*(v87 - 7);
      if ( (_DWORD)v91 != -1 && dword_140404A6C[v91 + 284023074] )
      {
        *(v87 - 9) = 0;
        v90 = 0;
      }
      v92 = (int)*(v87 - 5);
      if ( (_DWORD)v92 == -1 || v6 == 3 )
      {
        v96 = (int)*(v87 - 4);
        if ( (_DWORD)v96 == -1 )
        {
          v93 = v85 - v81;
          v94 = v86 - v83;
          v95 = v88 - v84;
        }
        else
        {
          v93 = *(float *)&dword_140404A6C[13 * v96 + 285083827];
          v94 = *(float *)&dword_140404A6C[13 * v96 + 285083826];
          v95 = *(float *)&dword_140404A6C[13 * v96 + 285083825];
        }
      }
      else
      {
        v93 = *(float *)&dword_140404A6C[344 * v92 + 284956409];
        v94 = *(float *)&dword_140404A6C[344 * v92 + 284956408];
        v95 = *(float *)&dword_140404A6C[344 * v92 + 284956407];
      }
      *((float *)v87 - 2) = v95;
      *((float *)v87 - 1) = v94;
      *(float *)v87 = v93;
      if ( v90 && (_DWORD)v91 != -1 )
        dword_140404A6C[3597 * v91 + 71856270] = 1;
    }
    v97 = v87[96392];
    if ( v97 )
    {
      v98 = (int)v87[96394];
      if ( (_DWORD)v98 != -1 && dword_140404A6C[v98 + 284023074] )
      {
        v87[96392] = 0;
        v97 = 0;
      }
      v99 = (int)v87[96396];
      if ( (_DWORD)v99 == -1 || v6 == 3 )
      {
        v103 = (int)v87[96397];
        if ( (_DWORD)v103 == -1 )
        {
          v100 = v85 - v81;
          v101 = v86 - v83;
          v102 = v88 - v84;
        }
        else
        {
          v100 = *(float *)&dword_140404A6C[13 * v103 + 285083827];
          v101 = *(float *)&dword_140404A6C[13 * v103 + 285083826];
          v102 = *(float *)&dword_140404A6C[13 * v103 + 285083825];
        }
      }
      else
      {
        v100 = *(float *)&dword_140404A6C[344 * v99 + 284956409];
        v101 = *(float *)&dword_140404A6C[344 * v99 + 284956408];
        v102 = *(float *)&dword_140404A6C[344 * v99 + 284956407];
      }
      *((float *)v87 + 96399) = v102;
      *((float *)v87 + 96400) = v101;
      *((float *)v87 + 96401) = v100;
      if ( v97 && (_DWORD)v98 != -1 )
        dword_140404A6C[3597 * v98 + 71856270] = 1;
    }
    v87 += 192802;
    --v89;
  }
  while ( v89 );
  v104 = (int **)&dword_140404A6C[299853565];
  v105 = 0;
  v144 = &dword_140404A6C[299853565];
  v106 = 2048;
  sr_position.first = 8;
  v107 = &dword_140404A6C[18182165];
  v108 = 0;
  do
  {
    v109 = *(v82 - 9);
    v110 = v106 - 1992;
    v82[63623] = v106 - 1992;
    if ( v109 && (!*(v82 - 8) || *(v82 - 6) != *(v82 - 7)) )
    {
      sub_1401E27C0(*v104, 4028, (int *)v104);
      v109 = *(v82 - 9);
      v110 = v82[63623];
      v82[30726] = ((unsigned __int8)v82[30725] - 8) & 0x3F;
    }
    *(v82 - 6) = *(v82 - 7);
    *(v82 - 8) = v109;
    if ( v109 )
    {
      if ( dword_140404A6C[7] )
      {
        v111 = 278720LL * v110;
        if ( !dword_140404A6C[v111 + 327697] )
        {
          sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v111 + 327698]), 0, 0x1102FCu);
          v112 = *(v82 - 2);
          dword_140404A6C[v111 + 327772] = 0;
          dword_140404A6C[v111 + 589917] = 0;
          *(_QWORD *)&dword_140404A6C[v111 + 327697] = 1;
          dword_140404A6C[v111 + 327699] = 1065353216;
          dword_140404A6C[v111 + 327700] = 1;
          dword_140404A6C[v111 + 327702] = v106;
          dword_140404A6C[v111 + 327704] = 1065353216;
          dword_140404A6C[v111 + 327705] = 1065353216;
          dword_140404A6C[v111 + 327706] = 1065353216;
          dword_140404A6C[v111 + 327707] = 1065353216;
          dword_140404A6C[v111 + 327708] = 1;
          *(_QWORD *)v107 = 0;
          dword_140404A6C[v111 + 606302] = v112;
          dword_140404A6C[v111 + 606303] = *(v82 - 1);
          dword_140404A6C[v111 + 606304] = *v82;
          dword_140404A6C[v111 + 606308] = v107[2];
          dword_140404A6C[v111 + 606310] = 1;
          dword_140404A6C[v111 + 606414] = 0;
        }
      }
    }
    else
    {
      v113 = 278720LL * v110;
      if ( !dword_140404A6C[v113 + 327698] )
        dword_140404A6C[v113 + 327698] = 1;
    }
    v114 = (int **)v144;
    v115 = 8;
    do
    {
      if ( (int)sub_14007D6C0(v106) < 5760 )
      {
        v116 = (int)v82[30726];
        if ( (_DWORD)v116 != (v82[30725] & 0x3F) )
        {
          v143 = 0;
          v117 = v116;
          v142 = 2048;
          v118 = dword_140404A6C[v105 + 308337813 + v116];
          v119 = *v114;
          v120 = &dword_140404A6C[v108 + 308307091];
          if ( v118 <= 0 )
          {
            sub_1401E25C0(v119, nullptr, 0, (__int64)v120, v142, v143);
            sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v108 + 308307091]), 0, 0x780u);
          }
          else
          {
            sub_1401E25C0(
              v119,
              (char *)&dword_140404A6C[512 * v117 + 308337941 + v108],
              v118,
              (__int64)v120,
              v142,
              v143);
          }
          v121 = (__int16 *)v82 + 11;
          v122 = 0;
          dword_140404A6C[v105 + 308337813 + (int)v82[30726]] = 0;
          v123 = 96;
          do
          {
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107) & 0x3FFFF)) = (float)*(v121 - 1) * 3.0517578125e-05;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 1) & 0x3FFFF)) = (float)*v121 * 3.0517578125e-05;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 2) & 0x3FFFF)) = (float)v121[1] * 3.0517578125e-05;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 3) & 0x3FFFF)) = (float)v121[2] * 3.0517578125e-05;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 4) & 0x3FFFF)) = (float)v121[3] * 3.0517578125e-05;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 5) & 0x3FFFF)) = (float)v121[4] * 3.0517578125e-05;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 6) & 0x3FFFF)) = (float)v121[5] * 3.0517578125e-05;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 7) & 0x3FFFF)) = (float)v121[6] * 3.0517578125e-05;
            v124 = _mm_cvtsi32_si128(v121[7]);
            v121 += 10;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 8) & 0x3FFFF)) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v124), f32)[0]
                                                                                     * 3.0517578125e-05;
            v125 = v122 + *v107;
            v122 += 10;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v125 + 9) & 0x3FFFF)) = (float)*(v121 - 2) * 3.0517578125e-05;
            --v123;
          }
          while ( v123 );
          *v107 = (*v107 + 960) & 0x3FFFF;
          v82[30726] = ((unsigned __int8)v82[30726] + 1) & 0x3F;
        }
      }
      --v115;
    }
    while ( v115 );
    v126 = v82[30725];
    v127 = v82[30726];
    v128 = v126 - v127;
    v129 = v145;
    if ( *(v82 - 9) )
    {
      if ( v126 < v127 )
        v128 += 64;
      if ( v128 > 16 )
        v82[30726] = ((_BYTE)v126 - 8) & 0x3F;
    }
    v130 = v146;
    v131 = (int)v82[63623];
    v132 = *((float *)v82 - 2);
    v133 = *((float *)v82 - 1);
    v134 = *(float *)v82;
    v135 = 278720 * v131;
    v49 = *(v82 - 4) == -1;
    *(float *)&dword_140404A6C[v135 + 606302] = v132;
    *(float *)&dword_140404A6C[v135 + 606303] = v133;
    *(float *)&dword_140404A6C[v135 + 606304] = v134;
    dword_140404A6C[v135 + 606305] = *v130;
    dword_140404A6C[v135 + 606306] = v130[1];
    dword_140404A6C[v135 + 606307] = v130[2];
    if ( v49 )
    {
      v136 = *(v82 - 3);
      if ( v136 )
      {
        if ( v136 == 1 )
          dword_140404A6C[v135 + 606308] = 1086324736;
        else
          dword_140404A6C[v135 + 606308] = 1098907648;
      }
      else
      {
        dword_140404A6C[v135 + 606308] = 0x40000000;
      }
    }
    else
    {
      dword_140404A6C[v135 + 606308] = 1065353216;
    }
    if ( (float)((float)((float)((float)(v129[1] - v133) * (float)(v129[1] - v133))
                       + (float)((float)(*v129 - v132) * (float)(*v129 - v132)))
               + (float)((float)(v129[2] - v134) * (float)(v129[2] - v134))) <= 16384.0 )
    {
      v137 = 1.0;
      if ( (unsigned int)sub_1400DC050((float *)v82 - 2, v129, 0) )
        v137 = 0.5;
      LODWORD(v131) = v82[63623];
    }
    else
    {
      v137 = 0.5;
    }
    ++v106;
    v104 = (int **)(v144 + 2);
    v138 = (float)(v137 - *((float *)v82 + 4)) * 0.125;
    v108 += 96401;
    v144 += 2;
    v139 = v138 + *((float *)v82 + 4);
    v105 += 96401;
    v107 += 8;
    *((float *)v82 + 4) = v139;
    v82 += 96401;
    v49 = sr_position.first-- == 1;
    *(float *)&dword_140404A6C[278720 * (int)v131 + 327704] = v139;
  }
  while ( !v49 );
  return; /* native void spatial audio update */
}
#undef v141
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v149

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

