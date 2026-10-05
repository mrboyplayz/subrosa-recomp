/* Address: 0x14002a680 | Name: sub_14002A680 | Size: 795 bytes */
__int64 __fastcall sub_14002A680(__int64 a1, __int64 a2, int a3, int a4)
{
  float v4; // xmm7_4
  float v5; // xmm0_4
  unsigned int v6; // ebx
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm13_4
  float v13; // xmm10_4
  float v14; // xmm14_4
  __m128 v15; // xmm0
  float v16; // xmm6_4
  float v17; // xmm8_4
  int v18; // r8d
  int v19; // r9d
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  __int64 result; // rax
  _DWORD v25[2]; // [rsp+28h] [rbp-79h] BYREF
  float v26; // [rsp+30h] [rbp-71h]
  float v27; // [rsp+34h] [rbp-6Dh]
  float v28; // [rsp+38h] [rbp-69h]
  float v29; // [rsp+3Ch] [rbp-65h]
  float v30; // [rsp+40h] [rbp-61h]
  float v31; // [rsp+44h] [rbp-5Dh]
  float v32; // [rsp+48h] [rbp-59h]
  float v33; // [rsp+4Ch] [rbp-55h]
  float v34; // [rsp+50h] [rbp-51h]
  float v35; // [rsp+54h] [rbp-4Dh]
  int v36; // [rsp+58h] [rbp-49h]
  int v37; // [rsp+60h] [rbp-41h]
  int v38; // [rsp+68h] [rbp-39h]
  int v39; // [rsp+70h] [rbp-31h]
  int v40; // [rsp+78h] [rbp-29h]
  int v41; // [rsp+80h] [rbp-21h]
  int v42; // [rsp+88h] [rbp-19h]
  int v43; // [rsp+90h] [rbp-11h]
  int v44; // [rsp+98h] [rbp-9h]
  int v45; // [rsp+A0h] [rbp-1h]
  int v46; // [rsp+A8h] [rbp+7h]
  int v47; // [rsp+B0h] [rbp+Fh]
  int v48; // [rsp+B8h] [rbp+17h]
  int v49; // [rsp+C0h] [rbp+1Fh]
  int v50; // [rsp+C8h] [rbp+27h]
  int v51; // [rsp+D0h] [rbp+2Fh]
  int v52; // [rsp+D8h] [rbp+37h]
  int v53; // [rsp+E0h] [rbp+3Fh]
  int v54; // [rsp+E8h] [rbp+47h]
  __int64 v55; // [rsp+F0h] [rbp+4Fh]

  sub_14005F6E0(
    1,
    (unsigned int)v25,
    a3,
    a4,
    1161756672,
    1150550016,
    1103134720,
    1161887744,
    1151074304,
    1103134720,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v4 = 0.0;
  v5 = v33;
  v6 = 0;
  v7 = v31;
  v8 = v35;
  v9 = v30;
  v10 = v34;
  v11 = v32;
  v12 = (float)(v33 + v30) * 0.5;
  v13 = (float)(v31 + v34) * 0.5;
  v14 = (float)(v35 + v32) * 0.5;
  while ( 1 )
  {
    if ( v6 <= 4 )
      goto LABEL_7;
    if ( v6 <= 6 )
    {
      v4 = v4 + -0.78539819;
      goto LABEL_8;
    }
    if ( v6 - 10 <= 3 || v6 == 17 )
LABEL_7:
      v4 = v4 + 0.78539819;
LABEL_8:
    *(float *)v25 = v5;
    v15 = 0;
    *(float *)&v25[1] = v10;
    v26 = v8;
    v27 = v9;
    v28 = v7;
    v29 = v11;
    *(double *)v15.m128_u64 = MEMORY[0x1401F8AC0]();
    v14 = v14 + (float)(_mm_shuffle_ps(v15, v15, 1).m128_f32[0] * 64.0);
    v12 = v12 + (float)(v15.m128_f32[0] * 64.0);
    v15.m128_f32[0] = cosf(v4);
    v31 = v13;
    v16 = v15.m128_f32[0] * 16.0;
    v17 = v13;
    v30 = (float)(v15.m128_f32[0] * 16.0) + v12;
    *(double *)v15.m128_u64 = sin(v4);
    v20 = v13;
    v34 = v13;
    v21 = -*(double *)v15.m128_u64;
    v33 = v12 - v16;
    v22 = v13;
    v23 = v21 * 16.0;
    v32 = v23 + v14;
    v35 = v14 - v23;
    if ( v6 < 4 )
    {
      v20 = v13 + 16.0;
      v34 = v13 + 16.0;
      v22 = v13 + 16.0;
    }
    if ( v6 == 5 )
    {
      v31 = v13 + 16.0;
      v17 = v13 + 16.0;
    }
    if ( v6 - 10 <= 2 )
    {
      v20 = v22 + 16.0;
      v34 = v22 + 16.0;
    }
    if ( v6 == 17 )
    {
      v20 = v20 + 8.0;
      v34 = v20;
    }
    if ( v6 == 19 )
    {
      v31 = v17 + 4.0;
      v34 = v20 + 4.0;
    }
    result = sub_14005F6E0(
               1,
               (unsigned int)v25,
               v18,
               v19,
               v25[0],
               LODWORD(v26),
               LODWORD(v28),
               LODWORD(v30),
               LODWORD(v32),
               LODWORD(v34),
               v36,
               v37,
               v38,
               v39,
               v40,
               v41,
               v42,
               v43,
               v44,
               v45,
               v46,
               v47,
               v48,
               v49,
               v50,
               v51,
               v52,
               v53,
               v54,
               v55);
    if ( (int)++v6 >= 21 )
      return result;
    v8 = v35;
    v10 = v34;
    v5 = v33;
    v11 = v32;
    v7 = v31;
    v9 = v30;
  }
}

