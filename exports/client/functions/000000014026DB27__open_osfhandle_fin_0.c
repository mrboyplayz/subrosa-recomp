/* Address: 0x14026db27 | Name: _open_osfhandle$fin$0 | Size: 65 bytes */
__int64 __fastcall open_osfhandle_fin_0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( !*(_BYTE *)(a2 + 32) )
  {
    v2 = 9LL * (*(_DWORD *)(a2 + 72) & 0x3F);
    v3 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)*(int *)(a2 + 72) >> 6) + 19065401];
    *(_BYTE *)(v3 + 8 * v2 + 56) &= ~1u;
  }
  return sub_140261150(*(unsigned int *)(a2 + 72));
}

