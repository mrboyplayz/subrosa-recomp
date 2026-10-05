/* Address: 0x140053bc0 | Name: sub_140053BC0 | Size: 1418 bytes */
__int64 __fastcall sub_140053BC0(int a1, int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm8_4
  float v15; // xmm11_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm9_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  __int64 v23; // rcx
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  __int64 result; // rax
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm5_4
  float v37; // xmm0_4
  int v38; // edx
  int v39; // ecx
  float v40; // xmm6_4
  float v41; // xmm8_4
  float v42; // xmm1_4
  float v43; // xmm7_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  float v47; // [rsp+58h] [rbp-A8h]
  float v48; // [rsp+60h] [rbp-A0h] BYREF
  float v49; // [rsp+64h] [rbp-9Ch]
  float v50; // [rsp+68h] [rbp-98h]
  float v51; // [rsp+70h] [rbp-90h] BYREF
  float v52; // [rsp+74h] [rbp-8Ch]
  float v53; // [rsp+78h] [rbp-88h]
  float v54[4]; // [rsp+80h] [rbp-80h] BYREF
  float v55[4]; // [rsp+90h] [rbp-70h] BYREF
  float v56; // [rsp+A0h] [rbp-60h] BYREF
  float v57; // [rsp+A4h] [rbp-5Ch]
  float v58; // [rsp+A8h] [rbp-58h]
  float v59; // [rsp+ACh] [rbp-54h] BYREF
  float v60; // [rsp+B0h] [rbp-50h]
  float v61; // [rsp+B4h] [rbp-4Ch]
  _DWORD v62[3]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v63[3]; // [rsp+C4h] [rbp-3Ch] BYREF
  float v64; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = 0;
  v3 = 1760LL * a2;
  v4 = 28664LL * a1;
  do
  {
    v5 = 175;
    v6 = 182;
    if ( v2 >= 2 )
    {
      v5 = 50;
      v6 = 52;
    }
    v7 = 2184;
    if ( v2 >= 2 )
      v7 = 624;
    v8 = v4 + v7;
    v9 = v4 + 12 * (v6 + dword_1910415F8[v5]);
    v10 = *(float *)((char *)&xmmword_190941C1C + v9);
    v11 = *(float *)((char *)&xmmword_190941C1C + v9 + 4);
    v12 = *(float *)((char *)dword_190941BEC + v8);
    v13 = *(float *)((char *)dword_190941BF0 + v8);
    v14 = *(float *)((char *)&xmmword_190941C1C + v9 + 8);
    v15 = *(float *)((char *)dword_190941BF4 + v8);
    v59 = (float)(v10 * 0.1640625) + v12;
    v60 = (float)(v11 * 0.1640625) + v13;
    v61 = (float)(v14 * 0.1640625) + v15;
    v56 = (float)(v10 * 0.2890625) + v12;
    v57 = (float)(v11 * 0.2890625) + v13;
    v58 = (float)(v14 * 0.2890625) + v15;
    if ( v2 >= 2 )
    {
      v16 = (float)(*(float *)&dword_1910415FC[v5] * -0.5) - 0.0625;
      v17 = *(float *)((char *)&xmmword_190941C1C + v8 + 12) * 0.0625;
      v18 = *(float *)((char *)&xmmword_190941C2C + v8) * 0.0625;
      v19 = *(float *)((char *)&xmmword_190941C2C + v8 + 4) * 0.0625;
      v56 = (float)((float)(v10 * v16) + v12) + v17;
      v59 = (float)((float)(v10 * (float)(*(float *)&dword_19104186C - 0.125)) + v12) + v17;
      v57 = (float)((float)(v11 * v16) + v13) + v18;
      v60 = (float)((float)(v11 * (float)(*(float *)&dword_19104186C - 0.125)) + v13) + v18;
      v58 = (float)((float)(v14 * v16) + v15) + v19;
      v61 = (float)((float)(v14 * (float)(*(float *)&dword_19104186C - 0.125)) + v15) + v19;
    }
    v20 = *(float *)&dword_19025F11C[v3];
    v21 = *(float *)&dword_19025F120[v3];
    v22 = *(float *)&dword_19025F124[v3];
    v23 = 5072LL * dword_19025F0D4[v3];
    v24 = *(float *)((char *)&unk_190123458 + v23);
    v25 = (float)(*(float *)((char *)&unk_19012345C + v23) * *(float *)&dword_19025F17C[v3]) + v20;
    v26 = (float)(*(float *)((char *)&unk_19012345C + v23) * *(float *)&dword_19025F180[v3]) + v21;
    v27 = (float)(*(float *)((char *)&unk_19012345C + v23) * *(float *)&dword_19025F184[v3]) + v22;
    if ( (v2 & 1) != 0 )
      v28 = v24 + 0.0625;
    else
      v28 = v24 - 0.0625;
    v29 = v28 * *(float *)&dword_19025F170[v3];
    v63[0] = dword_19025F11C[v3];
    v30 = v29 + v25;
    *(float *)&v63[1] = v21;
    *(float *)&v63[2] = v22;
    v31 = v28 * *(float *)&dword_19025F174[v3];
    v32 = v28 * *(float *)&dword_19025F178[v3];
    *(float *)v62 = v30;
    *(float *)&v62[1] = v31 + v26;
    *(float *)&v62[2] = v32 + v27;
    result = sub_14007D360(
               (unsigned int)&v48,
               (unsigned int)&v51,
               (unsigned int)&v64,
               (unsigned int)&v56,
               (__int64)&v59,
               (__int64)v62,
               (__int64)v63,
               1040187392);
    if ( (_DWORD)result )
    {
      v34 = v48 - v51;
      v35 = v49 - v52;
      v36 = v50 - v53;
      v37 = fsqrt((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36));
      if ( v37 == 0.0 )
      {
        v46 = 0;
        v47 = 0.0;
      }
      else
      {
        *(float *)&v46 = (float)(1.0 / v37) * v34;
        *((float *)&v46 + 1) = (float)(1.0 / v37) * v35;
        v47 = (float)(1.0 / v37) * v36;
      }
      v38 = dword_19025F118[v3];
      v39 = *(int *)((char *)dword_190941BE8 + v8);
      v40 = (float)(v51 + v48) * 0.5;
      v41 = (float)(v53 + v50) * 0.5;
      v42 = (float)(v52 + v49) * 0.5;
      v43 = v42 - v21;
      v44 = v42 - *(float *)((char *)dword_190941BF0 + v8);
      v55[0] = v40 - *(float *)((char *)dword_190941BEC + v8);
      v45 = v41 - *(float *)((char *)dword_190941BF4 + v8);
      v54[0] = v40 - v20;
      v55[1] = v44;
      v55[2] = v45;
      v54[1] = v43;
      v54[2] = v41 - v22;
      result = sub_140002C40(v39, v38, v55, v54, &v46, 0.125 - v64, 1053609165, 0.03125, 1031798784);
    }
    ++v2;
  }
  while ( (int)v2 < 4 );
  return result;
}

