/* Address: 0x1401f8edc | Name: sub_1401F8EDC | Size: 48 bytes */
int sub_1401F8EDC()
{
  int result; // eax

  if ( (unsigned int)_acrt_locale_changed() )
    return sub_14024719C((_onexit_table_t *)&dword_140404A6C[19064477]);
  result = sub_14024560C();
  if ( !result )
    return MEMORY[0x1402455F0]();
  return result;
}

