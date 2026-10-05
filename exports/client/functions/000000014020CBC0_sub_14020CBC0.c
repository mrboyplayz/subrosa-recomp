/* Address: 0x14020cbc0 | Name: sub_14020CBC0 | Size: 32 bytes */
__acrt_stdio_temporary_buffering_guard *__fastcall sub_14020CBC0(
        __acrt_stdio_temporary_buffering_guard *this,
        struct _iobuf *const a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = sub_140253DEC(a2);
  return this;
}

