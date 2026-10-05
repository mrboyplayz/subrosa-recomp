/* Address: 0x1400ef43f | Name: sendto | Size: 6 bytes */
// attributes: thunk
int __stdcall sendto(SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen)
{
  return __imp_sendto(s, buf, len, flags, to, tolen);
}

