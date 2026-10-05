/* Address: 0x1401fd5fc | Name: sub_1401FD5FC | Size: 279 bytes */
signed __int64 __fastcall sub_1401FD5FC(volatile signed __int64 *a1, __int64 a2)
{
  volatile signed __int64 result; // rax
  signed __int64 v5; // rsi
  _BYTE *v6; // rdi
  __int64 v7; // rax
  _BYTE *v8; // rcx
  __int64 v9; // rbp
  _OWORD *v10; // rax
  void *v11; // rbx
  signed __int64 v12; // r15
  _OWORD *v13; // r12
  signed __int64 v14; // rax

  result = *a1;
  v5 = 0;
  if ( !*a1 )
  {
    v6 = (_BYTE *)sub_140205E28(0, (int)a1 + 9, 0, (unsigned int)&j_j__malloc_base, (__int64)j_free_3, 10240);
    if ( v6 )
    {
      v7 = -1;
      do
        ++v7;
      while ( v6[v7] );
      if ( v7 )
      {
        v8 = &v6[v7 - 1];
        do
        {
          if ( *v8 != 32 )
            break;
          *v8-- = 0;
          --v7;
        }
        while ( v7 );
      }
      v9 = v7 + 1;
      v10 = (_OWORD *)j__malloc_base(v7 + 17);
      v11 = v10;
      if ( v10 )
      {
        v12 = (signed __int64)(v10 + 1);
        *v10 = 0;
        v13 = v10;
        strcpy_s(v10 + 1, v9, v6);
        v14 = _InterlockedCompareExchange64(a1, v12, 0);
        if ( v14 )
        {
          v5 = v14;
        }
        else
        {
          v11 = nullptr;
          ((void (__fastcall *)(__int64, _OWORD *))InterlockedPushEntrySList)(a2, v13);
          v5 = v12;
        }
      }
      free(v11);
    }
    free(v6);
    return v5;
  }
  return result;
}

