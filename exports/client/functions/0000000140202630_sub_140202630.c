/* Address: 0x140202630 | Name: sub_140202630 | Size: 53 bytes */
__int64 __fastcall sub_140202630(pairNode *this)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  return result;
}

