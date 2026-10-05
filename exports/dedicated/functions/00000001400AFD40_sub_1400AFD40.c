/* Address: 0x1400afd40 | Name: sub_1400AFD40 | Size: 97 bytes */
__int64 __fastcall sub_1400AFD40(int *a1, int a2)
{
  char v3; // di
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  sub_1400AFB00(&v5, a2);
  result = 1;
  if ( (v5 & (1 << (v3 - 1))) == 1 << (v3 - 1) )
    *a1 = v5 | (-1 << v3);
  else
    *a1 = v5;
  return result;
}

