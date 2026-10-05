/* Address: 0x1402148e4 | Name: sub_1402148E4 | Size: 31 bytes */
int *__fastcall sub_1402148E4(int **this)
{
  int *result; // rax

  result = *this;
  if ( !*this )
  {
    result = errno();
    *this = result;
  }
  return result;
}

