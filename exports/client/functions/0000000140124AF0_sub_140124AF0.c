/* Address: 0x140124af0 | Name: sub_140124AF0 | Size: 1231 bytes */
__int64 __fastcall sub_140124AF0(int a1, int a2)
{
  int v2; // edi
  signed int v4; // ecx
  signed int v5; // r12d
  unsigned int v6; // ebp
  unsigned int *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int *v11; // r9
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 result; // rax
  int v15; // [rsp+80h] [rbp+18h]

  v2 = a2;
  if ( !dword_140404A6C[179668287] )
  {
    unk_140404308(dword_140404A6C[71737885], 0);
    unk_140404238(0);
    if ( (a1 & 0xFFFFFFFD) == 0 )
    {
      unk_140404238(1);
      unk_140404238(2);
      if ( !a1 )
      {
        unk_140404098(33985);
        unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944]);
        unk_140404098(33986);
        unk_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
      }
    }
    v4 = dword_140404A6C[284550610];
    v5 = 0;
    v6 = -1;
    v15 = -1;
    if ( (int)dword_140404A6C[284550610] > 0 )
    {
      v7 = &dword_140404A6C[284550611];
      while ( 1 )
      {
        v8 = 30LL * (int)*v7;
        if ( (dword_140404A6C[v8 + 284554710] & 2) == 0 || v2 )
          break;
LABEL_21:
        ++v5;
        ++v7;
        if ( v5 >= v4 )
          goto LABEL_22;
      }
      v9 = (int)dword_140404A6C[v8 + 284554707];
      if ( a1 )
      {
        sub_14007B990(&dword_140404A6C[v8 + 284554715], &dword_140404A6C[v8 + 284554718]);
        if ( a1 != 1 )
        {
LABEL_16:
          if ( (_DWORD)v9 != v15 )
          {
            unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v9 + 283790166] + 283793813], v12);
            unk_1404044A8(0, 3, 5126);
            if ( (a1 & 0xFFFFFFFD) == 0 )
            {
              unk_1404044A8(1, 2, 5126);
              unk_1404044A8(2, 3, 5126);
            }
            v15 = v9;
          }
          unk_140404470(3, &dword_140404A6C[v8 + 284554733]);
          qword_140302FF8(4, 0, 3 * dword_140404A6C[908 * v9 + 178527465]);
          v4 = dword_140404A6C[284550610];
          v2 = a2;
          goto LABEL_21;
        }
        unk_140404378(dword_140404A6C[71737990], 1, 0, &dword_140404A6C[431564565]);
        v10 = dword_140404A6C[71737991];
        v11 = &dword_140404A6C[431564533];
      }
      else
      {
        if ( dword_140404A6C[v8 + 284554711] != v6 )
        {
          unk_140404098(33984);
          unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[v8 + 284554711] + 284024944]);
          v6 = dword_140404A6C[v8 + 284554711];
        }
        unk_140404338(dword_140404A6C[71737871], 1, &dword_140404A6C[284024502]);
        unk_140404338(dword_140404A6C[71737872], 1, &dword_140404A6C[v8 + 284554715]);
        unk_140404370(dword_140404A6C[71737873], 1, 0, &dword_140404A6C[v8 + 284554718]);
        unk_140404338(dword_140404A6C[71737875], 1, &dword_140404A6C[284550403]);
        unk_140404338(dword_140404A6C[71737876], 1, &dword_140404A6C[284545205]);
        unk_140404338(dword_140404A6C[71737877], 1, &dword_140404A6C[284545209]);
        unk_140404338(dword_140404A6C[71737878], 1, &dword_140404A6C[284024511]);
        sub_14007B990(&dword_140404A6C[v8 + 284554715], &dword_140404A6C[v8 + 284554718]);
        v10 = dword_140404A6C[71737874];
        v11 = &dword_140404A6C[431564565];
      }
      unk_140404378(v10, 1, 0, v11);
      goto LABEL_16;
    }
LABEL_22:
    *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
    *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
    *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
    *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
    sub_14007A0E0(
      &dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564517],
      (__int64)&dword_140404A6C[431564501]);
    sub_14007A0E0(
      &dword_140404A6C[431564565],
      (__int64)&dword_140404A6C[431564533],
      (__int64)&dword_140404A6C[431564485]);
    unk_140404170(34962, 0, v13);
    if ( a1 )
    {
      if ( a1 != 2 )
        return unk_140404230(0);
    }
    else
    {
      unk_140404098(33986);
      unk_140404050(34067, 0);
      unk_140404098(33984);
    }
    unk_140404230(0);
    unk_140404230(1);
    return unk_140404230(2);
  }
  return result;
}

