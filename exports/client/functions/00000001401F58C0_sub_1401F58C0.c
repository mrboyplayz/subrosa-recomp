/* Address: 0x1401f58c0 | Name: sub_1401F58C0 | Size: 212 bytes */
__int64 __fastcall sub_1401F58C0(float a1, int *a2, float a3, __int64 a4, int a5, int a6, BOOL a7)
{
  if ( !a7 && a1 < 0.1 )
    a7 = a3 >= (float)(316.23001 * sub_1401F5870(a4, a5, a6));
  if ( a7 )
  {
    if ( ++*a2 > 10 )
    {
      if ( *a2 <= 30 )
        return 1;
      *a2 = 10;
    }
  }
  else
  {
    *a2 = 0;
  }
  return 0;
}

