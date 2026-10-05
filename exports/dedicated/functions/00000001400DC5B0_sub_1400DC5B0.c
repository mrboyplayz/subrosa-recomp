/* Address: 0x1400dc5b0 | Name: sub_1400DC5B0 | Size: 193 bytes */
__int64 __fastcall sub_1400DC5B0(char *FileName, int a2, int a3, int a4, __int64 a5, int a6)
{
  errno_t v9; // eax
  FILE *v10; // rcx
  unsigned int v11; // ebx
  FILE *v13; // [rsp+30h] [rbp-78h] BYREF
  size_t (__fastcall *v14)(FILE *, const void *, int); // [rsp+40h] [rbp-68h] BYREF
  FILE *Stream; // [rsp+48h] [rbp-60h]
  __int128 v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+60h] [rbp-48h]
  __int128 v18; // [rsp+70h] [rbp-38h]
  __int128 v19; // [rsp+80h] [rbp-28h]
  __int64 v20; // [rsp+90h] [rbp-18h]

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v19 = 0;
  v9 = fopen_s(&v13, FileName, "wb");
  v10 = v13;
  v14 = sub_1400DC090;
  if ( v9 )
    v10 = nullptr;
  Stream = v10;
  if ( !v10 )
    return 0;
  v11 = sub_1400DC680((unsigned int)&v14, a2, a3, a4, a5, a6);
  fclose(Stream);
  return v11;
}

