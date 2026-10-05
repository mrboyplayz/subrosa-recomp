/* Address: 0x14016fd50 | Name: sub_14016FD50 | Size: 383 bytes */
__int64 __fastcall sub_14016FD50(__int64 a1, char *a2, char *a3, int *a4)
{
  int v7; // eax
  FILE *v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  char *v11; // rax
  __int64 v13; // [rsp+0h] [rbp-100h] BYREF
  FILE *Stream; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v17)(); // [rsp+50h] [rbp-B0h]
  FILE *v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+64h] [rbp-9Ch]
  char v21; // [rsp+68h] [rbp-98h] BYREF
  char v22; // [rsp+69h] [rbp-97h] BYREF
  int v23; // [rsp+E8h] [rbp-18h]
  char *v24; // [rsp+F0h] [rbp-10h]
  char *v25; // [rsp+F8h] [rbp-8h]
  char *v26; // [rsp+100h] [rbp+0h]
  char *v27; // [rsp+108h] [rbp+8h]
  __int64 v28; // [rsp+110h] [rbp+10h]

  v7 = sub_14020B8E4(&Stream, a1, "rb");
  v8 = Stream;
  if ( v7 )
    v8 = nullptr;
  Stream = v8;
  if ( v8 )
  {
    v9 = ftell(v8);
    v26 = &v21;
    v16 = *(_OWORD *)&off_140301820;
    v24 = &v21;
    v17 = off_140301830;
    v18 = v8;
    v20 = 128;
    v19 = 1;
    v23 = 0;
    v10 = off_140301820(v8, &v21, 128);
    v23 += (_DWORD)v24 - (_DWORD)v26;
    if ( v10 )
    {
      v24 = &v21;
      v11 = &v21 + v10;
    }
    else
    {
      v19 = 0;
      v24 = &v21;
      v11 = &v22;
      v21 = 0;
    }
    v25 = v11;
    v27 = v11;
    sub_140163E70((__int64)v15, a2, a3, a4);
    MEMORY[0x14020C4A8](v8, v9, 0);
    sub_14020B9E8(v8);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "can't fopen";
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v28);
}

