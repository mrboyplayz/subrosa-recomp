/* Address: 0x140037580 | Name: sub_140037580 | Size: 84 bytes */
__int64 __fastcall sub_140037580(int a1, int a2)
{
  __int64 v3; // rcx

  if ( a2 == 2 )
    return *((unsigned int *)&unk_19025F0C0 + 1760 * a1 + 205);
  if ( a2 )
    return 0xFFFFFFFFLL;
  v3 = 7040LL * a1;
  if ( *(int *)((char *)&unk_19025F0C0 + v3 + 52) <= 0 )
    return 0xFFFFFFFFLL;
  return *((unsigned int *)&unk_19025F0C0 + 1760 * *(int *)((char *)&unk_19025F0C0 + v3 + 56) + 205);
}

