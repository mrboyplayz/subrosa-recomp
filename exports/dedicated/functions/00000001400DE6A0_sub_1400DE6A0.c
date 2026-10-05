/* Address: 0x1400de6a0 | Name: sub_1400DE6A0 | Size: 203 bytes */
__int64 __fastcall sub_1400DE6A0(char *FileName, int a2, int a3, int a4, __int64 a5)
{
  errno_t v8; // eax
  FILE *v9; // rcx
  unsigned int v10; // ebx
  FILE *Stream; // [rsp+30h] [rbp-A8h] BYREF
  size_t (__fastcall *v13)(FILE *, const void *, int); // [rsp+40h] [rbp-98h] BYREF
  FILE *v14; // [rsp+48h] [rbp-90h]
  __int128 v15; // [rsp+50h] [rbp-88h]
  __int128 v16; // [rsp+60h] [rbp-78h]
  __int128 v17; // [rsp+70h] [rbp-68h]
  __int128 v18; // [rsp+80h] [rbp-58h]
  __int64 v19; // [rsp+90h] [rbp-48h]

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v8 = fopen_s(&Stream, FileName, "wb");
  v9 = Stream;
  v13 = sub_1400DC090;
  if ( v8 )
    v9 = nullptr;
  v14 = v9;
  if ( !v9 )
    return 0;
  v10 = sub_1400DE770((unsigned int)&v13, a2, a3, a4, a5);
  fclose(v14);
  return v10;
}

