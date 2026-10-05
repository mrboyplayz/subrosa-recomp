/* Address: 0x14007d610 | Name: sub_14007D610 | Size: 138 bytes */
__int64 __fastcall sub_14007D610(unsigned int a1, float a2)
{
  __int64 v3; // rbx
  void *v4; // rcx
  __int64 v5; // rax

  v3 = 8LL * (int)a1;
  v4 = *(void **)&dword_140404A6C[v3 + 18165779];
  *(float *)&dword_140404A6C[v3 + 18165783] = a2;
  dword_140404A6C[v3 + 18165777] = 1;
  dword_140404A6C[v3 + 18165778] = 0x40000;
  free(v4);
  v5 = j__malloc_base(0x100000);
  *(_QWORD *)&dword_140404A6C[v3 + 18165779] = v5;
  MEMORY[0x1401FCD30](v5, 0, 0x100000);
  *(_QWORD *)&dword_140404A6C[v3 + 18165781] = 0;
  return a1;
}

