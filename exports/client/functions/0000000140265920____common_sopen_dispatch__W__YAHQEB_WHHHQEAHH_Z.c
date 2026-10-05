/* Address: 0x140265920 | Name: ??$common_sopen_dispatch@_W@@YAHQEB_WHHHQEAHH@Z | Size: 195 bytes */
__int64 __fastcall common_sopen_dispatch<wchar_t>(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int *a5,
        int a6)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-14h]

  if ( !a5 || (*a5 = -1, !a1) || a6 && (a4 & 0xFFFFFE7F) != 0 )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v7 = wsopen_nolock(&v9, a5, a1, a2, a3, a4, a6);
    v10 = v7;
    if ( v9 )
    {
      if ( v7 )
      {
        v8 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)*a5 >> 6) + 19065401];
        *(_BYTE *)(v8 + 72LL * (*a5 & 0x3F) + 56) &= ~1u;
      }
      sub_140261150(*a5);
    }
    if ( v7 )
      *a5 = -1;
    return v7;
  }
}

