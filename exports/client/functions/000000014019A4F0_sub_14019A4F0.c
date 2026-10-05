/* Address: 0x14019a4f0 | Name: sub_14019A4F0 | Size: 225 bytes */
__int64 __fastcall sub_14019A4F0(__int64 a1, int a2, __int64 a3, char a4)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]

  v6 = *(_DWORD *)(a1 + 32) >> a4;
  if ( a2 <= 0 )
  {
    v4 = *(_DWORD *)(a1 + 32) - *(unsigned __int8 *)(a3 + a2) * v6;
  }
  else
  {
    *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 32) - *(unsigned __int8 *)(a3 + a2 - 1) * v6;
    v4 = (*(unsigned __int8 *)(a3 + a2 - 1) - *(unsigned __int8 *)(a3 + a2)) * v6;
  }
  *(_DWORD *)(a1 + 32) = v4;
  return sub_1401B6120(a1);
}

