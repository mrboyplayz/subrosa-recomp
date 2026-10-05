/* Address: 0x1401f7b80 | Name: sub_1401F7B80 | Size: 243 bytes */
__int64 __fastcall sub_1401F7B80(_DWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  int v6; // [rsp+4h] [rbp-24h]
  int v7; // [rsp+10h] [rbp-18h]

  if ( a1[72] == -1000 )
  {
    v6 = 15000 * a1[1] + (60 * a4 / a3 + a4) * (a1[1] + a1[2]);
  }
  else if ( a1[72] == -1 )
  {
    v6 = 320000 * (a1[2] + a1[1]);
  }
  else
  {
    v6 = a1[72];
  }
  v7 = v6 / a1[1];
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a1[1];
    if ( i >= (int)result )
      break;
    *(_DWORD *)(a2 + 4LL * i) = v7;
  }
  return result;
}

