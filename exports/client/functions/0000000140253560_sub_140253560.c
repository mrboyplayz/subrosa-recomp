/* Address: 0x140253560 | Name: sub_140253560 | Size: 149 bytes */
__int64 __fastcall sub_140253560(__int64 a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int16 *v4; // rdi
  __int16 v6; // si

  v3 = (unsigned __int64)a2 + a3;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a2;
  if ( (unsigned __int64)a2 < v3 )
  {
    while ( 1 )
    {
      v6 = *v4;
      if ( (unsigned __int16)putwch_nolock(*v4) != v6 )
        break;
      *(_DWORD *)(a1 + 4) += 2;
      if ( v6 == 10 )
      {
        if ( (unsigned __int16)putwch_nolock(13) != 13 )
          break;
        ++*(_DWORD *)(a1 + 4);
        ++*(_DWORD *)(a1 + 8);
      }
      if ( (unsigned __int64)++v4 >= v3 )
        return a1;
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return a1;
}

