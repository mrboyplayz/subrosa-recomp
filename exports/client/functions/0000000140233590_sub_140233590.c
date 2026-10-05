/* Address: 0x140233590 | Name: sub_140233590 | Size: 73 bytes */
unsigned __int64 __fastcall sub_140233590(#107 *this, unsigned int *const a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  int v4; // r10d
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // r8
  unsigned __int64 v8; // rdx

  result = 0;
  v4 = (int)a2;
  v5 = 0;
  if ( (_DWORD)a2 )
  {
    v6 = a3;
    do
    {
      v7 = v5++;
      v8 = (unsigned int)result + v6 * *((unsigned int *)this + v7);
      *((_DWORD *)this + v7) = v8;
      result = HIDWORD(v8);
    }
    while ( v5 != v4 );
  }
  return result;
}

