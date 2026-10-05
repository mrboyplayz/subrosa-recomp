/* Address: 0x140209ac0 | Name: sub_140209AC0 | Size: 83 bytes */
_OWORD *__fastcall sub_140209AC0(__int64 a1, _OWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  FH4::UWMap4 *v6; // rax
  __int128 v7; // xmm0

  v2 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 8);
  MEMORY[0x14020A9E4](*(FH4::UWMap4 **)a1, (unsigned __int8 **)(a1 + 8));
  v6 = *(FH4::UWMap4 **)a1;
  *v2 = v4;
  v7 = *((_OWORD *)v6 + 1);
  *a2 = v7;
  return a2;
}

