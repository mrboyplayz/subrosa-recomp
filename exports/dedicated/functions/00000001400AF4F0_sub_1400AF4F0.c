/* Address: 0x1400af4f0 | Name: sub_1400AF4F0 | Size: 852 bytes */
__int64 sub_1400AF4F0()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // r8d
  int *v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 result; // rax
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm2_4
  int *v30; // rcx
  __int64 v31; // rdx
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm2_4

  v0 = dword_16E54CAF0;
  v1 = 0;
  if ( dword_16E54CAF0 < 4 )
  {
    if ( dword_16E54CAF0 <= 0 )
      return result;
    v2 = qword_16E67FEF4;
    v6 = 0;
    goto LABEL_16;
  }
  v2 = qword_16E67FEF4;
  v3 = dword_16E18CAF8;
  v4 = ((unsigned int)(dword_16E54CAF0 - 4) >> 2) + 1;
  v5 = v4;
  v1 = 4 * v4;
  v6 = 4LL * v4;
  do
  {
    v3[2] = *(v3 - 1);
    result = (unsigned int)*v3;
    v3[3] = result;
    v8 = *((float *)v3 + 1);
    *((float *)v3 + 4) = v8;
    v9 = *((float *)v3 + 5);
    *((float *)v3 - 1) = v9 + *((float *)v3 - 1);
    v10 = *((float *)v3 + 6);
    *(float *)v3 = v10 + *(float *)v3;
    v11 = *((float *)v3 + 7);
    *((float *)v3 + 1) = v11 + v8;
    *((float *)v3 + 8) = v9;
    *((float *)v3 + 9) = v10;
    *((float *)v3 + 10) = v11;
    if ( !v2 )
      *((float *)v3 + 6) = v10 - *((float *)v3 - 3);
    v12 = *((float *)v3 + 59);
    *((float *)v3 + 62) = v12;
    v13 = *((float *)v3 + 60);
    *((float *)v3 + 63) = v13;
    v14 = *((float *)v3 + 61);
    *((float *)v3 + 64) = v14;
    v15 = *((float *)v3 + 65);
    *((float *)v3 + 59) = v15 + v12;
    v16 = *((float *)v3 + 66);
    *((float *)v3 + 60) = v16 + v13;
    v17 = *((float *)v3 + 67);
    *((float *)v3 + 61) = v17 + v14;
    *((float *)v3 + 68) = v15;
    *((float *)v3 + 69) = v16;
    *((float *)v3 + 70) = v17;
    if ( !v2 )
      *((float *)v3 + 66) = v16 - *((float *)v3 + 57);
    v18 = *((float *)v3 + 119);
    *((float *)v3 + 122) = v18;
    v19 = *((float *)v3 + 120);
    *((float *)v3 + 123) = v19;
    v20 = *((float *)v3 + 121);
    *((float *)v3 + 124) = v20;
    v21 = *((float *)v3 + 125);
    *((float *)v3 + 119) = v21 + v18;
    v22 = *((float *)v3 + 126);
    *((float *)v3 + 120) = v22 + v19;
    v23 = *((float *)v3 + 127);
    *((float *)v3 + 121) = v23 + v20;
    *((float *)v3 + 128) = v21;
    *((float *)v3 + 129) = v22;
    *((float *)v3 + 130) = v23;
    if ( !v2 )
      *((float *)v3 + 126) = v22 - *((float *)v3 + 117);
    v24 = *((float *)v3 + 179);
    *((float *)v3 + 182) = v24;
    v25 = *((float *)v3 + 180);
    *((float *)v3 + 183) = v25;
    v26 = *((float *)v3 + 181);
    *((float *)v3 + 184) = v26;
    v27 = *((float *)v3 + 185);
    *((float *)v3 + 179) = v27 + v24;
    v28 = *((float *)v3 + 186);
    *((float *)v3 + 180) = v28 + v25;
    v29 = *((float *)v3 + 187);
    *((float *)v3 + 181) = v29 + v26;
    *((float *)v3 + 188) = v27;
    *((float *)v3 + 189) = v28;
    *((float *)v3 + 190) = v29;
    if ( !v2 )
      *((float *)v3 + 186) = v28 - *((float *)v3 + 177);
    v3 += 240;
    --v5;
  }
  while ( v5 );
  if ( v1 < v0 )
  {
LABEL_16:
    v30 = &dword_16E18CAF8[60 * v6];
    v31 = (unsigned int)(v0 - v1);
    do
    {
      v30[2] = *(v30 - 1);
      result = (unsigned int)*v30;
      v30[3] = result;
      v32 = *((float *)v30 + 1);
      *((float *)v30 + 4) = v32;
      v33 = *((float *)v30 + 5);
      *((float *)v30 - 1) = v33 + *((float *)v30 - 1);
      v34 = *((float *)v30 + 6);
      *(float *)v30 = v34 + *(float *)v30;
      v35 = *((float *)v30 + 7);
      *((float *)v30 + 1) = v35 + v32;
      *((float *)v30 + 8) = v33;
      *((float *)v30 + 9) = v34;
      *((float *)v30 + 10) = v35;
      if ( !v2 )
        *((float *)v30 + 6) = v34 - *((float *)v30 - 3);
      v30 += 60;
      --v31;
    }
    while ( v31 );
  }
  return result;
}

