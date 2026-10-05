/* Address: 0x14007bb00 | Name: sub_14007BB00 | Size: 427 bytes */
unsigned int *sub_14007BB00()
{
  __int64 v0; // r9
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int *result; // rax

  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(770);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2884);
  if ( dword_140404A6C[137297765] )
  {
    v0 = dword_140404A6C[137297762];
    v2 = dword_140404A6C[137297761];
    v1 = dword_140404A6C[137297764];
    v3 = dword_140404A6C[137297763];
  }
  else
  {
    v0 = dword_140404A6C[137297760];
    v1 = 0;
    v2 = dword_140404A6C[137297759];
    v3 = 0;
  }
  qword_140302FE8(v3, v1, v2, v0);
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  v4 = 3592LL * (int)dword_140404A6C[438291413];
  result = &dword_140404A6C[72777085];
  if ( dword_140404A6C[v4 + 72777085] )
    return (unsigned int *)unk_140404050(3553, dword_140404A6C[v4 + 72777086]);
  return result;
}

