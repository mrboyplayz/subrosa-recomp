/* Address: 0x140195d20 | Name: sub_140195D20 | Size: 545 bytes */
__int64 __fastcall sub_140195D20(int a1, const char *a2)
{
  __int64 v3; // rdi
  char *v4; // r8
  __int64 v5; // r9
  const char *v6; // rdx
  char *v7; // rdx
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  signed int v12; // eax
  __int64 v13; // rbx
  _BYTE v15[32]; // [rsp+0h] [rbp-8B8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-898h]
  unsigned int v17[4]; // [rsp+30h] [rbp-888h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-878h] BYREF
  int v19; // [rsp+60h] [rbp-858h]
  _BYTE v20[2048]; // [rsp+70h] [rbp-848h] BYREF
  __int64 v21; // [rsp+870h] [rbp-48h]

  v3 = a1;
  v4 = off_1402B2890[a1];
  v5 = (unsigned int)((signed int)dword_140404A6C[179992853] / 3600 / 60 % -12);
  v6 = "\n%s Internal Memo\n%d:%02d AM\n\n";
  if ( !(_DWORD)v5 )
    v5 = 12;
  LODWORD(v16) = (signed int)dword_140404A6C[179992853] / 3600 % 60;
  if ( (int)dword_140404A6C[179992853] >= 2592000 )
    v6 = "\n%s Internal Memo\n%d:%02d PM\n\n";
  sub_140158AB0((__int64)v20, v6, v4, v5, v16);
  v7 = &v15[111];
  while ( *++v7 != 0 )
    ;
  strcpy(v7, a2);
  v18[0] = xmmword_140278D30;
  v18[1] = xmmword_140278D30;
  v19 = 1065353216;
  v9 = *(float *)&dword_140404A6C[5873 * v3 + 283831498];
  v10 = *(float *)&dword_140404A6C[5873 * v3 + 283831499];
  v11 = *(float *)&dword_140404A6C[5873 * v3 + 283831500];
  sub_14007B2A0((__int64)v18, (float *)v18 + 3);
  *(float *)v17 = v9 - (float)(*(float *)v18 * 0.5);
  *(float *)&v17[2] = v11 - (float)(*((float *)v18 + 2) * 0.5);
  *(float *)&v17[1] = v10 - (float)(*((float *)v18 + 1) * 0.5);
  v12 = sub_140054130(34, v17, nullptr, (unsigned int *)v18);
  v13 = v12;
  if ( v12 != -1 )
  {
    sub_1400584B0(v12, (__int64)v20);
    dword_140404A6C[1760 * v13 + 278845900] = 0x10000;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v15 ^ v21);
}

