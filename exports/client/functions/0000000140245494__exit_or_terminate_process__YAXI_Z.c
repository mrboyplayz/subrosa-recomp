/* Address: 0x140245494 | Name: ?exit_or_terminate_process@@YAXI@Z | Size: 74 bytes */
void __fastcall __noreturn exit_or_terminate_process(unsigned int a1)
{
  __int64 v2; // rax

  if ( (unsigned int)sub_14025A388() != 1 && (*(_DWORD *)(__readgsqword(0x60u) + 188) & 0x100) == 0 )
  {
    v2 = ((__int64 (*)(void))GetCurrentProcess)();
    ((void (__fastcall *)(__int64, _QWORD))TerminateProcess)(v2, a1);
  }
  try_cor_exit_process(a1);
  ((void (__fastcall __noreturn *)(_QWORD))ExitProcess)(a1);
}

