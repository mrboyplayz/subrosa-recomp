/* Address: 0x14016fb20 | Name: sub_14016FB20 | Size: 104 bytes */
__int64 __fastcall sub_14016FB20(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  unsigned int v5; // edx
  unsigned int v6; // eax

  v3 = a1;
  if ( *(int *)(a1 + 16) < 16 )
  {
    if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
      return 0xFFFFFFFFLL;
    sub_140160350(a1);
  }
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(unsigned __int16 *)(a2 + 2LL * (v5 & 0x1FF));
  if ( !*(_WORD *)(a2 + 2LL * (v5 & 0x1FF)) )
    return sub_14016FB90(v3, a2);
  *(_DWORD *)(v3 + 16) -= v6 >> 9;
  *(_DWORD *)(v3 + 20) = v5 >> (v6 >> 9);
  return v6 & 0x1FF;
}

