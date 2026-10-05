/* Address: 0x140238394 | Name: sub_140238394 | Size: 374 bytes */
__int64 __fastcall sub_140238394(_BYTE *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax

  v3 = 0;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    v9 = MEMORY[0x140259504](a3, 9, a1);
    v12 = v9;
    if ( v9 )
    {
      if ( (unsigned __int64)v9 > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v14 = malloc_base(2 * v12);
        *(_QWORD *)(a2 + 16) = v14;
        v15 = 0;
        v16 = -v14;
        v8 = v16 == 0 ? 0xC : 0;
        if ( (v16 == 0 ? 0xC : 0) == 0 )
          v15 = v12;
        *(_BYTE *)(a2 + 40) = v8 == 0;
        *(_QWORD *)(a2 + 24) = v15;
        if ( (v16 == 0 ? 0xC : 0) != 0 )
          return v8;
      }
      v17 = MEMORY[0x140259504](a3, 9, a1);
      v11 = v17;
      if ( v17 )
      {
        *(_QWORD *)(a2 + 32) = v17 - 1LL;
        return v3;
      }
    }
    v13 = ((__int64 (__fastcall *)(__int64, __int64))GetLastError)(v11, v10);
    sub_14024D14C(v13);
    return (unsigned int)*errno();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    v7 = malloc_base(2);
    *(_QWORD *)(a2 + 16) = v7;
    v8 = v7 == 0 ? 0xC : 0;
    *(_BYTE *)(a2 + 40) = v8 == 0;
    *(_QWORD *)(a2 + 24) = v8 == 0;
    if ( (v7 == 0 ? 0xC : 0) != 0 )
      return v8;
  }
  **(_WORD **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return v3;
}

