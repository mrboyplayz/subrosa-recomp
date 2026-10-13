#include "shared_client.h"

//----- (0000000140064FF0) ----------------------------------------------------
double            sub_140064FF0(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int *v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int *v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int *v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int *v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v2 = a2;
  v3 = 45072LL * a2;
  v4 = a1;
  v5 = 0;
  dword_140404A6C[177167565] = 0;
  v6 = 0;
  dword_140404A6C[177495247] = 0;
  v7 = 0;
  v8 = (int)dword_140404A6C[v3 + 335170684];
  if ( v8 >= 4 )
  {
    v9 = &dword_140404A6C[v3 + 335170687];
    v10 = ((unsigned __int64)(v8 - 4) >> 2) + 1;
    v7 = 4 * v10;
    do
    {
      v11 = (int)(3 * v6);
      v12 = *(v9 - 2);
      v9 += 12;
      dword_140404A6C[v11 + 177167567] = v12;
      dword_140404A6C[v11 + 177167568] = *(v9 - 13);
      dword_140404A6C[v11 + 177167569] = *(v9 - 12);
      ++dword_140404A6C[177167565];
      v13 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v13 + 177167567] = *(v9 - 11);
      dword_140404A6C[v13 + 177167568] = *(v9 - 10);
      dword_140404A6C[v13 + 177167569] = *(v9 - 9);
      ++dword_140404A6C[177167565];
      v14 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v14 + 177167567] = *(v9 - 8);
      dword_140404A6C[v14 + 177167568] = *(v9 - 7);
      dword_140404A6C[v14 + 177167569] = *(v9 - 6);
      ++dword_140404A6C[177167565];
      v15 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v15 + 177167567] = *(v9 - 5);
      dword_140404A6C[v15 + 177167568] = *(v9 - 4);
      dword_140404A6C[v15 + 177167569] = *(v9 - 3);
      v6 = ++dword_140404A6C[177167565];
      --v10;
    }
    while ( v10 );
    v5 = dword_140404A6C[177495247];
  }
  if ( v7 < v8 )
  {
    v16 = v8 - v7;
    v17 = &dword_140404A6C[45072 * v2 + 335170687 + 3 * v7];
    do
    {
      v18 = (int)(3 * v6);
      v19 = *(v17 - 2);
      v17 += 3;
      dword_140404A6C[v18 + 177167567] = v19;
      dword_140404A6C[v18 + 177167568] = *(v17 - 4);
      dword_140404A6C[v18 + 177167569] = *(v17 - 3);
      v6 = ++dword_140404A6C[177167565];
      --v16;
    }
    while ( v16 );
    v5 = dword_140404A6C[177495247];
  }
  v20 = (int)dword_140404A6C[v3 + 335173757];
  if ( v20 > 0 )
  {
    v21 = &dword_140404A6C[v3 + 335173761];
    do
    {
      v22 = *(v21 - 1);
      v23 = *(v21 - 3);
      dword_140404A6C[3 * v5 + 177495248] = v22;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *v21;
      v24 = v21[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v24;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
      v25 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v25 + 178011345] = 1099169792;
      *(_QWORD *)&dword_140404A6C[v25 + 178011347] = 1099169792;
      *(_QWORD *)&dword_140404A6C[v25 + 178011349] = 1099169792;
      if ( v23 == 1 )
      {
        v26 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v26 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[v26 + 178011346] = 1065353216;
        *(_QWORD *)&dword_140404A6C[v26 + 178011348] = 1065353216;
        dword_140404A6C[v26 + 178011350] = 1065353216;
      }
      else if ( v23 == 2 )
      {
        v27 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v27 + 178011345] = 1035993088;
        dword_140404A6C[v27 + 178011346] = 1035993088;
        dword_140404A6C[v27 + 178011347] = 1035993088;
        dword_140404A6C[v27 + 178011348] = 1035993088;
        dword_140404A6C[v27 + 178011349] = 1035993088;
        dword_140404A6C[v27 + 178011350] = 1035993088;
      }
      v5 = dword_140404A6C[177495247] + 1;
      v28 = *(v21 - 2) == 4;
      ++dword_140404A6C[177495247];
      if ( v28 )
      {
        dword_140404A6C[3 * v5 + 177495248] = v22;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v24;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v21[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v29 = 6 * dword_140404A6C[177495247];
        *(_QWORD *)&dword_140404A6C[v29 + 178011345] = 1099169792;
        *(_QWORD *)&dword_140404A6C[v29 + 178011347] = 1099169792;
        *(_QWORD *)&dword_140404A6C[v29 + 178011349] = 1099169792;
        if ( v23 == 1 )
        {
          v30 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v30 + 178011345] = 0;
          *(_QWORD *)&dword_140404A6C[v30 + 178011346] = 1065353216;
          *(_QWORD *)&dword_140404A6C[v30 + 178011348] = 1065353216;
          dword_140404A6C[v30 + 178011350] = 1065353216;
        }
        else if ( v23 == 2 )
        {
          v31 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v31 + 178011345] = 1035993088;
          dword_140404A6C[v31 + 178011346] = 1035993088;
          dword_140404A6C[v31 + 178011347] = 1035993088;
          dword_140404A6C[v31 + 178011348] = 1035993088;
          dword_140404A6C[v31 + 178011349] = 1035993088;
          dword_140404A6C[v31 + 178011350] = 1035993088;
        }
        v5 = ++dword_140404A6C[177495247];
      }
      v21 += 26;
      --v20;
    }
    while ( v20 );
    v6 = dword_140404A6C[177167565];
  }
  if ( (int)v4 >= (int)dword_140404A6C[283826646] && (int)v4 <= (int)dword_140404A6C[283826677] )
  {
    v32 = (int)dword_140404A6C[v3 + 335200382];
    if ( v32 > 0 )
    {
      v33 = &dword_140404A6C[v3 + 335200386];
      while ( 1 )
      {
        v34 = (int)(3 * v6);
        dword_140404A6C[v34 + 177167567] = *(v33 - 2);
        dword_140404A6C[v34 + 177167568] = *(v33 - 1);
        dword_140404A6C[v34 + 177167569] = *v33;
        ++dword_140404A6C[177167565];
        v35 = 3 * dword_140404A6C[177167565];
        dword_140404A6C[v35 + 177167567] = v33[1];
        dword_140404A6C[v35 + 177167568] = v33[2];
        dword_140404A6C[v35 + 177167569] = v33[3];
        ++dword_140404A6C[177167565];
        v36 = 3 * dword_140404A6C[177167565];
        dword_140404A6C[v36 + 177167567] = v33[4];
        dword_140404A6C[v36 + 177167568] = v33[5];
        dword_140404A6C[v36 + 177167569] = v33[6];
        ++dword_140404A6C[177167565];
        v37 = 3 * dword_140404A6C[177167565];
        dword_140404A6C[v37 + 177167567] = v33[7];
        dword_140404A6C[v37 + 177167568] = v33[8];
        dword_140404A6C[v37 + 177167569] = v33[9];
        ++dword_140404A6C[177167565];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v6;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v6 + 1;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v6 + 2;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v38 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v38 + 178011345] = 1061158912;
        dword_140404A6C[v38 + 178011346] = 1065353216;
        dword_140404A6C[v38 + 178011347] = 1061158912;
        dword_140404A6C[v38 + 178011348] = 1065353216;
        dword_140404A6C[v38 + 178011349] = 1061158912;
        dword_140404A6C[v38 + 178011350] = 1065353216;
        ++dword_140404A6C[177495247];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v6;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v6 + 2;
        v33 += 13;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v6 + 3;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v39 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v39 + 178011345] = 1061158912;
        dword_140404A6C[v39 + 178011346] = 1065353216;
        dword_140404A6C[v39 + 178011347] = 1061158912;
        dword_140404A6C[v39 + 178011348] = 1065353216;
        dword_140404A6C[v39 + 178011349] = 1061158912;
        dword_140404A6C[v39 + 178011350] = 1065353216;
        ++dword_140404A6C[177495247];
        if ( !--v32 )
          break;
        v6 = dword_140404A6C[177167565];
      }
    }
  }
  dword_140404A6C[178519250] = 0;
  dword_140404A6C[908 * v4 + 178527536] = 0;
  return sub_1401449C0(v4, 1);
}

//----- (0000000140065AE0) ----------------------------------------------------
void            sub_140065AE0(signed int a1, float a2)
{
  float v3;
  float v4;
  unsigned int v5;
  float v6;
  float v7;
  float v8;
  unsigned int v9;
  float v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  float v15;
  float v16;
  __int64 v17;
  float v18;
  double v19;
  double v20;
  unsigned int v21;
  float v22;
  float v23;
  unsigned int *v24;
  __int64 v25;
  __m128d v26;
  int v27;
  double v28;
  int v29;
  __m128d v30;
  double v31;
  float v32;
  float v33;
  float v34;
  float v35;
  unsigned int v36;
  _WORD *v37;
  int v38;
  int v39;
  __int16 *v40;
  int v41;
  float v42;
  float v43;
  float v44;
  float v45;
  int v46;
  float v47;
  float v48;
  float v49;
  float v50;
  int v51;
  float v52;
  float v53;
  float v54;
  float v55;
  int v56;
  float v57;
  float v58;
  float v59;
  float v60;
  int v61;
  float v62;
  float v63;
  float v64;
  float v65;
  int v66;
  float v67;
  float v68;
  float v69;
  float v70;
  int v71;
  float v72;
  float v73;
  float v74;
  float v75;
  int v76;
  __int16 *v77;
  int v78;
  float v79;
  float v80;
  float v81;
  float v82;
  int v83;
  float v84;
  float v85;
  float v86;
  float v87;
  int v88;
  float v89;
  float v90;
  float v91;
  float v92;
  int v93;
  float v94;
  float v95;
  float v96;
  float v97;
  int v98;
  float v99;
  float v100;
  float v101;
  float v102;
  int v103;
  float v104;
  float v105;
  float v106;
  float v107;
  int v108;
  float v109;
  float v110;
  float v111;
  float v112;
  int v113;
  __m128i *v114;
  __m128i v115;
  __m128i v116;
  __m128i v117;
  __m128i v118;

  v3 = 0.0;
  if ( a1 >= (int)dword_140404A6C[283785984] && a1 <= (int)item_event_ring )
  {
    v4 = 1.0;
    v5 = 0x4000;
    v6 = 0.0;
    if ( a1 == item_event_ring )
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
        v4 = v4 * 0.89999998;
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

//----- (0000000140066EE0) ----------------------------------------------------
double            sub_140066EE0(int a1, float a2, double a3, float a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  float v8;
  __int64 v9;
  float v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __m128 v14;
  __int64 v15;
  unsigned int v16;
  float v17;
  __m128d v18;
  float v19;
  __int64 v20;
  __m128 v21;
  double v22;
  double v23;
  double v24;
  double v25;
  __int64 v26;
  unsigned int v27;
  __m128 v28;
  __m128 v29;
  __int64 v30;
  unsigned int v31;
  __m128d v32;
  __int64 v33;
  __m128 v34;
  double v35;
  double v36;
  __int64 v37;
  unsigned int v38;
  __m128 v39;
  __int64 v40;
  __m128 v41;
  __int64 v42;
  unsigned int v43;
  __m128d v44;
  __int64 v45;
  __m128 v46;
  double v47;
  double v48;
  unsigned int v49;
  __int64 v50;
  unsigned int v51;
  __m128 v52;
  __int64 v53;
  unsigned int v54;
  int v55;
  int v56;
  __int64 v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  unsigned int v67;
  __int64 v68;
  int v69;
  unsigned int v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  unsigned int v74;
  char v75;
  unsigned int v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  float v83;

  v83 = *(float *)&a3;
  LODWORD(v5) = 0;
  v6 = 0;
  v7 = 0;
  v8 = a2 * 0.5;
  v9 = 16;
  dword_140404A6C[177167565] = 0;
  v10 = a2 * -0.5;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  while ( 1 )
  {
    v11 = v6 - 16;
    v12 = v7 ? LODWORD(v8) : LODWORD(v10);
    v13 = (int)(3 * v6);
    v14 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    dword_140404A6C[v13 + 177167567] = v12;
    *(_QWORD *)&dword_140404A6C[v13 + 177167568] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = -1082130432;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v5;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = v5;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = v5;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = v5;
    v15 = 8;
    v16 = ++dword_140404A6C[177167565];
    do
    {
      if ( v7 )
        v17 = 0.375;
      else
        v17 = -0.375;
      v18 = _mm_cvtps_pd(v14);
      v19 = a2 * v17;
      v21 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v18, f64)[0], v4, a3));
      v22 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v21, (__m128d)v21, 1), f64)[0];
      HIDWORD(a3) = 0;
      v23 = a4;
      v24 = *(double *)SR_VEC_LANES(128, v21, u64) * a4;
      *(float *)&a3 = v22 * a4 * 0.875;
      if ( v7 )
        v25 = v24 * -0.875;
      else
        v25 = v24 * 0.875;
      v26 = (int)(3 * v16);
      *(float *)&v27 = v25;
      *(float *)&dword_140404A6C[v26 + 177167567] = v19;
      dword_140404A6C[v26 + 177167569] = v27;
      dword_140404A6C[v26 + 177167568] = LODWORD(a3);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      v28 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, v14, u64), v20, a3);
      v4 = 0;
      SR_VEC_LANES(128, v18, f64)[0] = SR_VEC_LANES(128, v18, f64)[0] + 0.7853981633975;
      v14 = _mm_cvtpd_ps(v18);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v28, v28, 1), u32)[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = SR_VEC_LANES(128, v28, i32)[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v16 = ++dword_140404A6C[177167565];
      --v15;
    }
    while ( v15 );
    v29 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v30 = 16;
    do
    {
      if ( v7 )
        v31 = LODWORD(v8);
      else
        v31 = LODWORD(v10);
      v32 = _mm_cvtps_pd(v29);
      v34 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v32, f64)[0], 0, COERCE_DOUBLE((unsigned __int64)LODWORD(a3))));
      HIDWORD(a3) = 0;
      v35 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v34, (__m128d)v34, 1), f64)[0] * v23;
      v36 = *(double *)SR_VEC_LANES(128, v34, u64) * v23;
      *(float *)&a3 = v35;
      if ( v7 )
        v36 = -v36;
      v37 = (int)(3 * v16);
      *(float *)&v38 = v36;
      dword_140404A6C[v37 + 177167567] = v31;
      dword_140404A6C[v37 + 177167569] = v38;
      dword_140404A6C[v37 + 177167568] = LODWORD(a3);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      v39 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, v29, u64), v33, a3);
      SR_VEC_LANES(128, v32, f64)[0] = SR_VEC_LANES(128, v32, f64)[0] + 0.39269908169875;
      v40 = 0;
      v29 = _mm_cvtpd_ps(v32);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v39, v39, 1), u32)[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = SR_VEC_LANES(128, v39, i32)[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v16 = ++dword_140404A6C[177167565];
      --v30;
    }
    while ( v30 );
    v41 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v42 = 16;
    do
    {
      if ( v7 )
        v43 = LODWORD(v8);
      else
        v43 = LODWORD(v10);
      v44 = _mm_cvtps_pd(v41);
      v46 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v44, f64)[0], v40, a3));
      a3 = v83;
      v47 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v46, (__m128d)v46, 1), f64)[0] * v83;
      v48 = *(double *)SR_VEC_LANES(128, v46, u64) * v83;
      if ( v7 )
        v48 = -v48;
      v50 = (int)(3 * v16);
      *(float *)&v51 = v48;
      dword_140404A6C[v50 + 177167567] = v43;
      dword_140404A6C[v50 + 177167569] = v51;
      *(float *)&v49 = v47;
      dword_140404A6C[v50 + 177167568] = v49;
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      v52 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, v41, u64), v45, a3);
      SR_VEC_LANES(128, v44, f64)[0] = SR_VEC_LANES(128, v44, f64)[0] + 0.39269908169875;
      v41 = _mm_cvtpd_ps(v44);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v52, v52, 1), u32)[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = SR_VEC_LANES(128, v52, i32)[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v16 = ++dword_140404A6C[177167565];
      --v42;
    }
    while ( v42 );
    v53 = 8;
    v54 = dword_140404A6C[177495247];
    v55 = 1;
    do
    {
      dword_140404A6C[3 * v54 + 177495248] = v6;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v55 + v6;
      v56 = (v55++ & 7) + 1;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v6 + v56;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v57 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v57 + 178011345] = 1056964608;
      dword_140404A6C[v57 + 178011346] = 1056964608;
      dword_140404A6C[v57 + 178011347] = 1056964608;
      dword_140404A6C[v57 + 178011348] = 1056964608;
      dword_140404A6C[v57 + 178011349] = 1056964608;
      dword_140404A6C[v57 + 178011350] = 1056964608;
      v54 = ++dword_140404A6C[177495247];
      --v53;
    }
    while ( v53 );
    v58 = v6 + 1;
    v59 = v58;
    v60 = 1;
    v5 = 8;
    do
    {
      v61 = v58 + (v60 & 0xF) + 8;
      dword_140404A6C[3 * v54 + 177495248] = v59;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v58 + 7 + v60;
      v62 = v58 + ((1 - (_BYTE)v58 + (_BYTE)v59) & 7);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v61;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v63 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v63 + 178011345] = 1056964608;
      dword_140404A6C[v63 + 178011346] = 1056964608;
      dword_140404A6C[v63 + 178011347] = 1056964608;
      dword_140404A6C[v63 + 178011348] = 1056964608;
      dword_140404A6C[v63 + 178011349] = 1056964608;
      dword_140404A6C[v63 + 178011350] = 1056964608;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v59;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v62;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v64 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v64 + 178011345] = 1056964608;
      dword_140404A6C[v64 + 178011346] = 1056964608;
      dword_140404A6C[v64 + 178011347] = 1056964608;
      dword_140404A6C[v64 + 178011348] = 1056964608;
      dword_140404A6C[v64 + 178011349] = 1056964608;
      dword_140404A6C[v64 + 178011350] = 1056964608;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v62;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v58 + (((_BYTE)v60 + 1) & 0xF) + 8;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v65 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v65 + 178011345] = 1056964608;
      ++v59;
      dword_140404A6C[v65 + 178011346] = 1056964608;
      v60 += 2;
      dword_140404A6C[v65 + 178011347] = 1056964608;
      dword_140404A6C[v65 + 178011348] = 1056964608;
      dword_140404A6C[v65 + 178011349] = 1056964608;
      dword_140404A6C[v65 + 178011350] = 1056964608;
      v54 = ++dword_140404A6C[177495247];
      --v5;
    }
    while ( v5 );
    v66 = v58 + 8;
    v67 = v66;
    v68 = 16;
    do
    {
      v69 = ((_BYTE)v67 + 1 - (_BYTE)v66) & 0xF;
      dword_140404A6C[3 * v54 + 177495248] = v67;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67 + 16;
      v70 = v69 + v66 + 16;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v71 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v71 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v71 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[v71 + 178011349] = 0;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v67++;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70;
      v4 = v69 + v66;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v4;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v72 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v72 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v72 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[v72 + 178011349] = 0;
      v54 = ++dword_140404A6C[177495247];
      --v68;
    }
    while ( v68 );
    if ( ++v7 >= 2 )
      break;
    v6 = dword_140404A6C[177167565];
  }
  v73 = dword_140404A6C[177167565] - 16;
  v74 = v11;
  v75 = 1 - (LOBYTE(dword_140404A6C[177167565]) - 16);
  v76 = dword_140404A6C[177167565] - 16 + 15;
  do
  {
    dword_140404A6C[3 * v54 + 177495248] = v74;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v73 + (((_BYTE)v76 + v75) & 0xF);
    v77 = v11 + ((1 - (_BYTE)v11 + (_BYTE)v74) & 0xF);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v76;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    v78 = 6 * dword_140404A6C[177495247];
    *(_QWORD *)&dword_140404A6C[v78 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[v78 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[v78 + 178011349] = 0;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v74++;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v76--;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    v79 = 6 * dword_140404A6C[177495247];
    *(_QWORD *)&dword_140404A6C[v79 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[v79 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[v79 + 178011349] = 0;
    v54 = ++dword_140404A6C[177495247];
    --v9;
  }
  while ( v9 );
  return sub_1401449C0(a1, 0);
}

//----- (00000001400689A0) ----------------------------------------------------
__int64            sub_1400689A0(int a1, int a2, int a3, int a4, int a5, signed int a6, unsigned int *a7, float *a8)
{
  __int64 v9;
  __int64 v10;
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
  int v24;
  char v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400689A0[112];
#define v38 (*(float (*))(void *)(sr_frame_1400689A0 + 0)) /* [rsp+0h] */
#define v39 (*(float (*))(void *)(sr_frame_1400689A0 + 4)) /* [rsp+4h] */
#define v40 (*(_DWORD (*)[22])(void *)(sr_frame_1400689A0 + 8)) /* [rsp+8h] */
#define v41 (*(__int64 (*))(void *)(sr_frame_1400689A0 + 96)) /* [rsp+60h] */

  if ( (a5 & 0xE0000000) == 0x80000000 )
  {
    v9 = 58LL * (unsigned __int16)a5;
    if ( a6 < (int)dword_140404A6C[v9 + 20074651] )
    {
      v10 = *(_QWORD *)&dword_140404A6C[v9 + 20074653];
      v11 = *(float *)&dword_140404A6C[263004 * a1 + 111579653];
      v12 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 44)) * v11;
      v13 = (float)((float)a2 + *(float *)(v10 + 48LL * a6 + 36)) * v11;
      v14 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 32)) * v11;
      v15 = (float)((float)a2 + *(float *)(v10 + 48LL * a6 + 24)) * v11;
      v16 = (float)((float)a2 + *(float *)(v10 + 48LL * a6 + 12)) * v11;
      v17 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 16)) * v11;
      v18 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 20)) * v11;
      v19 = (float)((float)a2 + *(float *)(v10 + 48LL * a6)) * v11;
      v20 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 4)) * v11;
      v21 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 8)) * v11;
      v22 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 40)) * v11;
      v23 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 28)) * v11;
      v38 = v13;
      v39 = v22;
      *(float *)v40 = v12;
      *(float *)&v40[1] = v15;
      *(float *)&v40[2] = v23;
      *(float *)&v40[3] = v14;
      *(float *)&v40[4] = v16;
      *(float *)&v40[10] = (float)(v13 + v15) * 0.5;
      *(float *)&v40[5] = v17;
      *(float *)&v40[6] = v18;
      *(float *)&v40[7] = v19;
      *(float *)&v40[8] = v20;
      *(float *)&v40[9] = v21;
      *(float *)&v40[11] = (float)(v22 + v23) * 0.5;
      v24 = world_effect_count;
      v25 = 0;
      v26 = 0;
      *(float *)&v40[12] = (float)(v12 + v14) * 0.5;
      *(float *)&v40[17] = (float)(v17 + v20) * 0.5;
      *(float *)&v40[15] = (float)(v14 + v18) * 0.5;
      *(float *)&v40[18] = (float)(v18 + v21) * 0.5;
      *(float *)&v40[19] = (float)(v13 + v19) * 0.5;
      *(float *)&v40[20] = (float)(v22 + v20) * 0.5;
      *(float *)&v40[21] = (float)(v12 + v21) * 0.5;
      *(float *)&v40[14] = (float)(v17 + v23) * 0.5;
      *(float *)&v40[13] = (float)(v16 + v15) * 0.5;
      *(float *)&v40[16] = (float)(v16 + v19) * 0.5;
      do
      {
        if ( v24 < 0x4000 )
        {
          v27 = 37LL * v24;
          v28 = *((_DWORD *)&v38 + 3 * v26);
          dword_140404A6C[v27 + 432826949] = 4;
          dword_140404A6C[v27 + 432826961] = v28;
          dword_140404A6C[v27 + 432826962] = v40[3 * v26 - 1];
          dword_140404A6C[v27 + 432826963] = v40[3 * v26];
          dword_140404A6C[v27 + 432826964] = *((_DWORD *)&v38 + 3 * ((v25 + 1) & 3));
          dword_140404A6C[v27 + 432826965] = v40[3 * ((v25 + 1) & 3) - 1];
          dword_140404A6C[v27 + 432826966] = v40[3 * ((v25 + 1) & 3)];
          dword_140404A6C[v27 + 432826967] = *a7;
          dword_140404A6C[v27 + 432826968] = a7[1];
          dword_140404A6C[v27 + 432826969] = a7[2];
          if ( v26 == 2 )
            *(float *)&dword_140404A6C[v27 + 432826968] = *(float *)&dword_140404A6C[v27 + 432826968] - 0.0625;
          *(_QWORD *)&dword_140404A6C[v27 + 432826970] = 0;
          ++v24;
          *(_QWORD *)&dword_140404A6C[v27 + 432826972] = 0;
          *(_QWORD *)&dword_140404A6C[v27 + 432826974] = 0;
          *(float *)&dword_140404A6C[v27 + 432826976] = *a8 * 0.015625;
          *(float *)&dword_140404A6C[v27 + 432826977] = a8[1] * 0.015625;
          *(float *)&v29 = a8[2] * 0.015625;
          world_effect_count = v24;
          dword_140404A6C[v27 + 432826978] = v29;
          dword_140404A6C[v27 + 432826950] = 60000;
          dword_140404A6C[v27 + 432826984] = 1048576000;
          dword_140404A6C[v27 + 432826951] = 993158992;
          dword_140404A6C[v27 + 432826983] = 1065311273;
          v30 = *(float *)&dword_140404A6C[v27 + 432826961] - *(float *)&dword_140404A6C[v27 + 432826964];
          v31 = *(float *)&dword_140404A6C[v27 + 432826962] - *(float *)&dword_140404A6C[v27 + 432826965];
          v32 = *(float *)&dword_140404A6C[v27 + 432826963] - *(float *)&dword_140404A6C[v27 + 432826966];
          *(float *)&dword_140404A6C[v27 + 432826979] = fsqrt(
                                                          (float)((float)(v31 * v31) + (float)(v30 * v30))
                                                        + (float)(v32 * v32));
          v33 = *(float *)&dword_140404A6C[v27 + 432826964] - *(float *)&dword_140404A6C[v27 + 432826967];
          v34 = *(float *)&dword_140404A6C[v27 + 432826965] - *(float *)&dword_140404A6C[v27 + 432826968];
          v35 = *(float *)&dword_140404A6C[v27 + 432826966] - *(float *)&dword_140404A6C[v27 + 432826969];
          *(float *)&dword_140404A6C[v27 + 432826980] = fsqrt(
                                                          (float)((float)(v34 * v34) + (float)(v33 * v33))
                                                        + (float)(v35 * v35));
          v36 = *(float *)&dword_140404A6C[v27 + 432826969] - *(float *)&dword_140404A6C[v27 + 432826963];
          *(float *)&dword_140404A6C[v27 + 432826981] = fsqrt(
                                                          (float)((float)((float)(*(float *)&dword_140404A6C[v27 + 432826968]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826962])
                                                                        * (float)(*(float *)&dword_140404A6C[v27 + 432826968]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826962]))
                                                                + (float)((float)(*(float *)&dword_140404A6C[v27 + 432826967]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826961])
                                                                        * (float)(*(float *)&dword_140404A6C[v27 + 432826967]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826961])))
                                                        + (float)(v36 * v36));
        }
        ++v25;
        ++v26;
      }
      while ( v26 < 4 );
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v38
#undef v39
#undef v40
#undef v41

//----- (0000000140068F80)
_BOOL8 sub_140068F80(void) { return sr_client_cpu_sse41_probe(); }

//----- (0000000140068FC0) ----------------------------------------------------
__int64            sub_140068FC0(int a1, char *a2)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  int *v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int *v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  signed int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  signed int v23;
  signed int *i;
  signed int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v30;
  float v31;
  int v32;
  float v33;
  float v34;
  float v35;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140068FC0[32800];
#define v43 (*(unsigned int (*))(void *)(sr_frame_140068FC0 + 0)) /* [rsp+30h] */
#define v44 (*(unsigned int (*))(void *)(sr_frame_140068FC0 + 4)) /* [rsp+34h] */
#define v45 (*(int (*))(void *)(sr_frame_140068FC0 + 8)) /* [rsp+38h] */
#define v46 (*(_DWORD (*)[8192])(void *)(sr_frame_140068FC0 + 16)) /* [rsp+40h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_140068FC0 + 32784)) /* [rsp+8040h] */

  v2 = 49166LL * a1;
  if ( (int)dword_140404A6C[v2 + 433435865] < 4096 && (unsigned int)sub_140079840(a2) )
  {
    v3 = dword_140404A6C[468765293];
    v4 = dword_140404A6C[468765294];
    v5 = (int *)&dword_140404A6C[v2 + 433435853];
    v6 = dword_140404A6C[v2 + 433435853];
    if ( v6 > 0 )
      crt_memset((void *)(uintptr_t)(v46), 0, 4LL * (unsigned int)v6);
    v7 = (int)dword_140404A6C[v2 + 433435865];
    v45 = v7;
    if ( (int)v7 > 0 )
    {
      v8 = 0;
      v9 = (unsigned int)v7;
      v10 = &dword_140404A6C[v2 + 433435868];
      do
      {
        v11 = *(v10 - 2);
        v12 = v11 + *v10;
        if ( v11 < v12 )
        {
          v13 = (int)*(v10 - 2);
          do
          {
            if ( v13 >= 0 && v11 < v6 )
            {
              v14 = v5[v8 + 16] + v5[v8 + 14];
              if ( v46[v13] < v14 )
                v46[v13] = v14;
            }
            ++v11;
            ++v13;
          }
          while ( v11 < v12 );
        }
        v8 += 12;
        v10 += 12;
        --v9;
      }
      while ( v9 );
    }
    v15 = 0;
    v44 = v3;
    v43 = 0;
    v16 = v3;
    v17 = v4;
    v18 = 0;
    v19 = v3 + 2;
    v20 = v4 + 2;
    v21 = dword_140404A6C[v2 + 433435854] - v20;
    if ( v21 >= 0 )
    {
      v22 = 0;
      while ( 2 )
      {
        v23 = v15;
        for ( i = &v46[v22]; ; ++i )
        {
          if ( v23 >= (int)(v15 + v19) )
          {
            v30 = v2 * 4 + 48 * v7;
            v31 = (float)(int)(v18 + 1 + v17);
            v32 = 0;
            *(unsigned int *)((char *)&dword_140404A6C[433435866] + v30) = v15;
            *(unsigned int *)((char *)&dword_140404A6C[433435867] + v30) = v18;
            *(unsigned int *)((char *)&dword_140404A6C[433435868] + v30) = v19;
            *(unsigned int *)((char *)&dword_140404A6C[433435869] + v30) = v20;
            v33 = (float)(int)(v15 + 1);
            v34 = (float)(int)(v15 + 1 + v16);
            *(float *)((char *)&dword_140404A6C[433435870] + v30) = v33 / (float)*v5;
            *(float *)((char *)&dword_140404A6C[433435871] + v30) = v31 / (float)(int)dword_140404A6C[v2 + 433435854];
            *(float *)((char *)&dword_140404A6C[433435872] + v30) = v34 / (float)*v5;
            *(float *)((char *)&dword_140404A6C[433435873] + v30) = v31 / (float)(int)dword_140404A6C[v2 + 433435854];
            *(float *)((char *)&dword_140404A6C[433435874] + v30) = v34 / (float)*v5;
            v35 = (float)(v18 + 1);
            *(float *)((char *)&dword_140404A6C[433435875] + v30) = v35 / (float)(int)dword_140404A6C[v2 + 433435854];
            *(float *)((char *)&dword_140404A6C[433435876] + v30) = v33 / (float)*v5;
            *(float *)((char *)&dword_140404A6C[433435877] + v30) = v35 / (float)(int)dword_140404A6C[v2 + 433435854];
            ++dword_140404A6C[v2 + 433435865];
            if ( v20 > 0 )
            {
              v36 = -v16;
              v37 = 0;
              v38 = 4LL * v19;
              do
              {
                v39 = 0;
                if ( v19 > 0 )
                {
                  v40 = 0;
                  v41 = v37;
                  do
                  {
                    *(_DWORD *)(v41 + *(_QWORD *)&dword_140404A6C[v2 + 433435863]) = 0;
                    if ( v32 && v32 < v20 - 1 && v40 && v39 < v19 - 1 )
                      *(_DWORD *)(v41 + *(_QWORD *)&dword_140404A6C[v2 + 433435863]) = dword_140404A6C[v36 + 468765294 + v39];
                    ++v39;
                    ++v40;
                    v41 += 4;
                  }
                  while ( v40 < v19 );
                  v16 = v44;
                  v38 = 4LL * v19;
                }
                ++v32;
                v37 += v38;
                v36 += v16;
              }
              while ( v32 < v20 );
              v15 = v43;
            }
            qword_140404050(3553, dword_140404A6C[v2 + 433435861]);
            (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, int, _QWORD))&flt_140384000[131090])(
              3553,
              0,
              v15,
              (unsigned int)v18,
              v19,
              v20,
              6408,
              5121,
              *(_QWORD *)&dword_140404A6C[v2 + 433435863]);
            return (unsigned int)v45;
          }
          if ( v18 < *i )
            break;
          ++v23;
        }
        v25 = v15 + 1;
        v26 = v6 - v19;
        v27 = v18 + 1;
        if ( (int)(v15 + 1) <= v6 - v19 )
          v27 = v18;
        v15 = 0;
        v18 = v27;
        v28 = v22 + 1;
        if ( v25 <= v26 )
          v15 = v25;
        v22 = 0;
        v43 = v15;
        if ( v25 <= v26 )
          v22 = v28;
        if ( v18 <= v21 )
          continue;
        break;
      }
    }
  }
  return (unsigned int)-1;
}
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47

//----- (0000000140069400) ----------------------------------------------------
/* Diagnostics read by the debug console: callbacks so far and the loudest sample. */
volatile int sr_audio_calls, sr_audio_peak;
void            sub_140069400(__int64 userdata, __m128i *output, int byte_count)
{
  enum { READ_BUFFER = 9, OUTPUT_BASE = 11, BUFFER_WORDS = 0x10000 };
  const float *mixed = (const float *)&dword_140404A6C[
      OUTPUT_BASE + BUFFER_WORDS * dword_140404A6C[READ_BUFFER]];
  (void)userdata;
  memcpy(output, mixed, byte_count);
  /* SDL output is float32; report a normalized peak on the existing 16-bit scale. */
  for (int sample = 0; sample < byte_count / (int)sizeof(float); ++sample) {
    float magnitude = fabsf(((float *)output)[sample]);
    int peak = isfinite(magnitude) ? (int)(fminf(magnitude, 1.0f) * 32767.0f) : 0;
    if (peak > sr_audio_peak) sr_audio_peak = peak;
  }
  sr_audio_calls++;
  dword_140404A6C[9] ^= 1u;
  SDL_SemPost(*(void **)&dword_140404A6C[1]);
}

// 140069439: control flows out of bounds to 140198E69

//----- (0000000140069440) ----------------------------------------------------
__int64 sub_140069440()
{
  int v0;
  int v1;
  int v2;
  char *v3;
  int v4;
  char *v5;
  char v6;
  int v7;
  char *v8;
  int v9;
  char *v10;
  char v11;
  __int64 result;

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

//----- (0000000140069580) ----------------------------------------------------
__int64 sub_140069580()
{
  __int64 result;

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
  int v0;
  int v1;
  char *v2;
  int v3;
  char *v4;
  char v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  char *v10;
  char v11;
  unsigned int v12;
  unsigned int v13;
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
    /* SDL's Windows fallback creates the thread without the original EXE's CRT. */
    thread=sr_audio_thread((void *)(uintptr_t)sub_14006BB10,"cs_audio_updatethread",NULL,
       NULL,NULL);
    __builtin_memcpy(&dword_140404A6C[3],&thread,8);
    { extern void sr_debug_log(const char *, ...);
      sr_debug_log("Audio: mixer thread %s", thread ? "started" : "FAILED"); }
    if (!thread || !semaphore) return 0;
    memset(&desired,0,32);
    desired.freq=48000;desired.format=0x8120;desired.channels=2;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_140069400;
    v12=sr_audio_open(NULL,0,&desired,&obtained,0);
    dword_140404A6C[8]=obtained.samples;
    if(obtained.channels!=2 || obtained.samples!=1024)v12=0;
    dword_140404A6C[7]=v12;
    { extern void sr_debug_log(const char *, ...);
      sr_debug_log("Audio: output device %u (%d Hz, %d channels, %d samples)", v12, obtained.freq, obtained.channels, obtained.samples); }
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

//----- (0000000140069930) ----------------------------------------------------
void            sub_140069930(unsigned int a1, int a2, __int16 *a3, float a4)
{
  __int64 v4;
  void *v6;
  __int64 v7;
  signed int v8;
  __int64 v9;
  int v10;

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
        *(float *)(v9 + *(_QWORD *)&dword_140404A6C[v4 + 18165779] - 4) = (float)v10 * 0.000030517578;
      }
      while ( v8 < (int)dword_140404A6C[v4 + 18165778] );
    }
  }
}

//----- (0000000140069A00) ----------------------------------------------------
void sub_140069A00()
{
  __int64 v0;
  __int64 v1;
  unsigned int *v2;
  int v3;
  int i;
  int v5;
  int v6;
  unsigned int *v7;
  unsigned int *v8;
  signed int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned int *v13;
  unsigned int *v14;
  int v15;
  int v16;
  unsigned int *v17;
  signed int v18;
  signed int v19;
  signed int v20;
  unsigned int *v21;
  __int64 v22;
  int v23;
  signed int v24;
  __int64 v25;
  unsigned int *v26;
  int v27;
  int v28;
  __int64 v29;
  _WORD *v30;
  __int64 v31;
  unsigned int *v32;
  __int64 v33;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140069A00[336];
#define v35 (*(__int64 (*))(void *)(sr_frame_140069A00 + 0)) /* [rsp+0h] */
#define v36 (*(int (*))(void *)(sr_frame_140069A00 + 32)) /* [rsp+20h] */
#define v37 (*(unsigned int * (*))(void *)(sr_frame_140069A00 + 40)) /* [rsp+28h] */
#define v38 (*(unsigned int * (*))(void *)(sr_frame_140069A00 + 48)) /* [rsp+30h] */
#define Buffer (*(char (*)[256])(void *)(sr_frame_140069A00 + 64)) /* [rsp+40h] */
#define v40 (*(__int64 (*))(void *)(sr_frame_140069A00 + 320)) /* [rsp+140h] */

  v0 = crt_fopen("default-48000.mhr", "rb");
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
                *((float *)v13 - 2) = (float)v15 * 0.000030517578;
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
    crt_fclose(v1);
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

//----- (0000000140069DE0) ----------------------------------------------------
void            sub_140069DE0(unsigned int a1, __int64 a2, float a3)
{
  signed int v3;
  __int64 v4;
  void *v5;
  float v6;
  __int64 v7;
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
    /* SDL_RWFromFile(path, "rb") and SDL_LoadWAV_RW(rw, 1, &spec, &buffer, &length);
       the export dropped every argument and the stream (0x140069E2A..). */
    /* (Never called by the original; the sounds are loaded by 0x1400EE400.) */
    if ( SDL_LoadWAV_RW(SDL_RWFromFile(a2, "rb"), 1, (void *)&v8, (void *)&v11, (void *)&v10) )
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
                                                                        * 0.000030517578;
            v7 += 4;
            v6 = fminf(v6 + (float)(1.0 / (float)(48000.0 / (float)v8)), (float)(int)((v10 >> 1) - 1));
          }
          while ( v3 < (int)dword_140404A6C[v4 + 18165778] );
        }
        SDL_FreeWAV(v11);
      }
    }
  }
}
#undef v8
#undef v9
#undef v10
#undef v11

//----- (0000000140069FA0) ----------------------------------------------------
__int64            sub_140069FA0(signed int a1, unsigned int *a2, float a3, float a4, unsigned int a5)
{
  __int64 v7;
  unsigned int *v8;
  unsigned int v9;
  __int64 v11;

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
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v11 + 327698]), 0, 0x1102FCu);
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

//----- (000000014006A140) ----------------------------------------------------
__int64            sub_14006A140(int a1, int a2, float a3, float a4, unsigned int a5)
{
  __int64 v5;
  __int64 result;
  __int64 v7;

  v5 = a2;
  if ( dword_140404A6C[7] )
  {
    result = a1;
    v7 = 278720LL * a1;
    if ( !dword_140404A6C[v7 + 327697] )
    {
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[v7 + 327698]), 0, 0x1102FCu);
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

//----- (000000014006A240) ----------------------------------------------------
__int64            sub_14006A240(int a1, int a2, unsigned int *a3, float a4, unsigned int a5, unsigned int a6)
{
  __int64 v7;
  __int64 result;
  __int64 v9;

  v7 = a2;
  if ( dword_140404A6C[7] )
  {
    result = a1;
    v9 = 278720LL * a1;
    if ( !dword_140404A6C[v9 + 327697] )
    {
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[v9 + 327698]), 0, 0x1102FCu);
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

//----- (000000014006A380) ----------------------------------------------------
__m128i *           sub_14006A380(__int64 a1,      __m128i *a2, int a3)
{
  unsigned int v3;
  unsigned int v5;
  int v6;
  __m128i *result;

  v3 = dword_140404A6C[196622];
  v5 = 0;
  v6 = a3 / 2;
  if ( (signed int)(dword_140404A6C[196622] + a3 / 2) > 0x40000 )
  {
    v5 = 0x40000 - dword_140404A6C[196622];
    crt_memcpy(
      (__m128i *)((char *)&dword_140404A6C[196624] + 2 * (int)dword_140404A6C[196622]),
      a2,
      2 * (0x40000 - dword_140404A6C[196622]));
    v6 -= v5;
    v3 = 0;
    dword_140404A6C[196622] = 0;
  }
  result = crt_memcpy(
             (__m128i *)((char *)&dword_140404A6C[196624] + 2 * (int)v3),
             (     __m128i *)((char *)a2 + 2 * (int)v5),
             2 * v6);
  dword_140404A6C[196622] = (v6 + dword_140404A6C[196622]) & 0x3FFFF;
  return result;
}

//----- (000000014006A5C0) ----------------------------------------------------
__int64 sub_14006A5C0()
{
  __int64 result;

  if ( (int)dword_140404A6C[196619] > 0 )
    result = sub_140198E9F();
  if ( (int)dword_140404A6C[7] > 0 )
    return sub_140198E9F();
  return result;
}

//----- (000000014006B4C0) ----------------------------------------------------
__int64            sub_14006B4C0(int a1, int a2, int a3, int a4)
{
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  int v12;
  float v13;
  float v14;
  float v15;
  float i;
  float v17;
  int v18;
  int v19;
  __int64 v20;
  float v21;
  int v22;
  float v23;
  float v24;

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

//----- (000000014006B6F0) ----------------------------------------------------
__int64            sub_14006B6F0(int a1, int a2)
{
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned int *v10;
  int i;
  __int64 result;

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

//----- (000000014006B850) ----------------------------------------------------
void sub_14006B850()
{
  int v0;
  int v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int *v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int *v13;
  int i;
  int v15;
  __int64 v16;
  float *v17;
  int v18;
  float v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;

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

//----- (000000014006BB10) ----------------------------------------------------
void __attribute__((noreturn)) sub_14006BB10()
{
  int v0;
  int v1;
  __int64 i;
  __int64 v3;
  __int64 v4;
  unsigned int *v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned int *v12;
  int j;
  int v14;
  __int64 v15;
  float *v16;
  int v17;
  float v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;

  while ( 1 )
  {
    do
    {
      do
        sub_140198E63(*(void **)&dword_140404A6C[1]);   /* the audio semaphore at 0x140404A70 */
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

//----- (000000014006BDC0) ----------------------------------------------------
__int64 sub_14006BDC0()
{
  char *v0;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006BDC0[608];
#define v2 (*(_QWORD (*)[5])(void *)(sr_frame_14006BDC0 + 0)) /* [rsp+0h] */
#define v3 (*(int (*))(void *)(sr_frame_14006BDC0 + 40)) /* [rsp+28h] */
#define v4 (*(int (*))(void *)(sr_frame_14006BDC0 + 48)) /* [rsp+30h] */
#define v5 (*(int (*))(void *)(sr_frame_14006BDC0 + 56)) /* [rsp+38h] */
#define v6 (*(int (*))(void *)(sr_frame_14006BDC0 + 64)) /* [rsp+40h] */
#define v7 (*(_BYTE (*)[512])(void *)(sr_frame_14006BDC0 + 80)) /* [rsp+50h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_14006BDC0 + 592)) /* [rsp+250h] */

  switch ( dword_140404A6C[179668277] )
  {
    case 0u:
      if ( dword_140404A6C[278384725] )
      {
        v0 = "Steam Auth...";
        if ( !dword_140404A6C[278384987] )
          v0 = "Steam Ticket...";
      }
      else
      {
        v0 = "Steam Init Failed";
      }
      goto LABEL_11;
    case 1u:
      v0 = "CS Auth...";
LABEL_11:
      v6 = 1065353216;
      v5 = 1065353216;
      v4 = 1065353216;
      v3 = 1065353216;
      v2[4] = 0;
      sr_text_draw_recovered(v0, 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440C0000u))))), 12.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14006BEAA */;
      return 0; /* the function has no caller */
    case 2u:
      crt_sprintf(v7, "%03d-%04d", dword_140404A6C[134050337] / 0x2710, dword_140404A6C[134050337] % 0x2710);
      v0 = v7;
      goto LABEL_11;
  }
  return 0; /* the function has no caller */
}
#undef v2
#undef v3
#undef v4
#undef v5
#undef v6
#undef v7
#undef v8

// 14006BF1E: conditional instruction was optimized away because eax.4!=0

//----- (000000014006C510) ----------------------------------------------------
__int64            sub_14006C510(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result;
  unsigned int v7;

  if ( a4 )
    return sub_14006C360(a1, a2, a3, a4);
  sub_14006C360(a1, &v7, a3, 0);
  result = v7;
  if ( v7 == (1 << a3) - 1 )
    result = 0xFFFFFFFFLL;
  *a2 = result;
  return result;
}

//----- (000000014006C570) ----------------------------------------------------
__int64            sub_14006C570(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result;
  int v7;

  if ( a4 )
    return sub_14006C360(a1, a2, a3, a4);
  sub_14006C360(a1, &v7, a3, 0);
  result = v7 & (unsigned int)(1 << (a3 - 1));
  if ( (_DWORD)result == 1 << (a3 - 1) )
  {
    result = v7 | (unsigned int)(-1 << a3);
    *a2 = result;
  }
  else
  {
    *a2 = v7;
  }
  return result;
}

//----- (000000014006C670) ----------------------------------------------------
// CRC32-style UI label ID helper. Lazily builds 256-entry table with polynomial 0xEDB88320 and returns bitwise-not final CRC.
__int64            sub_14006C670(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 *v2;
  int v3;
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned __int8 v10;
  __int64 v11;

  v2 = a1;
  if ( !dword_140404A6C[18215125] )
  {
    v3 = 0;
    v4 = &dword_140404A6C[18215125];
    do
    {
      ++v4;
      v5 = (unsigned int)v3 >> 1;
      v6 = -(v3++ & 1) & 0xEDB88320;
      v7 = v5 ^ v6;
      LOBYTE(v5) = v7;
      v7 >>= 1;
      v8 = ((((v7 ^ -(v5 & 1) & 0xEDB88320) >> 1) ^ -(((unsigned __int8)v7 ^ -(v5 & 1) & 0x20) & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)((v7 ^ -(v5 & 1) & 0xEDB88320) >> 1)
            ^ -(((unsigned __int8)v7 ^ -(v5 & 1) & 0x20) & 1)
            & 0x20)
           & 1)
         & 0xEDB88320;
      v9 = (((v8 >> 1) ^ -(v8 & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)(v8 >> 1) ^ -(v8 & 1) & 0x20) & 1)
         & 0xEDB88320;
      *(v4 - 1) = (((v9 >> 1) ^ -(v9 & 1) & 0xEDB88320) >> 1)
                ^ -(((unsigned __int8)(v9 >> 1) ^ -(v9 & 1) & 0x20) & 1)
                & 0xEDB88320;
    }
    while ( v3 < 256 );
  }
  v10 = *a1;
  if ( *a1 )
  {
    do
    {
      ++v2;
      v11 = v10;
      v10 = *v2;
      a2 = (a2 >> 8) ^ dword_140404A6C[(v11 ^ (unsigned __int8)a2) + 18215125];
    }
    while ( *v2 );
  }
  return ~a2;
}

//----- (000000014006C780) ----------------------------------------------------
__int64 sub_14006C780()
{
  extern void camera_update_letterbox(void);
  camera_update_letterbox();
  return 0;
}

//----- (000000014006C870) ----------------------------------------------------
__int64            sub_14006C870(_BYTE *a1)
{
  int v1;
  unsigned int v2;
  int v3;
  _BYTE *v4;

  v1 = dword_140404A6C[129454557];
  v2 = 0;
  v3 = 0;
  if ( (int)dword_140404A6C[129454557] < (int)dword_140404A6C[129454558] )
  {
    v4 = a1;
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 != *((_BYTE *)&dword_140404A6C[129454559] + v1) )
        break;
      ++v3;
      ++v1;
      ++v4;
    }
    while ( v1 < (int)dword_140404A6C[129454558] );
  }
  LOBYTE(v2) = a1[v3] == 0;
  return v2;
}

//----- (000000014006C980) ----------------------------------------------------
__int64            sub_14006C980(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2;
  unsigned __int8 v3;

  v2 = a2 - (_QWORD)a1;
  while ( 1 )
  {
    v3 = *a1;
    if ( *a1 != a1[v2] )
      break;
    ++a1;
    if ( !v3 )
      return 0;
  }
  return v3 < a1[v2] ? -1 : 1;
}

//----- (000000014006CA30) ----------------------------------------------------
__int64            sub_14006CA30(unsigned int a1, unsigned int a2)
{
  dword_140404A6C[433435853] = a1;
  dword_140404A6C[433435854] = a2;
  dword_140404A6C[433435865] = 0;
  free(*(void **)&dword_140404A6C[433435863]);
  *(_QWORD *)&dword_140404A6C[433435863] = sr_path_malloc(4 * dword_140404A6C[433435853] * dword_140404A6C[433435854]);
  crt_memset(
    (void *)(uintptr_t)(*(_WORD **)&dword_140404A6C[433435863]),
    0xFFu,
    4 * dword_140404A6C[433435853] * dword_140404A6C[433435854]);
  unk_140404060(1, &dword_140404A6C[433435861]);
  qword_140404050(3553, dword_140404A6C[433435861]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
  (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
    3553,
    0,
    6408,
    dword_140404A6C[433435853],
    dword_140404A6C[433435854],
    0,
    6408,
    5121,
    *(_QWORD *)&dword_140404A6C[433435863]);
  return 0;
}

//----- (000000014006CFF0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__int64            sub_14006CFF0(double a1, double a2, __int64 a3, float a4, char a5, int a6, int a7, int a8, int a9)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_draw_textured_rect(float x, float y, float width, float height, int flags,
                                          float red, float green, float blue, float alpha);
  /* x, y and width arrive as float bits in wider containers; the colour as float bits in ints. */
  renderer_draw_textured_rect(*(float *)&a1, *(float *)&a2, *(float *)&a3, a4, a5,
                              *(float *)&a6, *(float *)&a7, *(float *)&a8, *(float *)&a9);
  return 0;
}

// 14006CFF0: inconsistent variable size for 'xmm0_8.8'
// 14006CFF0: inconsistent variable size for 'xmm1_8.8'

//----- (000000014006D300) ----------------------------------------------------
__int64            sr_CSDrawAtlasEntry(
        int a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_draw_atlas_sprite(int atlas, int entry, float x, float y, float width, float height,
                                         int flags, float red, float green, float blue, float alpha);
  /* The colour arrives as float bits in ints. */
  renderer_draw_atlas_sprite(a1, a2, a3, a4, a5, a6, a7,
                             *(float *)&a8, *(float *)&a9, *(float *)&a10, *(float *)&a11);
  return 0;
}

//----- (000000014006D660) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__int64            sub_14006D660(double a1, double a2, __int64 a3, float a4, char a5, int a6, int a7, int a8, int a9)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_draw_flat_rect(float x, float y, float width, float height, int flags,
                                      float red, float green, float blue, float alpha);
  /* x, y and width arrive as float bits in wider containers; the colour as float bits in ints. */
  renderer_draw_flat_rect(*(float *)&a1, *(float *)&a2, *(float *)&a3, a4, a5,
                          *(float *)&a6, *(float *)&a7, *(float *)&a8, *(float *)&a9);
  return 0;
}

//----- (000000014006D930) ----------------------------------------------------
__int64            sr_CSDrawText(char *a1, float a2, unsigned int *a3, float a4)
{
  /* The original is variadic: (format, x, y, size, flags, red, green, blue,
     alpha, ...). The decompiler gave its callers only the first four
     arguments, passing y as float bits in a3. Until those callers are
     recovered with the full argument list, they draw unanchored white text
     with zeroed format arguments instead of reading uninitialized stack.
     Fully recovered callers use sr_text_draw_recovered(). */
  extern void text_draw(const char *format, float x, float y, float size, int flags,
                        float red, float green, float blue, float alpha, const unsigned long long *arguments);
  static const unsigned long long no_arguments[8];
  text_draw(a1, a2, sr_text_bits_float((unsigned)(uintptr_t)a3), a4, 0, 1.0f, 1.0f, 1.0f, 1.0f, no_arguments);
  return 0;
}
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23

//----- (000000014006DB90) ----------------------------------------------------
void sub_14006DB90(_BYTE *a1, float a2, _BYTE *a3, float a4, int a5, int a6, int a7, int a8, int a9)
{
  extern void text_draw_glyphs(const char *text, float x, float y, float size,
                               float red, float green, float blue, float alpha, int flip_vertical);
  /* Recompiled callers pass y and the colour as float bits in integer arguments. */
  text_draw_glyphs((const char *)a1, a2, sr_text_bits_float((unsigned)(uintptr_t)a3), a4,
                   sr_text_bits_float((unsigned)a5), sr_text_bits_float((unsigned)a6),
                   sr_text_bits_float((unsigned)a7), sr_text_bits_float((unsigned)a8), a9);
}
#undef v39
#undef v40
#undef v41
#undef v42

//----- (000000014006E0D0) ----------------------------------------------------
void            sub_14006E0D0(__int64 a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_batch_flush(void);
  (void)a1; (void)a2; (void)a3;
  renderer_batch_flush();
}

//----- (000000014006E2D0) ----------------------------------------------------
void            sub_14006E2D0(__int64 a1, __int64 a2, __int64 a3)
{
  extern void renderer_batch_draw(void);
  renderer_batch_draw();
}

//----- (000000014006E4C0) ----------------------------------------------------
_BOOL8            sub_14006E4C0(_BYTE *a1)
{
  signed int v1;
  signed int i;
  __int64 v4;

  v1 = dword_140404A6C[129454557];
  for ( i = dword_140404A6C[129454558]; v1 < i; dword_140404A6C[129454557] = ++v1 )
  {
    if ( (unsigned int)sub_14006C870(a1) )
      break;
  }
  v4 = -1;
  do
    ++v4;
  while ( a1[v4] );
  dword_140404A6C[129454557] = v4 + v1;
  return (int)v4 + v1 < i;
}

//----- (000000014006E530) ----------------------------------------------------
__int64            sub_14006E530(_BYTE *a1, _BYTE *a2, int a3, __int64 a4)
{
  extern int text_format(char *out, const char *format, int capacity, const unsigned long long *arguments);
  return text_format((char *)a1, (const char *)a2, a3, (const unsigned long long *)(uintptr_t)a4);
}

//----- (000000014006EC40) ----------------------------------------------------
__int64            sub_14006EC40(float *a1, float *a2, float *a3, float *a4)
{
  extern void math_triangle_normal(float out[3], const float a[3], const float b[3], const float c[3]);
  math_triangle_normal(a1, a2, a3, a4);
  return 0;
}

//----- (000000014006F060) ----------------------------------------------------
float            sub_14006F060(int a1, _BYTE *a2, float a3)
{
  extern float text_width(int font, const char *text, float size);
  return text_width(a1, (const char *)a2, a3);
}

//----- (000000014006F120) ----------------------------------------------------
// UI label copy helper. Copies text to widget label buffer and stops visible label at null or ## hidden-ID marker.
__int64            sub_14006F120(__int64 a1, char *a2)
{
  __int64 v3;
  char v4;
  int v5;
  _BYTE *v6;
  __int64 v7;
  char v8;
  char v9;
  char v10;
  char v11;

  v3 = a1 - (_QWORD)a2;
  do
  {
    v4 = *a2;
    a2[v3] = *a2;
    ++a2;
  }
  while ( v4 );
  v5 = 0;
  v6 = (_BYTE *)(a1 + 2);
  v7 = -2 - a1;
  do
  {
    v8 = *(v6 - 2);
    if ( !v8 || v8 == 35 && *(v6 - 1) == 35 )
      break;
    v9 = *(v6 - 1);
    ++v5;
    if ( !v9 || v9 == 35 && *v6 == 35 )
      break;
    ++v5;
    if ( !*v6 || *v6 == 35 && v6[1] == 35 )
      break;
    v10 = v6[1];
    ++v5;
    if ( !v10 || v10 == 35 && v6[2] == 35 )
      break;
    v11 = v6[2];
    ++v5;
    if ( !v11 || v11 == 35 && v6[3] == 35 )
      break;
    v6 += 5;
    ++v5;
  }
  while ( (__int64)&v6[v7] < 255 );
  *(_BYTE *)(v5 + a1) = 0;
  return v5;
}

//----- (000000014006F750) ----------------------------------------------------
__int64            sub_14006F750(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;

  v10 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + 6 + (dword_140404A6C[70087064] << 16));
  v11 = (int)sub_140070380(v10, a2, a3, a4, a5, dword_140404A6C[70087071]);
  v12 = 122 * v11;
  dword_140404A6C[v12 + 70087215] = a7;
  dword_140404A6C[v12 + 70087146] = a7;
  *(_QWORD *)&dword_140404A6C[v12 + 70087217] = a8;
  dword_140404A6C[v12 + 70087115] = 6;
  *(_QWORD *)&dword_140404A6C[v12 + 70087149] = a9;
  sub_14006F120((__int64)&dword_140404A6C[122 * v11 + 70087151], (char *)a1);
  v13 = dword_140404A6C[70087107];
  if ( dword_140404A6C[70087107] == -1 )
    v13 = v11;
  dword_140404A6C[70087107] = v13;
  (*(void (           **)(_QWORD, __int64))&dword_140404A6C[v12 + 70087217])(dword_140404A6C[v12 + 70087215], 1);
  return 0;
}

//----- (0000000140070B90) ----------------------------------------------------
__int64 sub_140070B90()
{
  dword_140404A6C[70326263] = 1;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[70326264]), 0xFFu, 0x400u);
  *(_QWORD *)&dword_140404A6C[70326520] = 0;
  return 0;
}

//----- (0000000140070BD0) ----------------------------------------------------
__int64            sub_140070BD0(int a1, unsigned int a2,      char *a3,      char *a4)
{
  __int64 v4;
  __int64 v6;
  int v7;
  __int64 v8;
  char *v9;
  unsigned int *v10;
  char v11;
  int v12;
  char *v13;
  __int64 v14;
  unsigned int *v15;
  unsigned int *v16;
  char v17;
  unsigned int v18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140070BD0[1424];
#define v20 (*(__int64 (*))(void *)(sr_frame_140070BD0 + 0)) /* [rsp+0h] */
#define v21 (*(_BYTE (*)[36])(void *)(sr_frame_140070BD0 + 80)) /* [rsp+50h] */
#define v22 (*(char (*))(void *)(sr_frame_140070BD0 + 116)) /* [rsp+74h] */
#define v23 (*(int (*))(void *)(sr_frame_140070BD0 + 384)) /* [rsp+180h] */
#define v24 (*(char (*))(void *)(sr_frame_140070BD0 + 388)) /* [rsp+184h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_140070BD0 + 1408)) /* [rsp+580h] */

  v4 = 517LL * a1;
  if ( (int)dword_140404A6C[v4 + 70315979] <= 1 && a2 <= 1 )
  {
    crt_sprintf(&v23, "%s/%s", a3, a4);
    v6 = sub_14023A198(&v23, (__int64)v21);
    v7 = 0;
    v8 = v6;
    dword_140404A6C[133657101] = 0;
    if ( (_DWORD)v6 != -1 )
    {
      do
      {
        if ( v7 >= 1024 )
          break;
        if ( (v21[0] & 0x10) == 0 )
        {
          v9 = &v22;
          v10 = &dword_140404A6C[32 * (__int64)v7 + 133657102];
          do
          {
            v11 = *v9++;
            *(_BYTE *)v10 = v11;
            v10 = (unsigned int *)((char *)v10 + 1);
          }
          while ( v11 );
          ++dword_140404A6C[133657101];
        }
        v12 = sub_14023A5C4(v8, (__int64)v21);
        v7 = dword_140404A6C[133657101];
      }
      while ( v12 != -1 );
    }
    LOBYTE(dword_140404A6C[32 * (__int64)v7 + 133657102]) = 0;
    sub_140239CCC(v8);
    sub_14023AE00(
      (unsigned __int64)&dword_140404A6C[133657102],
      (int)dword_140404A6C[133657101],
      0x80u,
      (int (           *)(unsigned __int64, _BYTE *))sub_14006C980);
    LOBYTE(dword_140404A6C[v4 + 70315984]) = 0;
    LOBYTE(dword_140404A6C[v4 + 70316240]) = 0;
    *(_QWORD *)&dword_140404A6C[v4 + 70315982] = -1;
  }
  dword_140404A6C[v4 + 70315979] = 3;
  dword_140404A6C[v4 + 70315980] = a2;
  if ( a2 <= 1 )
  {
    v13 = "Open File";
    if ( a2 )
      v13 = "Save File";
    dword_140404A6C[v4 + 70315981] = sub_140071C20(
                                       (unsigned __int8 *)v13,
                                       (float)(renderer_canvas_width * 0.5) - 256.0,
                                       (float)(renderer_canvas_height * 0.5) - 160.0,
                                       512.0,
                                       0x43A00000u,
                                       1095761920,
                                       256);
    sub_1400707C0(
      "Files",
      256.0,
      128.0,
      256.0,
      0x41A00000u,
      1u,
      &dword_140404A6C[v4 + 70315982],
      (__int64)&dword_140404A6C[133657102],
      0x80u,
      dword_140404A6C[133657101]);
    v14 = (int)dword_140404A6C[v4 + 70315982];
    if ( (_DWORD)v14 != dword_140404A6C[v4 + 70315983] && (int)v14 >= 0 && (int)v14 < (int)dword_140404A6C[133657101] )
    {
      v15 = &dword_140404A6C[32 * v14 + 133657102];
      v16 = &dword_140404A6C[v4 + 70315984];
      do
      {
        v17 = *(_BYTE *)v15;
        v15 = (unsigned int *)((char *)v15 + 1);
        *(_BYTE *)v16 = v17;
        v16 = (unsigned int *)((char *)v16 + 1);
      }
      while ( v17 );
    }
    sub_140070200("Filename", (__int64)&dword_140404A6C[v4 + 70315984], 0x100u);
    dword_140404A6C[70087067] = 1134690304;
    dword_140404A6C[70087068] = 1082130432;
    if ( (int)dword_140404A6C[70317962] < 16 )
    {
      dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
      dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
    }
    dword_140404A6C[70087070] = 1103101952;
    dword_140404A6C[70087069] = 1124073472;
    if ( a2 )
      v23 = 1702256979;
    else
      v23 = 1852141647;
    v24 = 0;
    if ( (unsigned int)sr_DrawMenuButton((unsigned __int8 *)&v23) )
      crt_sprintf(&dword_140404A6C[v4 + 70316240], "%s", (     char *)&dword_140404A6C[v4 + 70315984]);
    dword_140404A6C[70087074] = 41;
    sr_DrawMenuButton("Cancel");
    v18 = dword_140404A6C[70317962];
    if ( (int)dword_140404A6C[70317962] > 0 )
    {
      --dword_140404A6C[70317962];
      dword_140404A6C[70087069] = dword_140404A6C[2 * (v18 - 1) + 70317963];
      dword_140404A6C[70087070] = dword_140404A6C[2 * (v18 - 1) + 70317964];
    }
  }
  dword_140404A6C[v4 + 70315983] = dword_140404A6C[v4 + 70315982];
  sub_140077230();
  return 0; /* the function has no caller */
}
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25

//----- (0000000140070FF0) ----------------------------------------------------
__int64            sub_140070FF0(
        int a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        float *a7,
        float a8,
        float a9)
{
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  float v12;

  v9 = sub_14006C670("Scrollbar", a1 + (dword_140404A6C[70087064] << 16) + (dword_140404A6C[70087046] << 8));
  v10 = sub_140070380(v9, a2, a3, a4, a5, 0);
  v11 = 122LL * (int)v10;
  *(float *)&dword_140404A6C[v11 + 70087220] = a8;
  *(float *)&dword_140404A6C[v11 + 70087221] = a9;
  dword_140404A6C[v11 + 70087219] = a6;
  dword_140404A6C[v11 + 70087115] = 7;
  *(_QWORD *)&dword_140404A6C[v11 + 70087217] = (uint64)(uintptr_t)(a7);
  if ( dword_140404A6C[70317817] || (dword_140404A6C[v11 + 70087215] = 0, dword_140404A6C[70317817]) )
  {
    if ( !dword_140404A6C[70317856] )
    {
      if ( v10 != dword_140404A6C[70087109] )
        goto LABEL_12;
      dword_140404A6C[v11 + 70087215] = 1;
    }
  }
  if ( v10 == dword_140404A6C[70087109] )
  {
    v12 = *a7 - (float)((float)(int)dword_140404A6C[137297772] * 16.0);
    if ( v12 < a8 )
      v12 = a8;
    if ( v12 > a9 )
      v12 = a9;
    *a7 = v12;
  }
LABEL_12:
  if ( dword_140404A6C[v11 + 70087215] )
    **(float **)&dword_140404A6C[v11 + 70087217] = fminf(
                                                     fmaxf(
                                                       (float)((float)((float)(*(float *)&dword_140404A6C[468760126]
                                                                             - *(float *)&dword_140404A6C[v11 + 70087135])
                                                                     - (float)(*(float *)&dword_140404A6C[v11 + 70087219]
                                                                             * 0.5))
                                                             / (float)(*(float *)&dword_140404A6C[v11 + 70087128]
                                                                     - *(float *)&dword_140404A6C[v11 + 70087219]))
                                                     * (float)(*(float *)&dword_140404A6C[v11 + 70087221]
                                                             - *(float *)&dword_140404A6C[v11 + 70087220]),
                                                       *(float *)&dword_140404A6C[v11 + 70087220]),
                                                     *(float *)&dword_140404A6C[v11 + 70087221]);
  return v10;
}

//----- (0000000140071C20) ----------------------------------------------------
__int64            sub_140071C20(unsigned __int8 *a1, float a2, float a3, float a4, float a5, int a6, __int16 a7)
{
  __int64 v7;
  float v8;
  float v9;
  unsigned __int8 *v10;
  unsigned int v11;
  unsigned int *v12;
  int v13;
  signed int v14;
  BOOL v15;
  __int64 v16;
  __int64 v17;
  unsigned int *v18;
  __int64 v20;
  char *v21;
  unsigned __int8 v22;
  int v23;
  _BYTE *v24;
  char v25;
  __int64 v26;
  __int64 v27;
  unsigned int *v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  float v33;
  unsigned int v34;
  unsigned int v35;
  float v36;
  unsigned int v37;
  float v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;

  v7 = (int)dword_140404A6C[70087046];
  v8 = a2;
  v9 = a3;
  v10 = a1;
  v11 = sub_14006C670(a1, 1u);
  v12 = &dword_140404A6C[70290892];
  v13 = 0;
  v14 = -1;
  do
  {
    if ( *(v12 - 1) - 1 <= 1 && *v12 == v11 )
      v14 = v13;
    ++v13;
    v12 += 98;
  }
  while ( v13 < 256 );
  v15 = 0;
  if ( v14 == -1 )
  {
    v14 = 0;
    v18 = &dword_140404A6C[70290891];
    while ( *v18 )
    {
      ++v14;
      v18 += 98;
      if ( (__int64)v18 >= (__int64)&dword_140404A6C[70315979] )
        return 0xFFFFFFFFLL;
    }
    if ( v14 == -1 )
      return 0xFFFFFFFFLL;
    v16 = v14;
    v17 = v14;
    goto LABEL_18;
  }
  if ( (a7 & 0x100) != 0 )
    v15 = dword_140404A6C[98 * v14 + 70290891] == 1;
  v16 = v14;
  v17 = v14;
  if ( v15 )
  {
LABEL_18:
    if ( (a7 & 1) != 0 )
    {
      v8 = a2 + (float)(a4 * -0.5);
    }
    else if ( (a7 & 2) != 0 )
    {
      v8 = a2 - a4;
    }
    if ( (a7 & 4) != 0 )
    {
      v9 = a3 + (float)(a5 * -0.5);
    }
    else if ( (a7 & 8) != 0 )
    {
      v9 = a3 - a5;
    }
    v20 = 98 * v17;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[98 * v17 + 70290891]), 0, 0x188u);
    *(float *)&dword_140404A6C[v20 + 70290899] = a5;
    *(float *)&dword_140404A6C[v20 + 70290896] = v8;
    *(float *)&dword_140404A6C[v20 + 70290897] = v9;
    *(float *)&dword_140404A6C[v20 + 70290898] = a4;
    dword_140404A6C[v20 + 70290901] = 1101004800;
    if ( (a7 & 0x200) != 0 )
    {
      dword_140404A6C[v20 + 70290901] = 0;
      dword_140404A6C[v20 + 70290972] = 1;
    }
    dword_140404A6C[v20 + 70290900] = 0x40000000;
    v21 = (char *)&dword_140404A6C[70087029] + v20 * 4 - (_QWORD)v10;
    do
    {
      v22 = *v10;
      v10[(_QWORD)v21 + 815516] = *v10;
      ++v10;
    }
    while ( v22 );
    v23 = 0;
    v24 = (char *)&dword_140404A6C[v20 + 70290908] + 1;
    do
    {
      v25 = *(v24 - 1);
      if ( !v25 || v25 == 35 && *v24 == 35 )
        break;
      ++v24;
      ++v23;
    }
    while ( (intptr_t)((uintptr_t)(v24) - (uintptr_t)(((char *)&dword_140404A6C[v20 + 70290908] + 1))) < 255 );
    *((_BYTE *)&dword_140404A6C[v20 + 70290908] + v23) = 0;
  }
  v26 = 98 * v17;
  if ( (int)dword_140404A6C[98 * v17 + 70290891] <= 1 )
  {
    v27 = 0;
    v28 = &dword_140404A6C[70290895];
    v29 = 256;
    do
    {
      if ( (int)*(v28 - 4) >= 2 && v27 != v16 && *(v28 - 2) == (_DWORD)v7 && (int)*v28 < 256 )
        ++*v28;
      ++v27;
      v28 += 98;
      --v29;
    }
    while ( v29 );
    dword_140404A6C[v26 + 70290895] = 0;
    dword_140404A6C[v26 + 70290894] = dword_140404A6C[70087103];
    dword_140404A6C[70087103] = v14;
  }
  dword_140404A6C[v26 + 70290891] = 3;
  dword_140404A6C[v26 + 70290892] = v11;
  dword_140404A6C[v26 + 70290893] = v7;
  if ( dword_140404A6C[70317860] == v14 )
  {
    if ( dword_140404A6C[70317859] )
    {
      if ( dword_140404A6C[70317859] == 1 )
      {
        v32 = (float)(*(float *)&dword_140404A6C[70317781] - *(float *)&dword_140404A6C[70317862])
            - *(float *)&dword_140404A6C[v26 + 70290973];
        *(float *)&dword_140404A6C[v26 + 70290898] = v32;
        v33 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[70317863];
        *(float *)&dword_140404A6C[v26 + 70290898] = fmaxf(v32, 64.0);
        *(float *)&dword_140404A6C[v26 + 70290899] = fmaxf(v33 - *(float *)&dword_140404A6C[v26 + 70290974], 64.0);
      }
    }
    else
    {
      v30 = *(float *)&dword_140404A6C[70317781] - *(float *)&dword_140404A6C[70317862];
      *(float *)&dword_140404A6C[v26 + 70290896] = *(float *)&dword_140404A6C[70317781]
                                                 - *(float *)&dword_140404A6C[70317862];
      v31 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[70317863];
      *(float *)&dword_140404A6C[v26 + 70290896] = fmaxf(v30, 4.0);
      *(float *)&dword_140404A6C[v26 + 70290897] = fmaxf(v31, 4.0);
    }
  }
  v34 = dword_140404A6C[v26 + 70290896];
  v35 = dword_140404A6C[v26 + 70290897];
  if ( (_DWORD)v7 != -1 )
  {
    *(float *)&v34 = *(float *)&v34 + *(float *)&dword_140404A6C[98 * v7 + 70290981];
    *(float *)&v35 = (float)(*(float *)&dword_140404A6C[98 * v7 + 70290982]
                           - *(float *)&dword_140404A6C[98 * v7 + 70290905])
                   + *(float *)&v35;
  }
  v36 = *(float *)&dword_140404A6C[v26 + 70290900];
  v37 = dword_140404A6C[v26 + 70290901];
  v38 = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290973] = v34;
  v39 = dword_140404A6C[v26 + 70290898];
  dword_140404A6C[v26 + 70290974] = v35;
  dword_140404A6C[v26 + 70290975] = v39;
  v40 = dword_140404A6C[v26 + 70290899];
  *(float *)&dword_140404A6C[v26 + 70290977] = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290976] = v40;
  *(float *)&v41 = *(float *)&dword_140404A6C[v26 + 70290898] - (float)(v36 + v36);
  *(float *)&dword_140404A6C[v26 + 70290978] = *(float *)&v35 + v36;
  dword_140404A6C[v26 + 70290980] = v37;
  *(float *)&dword_140404A6C[v26 + 70290981] = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290979] = v41;
  *(float *)&v42 = *(float *)&dword_140404A6C[v26 + 70290898] - (float)(v36 + v36);
  *(float *)&dword_140404A6C[v26 + 70290982] = (float)(*(float *)&v35 + v36) + *(float *)&v37;
  dword_140404A6C[v26 + 70290983] = v42;
  *(float *)&dword_140404A6C[v26 + 70290984] = (float)(*(float *)&dword_140404A6C[v26 + 70290899] - (float)(v36 + v36))
                                             - *(float *)&v37;
  v43 = (float)(*(float *)&v34 + *(float *)&dword_140404A6C[v26 + 70290898]) - 16.0;
  *(float *)&dword_140404A6C[v26 + 70290987] = v36 + 16.0;
  v44 = v43 - v36;
  *(float *)&dword_140404A6C[v26 + 70290985] = v44;
  v45 = *(float *)&v35 + *(float *)&dword_140404A6C[v26 + 70290899];
  *(float *)&dword_140404A6C[v26 + 70290988] = v36 + 16.0;
  v46 = (float)(v45 - 16.0) - v36;
  *(float *)&dword_140404A6C[v26 + 70290986] = v46;
  if ( dword_140404A6C[70087105] != v14 || !dword_140404A6C[70317817] || dword_140404A6C[70317856] )
    goto LABEL_66;
  if ( *(float *)&dword_140404A6C[70317781] >= v38
    && *(float *)&dword_140404A6C[70317781] < (float)(v38 + *(float *)&dword_140404A6C[v26 + 70290979]) )
  {
    v47 = *(float *)&dword_140404A6C[v26 + 70290978];
    if ( *(float *)&dword_140404A6C[70317782] >= v47
      && *(float *)&dword_140404A6C[70317782] < (float)(v47 + *(float *)&dword_140404A6C[v26 + 70290980]) )
    {
      dword_140404A6C[70317859] = 0;
      dword_140404A6C[70317860] = v14;
      *(float *)&dword_140404A6C[70317862] = *(float *)&dword_140404A6C[70317781]
                                           - *(float *)&dword_140404A6C[v26 + 70290896];
      v48 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[v26 + 70290897];
LABEL_65:
      *(float *)&dword_140404A6C[70317863] = v48;
      goto LABEL_66;
    }
  }
  if ( *(float *)&dword_140404A6C[70317781] >= v44
    && *(float *)&dword_140404A6C[70317781] < (float)(v44 + *(float *)&dword_140404A6C[v26 + 70290987])
    && *(float *)&dword_140404A6C[70317782] >= v46
    && *(float *)&dword_140404A6C[70317782] < (float)(v46 + *(float *)&dword_140404A6C[v26 + 70290988]) )
  {
    dword_140404A6C[70317859] = 1;
    dword_140404A6C[70317860] = v14;
    *(float *)&dword_140404A6C[70317862] = *(float *)&dword_140404A6C[70317781]
                                         - (float)(*(float *)&dword_140404A6C[v26 + 70290985]
                                                 + *(float *)&dword_140404A6C[v26 + 70290987]);
    v48 = *(float *)&dword_140404A6C[70317782]
        - (float)(*(float *)&dword_140404A6C[v26 + 70290988] + *(float *)&dword_140404A6C[v26 + 70290986]);
    goto LABEL_65;
  }
LABEL_66:
  dword_140404A6C[70087046] = v14;
  if ( (int)dword_140404A6C[70087029] < 16 )
  {
    dword_140404A6C[dword_140404A6C[70087029] + 70087030] = v14;
    ++dword_140404A6C[70087029];
  }
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1082130432;
  return (unsigned int)v14;
}

//----- (00000001400722C0) ----------------------------------------------------
__int64 sub_1400722C0()
{
  signed int v0;
  unsigned __int64 v1;
  int v2;
  signed int v3;
  unsigned int v4;
  signed int v5;
  __int64 v6;
  unsigned int *v7;
  signed int v8;
  unsigned int *v9;
  unsigned int *v10;
  signed int v11;
  unsigned __int64 v12;
  char v13;
  __int64 result;

  v0 = dword_140404A6C[70318066];
  v1 = -1;
  v2 = 0;
  v3 = dword_140404A6C[70318066];
  v4 = 0;
  v5 = 0;
  v6 = -1;
  do
    ++v6;
  while ( *((_BYTE *)&dword_140404A6C[70318069] + v6) );
  v7 = &dword_140404A6C[70322165];
  if ( v6 )
  {
    v8 = dword_140404A6C[70318065];
    v9 = &dword_140404A6C[70318069];
    v10 = &dword_140404A6C[70322165];
    do
    {
      if ( v5 < v8 )
      {
        if ( v5 < v0 )
          goto LABEL_13;
      }
      else if ( v5 < v0 )
      {
        goto LABEL_10;
      }
      if ( v5 < v8 )
      {
LABEL_10:
        v11 = v5;
        v4 = 1;
        if ( v3 <= v5 )
          v11 = v3;
        v3 = v11;
        goto LABEL_14;
      }
LABEL_13:
      ++v2;
      *(_BYTE *)v10 = *(_BYTE *)v9;
      v10 = (unsigned int *)((char *)v10 + 1);
      v0 = dword_140404A6C[70318066];
      v8 = dword_140404A6C[70318065];
LABEL_14:
      ++v5;
      v12 = -1;
      v9 = (unsigned int *)((char *)v9 + 1);
      do
        ++v12;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v12) );
    }
    while ( v5 < v12 );
  }
  *((_BYTE *)&dword_140404A6C[70322165] + v2) = 0;
  do
  {
    v13 = *(_BYTE *)v7;
    *((_BYTE *)v7 - 0x4000) = *(_BYTE *)v7;
    v7 = (unsigned int *)((char *)v7 + 1);
  }
  while ( v13 );
  dword_140404A6C[70318066] = v3;
  do
    ++v1;
  while ( *((_BYTE *)&dword_140404A6C[70318069] + v1) );
  result = v4;
  if ( v3 > v1 )
    v3 = v1;
  dword_140404A6C[70318066] = v3;
  dword_140404A6C[70318065] = v3;
  return result;
}

//----- (0000000140072760) ----------------------------------------------------
double sub_140072760(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned background=1059061760,inner=0;
  unsigned flags=a1==dword_140404A6C[70087109];
  if(flags)inner=1056964608;
  if(a1==dword_140404A6C[70087111]){background=1063256064;inner=1056964608;}
  if(dword_140404A6C[index+70087119]){background=1048576000;inner=0;flags|=8;}
  if(dword_140404A6C[index+70087115]==2 && **(_DWORD **)&dword_140404A6C[index+70087215]==dword_140404A6C[index+70087217]){inner=1052770304;flags|=4;}
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,flags);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*renderer_current_font+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,background,background,background,1065353216);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,inner,inner,inner,1065353216);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width*0.5f,y+height*0.5f,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* callers ignore the legacy export result; native returns void */
}

//----- (00000001400729D0) ----------------------------------------------------
double            sub_1400729D0(int a1, double a2, float a3)
{
  __int64 v3;
  double result;
  void (           *v5)(_QWORD, _QWORD);

  v3 = 122LL * a1;
  result = a2;
  if ( (unsigned int)sub_140075460(
                       *(float *)&a2,
                       a3,
                       *(float *)&dword_140404A6C[v3 + 70087127],
                       *(float *)&dword_140404A6C[v3 + 70087128]) )
  {
    v5 = *(void (           **)(_QWORD, _QWORD))&dword_140404A6C[v3 + 70087149];
    if ( v5 )
      v5(dword_140404A6C[v3 + 70087146], dword_140404A6C[v3 + 70087147]);
    sub_140075340();
    return sub_14007BB00();
  }
  return result;
}

//----- (0000000140072A90) ----------------------------------------------------
double            sub_140072A90(int a1, double a2, double a3)
{
  double v3 = a3; // xmm2_8: y arrives in xmm2 (0x140072ACD movaps xmm9, xmm2); Hex-Rays had lost it
  int v4;
  float v5;
  __int64 v6;
  unsigned int v7;
  void (           *v8)(_QWORD, _QWORD);
  double result;
  __m128i v10;
  __m128i v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140072A90[32];
#define v12 (*(int (*))(void *)(sr_frame_140072A90 + 0)) /* [rsp+28h] */
#define v13 (*(int (*))(void *)(sr_frame_140072A90 + 8)) /* [rsp+30h] */
#define v14 (*(int (*))(void *)(sr_frame_140072A90 + 16)) /* [rsp+38h] */

  v4 = 1056964608;
  v5 = *(float *)&v3;
  v6 = 122LL * a1;
  v7 = **(_DWORD **)&dword_140404A6C[v6 + 70087223];
  if ( a1 == dword_140404A6C[70087109] )
    v4 = 1061158912;
  v8 = *(void (           **)(_QWORD, _QWORD))&dword_140404A6C[v6 + 70087149];
  if ( v8 )
  {
    /* 0x140072B0D..0x140072B36: the row callback also takes x (xmm2), y (xmm3), the width and height
       ([rsp+20h], [rsp+28h]) and whether this widget has the focus ([rsp+30h], edx from 0x140072AF2);
       the C had passed only the first two. */
    ((void (*)(int, unsigned int, float, float, float, float, unsigned int))v8)(
      dword_140404A6C[v6 + 70087146],
      v7,
      *(float *)&a2,
      *(float *)&v3,
      *(float *)&dword_140404A6C[v6 + 70087127],
      *(float *)&dword_140404A6C[v6 + 70087128],
      a1 == dword_140404A6C[70087109]);
    return sub_14007BB00();
  }
  else
  {
    v14 = v4;
    v13 = v4;
    v12 = v4;
    result = a2;
    /* 0x140072B78: width from [rbx+rsi+188h] (0x140072B42), not the third argument */
    sub_14006D660(a2, v3, dword_140404A6C[v6 + 70087127], *(float *)&dword_140404A6C[v6 + 70087128], 0, v12, v13, v14, 1056964608);
    if ( v7 != -1 )
    {
      v10 = _mm_cvtsi32_si128(dword_140404A6C[v6 + 70087128]); /* 0x140072B8A: the height */
      *(float *)SR_VEC_LANES(128, v10, i32) = (float)(*(float *)SR_VEC_LANES(128, v10, i32) * 0.5) + v5;
      sr_text_draw_recovered((char *)(*(_QWORD *)&dword_140404A6C[v6 + 70087217] + (int)(v7 * dword_140404A6C[v6 + 70087219])), (float)(*(float *)&dword_140404A6C[v6 + 70087127] * 0.5) + *(float *)&a2, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10))), 13.0, 69u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140072BFA */;
    }
    v11 = _mm_cvtsi32_si128(dword_140404A6C[v6 + 70087128]); /* 0x140072C08: the height */
    *(float *)SR_VEC_LANES(128, v11, i32) = (float)(*(float *)SR_VEC_LANES(128, v11, i32) * 0.5) + v5;
    sr_text_draw_recovered((char *)&dword_140404A6C[v6 + 70087151], (float)(*(float *)&a2 + *(float *)&dword_140404A6C[v6 + 70087127]) + 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v11))), *(float *)&dword_140404A6C[v6 + 70087133], 4u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140072C67 */;
  }
  return result;
}
#undef v12
#undef v13
#undef v14

//----- (0000000140072CA0) ----------------------------------------------------
double sub_140072CA0(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned selected=a1==dword_140404A6C[70087109];
  float inner=selected?0.25f:0.0f;
  if(dword_140404A6C[index+70087215])
    inner=selected?1.0f:0.875f;
  float width=*(float *)&dword_140404A6C[index+70087127];
  float height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,selected);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*renderer_current_font+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,0x3f600000,0x3f600000,0x3f600000,0x3f800000);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,0,0,0,0x3f800000);
    float side=fmaxf(height-8.0f,4.0f);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+4.0f)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(side),side,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
    unsigned color=sr_text_float_bits(inner);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+6.0f)),sr_export_float_lane_container(sr_text_float_bits(y+6.0f)),sr_text_float_bits(side-4.0f),side-4.0f,0,color,color,color,0x3f800000);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],(side+width)*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* legacy result ignored; native routine returns void */
}

//----- (0000000140072F90) ----------------------------------------------------
__int64 sub_140072F90(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128],size=*(float *)&dword_140404A6C[index+70087133];
  unsigned background=dword_140404A6C[index+70087116]?0x3ee00000:a1==dword_140404A6C[70087109]?0x3ea00000:0x3e400000;
  sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,background,background,background,0x3f000000);
  float middle=height*0.5f+y;
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  unsigned focused=a1==dword_140404A6C[70087106];
  char *value=focused?(char *)&dword_140404A6C[70318069]:*(char **)&dword_140404A6C[index+70087215];
  if(dword_140404A6C[index+70087124]){
    char masked[512];size_t n=strlen(value);if(n>31)n=31;memset(masked,'*',n);masked[n]=0;
    sr_text_draw_recovered(masked,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  }else if(!focused&&dword_140404A6C[index+70087115]==4){
    double formatted=(double)**(float **)&dword_140404A6C[index+70087217];uint64 arguments[1];memcpy(arguments,&formatted,8);
    sr_text_draw_recovered("/f",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else if(!focused&&dword_140404A6C[index+70087115]==5){
    uint64 arguments[1]={**(unsigned **)&dword_140404A6C[index+70087217]};
    sr_text_draw_recovered("/i",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else sr_text_draw_recovered(value,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  if(focused){
    float cursor=sub_140074CE0(a1,(int)dword_140404A6C[70318066])+x;
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(cursor)),sr_export_float_lane_container(sr_text_float_bits(middle+size*0.25f)),sr_text_float_bits(size*0.5f),4.0f,0,0x3f800000,0x3f800000,0x3f800000,0x3f000000);
    int first=(int)dword_140404A6C[70318066],last=(int)dword_140404A6C[70318065];
    if(first!=last){
      if(first>last){int temporary=first;first=last;last=temporary;}
      float start=sub_140074CE0(a1,first),span=sub_140074CE0(a1,last)-start;
      sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+start)),a3,sr_text_float_bits(span),height,0,0x3f800000,0x3f800000,0x3f800000,0x3e800000);
    }
  }
  return 0; /* legacy result ignored; native routine returns void */
}

//----- (0000000140073430) ----------------------------------------------------
double sub_140073430(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  unsigned kind=dword_140404A6C[index+70087115],selected=a1==dword_140404A6C[70087109];
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if((kind&0xfffffffdu)==0)return sub_140072760(a1,a2,a3);
  if(kind==1)return sub_1400742F0(a1,a2,a3);
  if(kind-3u<=2u){sub_140072F90(a1,a2,a3);return 0.0;}
  switch(kind){
    case 6:
      if(sub_140075460(x,y,width,height)){
        if(callback)((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,0);
        sub_140075340();sub_14007BB00();
      }break;
    case 7:{
      unsigned color=selected||dword_140404A6C[index+70087116]?0x3ec00000:0x3e800000;
      sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f800000);
      float low=*(float *)&dword_140404A6C[index+70087220],high=*(float *)&dword_140404A6C[index+70087221];
      float knob=*(float *)&dword_140404A6C[index+70087219],value=**(float **)&dword_140404A6C[index+70087217];
      float at=((value-low)*(height-knob))/(high-low)+y;
      sub_14006D660(a2,sr_export_float_lane_container(sr_text_float_bits(at)),sr_text_float_bits(width),knob,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
      break;}
    case 8:return sub_140073860(a1,a2,a3);
    case 10:{
      int value=**(int **)&dword_140404A6C[index+70087223];
      if(callback){
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],(unsigned)value,x,y,width,height,selected);
        sub_14007BB00();
      }else{
        unsigned color=selected?0x3f400000:0x3f000000;
        sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f000000);
        if(value!=-1)sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)value*dword_140404A6C[index+70087219])),width*0.5f+x,height*0.5f+y,13.0f,69,1.0f,1.0f,1.0f,1.0f,NULL);
        sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
      }break;}
    case 11:return sub_140074040(a1,a2,a3);
    case 12:return sub_140073D90(a1,a2,a3);
    case 13:return sub_140072CA0(a1,a2,a3);
  }
  return 0.0; /* legacy result ignored; native dispatch returns void */
}

//----- (0000000140073860) ----------------------------------------------------
double sub_140073860(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(sub_140075460(x,y,width,height)){
    sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,0x3e000000,0x3e000000,0x3e000000,0x3f000000);
    float gap=*(float *)&dword_140404A6C[index+70087230];
    float cell_width=*(float *)&dword_140404A6C[index+70087228],cell_height=*(float *)&dword_140404A6C[index+70087229];
    float cx=gap*0.5f+x,cy=(gap*0.5f+y)-*(float *)&dword_140404A6C[index+70087232];int column=0;
    for(int item=0;item<(int)dword_140404A6C[index+70087220];item++){
      void *callback=*(void **)&dword_140404A6C[index+70087149];
      if(callback){
        unsigned flags=(dword_140404A6C[index+70087223]==item?1:0)|(dword_140404A6C[index+70087222]==item?4:0);
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],item,cx,cy,cell_width,cell_height,flags);
      }else{
        if(dword_140404A6C[index+70087222]==item || dword_140404A6C[index+70087223]==item){
          unsigned color=dword_140404A6C[index+70087222]==item?0x3f400000:0x3f200000;
          sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(cx)),sr_export_float_lane_container(sr_text_float_bits(cy)),sr_text_float_bits(cell_width),cell_height,0,color,color,color,0x3f000000);
        }
        sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)item*dword_140404A6C[index+70087219])),cx+4.0f,cy+3.5f,13.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
      }
      if(++column<(int)dword_140404A6C[index+70087227])cx+=cell_width+gap;
      else{column=0;cx=gap*0.5f+x;cy+=gap+cell_height;}
    }
    int depth=(int)dword_140404A6C[70317864];
    if(depth<=0 || --depth<=0){if(dword_140404A6C[70317864]>0)dword_140404A6C[70317864]=depth;((void (*)(unsigned))(uintptr_t)*(uint64 *)&dword_140404A6C[18215101])(3089);}
    else{
      dword_140404A6C[70317864]=depth;__int64 i=4LL*depth;
      dword_140404A6C[70318060]=dword_140404A6C[i+70317861];dword_140404A6C[70318061]=dword_140404A6C[i+70317862];
      dword_140404A6C[70318062]=dword_140404A6C[i+70317863];dword_140404A6C[70318063]=dword_140404A6C[i+70317864];
      sub_14007B7E0(*(float *)&dword_140404A6C[70318060],*(float *)&dword_140404A6C[70318061],*(float *)&dword_140404A6C[70318062],*(float *)&dword_140404A6C[70318063]);
    }
    sub_14007BB00();
  }
  return 0.0; /* legacy result ignored; native returns void */
}

//----- (0000000140073C40) ----------------------------------------------------
__int64            sub_140073C40(int a1, double a2, double a3)
{
  double v3 = a3; // xmm2_8: y arrives in xmm2 (0x140073C6C movaps xmm7, xmm2); Hex-Rays had lost it
  int v4;
  __int64 v5;
  float v6;
  double v7;
  __int64 v8;

  v4 = 1048576000;
  if ( a1 == dword_140404A6C[70087109] || dword_140404A6C[122 * a1 + 70087116] )
    v4 = 1052770304;
  v5 = 122LL * a1;
  /* 0x140073CDF: width from [rbx+rsi+188h] (0x140073CD6), not the third argument */
  sub_14006D660(a2, v3, dword_140404A6C[v5 + 70087127], *(float *)&dword_140404A6C[v5 + 70087128], 0, v4, v4, v4, 1065353216);
  v6 = *(float *)&dword_140404A6C[v5 + 70087219];
  *(_QWORD *)&v7 = **(unsigned int **)&dword_140404A6C[v5 + 70087217];
  *(float *)&v7 = (float)((float)((float)(*(float *)&v7 - *(float *)&dword_140404A6C[v5 + 70087220])
                                * (float)(*(float *)&dword_140404A6C[v5 + 70087128] - v6))
                        / (float)(*(float *)&dword_140404A6C[v5 + 70087221] - *(float *)&dword_140404A6C[v5 + 70087220]))
                + *(float *)&v3;
  return sub_14006D660(a2, v7, 0x41800000 /* native XMM2 width 16.0f */, v6, 0, 1056964608, 1056964608, 1056964608, 1065353216);
}

//----- (0000000140073D90) ----------------------------------------------------
double sub_140073D90(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  unsigned color=a1==dword_140404A6C[70087109]||dword_140404A6C[index+70087116]?70087099:70087095;
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,dword_140404A6C[color],dword_140404A6C[color+1],dword_140404A6C[color+2],dword_140404A6C[color+3]);
  float knob=*(float *)&dword_140404A6C[index+70087220];
  float low=*(float *)&dword_140404A6C[index+70087217],high=*(float *)&dword_140404A6C[index+70087218];
  float value=**(float **)&dword_140404A6C[index+70087215];
  /* MAXSS/MINSS return their second operand for unordered inputs. */
  float clamped=value>low?value:low;clamped=clamped<high?clamped:high;
  float at=((clamped-low)*(width-knob))/(high-low)+x;
  double formatted=(double)value;uint64 arguments[1];memcpy(arguments,&formatted,8);
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(at)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(knob),height-8.0f,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
  sr_text_draw_recovered("/f",width*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],5,1.0f,1.0f,1.0f,1.0f,arguments);
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
  return 0.0; /* legacy result ignored; native draw returns void */
}

//----- (0000000140074040) ----------------------------------------------------
double sub_140074040(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  unsigned color=a1==dword_140404A6C[70087109]||dword_140404A6C[index+70087116]?70087099:70087095;
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,dword_140404A6C[color],dword_140404A6C[color+1],dword_140404A6C[color+2],dword_140404A6C[color+3]);
  float knob=*(float *)&dword_140404A6C[index+70087220];
  int low=(int)dword_140404A6C[index+70087217],high=(int)dword_140404A6C[index+70087218];
  int value=**(int **)&dword_140404A6C[index+70087215];
  int clamped=value<low?low:value;clamped=clamped>high?high:clamped;
  float at=((float)(int)((unsigned)clamped-(unsigned)low)*(width-knob))/(float)(int)((unsigned)high-(unsigned)low)+x;
  uint64 arguments[1]={(unsigned)value};
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(at)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(knob),height-8.0f,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
  sr_text_draw_recovered("/i",width*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],5,1.0f,1.0f,1.0f,1.0f,arguments);
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
  return 0.0; /* legacy result ignored; native draw returns void */
}

//----- (00000001400742F0) ----------------------------------------------------
double sub_1400742F0(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned selected=a1==dword_140404A6C[70087109];
  float inner=selected?0.25f:0.0f;
  unsigned bits=dword_140404A6C[index+70087217];
  if((bits & **(unsigned **)&dword_140404A6C[index+70087215])==bits)
    inner=selected?1.0f:0.875f;
  float width=*(float *)&dword_140404A6C[index+70087127];
  float height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,selected);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*renderer_current_font+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,0x3f600000,0x3f600000,0x3f600000,0x3f800000);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,0,0,0,0x3f800000);
    float side=fmaxf(height-8.0f,4.0f);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+4.0f)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(side),side,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
    unsigned color=sr_text_float_bits(inner);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+6.0f)),sr_export_float_lane_container(sr_text_float_bits(y+6.0f)),sr_text_float_bits(side-4.0f),side-4.0f,0,color,color,color,0x3f800000);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],(side+width)*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* legacy result ignored; native routine returns void */
}

//----- (0000000140074C50) ----------------------------------------------------
__int64            sub_140074C50(int a1, float a2)
{
  int v2;
  float v3;
  unsigned int *v4;

  v2 = 0;
  v3 = 0.0;
  if ( LOBYTE(dword_140404A6C[70318069]) )
  {
    v4 = &dword_140404A6C[70318069];
    do
    {
      if ( v2 >= (int)dword_140404A6C[70318068] )
        break;
      v3 = v3
         + (float)(*(float *)&dword_140404A6C[3592 * dword_140404A6C[122 * a1 + 70087123]
                                            + 72777093
                                            + *(unsigned __int8 *)v4]
                 * *(float *)&dword_140404A6C[122 * a1 + 70087133]);
      if ( a2 < v3 )
        break;
      v4 = (unsigned int *)((char *)v4 + 1);
      ++v2;
    }
    while ( *(_BYTE *)v4 );
  }
  return (unsigned int)v2;
}

//----- (0000000140074CE0) ----------------------------------------------------
float            sub_140074CE0(int a1, int a2)
{
  int v2;
  double v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  float v8;

  v2 = 0;
  v3 = 0.0;
  if ( a2 <= 0 )
    return 0.0f; /* 0x140074D9E: xorps xmm0, xmm0 */
  v4 = 122LL * a1;
  v5 = a2;
  for ( i = 0; i < v5; ++i )
  {
    v7 = *((unsigned __int8 *)&dword_140404A6C[70318069] + i);
    if ( !(_BYTE)v7 || v2 >= (int)dword_140404A6C[70318068] )
      break;
    v8 = dword_140404A6C[v4 + 70087124]
       ? *(float *)&dword_140404A6C[3592 * dword_140404A6C[122 * a1 + 70087123] + 72777135]
       : *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[122 * a1 + 70087123] + 72777093 + v7];
    ++v2;
    *(float *)&v3 = *(float *)&v3 + (float)(*(float *)&dword_140404A6C[v4 + 70087133] * v8);
  }
  return *(float *)&v3; /* 0x140074D7F: addss xmm1, xmm0 */
}

//----- (0000000140075340) ----------------------------------------------------
double sub_140075340()
{
  signed int v0;
  __int64 v1;
  double result;

  if ( (int)dword_140404A6C[70317864] <= 0 )
    return (*(double (           **)(__int64))&dword_140404A6C[18215101])(3089);
  v0 = dword_140404A6C[70317864] - 1;
  dword_140404A6C[70317864] = v0;
  if ( v0 <= 0 )
    return (*(double (           **)(__int64))&dword_140404A6C[18215101])(3089);
  v1 = 2LL * v0;
  dword_140404A6C[70318060] = dword_140404A6C[2 * v1 + 70317861];
  *(_QWORD *)&result = dword_140404A6C[70318060];
  dword_140404A6C[70318062] = dword_140404A6C[2 * v1 + 70317863];
  dword_140404A6C[70318061] = dword_140404A6C[2 * v1 + 70317862];
  dword_140404A6C[70318063] = dword_140404A6C[2 * v1 + 70317864];
  sub_14007B7E0(
    *(float *)&dword_140404A6C[70318060],
    *(float *)&dword_140404A6C[70318061],
    *(float *)&dword_140404A6C[70318062],
    *(float *)&dword_140404A6C[70318063]);
  return result;
}

//----- (00000001400753C0) ----------------------------------------------------
__int64 sub_1400753C0()
{
  __int64 result;

  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

//----- (0000000140075460) ----------------------------------------------------
__int64            sub_140075460(float a1, float a2, float a3, float a4)
{
  unsigned int v6;
  float v7;
  unsigned int v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  unsigned int v14;
  unsigned int v15;

  if ( dword_140404A6C[70317864] )
  {
    v8 = dword_140404A6C[70318063];
    v6 = dword_140404A6C[70318062];
    v9 = *(float *)&dword_140404A6C[70318061];
    v7 = *(float *)&dword_140404A6C[70318060];
  }
  else
  {
    v6 = dword_140404A6C[438291414];
    v7 = 0.0;
    v8 = dword_140404A6C[438291415];
    v9 = 0.0;
    dword_140404A6C[70318060] = 0;
    dword_140404A6C[70318061] = 0;
    dword_140404A6C[70318062] = dword_140404A6C[438291414];
    dword_140404A6C[70318063] = dword_140404A6C[438291415];
  }
  v10 = fmaxf(v7, a1);
  v11 = fminf(*(float *)&v6 + v7, a1 + a3);
  v12 = fmaxf(v9, a2);
  v13 = fminf(*(float *)&v8 + v9, a2 + a4);
  if ( v10 > v11 || v12 > v13 )
    return 0;
  *(float *)&dword_140404A6C[70318060] = v10;
  *(float *)&dword_140404A6C[70318061] = v12;
  *(float *)&v14 = v11 - v10;
  *(float *)&v15 = v13 - v12;
  dword_140404A6C[70318062] = v14;
  dword_140404A6C[70318063] = v15;
  *(float *)&dword_140404A6C[4 * dword_140404A6C[70317864] + 70317865] = v10;
  dword_140404A6C[4 * dword_140404A6C[70317864] + 70317867] = v14;
  *(float *)&dword_140404A6C[4 * dword_140404A6C[70317864] + 70317866] = v12;
  dword_140404A6C[4 * dword_140404A6C[70317864] + 70317868] = v15;
  if ( ++dword_140404A6C[70317864] == 1 )
    (*(void (           **)(__int64))&dword_140404A6C[18215103])(3089);
  sub_14007B7E0(
    *(float *)&dword_140404A6C[70318060],
    *(float *)&dword_140404A6C[70318061],
    *(float *)&dword_140404A6C[70318062],
    *(float *)&dword_140404A6C[70318063]);
  return 1;
}

//----- (00000001400755F0) ----------------------------------------------------
__int64            sub_1400755F0(float a1, float a2)
{
  __int64 result;

  result = (int)dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    result = (int)dword_140404A6C[70317962];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  *(float *)&dword_140404A6C[70087070] = a2;
  *(float *)&dword_140404A6C[70087069] = a1;
  return result;
}

//----- (0000000140075930) ----------------------------------------------------
signed int *           sub_140075930(int a1, float a2)
{
  __int64 v2;
  signed int v3;
  signed int v4;
  int v5;
  int v6;
  signed int *result;

  v2 = 122LL * a1;
  v3 = dword_140404A6C[v2 + 70087218];
  v4 = dword_140404A6C[v2 + 70087217];
  v5 = (int)(float)((float)((float)((float)(a2 - (float)(*(float *)&dword_140404A6C[v2 + 70087220] * 0.5))
                                  / (float)(*(float *)&dword_140404A6C[v2 + 70087127]
                                          - *(float *)&dword_140404A6C[v2 + 70087220]))
                          * fmaxf((float)(v3 - v4), 1.0))
                  + 0.5);
  if ( LOBYTE(dword_140404A6C[70317069]) )
  {
    v6 = dword_140404A6C[v2 + 70087219];
    if ( v6 )
      v5 = (v6 >> 1) + v5 - ((v6 >> 1) + v5) % v6;
  }
  if ( v4 + v5 >= v4 )
    v4 += v5;
  result = *(signed int **)&dword_140404A6C[v2 + 70087215];
  if ( v4 <= v3 )
    v3 = v4;
  *result = v3;
  return result;
}

//----- (0000000140075A40) ----------------------------------------------------
__int64            sub_140075A40(int a1, float a2, double a3)
{
  unsigned int v3;
  double v4;
  __int64 v5;
  __int64 v6;
  unsigned int *v7;
  unsigned int v8;
  char *v9;
  unsigned int *v10;
  char v11;
  unsigned __int64 v12;
  signed int v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  signed int v22;
  int v23;
  _BYTE *v24;
  char *v25;
  char v26;
  unsigned int v27;
  char *v28;
  char v29;
  __int64 v30;
  unsigned int v31;
  float *v32;
  float v33;
  float v34;
  __int64 result;
  signed int *v36;
  signed int v37;
  signed int v38;
  _BYTE *v39;
  char v40;

  v3 = 0;
  v4 = a3;
  v5 = a1;
  dword_140404A6C[70318064] = 1;
  if ( dword_140404A6C[70087108] == a1 )
  {
    if ( dword_140404A6C[70317817] )
    {
      if ( dword_140404A6C[70317856] )
      {
        v16 = dword_140404A6C[70318065];
      }
      else
      {
        v16 = sub_140074C50(a1, a2);
        dword_140404A6C[70318065] = v16;
      }
      v17 = sub_140074C50(v5, a2);
      dword_140404A6C[70318066] = v17;
    }
    else
    {
      v17 = dword_140404A6C[70318066];
      v16 = dword_140404A6C[70318065];
    }
    v7 = &dword_140404A6C[70318069];
    if ( v16 < 0 )
      v16 = 0;
    v18 = -1;
    dword_140404A6C[70318065] = v16;
    do
      ++v18;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v18) );
    if ( v16 > v18 )
      v16 = v18;
    dword_140404A6C[70318065] = v16;
    v19 = -1;
    if ( v17 < 0 )
      v17 = 0;
    dword_140404A6C[70318066] = v17;
    do
      ++v19;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v19) );
    if ( v17 > v19 )
      v17 = v19;
    dword_140404A6C[70318066] = v17;
    v20 = sub_140075FE0();
    if ( v20 != -1 )
    {
      while ( v20 != 11 && v20 != 1 )
      {
        if ( v20 < 32 )
        {
          if ( v20 == 9 )
          {
            if ( !(unsigned int)sub_1400722C0() )
            {
              v25 = (char *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066];
              if ( *v25 )
              {
                do
                {
                  v26 = v25[1];
                  *v25++ = v26;
                }
                while ( v26 );
              }
            }
          }
          else if ( v20 == 10 && !(unsigned int)sub_1400722C0() )
          {
            v27 = dword_140404A6C[70318066];
            if ( (int)dword_140404A6C[70318066] > 0 )
            {
              v28 = (char *)&dword_140404A6C[70318068] + dword_140404A6C[70318066] + 3;
              if ( *v28 )
              {
                do
                {
                  v29 = v28[1];
                  *v28++ = v29;
                }
                while ( v29 );
                v27 = dword_140404A6C[70318066];
              }
              dword_140404A6C[70318066] = v27 - 1;
              dword_140404A6C[70318065] = v27 - 1;
            }
          }
        }
        else
        {
          sub_1400722C0();
          v21 = -1;
          do
            ++v21;
          while ( *((_BYTE *)&dword_140404A6C[70318069] + v21) );
          if ( v21 < (int)dword_140404A6C[70318068] )
          {
            v22 = dword_140404A6C[70318066];
            if ( (int)dword_140404A6C[70318066] < 0x2000 )
            {
              if ( dword_140404A6C[70318067] )
              {
                if ( !*((_BYTE *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066]) )
                {
                  *((_BYTE *)&dword_140404A6C[70318069] + dword_140404A6C[70318066] + 1) = 0;
                  v22 = dword_140404A6C[70318066];
                }
              }
              else
              {
                v23 = v21 + 1;
                if ( (int)v21 + 1 > (int)dword_140404A6C[70318066] )
                {
                  v24 = (char *)&dword_140404A6C[70318069] + v23;
                  do
                  {
                    --v23;
                    *v24 = *(v24 - 1);
                    --v24;
                    v22 = dword_140404A6C[70318066];
                  }
                  while ( v23 > (int)dword_140404A6C[70318066] );
                }
              }
              *((_BYTE *)&dword_140404A6C[70318069] + v22) = v20;
              dword_140404A6C[70318065] = ++dword_140404A6C[70318066];
            }
          }
        }
        v20 = sub_140075FE0();
        if ( v20 == -1 )
          goto LABEL_75;
      }
      dword_140404A6C[70087106] = -1;
      v3 = 1;
      if ( v20 != 11 )
        v3 = -1;
    }
  }
  else
  {
    v6 = 122LL * a1;
    v7 = &dword_140404A6C[70318069];
    v8 = dword_140404A6C[122 * v5 + 70087115];
    if ( v8 == 4 )
    {
      a3 = **(float **)&dword_140404A6C[v6 + 70087217];
      crt_sprintf(&dword_140404A6C[70318069], "%.3f", a3);
    }
    else if ( v8 == 5 )
    {
      crt_sprintf(&dword_140404A6C[70318069], "%d", **(_DWORD **)&dword_140404A6C[v6 + 70087217]);
    }
    else
    {
      v9 = *(char **)&dword_140404A6C[v6 + 70087215];
      v10 = &dword_140404A6C[70318069];
      do
      {
        v11 = *v9++;
        *(_BYTE *)v10 = v11;
        v10 = (unsigned int *)((char *)v10 + 1);
      }
      while ( v11 );
    }
    v12 = -1;
    if ( !dword_140404A6C[70317817] || dword_140404A6C[70317856] )
    {
      v13 = 0;
      dword_140404A6C[70318065] = 0;
      v14 = -1;
      do
        ++v14;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v14) );
      dword_140404A6C[70318066] = v14;
    }
    else
    {
      a3 = v4;
      dword_140404A6C[70318065] = sub_140074C50(v5, a2);
      v13 = dword_140404A6C[70318065];
      dword_140404A6C[70318066] = dword_140404A6C[70318065];
      LODWORD(v14) = dword_140404A6C[70318065];
      if ( (dword_140404A6C[70318065] & 0x80000000) != 0 )
      {
        v13 = 0;
        dword_140404A6C[70318065] = 0;
      }
    }
    v15 = -1;
    do
      ++v15;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v15) );
    if ( v13 > v15 )
      v13 = v15;
    dword_140404A6C[70318065] = v13;
    if ( (int)v14 < 0 )
      LODWORD(v14) = 0;
    dword_140404A6C[70318066] = v14;
    do
      ++v12;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v12) );
    if ( (int)v14 > v12 )
      dword_140404A6C[70318066] = v12;
  }
LABEL_75:
  v30 = 122 * v5;
  v31 = dword_140404A6C[122 * v5 + 70087115];
  if ( v31 == 4 )
  {
    crt_sscanf((__int64)&dword_140404A6C[70318069], "%f", a3);
    v32 = *(float **)&dword_140404A6C[v30 + 70087217];
    v33 = *(float *)&dword_140404A6C[v30 + 70087219];
    if ( v33 > *v32 )
    {
      *v32 = v33;
      v32 = *(float **)&dword_140404A6C[v30 + 70087217];
    }
    v34 = *(float *)&dword_140404A6C[v30 + 70087220];
    result = v3;
    if ( v34 < *v32 )
      *v32 = v34;
  }
  else
  {
    if ( v31 == 5 )
    {
      crt_sscanf((__int64)&dword_140404A6C[70318069], "%d", *(_QWORD *)&dword_140404A6C[v30 + 70087217]);
      v36 = *(signed int **)&dword_140404A6C[v30 + 70087217];
      v37 = dword_140404A6C[v30 + 70087219];
      if ( *v36 < v37 )
      {
        *v36 = v37;
        v36 = *(signed int **)&dword_140404A6C[v30 + 70087217];
      }
      v38 = dword_140404A6C[v30 + 70087220];
      if ( *v36 > v38 )
      {
        *v36 = v38;
        return v3;
      }
    }
    else
    {
      v39 = *(_BYTE **)&dword_140404A6C[v30 + 70087215];
      do
      {
        v40 = *(_BYTE *)v7;
        v7 = (unsigned int *)((char *)v7 + 1);
        *v39++ = v40;
      }
      while ( v40 );
    }
    return v3;
  }
  return result;
}

//----- (0000000140075FE0) ----------------------------------------------------
int sub_140075FE0()
{
  unsigned int v0;
  __int64 v1;
  int v2;
  int v3;
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned __int64 v11;
  int v12;

  v0 = dword_140404A6C[70318067];
  LODWORD(v1) = dword_140404A6C[70318066];
  v2 = 0;
  v3 = dword_140404A6C[70318065];
  v4 = dword_140404A6C[468760166];
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v5 = -1;
            if ( v3 < 0 )
              v3 = 0;
            dword_140404A6C[70318065] = v3;
            do
              ++v5;
            while ( *((_BYTE *)&dword_140404A6C[70318069] + v5) );
            if ( v3 > v5 )
              v3 = v5;
            dword_140404A6C[70318065] = v3;
            v6 = -1;
            if ( (int)v1 < 0 )
              LODWORD(v1) = 0;
            dword_140404A6C[70318066] = v1;
            do
              ++v6;
            while ( *((_BYTE *)&dword_140404A6C[70318069] + v6) );
            if ( (int)v1 > v6 )
              LODWORD(v1) = v6;
            dword_140404A6C[70318066] = v1;
            if ( v4 == dword_140404A6C[468760165] )
              return -1;
            v7 = v4;
            v4 = ((_WORD)v4 + 1) & 0x3FF;
            v8 = 5 * v7;
            dword_140404A6C[468760166] = v4;
            if ( !dword_140404A6C[5 * v7 + 468760167] )
            {
              v9 = dword_140404A6C[v8 + 468760168];
              v10 = dword_140404A6C[v8 + 468760170] & 3;
              if ( v9 == 76 )
                return 9;
              if ( v9 == 42 )
                return 10;
              if ( v9 != 225 )
                break;
            }
          }
          switch ( v9 )
          {
            case '(':
              return 11;
            case ')':
              return 1;
            case '+':
              LOBYTE(v2) = v10 != 0;
              return v2 + 12;
          }
          if ( v9 != 73 )
            break;
          v0 ^= 1u;
          dword_140404A6C[70318067] = v0;
        }
        if ( v9 != 74 )
          break;
        LODWORD(v1) = 0;
        dword_140404A6C[70318066] = 0;
        if ( !v10 )
          v3 = 0;
      }
      if ( v9 == 77 )
      {
        v1 = -1;
        do
          ++v1;
        while ( *((_BYTE *)&dword_140404A6C[70318069] + v1) );
        goto LABEL_39;
      }
      if ( v9 != 80 )
        break;
      if ( (int)v1 > 0 )
      {
        LODWORD(v1) = v1 - 1;
LABEL_39:
        dword_140404A6C[70318066] = v1;
      }
LABEL_40:
      if ( !v10 )
        v3 = v1;
    }
    if ( v9 == 79 )
    {
      v11 = -1;
      do
        ++v11;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v11) );
      if ( (int)v1 >= v11 )
        goto LABEL_40;
      LODWORD(v1) = v1 + 1;
      goto LABEL_39;
    }
    v12 = dword_140404A6C[v8 + 468760169];
  }
  while ( v12 < 32 || v12 > 122 );
  if ( v10 )
  {
    if ( (unsigned int)(v12 - 97) <= 0x19 )
      return toupper(v12);
    switch ( v12 )
    {
      case '0':
        return 41;
      case '1':
        return 33;
      case '2':
        return 64;
      case '3':
        return 35;
      case '4':
        return 36;
      case '5':
        return 37;
      case '6':
        return 94;
      case '7':
        return 38;
      case '8':
        return 42;
      case '9':
        return 40;
      case '-':
        return 95;
      case '=':
        return 43;
      case '/':
        return 63;
      case ',':
        return 60;
      case '.':
        return 62;
      case ';':
        return 58;
      case '\'':
        return 34;
    }
  }
  return v12;
}

//----- (0000000140076320) ----------------------------------------------------
void            sub_140076320(__int64 a1, int a2)
{
  char v2;
  unsigned __int64 v3;
  signed int v4;
  int v5;
  _BYTE *v6;
  char *v7;
  char v8;
  unsigned int v9;
  char *v10;
  char v11;

  v2 = a2;
  if ( a2 < 32 )
  {
    if ( a2 == 9 )
    {
      if ( !(unsigned int)sub_1400722C0() )
      {
        v7 = (char *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066];
        if ( *v7 )
        {
          do
          {
            v8 = v7[1];
            *v7++ = v8;
          }
          while ( v8 );
        }
      }
    }
    else if ( a2 == 10 && !(unsigned int)sub_1400722C0() )
    {
      v9 = dword_140404A6C[70318066];
      if ( (int)dword_140404A6C[70318066] > 0 )
      {
        v10 = (char *)&dword_140404A6C[70318068] + dword_140404A6C[70318066] + 3;
        if ( *v10 )
        {
          do
          {
            v11 = v10[1];
            *v10++ = v11;
          }
          while ( v11 );
          v9 = dword_140404A6C[70318066];
        }
        dword_140404A6C[70318066] = v9 - 1;
        dword_140404A6C[70318065] = v9 - 1;
      }
    }
  }
  else
  {
    sub_1400722C0();
    v3 = -1;
    do
      ++v3;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v3) );
    if ( v3 < (int)dword_140404A6C[70318068] )
    {
      v4 = dword_140404A6C[70318066];
      if ( (int)dword_140404A6C[70318066] < 0x2000 )
      {
        if ( dword_140404A6C[70318067] )
        {
          if ( !*((_BYTE *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066]) )
          {
            *((_BYTE *)&dword_140404A6C[70318069] + dword_140404A6C[70318066] + 1) = 0;
            v4 = dword_140404A6C[70318066];
          }
        }
        else
        {
          v5 = v3 + 1;
          if ( (int)v3 + 1 > (int)dword_140404A6C[70318066] )
          {
            v6 = (char *)&dword_140404A6C[70318069] + v5;
            do
            {
              --v5;
              *v6 = *(v6 - 1);
              --v6;
              v4 = dword_140404A6C[70318066];
            }
            while ( v5 > (int)dword_140404A6C[70318066] );
          }
        }
        *((_BYTE *)&dword_140404A6C[70318069] + v4) = v2;
        dword_140404A6C[70318065] = ++dword_140404A6C[70318066];
      }
    }
  }
}

//----- (00000001400779F0) ----------------------------------------------------
__int64            sub_1400779F0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  extern int collision_line_plane(float *point, const float *normal, float *t, const float *from, const float *to,
                                  const float *plane_point);
  /* src/engine/collision.c */
  return collision_line_plane(a1, a2, a3, a4, a5, a6);
}

//----- (0000000140077B30) ----------------------------------------------------
__int64            sub_140077B30(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v6;
  float v7;
  float v8;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;

  v6 = a6[2];
  v7 = (float)((float)((float)(*a6 - *a4) * *a2) + (float)((float)(a6[1] - a4[1]) * a2[1]))
     + (float)((float)(v6 - a4[2]) * a2[2]);
  v8 = (float)((float)((float)(a6[1] - a5[1]) * a2[1]) + (float)((float)(*a6 - *a5) * *a2))
     + (float)((float)(v6 - a5[2]) * a2[2]);
  if ( v7 <= 0.0 )
  {
    if ( v7 < 0.0 && v8 < 0.0 )
      return 0;
  }
  else if ( v8 > 0.0 )
  {
    return 0;
  }
  *a3 = v7;
  v10 = *a5 - *a4;
  v11 = a5[1] - a4[1];
  v12 = a5[2] - a4[2];
  v13 = (float)((float)(v11 * a2[1]) + (float)(v10 * *a2)) + (float)(v12 * a2[2]);
  if ( v13 == 0.0 )
    return 0;
  v14 = v7 / v13;
  *a3 = v14;
  *a1 = (float)(v14 * v10) + *a4;
  a1[1] = (float)(v14 * v11) + a4[1];
  a1[2] = (float)(v14 * v12) + a4[2];
  return 1;
}

//----- (0000000140077C80) ----------------------------------------------------
_BOOL8            sub_140077C80(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9)
{
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

  if ( !(unsigned int)sub_1400779F0(a1, a2, a3, a4, a5, a6) )
    return 0;
  v11 = a6[1];
  v12 = a6[2];
  v13 = *a6;
  v14 = a1[1];
  v15 = a1[2];
  v16 = *a1;
  v17 = a2[1];
  v18 = *a2;
  if ( (float)((float)((float)((float)((float)((float)(v14 - v11) * (float)(a7[2] - v12))
                                     - (float)((float)(v15 - v12) * (float)(a7[1] - v11)))
                             * *a2)
                     + (float)((float)((float)((float)(v15 - v12) * (float)(*a7 - v13))
                                     - (float)((float)(*a1 - v13) * (float)(a7[2] - v12)))
                             * v17))
             + (float)((float)((float)((float)(*a1 - v13) * (float)(a7[1] - v11))
                             - (float)((float)(v14 - v11) * (float)(*a7 - v13)))
                     * a2[2])) < 0.0 )
    return 0;
  v19 = a8[1] - a7[1];
  v20 = a8[2] - a7[2];
  if ( (float)((float)((float)((float)((float)((float)(v14 - a7[1]) * v20) - (float)((float)(v15 - a7[2]) * v19)) * v18)
                     + (float)((float)((float)((float)(v15 - a7[2]) * (float)(*a8 - *a7))
                                     - (float)((float)(v16 - *a7) * v20))
                             * v17))
             + (float)((float)((float)((float)(v16 - *a7) * v19) - (float)((float)(v14 - a7[1]) * (float)(*a8 - *a7)))
                     * a2[2])) < 0.0 )
    return 0;
  v21 = v14 - a8[1];
  v22 = v16 - *a8;
  v23 = a9[2] - a8[2];
  v24 = a9[1] - a8[1];
  v25 = (float)(v21 * v23) - (float)((float)(v15 - a8[2]) * v24);
  v26 = v22 * v23;
  v27 = a2[2];
  return (float)((float)((float)(v25 * v18)
                       + (float)((float)((float)((float)(v15 - a8[2]) * (float)(*a9 - *a8)) - v26) * v17))
               + (float)((float)((float)(v22 * v24) - (float)(v21 * (float)(*a9 - *a8))) * v27)) >= 0.0
      && (float)((float)((float)((float)((float)((float)(v14 - a9[1]) * (float)(v12 - a9[2]))
                                       - (float)((float)(v15 - a9[2]) * (float)(v11 - a9[1])))
                               * v18)
                       + (float)((float)((float)((float)(v15 - a9[2]) * (float)(v13 - *a9))
                                       - (float)((float)(v16 - *a9) * (float)(v12 - a9[2])))
                               * v17))
               + (float)((float)((float)((float)(v16 - *a9) * (float)(v11 - a9[1]))
                               - (float)((float)(v14 - a9[1]) * (float)(v13 - *a9)))
                       * v27)) >= 0.0;
}

//----- (0000000140078230) ----------------------------------------------------
_BOOL8            sub_140078230(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
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

  if ( !(unsigned int)sub_140077B30(a1, a2, a3, a4, a5, a6) )
    return 0;
  v10 = a6[1];
  v11 = a6[2];
  v12 = *a6;
  v13 = a1[1];
  v14 = a1[2];
  v15 = *a1;
  if ( (float)((float)((float)((float)((float)((float)(v13 - v10) * (float)(a7[2] - v11))
                                     - (float)((float)(v14 - v11) * (float)(a7[1] - v10)))
                             * *a2)
                     + (float)((float)((float)((float)(v14 - v11) * (float)(*a7 - v12))
                                     - (float)((float)(*a1 - v12) * (float)(a7[2] - v11)))
                             * a2[1]))
             + (float)((float)((float)((float)(*a1 - v12) * (float)(a7[1] - v10))
                             - (float)((float)(v13 - v10) * (float)(*a7 - v12)))
                     * a2[2])) < 0.0 )
    return 0;
  v16 = v13 - a7[1];
  v17 = a8[2] - a7[2];
  v19 = v14 - a7[2];
  v20 = *a8 - *a7;
  v22 = a8[1] - a7[1];
  v23 = v19 * v20;
  v24 = (float)(v16 * v17) - (float)(v19 * v22);
  v25 = v15 - *a7;
  v26 = v25 * v22;
  v27 = a2[2];
  v28 = v25 * v17;
  v29 = a2[1];
  if ( (float)((float)((float)(v24 * *a2) + (float)((float)(v23 - v28) * v29))
             + (float)((float)(v26 - (float)(v16 * v20)) * v27)) < 0.0 )
    return 0;
  v21 = a8[1];
  v18 = *a8;
  return (float)((float)((float)((float)((float)((float)(v13 - v21) * (float)(v11 - a8[2]))
                                       - (float)((float)(v14 - a8[2]) * (float)(v10 - v21)))
                               * *a2)
                       + (float)((float)((float)((float)(v14 - a8[2]) * (float)(v12 - v18))
                                       - (float)((float)(v15 - v18) * (float)(v11 - a8[2])))
                               * v29))
               + (float)((float)((float)((float)(v15 - v18) * (float)(v10 - v21))
                               - (float)((float)(v13 - v21) * (float)(v12 - v18)))
                       * v27)) >= 0.0;
}

//----- (0000000140079840) ----------------------------------------------------
__int64            sub_140079840(char *a1)
{
  __int64 result;
  unsigned __int8 *v2;
  int v3;
  signed int v4;
  int v5;
  signed int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;

  result = sub_140170C30(a1, (int *)&dword_140404A6C[468765293], (int *)&dword_140404A6C[468765294], &v17, 0);
  v2 = (unsigned __int8 *)result;
  if ( result )
  {
    v3 = dword_140404A6C[468765293];
    if ( (int)dword_140404A6C[468765293] > 4096
      || (v4 = dword_140404A6C[468765294], (int)dword_140404A6C[468765294] > 4096)
      || (v5 = v17, v17 - 1 > 3) )
    {
      free((void *)result);
      return 0;
    }
    else
    {
      v6 = 0;
      v7 = v17 * dword_140404A6C[468765293];
      v17 *= dword_140404A6C[468765293];
      if ( (int)dword_140404A6C[468765294] > 0 )
      {
        v8 = 0;
        do
        {
          v9 = 0;
          if ( v3 > 0 )
          {
            v10 = v8;
            v11 = v8;
            do
            {
              v12 = v2[v11];
              if ( v5 <= 1 )
              {
                v13 = v2[v11];
                v14 = v13;
              }
              else
              {
                v13 = v2[v11 + 1];
                v14 = v2[v11 + 2];
              }
              if ( v5 == 4 )
                v15 = v2[v10 + 3];
              else
                v15 = 255;
              v11 += v5;
              v10 += 4;
              v16 = v9 + v3 * (v4 - v6 - 1);
              ++v9;
              dword_140404A6C[v16 + 468765295] = (v15 << 24) + v12 + (v14 << 16) + (v13 << 8);
              v3 = dword_140404A6C[468765293];
              v4 = dword_140404A6C[468765294];
            }
            while ( v9 < (int)dword_140404A6C[468765293] );
            v7 = v17;
          }
          ++v6;
          v8 += v7;
        }
        while ( v6 < v4 );
      }
      free(v2);
      return 1;
    }
  }
  return result;
}

//----- (0000000140079AA0) ----------------------------------------------------
__int64            sub_140079AA0(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v8;
  __int64 result;
  __int64 v12;
  void **v13;
  signed int v14;
  signed int i;
  __int64 v16;
  signed int v17;
  signed int v18;
  void **v19;
  signed int j;

  v8 = a1;
  result = sub_140079840(a2);
  if ( (_DWORD)result )
  {
    v12 = 42 * v8;
    dword_140404A6C[v12 + 436582477] = dword_140404A6C[468765293];
    dword_140404A6C[v12 + 436582478] = dword_140404A6C[468765294];
    dword_140404A6C[v12 + 436582482] = a4;
    dword_140404A6C[v12 + 436582483] = a5;
    v13 = (void **)&dword_140404A6C[42 * v8 + 436582487];
    dword_140404A6C[v12 + 436582484] = a6;
    dword_140404A6C[v12 + 436582485] = a7;
    dword_140404A6C[v12 + 436582479] = 1;
    dword_140404A6C[v12 + 436582480] = 6408;
    dword_140404A6C[v12 + 436582481] = 6408;
    free(*v13);
    *v13 = (void *)sr_path_malloc((int)(4 * dword_140404A6C[42 * v8 + 436582477] * dword_140404A6C[42 * v8 + 436582478]));
    v14 = 0;
    if ( (int)dword_140404A6C[42 * v8 + 436582478] > 0 )
    {
      do
      {
        for ( i = 0; i < (int)dword_140404A6C[v12 + 436582477]; *((_DWORD *)*v13 + v17) = dword_140404A6C[v16 + 468765295] )
        {
          v16 = i + v14 * dword_140404A6C[468765293];
          v17 = i + v14 * dword_140404A6C[v12 + 436582477];
          ++i;
        }
        ++v14;
      }
      while ( v14 < (int)dword_140404A6C[v12 + 436582478] );
    }
    qword_140404050(3553, dword_140404A6C[v12 + 436582486]);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10242,
      dword_140404A6C[v12 + 436582482]);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10243,
      dword_140404A6C[v12 + 436582483]);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10240,
      dword_140404A6C[v12 + 436582484]);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10241,
      dword_140404A6C[v12 + 436582485]);
    v18 = 0;
    if ( (int)dword_140404A6C[v12 + 436582479] > 0 )
    {
      v19 = v13;
      do
      {
        (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, unsigned int, int, void *))&dword_140404A6C[18215083])(
          3553,
          (unsigned int)v18,
          dword_140404A6C[v12 + 436582481],
          (unsigned int)((int)dword_140404A6C[v12 + 436582477] >> v18),
          (int)dword_140404A6C[v12 + 436582478] >> v18,
          0,
          dword_140404A6C[v12 + 436582480],
          5121,
          *v19);
        ++v18;
        ++v19;
      }
      while ( v18 < (int)dword_140404A6C[v12 + 436582479] );
    }
    if ( a3 )
      unk_140404738(3553);
    if ( a8 )
    {
      for ( j = 0; j < (int)dword_140404A6C[v12 + 436582479]; ++v13 )
      {
        if ( *v13 )
        {
          free(*v13);
          *v13 = nullptr;
        }
        ++j;
      }
    }
    return 1;
  }
  return result;
}

//----- (0000000140079D60) ----------------------------------------------------
__int64            sub_140079D60(_OWORD *a1, __int64 a2, float *a3)
{
  extern void math_mat4_multiply_vec4(float out[4], const float m[16], const float v[4]);
  math_mat4_multiply_vec4((float *)a1, (const float *)a2, a3);
  return 0;
}
#undef v14
#undef v15

//----- (0000000140079F00) ----------------------------------------------------
__int64            sub_140079F00(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  extern void math_mat4_ortho(float out[16], float left, float right, float bottom, float top,
                              float z_near, float z_far);
  math_mat4_ortho((float *)a1, a2, a3, a4, a5, a6, a7);
  return 0;
}

//----- (000000014007A240) ----------------------------------------------------
__int64            sub_14007A240(__int64 a1, float *a2)
{
  /* Clean implementation: src/engine/math3d.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void math_vec3_normalize(float out[3], const float v[3]);
  math_vec3_normalize((float *)a1, a2);
  return 0;
}

//----- (000000014007A2C0) ----------------------------------------------------
__int64            sub_14007A2C0(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  extern void camera_begin_orthographic(int x, int y, int width, int height,
                                        float half_width, float half_height, float half_depth);
  camera_begin_orthographic(a1, a2, a3, a4, a5, a6, a7);
  return 0;
}

//----- (000000014007ABA0) ----------------------------------------------------
float            sub_14007ABA0(float *a1, float *a2, float *a3)
{
  extern float math_point_segment_distance(const float a[3], const float b[3], const float p[3]);
  return math_point_segment_distance(a1, a2, a3);
}

//----- (000000014007ADF0) ----------------------------------------------------
__int64            sub_14007ADF0(__m128i *a1, int a2, int a3)
{
  signed int v3;
  int v4;

  v3 = dword_140404A6C[289317484];
  if ( (int)dword_140404A6C[289317484] >= 0x10000 )
    return 0;
  v4 = a3 * a2;
  if ( (signed int)(a3 * a2 + dword_140404A6C[289317484]) > (int)dword_140404A6C[289317483] )
    return 0;
  if ( (int)dword_140404A6C[289317485] > 0 )
  {
    v3 = dword_140404A6C[289317484] + 1;
    dword_140404A6C[289317485] = 0;
    ++dword_140404A6C[289317484];
  }
  crt_memcpy(a1, (     __m128i *)((char *)&dword_140404A6C[289317486] + v3), v4);
  dword_140404A6C[289317484] += v4;
  return 1;
}

// 14007AE70: returning address of temporary local variable '%__return_address'

//----- (000000014007B0F0) ----------------------------------------------------
void            sub_14007B0F0(float *a1, float *a2, float *a3)
{
  extern void math_vec3_multiply_mat3(float out[3], const float v[3], const float m[9]);
  math_vec3_multiply_mat3(a1, a2, a3);
}

//----- (000000014007B180) ----------------------------------------------------
__int64            sub_14007B180(     __m128i *a1, int a2, int a3)
{
  signed int v3;
  int v5;

  v3 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[289301092] >= 0x10000 )
    return 0;
  if ( (int)dword_140404A6C[289301093] > 0 )
  {
    v3 = dword_140404A6C[289301092] + 1;
    dword_140404A6C[289301093] = 0;
    ++dword_140404A6C[289301092];
  }
  v5 = a3 * a2;
  crt_memcpy((__m128i *)((char *)&dword_140404A6C[289301094] + v3), a1, a3 * a2);
  dword_140404A6C[289301092] += v5;
  return 1;
}

//----- (000000014007B4D0) ----------------------------------------------------
void            sub_14007B4D0(float *a1, float *a2, double a3)
{
  extern void math_vec3_rotate(float v[3], const float axis[3], float angle);
  math_vec3_rotate(a1, a2, *(float *)&a3);
}

//----- (000000014007B6F0) ----------------------------------------------------
__int64            sub_14007B6F0(float a1, float a2, float a3)
{
  extern void camera_scale_model(float x, float y, float z);
  camera_scale_model(a1, a2, a3);
  return 0;
}
#undef v4
#undef v5
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14

//----- (000000014007B7E0) ----------------------------------------------------
__int64            sub_14007B7E0(float a1, float a2, float a3, float a4)
{
  extern void camera_set_scissor(float x, float y, float width, float height);
  camera_set_scissor(a1, a2, a3, a4);
  return 0;
}

//----- (000000014007B990) ----------------------------------------------------
__int64            sub_14007B990(unsigned int *a1, _DWORD *a2)
{
  extern void camera_set_model(const float position[3], const float rotation[9]);
  camera_set_model((const float *)a1, (const float *)a2);
  return 0;
}
#undef v11
#undef v12
#undef v13
#undef v14

//----- (000000014007BB00) ----------------------------------------------------
double sub_14007BB00()
{
  extern void camera_begin_2d(void);
  camera_begin_2d();
  return 0.0;
}

//----- (000000014007BCB0) ----------------------------------------------------
void            sub_14007BCB0(int a1, int a2, int a3)
{
  __int64 v3;
  signed int v6;
  unsigned int *v7;
  signed int v8;
  void **v9;

  v3 = 42LL * a1;
  qword_140404050(3553, dword_140404A6C[v3 + 436582486]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10242,
    dword_140404A6C[v3 + 436582482]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10243,
    dword_140404A6C[v3 + 436582483]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10240,
    dword_140404A6C[v3 + 436582484]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10241,
    dword_140404A6C[v3 + 436582485]);
  v6 = 0;
  if ( (int)dword_140404A6C[v3 + 436582479] > 0 )
  {
    v7 = &dword_140404A6C[v3 + 436582487];
    do
    {
      (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, unsigned int, int, _QWORD))&dword_140404A6C[18215083])(
        3553,
        (unsigned int)v6,
        dword_140404A6C[v3 + 436582481],
        (unsigned int)((int)dword_140404A6C[v3 + 436582477] >> v6),
        (int)dword_140404A6C[v3 + 436582478] >> v6,
        0,
        dword_140404A6C[v3 + 436582480],
        5121,
        *(_QWORD *)v7);
      ++v6;
      v7 += 2;
    }
    while ( v6 < (int)dword_140404A6C[v3 + 436582479] );
  }
  if ( a2 )
    unk_140404738(3553);
  if ( a3 )
  {
    v8 = 0;
    if ( (int)dword_140404A6C[v3 + 436582479] > 0 )
    {
      v9 = (void **)&dword_140404A6C[v3 + 436582487];
      do
      {
        if ( *v9 )
        {
          free(*v9);
          *v9 = nullptr;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < (int)dword_140404A6C[v3 + 436582479] );
    }
  }
}

//----- (000000014007BE20) ----------------------------------------------------
__int64            sub_14007BE20(float *a1, unsigned int *a2)
{
  extern void camera_set_view(const float eye[3], const float rotation[9]);
  camera_set_view(a1, (const float *)a2);
  return 0;
}
#undef v6
#undef v12

//----- (000000014007C040) ----------------------------------------------------
int sub_14007C040()
{
  int result;

  if ( dword_140404A6C[137297774] )
  {
    result = sub_140199049();
    dword_140404A6C[137297774] = 0;
  }
  return result;
}

//----- (000000014007C080) ----------------------------------------------------
__int64            sub_14007C080(int a1)
{
  __int64 v1;
  __int64 result;

  v1 = 1048782LL * a1;
  result = closesocket_sr((int)dword_140404A6C[v1 + 112673944]);
  dword_140404A6C[v1 + 112673941] = 0;
  return result;
}

//----- (000000014007C3A0) ----------------------------------------------------
__int64            sub_14007C3A0(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int16 v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int8 v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  unsigned __int8 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  signed int v23;
  __int64 v24;
  signed int v25;
  __int16 v27;

  v2 = 16387LL * a2;
  v3 = a1;
  if ( (int)dword_140404A6C[v2 + 135184966] > 0 )
  {
    ++dword_140404A6C[v2 + 135184965];
    dword_140404A6C[v2 + 135184966] = 0;
  }
  v4 = (int)dword_140404A6C[v2 + 135184965];
  v5 = v4 + 2;
  if ( (int)v4 + 2 >= 0x10000 )
  {
    v7 = v27;
  }
  else
  {
    v6 = v2 * 4 + v4;
    LODWORD(v4) = v4 + 2;
    v7 = *(_WORD *)((char *)&dword_140404A6C[135184968] + v6);
    dword_140404A6C[v2 + 135184965] = v5;
  }
  v8 = v4 + 1;
  if ( (int)v4 + 1 >= 0x10000 )
  {
    v10 = v27;
  }
  else
  {
    v9 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = *((_BYTE *)&dword_140404A6C[v2 + 135184968] + v9);
    dword_140404A6C[v2 + 135184965] = v8;
  }
  v11 = v10;
  v12 = v4 + 1;
  if ( (int)v4 + 1 < 0x10000 )
  {
    v13 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = *((_BYTE *)&dword_140404A6C[v2 + 135184968] + v13);
    dword_140404A6C[v2 + 135184965] = v12;
  }
  v14 = v10;
  if ( v11 >= 0x10 || v10 > 0x10u )
    return 0;
  LODWORD(v15) = -1;
  v16 = 1048782 * v3;
  v17 = dword_140404A6C[1048782 * v3 + 112673953];
  v18 = dword_140404A6C[1048782 * v3 + 112673954];
  while ( v17 != v18 )
  {
    if ( LOWORD(dword_140404A6C[16387 * v17 + 112673955 + v16]) == v7 )
      LODWORD(v15) = v17;
    else
      v17 = ((_BYTE)v17 + 1) & 0x3F;
    if ( (_DWORD)v15 != -1 )
      goto LABEL_22;
  }
  v15 = (int)dword_140404A6C[v16 + 112673954];
  v19 = v16 * 4 + 65548 * v15;
  *(_WORD *)((char *)&dword_140404A6C[112673955] + v19) = v7;
  *(_QWORD *)((char *)&dword_140404A6C[112673956] + v19) = 0;
  v20 = dword_140404A6C[v16 + 112673953];
  LODWORD(v19) = ((unsigned __int8)dword_140404A6C[v16 + 112673954] + 1) & 0x3F;
  dword_140404A6C[v16 + 112673954] = v19;
  if ( v20 == (_DWORD)v19 )
    dword_140404A6C[v16 + 112673953] = ((_BYTE)v20 + 1) & 0x3F;
LABEL_22:
  v21 = dword_140404A6C[v2 + 135184967] - v4;
  v22 = 16387LL * (int)v15;
  crt_memcpy(
    (__m128i *)&dword_140404A6C[350 * v11 + 112673958 + v22 + v16],
    (     __m128i *)((char *)&dword_140404A6C[v2 + 135184968] + (int)v4),
    v21);
  v23 = 1400 * v11 + v21;
  v24 = v16 * 4 + v22 * 4;
  v25 = dword_140404A6C[v16 + 112673957 + v22];
  if ( v25 < v23 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[112673957] + v24) = v23;
    v25 = 1400 * v11 + v21;
  }
  *(unsigned int *)((char *)&dword_140404A6C[112673956] + v24) |= 1 << v11;
  if ( (*(unsigned int *)((char *)&dword_140404A6C[112673956] + v24) & ((1 << v14) - 1)) != (1 << v14) - 1 )
    return 0;
  dword_140404A6C[v2 + 135184967] = v25;
  *(_QWORD *)&dword_140404A6C[v2 + 135184965] = 4;
  crt_memcpy(
    (__m128i *)&dword_140404A6C[v2 + 135184968],
    (     __m128i *)((char *)&dword_140404A6C[112673958] + v24),
    v25);
  return dword_140404A6C[v2 + 135184967];
}

// 14007C40F: conditional instruction was optimized away because edx.4<1
// 14007C465: conditional instruction was optimized away because edx.4<1

//----- (000000014007C920) ----------------------------------------------------
_BYTE *sub_14007C920(_BYTE *a1, _BYTE *a2, ...)
{
  va_list va;

  va_start(va, a2);
  sub_14006E530(a1, a2, 1024, (__int64)va);
  return a1;
}

//----- (000000014007C980) ----------------------------------------------------
__int64 sub_14007C980()
{
  __int64 PerformanceCount;

  if ( !dword_140404A6C[137297775] )
    return 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  return 1000 * (PerformanceCount - *(_QWORD *)&dword_140404A6C[137297779]) / *(_QWORD *)&dword_140404A6C[137297777];
}

//----- (000000014007CA00) ----------------------------------------------------
void            sub_14007CA00(_DWORD *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = *a2;
  v3 = a2[3];
  v4 = a2[4];
  v5 = a2[6];
  v6 = a2[7];
  v7 = a2[8];
  v8 = a2[5];
  v9 = a2[1];
  a1[6] = a2[2];
  a1[3] = v9;
  a1[7] = v8;
  *a1 = v2;
  a1[1] = v3;
  a1[2] = v5;
  a1[4] = v4;
  a1[5] = v6;
  a1[8] = v7;
}

//----- (000000014007D0B0) ----------------------------------------------------
__int64            sub_14007D0B0(int *a1, unsigned __int16 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v2 = a1[1];
  v3 = dword_1402B3840[a2];
  v4 = dword_1402B3840[(unsigned __int16)(a2 + 0x4000)];
  v5 = v3 * *a1 + 0x8000;
  *a1 = ((v4 * *a1 + 0x8000) >> 16) + ((v3 * -(int)v2 + 0x8000) >> 16);
  result = (unsigned int)(v5 >> 16) + (unsigned int)((v4 * v2 + 0x8000) >> 16);
  a1[1] = result;
  return result;
}

//----- (000000014007D320) ----------------------------------------------------
__int64            sub_14007D320(unsigned int *a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_batch_vertex2fv(const float *position);
  (void)a2; (void)a3;
  renderer_batch_vertex2fv((const float *)a1);
  return 0;
}

//----- (000000014007D420)

__int64            sub_14007D420(float a1, float a2, float a3)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_batch_vertex3f(float x, float y, float z);
  renderer_batch_vertex3f(a1, a2, a3);
  return 0;
}
//----- (000000014007D520) ----------------------------------------------------
__int64            sub_14007D520(unsigned int *a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare). This wrapper keeps the entry point the recompiled callers use. */
  extern void renderer_batch_vertex3fv(const float *position);
  (void)a2; (void)a3;
  renderer_batch_vertex3fv((const float *)a1);
  return 0;
}

//----- (000000014007D610) ----------------------------------------------------
__int64            sub_14007D610(unsigned int a1, float a2)
{
  __int64 v3;
  void *v4;
  _WORD *v5;

  v3 = 8LL * (int)a1;
  v4 = *(void **)&dword_140404A6C[v3 + 18165779];
  *(float *)&dword_140404A6C[v3 + 18165783] = a2;
  dword_140404A6C[v3 + 18165777] = 1;
  dword_140404A6C[v3 + 18165778] = 0x40000;
  free(v4);
  v5 = (_WORD *)sr_path_malloc(0x100000);
  *(_QWORD *)&dword_140404A6C[v3 + 18165779] = (uint64)(uintptr_t)(v5);
  crt_memset((void *)(uintptr_t)(v5), 0, 0x100000u);
  *(_QWORD *)&dword_140404A6C[v3 + 18165781] = 0;
  return a1;
}

//----- (000000014007D6C0) ----------------------------------------------------
__int64            sub_14007D6C0(int a1)
{
  __int64 v1;
  unsigned int v2;
  int v3;

  v1 = 8LL * a1;
  v2 = dword_140404A6C[v1 + 18165782];
  v3 = dword_140404A6C[v1 + 18165781] - v2;
  if ( v3 >= (int)dword_140404A6C[v1 + 18165778] / -2 )
    return (unsigned int)v3;
  else
    return dword_140404A6C[v1 + 18165781] + dword_140404A6C[v1 + 18165778] - v2;
}

//----- (000000014007D710) ----------------------------------------------------
__int64 sub_14007D710()
{
  /* Clean implementation: src/engine/renderer.c, checked against the original executable
     (tools/native-compare suite sort). */
  extern void renderer_sort(void);
  renderer_sort();
  return (int)renderer_sort_count;
}

//----- (000000014007DDF0) ----------------------------------------------------
void            sub_14007DDF0(float *a1, float *a2)
{
  /* Written out from the assembly (0x14007DE2C..0x14007DFFE): the 12 edges of the box with corners a1 (rbx)
     and a2 (rdi) as 24 line vertices; the comment on each call is its address. Hex-Rays had typed the corners
     as integers, passed the first call the pointers themselves and lost every argument after that. */
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279700;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D420(a1[0], a1[1], a1[2]); /* 0x14007DE3A */
  sub_14007D420(a2[0], a1[1], a1[2]); /* 0x14007DE4D */
  sub_14007D420(a2[0], a1[1], a1[2]); /* 0x14007DE60 */
  sub_14007D420(a2[0], a2[1], a1[2]); /* 0x14007DE73 */
  sub_14007D420(a2[0], a2[1], a1[2]); /* 0x14007DE86 */
  sub_14007D420(a1[0], a2[1], a1[2]); /* 0x14007DE99 */
  sub_14007D420(a1[0], a2[1], a1[2]); /* 0x14007DEAC */
  sub_14007D420(a1[0], a1[1], a1[2]); /* 0x14007DEBF */
  sub_14007D420(a1[0], a1[1], a1[2]); /* 0x14007DED2 */
  sub_14007D420(a1[0], a1[1], a2[2]); /* 0x14007DEE5 */
  sub_14007D420(a2[0], a1[1], a1[2]); /* 0x14007DEF8 */
  sub_14007D420(a2[0], a1[1], a2[2]); /* 0x14007DF0B */
  sub_14007D420(a2[0], a2[1], a1[2]); /* 0x14007DF1E */
  sub_14007D420(a2[0], a2[1], a2[2]); /* 0x14007DF31 */
  sub_14007D420(a1[0], a2[1], a1[2]); /* 0x14007DF44 */
  sub_14007D420(a1[0], a2[1], a2[2]); /* 0x14007DF57 */
  sub_14007D420(a2[0], a2[1], a2[2]); /* 0x14007DF6A */
  sub_14007D420(a1[0], a2[1], a2[2]); /* 0x14007DF7D */
  sub_14007D420(a1[0], a2[1], a2[2]); /* 0x14007DF90 */
  sub_14007D420(a1[0], a1[1], a2[2]); /* 0x14007DFA3 */
  sub_14007D420(a1[0], a1[1], a2[2]); /* 0x14007DFB6 */
  sub_14007D420(a2[0], a1[1], a2[2]); /* 0x14007DFC9 */
  sub_14007D420(a2[0], a1[1], a2[2]); /* 0x14007DFDC */
  sub_14007D420(a2[0], a2[1], a2[2]); /* 0x14007DFEF */
  sub_14006E0D0(0, 0, 0);
}

//----- (000000014007F370) ----------------------------------------------------
void            sub_14007F370(unsigned int a1)
{
  extern void physics_remove_bond(int bond);
  /* src/engine/physics_bonds.c */
  physics_remove_bond((int)a1);
}

//----- (000000014007F590) ----------------------------------------------------
unsigned int *           sub_14007F590(signed int a1)
{
  unsigned int *result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int *v7;
  int v8;
  __int64 v9;
  unsigned int *v10;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned int *v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  bool v32;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007F590[16];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_14007F590 + 0)) /* [rsp+48h] */

  result = (unsigned int *)&retaddr;
  v2 = a1;
  if ( (unsigned int)a1 <= 0xFF )
  {
    v3 = 7166LL * a1;
    v4 = (int)dword_140404A6C[v3 + 280651305];
    if ( (_DWORD)v4 != -1 && dword_140404A6C[3597 * v4 + 71856292] == a1 )
      dword_140404A6C[3597 * v4 + 71856292] = -1;
    v5 = 0;
    v6 = 0;
    v7 = (int *)&dword_140404A6C[v3 + 280658139];
    do
    {
      while ( *v7 > 0 )
        sub_1400CA7C0(dword_140404A6C[7166 * v2 + 280658139 + v6 + *v7], v2, v5);
      ++v5;
      v6 += 10;
      v7 += 10;
    }
    while ( v5 < 8 );
    v8 = dword_140404A6C[7166 * v2 + 280654224];
    if ( v8 > 0 )
    {
      v9 = (unsigned int)v8;
      v10 = &dword_140404A6C[v3 + 280654225];
      do
      {
        v11 = (int)*v10;
        v10 += 3;
        dword_140404A6C[61 * v11 + 486149253] = 0;
        --v9;
      }
      while ( v9 );
    }
    v12 = dword_140404A6C[7166 * v2 + 280652687];
    if ( v12 > 0 )
    {
      v13 = (unsigned int)v12;
      v14 = &dword_140404A6C[v3 + 280652688];
      do
      {
        v15 = (int)*v14;
        v14 += 12;
        dword_140404A6C[61 * v15 + 486149253] = 0;
        --v13;
      }
      while ( v13 );
    }
    v16 = (int)dword_140404A6C[7166 * v2 + 280651439];
    if ( (unsigned int)v16 < 0x2000 )
      dword_140404A6C[47 * v16 + 18215709] = 0;
    v17 = (int)dword_140404A6C[7166 * v2 + 280651517];
    if ( (unsigned int)v17 < 0x2000 )
      dword_140404A6C[47 * v17 + 18215709] = 0;
    v18 = (int)dword_140404A6C[7166 * v2 + 280651595];
    if ( (unsigned int)v18 < 0x2000 )
      dword_140404A6C[47 * v18 + 18215709] = 0;
    v19 = (int)dword_140404A6C[7166 * v2 + 280651673];
    if ( (unsigned int)v19 < 0x2000 )
      dword_140404A6C[47 * v19 + 18215709] = 0;
    v20 = (int)dword_140404A6C[7166 * v2 + 280651751];
    if ( (unsigned int)v20 < 0x2000 )
      dword_140404A6C[47 * v20 + 18215709] = 0;
    v21 = (int)dword_140404A6C[7166 * v2 + 280651829];
    if ( (unsigned int)v21 < 0x2000 )
      dword_140404A6C[47 * v21 + 18215709] = 0;
    v22 = (int)dword_140404A6C[7166 * v2 + 280651907];
    if ( (unsigned int)v22 < 0x2000 )
      dword_140404A6C[47 * v22 + 18215709] = 0;
    v23 = (int)dword_140404A6C[7166 * v2 + 280651985];
    if ( (unsigned int)v23 < 0x2000 )
      dword_140404A6C[47 * v23 + 18215709] = 0;
    v24 = (int)dword_140404A6C[7166 * v2 + 280652063];
    if ( (unsigned int)v24 < 0x2000 )
      dword_140404A6C[47 * v24 + 18215709] = 0;
    v25 = (int)dword_140404A6C[7166 * v2 + 280652141];
    if ( (unsigned int)v25 < 0x2000 )
      dword_140404A6C[47 * v25 + 18215709] = 0;
    v26 = (int)dword_140404A6C[7166 * v2 + 280652219];
    if ( (unsigned int)v26 < 0x2000 )
      dword_140404A6C[47 * v26 + 18215709] = 0;
    v27 = (int)dword_140404A6C[7166 * v2 + 280652297];
    if ( (unsigned int)v27 < 0x2000 )
      dword_140404A6C[47 * v27 + 18215709] = 0;
    v28 = (int)dword_140404A6C[7166 * v2 + 280652375];
    if ( (unsigned int)v28 < 0x2000 )
      dword_140404A6C[47 * v28 + 18215709] = 0;
    v29 = (int)dword_140404A6C[7166 * v2 + 280652453];
    if ( (unsigned int)v29 < 0x2000 )
      dword_140404A6C[47 * v29 + 18215709] = 0;
    v30 = (int)dword_140404A6C[7166 * v2 + 280652531];
    if ( (unsigned int)v30 < 0x2000 )
      dword_140404A6C[47 * v30 + 18215709] = 0;
    result = (unsigned int *)(int)dword_140404A6C[7166 * v2 + 280652609];
    if ( (unsigned int)result < 0x2000 )
      dword_140404A6C[47 * (_QWORD)result + 18215709] = 0;
    v31 = world_unknown_15fd16260_count;
    if ( (int)world_unknown_15fd16260_count > 0 )
    {
      result = &dword_140404A6C[132400638];
      do
      {
        if ( *result == (_DWORD)v2 )
          *result = -1;
        result += 383;
        --v31;
      }
      while ( v31 );
    }
    v32 = game_connected == 0;
    dword_140404A6C[7166 * v2 + 280651303] = 0;
    if ( !v32 )
      ++dword_140404A6C[v2 + 282485789];
  }
  return result;
}
#undef retaddr

//----- (000000014007F970) ----------------------------------------------------
void            sub_14007F970(int a1)
{
  extern void world_remove_item(int item);
  /* src/engine/world_items.c */
  world_remove_item(a1);
}
