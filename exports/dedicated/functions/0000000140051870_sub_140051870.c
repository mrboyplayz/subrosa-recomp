/* Address: 0x140051870 | Name: sub_140051870 | Size: 1050 bytes */
_UNKNOWN **__fastcall sub_140051870(int a1)
{
  _UNKNOWN **result; // rax
  float *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rdx
  float v13; // xmm11_4
  float *v14; // rdx
  float v15; // xmm12_4
  __int64 v16; // r8
  float v17; // xmm13_4
  __int64 v18; // rcx
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  __int64 v27; // rcx
  float v28; // xmm5_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (float *)dword_190941BF4;
  v3 = 256;
  v4 = a1;
  do
  {
    if ( !*((_DWORD *)v2 - 139) )
      goto LABEL_21;
    v5 = 1760 * v4;
    v6 = *(v2 - 1) - *(float *)&dword_19025F120[1760 * v4];
    v7 = *(v2 - 2) - *(float *)&dword_19025F11C[1760 * v4];
    v8 = (float)((float)(v6 * v6) + (float)(v7 * v7))
       + (float)((float)(*v2 - *(float *)&dword_19025F124[1760 * v4])
               * (float)(*v2 - *(float *)&dword_19025F124[1760 * v4]));
    if ( v8 >= 16.0 )
    {
      if ( v8 >= 64.0 )
        goto LABEL_21;
    }
    else
    {
      v9 = *(int *)((char *)&unk_19025F0E0 + v5 * 4);
      *(v2 - 124) = 0.0;
      v10 = v9;
      if ( (_DWORD)v9 != -1 )
      {
        v11 = *((int *)v2 - 137);
        if ( (_DWORD)v11 != -1 && (_DWORD)v9 != (_DWORD)v11 && dword_16D67D624[3597 * v9] == dword_16D67D624[3597 * v11] )
        {
          sub_1400B3400(v9, 100);
          v10 = *(_DWORD *)((char *)&unk_19025F0E0 + v5 * 4);
        }
      }
      if ( v10 != -1 )
      {
        v12 = *((unsigned int *)v2 - 137);
        if ( (_DWORD)v12 != -1 )
          sub_1400B0DA0(v10, v12, 100);
      }
    }
    v13 = *(float *)&dword_19025F11C[v5];
    v14 = v2 + 30;
    v15 = *(float *)&dword_19025F120[v5];
    v16 = 8;
    v17 = *(float *)&dword_19025F124[v5];
    do
    {
      v18 = 188LL * *((int *)v14 - 33);
      v19 = *(float *)((char *)&unk_140249618 + v18) - v13;
      v20 = *(float *)((char *)&unk_14024961C + v18) - v15;
      v21 = *(float *)((char *)&unk_140249620 + v18) - v17;
      v22 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
      if ( v22 == 0.0 )
      {
        v23 = 0.0;
        v24 = 0.0;
        v25 = 0.0;
      }
      else
      {
        v23 = (float)(1.0 / v22) * v19;
        v24 = (float)(1.0 / v22) * v20;
        v25 = (float)(1.0 / v22) * v21;
      }
      result = (_UNKNOWN **)*((int *)v14 + 45);
      v26 = (float)(fmaxf(8.0 / (float)(*v14 + 8.0), 0.125) * (float)(8.0 - v22))
          * (float)((float)(8.0 - v22) * 0.013183594);
      *(float *)((char *)&unk_140249624 + v18) = (float)(v23 * v26) + *(float *)((char *)&unk_140249624 + v18);
      *(float *)((char *)&unk_140249628 + v18) = (float)(v24 * v26) + *(float *)((char *)&unk_140249628 + v18);
      *(float *)((char *)&unk_14024962C + v18) = (float)(v25 * v26) + *(float *)((char *)&unk_14024962C + v18);
      v27 = 188LL * (_QWORD)result;
      v28 = *((float *)&unk_140249618 + 47 * (_QWORD)result) - v13;
      v29 = *((float *)&unk_14024961C + 47 * (_QWORD)result) - v15;
      v30 = *((float *)&unk_140249620 + 47 * (_QWORD)result) - v17;
      v31 = fsqrt((float)((float)(v29 * v29) + (float)(v28 * v28)) + (float)(v30 * v30));
      if ( v31 == 0.0 )
      {
        v32 = 0.0;
        v33 = 0.0;
        v34 = 0.0;
      }
      else
      {
        v32 = (float)(1.0 / v31) * v28;
        v33 = (float)(1.0 / v31) * v29;
        v34 = (float)(1.0 / v31) * v30;
      }
      v35 = 8.0 - v31;
      v36 = v14[78] + 8.0;
      v14 += 156;
      v37 = (float)(fmaxf(8.0 / v36, 0.125) * v35) * (float)(v35 * 0.013183594);
      *(float *)((char *)&unk_140249624 + v27) = (float)(v32 * v37) + *(float *)((char *)&unk_140249624 + v27);
      *(float *)((char *)&unk_140249628 + v27) = (float)(v33 * v37) + *(float *)((char *)&unk_140249628 + v27);
      *(float *)((char *)&unk_14024962C + v27) = (float)(v34 * v37) + *(float *)((char *)&unk_14024962C + v27);
      --v16;
    }
    while ( v16 );
LABEL_21:
    v2 += 7166;
    --v3;
  }
  while ( v3 );
  return result;
}

