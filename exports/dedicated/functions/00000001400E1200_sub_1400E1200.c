/* Address: 0x1400e1200 | Name: sub_1400E1200 | Size: 161 bytes */
__int64 __fastcall sub_1400E1200(__int64 *a1, int a2, int a3)
{
  __int64 v3; // r9
  int v5; // eax
  int v6; // edi
  void *v7; // rcx
  size_t v8; // rdx
  _DWORD *v9; // rax
  char *v10; // rax

  v3 = *a1;
  if ( *a1 )
    v5 = 2 * *(_DWORD *)(v3 - 8);
  else
    v5 = 1;
  v6 = v5 + a2;
  v7 = (void *)(v3 - 8);
  v8 = a3 * (v5 + a2) + 8LL;
  if ( !v3 )
    v7 = nullptr;
  v9 = realloc(v7, v8);
  if ( !v9 )
    _wassert(aP, L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
  if ( !*a1 )
    v9[1] = 0;
  v10 = (char *)(v9 + 2);
  *a1 = (__int64)v10;
  *((_DWORD *)v10 - 2) = v6;
  return *a1;
}

