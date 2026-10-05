/* Address: 0x1400b3a80 | Name: sub_1400B3A80 | Size: 1582 bytes */
__int64 __fastcall sub_1400B3A80(unsigned int a1, int a2)
{
  unsigned int *v2; // r14
  __int64 result; // rax
  int v4; // r13d
  int v5; // ebx
  __int64 v6; // r15
  __int64 v7; // r12
  float v8; // xmm3_4
  __int64 v9; // rdi
  __int64 v10; // rsi
  float v11; // xmm7_4
  float v12; // xmm8_4
  __int64 v13; // rcx
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  float v18; // xmm3_4
  float v19; // xmm6_4
  __int64 v20; // r10
  __int64 v21; // r13
  float v22; // xmm1_4
  float v23; // xmm0_4
  int v24; // edx
  __int64 v25; // rcx
  float v26; // xmm3_4
  float v27; // xmm2_4
  __int64 v28; // rcx
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm5_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm7_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rax
  float v46; // [rsp+58h] [rbp-B0h] BYREF
  float v47; // [rsp+5Ch] [rbp-ACh]
  float v48; // [rsp+60h] [rbp-A8h]
  float v49; // [rsp+68h] [rbp-A0h] BYREF
  float v50; // [rsp+6Ch] [rbp-9Ch]
  float v51[24]; // [rsp+70h] [rbp-98h]

  v2 = &dword_140404A6C[282486067];
  result = a1;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( v5 != 12 && v5 != 15 )
    {
      v8 = *((float *)v2 + 1);
      v9 = 7166LL * (int)result;
      v10 = v6 * 4 + v9 * 4;
      v11 = *(float *)&dword_140404A6C[v6 + 280651440 + v9];
      v12 = *(float *)&dword_140404A6C[v6 + 280651441 + v9];
      v13 = v9 * 4 + 12 * (v7 + (int)*v2);
      v14 = *(float *)((char *)&dword_140404A6C[280651452] + v13);
      v15 = *(float *)((char *)&dword_140404A6C[280651453] + v13);
      v16 = *(float *)((char *)&dword_140404A6C[280651454] + v13);
      v17 = *(float *)&dword_140404A6C[v6 + 280651442 + v9];
      v46 = (float)(v14 * (float)(v8 * -0.5)) + v11;
      v47 = (float)(v15 * (float)(v8 * -0.5)) + v12;
      v48 = (float)(v16 * (float)(v8 * -0.5)) + v17;
      if ( v5 == 11 || v5 == 14 )
      {
        v46 = (float)(v14 * (float)(v8 * -0.125)) + v11;
        v47 = (float)(v15 * (float)(v8 * -0.125)) + v12;
        v48 = (float)(v16 * (float)(v8 * -0.125)) + v17;
      }
      v18 = v8 * 0.5;
      v51[0] = (float)(v16 * v18) + v17;
      v19 = *((float *)v2 + 2);
      v49 = (float)(v14 * v18) + v11;
      v50 = (float)(v15 * v18) + v12;
      if ( (unsigned int)sub_140037220(v4, &v46, &v49, v19) )
      {
        v20 = *(int *)((char *)&dword_140404A6C[280651439] + v10);
        v21 = 5210LL * v4;
        v22 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v20 + 18215716];
        v46 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v20 + 18215715];
        v23 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v20 + 18215717];
        v47 = v22;
        v24 = dword_140404A6C[v21 + 129716719];
        v25 = 47LL * v24;
        v48 = v23;
        v26 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[v25 + 18215716];
        v27 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[v25 + 18215717];
        v49 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[v25 + 18215715];
        v50 = v26;
        v51[0] = v27;
        sub_1400052C0(
          v20,
          v24,
          (unsigned int *)&v46,
          (unsigned int *)&v49,
          &dword_140404A6C[73006984],
          v19 - *(float *)&dword_140404A6C[73006988],
          0x3ECCCCCDu,
          0.03125,
          0x3D800000u);
        if ( a2 == dword_140404A6C[v9 + 280651315] || v5 != 7 && (unsigned int)v5 > 4 && (unsigned int)v5 < 0xA )
          goto LABEL_30;
        v28 = 47LL * (int)dword_140404A6C[v21 + 129716719];
        v29 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[v28 + 18215716];
        v30 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[v28 + 18215717];
        v31 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[v28 + 18215715];
        v32 = *(float *)&dword_140404A6C[v28 + 18215736];
        v33 = v32 * v29;
        v34 = (float)(v32 * v30) - (float)(*(float *)&dword_140404A6C[v28 + 18215738] * v31);
        v35 = 0.2;
        v36 = (float)((float)(*(float *)&dword_140404A6C[v28 + 18215737] * v31) - v33)
            + *(float *)&dword_140404A6C[v28 + 18215720];
        v46 = (float)((float)(*(float *)&dword_140404A6C[v28 + 18215738] * v29)
                    - (float)(*(float *)&dword_140404A6C[v28 + 18215737] * v30))
            + *(float *)&dword_140404A6C[v28 + 18215718];
        v37 = v34 + *(float *)&dword_140404A6C[v28 + 18215719];
        v38 = v46 - *(float *)((char *)&dword_140404A6C[280651446] + v10);
        v48 = v36;
        v39 = v36 - *(float *)((char *)&dword_140404A6C[280651448] + v10);
        v47 = v37;
        v49 = v38;
        v40 = v37 - *(float *)((char *)&dword_140404A6C[280651447] + v10);
        v51[0] = v39;
        v50 = v40;
        if ( (unsigned int)(v5 - 10) <= 1 || (unsigned int)(v5 - 13) <= 1 )
          v35 = 0.33333334;
        if ( dword_140404A6C[v9 + 280651319] )
          goto LABEL_30;
        if ( (float)((float)((float)(v40 * *(float *)&dword_140404A6C[73006985])
                           + (float)(v38 * *(float *)&dword_140404A6C[73006984]))
                   + (float)(v39 * *(float *)&dword_140404A6C[73006986])) <= v35 )
          goto LABEL_30;
        dword_140404A6C[v9 + 280651318] -= 120;
        if ( dword_140404A6C[v9 + 280651318] < 0xFFFFFF89 && dword_140404A6C[v9 + 280651318] != 0 )
          goto LABEL_30;
        if ( dword_140404A6C[456202453] )
        {
          v41 = dword_140404A6C[283831474];
          v42 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v42) = 9;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v42) = v41;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v42) = dword_140404A6C[283785968];
          *(unsigned int *)((char *)&dword_140404A6C[297756287] + v42) = dword_140404A6C[v9 + 280651335];
          *(unsigned int *)((char *)&dword_140404A6C[297756288] + v42) = dword_140404A6C[v9 + 280651336];
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v42) = dword_140404A6C[v9 + 280651337];
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v42) = 1065353216;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v42) = 1056964608;
        }
        v43 = (int)dword_140404A6C[v21 + 129716714];
        if ( (_DWORD)v43 != -1 )
        {
          v44 = dword_140404A6C[v9 + 280651305];
          if ( (_DWORD)v44 != -1 )
            sub_140116D80((unsigned int)v43, v44, 100);
        }
        v45 = (int)dword_140404A6C[v9 + 280651305];
        if ( (_DWORD)v45 == -1
          || (_DWORD)v43 == -1
          || dword_140404A6C[3597 * v43 + 71856286] != dword_140404A6C[3597 * v45 + 71856286] )
        {
LABEL_30:
          v4 = a2;
        }
        else
        {
          sub_14011B7F0((unsigned int)v43, 100, 14388 * v45, 0x140000000uLL);
          v4 = a2;
        }
      }
      result = a1;
    }
    ++v5;
    v7 += 26;
    v2 += 25;
    v6 += 78;
  }
  while ( v5 < 16 );
  return result;
}

