/* Address: 0x14024fcec | Name: sub_14024FCEC | Size: 154 bytes */
__int64 __fastcall sub_14024FCEC(__int64 a1, _QWORD *a2, FILE ***a3, _QWORD *a4)
{
  FILE *v6; // rax
  int v7; // ecx

  sub_14020B5E0(*a2);
  v6 = **a3;
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 + 5);
    if ( (v7 & 0x2000) != 0 )
    {
      if ( (v7 & 3) == 2 && (v7 & 0xC0) != 0 || (v7 & 0x800) != 0 )
      {
        if ( *(_BYTE *)a3[2] || (*((_DWORD *)**a3 + 5) & 2) != 0 )
        {
          if ( (unsigned int)unknown_libname_861(**a3) == -1 )
            *(_DWORD *)a3[3] = -1;
          else
            ++*(_DWORD *)a3[1];
        }
      }
      else
      {
        ++*(_DWORD *)a3[1];
      }
    }
  }
  return sub_14020B5EC(*a4);
}

