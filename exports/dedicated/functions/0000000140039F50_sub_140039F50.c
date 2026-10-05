/* Address: 0x140039f50 | Name: sub_140039F50 | Size: 166 bytes */
__int64 __fastcall sub_140039F50(int a1)
{
  int v1; // eax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  if ( dword_163D75B60 )
  {
    if ( (unsigned int)a1 <= 0x3FF )
    {
      v1 = dword_191541414;
      v2 = (__int64)dword_196199564++ << 7;
      *(_DWORD *)((char *)&unk_195999560 + v2) = 6;
      ++dword_19093F0C0[a1];
      *(_DWORD *)((char *)&unk_195999564 + v2) = v1;
      *(int *)((char *)&dword_195999580 + v2) = a1;
      v3 = 7040LL * a1;
      *(int *)((char *)&dword_195999584 + v2) = *(_DWORD *)((char *)&unk_19025F33C + v3);
      *(int *)((char *)&dword_195999588 + v2) = *(_DWORD *)((char *)&unk_19025F228 + v3);
      *(_DWORD *)((char *)&unk_19599958C + v2) = *(_DWORD *)((char *)&unk_19025F338 + v3);
      HIWORD(dword_196199564) = 0;
      return 0;
    }
  }
  return result;
}

