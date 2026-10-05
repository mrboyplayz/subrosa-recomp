/* Address: 0x1401705b0 | Name: sub_1401705B0 | Size: 548 bytes */
__int64 __fastcall sub_1401705B0(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8
  int v4; // eax
  char *v5; // rdx
  char *v6; // r8
  const char *v7; // rbx
  int v8; // eax
  char *v9; // r8
  const char *v10; // rbx
  char *v11; // r9
  int v12; // eax
  __int64 v14; // [rsp+0h] [rbp-100h] BYREF
  __int128 v15; // [rsp+30h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+50h] [rbp-B0h]
  unsigned int v19; // [rsp+54h] [rbp-ACh]
  char v20; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[127]; // [rsp+59h] [rbp-A7h] BYREF
  int v22; // [rsp+D8h] [rbp-28h]
  char *v23; // [rsp+E0h] [rbp-20h]
  char *v24; // [rsp+E8h] [rbp-18h]
  char *v25; // [rsp+F0h] [rbp-10h]
  char *v26; // [rsp+F8h] [rbp-8h]
  __int64 v27; // [rsp+100h] [rbp+0h]

  v2 = *a1;
  v17 = a2;
  v3 = *((_QWORD *)a1 + 2);
  v15 = v2;
  v25 = &v20;
  v16 = v3;
  v23 = &v20;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v4 = ((__int64 (__fastcall *)(__int64, char *, __int64))v2)(a2, &v20, 128);
  v5 = &v20;
  v22 += (_DWORD)v23 - (_DWORD)v25;
  v23 = &v20;
  if ( v4 )
  {
    v6 = &v21[v4 - 1];
  }
  else
  {
    v18 = 0;
    v6 = v21;
    v20 = 0;
  }
  v24 = v6;
  v7 = "#?RADIANCE\n";
  v26 = v6;
  while ( 1 )
  {
    if ( v5 >= v6 )
    {
      if ( v18 )
      {
        v8 = ((__int64 (__fastcall *)(__int64, char *, _QWORD))v15)(v17, &v20, v19);
        v22 += (_DWORD)v23 - (_DWORD)v25;
        if ( v8 )
        {
          v6 = &v21[v8 - 1];
          v5 = v21;
          LOBYTE(v8) = v20;
          v24 = v6;
          v23 = v21;
        }
        else
        {
          v6 = v21;
          v18 = 0;
          v5 = v21;
          v24 = v21;
          v23 = v21;
          v20 = 0;
        }
      }
      else
      {
        LOBYTE(v8) = 0;
      }
    }
    else
    {
      LOBYTE(v8) = *v5++;
      v23 = v5;
    }
    if ( (unsigned __int8)v8 != *v7 )
      break;
    if ( !*++v7 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v27);
  }
  v9 = v25;
  v10 = "#?RGBE\n";
  v11 = v26;
  v23 = v25;
  v24 = v26;
  do
  {
    if ( v9 >= v11 )
    {
      if ( v18 )
      {
        v12 = ((__int64 (__fastcall *)(__int64, char *, _QWORD))v15)(v17, &v20, v19);
        v22 += (_DWORD)v23 - (_DWORD)v25;
        if ( v12 )
        {
          v11 = &v21[v12 - 1];
          v9 = v21;
          LOBYTE(v12) = v20;
          v24 = v11;
          v23 = v21;
        }
        else
        {
          v11 = v21;
          v18 = 0;
          v9 = v21;
          v24 = v21;
          v23 = v21;
          v20 = 0;
        }
      }
      else
      {
        LOBYTE(v12) = 0;
      }
    }
    else
    {
      LOBYTE(v12) = *v9++;
      v23 = v9;
    }
    if ( (unsigned __int8)v12 != *v10 )
      break;
    ++v10;
  }
  while ( *v10 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v27);
}

