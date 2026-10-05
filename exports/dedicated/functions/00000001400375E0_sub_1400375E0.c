/* Address: 0x1400375e0 | Name: sub_1400375E0 | Size: 738 bytes */
__int64 __fastcall sub_1400375E0(int a1, int *a2, int *a3, __int64 a4, int *a5)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 i; // rax
  unsigned __int8 v11; // al
  _DWORD *v12; // r11
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // r13
  int v19; // edx
  char v20; // cl
  __int64 v21; // rcx
  char v22; // al
  int v23; // r10d
  __int64 v24; // rbp
  int v25; // edi
  _DWORD *j; // r11
  unsigned __int8 *v27; // rax
  _BYTE *v28; // r9
  int v29; // ecx
  int v30; // edx
  _BYTE v32[512]; // [rsp+30h] [rbp-248h] BYREF

  v8 = a1;
  v9 = *a5;
  for ( i = v9; i < 62; ++i )
  {
    if ( *(_BYTE *)(i + a4) != 32 )
      break;
    LODWORD(v9) = v9 + 1;
  }
  v11 = toupper(*(unsigned __int8 *)((int)v9 + a4));
  if ( (unsigned __int8)(v11 - 65) <= 0x19u && *(_BYTE *)((int)v9 + a4 + 1) == 58 )
  {
    *a2 = v11 - 65;
    LODWORD(v9) = v9 + 2;
  }
  v12 = a5;
  *a5 = v9;
  v13 = *a2;
  if ( (_DWORD)v13 == 2 )
  {
    v14 = 1760 * v8;
    v15 = v8;
    v16 = *((_DWORD *)&unk_19025F3F4 + 1760 * v8);
  }
  else
  {
    if ( (_DWORD)v13 )
      return 0xFFFFFFFFLL;
    v14 = 1760 * v8;
    v15 = v8;
    if ( dword_19025F0F4[1760 * v8] <= 0 )
      return 0xFFFFFFFFLL;
    v16 = *((_DWORD *)&unk_19025F3F4 + 1760 * dword_19025F0F8[v14]);
  }
  if ( v16 == -1 )
    return 0xFFFFFFFFLL;
  *a3 = dword_1902604C0[1760 * v15 + 18 * v13 + *(int *)((char *)&unk_1902604BC + 72 * v13 + v14 * 4)];
  if ( *(_BYTE *)((int)v9 + a4) == 92 )
  {
    *a3 = 0;
    LODWORD(v9) = v9 + 1;
  }
  v17 = (int)v9;
  v18 = v16;
  while ( 1 )
  {
    while ( 1 )
    {
      *v12 = v9;
      if ( *(_BYTE *)(v17 + a4) != 46 )
        break;
      ++v17;
      v19 = v9 + 1;
      if ( *(_BYTE *)(v17 + a4) == 46 )
      {
        v20 = *(_BYTE *)((int)v9 + a4 + 2);
        if ( v20 != 92 && v20 )
          return 0xFFFFFFFFLL;
        ++v17;
        *a3 = *((_DWORD *)&unk_18F7174D8 + 2570 * v18 + 4 * *a3);
      }
      else
      {
        v19 = v9;
      }
      LODWORD(v9) = v19 + 1;
      if ( *(_BYTE *)(v17 + a4) != 92 )
        break;
      LODWORD(v9) = v19 + 2;
      ++v17;
    }
    v21 = 0;
    if ( v17 < 62 )
    {
      do
      {
        v22 = *(_BYTE *)(v17 + a4);
        if ( v22 == 92 || v22 == 32 || !v22 )
          break;
        if ( v21 >= 12 )
          return 0xFFFFFFFFLL;
        v32[v21] = v22;
        LODWORD(v9) = v9 + 1;
        ++v21;
        ++v17;
      }
      while ( v17 < 62 );
      if ( (unsigned __int64)v21 >= 0x200 )
        _report_rangecheckfailure(v21, &unk_18F7174CC);
    }
    v32[v21] = 0;
    if ( v21 <= 0 )
      break;
    v23 = 1;
    v24 = 10280 * v18;
    v25 = dword_18F7174C8[2570 * v18];
    if ( v25 <= 1 )
      return 0;
    for ( j = (_DWORD *)(0x140000000LL + v24 + 1332835560); ; j += 4 )
    {
      if ( *j == *a3 )
      {
        v27 = (unsigned __int8 *)&unk_18F7174CC + 16 * v23 + v24;
        v28 = (_BYTE *)(v32 - v27);
        do
        {
          v29 = (unsigned __int8)v28[(_QWORD)v27];
          v30 = *v27 - v29;
          if ( v30 )
            break;
          ++v27;
        }
        while ( v29 );
        if ( !v30 )
          break;
      }
      if ( ++v23 >= v25 )
        return 0;
    }
    if ( v23 == -1 )
      return 0;
    *a3 = v23;
    if ( *(_BYTE *)(v17 + a4) != 92 )
      break;
    v12 = a5;
    LODWORD(v9) = v9 + 1;
    ++v17;
  }
  return 1;
}

