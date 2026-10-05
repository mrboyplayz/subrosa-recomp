/* Address: 0x140115ff0 | Name: sub_140115FF0 | Size: 490 bytes */
__int64 __fastcall sub_140115FF0(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 result; // rax

  v1 = 290LL * a1;
  dword_140404A6C[290 * a1 + 273377606] = 1;
  v2 = 1024;
  dword_140404A6C[v1 + 273377607] = 0;
  dword_140404A6C[v1 + 273377608] = 1;
  dword_140404A6C[v1 + 273377609] = 2;
  dword_140404A6C[v1 + 273377610] = 3;
  dword_140404A6C[v1 + 273377611] = 4;
  dword_140404A6C[v1 + 273377612] = 5;
  dword_140404A6C[v1 + 273377613] = 6;
  dword_140404A6C[v1 + 273377614] = 7;
  dword_140404A6C[v1 + 273377615] = 8;
  dword_140404A6C[v1 + 273377616] = 9;
  dword_140404A6C[v1 + 273377617] = 10;
  dword_140404A6C[v1 + 273377618] = 11;
  dword_140404A6C[v1 + 273377619] = 12;
  dword_140404A6C[v1 + 273377620] = 13;
  dword_140404A6C[v1 + 273377621] = 14;
  dword_140404A6C[v1 + 273377622] = 15;
  dword_140404A6C[v1 + 273377623] = 16;
  dword_140404A6C[v1 + 273377624] = 17;
  dword_140404A6C[v1 + 273377625] = 18;
  dword_140404A6C[v1 + 273377626] = 19;
  dword_140404A6C[v1 + 273377627] = 20;
  dword_140404A6C[v1 + 273377628] = 21;
  dword_140404A6C[v1 + 273377629] = 22;
  dword_140404A6C[v1 + 273377630] = 23;
  dword_140404A6C[v1 + 273377631] = 24;
  dword_140404A6C[v1 + 273377632] = 25;
  do
  {
    v3 = rand() % 26;
    v4 = rand();
    v5 = v1 + v3;
    v6 = dword_140404A6C[v5 + 273377607];
    v7 = v1 + v4 % 26;
    result = dword_140404A6C[v7 + 273377607];
    dword_140404A6C[v5 + 273377607] = result;
    dword_140404A6C[v7 + 273377607] = v6;
    --v2;
  }
  while ( v2 );
  return result;
}

