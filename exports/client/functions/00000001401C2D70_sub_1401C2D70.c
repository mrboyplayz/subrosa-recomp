/* Address: 0x1401c2d70 | Name: sub_1401C2D70 | Size: 353 bytes */
__int64 __fastcall sub_1401C2D70(__int64 a1, char *a2, char *a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  char v6; // al
  int v7; // eax
  int i; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+24h] [rbp-24h]
  int v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+2Ch] [rbp-1Ch]
  char v12; // [rsp+30h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    if ( i || a4 )
    {
      v9 = a2[i] - 4;
      v10 = *a3 + 8;
      if ( v9 <= v10 )
        v6 = v9 + *a3;
      else
        v6 = 2 * v9 - v10 + *a3;
      *a3 = v6;
    }
    else
    {
      *a3 = sub_1401BE3A0(*a2, *a3 - 16);
    }
    if ( *a3 <= 63 )
    {
      if ( *a3 >= 0 )
        v11 = *a3;
      else
        v11 = 0;
      v12 = v11;
    }
    else
    {
      v12 = 63;
    }
    *a3 = v12;
    v7 = sub_1401BE360((unsigned int)((1907825LL * *a3) >> 16) + 2090, 0xF7Fu);
    *(_DWORD *)(a1 + 4LL * i) = sub_1401BC3D0(v7);
  }
  return result;
}

