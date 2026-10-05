/* Address: 0x140077410 | Name: sub_140077410 | Size: 886 bytes */
void __fastcall sub_140077410(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  float v8; // xmm7_4
  float v9; // xmm11_4
  float v10; // xmm14_4
  float v11; // xmm10_4
  float v12; // xmm13_4
  __int64 v13; // rax
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // xmm12_4
  float v20; // xmm8_4
  float v21; // xmm14_4
  __int64 v22; // r8
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  unsigned int v26; // edi
  unsigned int v27; // esi
  unsigned int v28; // ebp
  int v29; // ebx
  float v30; // [rsp+30h] [rbp-F8h]
  __int128 v31; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v32; // [rsp+48h] [rbp-E0h]
  float v33; // [rsp+58h] [rbp-D0h]

  v3 = 7040LL * a1;
  v4 = *(_DWORD *)((char *)&unk_19025F3EC + v3);
  v5 = *(_DWORD *)((char *)&unk_19025F3E0 + v3);
  v6 = *(_DWORD *)((char *)&unk_19025F3E4 + v3);
  v7 = *(_DWORD *)((char *)&unk_19025F3E8 + v3);
  v30 = *(float *)&dword_16CDE9EE0[263004 * *(int *)((char *)&unk_19025F3DC + v3)];
  v31 = xmmword_1400F78B0;
  v32 = xmmword_1400F78B0;
  v33 = 1.0;
  sub_140049C20((__int64)&v31, (float *)&qword_140146A28, a3);
  v8 = *((float *)&v31 + 3);
  v9 = *((float *)&v31 + 1);
  v10 = *((float *)&v31 + 2);
  v11 = *(float *)&v32;
  v12 = *((float *)&v32 + 1);
  v13 = 3792LL * (v4 & 0x3FF) + 116LL * *(int *)((char *)&unk_19025F3F0 + v3);
  v14 = *(float *)((char *)&unk_18E9EAA1C + v13);
  v15 = *(float *)((char *)&unk_18E9EAA14 + v13);
  v16 = *(float *)((char *)&unk_18E9EAA18 + v13);
  v17 = *((float *)&v32 + 2) * v14;
  v18 = *((float *)&v32 + 3) * v14;
  v19 = v33 * v14;
  v20 = *(float *)&v31 * v15;
  v31 = *(_OWORD *)((char *)&unk_18E9EAA20 + v13);
  v32 = *(_OWORD *)((char *)&unk_18E9EAA30 + v13);
  v21 = v10 * v15;
  v33 = *(float *)((char *)&unk_18E9EAA40 + v13);
  sub_140049C20((__int64)&v31, (float *)&qword_140146A28, v22);
  v23 = (float)((float)((float)((float)((float)((float)v5 + 0.5) * v30) + v20) + (float)(v8 * v16)) + v17)
      - *(float *)&dword_19025F11C[v3 / 4];
  v24 = (float)((float)((float)((float)((float)v6 * v30) + (float)(v9 * v15)) + (float)(v11 * v16)) + v18)
      - *(float *)&dword_19025F120[v3 / 4];
  v25 = (float)((float)((float)((float)((float)((float)v7 + 0.5) * v30) + v21) + (float)(v12 * v16)) + v19)
      - *(float *)&dword_19025F124[v3 / 4];
  if ( fsqrt((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v25 * v25)) < 0.125 )
  {
    v26 = *(_DWORD *)((char *)&unk_19025F3E8 + v3);
    v27 = *(_DWORD *)((char *)&unk_19025F3E4 + v3);
    v28 = *(_DWORD *)((char *)&unk_19025F3E0 + v3);
    v29 = ~(1 << *(_DWORD *)((char *)&unk_19025F3F0 + v3))
        & sub_14000CDB0(*(_DWORD *)((char *)&unk_19025F3DC + v3), v28, v27, v26);
    sub_14000D4B0(*(_DWORD *)((char *)&unk_19025F3DC + v3), v28, v27, v26, v29);
    sub_140039CC0(*(_DWORD *)((char *)&unk_19025F3DC + v3), v28, v27, v26, v29, 1);
  }
}

