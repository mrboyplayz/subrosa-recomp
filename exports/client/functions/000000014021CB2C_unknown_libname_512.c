/* Address: 0x14021cb2c | Name: unknown_libname_512 | Size: 121 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_512(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rsi
  char v4; // al
  unsigned int v5; // ecx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v2 || (v3 = *((_QWORD *)v2 + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = "(null)";
    v5 = 6;
    goto LABEL_6;
  }
  v4 = MEMORY[0x140211A94](*(_QWORD *)a1, *(unsigned __int16 *)(a1 + 66), *(unsigned int *)(a1 + 60));
  *(_QWORD *)(a1 + 72) = v3;
  v5 = *v2;
  if ( !v4 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v5 >>= 1;
LABEL_7:
  *(_DWORD *)(a1 + 80) = v5;
  return 1;
}

