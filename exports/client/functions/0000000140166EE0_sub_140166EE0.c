/* Address: 0x140166ee0 | Name: sub_140166EE0 | Size: 117 bytes */
_BOOL8 __fastcall sub_140166EE0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ecx
  _BOOL8 result; // rax

  result = false;
  if ( a1 >= 0 && a2 >= 0 && (!a2 || a1 <= (int)(0x7FFFFFFFu / a2)) )
  {
    v5 = a2 * a1;
    if ( v5 >= 0 && a3 >= 0 && (!a3 || v5 <= (int)(0x7FFFFFFFu / a3)) )
    {
      v6 = a3 * v5;
      if ( v6 >= 0 && a4 >= 0 && (!a4 || v6 <= (int)(0x7FFFFFFFu / a4)) && a5 >= 0 && a4 * v6 <= 0x7FFFFFFF - a5 )
        return true;
    }
  }
  return result;
}

