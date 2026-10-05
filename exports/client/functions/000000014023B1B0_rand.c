/* Address: 0x14023b1b0 | Name: rand | Size: 41 bytes */
int __cdecl rand()
{
  __int64 v0; // rax
  unsigned int v1; // ecx

  v0 = sub_140255A70();
  v1 = 214013 * *(_DWORD *)(v0 + 40) + 2531011;
  *(_DWORD *)(v0 + 40) = v1;
  return HIWORD(v1) & 0x7FFF;
}

