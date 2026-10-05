/* Address: 0x14021eec0 | Name: sub_14021EEC0 | Size: 204 bytes */
char __fastcall sub_14021EEC0(__int64 a1)
{
  char result; // al
  char v3; // al
  #115 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 84) = 1;
  v7 = 0;
  result = sub_14021170C(a1, &v7);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v3 = MEMORY[0x140211A94](*(_QWORD *)a1, *(unsigned __int16 *)(a1 + 66), *(unsigned int *)(a1 + 60));
      v4 = *(#115 **)(a1 + 1120);
      if ( v3 )
      {
        if ( !v4 )
          v4 = (#115 *)(a1 + 88);
        *(_WORD *)v4 = v7;
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 8);
        HIBYTE(v7) = 0;
        if ( !v4 )
          v4 = (#115 *)(a1 + 88);
        if ( (int)mbtowc_l(v4, (#49 *)&v7, (char *)*(int *)(*(_QWORD *)v5 + 8LL)) < 0 )
          *(_BYTE *)(a1 + 64) = 1;
      }
      v6 = *(_QWORD *)(a1 + 1120);
      *(_DWORD *)(a1 + 80) = 1;
      if ( !v6 )
        v6 = a1 + 88;
      *(_QWORD *)(a1 + 72) = v6;
    }
    return 1;
  }
  return result;
}

