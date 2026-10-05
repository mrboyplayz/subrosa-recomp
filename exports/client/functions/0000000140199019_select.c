/* Address: 0x140199019 | Name: select | Size: 6 bytes */
// attributes: thunk
int __stdcall select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout)
{
  return __imp_select(nfds, readfds, writefds, exceptfds, timeout);
}

