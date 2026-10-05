/* Address: 0x14024ef54 | Name: sub_14024EF54 | Size: 72 bytes */
__int64 __fastcall sub_14024EF54(__int64 a1)
{
  __int64 (__fastcall *function)(__int64); // rax

  function = (__int64 (__fastcall *)(__int64))try_get_function(
                                                3u,
                                                (__int64)"FlsAlloc",
                                                (unsigned int *)&unk_14028AC48,
                                                (unsigned int *)&unk_14028AC50);
  if ( function )
    return function(a1);
  else
    return ((__int64 (*)(void))TlsAlloc)();
}

