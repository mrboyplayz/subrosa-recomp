/* Address: 0x14024f7b8 | Name: sub_14024F7B8 | Size: 79 bytes */
__int64 __fastcall sub_14024F7B8(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *function)(__int64, _QWORD); // rax

  function = (__int64 (__fastcall *)(__int64, _QWORD))try_get_function(
                                                        0x21u,
                                                        (__int64)"SystemFunction036",
                                                        (unsigned int *)&unk_14028AF90,
                                                        (unsigned int *)"SystemFunction036");
  if ( !function )
    abort();
  return function(a1, a2);
}

