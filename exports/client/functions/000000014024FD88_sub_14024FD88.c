/* Address: 0x14024fd88 | Name: sub_14024FD88 | Size: 224 bytes */
__int64 __fastcall sub_14024FD88(__int64 a1, unsigned int *a2, FILE ***a3, unsigned int *a4)
{
  __int64 *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // ecx
  FILE **v10; // rdx
  FILE **v11; // rcx
  FILE **v12; // rax
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  FILE **v17[7]; // [rsp+40h] [rbp-38h] BYREF
  char v18; // [rsp+88h] [rbp+10h] BYREF
  unsigned int *v19; // [rsp+98h] [rbp+20h]

  v19 = a4;
  sub_140258B64(*a2);
  v6 = *(__int64 **)&dword_140404A6C[19064593];
  v7 = *(_QWORD *)&dword_140404A6C[19064593] + 8LL * (int)dword_140404A6C[19064591];
  while ( 1 )
  {
    v16[1] = v6;
    if ( v6 == (__int64 *)v7 )
      break;
    v8 = *v6;
    v14 = v8;
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 20);
      if ( (v9 & 0x2000) != 0 )
      {
        if ( (v9 & 3) == 2 && (v9 & 0xC0) != 0 || (v9 & 0x800) != 0 )
        {
          v10 = a3[2];
          v11 = a3[1];
          v12 = *a3;
          v17[0] = (FILE **)&v14;
          v17[1] = v12;
          v17[2] = v11;
          v17[3] = v10;
          v15 = v14;
          v16[0] = v14;
          sub_14024FCEC((__int64)&v18, v16, v17, &v15);
        }
        else
        {
          ++*(_DWORD *)*a3;
        }
      }
    }
    ++v6;
  }
  return sub_140258BB8(*a4);
}

