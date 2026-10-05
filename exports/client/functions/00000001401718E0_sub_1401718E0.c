/* Address: 0x1401718e0 | Name: sub_1401718E0 | Size: 248 bytes */
__int64 __fastcall sub_1401718E0(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  int v8; // eax
  char *v9; // rax
  __int64 v11; // [rsp+0h] [rbp-100h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v14)(); // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+64h] [rbp-9Ch]
  char v18; // [rsp+68h] [rbp-98h] BYREF
  char v19; // [rsp+69h] [rbp-97h] BYREF
  int v20; // [rsp+E8h] [rbp-18h]
  char *v21; // [rsp+F0h] [rbp-10h]
  char *v22; // [rsp+F8h] [rbp-8h]
  char *v23; // [rsp+100h] [rbp+0h]
  char *v24; // [rsp+108h] [rbp+8h]
  __int64 v25; // [rsp+110h] [rbp+10h]

  v23 = &v18;
  v13 = *(_OWORD *)&off_140301820;
  v21 = &v18;
  v14 = off_140301830;
  v15 = a1;
  v17 = 128;
  v16 = 1;
  v20 = 0;
  v8 = off_140301820(a1, &v18, 128);
  v20 += (_DWORD)v21 - (_DWORD)v23;
  if ( v8 )
  {
    v21 = &v18;
    v9 = &v18 + v8;
  }
  else
  {
    v16 = 0;
    v21 = &v18;
    v9 = &v19;
    v18 = 0;
  }
  v22 = v9;
  v24 = v9;
  sub_140166D20((__int64)v12, a2, a3, a4, a5);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v11 ^ v25);
}

