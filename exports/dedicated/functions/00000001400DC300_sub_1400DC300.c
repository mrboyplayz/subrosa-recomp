/* Address: 0x1400dc300 | Name: sub_1400DC300 | Size: 182 bytes */
__int64 __fastcall sub_1400DC300(char *FileName, int a2, int a3, int a4, __int64 a5)
{
  errno_t v8; // eax
  FILE *v9; // rcx
  unsigned int v10; // ebx
  FILE *v12; // [rsp+30h] [rbp-78h] BYREF
  size_t (__fastcall *v13)(FILE *, const void *, int); // [rsp+40h] [rbp-68h] BYREF
  FILE *Stream; // [rsp+48h] [rbp-60h]
  __int128 v15; // [rsp+50h] [rbp-58h]
  __int128 v16; // [rsp+60h] [rbp-48h]
  __int128 v17; // [rsp+70h] [rbp-38h]
  __int128 v18; // [rsp+80h] [rbp-28h]
  __int64 v19; // [rsp+90h] [rbp-18h]

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v8 = fopen_s(&v12, FileName, "wb");
  v9 = v12;
  v13 = sub_1400DC090;
  if ( v8 )
    v9 = nullptr;
  Stream = v9;
  if ( !v9 )
    return 0;
  v10 = sub_1400DC3C0((unsigned int)&v13, a2, a3, a4, a5);
  fclose(Stream);
  return v10;
}

