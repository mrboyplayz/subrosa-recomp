/* Address: 0x140265aec | Name: sub_140265AEC | Size: 657 bytes */
__int64 __fastcall sub_140265AEC(unsigned int a1, __int64 a2, int a3, _BYTE *a4)
{
  int v5; // ebx
  int v7; // edi
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // edi
  unsigned int v13; // eax
  int nolock; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  *a4 = 0;
  v7 = a3;
  if ( *(char *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)a1 >> 6) + 19065401] + 72LL * (a1 & 0x3F) + 56) >= 0 )
    return 0;
  if ( (a3 & 0x74000) == 0 )
  {
    v20 = 0;
    if ( (unsigned int)sub_140247AA8(&v20) )
    {
      sub_14024CFBC();
      JUMPOUT(0x140265D7CLL);
    }
    if ( (v20 & 0x74000) != 0 )
      v7 |= v20 & 0x74000;
    else
      v7 |= 0x4000u;
  }
  v9 = v7 & 0x74000;
  if ( (v7 & 0x74000) == 0x4000 )
  {
    *a4 = 0;
    goto LABEL_15;
  }
  if ( ((v9 - 0x10000) & 0xFFFFBFFF) == 0 )
  {
    if ( (v7 & 0x301) != 0x301 )
      goto LABEL_15;
LABEL_13:
    *a4 = 2;
    goto LABEL_15;
  }
  if ( ((v9 - 0x20000) & 0xFFFFBFFF) == 0 )
    goto LABEL_13;
  if ( ((v9 - 0x40000) & 0xFFFFBFFF) == 0 )
    *a4 = 1;
LABEL_15:
  if ( (v7 & 0x70000) == 0 || (*(_BYTE *)a2 & 0x40) != 0 )
    return 0;
  v10 = *(_DWORD *)(a2 + 4) & 0xC0000000;
  v11 = 0;
  v12 = 0;
  if ( v10 != 0x40000000 )
  {
    if ( v10 == 0x80000000 )
      goto LABEL_26;
    if ( v10 != -1073741824 )
      return 0;
  }
  v13 = *(_DWORD *)(a2 + 8);
  if ( !v13 )
    return 0;
  if ( v13 <= 2 )
    goto LABEL_24;
  if ( v13 > 4 )
  {
    if ( v13 != 5 )
      return 0;
LABEL_24:
    v12 = 1;
LABEL_25:
    if ( !v11 )
      goto LABEL_44;
LABEL_26:
    v20 = 0;
    nolock = read_nolock(a1, (__int16 *)&v20, 3u);
    if ( nolock > 0 && v12 == 1 )
      v12 = 0;
    if ( nolock == -1 )
      return (unsigned int)*errno();
    if ( nolock != 2 )
    {
      if ( nolock != 3 )
        goto LABEL_43;
      if ( v20 == 12565487 )
      {
        *a4 = 1;
        goto LABEL_44;
      }
    }
    if ( (unsigned __int16)v20 == 65534 )
    {
      *errno() = 22;
      return (unsigned int)*errno();
    }
    if ( (unsigned __int16)v20 == 65279 )
    {
      if ( lseeki64_nolock(a1, 2, 0) == -1 )
        return (unsigned int)*errno();
      *a4 = 2;
LABEL_44:
      if ( !v12 )
        return 0;
      goto LABEL_45;
    }
LABEL_43:
    if ( lseeki64_nolock(a1, 0, 0) == -1 )
      return (unsigned int)*errno();
    goto LABEL_44;
  }
  if ( lseeki64_nolock(a1, 0, 2) )
  {
    if ( lseeki64_nolock(a1, 0, 0) == -1 )
      return (unsigned int)*errno();
    v11 = *(_DWORD *)(a2 + 4) >> 31;
    goto LABEL_25;
  }
LABEL_45:
  v16 = (char)*a4;
  v17 = 0;
  v20 = 0;
  v18 = v16 - 1;
  if ( v18 )
  {
    if ( v18 == 1 )
    {
      v20 = 65279;
      v17 = 2;
      goto LABEL_50;
    }
  }
  else
  {
    v20 = 12565487;
    v17 = 3;
  }
  if ( v17 )
  {
LABEL_50:
    while ( 1 )
    {
      v19 = write(a1, (char *)&v20 + v5, v17 - v5);
      if ( v19 == -1 )
        break;
      v5 += v19;
      if ( v17 <= v5 )
        return 0;
    }
    return (unsigned int)*errno();
  }
  return 0;
}

