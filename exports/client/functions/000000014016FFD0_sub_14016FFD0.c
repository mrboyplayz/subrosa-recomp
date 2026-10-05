/* Address: 0x14016ffd0 | Name: sub_14016FFD0 | Size: 275 bytes */
__int64 __fastcall sub_14016FFD0(FILE *a1, char *a2, char *a3, int *a4)
{
  unsigned int v8; // r15d
  int v9; // eax
  char *v10; // rax
  __int64 v12; // [rsp+0h] [rbp-100h] BYREF
  _BYTE v13[16]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v15)(); // [rsp+40h] [rbp-C0h]
  FILE *v16; // [rsp+48h] [rbp-B8h]
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+54h] [rbp-ACh]
  char v19; // [rsp+58h] [rbp-A8h] BYREF
  char v20; // [rsp+59h] [rbp-A7h] BYREF
  int v21; // [rsp+D8h] [rbp-28h]
  char *v22; // [rsp+E0h] [rbp-20h]
  char *v23; // [rsp+E8h] [rbp-18h]
  char *v24; // [rsp+F0h] [rbp-10h]
  char *v25; // [rsp+F8h] [rbp-8h]
  __int64 v26; // [rsp+100h] [rbp+0h]

  v8 = ftell(a1);
  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v9 = off_140301820(a1, &v19, 128);
  v21 += (_DWORD)v22 - (_DWORD)v24;
  if ( v9 )
  {
    v22 = &v19;
    v10 = &v19 + v9;
  }
  else
  {
    v17 = 0;
    v22 = &v19;
    v10 = &v20;
    v19 = 0;
  }
  v23 = v10;
  v25 = v10;
  sub_140163E70((__int64)v13, a2, a3, a4);
  MEMORY[0x14020C4A8](a1, v8, 0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v26);
}

