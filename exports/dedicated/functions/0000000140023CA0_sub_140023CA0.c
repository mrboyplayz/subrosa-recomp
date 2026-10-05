/* Address: 0x140023ca0 | Name: sub_140023CA0 | Size: 414 bytes */
_BOOL8 __fastcall sub_140023CA0(float *a1, int *a2, int a3, __int64 a4, int a5)
{
  int v5; // esi
  int *v10; // rdi
  int v11; // xmm6_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // xmm0_4
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // xmm1_4
  int v21; // xmm0_4
  int v22; // xmm1_4
  float v23; // xmm2_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // xmm0_4
  int v28; // xmm1_4
  int v30; // [rsp+58h] [rbp-31h] BYREF
  int v31; // [rsp+5Ch] [rbp-2Dh]
  int v32; // [rsp+60h] [rbp-29h]
  _DWORD v33[4]; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v34[4]; // [rsp+78h] [rbp-11h] BYREF
  _DWORD v35[4]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v36[16]; // [rsp+98h] [rbp+Fh] BYREF
  float v37; // [rsp+E8h] [rbp+5Fh] BYREF

  v5 = 0;
  a1[7] = 65536.0;
  if ( *a2 <= 0 )
    return 0;
  v10 = a2 + 3;
  v11 = a5;
  do
  {
    v12 = *(v10 - 1);
    v35[0] = *(v10 - 2);
    v13 = *v10;
    v35[1] = v12;
    v14 = v10[1];
    v35[2] = v13;
    v15 = v10[2];
    v34[0] = v14;
    v16 = v10[3];
    v34[1] = v15;
    v17 = v10[4];
    v34[2] = v16;
    v18 = v10[5];
    v33[0] = v17;
    v19 = v10[6];
    v33[1] = v18;
    v20 = v10[7];
    v33[2] = v19;
    v21 = v10[8];
    v30 = v20;
    v22 = v10[9];
    v31 = v21;
    v32 = v22;
    if ( (unsigned int)sub_140025D20(
                         (unsigned int)v36,
                         (unsigned int)&v30,
                         (unsigned int)&v37,
                         a3,
                         a4,
                         v11,
                         (__int64)v35,
                         (__int64)v34,
                         (__int64)v33) )
    {
      v23 = v37;
      if ( v37 < a1[7] )
      {
        v24 = v36[1];
        *a1 = *(float *)v36;
        v25 = v36[2];
        *((_DWORD *)a1 + 1) = v24;
        v26 = v30;
        *((_DWORD *)a1 + 2) = v25;
        v27 = v31;
        *((_DWORD *)a1 + 3) = v26;
        v28 = v32;
        *((_DWORD *)a1 + 4) = v27;
        *((_DWORD *)a1 + 5) = v28;
        a1[7] = v23;
      }
    }
    ++v5;
    v10 += 12;
  }
  while ( v5 < *a2 );
  return a1[7] < 65536.0;
}

