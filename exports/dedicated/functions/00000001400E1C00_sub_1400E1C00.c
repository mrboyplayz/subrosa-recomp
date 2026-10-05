/* Address: 0x1400e1c00 | Name: sub_1400E1C00 | Size: 102 bytes */
__int64 __fastcall sub_1400E1C00(__int64 a1, int a2, char a3)
{
  char v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2 + 0x80;
  if ( a2 + 128 > 255 )
    _wassert(L"length+128 <= 255", L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x285u);
  (*(void (__fastcall **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v5, 1);
  return (*(__int64 (__fastcall **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v6, 1);
}

