/* Address: 0x1401945f0 | Name: sub_1401945F0 | Stack analysis corrected in export snapshot. */
__int64 sub_1401945F0()
{
  float *v0; // rax
  float *v1; // r8
  signed __int64 v2; // rcx
  __int64 v3; // r10
  float v4; // xmm3_4
  __int64 v5; // rdx
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD v12[10]; // [rsp-20h] [rbp-11E0h] BYREF
  __int64 v13; // [rsp+8h] [rbp-11B8h]
  __m256i v14; // [rsp+10h] [rbp-11B0h] BYREF
  __int128 v15; // [rsp+30h] [rbp-1190h]
  __int128 v16; // [rsp+40h] [rbp-1180h]
  _DWORD v17[1048]; // [rsp+50h] [rbp-1170h] BYREF
  __m256i v18; // [rsp+1140h] [rbp-80h] BYREF
  __int128 v19; // [rsp+1160h] [rbp-60h]
  __int128 v20; // [rsp+1170h] [rbp-50h]
  _DWORD v21[1024]; // [rsp+1180h] [rbp-40h] BYREF
  __int64 v22; // [rsp+2180h] [rbp+FC0h]

  qword_1404042E0(dword_140404A6C[71738405]);
  v17[0] = dword_140404A6C[284205197];
  v17[1] = dword_140404A6C[284205197];
  v17[2] = dword_140404A6C[284205197];
  qword_140404378(dword_140404A6C[71738442], 1, 0, &dword_140404A6C[431564565]);
  qword_140404338(dword_140404A6C[71738464], 1, v17);
  qword_140404308(dword_140404A6C[71738446], BYTE2(dword_140404A6C[284024767]) != 0);
  HIDWORD(v16) = 1065353216;
  v0 = (float *)&v18;
  v15 = xmmword_140278E20;
  v1 = (float *)&dword_140404A6C[431564566];
  v2 = (char *)&v14.m256i_u64[2] - (char *)&v18;
  *(__int64 *)((char *)v14.m256i_i64 + 4) = 0;
  *(__int64 *)((char *)&v14.m256i_i64[1] + 4) = 0;
  v3 = 4;
  v14.m256i_i64[3] = 0;
  *(_QWORD *)((char *)&v16 + 4) = 1056964608;
  v14.m256i_i32[0] = 1056964608;
  v14.m256i_i32[5] = 1056964608;
  LODWORD(v16) = 1056964608;
  do
  {
    v4 = *(v1 - 1);
    v5 = 4;
    v6 = *v1;
    v7 = v1[1];
    v8 = v1[2];
    do
    {
      *v0 = (float)((float)((float)(v4 * *(float *)((char *)v0 + v2 - 16)) + (float)(v6 * *(float *)((char *)v0 + v2)))
                  + (float)(v7 * *(float *)((char *)v0 + v2 + 16)))
          + (float)(v8 * *(float *)((char *)v0 + v2 + 32));
      ++v0;
      --v5;
    }
    while ( v5 );
    v1 += 4;
    v2 -= 16LL;
    --v3;
  }
  while ( v3 );
  v14 = v18;
  v15 = v19;
  v16 = v20;
  qword_140404378(dword_140404A6C[71738463], 1, 0, &v14);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829871] + 284024944]);
  v21[0] = dword_140404A6C[188872557];
  v21[2] = dword_140404A6C[188872559];
  v21[5] = dword_140404A6C[188872559];
  v9 = dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813];
  v21[9] = dword_140404A6C[188872557];
  v21[1] = 1102577664;
  v21[3] = 1157627904;
  v21[4] = 1102577664;
  v21[6] = 1157627904;
  v21[7] = 1102577664;
  v21[8] = 1157627904;
  v21[10] = 1102577664;
  v21[11] = 1157627904;
  qword_140404170(34962, v9, v10);
  qword_140404198(34962, 0, 48, v21);
  qword_140404238(0);
  v13 = 0;
  v12[8] = 12;
  qword_1404044A8(0, 3, 5126);
  qword_140302FF8(6, 0, 4);
  qword_140404230(0);
  return MEMORY[0x1401F8B20]((unsigned __int64)v12 ^ v22);
}

