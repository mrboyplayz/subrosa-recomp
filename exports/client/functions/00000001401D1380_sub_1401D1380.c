/* Address: 0x1401d1380 | Name: sub_1401D1380 | Size: 669 bytes */
__int64 __fastcall sub_1401D1380(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-58h]
  int v4; // [rsp+30h] [rbp-48h]
  __int16 v5; // [rsp+38h] [rbp-40h]
  __int16 v6; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v7; // [rsp+40h] [rbp-38h]
  unsigned int v8; // [rsp+44h] [rbp-34h]
  unsigned int v9; // [rsp+48h] [rbp-30h]
  unsigned int v10; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v11; // [rsp+50h] [rbp-28h]
  signed int v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  result = (unsigned int)*(char *)(a1 + 4541);
  if ( (_DWORD)result == 2 )
  {
    v4 = sub_1401BC2A0(65536000 * *(_DWORD *)(a1 + 4576) / *(_DWORD *)(a1 + 4544)) - 2048;
    v13 = (int)(((__int16)*(_DWORD *)(a1 + 4712) * (__int64)(-4 * *(_DWORD *)(a1 + 4712))) >> 16);
    v2 = (((__int16)(v4 - (sub_1401BC2A0(0x3C0000u) - 2048)) * v13) >> 16) + v4 - (*(int *)(a1 + 8) >> 8);
    if ( v2 < 0 )
      v2 *= 3;
    if ( v2 <= 51 )
    {
      if ( v2 >= -51 )
        v5 = v2;
      else
        v5 = -51;
      v6 = v5;
    }
    else
    {
      v6 = 51;
    }
    *(_DWORD *)(a1 + 8) += (6554LL * v6 * *(__int16 *)(a1 + 4532)) >> 16;
    v12 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
    if ( v12 <= (int)((unsigned int)sub_1401BC2A0(0x64u) << 8) )
    {
      if ( *(_DWORD *)(a1 + 8) <= (signed int)((unsigned int)sub_1401BC2A0(0x64u) << 8) )
      {
        if ( *(_DWORD *)(a1 + 8) >= (signed int)((unsigned int)sub_1401BC2A0(0x3Cu) << 8) )
          v9 = *(_DWORD *)(a1 + 8);
        else
          v9 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
        v10 = v9;
      }
      else
      {
        v10 = (unsigned int)sub_1401BC2A0(0x64u) << 8;
      }
      v11 = v10;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) <= (signed int)((unsigned int)sub_1401BC2A0(0x3Cu) << 8) )
      {
        if ( *(_DWORD *)(a1 + 8) >= (signed int)((unsigned int)sub_1401BC2A0(0x64u) << 8) )
          v7 = *(_DWORD *)(a1 + 8);
        else
          v7 = (unsigned int)sub_1401BC2A0(0x64u) << 8;
        v8 = v7;
      }
      else
      {
        v8 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
      }
      v11 = v8;
    }
    *(_DWORD *)(a1 + 8) = v11;
    return a1;
  }
  return result;
}

