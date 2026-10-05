/* Address: 0x140250358 | Name: ?initialize_inherited_file_handles_nolock@@YAXXZ | Size: 237 bytes */
char initialize_inherited_file_handles_nolock()
{
  int v0; // eax
  _BYTE *v1; // rsi
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rdx
  _WORD v8[36]; // [rsp+20h] [rbp-78h] BYREF
  int *v9; // [rsp+68h] [rbp-30h]

  LOBYTE(v0) = ((__int64 (__fastcall *)(_WORD *))GetStartupInfoW)(v8);
  if ( v8[33] )
  {
    LOBYTE(v0) = (_BYTE)v9;
    if ( v9 )
    {
      v1 = v9 + 1;
      v2 = 0x2000;
      v3 = (_QWORD *)((char *)v9 + *v9 + 4);
      if ( *v9 < 0x2000 )
        v2 = (unsigned int)*v9;
      LOBYTE(v0) = sub_140260FC0((unsigned int)v2);
      if ( (int)v2 > (int)dword_140404A6C[19065657] )
        v2 = dword_140404A6C[19065657];
      if ( (_DWORD)v2 )
      {
        v4 = 0;
        do
        {
          if ( *v3 != -1
            && *v3 != -2
            && (*v1 & 1) != 0
            && ((*v1 & 8) != 0 || (v0 = ((__int64 (__fastcall *)(_QWORD))GetFileType)(*v3)) != 0) )
          {
            v5 = *(_QWORD *)&dword_140404A6C[2 * (v4 >> 6) + 19065401];
            v6 = 9 * (v4 & 0x3F);
            *(_QWORD *)(v5 + 8 * v6 + 40) = *v3;
            LOBYTE(v0) = *v1;
            *(_BYTE *)(v5 + 8 * v6 + 56) = *v1;
          }
          ++v4;
          ++v1;
          ++v3;
          --v2;
        }
        while ( v2 );
      }
    }
  }
  return v0;
}

