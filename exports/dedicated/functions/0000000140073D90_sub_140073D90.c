/* Address: 0x140073d90 | Name: sub_140073D90 | Size: 220 bytes */
__int64 __fastcall sub_140073D90(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax
  int *v3; // r11
  int v4; // r9d
  int v5; // r8d
  int v6; // ebp

  result = 7040LL * (int)a2;
  v3 = (int *)((char *)dword_19025F0F4 + result);
  v4 = 0;
  v5 = *(int *)((char *)dword_19025F0F4 + result);
  if ( v5 > 0 )
  {
    v6 = dword_163D75B60;
    result = (__int64)&dword_19025F0F8[1760 * a2];
    do
    {
      if ( *(_DWORD *)result == a1 )
      {
        *v3 = v5 - 1;
        *(_DWORD *)result = dword_19025F0F4[1760 * a2 + v5];
        *((_DWORD *)&unk_19025F0E8 + 1760 * (int)a1) = -1;
        if ( v6 )
        {
          if ( a1 <= 0x3FF )
            ++dword_19093F0C0[a1];
          if ( a2 <= 0x3FF )
            ++dword_19093F0C0[a2];
        }
      }
      else
      {
        ++v4;
        result += 4;
      }
      v5 = *v3;
    }
    while ( v4 < *v3 );
  }
  return result;
}

