/* Address: 0x1400f271c | Name: fread | Size: 6 bytes */
// attributes: thunk
size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  return __imp_fread(Buffer, ElementSize, ElementCount, Stream);
}

