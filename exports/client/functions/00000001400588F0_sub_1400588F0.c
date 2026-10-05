/* Address: 0x1400588f0 | Name: sub_1400588F0 | Size: 168 bytes */
__int64 __fastcall sub_1400588F0(unsigned int a1, char *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r11
  char *v7; // rax
  char v8; // cl
  __int64 v9; // rax
  unsigned int v10; // eax

  v4 = dword_140404A6C[346706173];
  v5 = 38LL * (int)dword_140404A6C[346706173];
  v7 = a2;
  dword_140404A6C[v5 + 346696445] = a1;
  do
  {
    v8 = *v7;
    v7[(_QWORD)&dword_140404A6C[346696445] + v5 * 4 - (_QWORD)a2 + 24] = *v7;
    ++v7;
  }
  while ( v8 );
  v9 = -1;
  do
    ++v9;
  while ( a2[v9] );
  dword_140404A6C[v5 + 346696448] = v9;
  v10 = 600;
  if ( (a1 & 0xFFFFFFFB) != 0 )
    v10 = 480;
  dword_140404A6C[v5 + 346696447] = v10;
  dword_140404A6C[v5 + 346696449] = a3;
  dword_140404A6C[v5 + 346696450] = a4;
  dword_140404A6C[346706173] = (unsigned __int8)(v4 + 1);
  return v4 + 1;
}

