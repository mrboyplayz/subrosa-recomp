/* Address: 0x140198520 | Name: sub_140198520 | Size: 97 bytes */
__int64 __fastcall sub_140198520(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1[2] )
    result = SteamAPI_UnregisterCallResult(a1);
  a1[2] = a2;
  a1[3] = a3;
  a1[4] = a4;
  if ( a2 )
    return SteamAPI_RegisterCallResult(a1, a2);
  return result;
}

