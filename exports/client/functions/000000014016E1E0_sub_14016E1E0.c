/* Address: 0x14016e1e0 | Name: sub_14016E1E0 | Size: 104 bytes */
__int64 __fastcall sub_14016E1E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 16) = *(_OWORD *)&off_140301820;
  *(_QWORD *)(a1 + 32) = off_140301830;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 52) = 128;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = a1 + 56;
  *(_QWORD *)(a1 + 192) = a1 + 56;
  sub_14016D910(a1);
  result = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 216) = result;
  return result;
}

