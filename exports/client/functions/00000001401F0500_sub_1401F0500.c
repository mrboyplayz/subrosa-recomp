/* Address: 0x1401f0500 | Name: sub_1401F0500 | Size: 296 bytes */
void *__fastcall sub_1401F0500(int a1, int a2, int a3, int a4, __int64 a5, int a6, _DWORD *a7)
{
  int v8; // eax
  int v9; // [rsp+40h] [rbp-18h]
  void *v10; // [rsp+48h] [rbp-10h]

  if ( a2 <= 255 && a2 >= 1 && a4 <= a3 && a3 >= 1 && a4 >= 0 && a3 <= 255 - a4 )
  {
    v8 = sub_1401F0320(a3, a4);
    v10 = (void *)sub_1401A6AA0(v8);
    if ( v10 )
    {
      v9 = sub_1401F0780((_DWORD)v10, a1, a2, a3, a4, a5, a6);
      if ( v9 )
      {
        sub_1401A6AC0(v10);
        v10 = nullptr;
      }
      if ( a7 )
        *a7 = v9;
      return v10;
    }
    else
    {
      if ( a7 )
        *a7 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a7 )
      *a7 = -1;
    return nullptr;
  }
}

