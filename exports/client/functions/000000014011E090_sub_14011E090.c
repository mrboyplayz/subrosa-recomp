/* Address: 0x14011e090 | Name: sub_14011E090 | Size: 371 bytes */
void __fastcall sub_14011E090(int a1)
{
  __int64 v1; // rbp
  unsigned int *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi

  if ( !dword_140404A6C[312324428] && !dword_140404A6C[328554868] )
  {
    v1 = 4;
    v2 = &dword_140404A6C[6930 * a1 + 83200503];
    do
    {
      if ( v2[780] )
      {
        v3 = (int)*v2;
        if ( (int)v3 >= 0 )
        {
          v4 = (int)*v2;
          v5 = 6 * v3;
          if ( dword_140404A6C[6 * v3 + 312226123] != -1 )
          {
            unk_1404044A8(0, 3, 5126);
            if ( dword_140404A6C[v5 + 328456563] != -1 )
              (*(void (__fastcall **)(__int64, _QWORD, __int64))&flt_140384000[131076])(
                12,
                6 * dword_140404A6C[8969 * v4 + 73991665],
                5125);
          }
        }
      }
      ++v2;
      --v1;
    }
    while ( v1 );
  }
}

