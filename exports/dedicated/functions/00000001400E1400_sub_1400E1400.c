/* Address: 0x1400e1400 | Name: sub_1400E1400 | Size: 106 bytes */
__int64 __fastcall sub_1400E1400(__int64 a1, int a2, __int64 a3)
{
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( a2 > 128 )
    _wassert(L"length <= 128", L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x28Du);
  (*(void (__fastcall **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v7, 1);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))a1)(*(_QWORD *)(a1 + 8), a3, (unsigned int)a2);
}

