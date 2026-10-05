/* Address: 0x14020ca24 | Name: sub_14020CA24 | Size: 132 bytes */
__int64 __fastcall MEMORY[0x14020CA24](_WORD *a1, unsigned __int64 a2, char a3)
{
  _WORD *v3; // r9
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  _BYTE *v12; // r10
  __int64 v13; // rcx

  v3 = a1;
  if ( (unsigned __int8)(a3 - 1) > 1u )
  {
    v10 = 0;
    v11 = a2 - (_QWORD)a1;
    v12 = a1;
    if ( (unsigned __int64)a1 > a2 )
      v11 = 0;
    if ( v11 )
    {
      do
      {
        v13 = v10 + 1;
        if ( *v12 != 10 )
          v13 = v10;
        ++v12;
        v10 = v13;
      }
      while ( v12 - (_BYTE *)v3 != v11 );
    }
    return v10;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = (a2 - (unsigned __int64)a1 + 1) >> 1;
    if ( (unsigned __int64)v3 > a2 )
      v6 = 0;
    if ( v6 )
    {
      do
      {
        v7 = *v3 == 10;
        v8 = v4 + 1;
        ++v3;
        if ( !v7 )
          v8 = v4;
        ++v5;
        v4 = v8;
      }
      while ( v5 != v6 );
    }
    return 2 * v4;
  }
}

