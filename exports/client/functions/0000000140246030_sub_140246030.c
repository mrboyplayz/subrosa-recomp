/* Address: 0x140246030 | Name: sub_140246030 | Size: 386 bytes */
__int64 __fastcall sub_140246030(int a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int16 *v5; // rsi
  unsigned __int64 v6; // r15
  __int16 **v7; // rax
  __int16 **v8; // rbx
  __int16 **v9; // rcx
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
      ((void (__fastcall *)(_QWORD, unsigned int *, __int64))GetModuleFileNameW)(0, &dword_140404A6C[19064729], 260);
      v5 = *(__int16 **)&dword_140404A6C[19065845];
      *(_QWORD *)&dword_140404A6C[19065835] = &dword_140404A6C[19064729];
      if ( !*(_QWORD *)&dword_140404A6C[19065845] || !**(_WORD **)&dword_140404A6C[19065845] )
        v5 = (__int16 *)&dword_140404A6C[19064729];
      v16 = 0;
      v17 = 0;
      sub_140245B44(v5, nullptr, nullptr, &v16, &v17);
      v6 = v16;
      v7 = (__int16 **)sub_140245E48(v16, v17, 2u);
      v8 = v7;
      if ( v7 )
      {
        sub_140245B44(v5, v7, (__int16 *)&v7[v6], &v16, &v17);
        if ( a1 == 1 )
        {
          *(_QWORD *)&dword_140404A6C[19065841] = v8;
          dword_140404A6C[19065837] = v16 - 1;
          v9 = nullptr;
        }
        else
        {
          Block = nullptr;
          v10 = common_expand_argv_wildcards<wchar_t>(v8, &Block);
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
          *(_QWORD *)&dword_140404A6C[19065841] = v11;
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

