/* Address: 0x1400e1470 | Name: sub_1400E1470 | Size: 41 bytes */
__int64 __fastcall sub_1400E1470(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 80) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
    *(_DWORD *)(a1 + 80) = 0;
  }
  return result;
}

