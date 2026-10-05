/* Address: 0x1401fc390 | Name: sub_1401FC390 | Size: 27 bytes */
unsigned int *sub_1401FC390()
{
  unsigned int *v0; // rax
  unsigned int *result; // rax

  v0 = sub_140001BB0();
  *(_QWORD *)v0 |= 0x24uLL;
  result = sub_140001BC0();
  *(_QWORD *)result |= 2uLL;
  return result;
}

