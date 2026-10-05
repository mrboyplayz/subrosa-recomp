/* Address: 0x1400c5750 | Name: sub_1400C5750 | Size: 391 bytes */
__int64 __fastcall sub_1400C5750(signed int a1)
{
  __int64 v2; // rsi
  unsigned int *v3; // rdi
  signed int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 i; // r8
  __int64 v8; // rcx
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // eax
  char v14; // al
  __int64 v15; // rcx

  v2 = a1;
  v3 = &dword_140404A6C[1760 * a1 + 278847325];
  v4 = 3;
  v5 = 1760LL * a1;
  v6 = v5 * 4 + 128;
  do
  {
    for ( i = 0; i < 62; ++i )
    {
      v8 = *((char *)v3 + i);
      if ( !(_BYTE)v8 )
        break;
      v9 = v6 + i;
      if ( (unsigned __int8)(v8 - 65) > 0x19u )
      {
        *((_BYTE *)&dword_140404A6C[278846114] + v9) = v8;
      }
      else
      {
        v10 = LOBYTE(dword_140404A6C[1760 * v2 + 278847390 + v8]) + 65;
        *((_BYTE *)&dword_140404A6C[278846626] + v9) = 15;
        *((_BYTE *)&dword_140404A6C[278846114] + v9) = v10;
        if ( dword_140404A6C[v5 + 278847583] == dword_140404A6C[1760 * v2 + 278847390 + v8] )
          *((_BYTE *)&dword_140404A6C[278846626] + v9) = 12;
      }
    }
    *((_BYTE *)&dword_140404A6C[278846114] + i + v6) = 0;
    sub_140050F90(a1, v4 - 1);
    v11 = 0;
    do
    {
      v12 = *((char *)v3 + v11);
      if ( !(_BYTE)v12 )
        break;
      if ( (unsigned __int8)(v12 - 65) > 0x19u )
      {
        v14 = *((_BYTE *)v3 + v11);
      }
      else
      {
        v13 = dword_140404A6C[1760 * v2 + 278847551 + (int)dword_140404A6C[1760 * v2 + 278847390 + v12]];
        v14 = v13 == -1 ? 32 : v13 + 65;
      }
      v15 = v6 + v11++;
      *((_BYTE *)&dword_140404A6C[278846130] + v15) = v14;
    }
    while ( v11 < 62 );
    *((_BYTE *)&dword_140404A6C[278846130] + v6 + v11) = 0;
    sub_140050F90(a1, v4);
    v4 += 3;
    v3 += 16;
    v6 += 192;
  }
  while ( v4 < 18 );
  return sub_1400C5360(a1);
}

