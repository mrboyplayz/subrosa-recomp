/* Address: 0x1400ef427 | Name: recv | Size: 6 bytes */
// attributes: thunk
int __stdcall recv(SOCKET s, char *buf, int len, int flags)
{
  return __imp_recv(s, buf, len, flags);
}

