/* Address: 0x1400ec120 | Name: sub_1400EC120 | Size: 587 bytes */
__int64 __fastcall sub_1400EC120(int a1)
{
  __int64 v1; // r10
  int v2; // r8d
  __int64 v3; // rax
  int v4; // eax
  __int64 result; // rax
  int v6; // r10d
  _DWORD *v7; // r11
  int *v8; // r11
  int *v9; // r11
  int *v10; // r11
  int *v11; // r11
  int *v12; // r11
  int v13; // r10d

  v1 = 5873LL * a1;
  v2 = 0;
  v3 = dword_1915414A4[v1];
  if ( (_DWORD)v3 != -1 )
  {
    if ( (dword_16D67D5F8[3597 * v3] - 1000) / 100 >= 0 )
      v2 = (dword_16D67D5F8[3597 * v3] - 1000) / 100;
    if ( v2 > 1000 )
      v2 = 1000;
  }
  v4 = dword_191541494[v1];
  if ( v4 >= 10 )
    result = 100;
  else
    result = (unsigned int)(10 * v4);
  v6 = result + v2;
  if ( !dword_178C63948[0] )
  {
    result = 2156LL * a1;
    v7 = (_DWORD *)((char *)&unk_178C63954 + result);
    if ( *(int *)((char *)&unk_178C63954 + result) > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_178C6394C * v6) >> 32) >> 31;
      *v7 = dword_178C6394C + dword_178C6394C * v6 / 100;
    }
  }
  if ( !dword_178C856BC )
  {
    result = (__int64)&unk_178C856C8;
    v8 = (int *)((char *)&unk_178C856C8 + 2156 * a1);
    if ( *v8 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_178C856C0 * v6) >> 32) >> 31;
      *v8 = dword_178C856C0 + dword_178C856C0 * v6 / 100;
    }
  }
  if ( !dword_178CA7430 )
  {
    result = (__int64)&unk_178CA743C;
    v9 = (int *)((char *)&unk_178CA743C + 2156 * a1);
    if ( *v9 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_178CA7434 * v6) >> 32) >> 31;
      *v9 = dword_178CA7434 + dword_178CA7434 * v6 / 100;
    }
  }
  if ( !dword_178CC91A4 )
  {
    result = (__int64)&unk_178CC91B0;
    v10 = (int *)((char *)&unk_178CC91B0 + 2156 * a1);
    if ( *v10 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_178CC91A8 * v6) >> 32) >> 31;
      *v10 = dword_178CC91A8 + dword_178CC91A8 * v6 / 100;
    }
  }
  if ( !dword_178CEAF18 )
  {
    result = (__int64)&unk_178CEAF24;
    v11 = (int *)((char *)&unk_178CEAF24 + 2156 * a1);
    if ( *v11 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_178CEAF1C * v6) >> 32) >> 31;
      *v11 = dword_178CEAF1C + dword_178CEAF1C * v6 / 100;
    }
  }
  if ( !dword_178D0CC8C )
  {
    result = (__int64)&unk_178D0CC98;
    v12 = (int *)((char *)&unk_178D0CC98 + 2156 * a1);
    if ( *v12 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_178D0CC90 * v6) >> 32) >> 31;
      *v12 = dword_178D0CC90 + dword_178D0CC90 * v6 / 100;
    }
  }
  if ( !dword_178D2EA00 && *((int *)&unk_178D2EA0C + 539 * a1) > 0 )
  {
    v13 = dword_178D2EA04 * v6;
    *((_DWORD *)&unk_178D2EA0C + 539 * a1) = dword_178D2EA04 + v13 / 100;
    return (unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31;
  }
  return result;
}

