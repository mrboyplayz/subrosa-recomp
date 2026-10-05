/* Address: 0x140055be0 | Name: sub_140055BE0 | Size: 858 bytes */
void __fastcall sub_140055BE0(float *a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  float v7; // xmm10_4
  float v8; // xmm9_4
  float v9; // xmm2_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  float v12; // xmm2_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float v16; // xmm11_4
  float v17; // xmm5_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm11_4
  float v21; // xmm8_4
  float v22; // xmm3_4
  float v23; // xmm8_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  __int128 v30; // [rsp+20h] [rbp-98h] BYREF
  __int128 v31; // [rsp+30h] [rbp-88h]
  int v32; // [rsp+40h] [rbp-78h]

  v4 = 1760LL * a3;
  v32 = 1065353216;
  v5 = 5072LL * dword_19025F0D4[v4];
  v6 = 28664LL * a2;
  v7 = (float)((float)((float)(*(float *)((char *)&unk_190122140 + v5) * *(float *)&dword_19025F164[v4])
                     + *(float *)&dword_19025F11C[v4])
             + (float)(*(float *)((char *)&unk_190122144 + v5) * *(float *)&dword_19025F170[v4]))
     + (float)(*(float *)((char *)&unk_190122148 + v5) * *(float *)&dword_19025F17C[v4]);
  v8 = (float)((float)(*(float *)((char *)&unk_190122140 + v5) * *(float *)&dword_19025F16C[v4])
             + *(float *)&dword_19025F124[v4])
     + (float)(*(float *)((char *)&unk_190122144 + v5) * *(float *)&dword_19025F178[v4]);
  v9 = *(float *)((char *)&unk_190122148 + v5) * *(float *)&dword_19025F184[v4];
  v10 = (float)((float)((float)(*(float *)((char *)&unk_190122140 + v5) * *(float *)&dword_19025F168[v4])
                      + *(float *)&dword_19025F120[v4])
              + (float)(*(float *)((char *)&unk_190122144 + v5) * *(float *)&dword_19025F174[v4]))
      + (float)(*(float *)((char *)&unk_190122148 + v5) * *(float *)&dword_19025F180[v4]);
  v30 = xmmword_1400F78B0;
  v11 = v8 + v9;
  v31 = xmmword_1400F78B0;
  sub_140049C20((__int64)&v30, (float *)&dword_140146A28, v5);
  v12 = *((float *)&v30 + 1);
  v13 = *((float *)&v30 + 3) * 0.5;
  v14 = (float)(*(float *)&v30 * 0.875) + *(float *)((char *)&unk_19025F3C0 + v4 * 4);
  v15 = *((float *)&v30 + 2) * 0.875;
  v16 = *(float *)&v31 * 0.5;
  *a1 = v14;
  v17 = v13 + v14;
  v18 = *((float *)&v31 + 1) * 0.5;
  v19 = (float)(v12 * 0.875) + *(float *)((char *)&unk_19025F3C4 + v4 * 4);
  a1[1] = v19;
  v20 = v16 + v19;
  v21 = v15 + *(float *)((char *)&unk_19025F3C8 + v4 * 4);
  *a1 = v17;
  v22 = v17 - v7;
  a1[1] = v20;
  v23 = v21 + v18;
  a1[2] = v23;
  v24 = v23 - v11;
  v25 = fsqrt((float)(v24 * v24) + (float)(v22 * v22));
  if ( v25 <= 0.0625 )
  {
    v10 = v20;
    v26 = v23;
  }
  else
  {
    a1[1] = v10;
    v26 = (float)((float)((float)(1.0 / v25) * v24) * 0.0625) + v11;
    v17 = (float)((float)((float)(1.0 / v25) * v22) * 0.0625) + v7;
    a1[2] = v26;
    *a1 = v17;
  }
  v27 = v10 - *(float *)((char *)&unk_190941E60 + v6);
  v28 = v17 - *(float *)((char *)&unk_190941E5C + v6);
  v29 = v26 - *(float *)((char *)&unk_190941E64 + v6);
  *a1 = (float)((float)(v27 * *(float *)&dword_190941E90[v6 / 4])
              + (float)(v28 * *(float *)((char *)&unk_190941E8C + v6)))
      + (float)(v29 * *(float *)&dword_190941E94[v6 / 4]);
  a1[1] = (float)((float)(v27 * *(float *)((char *)&xmmword_190941E9C + v6))
                + (float)(v28 * *(float *)((char *)&unk_190941E98 + v6)))
        + (float)(v29 * *(float *)((char *)&xmmword_190941E9C + v6 + 4));
  a1[2] = (float)((float)(v27 * *(float *)((char *)&xmmword_190941E9C + v6 + 12))
                + (float)(v28 * *(float *)((char *)&xmmword_190941E9C + v6 + 8)))
        + (float)(v29 * *(float *)&dword_190941EAC[v6 / 4]);
}

