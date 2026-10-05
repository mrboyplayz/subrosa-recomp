/* Address: 0x140260ec8 | Name: sub_140260EC8 | Size: 165 bytes */
__int64 sub_140260EC8()
{
  __int64 v0; // rax
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  _BYTE *v5; // rcx
  unsigned int v6; // eax

  v0 = calloc_base(0x40u, 0x48u);
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    v3 = v0 + 4608;
    v4 = v0 + 48;
    do
    {
      _acrt_InitializeCriticalSectionEx(v4 - 48, 0xFA0u, 0);
      *(_QWORD *)(v4 - 8) = -1;
      v5 = (_BYTE *)(v4 + 14);
      *(_QWORD *)v4 = 0;
      v6 = 0;
      *(_DWORD *)(v4 + 8) = 168427520;
      *(_BYTE *)(v4 + 12) = 10;
      *(_BYTE *)(v4 + 13) &= 0xF8u;
      do
      {
        *v5 = 0;
        ++v6;
        ++v5;
      }
      while ( v6 < 5 );
      v4 += 72;
    }
    while ( v4 - 48 != v3 );
    v1 = v2;
  }
  free_base(nullptr);
  return v1;
}

