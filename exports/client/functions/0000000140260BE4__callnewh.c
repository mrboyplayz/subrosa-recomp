/* Address: 0x140260be4 | Name: _callnewh | Size: 47 bytes */
_BOOL8 __fastcall callnewh(__int64 a1)
{
  unsigned int (__fastcall *new_handler)(__int64); // rax

  new_handler = (unsigned int (__fastcall *)(__int64))query_new_handler();
  return new_handler && new_handler(a1);
}

