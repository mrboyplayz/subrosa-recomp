/* Address: 0x140224800 | Name: unknown_libname_594 | Size: 165 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_594(__int64 a1, const __m128i *a2, int a3, _DWORD *a4)
{
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  __m128i *v11; // rcx

  if ( a3 )
  {
    v5 = a3;
    v6 = *(_QWORD **)a1;
    v8 = v6[1];
    if ( v6[2] == v8 )
    {
      if ( *((_BYTE *)v6 + 24) )
        *a4 += a3;
      else
        *a4 = -1;
    }
    else
    {
      v9 = v8 - v6[2];
      v10 = a3;
      v11 = (__m128i *)*v6;
      if ( v9 < a3 )
        v10 = v9;
      MEMORY[0x1401FC920](v11, a2, 2 * v10);
      **(_QWORD **)a1 += 2 * v10;
      *(_QWORD *)(*(_QWORD *)a1 + 16LL) += v10;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 24LL) )
      {
        *a4 += v5;
      }
      else if ( v10 == v5 )
      {
        *a4 += v10;
      }
      else
      {
        *a4 = -1;
      }
    }
  }
}

