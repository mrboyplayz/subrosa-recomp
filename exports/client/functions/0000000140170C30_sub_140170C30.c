/* Address: 0x140170c30 | Name: sub_140170C30 | Size: 385 bytes */
__int64 __fastcall sub_140170C30(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  char *v11; // rax
  __int64 v13; // [rsp+0h] [rbp-100h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall *v17)(); // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+74h] [rbp-8Ch]
  char v21; // [rsp+78h] [rbp-88h] BYREF
  char v22; // [rsp+79h] [rbp-87h] BYREF
  int v23; // [rsp+F8h] [rbp-8h]
  char *v24; // [rsp+100h] [rbp+0h]
  char *v25; // [rsp+108h] [rbp+8h]
  char *v26; // [rsp+110h] [rbp+10h]
  char *v27; // [rsp+118h] [rbp+18h]
  __int64 v28; // [rsp+120h] [rbp+20h]

  v8 = sub_14020B8E4(&v14, a1, "rb");
  v9 = v14;
  if ( v8 )
    v9 = 0;
  v14 = v9;
  if ( v9 )
  {
    v26 = &v21;
    v16 = *(_OWORD *)&off_140301820;
    v24 = &v21;
    v17 = off_140301830;
    v18 = v9;
    v20 = 128;
    v19 = 1;
    v23 = 0;
    v10 = off_140301820(v9, &v21, 128);
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
    if ( sub_140166160((int)&v15, a2, a3, a4, a5) )
      MEMORY[0x14020C4A8](v9, (unsigned int)((_DWORD)v24 - (_DWORD)v25), 1);
    sub_14020B9E8(v9);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "can't fopen";
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v28);
}

