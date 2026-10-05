/* Address: 0x140251470 | Name: _fileno | Size: 38 bytes */
int __cdecl fileno(FILE *Stream)
{
  if ( Stream )
    return *((_DWORD *)Stream + 6);
  *errno() = 22;
  sub_14024CF6C();
  return -1;
}

