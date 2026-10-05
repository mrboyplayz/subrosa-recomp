/* Address: 0x140170550 | Name: sub_140170550 | Size: 93 bytes */
__int64 __fastcall sub_140170550(__int64 a1)
{
  int v1; // eax
  FILE *v2; // rdi
  unsigned int v3; // ebx
  FILE *Stream; // [rsp+38h] [rbp+10h] BYREF

  v1 = sub_14020B8E4(&Stream, a1, "rb");
  v2 = Stream;
  if ( v1 )
    v2 = nullptr;
  Stream = v2;
  if ( !v2 )
    return 0;
  v3 = sub_1401707E0(v2);
  sub_14020B9E8(v2);
  return v3;
}

