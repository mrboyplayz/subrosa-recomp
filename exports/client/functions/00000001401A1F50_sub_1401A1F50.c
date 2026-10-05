/* Address: 0x1401a1f50 | Name: sub_1401A1F50 | Size: 1702 bytes */
__int64 __fastcall sub_1401A1F50(__int64 a1, float *a2, float *a3, float *a4, int a5, int a6, int a7)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-B8h]
  int j; // [rsp+20h] [rbp-B8h]
  int k; // [rsp+20h] [rbp-B8h]
  int m; // [rsp+20h] [rbp-B8h]
  int v12; // [rsp+24h] [rbp-B4h]
  int v13; // [rsp+28h] [rbp-B0h]
  float v14; // [rsp+2Ch] [rbp-ACh]
  float v15; // [rsp+2Ch] [rbp-ACh]
  float v16; // [rsp+30h] [rbp-A8h]
  float v17; // [rsp+30h] [rbp-A8h]
  float v18; // [rsp+34h] [rbp-A4h]
  float v19; // [rsp+38h] [rbp-A0h]
  float v20; // [rsp+38h] [rbp-A0h]
  int v21; // [rsp+3Ch] [rbp-9Ch]
  float v22; // [rsp+40h] [rbp-98h]
  float v23; // [rsp+44h] [rbp-94h]
  float *v24; // [rsp+48h] [rbp-90h]
  float *v25; // [rsp+50h] [rbp-88h]
  int v26; // [rsp+58h] [rbp-80h]
  float v27; // [rsp+5Ch] [rbp-7Ch]
  float v28; // [rsp+60h] [rbp-78h]
  float *v29; // [rsp+70h] [rbp-68h]
  float *v30; // [rsp+78h] [rbp-60h]
  __int64 v31; // [rsp+80h] [rbp-58h]
  float *v32; // [rsp+90h] [rbp-48h]
  float *v33; // [rsp+98h] [rbp-40h]
  float *v34; // [rsp+A0h] [rbp-38h]
  float *v35; // [rsp+A8h] [rbp-30h]
  float v36; // [rsp+B4h] [rbp-24h]
  __int16 *v37; // [rsp+B8h] [rbp-20h]
  float *v38; // [rsp+C0h] [rbp-18h]

  v13 = *(_DWORD *)a1;
  v31 = *(_QWORD *)(a1 + 40);
  for ( i = 0; i < a6; ++i )
  {
    v13 >>= 1;
    v31 += 4LL * v13;
  }
  v21 = v13 >> 1;
  v12 = v13 >> 2;
  v29 = a2;
  v30 = &a2[((v13 >> 1) - 1) * a7];
  v38 = &a3[a5 >> 1];
  v37 = *(__int16 **)(*(_QWORD *)(a1 + 8LL * a6 + 8) + 48LL);
  for ( j = 0; j < v12; ++j )
  {
    v26 = *v37++;
    v36 = (float)(*v29 * *(float *)(v31 + 4LL * j)) - (float)(*v30 * *(float *)(v31 + 4LL * (j + v12)));
    v38[2 * v26 + 1] = (float)(*v30 * *(float *)(v31 + 4LL * j)) + (float)(*v29 * *(float *)(v31 + 4LL * (j + v12)));
    v38[2 * v26] = v36;
    v29 += 2 * a7;
    v30 -= 2 * a7;
  }
  sub_1401A15A0(*(_QWORD *)(a1 + 8LL * a6 + 8), (CGlobalUtils *)&a3[a5 >> 1]);
  v24 = &a3[a5 >> 1];
  v25 = &v24[v21 - 2];
  for ( k = 0; k < (v12 + 1) >> 1; ++k )
  {
    v14 = v24[1];
    v19 = *(float *)(v31 + 4LL * k);
    v16 = *(float *)(v31 + 4LL * (k + v12));
    v22 = (float)(v14 * v19) + (float)(*v24 * v16);
    v23 = (float)(v14 * v16) - (float)(*v24 * v19);
    v15 = v25[1];
    v18 = *v25;
    *v24 = v22;
    v25[1] = v23;
    v20 = *(float *)(v31 + 4LL * (v12 - k - 1));
    v17 = *(float *)(v31 + 4LL * (v21 - k - 1));
    *v25 = (float)(v15 * v20) + (float)(v18 * v17);
    v24[1] = (float)(v15 * v17) - (float)(v18 * v20);
    v24 += 2;
    v25 -= 2;
  }
  v33 = &a3[a5 - 1];
  v32 = a3;
  v34 = a4;
  v35 = &a4[a5 - 1];
  for ( m = 0; ; ++m )
  {
    result = (unsigned int)(a5 / 2);
    if ( m >= (int)result )
      break;
    v28 = *v33;
    v27 = *v32;
    *v32 = (float)(*v35 * *v32) - (float)(*v34 * *v33);
    ++v32;
    *v33-- = (float)(*v34++ * v27) + (float)(*v35-- * v28);
  }
  return result;
}

