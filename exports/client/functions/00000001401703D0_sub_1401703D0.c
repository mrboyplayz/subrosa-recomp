/* Address: 0x1401703d0 | Name: sub_1401703D0 | Size: 268 bytes */
__int64 __fastcall sub_1401703D0(FILE *a1)
{
  unsigned int v2; // esi
  int v3; // eax
  char *v4; // rax
  __int64 v6; // [rsp+0h] [rbp-100h] BYREF
  _BYTE v7[16]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v8; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v9)(); // [rsp+40h] [rbp-C0h]
  FILE *v10; // [rsp+48h] [rbp-B8h]
  int v11; // [rsp+50h] [rbp-B0h]
  int v12; // [rsp+54h] [rbp-ACh]
  char v13; // [rsp+58h] [rbp-A8h] BYREF
  char v14; // [rsp+59h] [rbp-A7h] BYREF
  int v15; // [rsp+D8h] [rbp-28h]
  char *v16; // [rsp+E0h] [rbp-20h]
  char *v17; // [rsp+E8h] [rbp-18h]
  char *v18; // [rsp+F0h] [rbp-10h]
  char *v19; // [rsp+F8h] [rbp-8h]
  __int64 v20; // [rsp+100h] [rbp+0h]

  v2 = ftell(a1);
  v18 = &v13;
  v8 = *(_OWORD *)&off_140301820;
  v16 = &v13;
  v9 = off_140301830;
  v10 = a1;
  v12 = 128;
  v11 = 1;
  v15 = 0;
  v3 = off_140301820(a1, &v13, 128);
  v15 += (_DWORD)v16 - (_DWORD)v18;
  if ( v3 )
  {
    v16 = &v13;
    v4 = &v13 + v3;
  }
  else
  {
    v11 = 0;
    v16 = &v13;
    v4 = &v14;
    v13 = 0;
  }
  v17 = v4;
  v19 = v4;
  sub_1401643B0((__int64)v7);
  MEMORY[0x14020C4A8](a1, v2, 0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v20);
}

