/* Address: 0x1401f7c80 | Name: sub_1401F7C80 | Size: 294 bytes */
__int64 __fastcall sub_1401F7C80(_DWORD *a1, __int64 a2, int a3)
{
  int i; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+24h] [rbp-24h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+2Ch] [rbp-1Ch]
  int *v8; // [rsp+30h] [rbp-18h]

  v6 = 0;
  v8 = (_DWORD *)((char *)a1 + (int)sub_1401E99B0(292));
  sub_1401E0F40(v8, 4029, &v5);
  if ( a1[71] == 2 )
    sub_1401F7B80(a1, a2, a3, v5);
  else
    sub_1401F77C0(a1, a2, a3, v5);
  for ( i = 0; i < a1[1]; ++i )
  {
    if ( *(int *)(a2 + 4LL * i) <= 500 )
      v7 = 500;
    else
      v7 = *(_DWORD *)(a2 + 4LL * i);
    *(_DWORD *)(a2 + 4LL * i) = v7;
    v6 += *(_DWORD *)(a2 + 4LL * i);
  }
  return v6;
}

