/* Address: 0x14026c9f0 | Name: sub_14026C9F0 | Size: 68 bytes */
__int64 __fastcall MEMORY[0x14026C9F0](__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rdx

  v2 = 0;
  v3 = a1 + *(int *)(a1 + 60);
  result = v3 + *(unsigned __int16 *)(v3 + 20) + 24LL;
  if ( !*(_WORD *)(v3 + 6) )
    return 0;
  while ( 1 )
  {
    v6 = *(unsigned int *)(result + 12);
    if ( a2 >= v6 && a2 < (unsigned int)(v6 + *(_DWORD *)(result + 8)) )
      break;
    ++v2;
    result += 40;
    if ( v2 >= *(unsigned __int16 *)(v3 + 6) )
      return 0;
  }
  return result;
}

