/* Address: 0x140170f50 | Name: sub_140170F50 | Size: 265 bytes */
__int64 __fastcall sub_140170F50(__int128 *a1, __int64 a2, _DWORD *a3, _DWORD *a4, int *a5, int a6)
{
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  int v10; // eax
  char *v11; // rax
  __int64 v13; // [rsp+0h] [rbp-100h] BYREF
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h]
  __int64 v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+64h] [rbp-9Ch]
  char v20; // [rsp+68h] [rbp-98h] BYREF
  char v21; // [rsp+69h] [rbp-97h] BYREF
  int v22; // [rsp+E8h] [rbp-18h]
  char *v23; // [rsp+F0h] [rbp-10h]
  char *v24; // [rsp+F8h] [rbp-8h]
  char *v25; // [rsp+100h] [rbp+0h]
  char *v26; // [rsp+108h] [rbp+8h]
  __int64 v27; // [rsp+110h] [rbp+10h]

  v6 = *a1;
  v7 = *((_QWORD *)a1 + 2);
  v25 = &v20;
  v17 = a2;
  v23 = &v20;
  v15 = v6;
  v16 = v7;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v10 = ((__int64 (__fastcall *)(__int64, char *, __int64))v6)(a2, &v20, 128);
  v22 += (_DWORD)v23 - (_DWORD)v25;
  if ( v10 )
  {
    v23 = &v20;
    v11 = &v20 + v10;
  }
  else
  {
    v18 = 0;
    v23 = &v20;
    v11 = &v21;
    v20 = 0;
  }
  v24 = v11;
  v26 = v11;
  sub_140165FD0((int)&v14, a3, a4, a5, a6);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v27);
}

