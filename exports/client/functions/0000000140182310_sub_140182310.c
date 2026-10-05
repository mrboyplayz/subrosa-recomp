/* Address: 0x140182310 | Name: sub_140182310 | Size: 1232 bytes */
__int64 __fastcall sub_140182310(int *a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  int v7; // ebp
  float *v9; // rdi
  _QWORD *v10; // r12
  float *v12; // r15
  int v13; // r11d
  __int64 v14; // rbx
  _BYTE *v15; // r14
  int v16; // edx
  _BYTE *v17; // rcx
  int v18; // eax
  int v19; // ebx
  float **v20; // r14
  float v21; // xmm6_4
  float v22; // xmm8_4
  int v23; // eax
  _BYTE *v24; // rbx
  float v25; // xmm0_4
  __int64 v26; // rbx
  _QWORD *v27; // rax
  float v28; // xmm2_4
  float v29; // xmm0_4
  int v30; // xmm0_4
  float v31; // xmm0_4
  int v32; // r11d
  int v33; // r8d
  float v34; // xmm1_4
  float *v35; // r9
  __int64 v36; // r10
  int v37; // edx
  int v38; // eax
  float **v39; // rcx
  float **v40; // rax
  _QWORD *v41; // rbx
  __int64 v43; // [rsp+0h] [rbp-328h] BYREF
  int v44; // [rsp+30h] [rbp-2F8h]
  _BYTE *v45; // [rsp+38h] [rbp-2F0h]
  float *v46; // [rsp+40h] [rbp-2E8h] BYREF
  _BYTE *v47; // [rsp+48h] [rbp-2E0h]
  _BYTE v48[528]; // [rsp+50h] [rbp-2D8h] BYREF
  __int64 v49; // [rsp+260h] [rbp-C8h]

  v6 = *a1;
  v7 = 0;
  v9 = nullptr;
  v10 = nullptr;
  v12 = nullptr;
  v13 = 0;
  v14 = a3;
  v46 = nullptr;
  v44 = 0;
  if ( v6 <= 64 )
  {
    v15 = v48;
  }
  else
  {
    v15 = (_BYTE *)j__malloc_base(4LL * (2 * v6 + 1));
    v13 = 0;
    v6 = *a1;
  }
  v16 = a6;
  v45 = v15;
  v17 = &v15[4 * v6];
  v18 = a6 + a1[1];
  v47 = v17;
  *(float *)(a2 + 20 * v14 + 4) = (float)v18 + 1.0;
  if ( a1[1] > 0 )
  {
    while ( 1 )
    {
      v19 = *a1;
      v20 = &v46;
      v21 = (float)(v13 + v16);
      v22 = v21 + 1.0;
      MEMORY[0x1401FCD30](v45, 0, 4LL * *a1);
      v23 = v19 + 1;
      v24 = v47;
      MEMORY[0x1401FCD30](v47, 0, 4LL * v23);
      if ( v9 )
      {
        do
        {
          if ( v21 < v9[7] )
          {
            v20 = (float **)v9;
          }
          else
          {
            *v20 = *(float **)v9;
            if ( v9[5] == 0.0 )
              sub_14023E640(L"z->direction", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3150);
            *(_QWORD *)v9 = v12;
            v12 = v9;
            v9[5] = 0.0;
          }
          v9 = *v20;
        }
        while ( *v20 );
        v9 = v46;
      }
      v25 = *(float *)(a2 + 4);
      if ( v25 <= v22 )
        break;
LABEL_35:
      v15 = v45;
      if ( v9 )
        sub_140180640((__int64)v45, (__int64)(v24 + 4), *a1, v9, v21);
      v32 = v44;
      v33 = 0;
      v34 = 0.0;
      if ( *a1 > 0 )
      {
        v35 = (float *)v45;
        v36 = v24 - v45;
        do
        {
          v34 = v34 + *(float *)((char *)v35 + v36);
          v37 = (int)(float)((float)(fabs(v34 + *v35) * 255.0) + 0.5);
          if ( v37 > 255 )
            LOBYTE(v37) = -1;
          ++v35;
          v38 = v33 + v32 * a1[2];
          ++v33;
          *(_BYTE *)(v38 + *((_QWORD *)a1 + 2)) = v37;
        }
        while ( v33 < *a1 );
        v15 = v45;
      }
      v39 = &v46;
      if ( v9 )
      {
        v40 = (float **)v9;
        do
        {
          *((float *)v40 + 2) = *((float *)v40 + 3) + *((float *)v40 + 2);
          v39 = (float **)*v39;
          v40 = (float **)*v39;
        }
        while ( *v39 );
      }
      v16 = a6;
      v13 = v32 + 1;
      v44 = v13;
      if ( v13 >= a1[1] )
        goto LABEL_47;
    }
    while ( v25 == *(float *)(a2 + 12) )
    {
LABEL_33:
      v25 = *(float *)(a2 + 24);
      a2 += 20;
      if ( v25 > v22 )
      {
        v24 = v47;
        goto LABEL_35;
      }
    }
    if ( v12 )
    {
      v26 = (__int64)v12;
      v12 = *(float **)v12;
      goto LABEL_22;
    }
    if ( !v7 )
    {
      v27 = (_QWORD *)j__malloc_base(25608);
      if ( !v27 )
      {
        v26 = 0;
        goto LABEL_22;
      }
      *v27 = v10;
      v7 = 800;
      v10 = v27;
    }
    v26 = (__int64)&v10[4 * --v7 + 1];
LABEL_22:
    v28 = (float)(*(float *)(a2 + 8) - *(float *)a2) / (float)(*(float *)(a2 + 12) - *(float *)(a2 + 4));
    if ( v26 )
    {
      *(float *)(v26 + 12) = v28;
      if ( v28 == 0.0 )
        v29 = 0.0;
      else
        v29 = 1.0 / v28;
      *(float *)(v26 + 16) = v29;
      *(float *)(v26 + 8) = (float)((float)((float)(v21 - *(float *)(a2 + 4)) * v28) + *(float *)a2) - (float)a5;
      if ( *(_DWORD *)(a2 + 16) )
        v30 = 1065353216;
      else
        v30 = -1082130432;
      *(_DWORD *)(v26 + 20) = v30;
      *(_DWORD *)(v26 + 24) = *(_DWORD *)(a2 + 4);
      v31 = *(float *)(a2 + 12);
      *(_QWORD *)v26 = 0;
      *(float *)(v26 + 28) = v31;
      if ( v31 < v21 )
        sub_14023E640(L"z->ey >= scan_y_top", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3163);
      *(_QWORD *)v26 = v9;
      v9 = (float *)v26;
      v46 = (float *)v26;
    }
    else
    {
      sub_14023E640(L"z != ((void *)0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2750);
    }
    goto LABEL_33;
  }
LABEL_47:
  if ( v10 )
  {
    do
    {
      v41 = (_QWORD *)*v10;
      free(v10);
      v10 = v41;
    }
    while ( v41 );
  }
  if ( v15 != v48 )
    free(v15);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v43 ^ v49);
}

