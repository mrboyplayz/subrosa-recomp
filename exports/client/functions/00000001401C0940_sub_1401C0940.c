/* Address: 0x1401c0940 | Name: sub_1401C0940 | Size: 269 bytes */
__int64 __fastcall sub_1401C0940(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-18h]

  result = sub_14019A4F0(a1, *(char *)(a2 + 5) + 5 * *(char *)(a2 + 2), (__int64)&unk_1402827C0, 8);
  for ( i = 0; i < 2; ++i )
  {
    sub_14019A4F0(a1, *(char *)(3LL * i + a2), (__int64)&unk_14028215C, 8);
    sub_14019A4F0(a1, *(char *)(3LL * i + a2 + 1), (__int64)&unk_1402823A4, 8);
    result = (unsigned int)(i + 1);
  }
  return result;
}

