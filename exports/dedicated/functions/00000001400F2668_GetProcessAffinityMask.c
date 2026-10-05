/* Address: 0x1400f2668 | Name: GetProcessAffinityMask | Size: 6 bytes */
// attributes: thunk
BOOL __stdcall GetProcessAffinityMask(
        HANDLE hProcess,
        PDWORD_PTR lpProcessAffinityMask,
        PDWORD_PTR lpSystemAffinityMask)
{
  return __imp_GetProcessAffinityMask(hProcess, lpProcessAffinityMask, lpSystemAffinityMask);
}

