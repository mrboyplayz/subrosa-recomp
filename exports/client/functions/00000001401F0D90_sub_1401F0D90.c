/* Address: 0x1401f0d90 | Name: sub_1401F0D90 | Size: 264 bytes */
void *__fastcall sub_1401F0D90(int a1, int a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  int v7; // eax
  int v8; // [rsp+30h] [rbp-18h]
  void *v9; // [rsp+38h] [rbp-10h]

  if ( a2 <= 255 && a2 >= 1 && a4 <= a3 && a3 >= 1 && a4 >= 0 && a3 <= 255 - a4 )
  {
    v7 = sub_1401F0CE0(a3, a4);
    v9 = (void *)sub_1401A6AA0(v7);
    if ( v9 )
    {
      v8 = sub_1401F0EA0((_DWORD)v9, a1, a2, a3, a4, a5);
      if ( a6 )
        *a6 = v8;
      if ( v8 )
      {
        sub_1401A6AC0(v9);
        return nullptr;
      }
      return v9;
    }
    else
    {
      if ( a6 )
        *a6 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a6 )
      *a6 = -1;
    return nullptr;
  }
}

