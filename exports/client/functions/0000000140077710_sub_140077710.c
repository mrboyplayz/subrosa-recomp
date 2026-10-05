/* Address: 0x140077710 | Name: sub_140077710 | Size: 721 bytes */
__int64 sub_140077710()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  unsigned int *v7; // rax
  __int16 v8; // dx
  __int64 v9; // r8
  __int64 result; // rax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  char *v12; // [rsp+68h] [rbp+10h] BYREF
  char *v13; // [rsp+70h] [rbp+18h] BYREF

  dword_140404A6C[451221605] = unk_140404208();
  dword_140404A6C[451221606] = unk_140404210(35633);
  dword_140404A6C[451221607] = unk_140404210(35632);
  v12 = MEMORY[0x1402B21B0];
  v13 = MEMORY[0x1402B2320];
  unk_1404042D8(dword_140404A6C[451221606], 1, &v12);
  unk_140404200(dword_140404A6C[451221606], v0);
  unk_1404041F0(dword_140404A6C[451221605], dword_140404A6C[451221606], v1);
  unk_1404042D8(dword_140404A6C[451221607], 1, &v13);
  unk_140404200(dword_140404A6C[451221607], v2);
  unk_1404041F0(dword_140404A6C[451221605], dword_140404A6C[451221607], v3);
  unk_1404042D0(dword_140404A6C[451221605]);
  unk_1404042E0(dword_140404A6C[451221605]);
  dword_140404A6C[451221610] = unk_140404288(dword_140404A6C[451221605], "modelviewprojectionmatrix");
  dword_140404A6C[451221618] = unk_140404288(dword_140404A6C[451221605], "tex_color");
  unk_140404308(dword_140404A6C[451221618], 0);
  unk_140404778(1, &dword_140404A6C[451221643]);
  unk_140404180(1, &dword_140404A6C[451221644]);
  unk_140404060(1, &dword_140404A6C[451221642]);
  unk_140404050(3553, dword_140404A6C[451221642]);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9728);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9728);
  v11 = -1;
  v4 = 0;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, _DWORD, int, int, int *))&dword_140404A6C[18215083])(
    3553,
    0,
    6408,
    1,
    1,
    0,
    6408,
    5121,
    &v11);
  unk_140404180(1, &dword_140404A6C[456807039]);
  unk_140404180(1, &dword_140404A6C[456807040]);
  unk_140404768(dword_140404A6C[451221643]);
  unk_140404170(34962, dword_140404A6C[456807039], v5);
  unk_140404190(34962, 2359296, 0, 35040);
  v7 = &dword_140404A6C[456807042];
  do
  {
    v7 += 3;
    v8 = 4 * v4++;
    *((_WORD *)v7 - 8) = v8;
    *((_WORD *)v7 - 5) = v8;
    *((_WORD *)v7 - 7) = v8 + 1;
    *((_WORD *)v7 - 6) = v8 + 2;
    *((_WORD *)v7 - 3) = v8 + 3;
    *((_WORD *)v7 - 4) = v8 + 2;
  }
  while ( v4 < 0x4000 );
  unk_140404170(34963, dword_140404A6C[456807040], v6);
  unk_140404190(34963, 196608, &dword_140404A6C[456807041], 35044);
  result = unk_140404170(34963, 0, v9);
  dword_140404A6C[456217206] = -1;
  return result;
}

