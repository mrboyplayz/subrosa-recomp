/* Address: 0x140207828 | Name: sub_140207828 | Size: 102 bytes */
__int64 __fastcall sub_140207828(const struct _s_FuncInfo *a1, struct _xDISPATCHER_CONTEXT *a2, unsigned __int64 a3)
{
  __int64 v4; // r11
  __int64 v5; // r10
  unsigned int v6; // r8d
  __int64 v7; // r9

  if ( !a1 || (v4 = *((int *)a1 + 6), v5 = *((_QWORD *)a2 + 1), !(v4 + v5)) )
    abort();
  v6 = *((_DWORD *)a1 + 5);
  v7 = 0;
  if ( !v6 )
    return 0xFFFFFFFFLL;
  do
  {
    if ( a3 < v5 + *(int *)(v4 + 8 * v7 + v5) )
      break;
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < v6 );
  if ( (_DWORD)v7 )
    return *(unsigned int *)(v4 + 8LL * (unsigned int)(v7 - 1) + v5 + 4);
  else
    return 0xFFFFFFFFLL;
}

