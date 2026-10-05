/* Address: 0x1402492bc | Name: sub_1402492BC | Size: 490 bytes */
__int64 __fastcall sub_1402492BC(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  void *v4; // rsi
  __int64 v5; // r14
  char **v6; // r15
  __int16 **v7; // rbp
  unsigned __int16 *v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rdx
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rcx

  v2 = 1;
  result = malloc_base(1702);
  v4 = (void *)result;
  if ( result )
  {
    v5 = result + 4;
    *(_WORD *)(result + 4) = 0;
    v6 = (char **)(a1 + 72);
    *(_DWORD *)result = 1;
    sub_1402491B0(result + 4, 849, 3);
    v7 = &off_14028A188;
    do
    {
      if ( (unsigned int)sub_14025ACB4(v5, 849, L";") )
      {
        sub_14024CFBC(0, 0, 0, 0, 0);
        JUMPOUT(0x1402494A5LL);
      }
      v8 = (unsigned __int16 *)*v6;
      do
      {
        v9 = *(unsigned __int16 *)((char *)v8 + v6[4] - *v6);
        v10 = *v8 - v9;
        if ( v10 )
          break;
        ++v8;
      }
      while ( v9 );
      v11 = 0;
      if ( !v10 )
        v11 = v2;
      v2 = v11;
      v7 += 3;
      v6 += 4;
      sub_1402491B0(v5, 849, 3);
    }
    while ( (__int64)v7 < (__int64)&off_14028A1E8 );
    if ( v2 )
    {
      free_base(v4);
      v14 = *(volatile signed __int32 **)(a1 + 56);
      if ( v14 && _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
        free_base(*(void **)(a1 + 56));
      v15 = *(volatile signed __int32 **)(a1 + 48);
      if ( v15 && _InterlockedExchangeAdd(v15, 0xFFFFFFFF) == 1 )
        free_base(*(void **)(a1 + 48));
      result = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    else
    {
      v12 = *(volatile signed __int32 **)(a1 + 56);
      if ( v12 && _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
        free_base(*(void **)(a1 + 56));
      v13 = *(volatile signed __int32 **)(a1 + 48);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
          free_base(*(void **)(a1 + 48));
      }
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a1 + 40) = v5;
      return v5;
    }
  }
  return result;
}

