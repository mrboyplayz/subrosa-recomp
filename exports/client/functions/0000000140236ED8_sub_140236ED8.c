/* Address: 0x140236ed8 | Name: sub_140236ED8 | Size: 118 bytes */
__int64 __fastcall sub_140236ED8(unsigned int a1, __int16 a2, __int64 *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rax
  const unsigned __int16 *v9; // rax

  v3 = (int)a1;
  v4 = 0;
  v6 = a1 + 1;
  if ( a3 )
  {
    v7 = *a3;
    if ( v6 > 0x100 )
    {
      if ( *(int *)(v7 + 8) <= 1 )
        return 0;
      else
        return isctype_l(a1);
    }
    else
    {
      return (unsigned __int16)(a2 & *(_WORD *)(*(_QWORD *)v7 + 2LL * (int)a1));
    }
  }
  else
  {
    v9 = sub_140256DC0();
    if ( v6 <= 0x100 )
      return (unsigned __int16)(a2 & v9[v3]);
    return v4;
  }
}

