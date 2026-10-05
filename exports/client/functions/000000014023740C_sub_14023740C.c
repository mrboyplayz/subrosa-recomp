/* Address: 0x14023740c | Name: sub_14023740C | Size: 58 bytes */
__int64 __fastcall sub_14023740C(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = sub_1402372E4(&v5, 1);
  v3 = v5;
  if ( v2 != 1 )
    v3 = -1;
  if ( a1 )
    *a1 = v3;
  return v3;
}

