/* Address: 0x140230010 | Name: sub_140230010 | Size: 354 bytes */
__int64 __fastcall sub_140230010(_DWORD *a1, unsigned int a2, unsigned __int8 a3, char a4, __int64 a5)
{
  unsigned int v8; // r10d
  int v9; // edx
  __int64 v10; // rax
  char v11; // r9
  unsigned __int64 v12; // rcx
  char v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rbx
  int v18; // r14d
  int v19; // r8d
  unsigned __int64 v20; // rbx
  int v21; // edi
  char v22; // r8
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rdi
  char v26; // al
  int v27; // ecx
  char v28; // r9

  v8 = 0;
  v9 = *(_BYTE *)(a5 + 8) != 0 ? 52 : 23;
  if ( a2 > 0x40 )
  {
    v13 = a2;
    v14 = a2 >> 5;
    v15 = (unsigned int)(v14 - 2);
    v16 = (unsigned int)a1[v15 + 1];
    v17 = (unsigned int)a1[(unsigned int)(v14 - 1) + 1];
    v18 = 32 * (v14 - 2);
    v19 = v13 & 0x1F;
    if ( v19 )
    {
      v23 = v9 + v19 + v18;
      v24 = (unsigned int)a1[v14 + 1];
      v25 = (unsigned int)((1 << v19) - 1);
      v20 = ((unsigned __int64)((unsigned int)v16 & ~((1 << v19) - 1)) >> v19)
          + ((v25 & v24) << (64 - (unsigned __int8)v19))
          + (v17 << (64 - (unsigned __int8)v19 - 32));
      if ( a4 || (v26 = 1, ((unsigned int)v16 & (unsigned int)v25) != 0) )
        v26 = 0;
      v27 = 0;
      if ( (_DWORD)v15 )
      {
        do
        {
          v28 = 0;
          if ( !a1[v27 + 1] )
            v28 = v26;
          ++v27;
          v26 = v28;
        }
        while ( v27 != (_DWORD)v15 );
      }
      v11 = v26;
      v9 = v23;
    }
    else
    {
      v9 += v18;
      v20 = v16 + (v17 << 32);
      v11 = a4 ^ 1;
      v21 = 0;
      if ( (_DWORD)v15 )
      {
        do
        {
          v22 = 0;
          if ( !a1[v21 + 1] )
            v22 = v11;
          ++v21;
          v11 = v22;
        }
        while ( v21 != (_DWORD)v15 );
      }
    }
    v12 = v20;
  }
  else
  {
    if ( *a1 )
      v10 = (unsigned int)a1[1];
    else
      v10 = 0;
    if ( *a1 > 1u )
      v8 = a1[2];
    v11 = a4 ^ 1;
    v12 = v10 + ((unsigned __int64)v8 << 32);
  }
  return sub_14022FC68(v12, v9, a3, v11, a5);
}

