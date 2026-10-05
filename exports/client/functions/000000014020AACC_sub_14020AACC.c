/* Address: 0x14020aacc | Name: sub_14020AACC | Size: 61 bytes */
__int64 __fastcall sub_14020AACC(FH4::UWMap4::iterator *this)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)this;
  v2 = (_QWORD *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  MEMORY[0x14020A9E4](*(FH4::UWMap4 **)this, (unsigned __int8 **)this + 1);
  result = *(unsigned int *)(v1 + 16);
  *v2 = v3 - result;
  return result;
}

