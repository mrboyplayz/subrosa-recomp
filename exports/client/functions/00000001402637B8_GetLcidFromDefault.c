/* Address: 0x1402637b8 | Name: GetLcidFromDefault | Size: 33 bytes */
__int64 __fastcall GetLcidFromDefault(_DWORD *a1)
{
  __int64 result; // rax

  *a1 |= 0x104u;
  result = ((__int64 (*)(void))GetUserDefaultLCID)();
  a1[2] = result;
  a1[1] = result;
  return result;
}

