/* Address: 0x1400afbf0 | Name: sub_1400AFBF0 | Size: 70 bytes */
__int64 __fastcall sub_1400AFBF0(int *a1, int a2)
{
  char v3; // bl
  int v4; // edx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  sub_1400AFB00(&v6, a2);
  v4 = v6;
  if ( v6 == (1 << v3) - 1 )
    v4 = -1;
  *a1 = v4;
  return 1;
}

