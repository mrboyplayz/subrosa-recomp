/* Address: 0x1400ef7a4 | Name: capture_previous_context | Size: 113 bytes */
struct _IMAGE_RUNTIME_FUNCTION_ENTRY *__fastcall capture_previous_context(PCONTEXT ContextRecord)
{
  ULONG64 Rip; // rsi
  int i; // edi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *result; // rax
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+68h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+70h] [rbp+18h] BYREF

  RtlCaptureContext(ContextRecord);
  Rip = ContextRecord->Rip;
  for ( i = 0; i < 2; ++i )
  {
    result = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
    if ( !result )
      break;
    result = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlVirtualUnwind(
                                                       0,
                                                       ImageBase,
                                                       Rip,
                                                       result,
                                                       ContextRecord,
                                                       &HandlerData,
                                                       &EstablisherFrame,
                                                       nullptr);
  }
  return result;
}

