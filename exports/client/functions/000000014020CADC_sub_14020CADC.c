/* Address: 0x14020cadc | Name: sub_14020CADC | Size: 36 bytes */
int __cdecl sub_14020CADC(FILE *Stream)
{
  __int64 v1; // rax

  v1 = ftelli64_nolock_0(Stream);
  if ( v1 > 0x7FFFFFFF )
  {
    *errno() = 22;
    LODWORD(v1) = -1;
  }
  return v1;
}

