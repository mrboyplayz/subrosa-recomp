/* Address: 0x14025a09c | Name: _freea | Size: 31 bytes */
void __cdecl freea(void *Memory)
{
  _DWORD *v1; // rcx

  if ( Memory )
  {
    v1 = (char *)Memory - 16;
    if ( *v1 == 56797 )
      free_base(v1);
  }
}

