/* Address: 0x1402500f4 | Name: sub_1402500F4 | Size: 93 bytes */
__int64 __fastcall sub_1402500F4(char a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-1Ch] BYREF
  FILE **v4[3]; // [rsp+28h] [rbp-18h] BYREF
  char v5; // [rsp+50h] [rbp+10h] BYREF
  char v6; // [rsp+58h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+28h] BYREF

  v5 = a1;
  v8 = 0;
  v7 = 0;
  v4[0] = (FILE **)&v8;
  v4[1] = (FILE **)&v5;
  v4[2] = (FILE **)&v7;
  v2 = 8;
  v3 = 8;
  sub_14024FD88((__int64)&v6, &v3, v4, &v2);
  result = v7;
  if ( v5 )
    return v8;
  return result;
}

