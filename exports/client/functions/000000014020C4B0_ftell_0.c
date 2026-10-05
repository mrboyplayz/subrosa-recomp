/* Address: 0x14020c4b0 | Name: ftell_0 | Size: 109 bytes */
int __cdecl ftell_0(FILE *Stream)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  int v5; // edi

  if ( Stream )
  {
    sub_14020B5E0(Stream);
    v4 = ftelli64_nolock_0(Stream);
    v5 = v4;
    if ( v4 > 0x7FFFFFFF )
    {
      *errno() = 22;
      v5 = -1;
    }
    sub_14020B5EC(Stream);
    return v5;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v2);
    return -1;
  }
}

