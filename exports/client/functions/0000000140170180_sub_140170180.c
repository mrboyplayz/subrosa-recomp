/* Address: 0x140170180 | Name: sub_140170180 | Size: 366 bytes */
__int64 __fastcall sub_140170180(__int64 a1)
{
  int v1; // eax
  FILE *v2; // rdi
  unsigned int v3; // esi
  int v4; // eax
  char *v5; // rax
  __int64 v7; // [rsp+0h] [rbp-100h] BYREF
  FILE *Stream; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v11)(); // [rsp+50h] [rbp-B0h]
  FILE *v12; // [rsp+58h] [rbp-A8h]
  int v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+64h] [rbp-9Ch]
  char v15; // [rsp+68h] [rbp-98h] BYREF
  char v16; // [rsp+69h] [rbp-97h] BYREF
  int v17; // [rsp+E8h] [rbp-18h]
  char *v18; // [rsp+F0h] [rbp-10h]
  char *v19; // [rsp+F8h] [rbp-8h]
  char *v20; // [rsp+100h] [rbp+0h]
  char *v21; // [rsp+108h] [rbp+8h]
  __int64 v22; // [rsp+110h] [rbp+10h]

  v1 = sub_14020B8E4(&Stream, a1, "rb");
  v2 = Stream;
  if ( v1 )
    v2 = nullptr;
  Stream = v2;
  if ( v2 )
  {
    v3 = ftell(v2);
    v20 = &v15;
    v10 = *(_OWORD *)&off_140301820;
    v18 = &v15;
    v11 = off_140301830;
    v12 = v2;
    v14 = 128;
    v13 = 1;
    v17 = 0;
    v4 = off_140301820(v2, &v15, 128);
    v17 += (_DWORD)v18 - (_DWORD)v20;
    if ( v4 )
    {
      v18 = &v15;
      v5 = &v15 + v4;
    }
    else
    {
      v13 = 0;
      v18 = &v15;
      v5 = &v16;
      v15 = 0;
    }
    v19 = v5;
    v21 = v5;
    sub_1401643B0((__int64)v9);
    MEMORY[0x14020C4A8](v2, v3, 0);
    sub_14020B9E8(v2);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "can't fopen";
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v22);
}

