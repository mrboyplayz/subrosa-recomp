/* Address: 0x140138020 | Name: sub_140138020 | Size: 90 bytes */
__int64 sub_140138020()
{
  __int64 v0; // rax
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 ProcessAffinityMask; // [rsp+30h] [rbp+8h] BYREF
  __int64 SystemAffinityMask; // [rsp+38h] [rbp+10h] BYREF

  v0 = ((__int64 (*)(void))GetCurrentProcess)();
  result = ((__int64 (__fastcall *)(__int64, __int64 *, __int64 *))GetProcessAffinityMask)(
             v0,
             &ProcessAffinityMask,
             &SystemAffinityMask);
  if ( (_DWORD)result )
  {
    if ( (ProcessAffinityMask & 1) != 0 )
    {
      v2 = ((__int64 (*)(void))GetCurrentProcess)();
      ((void (__fastcall *)(__int64, __int64))SetProcessAffinityMask)(v2, 1);
      v3 = ((__int64 (*)(void))GetCurrentProcess)();
      return ((__int64 (__fastcall *)(__int64, __int64 *, __int64 *))GetProcessAffinityMask)(
               v3,
               &ProcessAffinityMask,
               &SystemAffinityMask);
    }
  }
  return result;
}

