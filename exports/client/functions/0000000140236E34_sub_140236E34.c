/* Address: 0x140236e34 | Name: sub_140236E34 | Size: 97 bytes */
__int64 __fastcall sub_140236E34(int a1, int a2, _QWORD **a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  const unsigned __int16 *v8; // rax

  v3 = a1;
  v4 = 0;
  v6 = a1 + 1;
  if ( a3 )
  {
    if ( v6 <= 0x100 )
    {
      v7 = *(unsigned __int16 *)(**a3 + 2LL * a1);
      return a2 & v7;
    }
  }
  else
  {
    v8 = sub_140256DC0();
    if ( v6 <= 0x100 )
    {
      v7 = v8[v3];
      return a2 & v7;
    }
  }
  return v4;
}

