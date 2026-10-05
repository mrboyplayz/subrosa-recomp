/* Address: 0x14020a7d0 | Name: sub_14020A7D0 | Size: 98 bytes */
__int64 __fastcall sub_14020A7D0(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, struct FH4::FuncInfo4 *a3)
{
  unsigned int v4; // ebx

  v4 = MEMORY[0x140207820](a3, a2);
  if ( *((_DWORD *)a2 + 18) )
  {
    if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
      abort();
    return (unsigned int)(*((_DWORD *)a2 + 18) - 2);
  }
  else if ( *(_DWORD *)(sub_1401FD83C() + 120) != -2 )
  {
    v4 = *(_DWORD *)(sub_1401FD83C() + 120);
    *(_DWORD *)(sub_1401FD83C() + 120) = -2;
  }
  return v4;
}

