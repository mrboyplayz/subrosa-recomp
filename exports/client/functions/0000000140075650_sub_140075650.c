/* Address: 0x140075650 | Name: sub_140075650 | Size: 303 bytes */
__int64 sub_140075650()
{
  unsigned int *v0; // rax
  unsigned int *v1; // rax
  __int64 result; // rax

  v0 = &dword_140404A6C[70087116];
  do
  {
    *(v0 - 3) = 0;
    *v0 = 0;
    v0 += 122;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[70212044] );
  dword_140404A6C[70212041] = 0;
  v1 = &dword_140404A6C[70290891];
  dword_140404A6C[70290890] = 0;
  do
  {
    *v1 = 0;
    v1 += 98;
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[70315979] );
  result = MEMORY[0x1401FCD30](&dword_140404A6C[70317269], 0xFFFFFFFFLL, 2048);
  *(_OWORD *)&dword_140404A6C[70087067] = xmmword_1402797D0;
  dword_140404A6C[70087046] = -1;
  dword_140404A6C[70087071] = 1095761920;
  dword_140404A6C[70087072] = 1082130432;
  *(_OWORD *)&dword_140404A6C[70087091] = xmmword_140279480;
  dword_140404A6C[70087029] = 0;
  *(_OWORD *)&dword_140404A6C[70087095] = xmmword_140279670;
  dword_140404A6C[70087064] = -1;
  *(_OWORD *)&dword_140404A6C[70087099] = xmmword_140279680;
  dword_140404A6C[70087047] = 0;
  dword_140404A6C[70087083] = 1;
  *(_OWORD *)&dword_140404A6C[70087087] = xmmword_140279700;
  dword_140404A6C[70087074] = 0;
  dword_140404A6C[70087103] = -1;
  *(_QWORD *)&dword_140404A6C[70087106] = -1;
  dword_140404A6C[70087111] = -1;
  return result;
}

