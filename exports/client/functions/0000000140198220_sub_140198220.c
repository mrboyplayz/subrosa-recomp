/* Address: 0x140198220 | Name: sub_140198220 | Size: 38 bytes */
__int64 __fastcall sub_140198220(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    result = SteamAPI_UnregisterCallResult(a1);
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}

