/* Address: 0x1400ef4a0 | Name: __report_gsfailure | Size: 209 bytes */
void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_140585560 = retaddr;
  ContextRecord.Rcx = v2;
  dword_140585550 = -1073740791;
  dword_140585554 = 1;
  dword_140585568 = 1;
  unk_140585570 = 2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}

