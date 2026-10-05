/* Address: 0x1400f221c | Name: __scrt_initialize_default_local_stdio_options | Size: 27 bytes */
_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_140001000();
  *v0 |= 0x24uLL;
  result = sub_140001010();
  *result |= 2uLL;
  return result;
}

