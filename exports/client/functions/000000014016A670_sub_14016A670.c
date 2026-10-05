/* Address: 0x14016a670 | Name: sub_14016A670 | Size: 48 bytes */
__int64 __fastcall sub_14016A670(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_14015CE80((__int64)a1, a2);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return result;
}

