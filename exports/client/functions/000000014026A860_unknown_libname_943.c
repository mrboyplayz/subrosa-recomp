/* Address: 0x14026a860 | Name: unknown_libname_943 | Size: 158 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_943(_BYTE *a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // r9
  bool v4; // cf
  unsigned __int8 i; // al
  _QWORD v8[11]; // [rsp+0h] [rbp-58h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = 1;
  do
  {
    if ( !v4 )
      sub_1401F8694();
    *((_BYTE *)&v8[4] + v2++) = 0;
    v4 = (unsigned __int64)v2 < 0x20;
  }
  while ( v2 < 32 );
  for ( i = *a2; i; i = *v3 )
  {
    ++v3;
    *((_BYTE *)&v8[4] + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
  }
  while ( *a1
       && ((unsigned __int8)(1 << (*a1 & 7)) & *((_BYTE *)&v8[4] + ((unsigned __int64)(unsigned __int8)*a1 >> 3))) == 0 )
    ++a1;
  return MEMORY[0x1401F8B20]((unsigned __int64)v8 ^ v8[8]);
}

