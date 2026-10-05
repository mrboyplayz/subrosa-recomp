/* Address: 0x14023acb8 | Name: toupper | Size: 42 bytes */
int __cdecl toupper(int C)
{
  if ( dword_140404A6C[19065283] )
    return sub_14023AB50(C, nullptr);
  if ( (unsigned int)(C - 97) <= 0x19 )
    C -= 32;
  return C;
}

