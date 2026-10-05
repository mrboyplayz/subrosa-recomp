/* Address: 0x140160e00 | Name: sub_140160E00 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140160E00(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  unsigned int v4; // esi
  __int64 v9; // rax
  char *v10; // rbx
  int v12; // r9d
  int v13; // eax
  __int64 v14; // [rsp-20h] [rbp-11188h] BYREF
  int v15[2]; // [rsp+10h] [rbp-11158h] BYREF
  void *Block; // [rsp+18h] [rbp-11150h]
  void *v17; // [rsp+20h] [rbp-11148h]
  void *v18; // [rsp+28h] [rbp-11140h]
  __int64 v19; // [rsp+8880h] [rbp-88E8h]
  unsigned int v20; // [rsp+88E0h] [rbp-8888h]

  v4 = v20;
  MEMORY[0x1401FCD30](v15, 0, 0x8870u);
  v9 = sub_140160EF0(a1, v15, a4, v4, 0);
  v10 = (char *)v9;
  if ( v9 == a1 || !v9 )
  {
    if ( Block )
      free(Block);
  }
  else
  {
    v12 = v15[0];
    v13 = v15[1];
    *a2 = v15[0];
    *a3 = v13;
    if ( (v4 & 0xFFFFFFFB) != 0 )
      sub_14015D7E0(v10, 4, v4, v12, v13);
  }
  free(v18);
  free(v17);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v19);
}

