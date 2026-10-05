/* Address: 0x140258544 | Name: sub_140258544 | Size: 247 bytes */
__int64 __fastcall sub_140258544(unsigned __int64 *a1, _WORD *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rax

  sub_140258B64(11);
  v8 = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_8;
LABEL_7:
    v9 = 1;
    goto LABEL_9;
  }
  if ( !a3 )
    goto LABEL_7;
LABEL_8:
  v9 = 0;
LABEL_9:
  if ( !v9 )
  {
LABEL_2:
    v8 = 22;
    *errno() = 22;
    sub_14024CF6C();
    goto LABEL_19;
  }
  if ( a2 )
    *a2 = 0;
  v10 = sub_1402583B4(a4);
  if ( v10 )
  {
    v11 = -1;
    do
      ++v11;
    while ( *(_WORD *)(v10 + 2 * v11) );
    v12 = v11 + 1;
    *a1 = v12;
    if ( a3 )
    {
      if ( v12 <= a3 )
      {
        if ( (unsigned int)sub_140259444(a2, a3, v10) )
        {
          sub_14024CFBC();
          __debugbreak();
          JUMPOUT(0x14025863BLL);
        }
      }
      else
      {
        v8 = 34;
      }
    }
  }
LABEL_19:
  sub_140258BB8(11);
  return v8;
}

