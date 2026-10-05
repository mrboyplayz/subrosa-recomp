/* Address: 0x1400bf2f0 | Name: sub_1400BF2F0 | Size: 347 bytes */
__int64 sub_1400BF2F0()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  __int64 result; // rax
  int *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  int v7; // edi
  int v8; // ecx
  __int128 v9; // xmm1
  __int64 v10; // rcx

  v0 = 256;
  v1 = &unk_160F23920;
  do
  {
    if ( *v1 )
    {
      if ( --v1[1] < 0 )
        *v1 = 0;
    }
    v1 += 20;
    --v0;
  }
  while ( v0 );
  result = (unsigned int)dword_163D75B40;
  if ( dword_163D75B40 > 0 )
  {
    v4 = (int *)&unk_160F57B3C;
    v5 = (unsigned int)dword_163D75B40;
    do
    {
      result = *(v4 - 47217);
      if ( (_DWORD)result != -1 )
      {
        v6 = 3597 * result;
        v7 = dword_16D67D5A0[3597 * result + 15];
        if ( v7 != -1 )
        {
          v8 = *v4;
          if ( *v4 != -1 )
            goto LABEL_17;
          v8 = 0;
          result = (__int64)&unk_160F23928;
          while ( !*(_DWORD *)(result - 8) || *(_DWORD *)result != v7 )
          {
            ++v8;
            result += 80;
            if ( result >= (__int64)&unk_160F28928 )
            {
              result = sub_1400BF2C0();
              v8 = result;
              *v4 = result;
              goto LABEL_16;
            }
          }
          *v4 = v8;
LABEL_16:
          if ( v8 != -1 )
          {
LABEL_17:
            v9 = *(_OWORD *)&dword_16D67D5A0[v6 + 5];
            result = (unsigned int)dword_16D67D5A0[v6 + 12];
            v10 = 10LL * v8;
            *(_OWORD *)((char *)&unk_160F23920 + 8 * v10 + 12) = *(_OWORD *)&dword_16D67D5A0[v6 + 1];
            *((_DWORD *)&unk_160F23920 + 2 * v10) = 1;
            *(_OWORD *)((char *)&unk_160F23920 + 8 * v10 + 28) = v9;
            *((_DWORD *)&unk_160F23920 + 2 * v10 + 1) = 3600;
            *((_DWORD *)&unk_160F23920 + 2 * v10 + 2) = v7;
            *((_DWORD *)&unk_160F23920 + 2 * v10 + 19) = result;
          }
        }
      }
      v4 += 47224;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

