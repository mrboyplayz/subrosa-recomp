/* Address: 0x14001b6a0 | Name: sub_14001B6A0 | Size: 1503 bytes */
__int64 sub_14001B6A0()
{
  unsigned int *v0; // r14
  int v1; // edi
  int i; // esi
  int j; // ebx
  __int64 v4; // r8
  __m256i *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD v9[10]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v10; // [rsp+30h] [rbp-D8h]
  __m256i v11; // [rsp+38h] [rbp-D0h] BYREF
  float v12; // [rsp+58h] [rbp-B0h]
  _QWORD v13[2]; // [rsp+64h] [rbp-A4h] BYREF
  float v14; // [rsp+74h] [rbp-94h]
  float v15; // [rsp+78h] [rbp-90h]
  float v16; // [rsp+7Ch] [rbp-8Ch]
  int v17; // [rsp+80h] [rbp-88h]
  __int64 v18; // [rsp+84h] [rbp-84h]
  float v19; // [rsp+8Ch] [rbp-7Ch]
  float v20; // [rsp+90h] [rbp-78h]
  float v21; // [rsp+94h] [rbp-74h]
  __int64 v22; // [rsp+98h] [rbp-70h]
  int v23; // [rsp+A0h] [rbp-68h]
  float v24; // [rsp+A4h] [rbp-64h]
  float v25; // [rsp+A8h] [rbp-60h]
  float v26; // [rsp+ACh] [rbp-5Ch]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B8h] [rbp-50h]
  float v29; // [rsp+BCh] [rbp-4Ch]
  float v30; // [rsp+C0h] [rbp-48h]
  float v31; // [rsp+C4h] [rbp-44h]
  __int64 v32; // [rsp+C8h] [rbp-40h]
  __int32 v33; // [rsp+D0h] [rbp-38h]
  __int64 v34; // [rsp+268h] [rbp+160h]

  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3042);
  *(_OWORD *)&dword_140404A6C[431564485] = xmmword_140278D40;
  *(_OWORD *)&dword_140404A6C[431564489] = xmmword_140278DA0;
  *(_OWORD *)&dword_140404A6C[431564493] = xmmword_140278EB0;
  *(_OWORD *)&dword_140404A6C[431564497] = xmmword_140279730;
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], &dword_140404A6C[431564517], &dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], &dword_140404A6C[431564501], &dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], &dword_140404A6C[431564533], &dword_140404A6C[431564485]);
  unk_1404042E0(dword_140404A6C[71738285]);
  unk_140404378(dword_140404A6C[71738294], 1, 0, &dword_140404A6C[431564565]);
  v0 = &dword_140404A6C[283790138];
  v1 = 256;
  for ( i = 1; i < 10; ++i )
  {
    unk_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
    unk_1404046F0(36160, dword_140404A6C[2 * *v0 + 283791765]);
    unk_1404042E8(dword_140404A6C[71738298]);
    for ( j = 0; j < 6; ++j )
    {
      unk_140404718(
        36160,
        36064,
        (unsigned int)(j + 34069),
        dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944],
        i);
      qword_140302FE8(0, 0, (unsigned int)v1, (unsigned int)v1);
      v12 = 1.0;
      *(_OWORD *)v11.m256i_i8 = xmmword_140278D30;
      *(_OWORD *)&v11.m256i_u64[2] = xmmword_140278D30;
      if ( (unsigned int)j <= 1 )
        goto LABEL_9;
      switch ( j )
      {
        case 2:
          v5 = &v11;
          break;
        case 3:
          v5 = &v11;
          break;
        case 5:
LABEL_9:
          v5 = (__m256i *)((char *)&v11.m256i_u64[1] + 4);
          break;
        default:
          goto LABEL_11;
      }
      sub_14007B2A0(&v11, v5);
LABEL_11:
      HIDWORD(v13[0]) = 0;
      v6 = dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813];
      v13[1] = 1065353216;
      v32 = *(__int64 *)((char *)&v11.m256i_i64[1] + 4);
      v33 = v11.m256i_i32[5];
      v17 = 1065353216;
      v18 = 1065353216;
      v22 = 1065353216;
      v23 = 0;
      v27 = 0;
      v14 = (float)(*(float *)&v11.m256i_i32[3] + (float)(*(float *)v11.m256i_i32 * -1.0)) - *(float *)&v11.m256i_i32[6];
      v29 = (float)((float)(*(float *)v11.m256i_i32 * -1.0) - *(float *)&v11.m256i_i32[3]) - *(float *)&v11.m256i_i32[6];
      v15 = (float)(*(float *)&v11.m256i_i32[4] + (float)(*(float *)&v11.m256i_i32[1] * -1.0))
          - *(float *)&v11.m256i_i32[7];
      v28 = 0;
      v16 = (float)(*(float *)&v11.m256i_i32[5] + (float)(*(float *)&v11.m256i_i32[2] * -1.0)) - v12;
      v30 = (float)((float)(*(float *)&v11.m256i_i32[1] * -1.0) - *(float *)&v11.m256i_i32[4])
          - *(float *)&v11.m256i_i32[7];
      v19 = (float)(*(float *)&v11.m256i_i32[3] + *(float *)v11.m256i_i32) - *(float *)&v11.m256i_i32[6];
      v31 = (float)((float)(*(float *)&v11.m256i_i32[2] * -1.0) - *(float *)&v11.m256i_i32[5]) - v12;
      v20 = (float)(*(float *)&v11.m256i_i32[4] + *(float *)&v11.m256i_i32[1]) - *(float *)&v11.m256i_i32[7];
      v21 = (float)(*(float *)&v11.m256i_i32[5] + *(float *)&v11.m256i_i32[2]) - v12;
      v24 = (float)(*(float *)v11.m256i_i32 - *(float *)&v11.m256i_i32[3]) - *(float *)&v11.m256i_i32[6];
      v25 = (float)(*(float *)&v11.m256i_i32[1] - *(float *)&v11.m256i_i32[4]) - *(float *)&v11.m256i_i32[7];
      v26 = (float)(*(float *)&v11.m256i_i32[2] - *(float *)&v11.m256i_i32[5]) - v12;
      unk_140404170(34962, v6, v4);
      unk_140404198(34962, 0, 96, (char *)v13 + 4);
      unk_140404238(0);
      unk_140404238(1);
      unk_140404238(2);
      unk_1404044A8(0, 3, 5126);
      unk_1404044A8(1, 3, 5126);
      v10 = 24;
      v9[8] = 24;
      unk_1404044A8(2, 3, 5126);
      qword_140302FF8(6, 0, 4);
      unk_140404230(0);
      unk_140404230(1);
      unk_140404230(2);
    }
    v1 >>= 1;
    ++v0;
  }
  unk_1404046F0(36160, 0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v7) = 1;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v7);
  return MEMORY[0x1401F8B20]((unsigned __int64)v9 ^ v34);
}

