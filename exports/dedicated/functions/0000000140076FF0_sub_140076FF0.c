/* Address: 0x140076ff0 | Name: sub_140076FF0 | Size: 1054 bytes */
__int64 __fastcall sub_140076FF0(unsigned int a1, int a2, signed int a3, int a4, int a5, int a6)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  int v9; // r15d
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // r13d
  float v13; // xmm6_4
  __int64 v14; // rbx
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm8_4
  float v19; // xmm10_4
  float v20; // xmm9_4
  __int64 v21; // r8
  int v22; // ebx
  unsigned __int64 v23; // r9
  bool v24; // zf
  int *v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r8
  _DWORD *v28; // rcx
  unsigned int v30; // [rsp+30h] [rbp-99h]
  unsigned int v31; // [rsp+34h] [rbp-95h]
  int v33[4]; // [rsp+40h] [rbp-89h] BYREF
  __int128 v34; // [rsp+50h] [rbp-79h] BYREF
  __int128 v35; // [rsp+60h] [rbp-69h]
  float v36; // [rsp+70h] [rbp-59h]

  v7 = a2;
  v8 = a3;
  v9 = 1 << a2;
  if ( ((unsigned int)sub_14000CDB0(a3, a4, a5, a6) & (1 << a2)) != 0 )
    return 0xFFFFFFFFLL;
  v34 = xmmword_1400F78B0;
  v35 = xmmword_1400F78B0;
  v12 = HIBYTE(a1) & 3;
  v30 = a1 & 0x3FF;
  v13 = *(float *)&dword_16CDE9EE0[263004 * v8];
  v36 = 1.0;
  sub_140049C20((__int64)&v34, (float *)&qword_140146A28, v10);
  v14 = 3792LL * v30 + 116 * v7;
  v15 = *(float *)((char *)&unk_18E9EAA14 + v14);
  v16 = *(float *)((char *)&unk_18E9EAA18 + v14);
  v17 = *(float *)((char *)&unk_18E9EAA1C + v14);
  v18 = (float)((float)((float)((float)((float)a4 + 0.5) * v13) + (float)(*(float *)&v34 * v15))
              + (float)(*((float *)&v34 + 3) * v16))
      + (float)(*((float *)&v35 + 2) * v17);
  *(float *)v33 = v18;
  v19 = (float)((float)((float)((float)a5 * v13) + (float)(*((float *)&v34 + 1) * v15)) + (float)(*(float *)&v35 * v16))
      + (float)(*((float *)&v35 + 3) * v17);
  *(float *)&v33[1] = v19;
  v20 = (float)((float)((float)((float)((float)a6 + 0.5) * v13) + (float)(*((float *)&v34 + 2) * v15))
              + (float)(*((float *)&v35 + 1) * v16))
      + (float)(v36 * v17);
  v34 = *(_OWORD *)((char *)&unk_18E9EAA20 + v14);
  *(float *)&v33[2] = v20;
  v35 = *(_OWORD *)((char *)&unk_18E9EAA30 + v14);
  v36 = *(float *)((char *)&unk_18E9EAA40 + v14);
  sub_140049C20((__int64)&v34, (float *)&qword_140146A28, v21);
  result = sub_14003B080(*(_DWORD *)((char *)&unk_18E9EAA10 + v14), v33, nullptr, (int *)&v34);
  v31 = result;
  if ( (_DWORD)result != -1 )
  {
    v22 = v9 | sub_14000CDB0(v8, a4, a5, a6);
    sub_14000D4B0(v8, a4, a5, a6, v22);
    sub_140039CC0(v8, a4, a5, a6, v22, 1);
    v23 = 7040LL * (int)v31;
    v24 = dword_19025F0D4[v23 / 4] == 39;
    *(_DWORD *)((char *)&unk_19025F3D8 + v23) = 1;
    *(_DWORD *)((char *)&unk_19025F3DC + v23) = v8;
    *(_DWORD *)((char *)&unk_19025F3E0 + v23) = a4;
    *(_DWORD *)((char *)&unk_19025F3E4 + v23) = a5;
    *(_DWORD *)((char *)&unk_19025F3E8 + v23) = a6;
    *(_DWORD *)((char *)&unk_19025F3EC + v23) = v30 + (v12 << 24);
    *(_DWORD *)((char *)&unk_19025F3F0 + v23) = a2;
    if ( v24 && dword_183A7E074 > 0 )
    {
      v25 = (int *)&unk_183A7E104;
      v26 = (unsigned int)dword_183A7E074;
      do
      {
        if ( v18 >= *((float *)v25 - 3)
          && v18 < *(float *)v25
          && v19 >= *((float *)v25 - 2)
          && v19 < *((float *)v25 + 1)
          && v20 >= *((float *)v25 - 1)
          && v20 < *((float *)v25 + 2) )
        {
          v27 = v25[12959];
          if ( v27 > 0 )
          {
            v28 = v25 + 12962;
            do
            {
              if ( a5 == *(v28 - 1) && a6 == *v28 && a4 == *(v28 - 2) )
              {
                v24 = *(v25 - 19) == 1;
                *(_DWORD *)((char *)&unk_19025F3F4 + v23) = v28[1];
                if ( v24 )
                  dword_190260718[v23 / 4] = v25[103];
              }
              v28 += 4;
              --v27;
            }
            while ( v27 );
          }
        }
        v25 += 14019;
        --v26;
      }
      while ( v26 );
    }
    return v31;
  }
  return result;
}

