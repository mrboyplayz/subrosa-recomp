/* Address: 0x140177030 | Name: sub_140177030 | Size: 159 bytes */
__int64 __fastcall sub_140177030(__int64 *a1, int a2, int a3)
{
  __int64 v3; // r9
  int v5; // eax
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rax

  v3 = *a1;
  if ( *a1 )
    v5 = 2 * *(_DWORD *)(v3 - 8);
  else
    v5 = 1;
  v6 = v5 + a2;
  v7 = v3 - 8;
  v8 = a3 * (v5 + a2) + 8LL;
  if ( !v3 )
    v7 = 0;
  v9 = j__realloc_base(v7, v8);
  if ( v9 )
  {
    if ( !*a1 )
      *(_DWORD *)(v9 + 4) = 0;
    v11 = v9 + 8;
    *a1 = v11;
    *(_DWORD *)(v11 - 8) = v6;
    return *a1;
  }
  else
  {
    sub_14023E640("p", L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 817);
    return *a1;
  }
}

