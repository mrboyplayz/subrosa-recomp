/* Address: 0x14025006c | Name: ??R_lambda_c5860995281e5c4ce005b3de8f5874ee_@@QEBAXXZ | Size: 120 bytes */
char __fastcall _lambda_c5860995281e5c4ce005b3de8f5874ee_::operator()(FILE ***a1)
{
  FILE **v2; // rdx
  FILE *v3; // rax
  unsigned int v4; // ecx
  FILE *v5; // rcx

  v2 = a1[1];
  v3 = **a1;
  if ( v3 )
  {
    v4 = *((_DWORD *)v3 + 5);
    LODWORD(v3) = v4 >> 13;
    if ( (v4 & 0x2000) != 0 )
    {
      LOBYTE(v3) = v4 & 3;
      if ( (v4 & 3) == 2 && (v4 & 0xC0) != 0 || (v4 & 0x800) != 0 )
      {
        if ( *(_BYTE *)a1[2] || (v5 = **a1, LODWORD(v3) = *((_DWORD *)v5 + 5) >> 1, (*((_DWORD *)v5 + 5) & 2) != 0) )
        {
          if ( (unsigned int)unknown_libname_861(**a1) == -1 )
          {
            v3 = (FILE *)a1[3];
            *(_DWORD *)v3 = -1;
          }
          else
          {
            v3 = (FILE *)a1[1];
            ++*(_DWORD *)v3;
          }
        }
      }
      else
      {
        ++*(_DWORD *)v2;
      }
    }
  }
  return (char)v3;
}

