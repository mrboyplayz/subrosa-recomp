/* Address: 0x140256738 | Name: ?fp_format_nan_or_infinity@@YAHW4__acrt_fp_class@@_NPEAD_K1@Z | Size: 165 bytes */
__int64 __fastcall fp_format_nan_or_infinity(
        int a1,
        unsigned __int8 a2,
        _BYTE *a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r11

  if ( a4 >= (unsigned __int64)a2 + 4 )
  {
    v8 = -1;
    if ( a2 )
    {
      *a3++ = 45;
      *a3 = 0;
      if ( a4 != -1 )
        --a4;
    }
    v9 = 4LL * (unsigned int)(a1 - 1);
    do
      ++v8;
    while ( *((_BYTE *)*(&off_14028B000 + 2 * (a5 ^ 1u) + v9) + v8) );
    result = strcpy_s(a3, a4, (__int64)*(&off_14028B000 + 2 * (a5 ^ 1) + v9 + (a4 <= v8)));
    if ( (_DWORD)result )
    {
      sub_14024CFBC();
      JUMPOUT(0x1402567DCLL);
    }
  }
  else
  {
    *a3 = 0;
    return 12;
  }
  return result;
}

