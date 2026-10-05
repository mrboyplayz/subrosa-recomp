/* Address: 0x1401e0760 | Name: sub_1401E0760 | Size: 280 bytes */
void *__fastcall sub_1401E0760(unsigned int a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  int v5; // eax
  int v6; // [rsp+20h] [rbp-18h]
  void *v7; // [rsp+28h] [rbp-10h]

  if ( (a1 == 48000 || a1 == 24000 || a1 == 16000 || a1 == 12000 || a1 == 8000)
    && (a2 == 1 || a2 == 2)
    && (a3 == 2048 || a3 == 2049 || a3 == 2051) )
  {
    v5 = sub_1401E06F0(a2);
    v7 = (void *)sub_1401A6AA0(v5);
    if ( v7 )
    {
      v6 = sub_1401E0880(v7, a1, a2, a3);
      if ( a4 )
        *a4 = v6;
      if ( v6 )
      {
        sub_1401A6AC0(v7);
        return nullptr;
      }
      return v7;
    }
    else
    {
      if ( a4 )
        *a4 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a4 )
      *a4 = -1;
    return nullptr;
  }
}

