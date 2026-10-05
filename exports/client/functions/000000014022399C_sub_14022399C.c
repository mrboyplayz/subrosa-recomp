/* Address: 0x14022399c | Name: sub_14022399C | Size: 72 bytes */
__int64 __fastcall sub_14022399C(__int64 *a1, char a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( ((*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || (result = *a1, *(_QWORD *)(*a1 + 8)))
    && (result = unknown_libname_207((unsigned int)a2, *a1), (_DWORD)result == -1) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}

