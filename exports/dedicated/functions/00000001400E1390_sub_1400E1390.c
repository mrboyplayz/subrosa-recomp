/* Address: 0x1400e1390 | Name: sub_1400E1390 | Size: 112 bytes */
__int64 __fastcall sub_1400E1390(__int64 a1, char a2, char a3, char a4)
{
  int v6; // r8d
  int v9; // ecx

  v6 = *(_DWORD *)(a1 + 80);
  v9 = v6;
  if ( (unsigned int)(v6 + 3) > 0x40 && v6 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    v9 = 0;
  }
  *(_DWORD *)(a1 + 80) = v9 + 3;
  *(_BYTE *)(v9 + a1 + 16) = a2;
  *(_BYTE *)(v9 + a1 + 17) = a3;
  *(_BYTE *)(v9 + a1 + 18) = a4;
  return v9;
}

