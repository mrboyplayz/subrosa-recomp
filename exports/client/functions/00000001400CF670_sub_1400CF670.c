/* Address: 0x1400cf670 | Name: sub_1400CF670 | Size: 1538 bytes */
__int64 __fastcall sub_1400CF670(signed int a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r14
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm9_4
  float v17; // xmm12_4
  unsigned int v18; // xmm1_4
  signed int v19; // ecx
  unsigned int v20; // r9d
  float v21; // xmm12_4
  float v22; // xmm10_4
  unsigned int v23; // xmm0_4
  float v24; // xmm11_4
  unsigned int v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // eax
  float v31; // xmm10_4
  float v32; // xmm11_4
  unsigned int v33; // edx
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // [rsp+20h] [rbp-A8h] BYREF
  float v41; // [rsp+24h] [rbp-A4h]
  float v42; // [rsp+28h] [rbp-A0h]
  float v43[4]; // [rsp+30h] [rbp-98h] BYREF

  v2 = 1760LL * a1;
  result = dword_140404A6C[v2 + 278845972];
  v4 = (int)dword_140404A6C[v2 + 278845898];
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    dword_140404A6C[v2 + 278845972] = result;
  }
  v5 = (int)dword_140404A6C[v2 + 278845902];
  if ( (_DWORD)v5 != -1 && dword_140404A6C[283831448] == 2 )
  {
    v6 = (int)dword_140404A6C[v2 + 278845915];
    result = dword_140404A6C[v2 + 278845977] & 1;
    if ( !(_DWORD)result )
      dword_140404A6C[v2 + 278845976] = 0;
    if ( ((_DWORD)v4 == 11 || (_DWORD)v4 == 5) && !(_DWORD)result )
    {
      dword_140404A6C[v2 + 278845972] = 0;
      v7 = 6;
      if ( (_DWORD)v4 != 5 )
        v7 = 2;
    }
    else
    {
      v7 = 6;
      if ( (_DWORD)v4 != 5 )
        v7 = 2;
      if ( (_DWORD)result )
      {
        result = dword_140404A6C[v2 + 278845976];
        if ( (int)result < v7 || (_DWORD)v4 == 11 || (_DWORD)v4 == 5 )
        {
          result = (unsigned int)(result + 1);
          dword_140404A6C[v2 + 278845976] = result;
        }
      }
    }
    if ( !dword_140404A6C[v2 + 278845974] && (int)dword_140404A6C[v2 + 278845906] > 0 )
    {
      result = (int)dword_140404A6C[v2 + 278845907];
      if ( (int)dword_140404A6C[1760 * result + 278845974] > 0 )
      {
        dword_140404A6C[v2 + 278845974] = 1;
        result = (int)dword_140404A6C[v2 + 278845907];
        --dword_140404A6C[1760 * result + 278845974];
      }
    }
    if ( (int)dword_140404A6C[v2 + 278845972] <= 0
      && dword_140404A6C[v2 + 278845976] == v7
      && (int)dword_140404A6C[v2 + 278845974] > 0 )
    {
      v8 = v5;
      v9 = 47 * v6;
      v10 = 1268 * v4;
      v11 = *(float *)&dword_140404A6C[47 * v6 + 18215718];
      v12 = *(float *)&dword_140404A6C[47 * v6 + 18215719];
      v13 = *(float *)&dword_140404A6C[47 * v6 + 18215720];
      v14 = *(float *)&dword_140404A6C[47 * v6 + 18215731];
      v15 = *(float *)&dword_140404A6C[47 * v6 + 18215732];
      v16 = -*(float *)&dword_140404A6C[1268 * v4 + 278521295];
      v17 = *(float *)&dword_140404A6C[47 * v6 + 18215730];
      sub_1400A56B0(&v40, *(float *)&dword_140404A6C[1268 * v4 + 278521296], 0.0);
      v18 = dword_140404A6C[v9 + 18215716];
      v19 = dword_140404A6C[v10 + 278521292];
      v20 = dword_140404A6C[7166 * v8 + 280651305];
      v21 = (float)((float)(v17 * v16) + v11) + v40;
      v40 = *(float *)&dword_140404A6C[v9 + 18215715];
      v22 = (float)((float)(v14 * v16) + v12) + v41;
      v23 = dword_140404A6C[v9 + 18215717];
      v24 = (float)((float)(v15 * v16) + v13) + v42;
      v43[0] = v21;
      v41 = *(float *)&v18;
      v43[1] = v22;
      v42 = *(float *)&v23;
      v43[2] = v24;
      sub_14004E8A0(v19, (unsigned int *)&v40, v43, v20);
      *(float *)&v25 = *(float *)&dword_140404A6C[v9 + 18215715] - *(float *)&dword_140404A6C[v9 + 18215718];
      v26 = *(float *)&dword_140404A6C[v9 + 18215716] - *(float *)&dword_140404A6C[v9 + 18215719];
      v27 = *(float *)&dword_140404A6C[v9 + 18215717] - *(float *)&dword_140404A6C[v9 + 18215720];
      v40 = *(float *)&v25;
      v41 = v26;
      v42 = v27;
      if ( dword_140404A6C[456202453] )
      {
        v28 = dword_140404A6C[283831474];
        v29 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v29) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v29) = v28;
        v30 = dword_140404A6C[v10 + 278521292];
        *(unsigned int *)((char *)&dword_140404A6C[297756287] + v29) = v25;
        *(float *)((char *)&dword_140404A6C[297756288] + v29) = v26;
        *(float *)((char *)&dword_140404A6C[297756289] + v29) = v27;
        *(float *)((char *)&dword_140404A6C[297756290] + v29) = v21;
        *(float *)((char *)&dword_140404A6C[297756291] + v29) = v22;
        *(float *)((char *)&dword_140404A6C[297756292] + v29) = v24;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v29) = v30;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v29) = a1;
      }
      sub_1400A56B0(
        &v40,
        *(float *)&dword_140404A6C[v10 + 278521296] + *(float *)&dword_140404A6C[v10 + 278521296],
        0.0);
      v31 = v22 + v41;
      v32 = v24 + v42;
      v33 = dword_140404A6C[v2 + 278845974];
      v34 = v40 + v21;
      v35 = *(float *)&dword_140404A6C[6 * dword_140404A6C[v10 + 278521292] + 437914197];
      dword_140404A6C[v2 + 278845972] = dword_140404A6C[v10 + 278521291];
      result = v33 - 1;
      dword_140404A6C[v2 + 278845974] = result;
      v36 = (float)(v35 + v35) / *(float *)&dword_140404A6C[v2 + 278845899];
      *(float *)&dword_140404A6C[v9 + 18215718] = (float)((float)-v36 * v34) + *(float *)&dword_140404A6C[v9 + 18215718];
      *(float *)&dword_140404A6C[v9 + 18215719] = (float)((float)-v36 * v31) + *(float *)&dword_140404A6C[v9 + 18215719];
      *(float *)&dword_140404A6C[v9 + 18215720] = (float)((float)-v36 * v32) + *(float *)&dword_140404A6C[v9 + 18215720];
      v37 = (float)(*(float *)&dword_140404A6C[v9 + 18215727] * 0.03125)
          - (float)(*(float *)&dword_140404A6C[v9 + 18215730] * 0.625);
      v38 = (float)(*(float *)&dword_140404A6C[v9 + 18215728] * 0.03125)
          - (float)(*(float *)&dword_140404A6C[v9 + 18215731] * 0.625);
      v39 = (float)(*(float *)&dword_140404A6C[v9 + 18215729] * 0.03125)
          - (float)(*(float *)&dword_140404A6C[v9 + 18215732] * 0.625);
      *(float *)&dword_140404A6C[v9 + 18215733] = (float)((float)((float)(v38 * v32) - (float)(v39 * v31)) * v36)
                                                + *(float *)&dword_140404A6C[v9 + 18215733];
      *(float *)&dword_140404A6C[v9 + 18215734] = (float)((float)((float)(v34 * v39) - (float)(v37 * v32)) * v36)
                                                + *(float *)&dword_140404A6C[v9 + 18215734];
      *(float *)&dword_140404A6C[v9 + 18215735] = (float)((float)((float)(v37 * v31) - (float)(v34 * v38)) * v36)
                                                + *(float *)&dword_140404A6C[v9 + 18215735];
      if ( v33 == 1 && (int)dword_140404A6C[v2 + 278845906] > 0 )
      {
        result = (int)dword_140404A6C[v2 + 278845907];
        if ( (int)dword_140404A6C[1760 * result + 278845974] > 0 )
        {
          dword_140404A6C[v2 + 278845974] = 1;
          result = (int)dword_140404A6C[v2 + 278845907];
          --dword_140404A6C[1760 * result + 278845974];
        }
      }
    }
  }
  return result;
}

