/* Address: 0x140245ea8 | Name: sub_140245EA8 | Size: 390 bytes */
__int64 __fastcall sub_140245EA8(int a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char *v5; // rsi
  unsigned __int64 v6; // r15
  _QWORD *v7; // rax
  void *v8; // rbx
  void *v9; // rcx
  unsigned int v10; // esi
  void *v11; // rdx
  unsigned int v12; // ecx
  _QWORD *i; // rax
  void *Block; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      sub_14025F520();
      sub_14025B344(0, &dword_140404A6C[19064661], 260);
      v5 = *(char **)&dword_140404A6C[19065843];
      *(_QWORD *)&dword_140404A6C[19065833] = &dword_140404A6C[19064661];
      if ( !*(_QWORD *)&dword_140404A6C[19065843] || !**(_BYTE **)&dword_140404A6C[19065843] )
        v5 = (char *)&dword_140404A6C[19064661];
      v16 = 0;
      v17 = 0;
      sub_140245980(v5, nullptr, nullptr, &v16, &v17);
      v6 = v16;
      v7 = (_QWORD *)sub_140245E48(v16, v17, 1u);
      v8 = v7;
      if ( v7 )
      {
        sub_140245980(v5, v7, &v7[v6], &v16, &v17);
        if ( a1 == 1 )
        {
          *(_QWORD *)&dword_140404A6C[19065839] = v8;
          dword_140404A6C[19065837] = v16 - 1;
          v9 = nullptr;
        }
        else
        {
          Block = nullptr;
          v10 = common_expand_argv_wildcards<char>(v8, &Block);
          if ( v10 )
          {
            free_base(Block);
            Block = nullptr;
            free_base(v8);
            return v10;
          }
          v11 = Block;
          v12 = 0;
          for ( i = Block; *i; ++v12 )
            ++i;
          dword_140404A6C[19065837] = v12;
          Block = nullptr;
          *(_QWORD *)&dword_140404A6C[19065839] = v11;
          free_base(nullptr);
          v9 = v8;
          Block = nullptr;
        }
        free_base(v9);
        return v1;
      }
      v3 = 12;
      *errno() = 12;
      free_base(nullptr);
    }
    else
    {
      v3 = 22;
      *errno() = 22;
      sub_14024CF6C(v4);
    }
    return v3;
  }
  return v1;
}

