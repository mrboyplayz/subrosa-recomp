/* Address: 0x1402657ac | Name: ??$common_open@_W@@YAHQEB_WHH@Z | Size: 176 bytes */
__int64 __fastcall common_open<wchar_t>(__int64 a1, unsigned int a2, int a3)
{
  int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( !a1 )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  v6 = -1;
  v7 = 0;
  v4 = wsopen_nolock(&v7, &v6, a1, a2, 64, a3, 0);
  if ( v7 )
  {
    if ( v4 )
    {
      v5 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)v6 >> 6) + 19065401];
      *(_BYTE *)(v5 + 72LL * (v6 & 0x3F) + 56) &= ~1u;
    }
    sub_140261150(v6);
  }
  if ( v4 )
  {
    *errno() = v4;
    return 0xFFFFFFFFLL;
  }
  return v6;
}

