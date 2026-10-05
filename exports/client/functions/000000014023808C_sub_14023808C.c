/* Address: 0x14023808c | Name: sub_14023808C | Size: 377 bytes */
__int64 __fastcall sub_14023808C(_BYTE *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax

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
    v9 = MEMORY[0x140259504](a4, 9, a1);
    v10 = v9;
    if ( v9 )
    {
      if ( (unsigned __int64)v9 > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v12 = malloc_base(2 * v10);
        *(_QWORD *)(a2 + 16) = v12;
        v13 = 0;
        result = v12 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          v13 = v10;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = v13;
        if ( (_DWORD)result )
          return result;
      }
      v14 = MEMORY[0x140259504](a4, 9, a1);
      if ( v14 )
      {
        *(_QWORD *)(a2 + 32) = v14 - 1LL;
        return 0;
      }
    }
    v11 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v11);
    return (unsigned int)*errno();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  v7 = malloc_base(2);
  *(_QWORD *)(a2 + 16) = v7;
  result = v7 == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_WORD **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

