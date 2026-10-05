/* Address: 0x140047240 | Name: sub_140047240 | Size: 17 bytes */
__int64 __fastcall sub_140047240(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a1 = *a2;
  a1[1] = a2[1];
  result = (unsigned int)a2[2];
  a1[2] = result;
  return result;
}

