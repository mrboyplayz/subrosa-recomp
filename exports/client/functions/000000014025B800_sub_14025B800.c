/* Address: 0x14025b800 | Name: sub_14025B800 | Size: 224 bytes */
__int64 __fastcall sub_14025B800(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi

  v2 = **(_QWORD **)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  sub_1402501C4(**(FILE ***)(a1 + 8));
  sub_1402502FC(**(_QWORD **)(a1 + 8));
  _InterlockedAnd((volatile signed __int32 *)(**(_QWORD **)(a1 + 8) + 20LL), 0xFFFFF81F);
  if ( (**(_BYTE **)(a1 + 16) & 4) != 0 )
  {
    v3 = **(_QWORD **)(a1 + 8);
    v4 = v3 + 28;
    _InterlockedOr((volatile signed __int32 *)(v3 + 20), 0x400u);
    *(_DWORD *)(v3 + 32) = 2;
LABEL_8:
    *(_QWORD *)v3 = v4;
    *(_QWORD *)(v3 + 8) = v4;
    goto LABEL_9;
  }
  v4 = **(_QWORD **)(a1 + 24);
  if ( v4 )
  {
    v3 = **(_QWORD **)(a1 + 8);
    _InterlockedOr((volatile signed __int32 *)(v3 + 20), 0x180u);
    *(_DWORD *)(v3 + 32) = v2;
    goto LABEL_8;
  }
  v5 = malloc_base(v2);
  free_base(nullptr);
  if ( !v5 )
  {
    ++dword_140404A6C[19064595];
    return 0xFFFFFFFFLL;
  }
  v3 = **(_QWORD **)(a1 + 8);
  _InterlockedOr((volatile signed __int32 *)(v3 + 20), 0x140u);
  *(_DWORD *)(v3 + 32) = v2;
  *(_QWORD *)v3 = v5;
  *(_QWORD *)(v3 + 8) = v5;
LABEL_9:
  *(_DWORD *)(v3 + 16) = 0;
  return 0;
}

