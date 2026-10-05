/* Address: 0x140266ee4 | Name: mbrtowc | Size: 96 bytes */
__int64 __fastcall mbrtowc(__int64 a1, #49 *a2, __int64 a3, struct _Mbstatet *a4)
{
  struct _Mbstatet *v4; // rax
  #49 *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = -1;
  v4 = (struct _Mbstatet *)&dword_140404A6C[19065857];
  if ( a4 )
    v4 = a4;
  if ( !a2 )
    a3 = 1;
  v6 = a2;
  if ( !a2 )
    v6 = (#49 *)Parameters;
  _mbrtowc_s_l(&v8, (#49 *)(a1 & -(__int64)(a2 != nullptr)), v6, (const char *)a3, v4, nullptr);
  return v8;
}

