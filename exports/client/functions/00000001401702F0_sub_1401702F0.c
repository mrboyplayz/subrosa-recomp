/* Address: 0x1401702f0 | Name: sub_1401702F0 | Size: 210 bytes */
__int64 __fastcall sub_1401702F0(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8
  int v4; // eax
  char *v5; // rax
  __int64 v7; // [rsp+0h] [rbp-100h] BYREF
  _BYTE v8[16]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D0h]
  __int64 v10; // [rsp+40h] [rbp-C0h]
  __int64 v11; // [rsp+48h] [rbp-B8h]
  int v12; // [rsp+50h] [rbp-B0h]
  int v13; // [rsp+54h] [rbp-ACh]
  char v14; // [rsp+58h] [rbp-A8h] BYREF
  char v15; // [rsp+59h] [rbp-A7h] BYREF
  int v16; // [rsp+D8h] [rbp-28h]
  char *v17; // [rsp+E0h] [rbp-20h]
  char *v18; // [rsp+E8h] [rbp-18h]
  char *v19; // [rsp+F0h] [rbp-10h]
  char *v20; // [rsp+F8h] [rbp-8h]
  __int64 v21; // [rsp+100h] [rbp+0h]

  v2 = *a1;
  v11 = a2;
  v3 = *((_QWORD *)a1 + 2);
  v9 = v2;
  v19 = &v14;
  v10 = v3;
  v17 = &v14;
  v13 = 128;
  v12 = 1;
  v16 = 0;
  v4 = ((__int64 (__fastcall *)(__int64, char *, __int64))v2)(a2, &v14, 128);
  v16 += (_DWORD)v17 - (_DWORD)v19;
  if ( v4 )
  {
    v17 = &v14;
    v5 = &v14 + v4;
  }
  else
  {
    v12 = 0;
    v17 = &v14;
    v5 = &v15;
    v14 = 0;
  }
  v18 = v5;
  v20 = v5;
  sub_1401643B0((__int64)v8);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v21);
}

