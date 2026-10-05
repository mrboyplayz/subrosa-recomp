/* Address: 0x1400ef44b | Name: gethostbyname | Size: 6 bytes */
// attributes: thunk
struct hostent *__stdcall gethostbyname(const char *name)
{
  return __imp_gethostbyname(name);
}

