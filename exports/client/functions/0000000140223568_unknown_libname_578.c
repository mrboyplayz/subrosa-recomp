/* Address: 0x140223568 | Name: unknown_libname_578 | Size: 155 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_578(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r10

  if ( *(_DWORD *)(a1 + 44) && *(_DWORD *)(a1 + 44) != 7 )
  {
LABEL_3:
    *errno() = 22;
    sub_14024CF6C(v1);
    return 0;
  }
  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v3 = a1 + 1160;
    v4 = 3LL * *(int *)(a1 + 3560);
    if ( a1 != a1 + 24 + 24LL * *(int *)(a1 + 3560) )
    {
      v5 = *(_QWORD *)(a1 + 32);
      while ( 1 )
      {
        *(_QWORD *)(v3 + 8) = v5;
        v6 = v3;
        if ( *(_DWORD *)v3 != 1 && *(_DWORD *)v3 != 2 && (unsigned int)(*(_DWORD *)v3 - 3) > 1 )
          break;
        *(_QWORD *)(a1 + 32) += 8LL;
        v5 = *(_QWORD *)(a1 + 32);
        v3 += 24;
        if ( v6 == a1 + 1160 + 8 * v4 )
          return 1;
      }
      goto LABEL_3;
    }
  }
  return 1;
}

