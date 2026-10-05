/* Address: 0x140177220 | Name: sub_140177220 | Size: 105 bytes */
__int64 __fastcall sub_140177220(__int64 a1, int a2, __int64 a3)
{
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( a2 > 128 )
    sub_14023E640(L"length <= 128", L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 653);
  (*(void (__fastcall **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), &v7, 1);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))a1)(*(_QWORD *)(a1 + 8), a3, (unsigned int)a2);
}

