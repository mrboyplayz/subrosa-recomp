/* Address: 0x140055f40 | Name: sub_140055F40 | Size: 1279 bytes */
__int64 __fastcall sub_140055F40(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  float v5; // xmm3_4
  float v6; // xmm4_4
  int v7; // r14d
  float v8; // xmm14_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm5_4
  float v14; // xmm10_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm7_4
  float v19; // xmm10_4
  float v20; // xmm8_4
  __int128 *v21; // rsi
  int v22; // edi
  float v23; // xmm12_4
  float v24; // xmm1_4
  float v25; // xmm13_4
  float v26; // xmm7_4
  float v27; // xmm10_4
  float v28; // xmm8_4
  __int64 result; // rax
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm11_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // [rsp+28h] [rbp-E0h]
  float v36; // [rsp+30h] [rbp-D8h] BYREF
  float v37; // [rsp+34h] [rbp-D4h]
  float v38; // [rsp+38h] [rbp-D0h]
  float v39; // [rsp+40h] [rbp-C8h] BYREF
  float v40; // [rsp+44h] [rbp-C4h]
  float v41; // [rsp+48h] [rbp-C0h]
  __int128 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+68h] [rbp-A0h]
  float v44; // [rsp+78h] [rbp-90h]

  v4 = 28664LL * (int)a1;
  v42 = xmmword_1400F78B0;
  v43 = xmmword_1400F78B0;
  v44 = 1.0;
  sub_140049C20((__int64)&v42, (float *)&v42 + 3, a3);
  v5 = *(float *)&dword_190941BF0[v4 / 4];
  v6 = *(float *)&dword_190941BF4[v4 / 4];
  v7 = 0;
  v8 = 65536.0;
  v9 = -65536.0;
  v36 = *(float *)&dword_190941BEC[v4 / 4];
  v37 = v5;
  v38 = v6;
  v39 = v36 - (float)(*(float *)&dword_140146A28 * 1.75);
  v40 = v5 - (float)(*(float *)&dword_140146A2C * 1.75);
  v41 = v6 - (float)(*(float *)&dword_140146A30 * 1.75);
  if ( (unsigned int)sub_140062890(a1, &v36, &v39) )
    v10 = *(float *)&qword_16E18CA44;
  else
    v10 = v37;
  v11 = *(float *)((char *)&unk_19094824C + v4);
  v12 = *(float *)((char *)&unk_190948254 + v4);
  v13 = v10;
  v35 = v10;
  v14 = 0.0;
  v15 = fsqrt((float)(v12 * v12) + (float)(v11 * v11));
  if ( v15 < 0.016666668 )
  {
    v16 = v15 - 0.016666668;
    v14 = *((float *)&v43 + 3) * v16;
    v11 = (float)(*((float *)&v43 + 2) * v16) + v11;
    v12 = (float)(v44 * v16) + v12;
  }
  v17 = fsqrt((float)((float)(v14 * v14) + (float)(v11 * v11)) + (float)(v12 * v12));
  if ( v17 == 0.0 )
  {
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
  }
  else
  {
    v18 = v11 * (float)(1.0 / v17);
    v19 = v14 * (float)(1.0 / v17);
    v20 = v12 * (float)(1.0 / v17);
  }
  v21 = &v42;
  v22 = 0;
  v23 = v38;
  v24 = v10;
  v25 = v36;
  v26 = v18 * 0.66666669;
  v27 = v19 * 0.66666669;
  v28 = v20 * 0.66666669;
  do
  {
    v36 = (float)(*(float *)&dword_140146A28 * 0.75) + v25;
    v40 = v13 - (float)(*(float *)&dword_140146A2C * 0.75);
    v37 = (float)(*(float *)&dword_140146A2C * 0.75) + v24;
    v39 = v25 - (float)(*(float *)&dword_140146A28 * 0.75);
    v38 = (float)(*(float *)&dword_140146A30 * 0.75) + v23;
    v41 = v23 - (float)(*(float *)&dword_140146A30 * 0.75);
    result = sub_140062890(a1, &v36, &v39);
    if ( (_DWORD)result )
    {
      if ( !v22 )
      {
        result = dword_16E18CAB8;
        *(_QWORD *)((char *)&unk_190948234 + v4) = 0;
        *(_QWORD *)((char *)&unk_19094823C + v4) = 0;
        *(_QWORD *)((char *)&unk_190948244 + v4) = 0;
        if ( (_DWORD)result != -1 )
        {
          *(_DWORD *)((char *)&unk_190948234 + v4) = dword_16E6A3CEC[5210 * result];
          *(_DWORD *)((char *)&unk_190948238 + v4) = dword_16E6A3CF0[5210 * result];
          *(_DWORD *)((char *)&unk_19094823C + v4) = dword_16E6A3CF4[5210 * result];
          *(_DWORD *)((char *)&unk_190948240 + v4) = *((_DWORD *)&unk_16E6A3D04 + 5210 * result);
          *(_DWORD *)((char *)&unk_190948244 + v4) = *((_DWORD *)&unk_16E6A3D08 + 5210 * result);
          result = *((unsigned int *)&unk_16E6A3D0C + 5210 * result);
          *(_DWORD *)((char *)&unk_190948248 + v4) = result;
        }
      }
      v10 = *(float *)&qword_16E18CA44;
      ++v7;
      v21 = (__int128 *)((char *)v21 + 4);
      v8 = fminf(*(float *)&qword_16E18CA44, v8);
      v9 = fmaxf(*(float *)&qword_16E18CA44, v9);
    }
    v25 = v25 + v26;
    ++v22;
    v23 = v23 + v28;
    v10 = v27 + v10;
    v24 = v10;
    v13 = v10;
  }
  while ( v22 < 4 );
  if ( v7 > 0 )
  {
    v30 = *(float *)((char *)&unk_190948270 + v4);
    v31 = 0.03125;
    v32 = fmaxf((float)(1.0 - fmaxf(fminf(fabs(v9 - v8), 0.5), fminf(fabs(v9 - v35), 0.625))) - v30, -0.03125);
    if ( v32 > 0.03125 )
      v32 = 0.03125;
    v33 = *(float *)((char *)&unk_190948274 + v4);
    *(float *)((char *)&unk_190948270 + v4) = v32 + v30;
    v34 = fmaxf((float)(v9 - v35) - v33, -0.03125);
    if ( v34 <= 0.03125 )
      v31 = v34;
    *(float *)((char *)&unk_190948274 + v4) = v31 + v33;
  }
  return result;
}

