/* Address: 0x1401fd3c8 | Name: sub_1401FD3C8 | Size: 165 bytes */
__int64 __fastcall sub_1401FD3C8(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // rcx
  int *v6; // r8
  int v7; // edx
  const char *v8; // rbx

  if ( !a2
    || (v3 = *a2) == 0
    || *(_DWORD *)v3 != -529697949
    || *(_DWORD *)(v3 + 24) != 4
    || (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) > 2 )
  {
    abort();
  }
  v4 = *(_QWORD *)(v3 + 56);
  v5 = *(int *)(*(_QWORD *)(v3 + 48) + 12LL);
  v6 = (int *)(v5 + v4 + 4);
  v7 = *(_DWORD *)(v5 + v4);
  if ( v7 <= 0 )
    return 0;
  v8 = (const char *)(a1 + 16);
  while ( strcmp(v8, (const char *)(*(int *)(*v6 + v4 + 4) + v4 + 16)) )
  {
    --v7;
    ++v6;
    if ( v7 <= 0 )
      return 0;
  }
  return 1;
}

