/* Address: 0x140198af0 | Name: sub_140198AF0 | Size: 81 bytes */
__int64 __fastcall sub_140198AF0(__int64 a1)
{
  _QWORD *v2; // rax
  char *v3; // rax
  __int64 v4; // rbx
  char v5; // cl

  if ( !dword_140404A6C[19063857] )
    return 0;
  v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E28);
  v3 = (char *)(**(__int64 (__fastcall ***)(_QWORD))*v2)(*v2);
  v4 = a1 - (_QWORD)v3;
  do
  {
    v5 = *v3;
    v3[v4] = *v3;
    ++v3;
  }
  while ( v5 );
  return 1;
}

