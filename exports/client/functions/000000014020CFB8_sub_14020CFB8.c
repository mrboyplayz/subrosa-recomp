/* Address: 0x14020cfb8 | Name: sub_14020CFB8 | Size: 88 bytes */
int __cdecl sub_14020CFB8(int Character, FILE *Stream)
{
  __int64 v4; // rcx
  int v6; // edi

  if ( Stream )
  {
    sub_14020B5E0(Stream);
    v6 = sub_14020CE90(Character, (__int64)Stream);
    sub_14020B5EC(Stream);
    return v6;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v4);
    return -1;
  }
}

