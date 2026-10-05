/* Address: 0x14019a9c0 | Name: sub_14019A9C0 | Size: 644 bytes */
__int64 __fastcall sub_14019A9C0(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h]
  int v4; // [rsp+20h] [rbp-28h]
  unsigned int v5; // [rsp+24h] [rbp-24h]
  unsigned int v6; // [rsp+28h] [rbp-20h]
  unsigned int v7; // [rsp+2Ch] [rbp-1Ch]
  int i; // [rsp+30h] [rbp-18h]

  v1 = sub_14019A020(*(_DWORD *)(a1 + 32));
  v3 = 32 - (v1 + 1);
  v5 = 0x7FFFFFFFu >> (32 - (v1 + 1));
  v7 = ~v5 & (v5 + *(_DWORD *)(a1 + 36));
  if ( (v5 | v7) >= *(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 36) )
  {
    v3 = 32 - v1;
    v7 = ~(v5 >> 1) & ((v5 >> 1) + *(_DWORD *)(a1 + 36));
  }
  while ( v3 > 0 )
  {
    sub_1401B6030(a1, v7 >> 23);
    v7 = (v7 << 8) & 0x7FFFFFFF;
    v3 -= 8;
  }
  if ( *(int *)(a1 + 44) >= 0 || *(_DWORD *)(a1 + 40) )
    sub_1401B6030(a1, 0);
  v6 = *(_DWORD *)(a1 + 16);
  for ( i = *(_DWORD *)(a1 + 20); i >= 8; i -= 8 )
  {
    *(_DWORD *)(a1 + 48) |= sub_1401B5FB0(a1, (unsigned __int8)v6);
    v6 >>= 8;
  }
  result = a1;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    result = MEMORY[0x1401FCD30](
               *(_QWORD *)a1 + *(unsigned int *)(a1 + 28),
               0,
               (unsigned int)(*(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 12)));
    if ( i > 0 )
    {
      if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) )
      {
        v4 = -v3;
        if ( (unsigned int)(*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 28)) >= *(_DWORD *)(a1 + 8) && v4 < i )
        {
          v6 &= (1 << v4) - 1;
          *(_DWORD *)(a1 + 48) = -1;
        }
        result = (unsigned __int8)v6
               | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1
                                                  + (unsigned int)(*(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 12) - 1));
        *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 12) - 1)) |= v6;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = -1;
        return a1;
      }
    }
  }
  return result;
}

