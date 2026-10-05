/* Address: 0x1400ef3fd | Name: ioctlsocket | Size: 6 bytes */
// attributes: thunk
int __stdcall ioctlsocket(SOCKET s, int cmd, u_long *argp)
{
  return __imp_ioctlsocket(s, cmd, argp);
}

