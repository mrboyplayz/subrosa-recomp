/* Address: 0x140235864 | Name: sub_140235864 | Size: 93 bytes */
char __fastcall sub_140235864(__int64 a1)
{
  _BYTE *v2; // rax

  if ( (sub_140256DC0()[*(unsigned __int8 *)(a1 + 24)] & 0x8000u) != 0 )
  {
    v2 = *(_BYTE **)(a1 + 8);
    if ( !*v2 )
    {
      *(_QWORD *)(a1 + 16) = 42;
      *(_WORD *)(a1 + 24) = 0;
      *(_BYTE *)(a1 + 26) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_BYTE *)(a1 + 44) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      return 0;
    }
    *(_BYTE *)(a1 + 25) = *v2;
    *(_QWORD *)(a1 + 8) = v2 + 1;
  }
  return 1;
}

