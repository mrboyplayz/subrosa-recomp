/* Address: 0x1400ef3eb | Name: bind | Size: 6 bytes */
// attributes: thunk
int __stdcall bind(SOCKET s, const struct sockaddr *name, int namelen)
{
  return __imp_bind(s, name, namelen);
}

