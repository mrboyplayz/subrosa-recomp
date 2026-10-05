/* Address: 0x14024f6d0 | Name: sub_14024F6D0 | Size: 113 bytes */
__int64 __fastcall sub_14024F6D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 (__fastcall *function)(__int64, __int64, __int64, _QWORD); // rax

  function = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))try_get_function(
                                                                          0x19u,
                                                                          (__int64)"MessageBoxW",
                                                                          (unsigned int *)"\r",
                                                                          (unsigned int *)"MessageBoxW");
  if ( !function )
    abort();
  return function(a1, a2, a3, a4);
}

