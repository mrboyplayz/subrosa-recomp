/* Address: 0x14025f0bc | Name: ?setSBUpLow@@YAXPEAU__crt_multibyte_data@@@Z | Size: 483 bytes */
__int64 __fastcall setSBUpLow(struct __crt_multibyte_data *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  char *v4; // rcx
  __int64 v5; // rsi
  unsigned __int8 v6; // al
  unsigned __int8 *v7; // rdx
  unsigned int v8; // r8d
  __int64 i; // rcx
  int v10; // eax
  __int64 v11; // rax
  _BYTE *v12; // rdx
  char v13; // cl
  unsigned int v14; // edx
  __int64 v15; // rcx
  char v16; // al
  __int64 v18; // [rsp+0h] [rbp-100h] BYREF
  int v19[2]; // [rsp+20h] [rbp-E0h]
  char *v20; // [rsp+28h] [rbp-D8h]
  int v21; // [rsp+30h] [rbp-D0h]
  _BYTE CPInfo[32]; // [rsp+50h] [rbp-B0h] BYREF
  char v23[256]; // [rsp+70h] [rbp-90h] BYREF
  char v24[256]; // [rsp+170h] [rbp+70h] BYREF
  char v25[256]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v26[1024]; // [rsp+370h] [rbp+270h] BYREF
  __int64 v27; // [rsp+770h] [rbp+670h]

  v2 = *((unsigned int *)a1 + 1);
  if ( (_DWORD)v2 == 65001 || !(unsigned int)((__int64 (__fastcall *)(__int64, _BYTE *))GetCPInfo)(v2, CPInfo) )
  {
    v14 = 0;
    v15 = 1;
    do
    {
      if ( v14 - 97 + 32 > 0x19 )
      {
        if ( v14 - 97 > 0x19 )
        {
          v16 = 0;
        }
        else
        {
          *((_BYTE *)a1 + v15 + 24) |= 0x20u;
          v16 = v14 - 32;
        }
      }
      else
      {
        *((_BYTE *)a1 + v15 + 24) |= 0x10u;
        v16 = v14 + 32;
      }
      *((_BYTE *)a1 + v15 + 280) = v16;
      ++v14;
      ++v15;
    }
    while ( v14 < 0x100 );
  }
  else
  {
    v3 = 0;
    v4 = v23;
    v5 = 256;
    do
      *v4++ = v3++;
    while ( v3 < 0x100 );
    v6 = CPInfo[6];
    v7 = &CPInfo[6];
    v23[0] = 32;
    while ( v6 )
    {
      v8 = v7[1];
      for ( i = v6; (unsigned int)i <= v8 && (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
        v23[i] = 32;
      v7 += 2;
      v6 = *v7;
    }
    v10 = *((_DWORD *)a1 + 1);
    v21 = 0;
    LODWORD(v20) = v10;
    *(_QWORD *)v19 = v26;
    sub_140262618(0, 1, v23);
    sub_14025A004(nullptr, *((_QWORD *)a1 + 68), 0x100u, (__int64)v23, 256, (__int64)v24, 256, *((_DWORD *)a1 + 1), 0);
    sub_14025A004(nullptr, *((_QWORD *)a1 + 68), 0x200u, (__int64)v23, 256, (__int64)v25, 256, *((_DWORD *)a1 + 1), 0);
    v11 = 1;
    v12 = v26;
    do
    {
      if ( (*v12 & 1) != 0 )
      {
        *((_BYTE *)a1 + v11 + 24) |= 0x10u;
        v13 = v23[v11 + 255];
      }
      else if ( (*v12 & 2) != 0 )
      {
        *((_BYTE *)a1 + v11 + 24) |= 0x20u;
        v13 = v24[v11 + 255];
      }
      else
      {
        v13 = 0;
      }
      *((_BYTE *)a1 + v11 + 280) = v13;
      v12 += 2;
      ++v11;
      --v5;
    }
    while ( v5 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v18 ^ v27);
}

