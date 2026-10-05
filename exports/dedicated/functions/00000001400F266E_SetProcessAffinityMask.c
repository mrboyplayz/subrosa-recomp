/* Address: 0x1400f266e | Name: SetProcessAffinityMask | Size: 6 bytes */
// attributes: thunk
BOOL __stdcall SetProcessAffinityMask(HANDLE hProcess, DWORD_PTR dwProcessAffinityMask)
{
  return __imp_SetProcessAffinityMask(hProcess, dwProcessAffinityMask);
}

