/* Address: 0x1401d1630 | Name: sub_1401D1630 | Size: 317 bytes */
__int64 __fastcall sub_1401D1630(__int64 a1, int a2)
{
  __int64 result; // rax

  sub_1401C50E0((_DWORD *)a1, a1 + 5114);
  if ( !a2 && *(int *)(a1 + 4532) >= 13 )
    *(_DWORD *)(a1 + 4532) = 12;
  if ( *(int *)(a1 + 4532) >= 13 )
  {
    *(_DWORD *)(a1 + 6104) = 0;
    *(_DWORD *)(a1 + 6100) = 0;
    *(_BYTE *)(a1 + 4781) = 1;
    result = *(int *)(a1 + 5764);
    *(_BYTE *)(a1 + result + 4736) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 4781) = 0;
    if ( (int)++*(_DWORD *)(a1 + 6104) > 10 )
    {
      if ( *(int *)(a1 + 6104) > 30 )
      {
        *(_DWORD *)(a1 + 6104) = 10;
        *(_DWORD *)(a1 + 6100) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 6100) = 0;
    }
    result = *(int *)(a1 + 5764);
    *(_BYTE *)(a1 + result + 4736) = 0;
  }
  return result;
}

