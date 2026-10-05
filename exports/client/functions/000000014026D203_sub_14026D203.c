/* Address: 0x14026d203 | Name: sub_14026D203 | Size: 120 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall sub_14026D203(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  sub_140207578(*(_QWORD *)(a2 + 56));
  if ( !*(_DWORD *)(a2 + 32) )
  {
    v3 = *(_QWORD *)(a2 + 184);
    if ( *(_DWORD *)v3 == -529697949
      && *(_DWORD *)(v3 + 24) == 4
      && (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2
      && (unsigned int)sub_1401FD260(*(_QWORD *)(v3 + 40)) )
    {
      sub_1401FD18C(v3);
    }
  }
  *(_QWORD *)(sub_1401FD83C() + 32) = *(_QWORD *)(a2 + 192);
  result = sub_1401FD83C();
  *(_QWORD *)(result + 40) = *(_QWORD *)(a2 + 64);
  return result;
}

