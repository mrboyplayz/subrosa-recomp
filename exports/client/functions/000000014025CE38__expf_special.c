/* Address: 0x14025ce38 | Name: _expf_special | Size: 167 bytes */
float __fastcall expf_special(float a1, float a2, int a3)
{
  int v3; // r8d
  int v4; // r9d
  char v6; // [rsp+20h] [rbp-48h]
  float v7; // [rsp+30h] [rbp-38h]

  v3 = a3 - 2;
  if ( !v3 )
  {
    v4 = 4;
    v7 = a1;
    v6 = 18;
    goto LABEL_5;
  }
  if ( v3 == 1 )
  {
    v4 = 3;
    v7 = a1;
    v6 = 17;
LABEL_5:
    handle_errorf((__int64)"expf", 20, SLODWORD(a2), v4, v6, 0x22u, v7, 0.0, 1);
  }
  return a2;
}

