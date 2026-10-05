/* Address: 0x1401f1320 | Name: sub_1401F1320 | Size: 256 bytes */
void *__fastcall sub_1401F1320(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]
  void *v10; // [rsp+48h] [rbp-10h]

  v8 = sub_1401F11D0(a2, a3);
  if ( v8 )
  {
    v10 = (void *)sub_1401A6AA0(v8);
    if ( v10 )
    {
      v9 = sub_1401F1430((_DWORD)v10, a1, a2, a3, a4, a5, a6);
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
      *a7 = -7;
    return nullptr;
  }
}

