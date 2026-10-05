/* Address: 0x14015d4c0 | Name: sub_14015D4C0 | Size: 195 bytes */
__int64 __fastcall sub_14015D4C0(_QWORD *a1, _WORD *a2, int a3)
{
  _WORD *v4; // rdi
  unsigned int v5; // esi
  _WORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int16 v9; // cx
  bool v10; // zf

  v4 = (_WORD *)a1[3];
  v5 = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4LL);
  if ( a3 == 2 )
  {
    if ( v5 )
    {
      v8 = v5;
      do
      {
        v9 = -1;
        v10 = *v4 == *a2;
        v4 += 2;
        if ( v10 )
          v9 = 0;
        *(v4 - 1) = v9;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    if ( a3 != 4 )
      sub_14023E640(L"out_n == 2 || out_n == 4", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 4828);
    if ( v5 )
    {
      v6 = v4 + 2;
      v7 = v5;
      do
      {
        if ( *(v6 - 2) == *a2 && *(v6 - 1) == a2[1] && *v6 == a2[2] )
          v6[1] = 0;
        v6 += 4;
        --v7;
      }
      while ( v7 );
    }
  }
  return 1;
}

