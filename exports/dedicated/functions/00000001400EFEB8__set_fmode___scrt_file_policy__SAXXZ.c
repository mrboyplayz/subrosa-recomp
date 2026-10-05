/* Address: 0x1400efeb8 | Name: ?set_fmode@__scrt_file_policy@@SAXXZ | Size: 20 bytes */
void __fastcall __scrt_file_policy::set_fmode()
{
  int startup_file_mode; // eax

  startup_file_mode = get_startup_file_mode();
  set_fmode(startup_file_mode);
}

