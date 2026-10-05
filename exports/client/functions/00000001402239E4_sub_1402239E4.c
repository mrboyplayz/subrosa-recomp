/* Address: 0x1402239e4 | Name: sub_1402239E4 | Size: 75 bytes */
__int64 __fastcall sub_1402239E4(__int64 *a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( ((*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || (result = *a1, *(_QWORD *)(*a1 + 8)))
    && (result = sub_140256B38(a2, *a1), (_WORD)result == 0xFFFF) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}

