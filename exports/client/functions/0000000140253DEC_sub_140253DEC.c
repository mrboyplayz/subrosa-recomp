/* Address: 0x140253dec | Name: sub_140253DEC | Size: 207 bytes */
char __fastcall sub_140253DEC(__int64 a1)
{
  int v2; // eax
  unsigned int *v3; // rdi
  __int64 v4; // rax

  v2 = fileno((FILE *)a1);
  if ( !isatty(v2) )
    return 0;
  if ( (char *)a1 == MEMORY[0x14020B528](1u) )
  {
    v3 = &dword_140404A6C[19065659];
  }
  else
  {
    if ( (char *)a1 != MEMORY[0x14020B528](2u) )
      return 0;
    v3 = &dword_140404A6C[19065661];
  }
  ++dword_140404A6C[19064595];
  if ( (*(_DWORD *)(a1 + 20) & 0x4C0) != 0 )
    return 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x282u);
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 || (*(_QWORD *)v3 = malloc_base(4096), free_base(nullptr), (v4 = *(_QWORD *)v3) != 0) )
  {
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = *(_QWORD *)v3;
    *(_DWORD *)(a1 + 16) = 4096;
    *(_DWORD *)(a1 + 32) = 4096;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 2;
    *(_QWORD *)(a1 + 8) = a1 + 28;
    *(_QWORD *)a1 = a1 + 28;
    *(_DWORD *)(a1 + 32) = 2;
  }
  return 1;
}

