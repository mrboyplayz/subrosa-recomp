/* Address: 0x140092140 | Name: sub_140092140 | Size: 716 bytes */
void __fastcall sub_140092140(int a1, int a2)
{
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rdx
  float v8; // xmm1_4
  float v9; // xmm0_4
  int v10; // xmm2_4
  int v11; // xmm1_4
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  int v14; // eax
  int v15; // ebx
  signed int v16; // ebp
  int i; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24[4]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v25[2]; // [rsp+40h] [rbp-58h] BYREF
  int v26; // [rsp+60h] [rbp-38h]

  v3 = 3597LL * a1;
  v4 = dword_16D67D63C[v3];
  if ( v4 != -1 && *(int *)((char *)&unk_16D67D60C + v3 * 4) < 3 )
  {
    v5 = dword_16D67D708[v3];
    v6 = a2;
    if ( dword_16D67D5EC[v3] >= *((_DWORD *)&qword_183A8AAA4 + 14019 * v5 + 3 * a2 + 1) )
    {
      v7 = 56076 * v5;
      v8 = (float)-*((_DWORD *)&unk_183A8AB70 + 14019 * v5) * 4.0;
      v9 = (float)(v8 * *(float *)((char *)&unk_183A7E0EC + v7)) + *(float *)((char *)&unk_183A8AB74 + v7);
      *(float *)&v10 = (float)(v8 * *(float *)((char *)&unk_183A7E0F4 + v7)) + *(float *)((char *)&unk_183A8AB7C + v7);
      *(float *)&v11 = (float)(v8 * *(float *)((char *)&unk_183A7E0F0 + v7)) + *(float *)((char *)&unk_183A8AB78 + v7);
      *(_DWORD *)((char *)&unk_183A8AB70 + v7) = ((unsigned __int8)*(_DWORD *)((char *)&unk_183A8AB70 + v7) + 1) & 7;
      *(float *)v24 = v9;
      v12 = *(_OWORD *)((char *)&unk_183A7E0D4 + 56076 * v5);
      v24[2] = v10;
      v25[0] = v12;
      v13 = *(_OWORD *)((char *)&unk_183A7E0E4 + 56076 * v5);
      v24[1] = v11;
      v25[1] = v13;
      v26 = *((_DWORD *)&unk_183A7E0F4 + 14019 * v5);
      sub_140049C20((__int64)v25, (float *)&qword_140146A28, v5);
      v14 = sub_1400414B0(
              *((_DWORD *)&qword_183A8AAA4 + 14019 * dword_16D67D708[v3] + 3 * v6),
              v24,
              nullptr,
              (int *)v25,
              dword_183A8AAAC[14019 * dword_16D67D708[v3] + 3 * v6]);
      v15 = v14;
      if ( v14 != -1 )
        *((_DWORD *)&unk_16E6A3C84 + 5210 * v14) = a1;
      dword_16D67D5EC[v3] -= *((_DWORD *)&qword_183A8AAA4 + 14019 * dword_16D67D708[v3] + 3 * v6 + 1);
      v16 = sub_14003B080(27, v24, nullptr, (int *)v25);
      dword_19025F340[1760 * v16] = v15;
      for ( i = 2; i < 7; ++i )
      {
        if ( (unsigned int)sub_140089E50(v16, -1, v4, i) )
          break;
      }
      ++*(_DWORD *)((char *)&unk_16D67D60C + v3 * 4);
      sub_14003A3D0(a1);
      if ( dword_19154118C == 3 )
        sub_14003A560(a1);
      v18 = dword_16D67D708[v3];
      v19 = 14019 * v18;
      v20 = dword_183A8AAAC[14019 * v18];
      if ( (int)v20 > 0 )
      {
        v21 = 4673 * v18;
        dword_183A8AAAC[v19] = v20 - 1;
        v22 = 3 * (v21 + v20);
        v23 = 3 * (v21 + v6);
        *(__int64 *)((char *)&qword_183A8AAA4 + 4 * v23) = *(__int64 *)((char *)&qword_183A8AAA4 + 4 * v22);
        dword_183A8AAAC[v23] = dword_183A8AAAC[v22];
      }
    }
  }
}

