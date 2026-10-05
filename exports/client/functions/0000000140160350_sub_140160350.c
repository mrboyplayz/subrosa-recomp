/* Address: 0x140160350 | Name: sub_140160350 | Size: 105 bytes */
__int64 __fastcall sub_140160350(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 result; // rax
  int v3; // r8d
  unsigned __int64 v4; // r10
  unsigned __int8 *v5; // rcx
  unsigned __int8 v6; // dl
  int v7; // edx

  v1 = *(_DWORD *)(a1 + 20);
  result = a1;
  v3 = *(_DWORD *)(a1 + 16);
  if ( v1 >= 1 << v3 )
  {
LABEL_8:
    *(_QWORD *)result = *(_QWORD *)(result + 8);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v5 = *(unsigned __int8 **)result;
      if ( *(_QWORD *)result < v4 )
      {
        v6 = *v5;
        *(_QWORD *)result = v5 + 1;
      }
      else
      {
        v6 = 0;
      }
      v7 = v6 << v3;
      v3 += 8;
      v1 |= v7;
      *(_DWORD *)(result + 16) = v3;
      *(_DWORD *)(result + 20) = v1;
      if ( v3 > 24 )
        break;
      if ( v1 >= 1 << v3 )
        goto LABEL_8;
    }
  }
  return result;
}

