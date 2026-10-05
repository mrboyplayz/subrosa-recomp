/* Address: 0x1400ef734 | Name: capture_current_context | Size: 109 bytes */
struct _IMAGE_RUNTIME_FUNCTION_ENTRY *__fastcall capture_current_context(PCONTEXT ContextRecord)
{
  ULONG64 Rip; // rdi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *result; // rax
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp+18h] BYREF

  RtlCaptureContext(ContextRecord);
  Rip = ContextRecord->Rip;
  result = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
  if ( result )
    return (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlVirtualUnwind(
                                                     0,
                                                     ImageBase,
                                                     Rip,
                                                     result,
                                                     ContextRecord,
                                                     &HandlerData,
                                                     &EstablisherFrame,
                                                     nullptr);
  return result;
}

