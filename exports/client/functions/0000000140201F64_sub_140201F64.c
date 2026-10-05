/* Address: 0x140201f64 | Name: sub_140201F64 | Size: 287 bytes */
__int64 __fastcall sub_140201F64(DName *a1, int a2)
{
  int v4; // eax
  double v5; // xmm3_8
  _UNKNOWN ***v6; // rax
  char v7; // cl
  __int64 v9; // [rsp+0h] [rbp-98h] BYREF
  double v10; // [rsp+20h] [rbp-78h] BYREF
  char v11; // [rsp+28h] [rbp-70h]
  _BYTE v12[80]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+80h] [rbp-18h]

  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    *((_DWORD *)a1 + 2) = 0;
    *(_QWORD *)a1 = &off_1402848D0;
    return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v13);
  }
  if ( (unsigned __int8)(**(_BYTE **)&dword_140404A6C[19064555] - 48) <= 9u )
  {
    v4 = (char)**(_BYTE **)&dword_140404A6C[19064555] - 47;
    ++*(_QWORD *)&dword_140404A6C[19064555];
    sub_1401FE40C(a1, v4);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v13);
  }
  sub_1402053CC(&v10);
  if ( v11 )
  {
    if ( a2 == 66 )
    {
      v5 = v10;
LABEL_8:
      sub_140158C70((int)v12, 65, (int)"%lf", v5);
      sub_1401FDBF8((__int64)a1, v12);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v13);
    }
    if ( a2 == 65 )
    {
      v5 = *(float *)&v10;
      goto LABEL_8;
    }
  }
  v6 = &off_1402848D0;
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
    v6 = nullptr;
  v7 = -**(_BYTE **)&dword_140404A6C[19064555];
  *(_QWORD *)a1 = v6;
  *((_DWORD *)a1 + 2) = v7 != 0 ? 2 : 0;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v13);
}

