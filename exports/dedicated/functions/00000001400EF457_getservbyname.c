/* Address: 0x1400ef457 | Name: getservbyname | Size: 6 bytes */
// attributes: thunk
struct servent *__stdcall getservbyname(const char *name, const char *proto)
{
  return __imp_getservbyname(name, proto);
}

