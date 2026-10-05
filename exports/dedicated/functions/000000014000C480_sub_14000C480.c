/* Address: 0x14000c480 | Name: sub_14000C480 | Size: 242 bytes */
__int64 __fastcall sub_14000C480(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  signed int v5; // eax
  __int64 v6; // r10

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v4 = 1052016LL * (int)a1;
  if ( (signed int)(a2 >> 6) >= *(_DWORD *)((char *)&unk_16CDE9EA0 + v4 + 52) )
    return 0xFFFFFFFFLL;
  if ( (signed int)(a3 >> 6) >= *(_DWORD *)((char *)&unk_16CDE9EA0 + v4 + 56) )
    return 0xFFFFFFFFLL;
  v5 = *(_DWORD *)((char *)&unk_16CDE9EA0 + v4 + 60);
  if ( (int)(a4 >> 6) >= v5 )
    return 0xFFFFFFFFLL;
  v6 = *(int *)(*(_QWORD *)((char *)&unk_16CDE9EA0 + v4 + 72)
              + 4LL * (int)((a2 >> 6) + *(_DWORD *)((char *)&unk_16CDE9EA0 + v4 + 52) * ((a4 >> 6) + (a3 >> 6) * v5)));
  if ( (_DWORD)v6 == -1 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)&unk_16CDE9EA0
           + 263004 * (int)a1
           + 513 * v6
           + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))
           + 348);
}

