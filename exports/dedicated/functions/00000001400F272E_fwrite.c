/* Address: 0x1400f272e | Name: fwrite | Size: 6 bytes */
// attributes: thunk
size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  return __imp_fwrite(Buffer, ElementSize, ElementCount, Stream);
}

