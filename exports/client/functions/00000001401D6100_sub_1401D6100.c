/* Address: 0x1401d6100 | Name: sub_1401D6100 | Size: 151 bytes */
__int64 __fastcall sub_1401D6100(__int64 a1, const char *a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  int i; // [rsp+20h] [rbp-38h]
  _WORD v6[16]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-10h]

  CWinApp::ShowAppMessageBox((struct CWinApp *)v6, a2, a3);
  for ( i = 0; i < a3; ++i )
    *(float *)(a1 + 4LL * i) = (float)(__int16)v6[i] * 0.00024414062;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v7);
}

