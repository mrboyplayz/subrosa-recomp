/* Address: 0x1400efcc0 | Name: ?__scrt_common_main_seh@@YAHXZ | Size: 410 bytes */
__int64 __fastcall __scrt_common_main_seh()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void (__fastcall **v7)(_QWORD, __int64); // rbx
  _tls_callback_type *v8; // rax
  _tls_callback_type *v9; // rbx
  char **initial_narrow_environment; // rdi
  char **v11; // rbx
  int *v12; // rax

  if ( !(unsigned __int8)_scrt_initialize_crt(1) )
  {
    _scrt_fastfail(7);
LABEL_15:
    _scrt_fastfail(7);
    exit(v0);
  }
  LOBYTE(v0) = _scrt_acquire_startup_lock(v1);
  v2 = (unsigned int)dword_140585AC8;
  if ( dword_140585AC8 == 1 )
    goto LABEL_15;
  if ( dword_140585AC8 )
  {
LABEL_7:
    LOBYTE(v2) = v0;
    _scrt_release_startup_lock(v2);
    v5 = (_QWORD *)sub_1400F2244(v4);
    v7 = (void (__fastcall **)(_QWORD, __int64))v5;
    if ( *v5 && (unsigned __int8)_scrt_is_nonwritable_in_current_image(v5) )
      (*v7)(0, 2);
    v8 = (_tls_callback_type *)sub_1400F224C(v6);
    v9 = v8;
    if ( *v8 && (unsigned __int8)_scrt_is_nonwritable_in_current_image(v8) )
      register_thread_local_exe_atexit_callback(*v9);
    initial_narrow_environment = get_initial_narrow_environment();
    v11 = *_p___argv();
    v12 = _p___argc();
    main(*v12, (const char **)v11, (const char **)initial_narrow_environment);
  }
  dword_140585AC8 = 1;
  if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
  {
    initterm((_PVFV *)&qword_1400F3448, (_PVFV *)&qword_1400F3458);
    dword_140585AC8 = 2;
    goto LABEL_7;
  }
  return 255;
}

