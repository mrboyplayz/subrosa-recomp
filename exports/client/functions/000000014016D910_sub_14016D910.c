/* Address: 0x14016d910 | Name: sub_14016D910 | Size: 115 bytes */
__int64 __fastcall sub_14016D910(__int64 a1)
{
  _BYTE *v1; // rbx
  __int64 result; // rax

  v1 = (_BYTE *)(a1 + 56);
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                      *(_QWORD *)(a1 + 40),
                      a1 + 56,
                      *(unsigned int *)(a1 + 52));
  *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 192) = v1;
  if ( (_DWORD)result )
  {
    result = (int)result;
    *(_QWORD *)(a1 + 200) = (int)result + a1 + 56;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 200) = a1 + 57;
    *v1 = 0;
    return a1 + 57;
  }
  return result;
}

