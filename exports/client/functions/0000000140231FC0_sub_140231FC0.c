/* Address: 0x140231fc0 | Name: sub_140231FC0 | Size: 172 bytes */
__int64 __fastcall sub_140231FC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int8 *v5; // r8
  __int64 v6; // r11
  int v7; // r10d
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  char i; // r9
  char v11; // al

  v3 = 0;
  v5 = (unsigned __int8 *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 4) + a1 + 8;
  v7 = *(_DWORD *)a1 + (*(_BYTE *)(a2 + 8) != 0 ? 52 : 23);
  if ( a1 + 8 != v6 )
  {
    v8 = (-(__int64)(*(_BYTE *)(a2 + 8) != 0) & 0x1FFFFFFF000000LL) + 0xFFFFFF;
    do
    {
      if ( v3 > v8 )
        break;
      v9 = *v5;
      v7 -= 4;
      ++v5;
      v3 = v9 + 16 * v3;
    }
    while ( v5 != (unsigned __int8 *)v6 );
  }
  for ( i = 1; v5 != (unsigned __int8 *)v6 && i; i = v11 == 0 )
    v11 = *v5++;
  return sub_14022FC68(v3, v7, *(_BYTE *)(a1 + 776), i, a2);
}

