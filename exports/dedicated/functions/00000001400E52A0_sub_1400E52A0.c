/* Address: 0x1400e52a0 | Name: sub_1400E52A0 | Size: 89 bytes */
void __fastcall sub_1400E52A0(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  int *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax

  if ( a1 != -1 )
  {
    v1 = 396LL * a1;
    v2 = *(int *)((char *)&unk_1839AC114 + v1 * 4);
    if ( v2 > 0 )
    {
      v3 = dword_16D4ED520;
      v4 = &dword_1839AC118[v1];
      do
      {
        v5 = v3;
        v6 = *v4++;
        dword_16D4ED524[v5] = v6;
        v3 = ++dword_16D4ED520;
        --v2;
      }
      while ( v2 );
    }
  }
}

