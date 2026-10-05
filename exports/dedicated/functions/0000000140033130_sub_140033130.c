/* Address: 0x140033130 | Name: sub_140033130 | Size: 47 bytes */
__int64 __fastcall sub_140033130(__int64 a1)
{
  unsigned int v1; // r8d
  _DWORD *v2; // rax
  __int64 v3; // rdx

  v1 = 0;
  v2 = (_DWORD *)(a1 + 9740);
  v3 = 0;
  while ( *v2 )
  {
    ++v1;
    ++v3;
    v2 += 18;
    if ( v3 >= 64 )
      return 0xFFFFFFFFLL;
  }
  return v1;
}

