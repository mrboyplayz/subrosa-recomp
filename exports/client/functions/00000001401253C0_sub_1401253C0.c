/* Address: 0x1401253c0 | Name: sub_1401253C0 | Size: 685 bytes */
double sub_1401253C0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int *v3; // rbx
  __int64 v4; // r14
  int v5; // eax
  int v6; // ebp
  float v7; // xmm8_4
  __int64 v8; // rdi
  __int64 v9; // rsi
  float v10; // xmm5_4
  float v11; // xmm6_4
  __int64 v12; // rdx
  __int64 v13; // rax
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  __int64 v25; // rcx
  unsigned int v27[4]; // [rsp+20h] [rbp-98h] BYREF

  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  unk_140404050(3553, dword_140404A6C[451221642]);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(770);
  v3 = &dword_140404A6C[278845942];
  v4 = 1024;
  v5 = dword_140404A6C[159842283];
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279300;
  dword_140404A6C[456217205] = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  do
  {
    if ( *(v3 - 49) )
    {
      v1 = v3[37];
      if ( (int)v1 > 0 )
      {
        v6 = 0;
        v7 = (float)((float)(int)v1 * 0.015625) + 0.125;
        if ( v5 > 0 )
        {
          v8 = 0;
          do
          {
            v9 = 3;
            do
            {
              v10 = *((float *)v3 - 1);
              v11 = *(float *)v3;
              v12 = *(unsigned int *)(*(_QWORD *)&dword_140404A6C[159842285] + v8);
              v13 = 3 * (int)v12;
              v14 = v7 * *(float *)(*(_QWORD *)&dword_140404A6C[159842281] + 4 * v13);
              v15 = v7 * *(float *)(*(_QWORD *)&dword_140404A6C[159842281] + 4 * v13 + 4);
              v16 = (float)((float)(v14 * *((float *)v3 - 8)) + *((float *)v3 - 26)) + (float)(v15 * *((float *)v3 - 5));
              v17 = (float)((float)(v14 * *((float *)v3 - 7)) + *((float *)v3 - 25)) + (float)(v15 * *((float *)v3 - 4));
              v18 = v7 * *(float *)(*(_QWORD *)&dword_140404A6C[159842281] + 4LL * (3 * (int)v12 + 2));
              v19 = (float)((float)(v14 * *((float *)v3 - 6)) + *((float *)v3 - 24)) + (float)(v15 * *((float *)v3 - 3));
              if ( (_DWORD)v12 == 1 )
                v20 = v18 * 1.5;
              else
                v20 = v18 * 3.0;
              v21 = (float)(*((float *)v3 - 2) * v20) + v16;
              v22 = (float)(v10 * v20) + v17;
              v23 = v11 * v20;
              v24 = *(float *)&dword_140404A6C[1268 * *(v3 - 44) + 278521315] - v7;
              *(float *)v27 = v21 + (float)(*((float *)v3 - 2) * v24);
              *(float *)&v27[1] = v22 + (float)(v10 * v24);
              *(float *)&v27[2] = (float)(v23 + v19) + (float)(v11 * v24);
              sub_14007D520(v27, v12, *(__int64 *)&dword_140404A6C[159842281]);
              v8 += 4;
              --v9;
            }
            while ( v9 );
            v5 = dword_140404A6C[159842283];
            ++v6;
          }
          while ( v6 < (int)dword_140404A6C[159842283] );
        }
      }
    }
    v3 += 1760;
    --v4;
  }
  while ( v4 );
  sub_14006E0D0(v1, v0, v2);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(770);
  LOBYTE(v25) = 1;
  return (*(double (__fastcall **)(__int64))&dword_140404A6C[18215099])(v25);
}

