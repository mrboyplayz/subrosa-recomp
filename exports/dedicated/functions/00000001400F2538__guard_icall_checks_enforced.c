/* Address: 0x1400f2538 | Name: _guard_icall_checks_enforced | Size: 23 bytes */
int __cdecl guard_icall_checks_enforced()
{
  return _guard_check_icall_fptr[0] != (__int64 (__fastcall *)())guard_check_icall_nop;
}

