/* Address: 0x14025ef84 | Name: ?getSystemCP@@YAHH@Z | Size: 125 bytes */
__int64 __fastcall getSystemCP(unsigned int a1)
{
  unsigned int v2; // eax
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v4, nullptr);
  dword_140404A6C[19065831] = 0;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_140404A6C[19065831] = 1;
      v2 = ((__int64 (*)(void))GetOEMCP)();
LABEL_5:
      a1 = v2;
      break;
    case 0xFFFFFFFD:
      dword_140404A6C[19065831] = 1;
      v2 = ((__int64 (*)(void))GetACP)();
      goto LABEL_5;
    case 0xFFFFFFFC:
      dword_140404A6C[19065831] = 1;
      a1 = *(_DWORD *)(v4[1] + 12LL);
      break;
  }
  if ( v5 )
    *(_DWORD *)(v4[0] + 936LL) &= ~2u;
  return a1;
}

