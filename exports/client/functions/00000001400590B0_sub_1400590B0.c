/* Address: 0x1400590b0 | Name: sub_1400590B0 | Size: 1416 bytes */
void __fastcall sub_1400590B0(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int *v4; // r13
  int *v5; // rdi
  unsigned int v7; // r15d
  unsigned int v8; // esi
  int v9; // r14d
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rbx
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  __int64 v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm6_4
  unsigned int v19; // eax
  unsigned __int64 i; // r14
  int v21; // esi
  __int64 v22; // rbx
  unsigned int *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rdi
  float v26; // xmm1_4
  int v27; // eax
  unsigned int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // r11d
  __int64 v32; // r9
  int v33; // eax
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // [rsp+0h] [rbp-108h] BYREF
  int v39; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v40; // [rsp+28h] [rbp-E0h] BYREF
  float v41; // [rsp+30h] [rbp-D8h]
  unsigned int v42; // [rsp+38h] [rbp-D0h]
  int v43; // [rsp+3Ch] [rbp-CCh]
  unsigned int *v44; // [rsp+40h] [rbp-C8h]
  _OWORD v45[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v46; // [rsp+68h] [rbp-A0h]
  _DWORD v47[8]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v48; // [rsp+90h] [rbp-78h]

  if ( a2 >= 3 )
  {
    v3 = dword_140404A6C[179992853] + 414000;
    v4 = a3;
    if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
      v3 = 3870000;
    v5 = v47;
    v7 = 0;
    v8 = 0;
    v9 = dword_140404A6C[487148678] + 19;
    v10 = dword_140404A6C[487148678] + 1;
    v42 = v3;
    v44 = a3;
    v43 = a2;
    if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
      v10 = 0;
    dword_140404A6C[487148678] = v10;
    do
    {
      if ( v8 >= 2 )
      {
        v12 = 1000;
        *v5 = 1000;
        if ( (rand() & 1) == 0 )
        {
          v12 = 1500;
          *v5 = 1500;
        }
        if ( (rand() & 3) == 0 )
        {
          v12 += 500;
          *v5 = v12;
        }
        if ( (rand() & 3) == 0 )
        {
          v12 += 500;
          *v5 = v12;
        }
        if ( (rand() & 3) == 0 )
          v12 += 500;
        if ( v9 == 23 )
          v12 *= 5;
        v11 = 2 * v12;
      }
      else
      {
        v11 = 0;
      }
      *v5 = v11;
      ++v8;
      ++v5;
    }
    while ( (int)v8 < a2 );
    v13 = 0;
    v14 = dword_140404A6C[487148744];
    v15 = dword_140404A6C[487148677];
    do
    {
      v16 = 5873LL * (int)v4[v13];
      v45[0] = xmmword_140278D30;
      v45[1] = xmmword_140278D30;
      v46 = 1065353216;
      v17 = (float)(*(float *)&dword_140404A6C[v16 + 283831491] + *(float *)&dword_140404A6C[v16 + 283831494]) * 0.5;
      v18 = (float)(*(float *)&dword_140404A6C[v16 + 283831493] + *(float *)&dword_140404A6C[v16 + 283831496]) * 0.5;
      *((float *)&v40 + 1) = (float)(*(float *)&dword_140404A6C[v16 + 283831492]
                                   + *(float *)&dword_140404A6C[v16 + 283831495])
                           * 0.5;
      *(float *)&v40 = v17 + (float)((float)(v15 & 7) * 0.75);
      v41 = v18 - 1.0;
      if ( !v13 )
      {
        v19 = sub_140054130(v9, (unsigned int *)&v40, nullptr, (unsigned int *)v45);
        v15 = dword_140404A6C[487148677];
        v14 = v19;
        dword_140404A6C[487148744] = v19;
        v41 = v18 + 1.0;
      }
      ++v13;
    }
    while ( v13 < 2 );
    for ( i = 0; ; ++i )
    {
      v21 = 0;
      v39 = v4[i];
      v22 = 0;
      v23 = &dword_140404A6C[5873 * v39 + 283831867];
      while ( *(v23 - 279) )
      {
        if ( !*v23 )
        {
          ++v22;
          ++v21;
          break;
        }
        if ( !v23[279] )
        {
          v22 += 2;
          v21 += 2;
          break;
        }
        if ( !v23[558] )
        {
          v22 += 3;
          v21 += 3;
          break;
        }
        v22 += 4;
        v23 += 1116;
        v21 += 4;
        if ( v22 >= 16 )
          break;
      }
      v24 = 5873LL * v39;
      MEMORY[0x1401FCD30](&dword_140404A6C[279 * v21 + 283831588 + v24], 0, 1116);
      v40 = 1116 * v22;
      v25 = 1116 * v22 + v24 * 4;
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v25) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v25) = v15;
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v25) = v14;
      if ( v7 >= 2 )
      {
        if ( i <= 1 )
          *(unsigned int *)((char *)&dword_140404A6C[283831591] + v25) = 8;
        *(unsigned int *)((char *)&dword_140404A6C[283831603] + v25) = dword_140404A6C[1760 * v14 + 278845898];
        v27 = v47[i];
        if ( v7 < 3 )
          v27 *= 2;
        v26 = (float)v27;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v25) = v27;
        *(float *)((char *)&dword_140404A6C[283831609] + v25) = (float)v27 * 0.000024999999;
      }
      else
      {
        v26 = 0.0;
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v25) = 7;
        *(_QWORD *)((char *)&dword_140404A6C[283831603] + v25) = dword_140404A6C[1760 * v14 + 278845898];
        *(unsigned int *)((char *)&dword_140404A6C[283831609] + v25) = 0;
        if ( !v7 )
          goto LABEL_45;
      }
      v26 = v26 * -0.0000125;
LABEL_45:
      v28 = v42;
      *(float *)((char *)&dword_140404A6C[283831610] + v25) = v26;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v25) = v28;
      *(unsigned int *)((char *)&dword_140404A6C[283831595] + v25) = *v44;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v25) = 0;
      if ( v7 == 2 )
      {
        v29 = v47[i];
        v30 = rand();
        v31 = v39;
        v32 = 3LL * v39;
        v33 = v29 / 1000
            + v30
            % (int)(((int)((unsigned __int64)(91625969LL * v29) >> 32) >> 4)
                  + 1
                  + ((unsigned int)((unsigned __int64)(91625969LL * v29) >> 32) >> 31));
        if ( v33 < 1 )
          v33 = 1;
        v34 = 500 * v33;
        v35 = dword_140404A6C[6 * v39 + 335047061];
        if ( v35 <= 0 )
        {
          v36 = 0;
        }
        else
        {
          v37 = 50
              * ((25
                - (int)(float)((float)((float)v35 * *(float *)&dword_140404A6C[6 * v39 + 335047062])
                             * (float)((float)v34 * -0.000024999999)))
               / 50);
          v36 = v37;
          if ( v34 >= v37 )
            v37 = v34;
          v34 = v37;
        }
        dword_140404A6C[v24 + 283831608 + v40 / 4] = v36;
        dword_140404A6C[2 * v32 + 335047066] += v34;
        v14 = dword_140404A6C[487148744];
        v15 = dword_140404A6C[487148677];
        *(unsigned int *)((char *)&dword_140404A6C[283831607] + v25) = v34;
      }
      else
      {
        v31 = v39;
      }
      sub_1400519F0(v31, v21);
      v4 = v44;
      if ( (int)++v7 >= v43 )
      {
        dword_140404A6C[487148677] = v15 + 1;
        MEMORY[0x1401F8B20]((unsigned __int64)&v38 ^ v48);
        return;
      }
    }
  }
}

