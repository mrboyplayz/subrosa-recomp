/* Address: 0x140130000 | Name: sub_140130000 | Size: 120 bytes */
__int64 sub_140130000()
{
  int v1; // ebx
  int v2; // edx
  __int64 v3; // rcx

  if ( !dword_140404A6C[225426046] )
    return 0;
  v1 = 0;
  v2 = rand() % (signed int)dword_140404A6C[225426046];
  do
  {
    v3 = 396LL * v2;
    if ( (int)dword_140404A6C[v3 + 225426059] <= 3 && (int)dword_140404A6C[v3 + 225426060] <= 3 )
      break;
    ++v1;
    v2 = rand() % (signed int)dword_140404A6C[225426046];
  }
  while ( v1 < 1024 );
  return (unsigned int)v2;
}

