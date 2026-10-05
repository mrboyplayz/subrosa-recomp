/* Address: 0x14022eb44 | Name: sub_14022EB44 | Size: 122 bytes */
char __fastcall sub_14022EB44(__int64 *a1)
{
  char v2; // bl
  __int64 v3; // rdx
  char v4; // cl
  unsigned __int64 v5; // rax
  __int64 *v6; // rdx

  v2 = 0;
  v3 = *a1;
  v4 = *(_BYTE *)a1[1];
  v5 = *(_QWORD *)(v3 + 16) - 1LL;
  *(_QWORD *)(v3 + 16) = v5;
  if ( (!*(_QWORD *)(v3 + 8) || v5 <= *(_QWORD *)(v3 + 8)) && (unsigned __int8)(v4 + 1) > 1u )
  {
    v6 = *(__int64 **)v3;
    if ( v4 != -1 )
    {
      --v6[1];
      sub_14020CE90(v4, *v6);
    }
  }
  *(_BYTE *)a1[1] = 0;
  if ( *(_QWORD *)a1[2] == *(_QWORD *)(*a1 + 16) )
    return 1;
  **(_BYTE **)(*a1 + 24) = 0;
  return v2;
}

