/* Address: 0x140068fc0 | Name: sub_140068FC0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140068FC0(int a1, char *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  unsigned int v4; // r15d
  int *v5; // rdi
  int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // r10
  __int64 v9; // r12
  unsigned int *v10; // rsi
  int v11; // r8d
  int v12; // r11d
  __int64 v13; // rdx
  int v14; // r9d
  unsigned int v15; // r12d
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  signed int v18; // esi
  int v19; // ebp
  int v20; // r15d
  int v21; // r9d
  __int64 v22; // r8
  signed int v23; // eax
  signed int *i; // rcx
  signed int v25; // edx
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rax
  __int64 v30; // r8
  float v31; // xmm3_4
  int v32; // r11d
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  int v36; // edi
  __int64 v37; // r13
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // r8
  __int64 v41; // r10
  __int64 v42; // [rsp-20h] [rbp-10118h] BYREF
  unsigned int v43; // [rsp+30h] [rbp-100C8h]
  unsigned int v44; // [rsp+34h] [rbp-100C4h]
  int v45; // [rsp+38h] [rbp-100C0h]
  _DWORD v46[8192]; // [rsp+40h] [rbp-100B8h] BYREF
  __int64 v47; // [rsp+8040h] [rbp-80B8h]

  v2 = 49166LL * a1;
  if ( (int)dword_140404A6C[v2 + 433435865] < 4096 && (unsigned int)sub_140079840(a2) )
  {
    v3 = dword_140404A6C[468765293];
    v4 = dword_140404A6C[468765294];
    v5 = (int *)&dword_140404A6C[v2 + 433435853];
    v6 = dword_140404A6C[v2 + 433435853];
    if ( v6 > 0 )
      MEMORY[0x1401FCD30](v46, 0, 4LL * (unsigned int)v6);
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
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, int, _QWORD))&flt_140384000[131090])(
              3553,
              0,
              v15,
              (unsigned int)v18,
              v19,
              v20,
              6408,
              5121,
              *(_QWORD *)&dword_140404A6C[v2 + 433435863]);
            return MEMORY[0x1401F8B20]((unsigned __int64)&v42 ^ v47);
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
  return MEMORY[0x1401F8B20]((unsigned __int64)&v42 ^ v47);
}

