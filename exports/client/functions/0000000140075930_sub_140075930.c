/* Address: 0x140075930 | Name: sub_140075930 | Size: 194 bytes */
signed int *__fastcall sub_140075930(int a1, float a2)
{
  __int64 v2; // r11
  signed int v3; // r10d
  signed int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  signed int *result; // rax

  v2 = 122LL * a1;
  v3 = dword_140404A6C[v2 + 70087218];
  v4 = dword_140404A6C[v2 + 70087217];
  v5 = (int)(float)((float)((float)((float)(a2 - (float)(*(float *)&dword_140404A6C[v2 + 70087220] * 0.5))
                                  / (float)(*(float *)&dword_140404A6C[v2 + 70087127]
                                          - *(float *)&dword_140404A6C[v2 + 70087220]))
                          * fmaxf((float)(v3 - v4), 1.0))
                  + 0.5);
  if ( LOBYTE(dword_140404A6C[70317069]) )
  {
    v6 = dword_140404A6C[v2 + 70087219];
    if ( v6 )
      v5 = (v6 >> 1) + v5 - ((v6 >> 1) + v5) % v6;
  }
  if ( v4 + v5 >= v4 )
    v4 += v5;
  result = *(signed int **)&dword_140404A6C[v2 + 70087215];
  if ( v4 <= v3 )
    v3 = v4;
  *result = v3;
  return result;
}

