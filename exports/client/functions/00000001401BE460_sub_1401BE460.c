/* Address: 0x1401be460 | Name: sub_1401BE460 | Size: 77 bytes */
__int64 __fastcall sub_1401BE460(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-18h]

  v4 = sub_1401BA490(a1);
  *a2 = v4;
  result = sub_1401BE290(a1, 24 - v4) & 0x7F;
  *a3 = result;
  return result;
}

