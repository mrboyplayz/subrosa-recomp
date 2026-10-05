/* Address: 0x140218658 | Name: unknown_libname_496 | Size: 162 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_496(__int64 a1)
{
  __int64 v1; // r8
  int v3; // ecx
  char *v4; // rax
  char v5; // cl
  __int64 v6; // rcx

  v1 = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)v1 < -1 )
    v3 = 0;
  else
    v3 = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * v1) & 0x8000;
  if ( !v3 )
    return 1;
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned int)unknown_libname_207((unsigned int)v1, *(_QWORD *)(a1 + 1128)) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  v4 = *(char **)(a1 + 24);
  v5 = *v4;
  *(_BYTE *)(a1 + 65) = *v4;
  *(_QWORD *)(a1 + 24) = v4 + 1;
  if ( v5 )
    return 1;
  *errno() = 22;
  sub_14024CF6C(v6);
  return 0;
}

