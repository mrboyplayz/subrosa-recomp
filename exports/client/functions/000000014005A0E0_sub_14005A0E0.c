/* Address: 0x14005a0e0 | Name: sub_14005A0E0 | Size: 2222 bytes */
__int64 __fastcall sub_14005A0E0(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v3; // r14
  int v4; // ebx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // edi
  int v8; // r15d
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // r12
  __int64 v13; // rbx
  int v14; // esi
  __int64 v15; // r14
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
  unsigned int v26; // xmm1_4
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rbx
  bool v31; // zf
  unsigned int v32; // eax
  float v33; // xmm0_4
  float v34; // xmm8_4
  float v35; // xmm8_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  int v38; // edi
  int i; // ebx
  float v40; // xmm0_4
  unsigned int v41; // esi
  unsigned int v42; // edi
  __int64 v43; // rbx
  unsigned int v44; // r13d
  unsigned int v45; // r15d
  unsigned int v46; // r14d
  unsigned int *v47; // r10
  int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // r9
  unsigned int *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v55; // [rsp+8h] [rbp-100h] BYREF
  unsigned int *v56; // [rsp+28h] [rbp-E0h] BYREF
  float v57; // [rsp+30h] [rbp-D8h]
  unsigned int v58; // [rsp+38h] [rbp-D0h]
  unsigned int v59; // [rsp+3Ch] [rbp-CCh]
  unsigned int *v60; // [rsp+40h] [rbp-C8h]
  __int64 v61; // [rsp+48h] [rbp-C0h]
  _OWORD v62[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v63; // [rsp+70h] [rbp-98h]
  _DWORD v64[8]; // [rsp+78h] [rbp-90h]
  __int64 v65; // [rsp+98h] [rbp-70h]

  v3 = a2;
  v60 = a3;
  if ( a2 < 2 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v55 ^ v65);
  v4 = a2 - 1;
  v5 = 2 - ((rand() & 3) != 0);
  if ( v5 <= (int)v3 - 1 )
    v4 = v5;
  v6 = dword_140404A6C[179992853] + 414000;
  if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
    v6 = 3870000;
  v59 = v6;
  v7 = 0;
  v8 = dword_140404A6C[487148678] + 19;
  v9 = dword_140404A6C[487148678] + 1;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v9 = 0;
  dword_140404A6C[487148678] = v9;
  if ( (rand() & 3) != 0 )
  {
    v10 = rand();
    v11 = v10 & 0x80000007;
    v58 = v10 & 0x80000007;
    if ( v10 >= 0 )
      goto LABEL_13;
    v11 = (((_BYTE)v11 - 1) | 0xFFFFFFF8) + 1;
  }
  else
  {
    v11 = -1;
  }
  v58 = v11;
LABEL_13:
  v12 = v4;
  v13 = 0;
  do
  {
    if ( v7 )
    {
      v14 = 250 * (rand() % 5 + 4);
      v64[v13] = v14;
      if ( v13 > v12 )
      {
        v14 += 250 * (rand() % 5);
        v64[v13] = v14;
      }
      if ( v8 == 23 )
        v64[v13] = 4 * v14;
    }
    else
    {
      v64[v13] = 100;
    }
    ++v7;
    ++v13;
  }
  while ( v7 < (int)v3 );
  v61 = v3;
  if ( (_DWORD)v3 )
  {
    v15 = 0;
    do
    {
      v63 = 1065353216;
      v62[0] = xmmword_140278D30;
      v16 = 5873LL * (int)v60[v15];
      v62[1] = xmmword_140278D30;
      v17 = *(float *)&dword_140404A6C[v16 + 283831498];
      v18 = *(float *)&dword_140404A6C[v16 + 283831499];
      v19 = *(float *)&dword_140404A6C[v16 + 283831500];
      sub_14007B2A0(v62, (char *)v62 + 12);
      sub_14007B2A0(v62, (char *)v62 + 12);
      v20 = *(float *)v62;
      v21 = *((float *)v62 + 1);
      v22 = *((float *)v62 + 2);
      v23 = (float)(*(float *)v62 * 0.5) + v17;
      *(float *)&v56 = v23;
      v24 = (float)(*((float *)v62 + 1) * 0.5) + v18;
      v25 = (float)(*((float *)v62 + 2) * 0.5) + v19;
      *((float *)&v56 + 1) = v24;
      v57 = v25;
      if ( v15 )
      {
        if ( v15 <= v12 )
        {
          v38 = rand() % 3 + 2;
          if ( v8 == 23 )
            v38 += rand() % 3 + 2;
          for ( i = 0; i < v38; v57 = v25 )
          {
            if ( (i & 3) == 0 )
            {
              *(float *)&v56 = v23 + (float)(v20 * 0.75);
              *((float *)&v56 + 1) = v24 + (float)(v21 * 0.75);
              v57 = v25 + (float)(v22 * 0.75);
              sub_140054130(15, (unsigned int *)&v56, nullptr, (unsigned int *)v62);
              v23 = (float)(*(float *)v62 * 0.75) + (float)(v23 + (float)(v20 * 0.75));
              v24 = (float)(*((float *)v62 + 1) * 0.75) + (float)(v24 + (float)(v21 * 0.75));
              v25 = (float)(*((float *)v62 + 2) * 0.75) + (float)(v25 + (float)(v22 * 0.75));
              *(float *)&v56 = v23;
              *((float *)&v56 + 1) = v24;
              v57 = v25;
            }
            sub_140054130(17, (unsigned int *)&v56, nullptr, (unsigned int *)v62);
            v20 = *(float *)v62;
            v21 = *((float *)v62 + 1);
            v40 = *(float *)v62;
            v22 = *((float *)v62 + 2);
            ++i;
            dword_140404A6C[v16 + 283831504] -= 250;
            v23 = v23 + (float)(v40 * 0.5);
            *(float *)&v56 = v23;
            v24 = v24 + (float)(v21 * 0.5);
            *((float *)&v56 + 1) = v24;
            v25 = v25 + (float)(v22 * 0.5);
          }
        }
      }
      else if ( v11 == -1 )
      {
        v32 = sub_140054130(v8, (unsigned int *)&v56, nullptr, (unsigned int *)v62);
        v33 = *(float *)v62;
        v34 = *(float *)v62;
        dword_140404A6C[487148744] = v32;
        dword_140404A6C[v16 + 283831504] -= v64[0];
        v35 = (float)((float)(v34 * 0.5) + v23) + (float)(v33 * 0.75);
        *(float *)&v56 = v35;
        v36 = (float)((float)(*((float *)v62 + 1) * 0.5) + v24) + (float)(*((float *)v62 + 1) * 0.75);
        *((float *)&v56 + 1) = v36;
        v37 = (float)((float)(*((float *)v62 + 2) * 0.5) + v25) + (float)(*((float *)v62 + 2) * 0.75);
        v57 = v37;
        sub_140054130(15, (unsigned int *)&v56, nullptr, (unsigned int *)v62);
        *(float *)&v56 = (float)(*(float *)v62 * 0.75) + v35;
        *((float *)&v56 + 1) = (float)(*((float *)v62 + 1) * 0.75) + v36;
        v57 = (float)(*((float *)v62 + 2) * 0.75) + v37;
      }
      else
      {
        v26 = dword_140404A6C[19 * v11 + 487148757];
        LODWORD(v56) = dword_140404A6C[19 * v11 + 487148756];
        v57 = *(float *)&dword_140404A6C[19 * v11 + 487148758];
        HIDWORD(v56) = v26;
        dword_140404A6C[487148744] = sub_140054130(v8, (unsigned int *)&v56, nullptr, (unsigned int *)v62);
        dword_140404A6C[v16 + 283831504] -= v64[0];
        v27 = sub_140054130(15, (unsigned int *)&v56, nullptr, (unsigned int *)v62);
        v28 = dword_140404A6C[487148744];
        v29 = (int)v27;
        v30 = 1760LL * (int)v27;
        dword_140404A6C[v30 + 278845898] = 16;
        sub_1400E35D0(v27, v28, 0xFFFFFFFFLL, 0);
        v31 = dword_140404A6C[456202453] == 0;
        dword_140404A6C[v30 + 278845898] = 15;
        if ( !v31 && (unsigned int)v29 <= 0x3FF )
          ++dword_140404A6C[v29 + 280648157];
      }
      ++v15;
    }
    while ( v15 < v61 );
    v41 = dword_140404A6C[487148744];
    v42 = dword_140404A6C[487148677];
    v43 = 0;
    v44 = v58;
    v45 = v59;
    v56 = &dword_140404A6C[283831867];
    v46 = dword_140404A6C[1760 * dword_140404A6C[487148744] + 278845898];
    do
    {
      v47 = v60;
      v48 = 0;
      v49 = 0;
      v50 = (int)v60[v43];
      v51 = &v56[5873 * v50];
      while ( *(v51 - 279) )
      {
        if ( !*v51 )
        {
          ++v49;
          ++v48;
          break;
        }
        if ( !v51[279] )
        {
          v49 += 2;
          v48 += 2;
          break;
        }
        if ( !v51[558] )
        {
          v49 += 3;
          v48 += 3;
          break;
        }
        v49 += 4;
        v51 += 1116;
        v48 += 4;
        if ( v49 >= 16 )
          break;
      }
      v52 = 5873LL * (int)v60[v43];
      v53 = v52 * 4 + 1116 * v49;
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v53) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v53) = v42;
      if ( v43 )
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v53) = (v43 > v12) + 3;
      else
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v53) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v53) = v64[v43];
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v53) = v41;
      *(unsigned int *)((char *)&dword_140404A6C[283831603] + v53) = v46;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v53) = v45;
      *(unsigned int *)((char *)&dword_140404A6C[283831595] + v53) = *v47;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v53) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831606] + v53) = -1;
      if ( v43 )
      {
        if ( v43 <= v12 )
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v53) = -dword_140404A6C[v52 + 283831504];
      }
      else
      {
        *(unsigned int *)((char *)&dword_140404A6C[283831606] + v53) = v44;
      }
      sub_1400519F0(v50, v48);
      ++v43;
    }
    while ( v43 < v61 );
  }
  else
  {
    v42 = dword_140404A6C[487148677];
  }
  dword_140404A6C[487148677] = v42 + 1;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v55 ^ v65);
}

