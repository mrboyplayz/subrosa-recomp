/* Address: 0x140199031 | Name: sub_140199031 | Size: 6 bytes */
// attributes: thunk
struct hostent *__stdcall MEMORY[0x140199031](const char *name)
{
  return gethostbyname(name);
}

