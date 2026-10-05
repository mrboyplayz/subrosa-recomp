/* Address: 0x14005a990 | Name: sub_14005A990 | Size: 1443 bytes */
__int64 __fastcall sub_14005A990(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned int v10; // esi
  unsigned int v11; // ecx
  __int64 i; // rbx
  __int64 v13; // rax
  int v14; // ecx
  float v15; // xmm1_4
  float v16; // xmm0_4
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // r15
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r14
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // r12
  unsigned int *v25; // rbx
  unsigned int *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rax
  float v31; // xmm0_4
  int v32; // esi
  __int64 v33; // rdi
  unsigned int v34; // ebx
  float v35; // xmm0_4
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v40; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v41; // [rsp+20h] [rbp-D8h]
  unsigned int v42; // [rsp+24h] [rbp-D4h]
  int v43; // [rsp+28h] [rbp-D0h]
  __int64 v44; // [rsp+30h] [rbp-C8h]
  __int64 v45; // [rsp+38h] [rbp-C0h] BYREF
  float v46; // [rsp+40h] [rbp-B8h]
  _OWORD v47[2]; // [rsp+48h] [rbp-B0h] BYREF
  int v48; // [rsp+68h] [rbp-90h]
  _DWORD v49[4]; // [rsp+70h] [rbp-88h]
  _DWORD v50[8]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-58h]

  v3 = a2;
  v4 = a3;
  v44 = a3;
  if ( a2 >= 3 )
  {
    v5 = dword_140404A6C[179992853] + 414000;
    if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
      v5 = 3870000;
    v6 = 0;
    v41 = v5;
    v7 = 3;
    do
    {
      v8 = dword_140404A6C[487148678];
      v9 = 1000;
      v49[v6] = 1000;
      v10 = v8 + 19;
      v11 = v8 + 1;
      v50[v6] = v10;
      if ( (int)(v11 + 19) > 24 )
        v11 = 0;
      dword_140404A6C[487148678] = v11;
      if ( (rand() & 1) == 0 )
      {
        v9 = 1500;
        v49[v6] = 1500;
      }
      if ( (rand() & 1) == 0 )
      {
        v9 += 500;
        v49[v6] = v9;
      }
      if ( (rand() & 3) == 0 )
      {
        v9 += 500;
        v49[v6] = v9;
      }
      if ( (rand() & 3) == 0 )
      {
        v9 += 1000;
        v49[v6] = v9;
      }
      if ( v10 == 23 )
        v49[v6] = 5 * v9;
      ++v6;
      --v7;
    }
    while ( v7 );
    for ( i = 0; i < 3; ++i )
    {
      v48 = 1065353216;
      v47[0] = xmmword_140278D30;
      v47[1] = xmmword_140278D30;
      v13 = *(int *)((char *)&v50[i] + v4 - (_QWORD)v50);
      v14 = v50[i];
      v15 = (float)(*(float *)&dword_140404A6C[5873 * v13 + 283831492]
                  + *(float *)&dword_140404A6C[5873 * v13 + 283831495])
          * 0.5;
      *(float *)&v45 = (float)(*(float *)&dword_140404A6C[5873 * v13 + 283831494]
                             + *(float *)&dword_140404A6C[5873 * v13 + 283831491])
                     * 0.5;
      v16 = *(float *)&dword_140404A6C[5873 * v13 + 283831493] + *(float *)&dword_140404A6C[5873 * v13 + 283831496];
      *((float *)&v45 + 1) = v15;
      v46 = v16 * 0.5;
      dword_140404A6C[i + 487148744] = sub_140054130(v14, (unsigned int *)&v45, nullptr, (unsigned int *)v47);
      v17 = dword_140404A6C[487148677];
      v50[i + 4] = dword_140404A6C[487148677];
      dword_140404A6C[487148677] = v17 + 1;
    }
    v45 = v3;
    if ( (_DWORD)v3 )
    {
      v43 = v49[2];
      v18 = 0;
      v42 = v50[6];
      do
      {
        v19 = *(int *)(v4 + 4 * v18);
        v20 = v18++;
        v21 = v18;
        if ( v18 >= 3 )
          v21 = v18 % 3uLL;
        v22 = 0;
        v23 = 0;
        v24 = 5873 * v19;
        v25 = &dword_140404A6C[5873 * v19 + 283831867];
        v26 = v25;
        while ( *(v26 - 279) )
        {
          if ( !*v26 )
          {
            ++v23;
            ++v22;
            break;
          }
          if ( !v26[279] )
          {
            v23 += 2;
            v22 += 2;
            break;
          }
          if ( !v26[558] )
          {
            v23 += 3;
            v22 += 3;
            break;
          }
          v23 += 4;
          v26 += 1116;
          v22 += 4;
          if ( v23 >= 16 )
            break;
        }
        MEMORY[0x1401FCD30](&dword_140404A6C[279 * v22 + 283831588 + v24], 0, 1116);
        v27 = v24 * 4 + 1116 * v23;
        *(unsigned int *)((char *)&dword_140404A6C[283831590] + v27) = v50[v21 + 4];
        *(unsigned int *)((char *)&dword_140404A6C[283831588] + v27) = 1;
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v27) = 6 - (v20 < 3);
        v28 = (int)dword_140404A6C[v21 + 487148744];
        *(unsigned int *)((char *)&dword_140404A6C[283831592] + v27) = v28;
        *(unsigned int *)((char *)&dword_140404A6C[283831606] + v27) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[283831603] + v27) = dword_140404A6C[1760 * v28 + 278845898];
        LODWORD(v28) = v49[v21];
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v27) = v28;
        v29 = _mm_cvtsi32_si128(v28);
        *(unsigned int *)((char *)&dword_140404A6C[283831605] + v27) = v41;
        v30 = v44;
        v31 = _mm_cvtepi32_ps(v29).m128_f32[0];
        *(float *)((char *)&dword_140404A6C[283831610] + v27) = v31 * -0.0000125;
        *(float *)((char *)&dword_140404A6C[283831609] + v27) = v31 * 0.000024999999;
        *(unsigned int *)((char *)&dword_140404A6C[283831595] + v27) = *(_DWORD *)(v30 + 4 * v21);
        *(unsigned int *)((char *)&dword_140404A6C[283831607] + v27) = 0;
        sub_1400519F0(v19, v22);
        if ( !v20 && (rand() & 7) == 0 )
        {
          v32 = 0;
          v33 = 0;
          while ( *(v25 - 279) )
          {
            if ( !*v25 )
            {
              ++v33;
              ++v32;
              break;
            }
            if ( !v25[279] )
            {
              v33 += 2;
              v32 += 2;
              break;
            }
            if ( !v25[558] )
            {
              v33 += 3;
              v32 += 3;
              break;
            }
            v33 += 4;
            v25 += 1116;
            v32 += 4;
            if ( v33 >= 16 )
              break;
          }
          MEMORY[0x1401FCD30](&dword_140404A6C[279 * v32 + 283831588 + v24], 0, 1116);
          v34 = v43;
          v35 = (float)v43;
          v36 = 1116 * v33 + 23492 * v19;
          *(unsigned int *)((char *)&dword_140404A6C[283831590] + v36) = v42;
          v37 = dword_140404A6C[487148746];
          v38 = 1760LL * (int)dword_140404A6C[487148746];
          *(float *)((char *)&dword_140404A6C[283831609] + v36) = v35 * 0.000024999999;
          *(float *)((char *)&dword_140404A6C[283831610] + v36) = v35 * -0.0000125;
          *(unsigned int *)((char *)&dword_140404A6C[283831592] + v36) = v37;
          *(unsigned int *)((char *)&dword_140404A6C[283831588] + v36) = 1;
          *(unsigned int *)((char *)&dword_140404A6C[283831591] + v36) = 6;
          *(unsigned int *)((char *)&dword_140404A6C[283831604] + v36) = v34;
          *(unsigned int *)((char *)&dword_140404A6C[283831603] + v36) = dword_140404A6C[v38 + 278845898];
          *(unsigned int *)((char *)&dword_140404A6C[283831605] + v36) = v41;
          *(unsigned int *)((char *)&dword_140404A6C[283831595] + v36) = *(_DWORD *)(v44 + 8);
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v36) = 0;
          sub_1400519F0(v19, v32);
        }
        v4 = v44;
      }
      while ( v18 < v45 );
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v40 ^ v51);
}

