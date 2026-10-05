/* Address: 0x1402670f8 | Name: _putwch_nolock | Size: 59 bytes */
__int64 __fastcall putwch_nolock(unsigned __int16 a1)
{
  unsigned __int16 Buffer; // [rsp+30h] [rbp+8h] BYREF
  int NumberOfCharsWritten; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a1;
  if ( (unsigned int)_dcrt_lowio_ensure_console_output_initialized()
    && (unsigned int)unknown_libname_946(&Buffer, 1, &NumberOfCharsWritten) )
  {
    return Buffer;
  }
  else
  {
    return 0xFFFF;
  }
}

