/* Address: 0x1401c58e0 | Name: sub_1401C58E0 | Size: 312 bytes */
__int64 __fastcall sub_1401C58E0(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // [rsp+0h] [rbp-68h] BYREF
  int v5; // [rsp+30h] [rbp-38h]
  unsigned int v6; // [rsp+34h] [rbp-34h]
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  int v9; // [rsp+40h] [rbp-28h] BYREF
  int v10[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-10h]

  v5 = 0;
  v6 = 0;
  if ( a1[3] )
  {
    v5 = (256 - a1[2]) << 10;
    v6 = v5 >> 16;
    v5 -= v5 >> 16 << 16;
    sub_1401D6BB0(v10, &v9, v6, (unsigned int)v5);
    if ( a1[3] + a1[2] <= 256 )
    {
      if ( a1[3] + a1[2] >= 0 )
        v7 = a1[3] + a1[2];
      else
        v7 = 0;
      v8 = v7;
    }
    else
    {
      v8 = 256;
    }
    a1[2] = v8;
    sub_1401BB2C0(a2, v10, &v9, a1, a2, a3);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v11);
}

