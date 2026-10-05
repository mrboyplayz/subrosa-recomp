/* Address: 0x14000ef70 | Name: sub_14000EF70 | Size: 2238 bytes */
__int64 __fastcall sub_14000EF70(int *a1, int a2, int a3, int a4, unsigned int a5, float a6, float *a7, float *a8)
{
  __int64 result; // rax
  float v10; // xmm1_4
  signed int v11; // r15d
  __int64 v12; // rcx
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  float v20; // xmm14_4
  float v21; // xmm2_4
  float v22; // xmm13_4
  __int64 v23; // rax
  float v24; // xmm5_4
  float v25; // xmm14_4
  float v26; // xmm12_4
  float v27; // xmm15_4
  float v28; // xmm11_4
  __int64 v29; // rax
  float v30; // xmm8_4
  float v31; // xmm12_4
  float v32; // xmm9_4
  float v33; // xmm10_4
  __int64 v34; // rax
  float v35; // xmm8_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  __int64 v41; // rax
  int v42; // r14d
  float *v43; // rcx
  float *v44; // rcx
  int v45; // ebp
  int v46; // esi
  float *v47; // rcx
  int v48; // edi
  float *v49; // rcx
  float v50; // xmm9_4
  float v51; // xmm15_4
  float v52; // xmm10_4
  float v53; // xmm11_4
  float v54; // xmm12_4
  float *v55; // rdx
  __int64 v56; // rax
  int v57; // r8d
  _DWORD *v58; // rcx
  int v59; // edx
  _DWORD *v60; // rcx
  int v61; // edx
  int v62; // r8d
  int v63; // edx
  _DWORD *v64; // rcx
  int v65; // r8d
  int v66; // edx
  _DWORD *v67; // rcx
  int v68; // eax
  float v69; // [rsp+20h] [rbp-F8h]
  float v70; // [rsp+24h] [rbp-F4h]
  float v71; // [rsp+28h] [rbp-F0h]
  __int64 v72; // [rsp+30h] [rbp-E8h]
  __int64 v73; // [rsp+38h] [rbp-E0h]
  float v74; // [rsp+128h] [rbp+10h]
  float v75; // [rsp+130h] [rbp+18h]
  float v76; // [rsp+138h] [rbp+20h]
  float v77; // [rsp+140h] [rbp+28h]

  result = a5;
  v10 = a6;
  v11 = 0;
  v12 = 232LL * (unsigned __int16)a5;
  v13 = (float)a2;
  v73 = v12;
  v14 = (float)a3;
  v15 = (float)a4;
  v74 = (float)a2;
  v75 = (float)a3;
  v76 = (float)a4;
  if ( *(int *)((char *)&dword_140404A6C[20074623] + v12) > 0 )
  {
    result = 0;
    v72 = 0;
    while ( a1[8193] >= 1024 )
    {
LABEL_119:
      ++result;
      ++v11;
      v72 = result;
      if ( v11 >= *(int *)((char *)&dword_140404A6C[20074623] + v12) )
        return result;
    }
    v16 = 2 * result;
    v17 = *(_QWORD *)((char *)&dword_140404A6C[20074615] + v73);
    v18 = *(_QWORD *)((char *)&dword_140404A6C[20074631] + v73);
    v19 = 3 * *(_DWORD *)(v18 + 16 * result);
    v20 = v15 + *(float *)(v17 + 4 * v19 + 8);
    v21 = (float)(v13 + *(float *)(v17 + 4 * v19)) * v10;
    v22 = (float)(v14 + *(float *)(v17 + 4 * v19 + 4)) * v10;
    v23 = 3 * *(_DWORD *)(v18 + 8 * v16 + 4);
    v71 = v21;
    v24 = v21;
    v25 = v20 * v10;
    v26 = v15 + *(float *)(v17 + 4 * v23 + 8);
    v27 = (float)(v13 + *(float *)(v17 + 4 * v23)) * v10;
    v28 = (float)(v14 + *(float *)(v17 + 4 * v23 + 4)) * v10;
    v29 = 3 * *(_DWORD *)(v18 + 8 * v16 + 8);
    v30 = v15 + *(float *)(v17 + 4 * v29 + 8);
    v31 = v26 * v10;
    v32 = (float)(v13 + *(float *)(v17 + 4 * v29)) * v10;
    v33 = (float)(v14 + *(float *)(v17 + 4 * v29 + 4)) * v10;
    v34 = 3 * *(_DWORD *)(v18 + 8 * v16 + 12);
    v35 = v30 * v10;
    v77 = (float)(v13 + *(float *)(v17 + 4 * v34)) * v10;
    v69 = (float)(v14 + *(float *)(v17 + 4 * v34 + 4)) * v10;
    v70 = (float)(v15 + *(float *)(v17 + 4 * v34 + 8)) * v10;
    if ( v21 > v27 )
      v24 = v27;
    v36 = v22;
    if ( v22 > v28 )
      v36 = v28;
    v37 = v25;
    if ( v25 > v31 )
      v37 = v31;
    v38 = v21;
    if ( v21 < v27 )
      v38 = v27;
    v39 = v22;
    if ( v22 < v28 )
      v39 = v28;
    v40 = v25;
    if ( v25 < v31 )
      v40 = v31;
    if ( v24 > v32 )
      v24 = v32;
    if ( v36 > v33 )
      v36 = v33;
    if ( v37 > v35 )
      v37 = v35;
    if ( v38 < v32 )
      v38 = v32;
    if ( v39 < v33 )
      v39 = v33;
    if ( v40 < v35 )
      v40 = v35;
    if ( v24 > v77 )
      v24 = v77;
    if ( v36 > v69 )
      v36 = v69;
    if ( v37 > v70 )
      v37 = v70;
    if ( v38 < v77 )
      v38 = v77;
    if ( v39 < v69 )
      v39 = v69;
    if ( v40 < v70 )
      v40 = v70;
    if ( v24 > *a8 || v38 < *a7 || v37 > a8[2] || v40 < a7[2] || v36 > a8[1] || v39 < a7[1] )
      goto LABEL_117;
    v41 = *a1;
    v42 = 0;
    if ( (int)v41 <= 0 )
    {
LABEL_52:
      if ( (int)v41 < 2048 )
      {
        v41 *= 2;
        *(float *)&a1[2 * v41 + 2] = v71;
        *(float *)&a1[2 * v41 + 3] = v22;
        *(float *)&a1[2 * v41 + 4] = v25;
        LODWORD(v41) = *a1 + 1;
        *a1 = v41;
      }
      v42 = v41 - 1;
      if ( (int)v41 <= 0 )
      {
LABEL_60:
        if ( (int)v41 < 2048 )
        {
          v41 = 2LL * (int)v41;
          *(float *)&a1[2 * v41 + 2] = v27;
          *(float *)&a1[2 * v41 + 3] = v28;
          *(float *)&a1[2 * v41 + 4] = v31;
          LODWORD(v41) = *a1 + 1;
          *a1 = v41;
        }
        v45 = v41 - 1;
        goto LABEL_63;
      }
    }
    else
    {
      v43 = (float *)(a1 + 3);
      while ( fabs(v71 - *(v43 - 1)) >= 0.000061035156
           || fabs(v22 - *v43) >= 0.000061035156
           || fabs(v25 - v43[1]) >= 0.000061035156 )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= (int)v41 )
          goto LABEL_52;
      }
    }
    v44 = (float *)(a1 + 3);
    v45 = 0;
    while ( fabs(v27 - *(v44 - 1)) >= 0.000061035156
         || fabs(v28 - *v44) >= 0.000061035156
         || fabs(v31 - v44[1]) >= 0.000061035156 )
    {
      LODWORD(v41) = *a1;
      ++v45;
      v44 += 4;
      if ( v45 >= *a1 )
        goto LABEL_60;
    }
LABEL_63:
    v46 = 0;
    if ( (int)v41 <= 0 )
    {
LABEL_69:
      if ( (int)v41 < 2048 )
      {
        v41 = 2LL * (int)v41;
        *(float *)&a1[2 * v41 + 2] = v32;
        *(float *)&a1[2 * v41 + 3] = v33;
        *(float *)&a1[2 * v41 + 4] = v35;
        LODWORD(v41) = *a1 + 1;
        *a1 = v41;
      }
      v46 = v41 - 1;
    }
    else
    {
      v47 = (float *)(a1 + 3);
      while ( fabs(v32 - *(v47 - 1)) >= 0.000061035156
           || fabs(v33 - *v47) >= 0.000061035156
           || fabs(v35 - v47[1]) >= 0.000061035156 )
      {
        LODWORD(v41) = *a1;
        ++v46;
        v47 += 4;
        if ( v46 >= *a1 )
          goto LABEL_69;
      }
    }
    v48 = 0;
    if ( (int)v41 <= 0 )
    {
LABEL_78:
      if ( (int)v41 < 2048 )
      {
        v41 = 2LL * (int)v41;
        *(float *)&a1[2 * v41 + 3] = v69;
        *(float *)&a1[2 * v41 + 4] = v70;
        *(float *)&a1[2 * v41 + 2] = v77;
        LODWORD(v41) = *a1 + 1;
        *a1 = v41;
      }
      v48 = v41 - 1;
    }
    else
    {
      v49 = (float *)(a1 + 3);
      while ( fabs(v77 - *(v49 - 1)) >= 0.000061035156
           || fabs(v69 - *v49) >= 0.000061035156
           || fabs(v70 - v49[1]) >= 0.000061035156 )
      {
        LODWORD(v41) = *a1;
        ++v48;
        v49 += 4;
        if ( v48 >= *a1 )
          goto LABEL_78;
      }
    }
    v50 = v32 - v71;
    v51 = v27 - v71;
    v52 = v33 - v22;
    v53 = v28 - v22;
    a1[8 * a1[8193] + 8194] = 4;
    v54 = v31 - v25;
    a1[8 * a1[8193] + 8195] = v42;
    a1[8 * a1[8193] + 8196] = v45;
    a1[8 * a1[8193] + 8197] = v46;
    a1[8 * a1[8193] + 8198] = v48;
    v55 = (float *)&a1[8 * a1[8193] + 8199];
    *v55 = (float)(v52 * v54) - (float)((float)(v35 - v25) * v53);
    v55[1] = (float)((float)(v35 - v25) * v51) - (float)(v50 * v54);
    v55[2] = (float)(v50 * v53) - (float)(v52 * v51);
    sub_14007A240(v55, v55);
    v56 = a1[16386];
    v57 = 0;
    ++a1[8193];
    if ( (int)v56 <= 0 )
    {
LABEL_88:
      if ( (int)v56 < 1024 )
      {
        a1[2 * v56 + 16387] = v42;
        a1[2 * a1[16386] + 16388] = v45;
        LODWORD(v56) = a1[16386] + 1;
        a1[16386] = v56;
      }
      if ( (int)v56 <= 0 )
      {
LABEL_97:
        if ( (int)v56 < 1024 )
        {
          a1[2 * (int)v56 + 16387] = v45;
          a1[2 * a1[16386] + 16388] = v46;
          LODWORD(v56) = a1[16386] + 1;
          a1[16386] = v56;
        }
LABEL_99:
        v63 = 0;
        if ( (int)v56 <= 0 )
        {
LABEL_106:
          if ( (int)v56 < 1024 )
          {
            a1[2 * (int)v56 + 16387] = v46;
            a1[2 * a1[16386] + 16388] = v48;
            LODWORD(v56) = a1[16386] + 1;
            a1[16386] = v56;
          }
        }
        else
        {
          v64 = a1 + 16388;
          while ( 1 )
          {
            v65 = *(v64 - 1);
            if ( v46 == v65 && v48 == *v64 )
              break;
            if ( v46 == *v64 && v48 == v65 )
              break;
            LODWORD(v56) = a1[16386];
            ++v63;
            v64 += 2;
            if ( v63 >= (int)v56 )
              goto LABEL_106;
          }
        }
        v66 = 0;
        if ( (int)v56 <= 0 )
        {
LABEL_115:
          v10 = a6;
          v13 = v74;
          v14 = v75;
          v15 = v76;
          v12 = v73;
          if ( (int)v56 < 1024 )
          {
            a1[2 * (int)v56 + 16387] = v48;
            a1[2 * a1[16386]++ + 16388] = v42;
          }
          goto LABEL_118;
        }
        v67 = a1 + 16388;
        while ( 1 )
        {
          v68 = *(v67 - 1);
          if ( v48 == v68 && v42 == *v67 )
            break;
          if ( v48 == *v67 && v42 == v68 )
            break;
          LODWORD(v56) = a1[16386];
          ++v66;
          v67 += 2;
          if ( v66 >= (int)v56 )
            goto LABEL_115;
        }
LABEL_117:
        v12 = v73;
        v15 = v76;
        v14 = v75;
        v13 = v74;
        v10 = a6;
LABEL_118:
        result = v72;
        goto LABEL_119;
      }
    }
    else
    {
      v58 = a1 + 16388;
      while ( 1 )
      {
        v59 = *(v58 - 1);
        if ( v42 == v59 && v45 == *v58 )
          break;
        if ( v42 == *v58 && v45 == v59 )
          break;
        ++v57;
        v58 += 2;
        if ( v57 >= (int)v56 )
          goto LABEL_88;
      }
    }
    v60 = a1 + 16388;
    v61 = 0;
    while ( 1 )
    {
      v62 = *(v60 - 1);
      if ( v45 == v62 && v46 == *v60 )
        goto LABEL_99;
      if ( v45 == *v60 && v46 == v62 )
        goto LABEL_99;
      LODWORD(v56) = a1[16386];
      ++v61;
      v60 += 2;
      if ( v61 >= (int)v56 )
        goto LABEL_97;
    }
  }
  return result;
}

