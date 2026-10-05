/* Address: 0x140250554 | Name: sub_140250554 | Size: 59 bytes */
char sub_140250554()
{
  char v0; // bl

  sub_140258B64(7);
  v0 = 0;
  if ( !(unsigned int)sub_140260FC0(0) )
  {
    initialize_inherited_file_handles_nolock();
    initialize_stdio_handles_nolock();
    v0 = 1;
  }
  sub_140258BB8(7);
  return v0;
}

