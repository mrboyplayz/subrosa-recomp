/* Address: 0x14020411c | Name: sub_14020411C | Size: 75 bytes */
unsigned __int64 __fastcall sub_14020411C(pairNode *this, char *a2, char *a3)
{
  unsigned __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), a2);
  if ( result < (unsigned __int64)a3 )
    return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 2) + 24LL))(
             *((_QWORD *)this + 2),
             result,
             a3);
  return result;
}

