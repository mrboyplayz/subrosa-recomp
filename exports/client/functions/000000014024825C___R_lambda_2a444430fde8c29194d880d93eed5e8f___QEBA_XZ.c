/* Address: 0x14024825c | Name: ??R_lambda_2a444430fde8c29194d880d93eed5e8f_@@QEBA@XZ | Size: 142 bytes */
void __fastcall _lambda_2a444430fde8c29194d880d93eed5e8f_::operator()(__int64 **a1)
{
  __int64 v2; // rbx
  _QWORD *v3[7]; // [rsp+20h] [rbp-38h] BYREF
  char v4; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+70h] [rbp+18h] BYREF

  v2 = calloc_base(1, 344);
  **a1 = v2;
  free_base(nullptr);
  if ( v2 )
  {
    v3[0] = *a1;
    v3[1] = a1[1];
    v3[2] = a1[2];
    v3[3] = a1[3];
    v3[4] = a1[4];
    v5 = 4;
    v6 = 4;
    sub_140247D58((__int64)&v4, &v6, v3, &v5);
  }
}

