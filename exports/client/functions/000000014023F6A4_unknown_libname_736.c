/* Address: 0x14023f6a4 | Name: unknown_libname_736 | Size: 94 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_736(__int64 a1, char a2)
{
  int v3; // r8d
  int v4; // ecx
  unsigned int v6; // edx
  __int64 v7; // rcx

  v3 = (8 * (a2 & 1)) | 0x10;
  if ( (a2 & 2) == 0 )
    v3 = 8 * (a2 & 1);
  v4 = v3 | 4;
  if ( (a2 & 4) == 0 )
    v4 = v3;
  v6 = v4 | 1;
  if ( (a2 & 8) == 0 )
    v6 = v4;
  v7 = v6 | 0x20;
  if ( (a2 & 0x10) == 0 )
    v7 = v6;
  set_statfp(v7);
}

