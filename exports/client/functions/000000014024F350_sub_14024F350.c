/* Address: 0x14024f350 | Name: sub_14024F350 | Size: 81 bytes */
__int64 __fastcall sub_14024F350(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *function)(__int64, __int64); // rax

  function = (__int64 (__fastcall *)(__int64, __int64))try_get_function(
                                                         0x11u,
                                                         (__int64)"GetXStateFeaturesMask",
                                                         (unsigned int *)"\n",
                                                         (unsigned int *)"GetXStateFeaturesMask");
  if ( !function )
    abort();
  return function(a1, a2);
}

