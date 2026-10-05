/* Address: 0x1400f2680 | Name: RtlVirtualUnwind | Size: 6 bytes */
// attributes: thunk
PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  return __imp_RtlVirtualUnwind(
           HandlerType,
           ImageBase,
           ControlPc,
           FunctionEntry,
           ContextRecord,
           HandlerData,
           EstablisherFrame,
           ContextPointers);
}

