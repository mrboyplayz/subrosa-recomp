/* Address: 0x1400f1e44 | Name: __scrt_dllmain_uninitialize_c | Size: 48 bytes */
void _scrt_dllmain_uninitialize_c()
{
  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    execute_onexit_table(&Table);
  }
  else if ( !(unsigned int)sub_1400F28B0() )
  {
    cexit();
  }
}

