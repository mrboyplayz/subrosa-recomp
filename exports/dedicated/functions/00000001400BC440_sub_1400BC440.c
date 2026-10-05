/* Address: 0x1400bc440 | Name: sub_1400BC440 | Size: 122 bytes */
__int64 sub_1400BC440()
{
  int v1; // ebx
  int v2; // edx
  __int64 v3; // rcx

  if ( !dword_1839ABEE4 )
    return 0;
  v1 = 0;
  v2 = rand() % dword_1839ABEE4;
  do
  {
    v3 = 396LL * v2;
    if ( dword_183989E80[v3 + 34854] <= 3 && dword_183989E80[v3 + 34855] <= 3 )
      break;
    ++v1;
    v2 = rand() % dword_1839ABEE4;
  }
  while ( v1 < 1024 );
  return (unsigned int)v2;
}

