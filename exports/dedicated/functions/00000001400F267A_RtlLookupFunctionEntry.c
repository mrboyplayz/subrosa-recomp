/* Address: 0x1400f267a | Name: RtlLookupFunctionEntry | Size: 6 bytes */
// attributes: thunk
PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  return __imp_RtlLookupFunctionEntry(ControlPc, ImageBase, HistoryTable);
}

