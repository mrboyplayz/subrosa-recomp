/* Address: 0x140059920 | Name: sub_140059920 | Size: 1971 bytes */
__int64 __fastcall sub_140059920(__int64 a1, int a2, unsigned int *a3)
{
  signed __int64 v3; // r14
  unsigned int v5; // eax
  unsigned int v6; // r15d
  unsigned __int64 v7; // rsi
  int v8; // edi
  int v9; // r12d
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  unsigned __int64 v13; // r14
  signed __int64 v14; // r13
  unsigned int *v15; // rdi
  __int64 v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  unsigned int v26; // eax
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  int v32; // edi
  int v33; // ebx
  __int64 v34; // rsi
  float v35; // xmm0_4
  unsigned int v36; // r15d
  unsigned __int64 v37; // rbx
  unsigned int v38; // r12d
  unsigned int v39; // edi
  unsigned int v40; // r14d
  unsigned int *v41; // r13
  __int64 v42; // rsi
  int v43; // edx
  __int64 v44; // rcx
  unsigned int *v45; // rax
  __int64 v46; // r10
  __int64 v47; // rcx
  __int64 v49; // [rsp+8h] [rbp-100h] BYREF
  float v50; // [rsp+28h] [rbp-E0h] BYREF
  float v51; // [rsp+2Ch] [rbp-DCh]
  float v52; // [rsp+30h] [rbp-D8h]
  __int64 v53; // [rsp+38h] [rbp-D0h]
  signed __int64 v54; // [rsp+40h] [rbp-C8h]
  unsigned int *v55; // [rsp+48h] [rbp-C0h]
  _OWORD v56[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v57; // [rsp+70h] [rbp-98h]
  _DWORD v58[8]; // [rsp+78h] [rbp-90h]
  __int64 v59; // [rsp+98h] [rbp-70h]

  v3 = a2;
  v55 = a3;
  if ( a2 >= 3 )
  {
    v5 = dword_140404A6C[179992853] + 414000;
    if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
      v5 = 3870000;
    v6 = 0;
    LODWORD(v53) = v5;
    v7 = 0;
    v8 = 0;
    v9 = dword_140404A6C[487148678] + 19;
    v10 = dword_140404A6C[487148678] + 1;
    if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
      v10 = 0;
    dword_140404A6C[487148678] = v10;
    do
    {
      if ( (unsigned int)v8 >= 2 )
      {
        v12 = 250 * (rand() % 5 + 4);
        if ( v7 > 1 )
          v12 += 250 * (rand() % 5);
        if ( v9 == 23 )
          v12 *= 4;
        v11 = 2 * v12;
      }
      else
      {
        v11 = 100;
      }
      v58[v7] = v11;
      ++v8;
      ++v7;
    }
    while ( v8 < (int)v3 );
    v54 = v3;
    if ( (_DWORD)v3 )
    {
      v13 = 0;
      v14 = (char *)a3 - (char *)&dword_140404A6C[487148744];
      do
      {
        v15 = &dword_140404A6C[v13 + 487148744];
        v16 = *(int *)((char *)v15 + v14);
        v56[0] = xmmword_140278D30;
        v56[1] = xmmword_140278D30;
        v57 = 1065353216;
        v17 = *(float *)&dword_140404A6C[5873 * v16 + 283831498];
        v18 = *(float *)&dword_140404A6C[5873 * v16 + 283831499];
        v19 = *(float *)&dword_140404A6C[5873 * v16 + 283831500];
        sub_14007B2A0(v56, (char *)v56 + 12);
        sub_14007B2A0(v56, (char *)v56 + 12);
        v20 = *(float *)v56;
        v21 = *((float *)v56 + 1);
        v22 = *((float *)v56 + 2);
        v23 = (float)(*(float *)v56 * 0.5) + v17;
        v50 = v23;
        v24 = (float)(*((float *)v56 + 1) * 0.5) + v18;
        v25 = (float)(*((float *)v56 + 2) * 0.5) + v19;
        v51 = v24;
        v52 = v25;
        if ( v13 >= 2 )
        {
          if ( v6 < 3 )
          {
            v32 = rand() % 5 + 4;
            if ( v9 == 23 )
              v32 += rand() % 3 + 2;
            v33 = 0;
            if ( v32 > 0 )
            {
              v34 = 5873 * v16;
              do
              {
                if ( (v33 & 3) == 0 )
                {
                  v50 = v23 + (float)(v20 * 0.75);
                  v51 = v24 + (float)(v21 * 0.75);
                  v52 = v25 + (float)(v22 * 0.75);
                  sub_140054130(15, (unsigned int *)&v50, nullptr, (unsigned int *)v56);
                  v23 = (float)(*(float *)v56 * 0.75) + (float)(v23 + (float)(v20 * 0.75));
                  v24 = (float)(*((float *)v56 + 1) * 0.75) + (float)(v24 + (float)(v21 * 0.75));
                  v25 = (float)(*((float *)v56 + 2) * 0.75) + (float)(v25 + (float)(v22 * 0.75));
                  v50 = v23;
                  v51 = v24;
                  v52 = v25;
                }
                sub_140054130(17, (unsigned int *)&v50, nullptr, (unsigned int *)v56);
                v20 = *(float *)v56;
                v21 = *((float *)v56 + 1);
                v35 = *(float *)v56;
                v22 = *((float *)v56 + 2);
                ++v33;
                dword_140404A6C[v34 + 283831504] -= 250;
                v23 = v23 + (float)(v35 * 0.5);
                v50 = v23;
                v24 = v24 + (float)(v21 * 0.5);
                v51 = v24;
                v25 = v25 + (float)(v22 * 0.5);
                v52 = v25;
              }
              while ( v33 < v32 );
            }
          }
        }
        else
        {
          v26 = sub_140054130(v9, (unsigned int *)&v50, nullptr, (unsigned int *)v56);
          v27 = *(float *)v56;
          v28 = *(float *)v56;
          *v15 = v26;
          dword_140404A6C[5873 * v16 + 283831504] -= v58[v13];
          v29 = (float)((float)(v28 * 0.5) + v23) + (float)(v27 * 0.75);
          v50 = v29;
          v30 = (float)((float)(*((float *)v56 + 1) * 0.5) + v24) + (float)(*((float *)v56 + 1) * 0.75);
          v51 = v30;
          v31 = (float)((float)(*((float *)v56 + 2) * 0.5) + v25) + (float)(*((float *)v56 + 2) * 0.75);
          v52 = v31;
          sub_140054130(15, (unsigned int *)&v50, nullptr, (unsigned int *)v56);
          v50 = (float)(*(float *)v56 * 0.75) + v29;
          v51 = (float)(*((float *)v56 + 1) * 0.75) + v30;
          v52 = (float)(*((float *)v56 + 2) * 0.75) + v31;
        }
        ++v6;
        ++v13;
      }
      while ( (__int64)v13 < v54 );
      v36 = dword_140404A6C[487148744];
      v37 = 0;
      v38 = dword_140404A6C[487148745];
      v39 = 0;
      v40 = dword_140404A6C[487148677];
      v41 = v55;
      v50 = *(float *)&dword_140404A6C[1760 * dword_140404A6C[487148744] + 278845898];
      do
      {
        v42 = (int)v41[v37];
        v43 = 0;
        v44 = 0;
        v45 = &dword_140404A6C[5873 * v42 + 283831867];
        while ( *(v45 - 279) )
        {
          if ( !*v45 )
          {
            ++v44;
            ++v43;
            break;
          }
          if ( !v45[279] )
          {
            v44 += 2;
            v43 += 2;
            break;
          }
          if ( !v45[558] )
          {
            v44 += 3;
            v43 += 3;
            break;
          }
          v44 += 4;
          v45 += 1116;
          v43 += 4;
          if ( v44 >= 16 )
            break;
        }
        v46 = 279 * v44;
        v47 = 23492 * v42 + 1116 * v44;
        *(unsigned int *)((char *)&dword_140404A6C[283831588] + v47) = 1;
        *(unsigned int *)((char *)&dword_140404A6C[283831590] + v47) = v40;
        if ( v37 >= 2 )
        {
          if ( v39 < 3 )
            *(unsigned int *)((char *)&dword_140404A6C[283831591] + v47) = 8;
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[283831591] + v47) = 7;
        }
        *(float *)((char *)&dword_140404A6C[283831603] + v47) = v50;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v47) = v58[v37];
        *(unsigned int *)((char *)&dword_140404A6C[283831605] + v47) = v53;
        *(unsigned int *)((char *)&dword_140404A6C[283831592] + v47) = v36;
        *(unsigned int *)((char *)&dword_140404A6C[283831593] + v47) = v38;
        if ( v37 >= 2 )
        {
          *(unsigned int *)((char *)&dword_140404A6C[283831595] + v47) = *v41;
          *(unsigned int *)((char *)&dword_140404A6C[283831596] + v47) = v41[1];
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v47) = 0;
          if ( v39 < 3 )
            dword_140404A6C[5873 * v42 + 283831607 + v46] = -dword_140404A6C[5873 * v42 + 283831504];
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[283831595] + v47) = v41[2];
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v47) = 0;
        }
        sub_1400519F0(v42, v43);
        ++v39;
        ++v37;
      }
      while ( (__int64)v37 < v54 );
    }
    else
    {
      v40 = dword_140404A6C[487148677];
    }
    dword_140404A6C[487148677] = v40 + 1;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v49 ^ v59);
}

