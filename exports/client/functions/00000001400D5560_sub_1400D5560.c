/* Address: 0x1400d5560 | Name: sub_1400D5560 | Size: 289 bytes */
void __fastcall sub_1400D5560(int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  signed int v3; // eax
  int v4; // r10d
  signed int v5; // r9d
  __int64 v6; // r11
  unsigned int *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int *v11; // rax

  v1 = a1;
  if ( a1 >= 0 )
  {
    v2 = dword_140404A6C[193070979];
    if ( (int)v1 < (int)dword_140404A6C[193070979] )
    {
      v3 = dword_140404A6C[193074052];
      v4 = 0;
      v5 = 0;
      if ( (int)dword_140404A6C[193074052] > 0 )
      {
        v6 = 0;
        v7 = &dword_140404A6C[193074053];
        do
        {
          if ( *v7 == (_DWORD)v1 || v7[1] == (_DWORD)v1 )
          {
            if ( v6 >= 0 )
            {
              if ( v5 >= v3 )
                break;
              dword_140404A6C[193074052] = v3 - 1;
              v8 = 13LL * (v3 - 1);
              *(_OWORD *)v7 = *(_OWORD *)&dword_140404A6C[v8 + 193074053];
              *((_OWORD *)v7 + 1) = *(_OWORD *)&dword_140404A6C[v8 + 193074057];
              *((_OWORD *)v7 + 2) = *(_OWORD *)&dword_140404A6C[v8 + 193074061];
              v7[12] = dword_140404A6C[v8 + 193074065];
              v3 = dword_140404A6C[193074052];
            }
          }
          else
          {
            ++v5;
            ++v6;
            v7 += 13;
          }
        }
        while ( v5 < v3 );
        v2 = dword_140404A6C[193070979];
      }
      dword_140404A6C[193070979] = v2 - 1;
      v9 = (int)(v2 - 1);
      v10 = 3 * v1;
      *(_QWORD *)&dword_140404A6C[v10 + 193070980] = *(_QWORD *)&dword_140404A6C[3 * v9 + 193070980];
      dword_140404A6C[v10 + 193070982] = dword_140404A6C[3 * v9 + 193070982];
      if ( (int)dword_140404A6C[193074052] > 0 )
      {
        v11 = &dword_140404A6C[193074054];
        do
        {
          if ( *(v11 - 1) == dword_140404A6C[193070979] )
            *(v11 - 1) = v1;
          if ( *v11 == dword_140404A6C[193070979] )
            *v11 = v1;
          ++v4;
          v11 += 13;
        }
        while ( v4 < (int)dword_140404A6C[193074052] );
      }
    }
  }
}

