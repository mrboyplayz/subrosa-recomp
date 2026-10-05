/* Address: 0x1400a5340 | Name: sub_1400A5340 | Size: 181 bytes */
__int64 sub_1400A5340()
{
  _WORD *v0; // rcx
  bool v1; // zf
  char *v2; // rbx

  sub_14024B8D4(&dword_140404A6C[278520245], 512);
  ((void (__fastcall *)(_QWORD, unsigned int *, __int64))SHGetSpecialFolderPathA)(0, &dword_140404A6C[278520373], 5);
  sub_14024C22C(&dword_140404A6C[278520373]);
  if ( (unsigned int)sub_14024C22C(Path) == -1 )
  {
    mkdir(Path);
    sub_14024C22C(Path);
  }
  v0 = (_WORD *)((char *)&dword_140404A6C[278520372] + 3);
  do
  {
    v1 = *((_BYTE *)v0 + 1) == 0;
    v0 = (_WORD *)((char *)v0 + 1);
  }
  while ( !v1 );
  v2 = (char *)&dword_140404A6C[278520372] + 3;
  *v0 = 47;
  do
    v1 = *++v2 == 0;
  while ( !v1 );
  strcpy(v2, Path);
  return sub_14024C22C(&dword_140404A6C[278520245]);
}

