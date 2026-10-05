/* Address: 0x1400dc3c0 | Name: sub_1400DC3C0 | Size: 384 bytes */
__int64 __fastcall sub_1400DC3C0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v9; // r12
  unsigned int v10; // eax
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  char v15[80]; // [rsp+30h] [rbp-128h] BYREF
  wchar_t Buffer[64]; // [rsp+80h] [rbp-D8h] BYREF

  if ( a3 <= 0 || a2 <= 0 || !a5 )
    return 0;
  v9 = malloc(4 * a2);
  strcpy(v15, "#?RADIANCE\n# Written by stb_image_write.h\nFORMAT=32-bit_rle_rgbe\n");
  (*(void (__fastcall **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), v15, 65);
  v10 = swprintf(Buffer, 0x80u, "EXPOSURE=          1.0000000000000\n\n-Y %d +X %d\n", a3, a2);
  (*(void (__fastcall **)(_QWORD, wchar_t *, _QWORD))a1)(*(_QWORD *)(a1 + 8), Buffer, v10);
  v11 = 0;
  v12 = a3 - 1;
  do
  {
    v13 = v11;
    if ( dword_1402495F0 )
      v13 = v12;
    sub_1400E14A0(a1, a2, a4, (_DWORD)v9, a5 + 4LL * a2 * a4 * v13);
    ++v11;
    --v12;
  }
  while ( v11 < a3 );
  free(v9);
  return 1;
}

