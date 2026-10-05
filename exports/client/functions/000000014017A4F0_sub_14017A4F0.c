/* Address: 0x14017a4f0 | Name: sub_14017A4F0 | Size: 321 bytes */
__int64 __fastcall sub_14017A4F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  unsigned int v7; // r11d
  __int64 v8; // rax
  unsigned __int8 *v9; // r10
  int v10; // r9d
  unsigned int v11; // ebx
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rsi
  unsigned int v15; // ecx

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 48) )
    v7 = sub_14017DCC0(a1, a2, a3);
  v8 = *(int *)(a1 + 44);
  if ( !(_DWORD)v8 )
    return v7;
  v9 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v8);
  if ( v9[3] + (v9[2] << 8) )
  {
    if ( v9[9] + (v9[8] << 8) == 1 )
    {
      v10 = 0;
      v11 = v4 | (v5 << 16);
      v12 = (v9[10] << 8) + v9[11] - 1;
      if ( v12 >= 0 )
      {
        while ( 1 )
        {
          v13 = (v12 + v10) >> 1;
          v14 = 6 * v13;
          v15 = v9[v14 + 21] + (v9[v14 + 18] << 24) + (v9[v14 + 20] << 8) + (v9[v14 + 19] << 16);
          if ( v11 >= v15 )
          {
            if ( v11 <= v15 )
            {
              v3 = (__int16)(v9[v14 + 23] + (v9[v14 + 22] << 8));
              return v3 + v7;
            }
            v10 = v13 + 1;
          }
          else
          {
            v12 = v13 - 1;
          }
          if ( v10 > v12 )
            return v7;
        }
      }
    }
  }
  return v3 + v7;
}

