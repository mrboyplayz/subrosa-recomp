/* Address: 0x14019afe0 | Name: sub_14019AFE0 | Size: 182 bytes */
__int64 __fastcall sub_14019AFE0(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // [rsp+20h] [rbp-28h]
  unsigned int v5; // [rsp+24h] [rbp-24h]
  unsigned int v6; // [rsp+28h] [rbp-20h]
  unsigned int v7; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v8; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(a1 + 32);
  v6 = *(_DWORD *)(a1 + 36);
  v7 = v4 >> a3;
  v5 = -1;
  do
  {
    v8 = v4;
    v4 = *(unsigned __int8 *)(a2 + (int)++v5) * v7;
  }
  while ( v6 < v4 );
  *(_DWORD *)(a1 + 36) = v6 - v4;
  *(_DWORD *)(a1 + 32) = v8 - v4;
  sub_1401B5EA0(a1);
  return v5;
}

