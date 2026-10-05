/* Address: 0x140038370 | Name: sub_140038370 | Size: 208 bytes */
__int64 __fastcall sub_140038370(int a1, _DWORD *a2, float a3)
{
  int *v4; // rax
  unsigned int v6; // edi
  __int64 v8; // rbx

  v4 = (int *)&unk_16DC819C0;
  v6 = 0;
  while ( *v4 )
  {
    ++v6;
    v4 += 202;
    if ( (__int64)v4 >= (__int64)&dword_16DD4B9C0 )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v8 = 808LL * (int)v6;
  memset((char *)&unk_16DC819C4 + v8, 0, 0x324u);
  *(_DWORD *)((char *)&unk_16DC819C0 + v8) = 1;
  *(_DWORD *)((char *)&unk_16DC819C0 + v8 + 4) = a1;
  *(_DWORD *)((char *)&unk_16DC819C0 + v8 + 20) = *a2;
  *(_DWORD *)((char *)&unk_16DC819C0 + v8 + 24) = a2[1];
  *(_DWORD *)((char *)&unk_16DC819C0 + v8 + 28) = a2[2];
  *(float *)((char *)&unk_16DC819C0 + v8 + 32) = a3;
  *(_QWORD *)((char *)&unk_16DC819C0 + v8 + 8) = -1;
  return v6;
}

