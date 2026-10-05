/* Address: 0x140177160 | Name: sub_140177160 | Size: 74 bytes */
__int64 __fastcall sub_140177160(__int64 a1, char a2)
{
  int v2; // r8d
  int v5; // ecx

  v2 = *(_DWORD *)(a1 + 80);
  v5 = v2;
  if ( (unsigned int)(v2 + 1) > 0x40 && v2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    v5 = 0;
    *(_DWORD *)(a1 + 80) = 0;
  }
  *(_BYTE *)(v5 + a1 + 16) = a2;
  ++*(_DWORD *)(a1 + 80);
  return v5;
}

