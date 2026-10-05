/* Address: 0x14015b6d0 | Name: sub_14015B6D0 | Size: 175 bytes */
__int64 __fastcall sub_14015B6D0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  _DWORD v9[6]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+3Ch] [rbp-1Ch]

  v11 = 255;
  result = sub_14015C5E0(a1, v9);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  if ( result )
  {
    if ( a2 )
      *a2 = *(_DWORD *)a1;
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 4);
    if ( a4 )
    {
      if ( v9[0] == 24 && v10 == -16777216 )
        *a4 = 3;
      else
        *a4 = (v10 != 0) + 3;
    }
    return 1;
  }
  return result;
}

