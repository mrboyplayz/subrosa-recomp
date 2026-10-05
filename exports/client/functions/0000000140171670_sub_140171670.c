/* Address: 0x140171670 | Name: sub_140171670 | Size: 349 bytes */
__int64 __fastcall sub_140171670(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  __int64 v8; // rdi
  int v9; // eax
  char *v10; // rax
  __int64 v12; // [rsp+0h] [rbp-100h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall *v16)(); // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+74h] [rbp-8Ch]
  char v20; // [rsp+78h] [rbp-88h] BYREF
  char v21; // [rsp+79h] [rbp-87h] BYREF
  int v22; // [rsp+F8h] [rbp-8h]
  char *v23; // [rsp+100h] [rbp+0h]
  char *v24; // [rsp+108h] [rbp+8h]
  char *v25; // [rsp+110h] [rbp+10h]
  char *v26; // [rsp+118h] [rbp+18h]
  __int64 v27; // [rsp+120h] [rbp+20h]

  if ( (unsigned int)sub_14020B8E4(&v13, a1, "rb") || (v8 = v13) == 0 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "can't fopen";
  }
  else
  {
    v22 = 0;
    v25 = &v20;
    v15 = *(_OWORD *)&off_140301820;
    v23 = &v20;
    v16 = off_140301830;
    v17 = v13;
    v19 = 128;
    v18 = 1;
    v9 = off_140301820(v13, &v20, 128);
    v22 += (_DWORD)v23 - (_DWORD)v25;
    if ( v9 )
    {
      v23 = &v20;
      v10 = &v20 + v9;
    }
    else
    {
      v18 = 0;
      v23 = &v20;
      v10 = &v21;
      v20 = 0;
    }
    v24 = v10;
    v26 = v10;
    sub_140166D20((__int64)v14, a2, a3, a4, a5);
    sub_14020B9E8(v8);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v27);
}

