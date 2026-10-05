/* Address: 0x140173860 | Name: sub_140173860 | Size: 170 bytes */
__int64 __fastcall sub_140173860(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  void *v7; // rdi
  int v8; // eax
  __int64 v9; // rbx
  int v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  v7 = (void *)sub_140173990(a5, a6, a2, a3, a4, (__int64)&v11);
  if ( !v7 )
    return 0;
  v8 = sub_14020B8E4(&v12, a1, "wb");
  v9 = v12;
  if ( v8 )
    v9 = 0;
  v12 = v9;
  if ( !v9 )
  {
    free(v7);
    return 0;
  }
  sub_14020CE0C(v7, 1, v11, v9);
  sub_14020B9E8(v9);
  free(v7);
  return 1;
}

