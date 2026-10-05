/* Address: 0x1400e1e70 | Name: sub_1400E1E70 | Size: 214 bytes */
_DWORD *__fastcall sub_1400E1E70(_DWORD *a1, _BYTE *a2, int *a3)
{
  _DWORD *v5; // rbx
  _DWORD *v6; // rsi
  int v7; // edi
  void *v8; // rcx
  _DWORD *v9; // rax

  v5 = a1;
  if ( *a3 >= 8 )
  {
    v6 = a1 - 2;
    while ( v5 )
    {
      if ( *(v5 - 1) + 1 >= *v6 )
      {
        v7 = 2 * *v6 + 1;
LABEL_7:
        v8 = v6;
        if ( !v5 )
          v8 = nullptr;
        v9 = realloc(v8, v7 + 8LL);
        if ( !v9 )
          _wassert(aP, L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x331u);
        if ( !v5 )
          v9[1] = 0;
        v5 = v9 + 2;
        v6 = v9;
        *v9 = v7;
      }
      *((_BYTE *)v5 + (int)(*(v5 - 1))++) = *a2;
      *(_DWORD *)a2 >>= 8;
      *a3 -= 8;
      if ( *a3 < 8 )
        return v5;
    }
    v7 = 2;
    goto LABEL_7;
  }
  return v5;
}

