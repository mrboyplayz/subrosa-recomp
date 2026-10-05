/* Address: 0x140076320 | Name: sub_140076320 | Size: 396 bytes */
void __fastcall sub_140076320(__int64 a1, int a2)
{
  char v2; // bl
  unsigned __int64 v3; // rcx
  signed int v4; // edx
  int v5; // r8d
  _BYTE *v6; // r9
  char *v7; // rdx
  char v8; // cl
  unsigned int v9; // r8d
  char *v10; // rdx
  char v11; // cl

  v2 = a2;
  if ( a2 < 32 )
  {
    if ( a2 == 9 )
    {
      if ( !(unsigned int)sub_1400722C0() )
      {
        v7 = (char *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066];
        if ( *v7 )
        {
          do
          {
            v8 = v7[1];
            *v7++ = v8;
          }
          while ( v8 );
        }
      }
    }
    else if ( a2 == 10 && !(unsigned int)sub_1400722C0() )
    {
      v9 = dword_140404A6C[70318066];
      if ( (int)dword_140404A6C[70318066] > 0 )
      {
        v10 = (char *)&dword_140404A6C[70318068] + dword_140404A6C[70318066] + 3;
        if ( *v10 )
        {
          do
          {
            v11 = v10[1];
            *v10++ = v11;
          }
          while ( v11 );
          v9 = dword_140404A6C[70318066];
        }
        dword_140404A6C[70318066] = v9 - 1;
        dword_140404A6C[70318065] = v9 - 1;
      }
    }
  }
  else
  {
    sub_1400722C0();
    v3 = -1;
    do
      ++v3;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v3) );
    if ( v3 < (int)dword_140404A6C[70318068] )
    {
      v4 = dword_140404A6C[70318066];
      if ( (int)dword_140404A6C[70318066] < 0x2000 )
      {
        if ( dword_140404A6C[70318067] )
        {
          if ( !*((_BYTE *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066]) )
          {
            *((_BYTE *)&dword_140404A6C[70318069] + dword_140404A6C[70318066] + 1) = 0;
            v4 = dword_140404A6C[70318066];
          }
        }
        else
        {
          v5 = v3 + 1;
          if ( (int)v3 + 1 > (int)dword_140404A6C[70318066] )
          {
            v6 = (char *)&dword_140404A6C[70318069] + v5;
            do
            {
              --v5;
              *v6 = *(v6 - 1);
              --v6;
              v4 = dword_140404A6C[70318066];
            }
            while ( v5 > (int)dword_140404A6C[70318066] );
          }
        }
        *((_BYTE *)&dword_140404A6C[70318069] + v4) = v2;
        dword_140404A6C[70318065] = ++dword_140404A6C[70318066];
      }
    }
  }
}

