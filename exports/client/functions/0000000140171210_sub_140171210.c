/* Address: 0x140171210 | Name: sub_140171210 | Size: 289 bytes */
__int64 __fastcall sub_140171210(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  int v9; // eax
  char *v10; // rax
  __int64 v12; // [rsp+0h] [rbp-100h] BYREF
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v15)(); // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  int v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+64h] [rbp-9Ch]
  char v19; // [rsp+68h] [rbp-98h] BYREF
  char v20; // [rsp+69h] [rbp-97h] BYREF
  int v21; // [rsp+E8h] [rbp-18h]
  char *v22; // [rsp+F0h] [rbp-10h]
  char *v23; // [rsp+F8h] [rbp-8h]
  char *v24; // [rsp+100h] [rbp+0h]
  char *v25; // [rsp+108h] [rbp+8h]
  __int64 v26; // [rsp+110h] [rbp+10h]

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
  if ( sub_140166160((int)&v13, a2, a3, a4, a5) )
    MEMORY[0x14020C4A8](a1, (unsigned int)((_DWORD)v22 - (_DWORD)v23), 1);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v26);
}

