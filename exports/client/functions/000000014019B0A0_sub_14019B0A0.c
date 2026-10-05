/* Address: 0x14019b0a0 | Name: sub_14019B0A0 | Size: 278 bytes */
__int64 __fastcall sub_14019B0A0(unsigned int *a1, int a2)
{
  int v3; // [rsp+20h] [rbp-28h]
  unsigned int v4; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+24h] [rbp-24h]
  unsigned int v6; // [rsp+24h] [rbp-24h]
  unsigned int v7; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v9; // [rsp+58h] [rbp+10h]
  unsigned int v10; // [rsp+58h] [rbp+10h]

  v9 = a2 - 1;
  v5 = sub_14019A020(a2 - 1) + 1;
  if ( v5 <= 8 )
  {
    v10 = v9 + 1;
    v4 = sub_14019AD20(a1, v10);
    sub_14019AE70(a1, v4, v4 + 1, v10);
    return v4;
  }
  else
  {
    v6 = v5 - 8;
    v3 = sub_14019AD20(a1, (v9 >> v6) + 1);
    sub_14019AE70(a1, v3, v3 + 1, (v9 >> v6) + 1);
    v7 = sub_14019B1C0(a1, v6) | (v3 << v6);
    if ( v7 > v9 )
    {
      a1[12] = 1;
      return v9;
    }
    else
    {
      return v7;
    }
  }
}

