/* Address: 0x14006db90 | Name: sub_14006DB90 | Size: 1330 bytes */
__int64 __fastcall sub_14006DB90(_BYTE *a1, float a2, _BYTE *a3, float a4, int a5, int a6, int a7, int a8, int a9)
{
  float v9; // xmm2_4
  __int64 v10; // r10
  float v12; // xmm8_4
  unsigned int v15; // edx
  unsigned int v16; // r9d
  float v17; // xmm9_4
  __int64 v18; // rax
  float v19; // xmm2_4
  unsigned int v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  unsigned int v23; // xmm5_4
  __int64 v24; // rax
  unsigned int v25; // ecx
  float v26; // xmm4_4
  __int64 v27; // rcx
  unsigned int v28; // ecx
  float v29; // xmm4_4
  __int64 v30; // rcx
  unsigned int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ebx
  __int64 v36; // r8
  __int64 v37; // r8
  _DWORD v39[10]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+28h] [rbp-80h]
  _DWORD v41[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v42; // [rsp+40h] [rbp-68h]

  v10 = (int)dword_140404A6C[438291413];
  v12 = v9;
  if ( dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777085] )
  {
    v15 = 5;
    v41[0] = a5;
    v16 = 0;
    v41[1] = a6;
    dword_140404A6C[438291416] = 0;
    dword_140404A6C[438291417] = 5;
    v17 = 0.0;
    v41[2] = a7;
    v41[3] = a8;
    if ( *a1 )
    {
      a3 = a1;
      while ( a3 - a1 < 1000 )
      {
        v18 = (char)*a3;
        v19 = *(float *)&dword_140404A6C[3592 * v10 + 72779656 + 4 * v18] * a4;
        *(float *)&v20 = (float)((float)(a4 * *(float *)&dword_140404A6C[3592 * v10 + 72779655 + 4 * v18]) + a2) + v17;
        v21 = (float)(*(float *)&dword_140404A6C[3592 * v10 + 72779656 + 4 * v18]
                    + *(float *)&dword_140404A6C[3592 * v10 + 72779654 + 4 * v18])
            * a4;
        if ( a9 )
          v22 = (float)(*(float *)&dword_140404A6C[3592 * v10 + 72779656 + 4 * v18]
                      + *(float *)&dword_140404A6C[3592 * v10 + 72779654 + 4 * v18])
              * a4;
        else
          v22 = *(float *)&dword_140404A6C[3592 * v10 + 72779656 + 4 * v18] * a4;
        *(float *)&v23 = *(float *)&v20 + (float)(a4 * *(float *)&dword_140404A6C[3592 * v10 + 72779653 + 4 * v18]);
        v24 = (int)(v16 * v15);
        dword_140404A6C[v24 + 438291418] = v20;
        *(float *)&dword_140404A6C[v24 + 438291419] = v12 + v22;
        dword_140404A6C[v24 + 438291420] = 0;
        *(_QWORD *)&dword_140404A6C[dword_140404A6C[438291416] * dword_140404A6C[438291417] + 438291421] = *(_QWORD *)&dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777349 + 8 * (char)*a3];
        v25 = ++dword_140404A6C[438291416];
        if ( a9 )
          v26 = v21;
        else
          v26 = v19;
        v27 = (int)(v25 * dword_140404A6C[438291417]);
        dword_140404A6C[v27 + 438291418] = v23;
        *(float *)&dword_140404A6C[v27 + 438291419] = v12 + v26;
        dword_140404A6C[v27 + 438291420] = 0;
        *(_QWORD *)&dword_140404A6C[dword_140404A6C[438291416] * dword_140404A6C[438291417] + 438291421] = *(_QWORD *)&dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777351 + 8 * (char)*a3];
        v28 = ++dword_140404A6C[438291416];
        if ( a9 )
          v29 = v19;
        else
          v29 = v21;
        v30 = (int)(v28 * dword_140404A6C[438291417]);
        dword_140404A6C[v30 + 438291418] = v23;
        *(float *)&dword_140404A6C[v30 + 438291419] = v12 + v29;
        dword_140404A6C[v30 + 438291420] = 0;
        *(_QWORD *)&dword_140404A6C[dword_140404A6C[438291416] * dword_140404A6C[438291417] + 438291421] = *(_QWORD *)&dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777353 + 8 * (char)*a3];
        v31 = ++dword_140404A6C[438291416];
        if ( a9 )
          v21 = v19;
        v32 = (int)(v31 * dword_140404A6C[438291417]);
        dword_140404A6C[v32 + 438291418] = v20;
        *(float *)&dword_140404A6C[v32 + 438291419] = v12 + v21;
        dword_140404A6C[v32 + 438291420] = 0;
        *(_QWORD *)&dword_140404A6C[dword_140404A6C[438291416] * dword_140404A6C[438291417] + 438291421] = *(_QWORD *)&dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777355 + 8 * (char)*a3];
        v10 = (int)dword_140404A6C[438291413];
        v16 = ++dword_140404A6C[438291416];
        v33 = (char)*a3++;
        v17 = v17 + (float)(a4 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v33]);
        if ( !*a3 )
          break;
        v15 = dword_140404A6C[438291417];
      }
    }
    unk_140404170(34962, dword_140404A6C[451221644], a3);
    unk_140404190(
      34962,
      4 * dword_140404A6C[438291416] * dword_140404A6C[438291417],
      &dword_140404A6C[438291418],
      35040);
    unk_1404042E0(dword_140404A6C[451221605]);
    unk_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
    unk_140404050(3553, dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777086]);
    unk_140404238(0);
    unk_140404238(1);
    unk_1404044A8(0, 3, 5126);
    v40 = 12;
    v39[8] = 4 * dword_140404A6C[438291417];
    unk_1404044A8(1, 2, 5126);
    unk_140404470(2, v41);
    v35 = 6 * ((signed int)dword_140404A6C[438291416] / 4);
    if ( v35 > 98304 )
      v35 = 98304;
    unk_140404170(34963, dword_140404A6C[456807040], v34);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))&flt_140384000[131076])(4, (unsigned int)v35, 5123);
    unk_140404170(34963, 0, v36);
    unk_140404230(0);
    unk_140404230(1);
    unk_140404170(34962, 0, v37);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v39 ^ v42);
}

