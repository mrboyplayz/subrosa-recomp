/* Address: 0x140177c80 | Name: sub_140177C80 | Size: 212 bytes */
_DWORD *__fastcall sub_140177C80(_DWORD *a1, _BYTE *a2, int *a3)
{
  _DWORD *v5; // rbx
  int *v6; // rsi
  int v7; // edi
  int *v8; // rcx
  int *v9; // rax

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
        v9 = (int *)j__realloc_base(v8, v7 + 8LL);
        if ( v9 )
        {
          if ( !v5 )
            v9[1] = 0;
          v5 = v9 + 2;
          v6 = v9;
          *v9 = v7;
        }
        else
        {
          sub_14023E640("p", L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 817);
        }
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

