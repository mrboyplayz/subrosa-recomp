/* Address: 0x140206e30 | Name: sub_140206E30 | Size: 33 bytes */
unsigned __int64 *__fastcall MEMORY[0x140206E30](
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
        struct FH4::FuncInfo4 *a3,
        unsigned __int64 *a4)
{
  *a4 = *a1;
  if ( (*(_BYTE *)a3 & 1) != 0 )
    *a4 = *(_QWORD *)(*((unsigned int *)a3 + 5) + *a1);
  return a4;
}

