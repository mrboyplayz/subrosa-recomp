/* Address: 0x1400c45f0 | Name: sub_1400C45F0 | Size: 90 bytes */
BOOL sub_1400C45F0()
{
  HANDLE CurrentProcess; // rax
  BOOL result; // eax
  HANDLE v2; // rax
  HANDLE v3; // rax
  ULONG_PTR ProcessAffinityMask; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR SystemAffinityMask; // [rsp+38h] [rbp+10h] BYREF

  CurrentProcess = GetCurrentProcess();
  result = GetProcessAffinityMask(CurrentProcess, &ProcessAffinityMask, &SystemAffinityMask);
  if ( result )
  {
    if ( (ProcessAffinityMask & 1) != 0 )
    {
      v2 = GetCurrentProcess();
      SetProcessAffinityMask(v2, 1u);
      v3 = GetCurrentProcess();
      return GetProcessAffinityMask(v3, &ProcessAffinityMask, &SystemAffinityMask);
    }
  }
  return result;
}

