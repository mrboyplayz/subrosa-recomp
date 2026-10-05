/* Address: 0x14020777c | Name: sub_14020777C | Size: 39 bytes */
__int64 __fastcall sub_14020777C(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, const struct _s_FuncInfo *a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(*((int *)a3 + 7) + *a1);
  if ( (_DWORD)result == -2 )
    return sub_140207828(a3, a2, *(_QWORD *)a2);
  return result;
}

