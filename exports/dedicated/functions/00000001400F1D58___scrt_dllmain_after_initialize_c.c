/* Address: 0x1400f1d58 | Name: __scrt_dllmain_after_initialize_c | Size: 52 bytes */
char _scrt_dllmain_after_initialize_c()
{
  charNode *v0; // rcx
  _crt_argv_mode v1; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    v1 = (unsigned int)charNode::raw_length(v0);
    if ( configure_narrow_argv(v1) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}

