/* Address: 0x14025068c | Name: ?find_or_allocate_unused_stream_nolock@@YA?AV__crt_stdio_stream@@XZ | Size: 234 bytes */
__int64 *__fastcall find_or_allocate_unused_stream_nolock(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  v2 = (__int64 *)(*(_QWORD *)&dword_140404A6C[19064593] + 24LL);
  v3 = *(_QWORD *)&dword_140404A6C[19064593] + 24LL + 8 * ((int)dword_140404A6C[19064591] - 3LL);
  while ( v2 != (__int64 *)v3 )
  {
    v4 = *v2;
    if ( !*v2 )
    {
      *v2 = calloc_base(1u, 0x58u);
      free_base(nullptr);
      if ( *v2 )
      {
        *(_DWORD *)(*v2 + 24) = -1;
        _acrt_InitializeCriticalSectionEx(*v2 + 48, 0xFA0u, 0);
        v4 = *v2;
        _InterlockedOr((volatile signed __int32 *)(*v2 + 20), 0x2000u);
        sub_14020B5E0(v4);
LABEL_12:
        *a1 = v4;
        return a1;
      }
      break;
    }
    if ( (*(_DWORD *)(v4 + 20) & 0x2000) == 0 )
    {
      sub_14020B5E0(*v2);
      _m_prefetchw((const void *)(v4 + 20));
      v5 = *(_DWORD *)(v4 + 20);
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 20), v5 | 0x2000, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 0x2000) == 0 )
        goto LABEL_12;
      sub_14020B5EC(v4);
    }
    ++v2;
  }
  *a1 = 0;
  return a1;
}

