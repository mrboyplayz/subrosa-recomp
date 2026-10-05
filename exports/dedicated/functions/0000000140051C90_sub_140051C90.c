/* Address: 0x140051c90 | Name: sub_140051C90 | Size: 440 bytes */
_BOOL8 __fastcall sub_140051C90(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r11
  int v7; // r9d
  bool v8; // zf
  __int64 v9; // r10
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r10
  int v15; // eax

  if ( a2 == 1 )
  {
    v4 = 28664LL * a1;
    v5 = a3 ^ 1LL;
    v6 = v4 + 40LL * a3;
    v7 = *(int *)((char *)dword_190948498 + v6);
    v8 = v7 == 0;
    if ( v7 > 0 )
    {
      v9 = v4 + 40 * v5;
      if ( *(int *)((char *)dword_190948498 + v9) > 0 )
        return dword_1901221DC[1268 * dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v6)]
                             + dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v9)]] != 0;
      v8 = v7 == 0;
    }
    if ( !v8 )
      return 0;
    v11 = v4 + 40 * v5;
    if ( *(int *)((char *)dword_190948498 + v11) <= 0 )
      return 0;
    v12 = 1760LL * *(int *)((char *)dword_19094849C + v11);
    return dword_19025F0F4[v12] > 0
        && dword_1901221DC[1268 * dword_19025F0D4[1760 * dword_19025F0F8[v12]] + dword_19025F0D4[v12]];
  }
  else
  {
    if ( a2 != 2 )
      return 0;
    v13 = 28664LL * a1;
    v14 = v13 + 40LL * a3;
    v15 = *(int *)((char *)dword_190948498 + v14);
    if ( v15 <= 0 )
      return !v15
          && !dword_1909485E8[14 * a3 + (unsigned __int64)v13 / 4]
          && *(int *)((char *)&unk_1909484E8 + 40 * a4 + v13) > 0;
    return dword_19012269C[1268 * dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v14)] + a4]
        && *(int *)((char *)&unk_1909484E8 + 40 * a4 + v13) < 2;
  }
}

