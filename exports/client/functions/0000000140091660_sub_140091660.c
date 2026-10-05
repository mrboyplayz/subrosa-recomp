/* Address: 0x140091660 | Name: sub_140091660 | Size: 346 bytes */
__int64 __fastcall sub_140091660(__int64 a1, int a2)
{
  int v5; // ebp
  unsigned int *v6; // rdi
  __int64 v7; // r14
  unsigned int *v8; // rcx
  signed int i; // ebx
  unsigned int *v10; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C(&Buffer, 4, 1, a1);
    sub_14020CE0C(&dword_140404A6C[160857235], 4, 1, a1);
  }
  else
  {
    fread(&Buffer, 4, 1, a1);
    if ( Buffer != 1 )
      return 0;
    fread(&dword_140404A6C[160857235], 4, 1, a1);
  }
  v5 = 0;
  if ( (int)dword_140404A6C[160857235] > 0 )
  {
    v6 = &dword_140404A6C[160857236];
    do
    {
      v7 = 13LL * v5;
      v8 = &dword_140404A6C[v7 + 160857236];
      if ( a2 )
        sub_14020CE0C(v8, 4, 1, a1);
      else
        fread(v8, 4, 1, a1);
      for ( i = 0; i < (int)*v6; ++i )
      {
        v10 = &dword_140404A6C[3 * i + 160857237 + v7];
        if ( a2 )
          sub_14020CE0C(v10, 4, 3, a1);
        else
          fread(v10, 4, 3, a1);
      }
      ++v5;
      v6 += 13;
    }
    while ( v5 < (int)dword_140404A6C[160857235] );
  }
  return 1;
}

