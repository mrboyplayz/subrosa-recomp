/* Address: 0x14016fc70 | Name: sub_14016FC70 | Size: 67 bytes */
__int64 __fastcall sub_14016FC70(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v4; // r11
  unsigned int v5; // edx

  v2 = *(_DWORD *)(a1 + 16);
  v4 = a1;
  if ( v2 < a2 )
  {
    sub_140160350(a1);
    v2 = *(_DWORD *)(v4 + 16);
  }
  v5 = *(_DWORD *)(v4 + 20);
  *(_DWORD *)(v4 + 20) = v5 >> a2;
  *(_DWORD *)(v4 + 16) = v2 - a2;
  return v5 & ((1 << a2) - 1);
}

