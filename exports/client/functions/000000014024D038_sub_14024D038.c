/* Address: 0x14024d038 | Name: sub_14024D038 | Size: 37 bytes */
__int64 __fastcall sub_14024D038(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = sub_140255A70();
  result = *(_QWORD *)(v2 + 952);
  *(_QWORD *)(v2 + 952) = a1;
  return result;
}

