/* Address: 0x1401670a0 | Name: sub_1401670A0 | Size: 275 bytes */
__int64 __fastcall sub_1401670A0(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  int v5; // ecx
  _BYTE *v6; // r8
  _BYTE *v7; // rdx
  int v8; // r9d
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // ecx

  v2 = a2;
  if ( *(__int16 *)(a1 + 4LL * a2 + 2100) >= 0 )
    result = sub_1401670A0();
  v5 = *(_DWORD *)(a1 + 34912);
  if ( v5 < *(_DWORD *)(a1 + 34904) )
  {
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + v5 + *(_DWORD *)(a1 + 34908));
    *(_BYTE *)((v5 + *(_DWORD *)(a1 + 34908)) / 4 + *(_QWORD *)(a1 + 24)) = 1;
    v7 = (_BYTE *)(*(_QWORD *)(a1 + 34872) + 4LL * *(unsigned __int8 *)(a1 + 4 * v2 + 2103));
    if ( v7[3] > 0x80u )
    {
      *v6 = v7[2];
      v6[1] = v7[1];
      v6[2] = *v7;
      v6[3] = v7[3];
    }
    *(_DWORD *)(a1 + 34908) += 4;
    result = *(unsigned int *)(a1 + 34908);
    if ( (int)result >= *(_DWORD *)(a1 + 34900) )
    {
      v8 = *(_DWORD *)(a1 + 34904);
      *(_DWORD *)(a1 + 34908) = *(_DWORD *)(a1 + 34892);
      result = *(unsigned int *)(a1 + 34884);
      *(_DWORD *)(a1 + 34912) += result;
      if ( *(_DWORD *)(a1 + 34912) >= v8 )
      {
        v9 = *(_DWORD *)(a1 + 34880);
        do
        {
          if ( v9 <= 0 )
            break;
          v10 = *(_DWORD *)(a1 + 34916) << v9;
          v11 = *(_DWORD *)(a1 + 34896);
          *(_DWORD *)(a1 + 34884) = v10;
          v12 = (v10 >> 1) + v11;
          --v9;
          *(_DWORD *)(a1 + 34912) = v12;
          *(_DWORD *)(a1 + 34880) = v9;
        }
        while ( v12 >= v8 );
      }
    }
  }
  return result;
}

