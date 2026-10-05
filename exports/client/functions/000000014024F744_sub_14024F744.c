/* Address: 0x14024f744 | Name: sub_14024F744 | Size: 64 bytes */
__int64 (__fastcall *__fastcall sub_14024F744(unsigned int a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = (__int64 (__fastcall *)(_QWORD))try_get_function(
                                             0x1Au,
                                             (__int64)"RoInitialize",
                                             (unsigned int *)"\t",
                                             (unsigned int *)"RoInitialize");
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(a1);
  return result;
}

