/* Address: 0x1400f2692 | Name: TerminateProcess | Size: 6 bytes */
// attributes: thunk
BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
{
  return __imp_TerminateProcess(hProcess, uExitCode);
}

