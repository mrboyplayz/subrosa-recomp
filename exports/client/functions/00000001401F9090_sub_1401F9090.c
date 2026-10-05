/* Address: 0x1401f9090 | Name: sub_1401F9090 | Size: 36 bytes */
__int64 __fastcall sub_1401F9090(char a1)
{
  __int64 result; // rax

  result = _acrt_locale_changed();
  if ( (_DWORD)result )
  {
    if ( !a1 )
      _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[19064473], 0);
  }
  return result;
}

