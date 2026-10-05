/* Address: 0x140075340 | Name: sub_140075340 | Size: 119 bytes */
__int64 sub_140075340()
{
  signed int v0; // eax
  __int64 v1; // rax

  if ( (int)dword_140404A6C[70317864] <= 0 )
    return (*(__int64 (__fastcall **)(__int64))&dword_140404A6C[18215101])(3089);
  v0 = dword_140404A6C[70317864] - 1;
  dword_140404A6C[70317864] = v0;
  if ( v0 <= 0 )
    return (*(__int64 (__fastcall **)(__int64))&dword_140404A6C[18215101])(3089);
  v1 = 2LL * v0;
  dword_140404A6C[70318060] = dword_140404A6C[2 * v1 + 70317861];
  dword_140404A6C[70318062] = dword_140404A6C[2 * v1 + 70317863];
  dword_140404A6C[70318061] = dword_140404A6C[2 * v1 + 70317862];
  dword_140404A6C[70318063] = dword_140404A6C[2 * v1 + 70317864];
  return sub_14007B7E0(
           *(float *)&dword_140404A6C[70318060],
           *(float *)&dword_140404A6C[70318061],
           *(float *)&dword_140404A6C[70318062],
           *(float *)&dword_140404A6C[70318063]);
}

