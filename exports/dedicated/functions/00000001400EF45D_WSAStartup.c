/* Address: 0x1400ef45d | Name: WSAStartup | Size: 6 bytes */
// attributes: thunk
int __stdcall WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData)
{
  return __imp_WSAStartup(wVersionRequested, lpWSAData);
}

