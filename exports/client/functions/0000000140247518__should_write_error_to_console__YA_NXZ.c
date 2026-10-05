/* Address: 0x140247518 | Name: ?should_write_error_to_console@@YA_NXZ | Size: 43 bytes */
bool should_write_error_to_console()
{
  int v0; // eax

  v0 = set_error_mode(3);
  return v0 == 1 || !v0 && dword_140404A6C[19064881] == 1;
}

