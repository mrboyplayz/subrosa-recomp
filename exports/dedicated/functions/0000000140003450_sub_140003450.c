/* Address: 0x140003450 | Name: sub_140003450 | Size: 514 bytes */
__int64 __fastcall sub_140003450(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  char *v8; // rcx
  char *v9; // rdx
  int v10; // eax
  int v11; // xmm0_4
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  _OWORD v15[2]; // [rsp+28h] [rbp-40h] BYREF
  int v16; // [rsp+48h] [rbp-20h]

  v1 = a1;
  result = sub_140042500();
  v3 = result;
  if ( (_DWORD)result != -1 )
  {
    v4 = 808 * v1;
    v5 = 14388LL * (int)result;
    *(_DWORD *)((char *)&unk_16DC819C8 + v4) = result;
    dword_16D67D624[v5 / 4] = 7;
    sub_1400DBB30(&byte_16D67D5A4[v5], (char *)&byte_1400F34A0);
    v6 = *(_DWORD *)((char *)&unk_16DC819E4 + v4);
    *(_DWORD *)((char *)&unk_16D6802B8 + v5) = 1;
    dword_16D680D4C[v5 / 4] = 1;
    dword_16D680D60[v5 / 4] = 2;
    dword_16D680D64[v5 / 4] = 1;
    *(_DWORD *)((char *)&unk_16D6802D4 + v5) = 0;
    *(_DWORD *)((char *)&unk_16D6802D8 + v5) = v6;
    if ( v6 > 0 )
    {
      v7 = (unsigned int)v6;
      v8 = (char *)&unk_16D6802E4 + v5;
      v9 = (char *)&unk_16DC819F0 + v4;
      do
      {
        v10 = *((_DWORD *)v9 - 2);
        v9 += 12;
        *((_DWORD *)v8 - 2) = v10;
        v8 += 32;
        *((_DWORD *)v8 - 9) = *((_DWORD *)v9 - 4);
        *((_DWORD *)v8 - 8) = *((_DWORD *)v9 - 3);
        --v7;
      }
      while ( v7 );
    }
    sub_14003A3D0(v3);
    v15[0] = xmmword_1400F78B0;
    v15[1] = xmmword_1400F78B0;
    v16 = 1065353216;
    sub_140049C20(v15, &dword_140146A28);
    result = sub_14003A7B0((char *)&unk_16DC819D4 + v4, v15, v3);
    dword_16D67D63C[v5 / 4] = result;
    if ( (_DWORD)result != -1 )
    {
      v11 = *(_DWORD *)((char *)&unk_16DC819E0 + v4);
      *(_DWORD *)((char *)&unk_16DC819CC + v4) = result;
      v12 = 28664LL * (int)result;
      *(_DWORD *)((char *)&unk_16D6802C8 + v5) = v11;
      result = *(unsigned int *)((char *)&unk_16DC819C4 + v4);
      *(_DWORD *)((char *)&unk_16D67D650 + v5) = 0;
      *(_DWORD *)((char *)&unk_190941A60 + v12) = v11;
      if ( (_DWORD)result == 1 )
      {
        *(_DWORD *)((char *)&unk_16D6802BC + v5) = 1;
      }
      else if ( !(_DWORD)result )
      {
        v13 = rand();
        v14 = 7;
        if ( (v13 & 1) != 0 )
          v14 = 11;
        return sub_1400B9160((unsigned int)dword_16D67D63C[v5 / 4], v14);
      }
    }
  }
  return result;
}

