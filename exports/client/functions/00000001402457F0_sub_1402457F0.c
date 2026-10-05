/* Address: 0x1402457f0 | Name: sub_1402457F0 | Size: 369 bytes */
__int64 __fastcall sub_1402457F0(int a1)
{
  int v1; // edi
  __int64 v4; // rcx
  unsigned int *v5; // rsi
  int v6; // r15d
  __int64 v7; // rax
  void *v8; // rbx
  unsigned int v9; // esi
  void *v10; // rcx
  unsigned int v11; // ecx
  _QWORD *i; // rax
  void *v13; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    *errno() = 22;
    sub_14024CF6C(v4);
    return 22;
  }
  ((void (__fastcall *)(_QWORD, unsigned int *, __int64))GetModuleFileNameW)(0, &dword_140404A6C[19064729], 260);
  LODWORD(v5) = dword_140404A6C[19065845];
  *(_QWORD *)&dword_140404A6C[19065835] = &dword_140404A6C[19064729];
  if ( !*(_QWORD *)&dword_140404A6C[19065845] || !**(_WORD **)&dword_140404A6C[19065845] )
    v5 = &dword_140404A6C[19064729];
  v14 = 0;
  v15 = 0;
  sub_140245B44((_DWORD)v5, 0, 0, (unsigned int)&v14, (__int64)&v15);
  v6 = v14;
  v7 = sub_140245E48(v14, v15, 2);
  v8 = (void *)v7;
  if ( v7 )
  {
    sub_140245B44((_DWORD)v5, v7, v7 + 8 * v6, (unsigned int)&v14, (__int64)&v15);
    if ( a1 != 1 )
    {
      v13 = nullptr;
      v9 = common_expand_argv_wildcards<wchar_t>(v8, &v13);
      if ( v9 )
      {
        v10 = v13;
      }
      else
      {
        v11 = 0;
        for ( i = v13; *i; ++v11 )
          ++i;
        dword_140404A6C[19065837] = v11;
        v9 = 0;
        v10 = nullptr;
        *(_QWORD *)&dword_140404A6C[19065841] = v13;
        v13 = nullptr;
      }
      free_base(v10);
      v13 = nullptr;
      goto LABEL_19;
    }
    dword_140404A6C[19065837] = v14 - 1;
    *(_QWORD *)&dword_140404A6C[19065841] = v8;
    v8 = nullptr;
  }
  else
  {
    v1 = 12;
    *errno() = 12;
  }
  v9 = v1;
LABEL_19:
  free_base(v8);
  return v9;
}

