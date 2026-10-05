/* Address: 0x140237880 | Name: sub_140237880 | Size: 501 bytes */
__int64 __fastcall sub_140237880(
        int a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v12; // rbx
  char v15; // al
  char v16; // bp
  int v17; // r10d
  int v18; // r10d
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  int v22; // r8d
  int v23; // r8d
  __int64 result; // rax
  bool v25; // sf
  int v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = 0;
  v12 = a4;
  v15 = sub_1402374E4(a3);
  v16 = v15;
  if ( a2 == 1 )
  {
    if ( v15 )
      v17 = dword_14028BF4C[v12];
    else
      v17 = dword_14028BF14[v12];
    v18 = v17 + 1;
    v19 = (int)(365 * a3 - 25563 + (int)(a3 + 299) / 400 - (int)(a3 - 1) / 100 + v18 + (int)(a3 - 1) / 4) % 7;
    v20 = a6 + v18 + 7 * a5 - v19 - 7;
    if ( v19 > a6 )
      v20 = a6 + v18 + 7 * a5 - v19;
    if ( v16 )
      v21 = dword_14028BF50[v12];
    else
      v21 = dword_14028BF18[v12];
    v22 = v20;
    if ( a5 == 5 && v20 > v21 )
      v22 = v20 - 7;
  }
  else
  {
    if ( v15 )
      v23 = dword_14028BF4C[v12];
    else
      v23 = dword_14028BF14[v12];
    v22 = a7 + v23;
  }
  result = (unsigned int)(a9 + 60 * a8);
  if ( !a1 )
  {
    dword_140302284 = v22;
    dword_140302288 = a11 + 1000 * (a10 + 60 * result);
    dword_140302280 = a3;
    return result;
  }
  dword_140302298 = a11 + 1000 * (a10 + 60 * result);
  dword_140302294 = v22;
  if ( (unsigned int)sub_140237168(&v26) )
  {
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140237A74LL);
  }
  v25 = 1000 * v26 + dword_140302298 < 0;
  result = (unsigned int)(1000 * v26 + dword_140302298);
  dword_140302298 += 1000 * v26;
  if ( v25 )
  {
    result = (unsigned int)(result + 86400000);
    --dword_140302294;
LABEL_24:
    dword_140302298 = result;
    goto LABEL_25;
  }
  if ( (int)result >= 86400000 )
  {
    result = (unsigned int)(result - 86400000);
    ++dword_140302294;
    goto LABEL_24;
  }
LABEL_25:
  dword_140302290 = a3;
  return result;
}

