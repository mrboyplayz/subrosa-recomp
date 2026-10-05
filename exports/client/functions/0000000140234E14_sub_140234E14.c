/* Address: 0x140234e14 | Name: sub_140234E14 | Size: 204 bytes */
unsigned __int64 __fastcall sub_140234E14(#107 *this, unsigned __int64 a2, unsigned int a3, char a4)
{
  char v4; // r15
  unsigned __int8 v6; // si
  __int64 v8; // r12
  unsigned __int8 v9; // bl
  __int64 v10; // r14
  char v11; // bp
  int v12; // eax

  v4 = a3;
  v6 = (unsigned __int8)this;
  if ( a3 >= 0x40 )
    return 0;
  v8 = a2 & (1LL << a3);
  v9 = 0;
  v10 = a2 & (1LL << ((unsigned __int8)a3 - 1));
  if ( !a4 || (v11 = 0, (((1LL << ((unsigned __int8)a3 - 1)) - 1) & a2) != 0) )
    v11 = 1;
  if ( v10 || v11 )
  {
    v12 = fegetround_0();
    switch ( v12 )
    {
      case 0:
        if ( v10 && (v11 || v8) )
          v9 = 1;
        return (a2 >> v4) + v9;
      case 256:
        goto LABEL_12;
      case 512:
        v6 ^= 1u;
LABEL_12:
        v9 = v6;
        break;
    }
  }
  return (a2 >> v4) + v9;
}

