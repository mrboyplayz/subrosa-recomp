/* Address: 0x14024839c | Name: unknown_libname_797 | Size: 285 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_797(_QWORD **a1)
{
  __int64 v2; // rax
  void *v3; // rcx
  char *v4; // r8
  int v5; // edx
  int v6; // eax
  __int64 result; // rax

  sub_140248950(**a1, *(_QWORD *)(*a1[1] + 144LL));
  v2 = sub_1402494A8(**a1, *(unsigned int *)a1[3], *a1[4]);
  *a1[2] = v2;
  if ( v2 )
  {
    v3 = (void *)*a1[4];
    if ( v3 )
    {
      v4 = (char *)(&unk_140302588 - (_UNKNOWN *)v3);
      do
      {
        v5 = *(unsigned __int16 *)&v4[(_QWORD)v3];
        v6 = *(unsigned __int16 *)v3 - v5;
        if ( v6 )
          break;
        v3 = (char *)v3 + 2;
      }
      while ( v5 );
      if ( v6 )
        _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065283], 1);
    }
    updatetlocinfoEx_nolock(*a1[1] + 144LL, **a1);
    sub_140262A34(**a1);
    result = (__int64)a1[1];
    if ( (*(_BYTE *)(*(_QWORD *)result + 936LL) & 2) == 0 && (dword_140302B88 & 1) == 0 )
    {
      updatetlocinfoEx_nolock(&dword_140404A6C[19065667], *(_QWORD *)(*(_QWORD *)result + 144LL));
      off_140302B78 = *(_UNKNOWN ***)(*(_QWORD *)&dword_140404A6C[19065667] + 248LL);
      off_140302590 = **(__int16 ***)&dword_140404A6C[19065667];
      dword_14030258C = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19065667] + 8LL);
      return *(_QWORD *)&dword_140404A6C[19065667];
    }
  }
  else
  {
    sub_140262A34(**a1);
    return sub_140262834(**a1);
  }
  return result;
}

