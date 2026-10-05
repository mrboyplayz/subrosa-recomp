/* Address: 0x140236138 | Name: sub_140236138 | Size: 70 bytes */
unsigned __int64 __fastcall sub_140236138(_QWORD *a1, unsigned __int16 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax
  bool v4; // zf
  _QWORD *v5; // rdx

  v2 = a2;
  result = a1[2] - 1LL;
  v4 = a1[1] == 0;
  a1[2] = result;
  if ( v4 || result <= a1[1] )
  {
    result = (unsigned int)a2 - 1;
    if ( (unsigned __int16)(a2 - 1) <= 0xFFFDu )
    {
      v5 = (_QWORD *)*a1;
      --v5[1];
      return ungetwc_nolock((unsigned __int16)v2, *v5, v2);
    }
  }
  return result;
}

