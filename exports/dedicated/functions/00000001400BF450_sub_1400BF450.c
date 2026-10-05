/* Address: 0x1400bf450 | Name: sub_1400BF450 | Size: 246 bytes */
void sub_1400BF450()
{
  int *v0; // rcx
  __int64 v1; // r9
  int v2; // eax
  __int64 v3; // rdx
  _DWORD *v4; // r8
  int v5; // ecx
  signed int v6; // eax

  if ( dword_16E54E3EC && dword_16E54E3F0 && (dword_191541414 & 0x3FF) == 0 )
  {
    qmemcpy(dword_197BC7264, "7DFP@", 5);
    *(_QWORD *)&qword_197BC725C = 5;
    sub_1400BC790(dword_1909400C0, word_1909400C4);
  }
  if ( dword_163D75B40 > 0 )
  {
    v0 = (int *)&unk_160F29980;
    v1 = (unsigned int)dword_163D75B40;
    v2 = dword_16E54DBE4 / dword_163D75B40;
    v3 = (unsigned int)dword_163D75B40;
    do
    {
      *v0 = v2;
      v0 += 47224;
      --v3;
    }
    while ( v3 );
    v4 = &unk_160F2997C;
    do
    {
      v5 = v4[1];
      v4 += 47224;
      *(v4 - 47224) += ((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
                     + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5);
      v6 = *(v4 - 47224);
      if ( v6 < (int)(((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
                    + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5)) )
        v6 = ((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
           + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5);
      *(v4 - 47224) = v6;
      --v1;
    }
    while ( v1 );
  }
}

