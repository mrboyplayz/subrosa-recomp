/* Address: 0x1400ef624 | Name: __report_securityfailureEx | Size: 270 bytes */
void __fastcall __noreturn _report_securityfailureEx(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // [rsp+20h] [rbp-18h]
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+10h]
  __int64 v7; // [rsp+50h] [rbp+18h]

  v7 = a3;
  v6 = a2;
  v5 = a1;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(v5);
  capture_current_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v5;
  qword_140585560 = retaddr;
  dword_140585550 = -1073740791;
  dword_140585554 = 1;
  if ( v6 && !v7 )
    v6 = 0;
  if ( v6 > 0xE )
    --v6;
  dword_140585568 = v6 + 1;
  qword_140585570[0] = v5;
  for ( i = 0; i < v6; ++i )
    qword_140585570[i + 1] = *(_QWORD *)(v7 + 8LL * i);
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}

