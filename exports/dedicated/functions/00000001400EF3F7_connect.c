/* Address: 0x1400ef3f7 | Name: connect | Size: 6 bytes */
// attributes: thunk
int __stdcall connect(SOCKET s, const struct sockaddr *name, int namelen)
{
  return __imp_connect(s, name, namelen);
}

