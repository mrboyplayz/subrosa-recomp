/* Address: 0x14019903d | Name: sub_14019903D | Size: 6 bytes */
// attributes: thunk
struct servent *__stdcall MEMORY[0x14019903D](const char *name, const char *proto)
{
  return getservbyname(name, proto);
}

