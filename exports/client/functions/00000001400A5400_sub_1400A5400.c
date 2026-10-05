/* Address: 0x1400a5400 | Name: sub_1400A5400 | Size: 144 bytes */
__int64 __fastcall sub_1400A5400(__int64 a1)
{
  int v1; // r10d
  _BYTE *v2; // r9
  __int64 i; // rdx
  __int64 v4; // r8
  __int64 v6; // [rsp+0h] [rbp-248h] BYREF
  int v7; // [rsp+20h] [rbp-228h] BYREF
  _BYTE v8[512]; // [rsp+30h] [rbp-218h] BYREF
  __int64 v9; // [rsp+230h] [rbp-18h]

  v1 = 0;
  v2 = v8;
  for ( i = 0; i < 16; ++i )
  {
    v4 = *(unsigned __int8 *)(i + a1);
    if ( !(_BYTE)v4 )
      break;
    if ( (unsigned __int8)(v4 - 48) <= 9u )
    {
      ++v1;
      *v2++ = v4;
    }
  }
  if ( (unsigned __int64)v1 >= 0x200 )
    sub_1401F8694(a1, i, v4);
  v8[v1] = 0;
  sub_14015B070(v8, "%u", (unsigned int)&v7);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v9);
}

