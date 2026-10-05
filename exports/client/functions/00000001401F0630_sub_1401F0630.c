/* Address: 0x1401f0630 | Name: sub_1401F0630 | Size: 321 bytes */
void *__fastcall sub_1401F0630(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7, _DWORD *a8)
{
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]
  void *v11; // [rsp+48h] [rbp-10h]

  if ( a2 <= 255 && a2 >= 1 )
  {
    v9 = sub_1401F03D0(a2, a3);
    if ( v9 )
    {
      v11 = (void *)sub_1401A6AA0(v9);
      if ( v11 )
      {
        v10 = sub_1401F07E0((_DWORD)v11, a1, a2, a3, a4, a5, a6, a7);
        if ( v10 )
        {
          sub_1401A6AC0(v11);
          v11 = nullptr;
        }
        if ( a8 )
          *a8 = v10;
        return v11;
      }
      else
      {
        if ( a8 )
          *a8 = -7;
        return nullptr;
      }
    }
    else
    {
      if ( a8 )
        *a8 = -5;
      return nullptr;
    }
  }
  else
  {
    if ( a8 )
      *a8 = -1;
    return nullptr;
  }
}

