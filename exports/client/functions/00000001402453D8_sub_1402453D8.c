/* Address: 0x1402453d8 | Name: sub_1402453D8 | Size: 187 bytes */
__int64 __fastcall sub_1402453D8(unsigned int a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  _BYTE v7[4]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+24h] [rbp-2Ch] BYREF
  unsigned int v9; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+68h] [rbp+18h] BYREF
  int v12; // [rsp+70h] [rbp+20h] BYREF
  char v13; // [rsp+78h] [rbp+28h] BYREF

  v12 = a3;
  v11 = a2;
  if ( !a3 )
  {
    v4 = ((__int64 (__fastcall *)(_QWORD))GetModuleHandleW)(0);
    if ( v4 )
    {
      if ( *(_WORD *)v4 == 23117 )
      {
        v5 = v4 + *(int *)(v4 + 60);
        if ( *(_DWORD *)v5 == 17744
          && *(_WORD *)(v5 + 24) == 523
          && *(_DWORD *)(v5 + 132) > 0xEu
          && *(_DWORD *)(v5 + 248) )
        {
          try_cor_exit_process(a1);
        }
      }
    }
  }
  v13 = 0;
  v10[0] = &v11;
  v10[1] = &v12;
  v10[2] = &v13;
  v8 = 2;
  v9 = 2;
  result = sub_1402451B8((__int64)v7, &v9, (__int64)v10, &v8);
  if ( !v12 )
    exit_or_terminate_process(a1);
  return result;
}

