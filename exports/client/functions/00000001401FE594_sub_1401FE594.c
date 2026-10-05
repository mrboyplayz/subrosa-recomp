/* Address: 0x1401fe594 | Name: sub_1401FE594 | Size: 38 bytes */
__int64 __fastcall sub_1401FE594(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_1401FDF84(a1, *(char **)a2, *(_DWORD *)(a2 + 8));
  return a1;
}

