/* Address: 0x1400ee0a0 | Name: sub_1400EE0A0 | Size: 852 bytes */
__int64 __fastcall sub_1400EE0A0(
        unsigned int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  int v9; // r12d
  unsigned int v10; // r15d
  unsigned __int8 *v11; // r11
  int v12; // ebx
  signed int v13; // ecx
  unsigned int v14; // ebp
  unsigned int v15; // r13d
  signed int v16; // r14d
  unsigned int v17; // r12d
  int v18; // r15d
  int v19; // r9d
  int v20; // esi
  int v21; // edi
  int v22; // r10d
  int v23; // edx
  int v24; // r8d
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int *v28; // rbx
  __int64 v29; // rax
  signed int v30; // r10d
  unsigned int v31; // ecx
  signed int i; // edx
  signed int v33; // eax
  __int64 v35; // [rsp+0h] [rbp-158h] BYREF
  unsigned int v36; // [rsp+30h] [rbp-128h] BYREF
  int v37; // [rsp+34h] [rbp-124h]
  unsigned int v38; // [rsp+38h] [rbp-120h]
  char v39; // [rsp+40h] [rbp-118h] BYREF
  __int64 v40; // [rsp+50h] [rbp-108h]
  int v41; // [rsp+70h] [rbp-E8h]
  int v42; // [rsp+F8h] [rbp-60h]
  __int64 v43; // [rsp+100h] [rbp-58h]
  __int64 v44; // [rsp+108h] [rbp-50h]
  __int64 v45; // [rsp+110h] [rbp-48h]
  __int64 v46; // [rsp+118h] [rbp-40h]
  __int64 v47; // [rsp+120h] [rbp-38h]

  v37 = a4;
  v9 = a4;
  v38 = a1;
  v10 = a1;
  if ( a2 )
  {
    v40 = 0;
    v41 = 0;
    v45 = a3;
    v46 = a3 + a2;
    v44 = v46;
    v43 = a3;
    v42 = 0;
    v11 = (unsigned __int8 *)sub_140166160(
                               (unsigned int)&v39,
                               (unsigned int)&dword_140404A6C[468765293],
                               (unsigned int)&dword_140404A6C[468765294],
                               (unsigned int)&v36,
                               0);
    if ( v11 )
    {
      v12 = dword_140404A6C[468765293];
      v13 = dword_140404A6C[468765294];
      v14 = v36;
      v15 = v36 * dword_140404A6C[468765293];
      v16 = 0;
      v36 *= dword_140404A6C[468765293];
      if ( (int)dword_140404A6C[468765294] > 0 )
      {
        v17 = dword_140404A6C[293250409];
        v18 = 0;
        do
        {
          v19 = 0;
          if ( v12 > 0 )
          {
            v20 = v18;
            v21 = v18;
            do
            {
              v22 = v11[v21];
              v23 = v11[v21 + 1];
              v24 = v11[v21 + 2];
              if ( v14 == 4 )
                v25 = v11[v20 + 3];
              else
                v25 = 255;
              v26 = v13 - v16;
              if ( v17 )
                dword_140404A6C[v19 + 468765295 + v12 * (v26 - 1)] = (v24 << 8) + v25 + (v23 << 16) + (v22 << 24);
              else
                dword_140404A6C[v19 + 468765295 + v12 * (v26 - 1)] = (v25 << 24) + v22 + (v24 << 16) + (v23 << 8);
              v12 = dword_140404A6C[468765293];
              ++v19;
              v13 = dword_140404A6C[468765294];
              v21 += v14;
              v20 += 4;
            }
            while ( v19 < (int)dword_140404A6C[468765293] );
            v15 = v36;
          }
          ++v16;
          v18 += v15;
        }
        while ( v16 < v13 );
        v10 = v38;
        v9 = v37;
      }
      free(v11);
      if ( ((dword_140404A6C[468765293] - 1) & dword_140404A6C[468765293]) == 0 )
      {
        v27 = dword_140404A6C[468765294];
        if ( ((dword_140404A6C[468765294] - 1) & dword_140404A6C[468765294]) == 0 )
        {
          v28 = &dword_140404A6C[44 * v10 + 284024933];
          *v28 = dword_140404A6C[468765293];
          v28[1] = v27;
          LOBYTE(dword_140404A6C[284205165]) = 0;
          v28[5] = a5;
          v28[6] = a6;
          v28[7] = a7;
          v28[8] = a8;
          v28[2] = 1;
          v28[3] = 6408;
          v28[4] = 6408;
          v28[10] = 0;
          free(*((void **)v28 + 6));
          v29 = j__malloc_base((int)(4 * *v28 * v28[1]));
          v30 = 0;
          *((_QWORD *)v28 + 6) = v29;
          if ( (int)v28[1] > 0 )
          {
            do
            {
              v31 = *v28;
              for ( i = 0; i < (int)*v28; v31 = *v28 )
              {
                v33 = i + v31 * v30;
                if ( dword_140404A6C[293250409] )
                {
                  LOBYTE(dword_140404A6C[v33 + 468765295]) = 0;
                  dword_140404A6C[v33 + 468765295] |= a9;
                }
                else
                {
                  HIBYTE(dword_140404A6C[v33 + 468765295]) = 0;
                  dword_140404A6C[v33 + 468765295] |= a9 << 24;
                }
                ++i;
                *(_DWORD *)(*((_QWORD *)v28 + 6) + 4LL * v33) = dword_140404A6C[v33 + 468765295];
              }
              ++v30;
            }
            while ( v30 < (int)v28[1] );
            v9 = v37;
          }
          if ( v9 )
            sub_14009A370(v10);
          sub_14014D3E0(v10, 0);
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v47);
}

