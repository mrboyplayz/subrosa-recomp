/* Address: 0x1402360f4 | Name: sub_1402360F4 | Size: 65 bytes */
unsigned __int64 __fastcall sub_1402360F4(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  bool v3; // zf
  __int64 *v4; // rdx

  result = *(_QWORD *)(a1 + 16) - 1LL;
  v3 = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)(a1 + 16) = result;
  if ( v3 || result <= *(_QWORD *)(a1 + 8) )
  {
    result = (unsigned int)(a2 + 1);
    if ( (unsigned __int8)(a2 + 1) > 1u )
    {
      result = (unsigned int)(char)a2;
      v4 = *(__int64 **)a1;
      if ( (_DWORD)result != -1 )
      {
        --v4[1];
        return sub_14020CE90(result, *v4);
      }
    }
  }
  return result;
}

