/* Address: 0x14006c5e0 | Name: sub_14006C5E0 | Size: 133 bytes */
__int64 __fastcall sub_14006C5E0(int a1, char *a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  char *v6; // r10
  __int64 v7; // rcx
  int v8; // ebx
  __int64 result; // rax
  char *v10; // rcx

  v5 = 16387LL * a1;
  v6 = a2;
  if ( (int)dword_140404A6C[v5 + 135184966] > 0 )
  {
    ++dword_140404A6C[v5 + 135184965];
    dword_140404A6C[v5 + 135184966] = 0;
  }
  v7 = (int)dword_140404A6C[v5 + 135184965];
  v8 = a4 * a3;
  result = (unsigned int)(v7 + a4 * a3);
  if ( (int)result < 0x10000 )
  {
    if ( a5 )
    {
      v10 = (char *)&dword_140404A6C[v5 + 135184968] + v7;
    }
    else
    {
      a2 = (char *)&dword_140404A6C[v5 + 135184968] + v7;
      v10 = v6;
    }
    result = MEMORY[0x1401FC920](v10, a2);
    dword_140404A6C[v5 + 135184965] += v8;
  }
  return result;
}

