/* Address: 0x1400e7410 | Name: sub_1400E7410 | Size: 370 bytes */
__int64 __fastcall sub_1400E7410(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  int v3; // edx
  unsigned int v4; // ecx
  int v5; // edx
  unsigned int v6; // ecx

  v1 = 46LL * a1;
  v2 = 2LL * a1;
  v3 = dword_140404A6C[v1 + 421784755];
  v4 = dword_140404A6C[4 * a1 + 283827814];
  if ( v3 <= 0 )
    sub_140138590(v4, 0, 10497, 10497, 9729, 9729, 255, 64, 128, 0);
  else
    sub_1400EE0A0(v4, v3, *(_QWORD *)&dword_140404A6C[v1 + 421784757], 1, 10497, 10497, 9729, 9987, 0);
  (*(void (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  v5 = dword_140404A6C[v1 + 421784759];
  v6 = dword_140404A6C[2 * v2 + 283827815];
  if ( v5 <= 0 )
    sub_140138590(v6, 0, 10497, 10497, 9729, 9729, 32, 192, 0, 0);
  else
    sub_1400EE0A0(v6, v5, *(_QWORD *)&dword_140404A6C[v1 + 421784761], 1, 10497, 10497, 9729, 9987, 0);
  return (*(__int64 (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
}

