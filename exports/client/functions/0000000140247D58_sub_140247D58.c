/* Address: 0x140247d58 | Name: sub_140247D58 | Size: 314 bytes */
__int64 __fastcall sub_140247D58(__int64 a1, unsigned int *a2, _QWORD **a3, unsigned int *a4)
{
  __int64 v6; // rax
  void *v7; // rcx
  char *v8; // r8
  int v9; // edx
  int v10; // eax
  _QWORD *v11; // rax

  sub_140258B64(*a2);
  sub_140248950(**a3, *(_QWORD *)(*a3[1] + 144LL));
  v6 = sub_1402494A8(**a3, *(unsigned int *)a3[3], *a3[4]);
  *a3[2] = v6;
  if ( v6 )
  {
    v7 = (void *)*a3[4];
    if ( v7 )
    {
      v8 = (char *)(&unk_140302588 - (_UNKNOWN *)v7);
      do
      {
        v9 = *(unsigned __int16 *)&v8[(_QWORD)v7];
        v10 = *(unsigned __int16 *)v7 - v9;
        if ( v10 )
          break;
        v7 = (char *)v7 + 2;
      }
      while ( v9 );
      if ( v10 )
        _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065283], 1);
    }
    updatetlocinfoEx_nolock(*a3[1] + 144LL, **a3);
    sub_140262A34(**a3);
    v11 = a3[1];
    if ( (*(_BYTE *)(*v11 + 936LL) & 2) == 0 && (dword_140302B88 & 1) == 0 )
    {
      updatetlocinfoEx_nolock(&dword_140404A6C[19065667], *(_QWORD *)(*v11 + 144LL));
      off_140302B78 = *(_UNKNOWN ***)(*(_QWORD *)&dword_140404A6C[19065667] + 248LL);
      off_140302590 = **(__int16 ***)&dword_140404A6C[19065667];
      dword_14030258C = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19065667] + 8LL);
    }
  }
  else
  {
    sub_140262A34(**a3);
    sub_140262834(**a3);
  }
  return sub_140258BB8(*a4);
}

