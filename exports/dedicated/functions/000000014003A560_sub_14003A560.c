/* Address: 0x14003a560 | Name: sub_14003A560 | Size: 146 bytes */
__int64 __fastcall sub_14003A560(int a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( dword_163D75B60 )
  {
    v1 = dword_191541414;
    v2 = (__int64)dword_196199564++ << 7;
    *(_DWORD *)((char *)&unk_195999560 + v2) = 8;
    *(_DWORD *)((char *)&unk_195999564 + v2) = v1;
    *(int *)((char *)&dword_195999580 + v2) = a1;
    v3 = 3597LL * a1;
    *(int *)((char *)&dword_195999584 + v2) = dword_16D67D5EC[v3];
    *(int *)((char *)&dword_195999588 + v2) = dword_16D67D62C[v3];
    *(_DWORD *)((char *)&unk_19599958C + v2) = dword_16D67D5D0[v3];
    HIWORD(dword_196199564) = 0;
    return 0;
  }
  return result;
}

