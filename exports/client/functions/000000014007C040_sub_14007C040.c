/* Address: 0x14007c040 | Name: sub_14007C040 | Size: 33 bytes */
int sub_14007C040()
{
  int result; // eax

  if ( dword_140404A6C[137297774] )
  {
    result = MEMORY[0x140199049]();
    dword_140404A6C[137297774] = 0;
  }
  return result;
}

