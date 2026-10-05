/* Address: 0x140033610 | Name: sub_140033610 | Size: 414 bytes */
_BOOL8 __fastcall sub_140033610(float *a1, int *a2, int a3, __int64 a4, int a5)
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
  float v21; // xmm2_4
  int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  __int64 v28; // [rsp+30h] [rbp-59h]
  int v29; // [rsp+50h] [rbp-39h]
  _DWORD v30[4]; // [rsp+58h] [rbp-31h] BYREF
  _DWORD v31[4]; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v32[4]; // [rsp+78h] [rbp-11h] BYREF
  _DWORD v33[4]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v34[16]; // [rsp+98h] [rbp+Fh] BYREF
  float v35; // [rsp+E8h] [rbp+5Fh] BYREF

  v5 = 0;
  a1[7] = 65536.0;
  if ( *a2 <= 0 )
    return 0;
  v10 = a2 + 3;
  v11 = a5;
  do
  {
    v12 = *(v10 - 1);
    v33[0] = *(v10 - 2);
    v13 = *v10;
    v33[1] = v12;
    v14 = v10[1];
    v33[2] = v13;
    v15 = v10[2];
    v32[0] = v14;
    v16 = v10[3];
    v32[1] = v15;
    v17 = v10[4];
    v32[2] = v16;
    v18 = v10[5];
    v31[0] = v17;
    v19 = v10[6];
    v31[1] = v18;
    v20 = v10[7];
    v31[2] = v19;
    LODWORD(v28) = v11;
    if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, int))sub_140035690)(
                         (unsigned int)v34,
                         (unsigned int)v30,
                         (unsigned int)&v35,
                         a3,
                         a4,
                         v28,
                         (__int64)v33,
                         (__int64)v32,
                         (__int64)v31,
                         v29,
                         v20,
                         v10[9]) )
    {
      v21 = v35;
      if ( v35 < a1[7] )
      {
        v22 = v34[1];
        *a1 = *(float *)v34;
        v23 = v34[2];
        *((_DWORD *)a1 + 1) = v22;
        v24 = v30[0];
        *((_DWORD *)a1 + 2) = v23;
        v25 = v30[1];
        *((_DWORD *)a1 + 3) = v24;
        v26 = v30[2];
        *((_DWORD *)a1 + 4) = v25;
        *((_DWORD *)a1 + 5) = v26;
        a1[7] = v21;
      }
    }
    ++v5;
    v10 += 12;
  }
  while ( v5 < *a2 );
  return a1[7] < 65536.0;
}

