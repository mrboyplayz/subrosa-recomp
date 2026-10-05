/* Address: 0x140237d10 | Name: ?tzset_from_system_nolock@@YAXXZ | Size: 422 bytes */
unsigned int *tzset_from_system_nolock()
{
  __int64 v0; // rax
  _BYTE **v1; // rbx
  int v2; // ecx
  unsigned int v3; // edx
  int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int *result; // rax
  unsigned int v9; // [rsp+70h] [rbp+28h] BYREF
  int v10; // [rsp+78h] [rbp+30h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+40h] BYREF

  v0 = sub_140237130();
  v9 = 0;
  v1 = (_BYTE **)v0;
  v11 = 0;
  v12 = 0;
  if ( (unsigned int)sub_140237198(&v9) || (unsigned int)sub_140237138(&v11) || (unsigned int)sub_140237168(&v12) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140237EB5LL);
  }
  free_base(*(void **)&dword_140404A6C[19064603]);
  *(_QWORD *)&dword_140404A6C[19064603] = 0;
  if ( (unsigned int)((__int64 (__fastcall *)(unsigned int *))GetTimeZoneInformation)(&dword_140404A6C[19064609]) != -1 )
  {
    v2 = 1;
    dword_140404A6C[19064605] = 1;
    v9 = 60 * dword_140404A6C[19064609];
    if ( HIWORD(dword_140404A6C[19064626]) )
      v9 = 60 * dword_140404A6C[19064609] + 60 * dword_140404A6C[19064630];
    if ( HIWORD(dword_140404A6C[19064647]) && dword_140404A6C[19064651] )
    {
      v3 = 60 * (dword_140404A6C[19064651] - dword_140404A6C[19064630]);
    }
    else
    {
      v3 = 0;
      v2 = 0;
    }
    v11 = v2;
    v12 = v3;
    v4 = sub_140258CA0();
    if ( !(unsigned int)sub_140258A84(
                          v4,
                          0,
                          (unsigned int)&dword_140404A6C[19064610],
                          -1,
                          (unsigned int)*v1,
                          63,
                          0,
                          (__int64)&v10)
      || v10 )
    {
      **v1 = 0;
    }
    else
    {
      (*v1)[63] = 0;
    }
    if ( !(unsigned int)sub_140258A84(
                          v4,
                          0,
                          (unsigned int)&dword_140404A6C[19064631],
                          -1,
                          (unsigned int)v1[1],
                          63,
                          0,
                          (__int64)&v10)
      || v10 )
    {
      *v1[1] = 0;
    }
    else
    {
      v1[1][63] = 0;
    }
  }
  v5 = v9;
  *sub_140237128() = v5;
  v6 = v11;
  *sub_140237118() = v6;
  v7 = v12;
  result = (unsigned int *)sub_140237120();
  *result = v7;
  return result;
}

