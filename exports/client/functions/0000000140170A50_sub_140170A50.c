/* Address: 0x140170a50 | Name: sub_140170A50 | Size: 434 bytes */
__int64 __fastcall sub_140170A50(unsigned __int8 *a1, int a2)
{
  unsigned __int64 v2; // rdx
  const char *v3; // rbx
  unsigned __int8 *v4; // r9
  unsigned __int8 v5; // al
  unsigned __int8 *v6; // rdx
  const char *v7; // rbx
  unsigned __int8 v8; // al
  _QWORD v10[9]; // [rsp+0h] [rbp-100h] BYREF
  int v11; // [rsp+50h] [rbp-B0h]
  int v12; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v13; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v14; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v15; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v16; // [rsp+F8h] [rbp-8h]
  __int64 v17; // [rsp+100h] [rbp+0h]

  v11 = 0;
  v2 = (unsigned __int64)&a1[a2];
  v10[6] = 0;
  v16 = v2;
  v3 = "#?RADIANCE\n";
  v14 = v2;
  v4 = a1;
  v12 = 0;
  v15 = a1;
  v13 = a1;
  while ( 1 )
  {
    if ( (unsigned __int64)v4 >= v2 )
    {
      v5 = 0;
    }
    else
    {
      v5 = *v4++;
      v13 = v4;
    }
    if ( v5 != *v3 )
      break;
    if ( !*++v3 )
      return MEMORY[0x1401F8B20]((unsigned __int64)v10 ^ v17);
  }
  v6 = v15;
  v7 = "#?RGBE\n";
  v13 = v15;
  v14 = v16;
  do
  {
    if ( (unsigned __int64)v6 >= v16 )
    {
      v8 = 0;
    }
    else
    {
      v8 = *v6++;
      v13 = v6;
    }
    if ( v8 != *v7 )
      break;
    ++v7;
  }
  while ( *v7 );
  return MEMORY[0x1401F8B20]((unsigned __int64)v10 ^ v17);
}

