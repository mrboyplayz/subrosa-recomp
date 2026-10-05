/* Address: 0x14018c250 | Name: sub_14018C250 | Size: 89 bytes */
void __fastcall sub_14018C250(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  signed int v3; // eax
  unsigned int *v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax

  if ( a1 != -1 )
  {
    v1 = 396LL * a1;
    v2 = (int)dword_140404A6C[v1 + 225426186];
    if ( v2 > 0 )
    {
      v3 = dword_140404A6C[132384229];
      v4 = &dword_140404A6C[v1 + 225426187];
      do
      {
        v5 = v3;
        v6 = *v4++;
        dword_140404A6C[v5 + 132384230] = v6;
        v3 = ++dword_140404A6C[132384229];
        --v2;
      }
      while ( v2 );
    }
  }
}

