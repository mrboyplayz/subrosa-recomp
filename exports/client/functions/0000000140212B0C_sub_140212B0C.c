/* Address: 0x140212b0c | Name: sub_140212B0C | Size: 139 bytes */
void __fastcall sub_140212B0C(_QWORD *a1, char a2, int a3, _DWORD *a4)
{
  int i; // edi
  int v9; // eax

  if ( a3 > 0 )
  {
    for ( i = 0; i < a3; ++i )
    {
      if ( ((*(_DWORD *)(*a1 + 20LL) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8LL))
        && (unsigned int)unknown_libname_207((unsigned int)a2, *a1) == -1 )
      {
        *a4 = -1;
        v9 = -1;
      }
      else
      {
        v9 = ++*a4;
      }
      if ( v9 == -1 )
        break;
    }
  }
}

