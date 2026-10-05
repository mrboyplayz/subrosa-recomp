/* Address: 0x1400efe58 | Name: ?invoke_main@@YAHXZ | Size: 54 bytes */
void __fastcall __noreturn invoke_main()
{
  char **initial_narrow_environment; // rdi
  char **v1; // rbx
  int *v2; // rax

  initial_narrow_environment = get_initial_narrow_environment();
  v1 = *_p___argv();
  v2 = _p___argc();
  main(*v2, (const char **)v1, (const char **)initial_narrow_environment);
}

