/* Address: 0x14004ac30 | Name: sub_14004AC30 | Size: 15 bytes */
__int64 __fastcall sub_14004AC30(_DWORD *a1, int *a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *a2;
  result = (unsigned int)-a2[1];
  *a1 = result;
  a1[1] = v2;
  return result;
}

