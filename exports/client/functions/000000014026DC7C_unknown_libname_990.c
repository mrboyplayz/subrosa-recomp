/* Address: 0x14026dc7c | Name: unknown_libname_990 | Size: 83 bytes */
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_990(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 64) )
  {
    if ( *(_DWORD *)(a2 + 68) )
    {
      v2 = 9LL * (**(_DWORD **)(a2 + 128) & 0x3F);
      v3 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)**(int **)(a2 + 128) >> 6) + 19065401];
      *(_BYTE *)(v3 + 8 * v2 + 56) &= ~1u;
    }
    return sub_140261150(**(unsigned int **)(a2 + 128));
  }
  return result;
}

