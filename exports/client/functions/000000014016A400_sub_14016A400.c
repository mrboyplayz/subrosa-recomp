/* Address: 0x14016a400 | Name: sub_14016A400 | Size: 150 bytes */
__int64 __fastcall sub_14016A400(_DWORD **a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v8; // rcx

  if ( (unsigned int)sub_140167D10(a1, 2, 0) )
  {
    if ( a2 )
      *a2 = **a1;
    if ( a3 )
      *a3 = (*a1)[1];
    if ( a4 )
      *a4 = (*a1)[2];
    return 1;
  }
  else
  {
    v8 = *a1;
    v8[24] = *((_QWORD *)*a1 + 26);
    v8[25] = v8[27];
    return 0;
  }
}

