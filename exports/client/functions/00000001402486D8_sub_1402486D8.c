/* Address: 0x1402486d8 | Name: sub_1402486D8 | Size: 162 bytes */
__int64 __fastcall sub_1402486D8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned int)sub_140259444(a1, a2, a3) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140248779LL);
  }
  if ( *(_WORD *)(a3 + 128) )
    sub_1402491B0(a1, a2, 2, L"_", a3 + 128);
  result = a3 + 256;
  if ( *(_WORD *)(a3 + 256) )
    return sub_1402491B0(a1, a2, 2, L".", a3 + 256);
  return result;
}

