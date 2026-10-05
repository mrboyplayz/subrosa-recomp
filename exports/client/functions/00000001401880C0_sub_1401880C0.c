/* Address: 0x1401880c0 | Name: sub_1401880C0 | Size: 51 bytes */
__int64 __fastcall sub_1401880C0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 <= 0x400 )
  {
    dword_140404A6C[278384730] = a2;
    result = MEMORY[0x1401FC920](&dword_140404A6C[278384731], a1);
    dword_140404A6C[278384987] = 1;
  }
  return result;
}

