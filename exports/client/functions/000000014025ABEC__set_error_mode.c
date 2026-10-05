/* Address: 0x14025abec | Name: _set_error_mode | Size: 64 bytes */
int __cdecl set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_140404A6C[19065813];
      dword_140404A6C[19065813] = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_140404A6C[19065813];
  }
  *errno() = 22;
  sub_14024CF6C();
  return -1;
}

