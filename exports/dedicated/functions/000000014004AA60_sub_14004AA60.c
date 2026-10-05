/* Address: 0x14004aa60 | Name: sub_14004AA60 | Size: 11 bytes */
__int64 __fastcall sub_14004AA60(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a1 = *a2;
  result = (unsigned int)a2[1];
  a1[1] = result;
  return result;
}

