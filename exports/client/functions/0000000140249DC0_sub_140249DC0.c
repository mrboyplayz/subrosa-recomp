/* Address: 0x140249dc0 | Name: sub_140249DC0 | Size: 266 bytes */
char __fastcall sub_140249DC0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  unsigned __int16 v6; // si
  const unsigned __int16 *v7; // rax

  if ( *((_DWORD *)a2 + 4) )
    return 0;
  if ( a2[1] != 2 || !(unsigned __int8)sub_140249F5C(*a2) )
  {
    if ( a2[1] == 3 )
    {
      v4 = *a2;
      v5 = 0;
      while ( 1 )
      {
        v6 = *(_WORD *)(v4 + 2 * v5);
        v7 = sub_140256DC0();
        if ( !(v6 > 0xFFu ? 0 : v7[v6] & 4) )
          break;
        if ( (unsigned __int64)++v5 >= 3 )
          goto LABEL_11;
      }
    }
    return 0;
  }
LABEL_11:
  if ( (unsigned int)sub_140260D80(a1 + 128, 64, *a2, a2[1])
    || (unsigned int)sub_14025AE2C(a1 + 288, 85, L"-", 1)
    || (unsigned int)sub_14025AE2C(a1 + 288, 85, *a2, a2[1]) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140249EC9LL);
  }
  return 1;
}

