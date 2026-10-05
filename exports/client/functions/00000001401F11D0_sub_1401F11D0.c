/* Address: 0x1401f11d0 | Name: sub_1401F11D0 | Size: 325 bytes */
__int64 __fastcall sub_1401F11D0(int a1, int a2)
{
  int v3; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-34h]
  unsigned int v5; // [rsp+38h] [rbp-30h]
  unsigned int v6; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+44h] [rbp-24h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  int v12; // [rsp+54h] [rbp-14h] BYREF
  int v13; // [rsp+58h] [rbp-10h] BYREF

  if ( (unsigned int)sub_1401F81E0(a1, a2, (unsigned int)&v13, (unsigned int)&v12, (__int64)&v3) )
    return 0;
  switch ( v3 )
  {
    case 2:
      v5 = 6;
      v4 = 6;
      v7 = 6;
      v6 = 6;
      break;
    case 3:
      v5 = 11;
      v4 = 11;
      v7 = 11;
      v6 = 11;
      break;
    case 4:
      v5 = 18;
      v4 = 18;
      v7 = 18;
      v6 = 18;
      break;
    default:
      return 0;
  }
  v8 = sub_1401F2140(v5, v4);
  if ( !v8 )
    return 0;
  v9 = sub_1401F2140(v7, v6);
  if ( !v9 )
    return 0;
  v10 = sub_1401F0320(v13, v12);
  if ( v10 )
    return v10 + v9 + v8 + (unsigned int)sub_1401E99B0(8);
  else
    return 0;
}

