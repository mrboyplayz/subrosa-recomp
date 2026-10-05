/* Address: 0x1400423c0 | Name: sub_1400423C0 | Size: 310 bytes */
__int64 __fastcall sub_1400423C0(int a1, _DWORD *a2, _DWORD *a3, float a4, int a5)
{
  __int64 v5; // rdi
  __int64 v10; // rbx

  v5 = dword_16E54CAF0;
  if ( dword_16E54CAF0 >= 0x4000 )
    return 0xFFFFFFFFLL;
  v10 = 240LL * dword_16E54CAF0;
  memset((char *)&unk_16E18CAE4 + v10, 0, 0xECu);
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10) = a1;
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 4) = 0x10000;
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 20) = *a2;
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 24) = a2[1];
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 28) = a2[2];
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 32) = *a2;
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 36) = a2[1];
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 40) = a2[2];
  if ( a3 )
  {
    *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 44) = *a3;
    *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 48) = a3[1];
    *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 52) = a3[2];
  }
  *(float *)((char *)&unk_16E18CAE0 + v10 + 8) = a4;
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 12) = 993158992;
  *(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 16) = 1065353216;
  if ( a5 != -1 )
    *((_DWORD *)&unk_16E18CAE0 + 60 * v5 + (int)(*(_DWORD *)((char *)&unk_16E18CAE0 + v10 + 212))++ + 54) = a5;
  dword_16E54CAF0 = v5 + 1;
  return (unsigned int)v5;
}

