/* Address: 0x1400ef110 | Name: sub_1400EF110 | Size: 214 bytes */
int __fastcall sub_1400EF110(int a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // rax
  __int64 v4; // rbx
  int v7; // r9d
  unsigned int v8; // edi
  _DWORD *i; // r10
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  LODWORD(v3) = a1;
  v4 = 1060912LL * a1;
  if ( *(FILE **)((char *)&Stream + v4) )
  {
    if ( !*(_DWORD *)((char *)&Stream + v4 + 8) )
    {
      v7 = 0;
      v8 = *(_DWORD *)((char *)&Stream + v4 + 20);
      if ( v8 )
      {
        for ( i = (_DWORD *)((char *)&unk_1407A92B8 + v4); ; i += 16 )
        {
          if ( *i == a3 )
          {
            v3 = (unsigned __int8 *)&unk_1407A92C4 + 64 * (__int64)v7 + v4;
            v10 = a2 - (_QWORD)v3;
            do
            {
              v11 = v3[v10];
              v12 = *v3 - v11;
              if ( v12 )
                break;
              ++v3;
            }
            while ( v11 );
            if ( !v12 )
              break;
          }
          if ( ++v7 >= v8 )
            return (int)v3;
        }
        LODWORD(v3) = fseek(
                        *(FILE **)((char *)&Stream + v4),
                        *(_DWORD *)((char *)&Stream + 64 * (__int64)v7 + v4 + 28),
                        0);
      }
    }
  }
  return (int)v3;
}

