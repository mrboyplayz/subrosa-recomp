/* Address: 0x1400ef439 | Name: send | Size: 6 bytes */
// attributes: thunk
int __stdcall send(SOCKET s, const char *buf, int len, int flags)
{
  return __imp_send(s, buf, len, flags);
}

