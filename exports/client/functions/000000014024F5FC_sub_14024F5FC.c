/* Address: 0x14024f5fc | Name: sub_14024F5FC | Size: 95 bytes */
__int64 __fastcall sub_14024F5FC(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 (__fastcall *function)(__int64, _QWORD, __int64); // rax

  function = (__int64 (__fastcall *)(__int64, _QWORD, __int64))try_get_function(
                                                                 0x17u,
                                                                 (__int64)"LocateXStateFeature",
                                                                 (unsigned int *)"\n",
                                                                 (unsigned int *)"LocateXStateFeature");
  if ( !function )
    abort();
  return function(a1, a2, a3);
}

