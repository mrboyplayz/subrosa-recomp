/* Address: 0x1401bc700 | Name: sub_1401BC700 | Size: 568 bytes */
__int64 __fastcall sub_1401BC700(__int16 a1, char a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-48h]
  int v7; // [rsp+4h] [rbp-44h]
  int v8; // [rsp+8h] [rbp-40h]
  int v9; // [rsp+Ch] [rbp-3Ch]
  int v10; // [rsp+10h] [rbp-38h]
  int v11; // [rsp+14h] [rbp-34h]
  int v12; // [rsp+18h] [rbp-30h]
  int v13; // [rsp+1Ch] [rbp-2Ch]
  int v14; // [rsp+20h] [rbp-28h]
  char *v15; // [rsp+28h] [rbp-20h]

  if ( a4 == 8 )
  {
    if ( a5 == 4 )
    {
      v15 = (char *)&unk_14027E290;
      v9 = 11;
    }
    else
    {
      v15 = (char *)&unk_14027BC14;
      v9 = 3;
    }
  }
  else if ( a5 == 4 )
  {
    v15 = (char *)&unk_14027E2C0;
    v9 = 34;
  }
  else
  {
    v15 = (char *)&unk_14027CC28;
    v9 = 12;
  }
  v7 = 2 * (__int16)a4;
  v8 = 18 * (__int16)a4;
  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    *(_DWORD *)(a3 + 4LL * i) = v15[a2 + v9 * i] + a1 + 2 * (__int16)a4;
    if ( v7 <= v8 )
    {
      if ( *(_DWORD *)(a3 + 4LL * i) <= v8 )
      {
        if ( *(_DWORD *)(a3 + 4LL * i) >= v7 )
          v12 = *(_DWORD *)(a3 + 4LL * i);
        else
          v12 = 2 * (__int16)a4;
        v13 = v12;
      }
      else
      {
        v13 = 18 * (__int16)a4;
      }
      v14 = v13;
    }
    else
    {
      if ( *(_DWORD *)(a3 + 4LL * i) <= v7 )
      {
        if ( *(_DWORD *)(a3 + 4LL * i) >= v8 )
          v10 = *(_DWORD *)(a3 + 4LL * i);
        else
          v10 = 18 * (__int16)a4;
        v11 = v10;
      }
      else
      {
        v11 = 2 * (__int16)a4;
      }
      v14 = v11;
    }
    *(_DWORD *)(a3 + 4LL * i) = v14;
  }
  return result;
}

