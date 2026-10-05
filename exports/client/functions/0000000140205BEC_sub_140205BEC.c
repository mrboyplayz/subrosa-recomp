/* Address: 0x140205bec | Name: sub_140205BEC | Size: 70 bytes */
__int64 __fastcall sub_140205BEC(#119 *this)
{
  __int64 result; // rax
  int v3; // ebx

  result = *((unsigned int *)this + 6);
  if ( (int)result < 0 )
  {
    v3 = (***((__int64 (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2));
    result = v3 + (***((unsigned int (__fastcall ****)(_QWORD))this + 1))(*((_QWORD *)this + 1));
    *((_DWORD *)this + 6) = result;
  }
  return result;
}

