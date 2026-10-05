/* Address: 0x140212b98 | Name: sub_140212B98 | Size: 145 bytes */
void __fastcall sub_140212B98(_QWORD *a1, char a2, int a3, _DWORD *a4)
{
  unsigned __int16 v5; // r14
  int i; // edi
  int v9; // eax

  if ( a3 > 0 )
  {
    v5 = a2;
    for ( i = 0; i < a3; ++i )
    {
      if ( ((*(_DWORD *)(*a1 + 20LL) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8LL))
        && (unsigned __int16)sub_140256B38(v5, *a1) == 0xFFFF )
      {
        *a4 = -1;
        v9 = -1;
      }
      else
      {
        v9 = ++*a4;
      }
      if ( v9 == -1 )
        break;
    }
  }
}

