/* Address: 0x1401977e0 | Name: sub_1401977E0 | Size: 258 bytes */
void __fastcall sub_1401977E0(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  unsigned int i; // ebx

  v1 = 265228LL * a1;
  v2 = *(_QWORD *)&dword_140404A6C[v1 + 293512629];
  if ( v2 )
  {
    if ( dword_140404A6C[v1 + 293512631] )
    {
      MEMORY[0x14020C4A8](v2, 4, 0);
      sub_14020CE0C(&dword_140404A6C[v1 + 293512633], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      sub_14020CE0C(&dword_140404A6C[v1 + 293512634], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      MEMORY[0x14020C4A8](*(_QWORD *)&dword_140404A6C[v1 + 293512629], dword_140404A6C[v1 + 293512633], 0);
      for ( i = 0; i < dword_140404A6C[v1 + 293512634]; ++i )
        sub_14020CE0C(
          &dword_140404A6C[16 * (__int64)(int)i + 293512635 + v1],
          64,
          1,
          *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    }
    sub_14020B9E8(*(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    *(_QWORD *)&dword_140404A6C[v1 + 293512629] = 0;
  }
}

