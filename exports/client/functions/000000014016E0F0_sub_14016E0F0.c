/* Address: 0x14016e0f0 | Name: sub_14016E0F0 | Size: 83 bytes */
__int64 __fastcall sub_14016E0F0(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a2 )
  {
    if ( a2 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v4 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v4 < a2) )
      {
        v5 = (unsigned int)(a2 - v4);
        v6 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 24))(v6, v5);
      }
      else
      {
        *(_QWORD *)(a1 + 192) += a2;
        return a2;
      }
    }
    else
    {
      result = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 192) = result;
    }
  }
  return result;
}

