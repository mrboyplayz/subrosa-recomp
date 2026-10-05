/* Address: 0x1401707e0 | Name: sub_1401707E0 | Size: 618 bytes */
__int64 __fastcall sub_1401707E0(FILE *a1)
{
  unsigned int v2; // r14d
  int v3; // eax
  char *v4; // rdx
  char *v5; // r8
  const char *v6; // rbx
  int v7; // eax
  char *v8; // r8
  const char *v9; // rbx
  char *v10; // r9
  int v11; // eax
  __int64 v13; // [rsp+0h] [rbp-100h] BYREF
  __int128 v14; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v15)(); // [rsp+40h] [rbp-C0h]
  FILE *v16; // [rsp+48h] [rbp-B8h]
  int v17; // [rsp+50h] [rbp-B0h]
  unsigned int v18; // [rsp+54h] [rbp-ACh]
  char v19; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[127]; // [rsp+59h] [rbp-A7h] BYREF
  int v21; // [rsp+D8h] [rbp-28h]
  char *v22; // [rsp+E0h] [rbp-20h]
  char *v23; // [rsp+E8h] [rbp-18h]
  char *v24; // [rsp+F0h] [rbp-10h]
  char *v25; // [rsp+F8h] [rbp-8h]
  __int64 v26; // [rsp+100h] [rbp+0h]

  v2 = ftell(a1);
  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v3 = off_140301820(a1, &v19, 128);
  v4 = &v19;
  v21 += (_DWORD)v22 - (_DWORD)v24;
  v22 = &v19;
  if ( v3 )
  {
    v5 = &v20[v3 - 1];
  }
  else
  {
    v17 = 0;
    v5 = v20;
    v19 = 0;
  }
  v23 = v5;
  v6 = "#?RADIANCE\n";
  v25 = v5;
  while ( 1 )
  {
    if ( v4 >= v5 )
    {
      if ( v17 )
      {
        v7 = ((__int64 (__fastcall *)(FILE *, char *, _QWORD))v14)(v16, &v19, v18);
        v21 += (_DWORD)v22 - (_DWORD)v24;
        if ( v7 )
        {
          v5 = &v20[v7 - 1];
          v4 = v20;
          LOBYTE(v7) = v19;
          v23 = v5;
          v22 = v20;
        }
        else
        {
          v5 = v20;
          v17 = 0;
          v4 = v20;
          v23 = v20;
          v22 = v20;
          v19 = 0;
        }
      }
      else
      {
        LOBYTE(v7) = 0;
      }
    }
    else
    {
      LOBYTE(v7) = *v4++;
      v22 = v4;
    }
    if ( (unsigned __int8)v7 != *v6 )
      break;
    if ( !*++v6 )
    {
      v22 = v24;
      v23 = v25;
      goto LABEL_26;
    }
  }
  v8 = v24;
  v9 = "#?RGBE\n";
  v10 = v25;
  v22 = v24;
  v23 = v25;
  do
  {
    if ( v8 >= v10 )
    {
      if ( v17 )
      {
        v11 = ((__int64 (__fastcall *)(FILE *, char *, _QWORD))v14)(v16, &v19, v18);
        v21 += (_DWORD)v22 - (_DWORD)v24;
        if ( v11 )
        {
          v10 = &v20[v11 - 1];
          v8 = v20;
          LOBYTE(v11) = v19;
          v23 = v10;
          v22 = v20;
        }
        else
        {
          v10 = v20;
          v17 = 0;
          v8 = v20;
          v23 = v20;
          v22 = v20;
          v19 = 0;
        }
      }
      else
      {
        LOBYTE(v11) = 0;
      }
    }
    else
    {
      LOBYTE(v11) = *v8++;
      v22 = v8;
    }
    if ( (unsigned __int8)v11 != *v9 )
      break;
    ++v9;
  }
  while ( *v9 );
  v22 = v24;
  v23 = v25;
LABEL_26:
  MEMORY[0x14020C4A8](a1, v2, 0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v26);
}

