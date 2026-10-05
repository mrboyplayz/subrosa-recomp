/* Address: 0x14023d3bc | Name: ??$common_assert@_W@@YAXQEB_W0IQEAX@Z | Size: 113 bytes */
__int64 __fastcall common_assert<wchar_t>(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax

  v8 = set_error_mode(3);
  if ( v8 == 1 || !v8 && (unsigned int)sub_14024774C() == 1 )
    sub_14023E008(a1, a2, a3);
  return sub_14023D4F4(a1, a2, a3, a4);
}

