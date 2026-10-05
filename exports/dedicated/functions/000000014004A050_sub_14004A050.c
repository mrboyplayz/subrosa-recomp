/* Address: 0x14004a050 | Name: sub_14004A050 | Size: 33 bytes */
int sub_14004A050()
{
  int result; // eax

  if ( dword_196ABD364 )
  {
    result = WSACleanup();
    dword_196ABD364 = 0;
  }
  return result;
}

