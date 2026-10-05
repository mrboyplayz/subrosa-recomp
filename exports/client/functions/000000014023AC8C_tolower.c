/* Address: 0x14023ac8c | Name: tolower | Size: 42 bytes */
int __cdecl tolower(int C)
{
  if ( dword_140404A6C[19065283] )
    return sub_14023A9FC(C, nullptr);
  if ( (unsigned int)(C - 65) <= 0x19 )
    C += 32;
  return C;
}

