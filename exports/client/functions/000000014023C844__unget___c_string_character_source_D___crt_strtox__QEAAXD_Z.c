/* Address: 0x14023c844 | Name: ?unget@?$c_string_character_source@D@__crt_strtox@@QEAAXD@Z | Size: 42 bytes */
_BYTE *__fastcall __crt_strtox::c_string_character_source<char>::unget(_QWORD *a1, char a2)
{
  _BYTE *result; // rax
  __int64 v3; // rcx

  result = (_BYTE *)(*a1 - 1LL);
  *a1 = result;
  if ( a2 )
  {
    if ( *result != a2 )
    {
      *errno() = 22;
      return (_BYTE *)sub_14024CF6C(v3);
    }
  }
  return result;
}

