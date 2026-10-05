/* Address: 0x140092910 | Name: sub_140092910 | Size: 335 bytes */
void __fastcall sub_140092910(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // r15d
  int v6; // ecx
  int v7; // esi
  __int64 v8; // rdx
  int v9; // xmm1_4
  signed int v10; // ebp
  int i; // ebx
  int v12[4]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+50h] [rbp-28h]

  v3 = 3597LL * a1;
  if ( *(int *)((char *)&unk_16D67D608 + v3 * 4) < 20 )
  {
    v4 = a2 + 4673LL * dword_16D67D708[v3];
    v5 = *((_DWORD *)&qword_183A8AAA4 + 3 * v4 + 1);
    v6 = *((_DWORD *)&qword_183A8AAA4 + 3 * v4);
    if ( dword_16D67D5EC[v3] >= v5 )
    {
      v7 = dword_16D67D63C[v3];
      v8 = 7166LL * v7;
      v9 = dword_190941A48[v8 + 1];
      v12[0] = dword_190941A48[v8];
      v12[2] = dword_190941A48[v8 + 2];
      v12[1] = v9;
      v14 = 1065353216;
      v13[0] = xmmword_1400F78B0;
      v13[1] = xmmword_1400F78B0;
      v10 = sub_14003B080(v6, v12, nullptr, (int *)v13);
      for ( i = 2; i < 7; ++i )
      {
        if ( (unsigned int)sub_140089E50(v10, -1, v7, i) )
          break;
      }
      dword_16D67D5EC[v3] -= v5;
      ++*(_DWORD *)((char *)&unk_16D67D608 + v3 * 4);
      sub_14003A3D0(a1);
    }
  }
}

