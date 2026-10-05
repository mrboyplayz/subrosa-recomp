/* Address: 0x1401e0010 | Name: sub_1401E0010 | Size: 796 bytes */
__int64 __fastcall sub_1401E0010(__int64 a1, __int64 a2, int a3, signed int a4, int a5, int a6, int a7)
{
  _DWORD v8[12]; // [rsp+0h] [rbp-148h] BYREF
  int j; // [rsp+30h] [rbp-118h]
  int i; // [rsp+34h] [rbp-114h]
  int k; // [rsp+38h] [rbp-110h]
  int v12; // [rsp+3Ch] [rbp-10Ch]
  int v13; // [rsp+40h] [rbp-108h]
  int v14; // [rsp+44h] [rbp-104h]
  int v15; // [rsp+48h] [rbp-100h]
  int v16; // [rsp+4Ch] [rbp-FCh]
  char *v17; // [rsp+50h] [rbp-F8h]
  float *v18; // [rsp+58h] [rbp-F0h]
  int v19; // [rsp+60h] [rbp-E8h]
  int v20; // [rsp+64h] [rbp-E4h]
  char *v21; // [rsp+68h] [rbp-E0h]
  _DWORD v22[48]; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+130h] [rbp-18h]

  if ( a5 == 4 )
  {
    v17 = (char *)&unk_14027CB98 + 8 * a6;
    v21 = (char *)&unk_14027E2C0;
    v15 = byte_14027BB84[a6];
    v16 = 34;
  }
  else
  {
    v17 = (char *)&unk_14027BB94;
    v21 = (char *)&unk_14027CC28;
    v15 = 12;
    v16 = 12;
  }
  v18 = (float *)(a2 + 16LL * a4);
  for ( i = 0; i < a5; ++i )
  {
    v13 = 0;
    v14 = v17[2 * i];
    v12 = v17[2 * i + 1];
    v8[10] = a7;
    sub_1401A9C80(v18, (__int64)&v18[-a3 - v12], (__int64)v22, a4, v12 - v14 + 1);
    for ( j = v14; j <= v12; ++j )
      v22[v13++ + 24] = v22[v12 - j];
    v19 = v17[2 * i];
    for ( k = 0; k < v15; ++k )
    {
      v20 = v21[k + v16 * i] - v19;
      for ( j = 0; j < 5; ++j )
        *(_DWORD *)(20LL * k + 680LL * i + a1 + 4LL * j) = v22[j + 24 + v20];
    }
    v18 += a4;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v8 ^ v23);
}

