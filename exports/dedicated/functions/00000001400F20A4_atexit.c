/* Address: 0x1400f20a4 | Name: atexit | Size: 23 bytes */
int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != nullptr) - 1;
}

