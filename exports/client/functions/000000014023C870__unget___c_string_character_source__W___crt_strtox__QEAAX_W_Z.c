/* Address: 0x14023c870 | Name: ?unget@?$c_string_character_source@_W@__crt_strtox@@QEAAX_W@Z | Size: 45 bytes */
_WORD *__fastcall __crt_strtox::c_string_character_source<wchar_t>::unget(_QWORD *a1, __int16 a2)
{
  _WORD *result; // rax
  __int64 v3; // rcx

  result = (_WORD *)(*a1 - 2LL);
  *a1 = result;
  if ( a2 )
  {
    if ( *result != a2 )
    {
      *errno() = 22;
      return (_WORD *)sub_14024CF6C(v3);
    }
  }
  return result;
}

