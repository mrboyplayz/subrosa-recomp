/* Address: 0x1400ed4a0 | Name: sub_1400ED4A0 | Size: 545 bytes */
__int64 __fastcall sub_1400ED4A0(int a1, const char *a2)
{
  __int64 v3; // rdi
  char *v4; // r8
  __int64 v5; // r9
  char *v6; // rdx
  __int64 v7; // r8
  char *v8; // rdx
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // [rsp+0h] [rbp-8B8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-898h]
  int v17[4]; // [rsp+30h] [rbp-888h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-878h] BYREF
  int v19; // [rsp+60h] [rbp-858h]
  char Buffer[2048]; // [rsp+70h] [rbp-848h] BYREF

  v3 = a1;
  v4 = off_140146AB0[a1];
  v5 = (unsigned int)(dword_178C5B8E0 / 3600 / 60 % -12);
  v6 = "\n%s Internal Memo\n%d:%02d AM\n\n";
  if ( !(_DWORD)v5 )
    v5 = 12;
  LODWORD(v16) = dword_178C5B8E0 / 3600 % 60;
  if ( dword_178C5B8E0 >= 2592000 )
    v6 = "\n%s Internal Memo\n%d:%02d PM\n\n";
  sub_1400DBB30(Buffer, v6, v4, v5, v16);
  v8 = (char *)&v15 + 111;
  while ( *++v8 != 0 )
    ;
  strcpy(v8, a2);
  v18[0] = xmmword_1400F78B0;
  v18[1] = xmmword_1400F78B0;
  v19 = 1065353216;
  v10 = *((float *)&unk_191541474 + 5873 * v3);
  v11 = *((float *)&unk_191541478 + 5873 * v3);
  v12 = *((float *)&unk_19154147C + 5873 * v3);
  sub_140049C20((__int64)v18, (float *)v18 + 3, v7);
  *(float *)v17 = v10 - (float)(*(float *)v18 * 0.5);
  *(float *)&v17[2] = v12 - (float)(*((float *)v18 + 2) * 0.5);
  *(float *)&v17[1] = v11 - (float)(*((float *)v18 + 1) * 0.5);
  result = sub_14003B080(34, v17, nullptr, (int *)v18);
  v14 = (int)result;
  if ( (_DWORD)result != -1 )
  {
    result = (__int64)sub_14003E1A0(result, Buffer);
    dword_19025F0DC[1760 * v14] = 0x10000;
  }
  return result;
}

