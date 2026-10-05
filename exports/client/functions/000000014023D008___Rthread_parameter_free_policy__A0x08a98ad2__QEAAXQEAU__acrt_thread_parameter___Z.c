/* Address: 0x14023d008 | Name: ??Rthread_parameter_free_policy@?A0x08a98ad2@@QEAAXQEAU__acrt_thread_parameter@@@Z | Size: 57 bytes */
void __fastcall `anonymous namespace'::thread_parameter_free_policy::operator()(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    if ( a2[2] )
      ((void (*)(void))CloseHandle)();
    if ( a2[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(a2);
  }
}

