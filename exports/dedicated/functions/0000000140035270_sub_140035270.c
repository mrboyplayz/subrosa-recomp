/* Address: 0x140035270 | Name: sub_140035270 | Size: 684 bytes */
_BOOL8 __fastcall sub_140035270(float *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  int *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rax
  int v16; // xmm1_4
  int v17; // xmm0_4
  __int64 v18; // rax
  int v19; // xmm1_4
  int v20; // xmm0_4
  __int64 v21; // rax
  int v22; // xmm1_4
  __int64 v23; // rax
  int v24; // xmm1_4
  int v25; // xmm6_4
  int v26; // xmm7_4
  int v27; // xmm8_4
  float v28; // xmm2_4
  int v29; // xmm1_4
  float v30; // xmm2_4
  int v31; // xmm1_4
  int v33; // [rsp+48h] [rbp-69h] BYREF
  int v34; // [rsp+4Ch] [rbp-65h]
  int v35; // [rsp+50h] [rbp-61h]
  _DWORD v36[4]; // [rsp+58h] [rbp-59h] BYREF
  _DWORD v37[4]; // [rsp+68h] [rbp-49h] BYREF
  _DWORD v38[4]; // [rsp+78h] [rbp-39h] BYREF
  _DWORD v39[4]; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v40[6]; // [rsp+98h] [rbp-19h] BYREF
  float v41; // [rsp+108h] [rbp+57h] BYREF

  v6 = 0;
  a1[6] = 1.0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  v10 = (int *)(a4 + 8);
  v11 = 0;
  v12 = a6;
  do
  {
    v13 = *(_QWORD *)(a2 + 24);
    v14 = *(_DWORD *)(v13 + v11 + 4) == 4;
    v15 = 3 * *(_DWORD *)(v13 + v11 + 8);
    v16 = *(_DWORD *)(a3 + 4 * v15 + 4);
    v37[0] = *(_DWORD *)(a3 + 4 * v15);
    v17 = *(_DWORD *)(a3 + 4 * v15 + 8);
    LODWORD(v15) = *(_DWORD *)(v13 + v11 + 12);
    v37[2] = v17;
    v37[1] = v16;
    v18 = 3 * (int)v15;
    v19 = *(_DWORD *)(a3 + 4 * v18 + 4);
    v39[0] = *(_DWORD *)(a3 + 4 * v18);
    v20 = *(_DWORD *)(a3 + 4 * v18 + 8);
    LODWORD(v18) = *(_DWORD *)(v13 + v11 + 16);
    v39[2] = v20;
    v39[1] = v19;
    v21 = 3 * (int)v18;
    v22 = *(_DWORD *)(a3 + 4 * v21 + 4);
    v36[0] = *(_DWORD *)(a3 + 4 * v21);
    v36[2] = *(_DWORD *)(a3 + 4 * v21 + 8);
    v36[1] = v22;
    if ( v14 )
    {
      v23 = 3 * *(_DWORD *)(v13 + v11 + 20);
      v24 = *(_DWORD *)(a3 + 4 * v23 + 4);
      v40[0] = *(_DWORD *)(a3 + 4 * v23);
      v40[2] = *(_DWORD *)(a3 + 4 * v23 + 8);
      v40[1] = v24;
    }
    v25 = *(v10 - 2);
    v26 = *(v10 - 1);
    v27 = *v10;
    v38[0] = v25;
    v38[1] = v26;
    v38[2] = v27;
    if ( (unsigned int)sub_140048690(
                         (unsigned int)&v33,
                         (unsigned int)v38,
                         (unsigned int)&v41,
                         a5,
                         v12,
                         (__int64)v37,
                         (__int64)v39,
                         (__int64)v36) )
    {
      v28 = v41;
      if ( v41 < a1[6] )
      {
        v29 = v34;
        *(_DWORD *)a1 = v33;
        *((_DWORD *)a1 + 2) = v35;
        *((_DWORD *)a1 + 1) = v29;
        *((_DWORD *)a1 + 3) = v25;
        *((_DWORD *)a1 + 4) = v26;
        *((_DWORD *)a1 + 5) = v27;
        a1[6] = v28;
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + v11 + 4) == 4
      && (unsigned int)sub_140048690(
                         (unsigned int)&v33,
                         (unsigned int)v38,
                         (unsigned int)&v41,
                         a5,
                         v12,
                         (__int64)v37,
                         (__int64)v36,
                         (__int64)v40) )
    {
      v30 = v41;
      if ( v41 < a1[6] )
      {
        v31 = v34;
        *(_DWORD *)a1 = v33;
        *((_DWORD *)a1 + 2) = v35;
        *((_DWORD *)a1 + 1) = v31;
        *((_DWORD *)a1 + 3) = v25;
        *((_DWORD *)a1 + 4) = v26;
        *((_DWORD *)a1 + 5) = v27;
        a1[6] = v30;
      }
    }
    ++v6;
    v10 += 3;
    v11 += 36;
  }
  while ( v6 < *(_DWORD *)(a2 + 16) );
  return a1[6] < 1.0;
}

