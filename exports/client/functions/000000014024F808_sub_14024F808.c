/* Address: 0x14024f808 | Name: sub_14024F808 | Size: 66 bytes */
__int64 (__fastcall *__fastcall sub_14024F808(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = (__int64 (__fastcall *)(__int64))try_get_function(
                                              0x20u,
                                              (__int64)"SetThreadStackGuarantee",
                                              (unsigned int *)&unk_14028AF70,
                                              (unsigned int *)"SetThreadStackGuarantee");
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}

