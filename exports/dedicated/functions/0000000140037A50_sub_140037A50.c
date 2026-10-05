/* Address: 0x140037a50 | Name: sub_140037A50 | Size: 23 bytes */
__int64 __fastcall sub_140037A50(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  result = (unsigned int)a2[3];
  a1[3] = result;
  return result;
}

