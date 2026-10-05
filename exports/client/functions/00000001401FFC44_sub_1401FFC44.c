/* Address: 0x1401ffc44 | Name: sub_1401FFC44 | Size: 402 bytes */
__int64 __fastcall sub_1401FFC44(__int64 a1)
{
  int v2; // esi
  _BYTE *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0;
  v2 = 1;
  *(_DWORD *)(a1 + 8) = 0;
  while ( **(_BYTE **)&dword_140404A6C[19064555] != 64 && **(_BYTE **)&dword_140404A6C[19064555] != 90 )
  {
    if ( v2 )
    {
      v2 = 0;
    }
    else if ( *(_QWORD *)a1 )
    {
      v3 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
      if ( v3 )
      {
        v3[8] = 44;
        *(_QWORD *)v3 = off_1402846F0;
      }
      else
      {
        v3 = nullptr;
      }
      sub_1401FDE58((__int64 *)a1, (__int64)v3);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      sub_1401FFB98((#89 *)a1, 44);
    }
    if ( !**(_BYTE **)&dword_140404A6C[19064555] )
    {
      if ( *(char *)(a1 + 8) <= 1 )
      {
        if ( *(_QWORD *)a1 )
        {
          sub_1401FDDF4((__int64 *)a1, (__int64)&off_1402848D0);
        }
        else
        {
          *(_DWORD *)(a1 + 8) = 0;
          *(_QWORD *)a1 = &off_1402848D0;
          *(_BYTE *)(a1 + 8) = 1;
        }
      }
      return a1;
    }
    if ( (unsigned int)((char)**(_BYTE **)&dword_140404A6C[19064555] - 48) > 9 )
    {
      v5 = *(_QWORD *)&dword_140404A6C[19064555];
      v7 = 0;
      v8 = 0;
      sub_1402030E0(v9, &v7);
      if ( *(_QWORD *)&dword_140404A6C[19064555] - v5 > 1 && **(_DWORD **)&dword_140404A6C[19064549] != 9 )
        sub_1401FEB28(*(int **)&dword_140404A6C[19064549], (__int64)v9);
      sub_1401FE908(a1, (__int64)v9);
      if ( *(_QWORD *)&dword_140404A6C[19064555] == v5 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        *(_BYTE *)(a1 + 8) = 2;
        *(_QWORD *)a1 = 0;
      }
    }
    else
    {
      ++*(_QWORD *)&dword_140404A6C[19064555];
      v4 = MEMORY[0x1401FE684](*(_QWORD *)&dword_140404A6C[19064549], v10);
      sub_1401FE908(a1, v4);
    }
    if ( *(_BYTE *)(a1 + 8) )
      return a1;
  }
  return a1;
}

