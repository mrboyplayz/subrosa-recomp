/* Address: 0x14024ffb4 | Name: ??R_lambda_ab61a845afdef5b7c387490eaf3616ee_@@QEBA@XZ | Size: 174 bytes */
char __fastcall _lambda_ab61a845afdef5b7c387490eaf3616ee_::operator()(FILE ***a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  FILE **v5; // rdx
  unsigned int v6; // ecx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  FILE **v9[5]; // [rsp+28h] [rbp-28h] BYREF
  char v10; // [rsp+78h] [rbp+28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v1 = *(__int64 **)&dword_140404A6C[19064593];
  LOBYTE(v3) = dword_140404A6C[19064591];
  v4 = *(_QWORD *)&dword_140404A6C[19064593] + 8LL * (int)dword_140404A6C[19064591];
  while ( v1 != (__int64 *)v4 )
  {
    v3 = *v1;
    v5 = *a1;
    v11 = v3;
    if ( v3 )
    {
      v6 = *(_DWORD *)(v3 + 20);
      LODWORD(v3) = v6 >> 13;
      if ( (v6 & 0x2000) != 0 )
      {
        LOBYTE(v3) = v6 & 3;
        if ( (v6 & 3) == 2 && (v6 & 0xC0) != 0 || (v6 & 0x800) != 0 )
        {
          v9[0] = (FILE **)&v11;
          v9[1] = *a1;
          v9[2] = a1[1];
          v9[3] = a1[2];
          v12 = v11;
          v8 = v11;
          LOBYTE(v3) = sub_14024FCEC((__int64)&v10, &v8, v9, &v12);
        }
        else
        {
          ++*(_DWORD *)v5;
        }
      }
    }
    ++v1;
  }
  return v3;
}

