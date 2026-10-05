/* Address: 0x14026d2aa | Name: sub_14026D2AA | Size: 131 bytes */
__int64 __fastcall sub_14026D2AA(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  sub_140207578(*(_QWORD *)(a2 + 72));
  if ( !*(_DWORD *)(a2 + 32) )
  {
    v3 = *(_QWORD *)(a2 + 248);
    if ( *(_DWORD *)v3 == -529697949
      && *(_DWORD *)(v3 + 24) == 4
      && (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2
      && (unsigned int)sub_1401FD260(*(_QWORD *)(v3 + 40)) )
    {
      sub_1401FD18C(v3);
    }
  }
  *(_QWORD *)(sub_1401FD83C() + 32) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(sub_1401FD83C() + 40) = *(_QWORD *)(a2 + 56);
  result = sub_1401FD83C();
  *(_DWORD *)(result + 120) = *(_DWORD *)(a2 + 224);
  return result;
}

