/* Address: 0x140245540 | Name: ?should_call_terminate_process@@YA_NXZ | Size: 48 bytes */
bool should_call_terminate_process()
{
  return (unsigned int)sub_14025A388() != 1 && (*(_DWORD *)(__readgsqword(0x60u) + 188) & 0x100) == 0;
}

