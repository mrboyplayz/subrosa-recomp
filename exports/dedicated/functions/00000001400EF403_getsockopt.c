/* Address: 0x1400ef403 | Name: getsockopt | Size: 6 bytes */
// attributes: thunk
int __stdcall getsockopt(SOCKET s, int level, int optname, char *optval, int *optlen)
{
  return __imp_getsockopt(s, level, optname, optval, optlen);
}

