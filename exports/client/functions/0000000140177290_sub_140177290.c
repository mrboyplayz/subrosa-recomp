/* Address: 0x140177290 | Name: sub_140177290 | Size: 41 bytes */
__int64 __fastcall sub_140177290(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 80) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    *(_DWORD *)(a1 + 80) = 0;
  }
  return result;
}

