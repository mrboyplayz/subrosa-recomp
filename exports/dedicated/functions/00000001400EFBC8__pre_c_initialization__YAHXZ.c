/* Address: 0x1400efbc8 | Name: ?pre_c_initialization@@YAHXZ | Size: 182 bytes */
__int64 __fastcall pre_c_initialization()
{
  int startup_file_mode; // eax
  int v1; // ebx
  charNode *v2; // rcx
  _crt_argv_mode v3; // eax
  int v4; // eax
  __int64 result; // rax

  set_app_type(_crt_console_app);
  startup_file_mode = get_startup_file_mode();
  set_fmode(startup_file_mode);
  v1 = sub_1400F21E0();
  *_p__commode() = v1;
  if ( !(unsigned __int8)_scrt_initialize_onexit_tables(1) )
    goto LABEL_8;
  sub_1400F24B4();
  atexit(sub_1400F24F0);
  v3 = (unsigned int)charNode::raw_length(v2);
  if ( configure_narrow_argv(v3) )
    goto LABEL_8;
  sub_1400F21F4();
  if ( (unsigned int)_scrt_is_user_matherr_present() )
    _setusermatherr(UserMathErrorFunction);
  nullsub_2();
  nullsub_3();
  v4 = sub_1400F21F0();
  configthreadlocale(v4);
  if ( (unsigned __int8)sub_1400F2210() )
    initialize_narrow_environment();
  sub_1400F23EC();
  result = sub_1400F23E4();
  if ( (_DWORD)result )
  {
LABEL_8:
    _scrt_fastfail(7);
    JUMPOUT(0x1400EFC7DLL);
  }
  return result;
}

