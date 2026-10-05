/* Address: 0x140249740 | Name: sub_140249740 | Size: 850 bytes */
__int64 __fastcall sub_140249740(_DWORD *a1, int a2, char *a3)
{
  __int64 v4; // r12
  __int64 v6; // r15
  unsigned __int16 *v7; // rcx
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rax
  _DWORD *v13; // r13
  bool v14; // zf
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ecx
  unsigned __int64 *v23; // rax
  _QWORD v25[5]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v26; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+30h] [rbp-D0h]
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh]
  void *v30; // [rsp+48h] [rbp-B8h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  _WORD v32[136]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[176]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v34[40]; // [rsp+220h] [rbp+120h] BYREF

  v4 = a2;
  v6 = sub_140255A70();
  if ( sub_140248A88(a3, (#57 *)v32, 131, (#44 *)v33, 85, &v28) )
  {
    v7 = v32;
    v8 = 8 * v4;
    do
    {
      v9 = *(unsigned __int16 *)((char *)v7 + *(_QWORD *)&a1[8 * v4 + 10] - (_QWORD)v32);
      v10 = *v7 - v9;
      if ( v10 )
        break;
      ++v7;
    }
    while ( v9 );
    if ( v10 )
    {
      v11 = -1;
      do
        ++v11;
      while ( v32[v11] );
      v12 = malloc_base(2 * v11 + 6);
      v13 = (_DWORD *)v12;
      if ( v12 )
      {
        v30 = *(void **)&a1[v8 + 10];
        v31 = *(_QWORD *)&a1[2 * v4 + 74];
        v29 = a1[3];
        if ( (unsigned int)sub_140259444(v12 + 4, v11 + 1, v32) )
        {
          sub_14024CFBC(0, 0, 0, 0, 0);
          JUMPOUT(0x140249A91LL);
        }
        v14 = v32[0] == 67;
        *(_QWORD *)&a1[v8 + 10] = v13 + 1;
        if ( !v14 || v32[1] )
          v15 = sub_140248608((__int64)v33);
        else
          v15 = 0;
        *(_QWORD *)&a1[2 * v4 + 74] = v15;
        switch ( (_DWORD)v4 )
        {
          case 2:
            v16 = 0;
            a1[3] = v28;
            v17 = 0;
            v18 = *(_QWORD *)(v6 + 744);
            while ( a1[3] != *(_DWORD *)(v6 + 8 * v17 + 712) )
            {
              v19 = *(_QWORD *)(v6 + 8 * v17 + 712);
              ++v16;
              *(_QWORD *)(v6 + 8 * v17++ + 712) = v18;
              v18 = v19;
              if ( v17 >= 5 )
                goto LABEL_21;
            }
            if ( v16 )
            {
              *(_QWORD *)(v6 + 712) = *(_QWORD *)(v6 + 8LL * v16 + 712);
              *(_QWORD *)(v6 + 8LL * v16 + 712) = v18;
            }
LABEL_21:
            if ( v16 == 5 )
            {
              v20 = a1[3];
              v27 = 1;
              LODWORD(v26) = v20;
              v25[4] = v34;
              v21 = sub_140262618(0, 1, &unk_14028A0F0);
              v22 = 0;
              if ( v21 )
              {
                v23 = v34;
                do
                {
                  ++v22;
                  *(_WORD *)v23 &= 0x1FFu;
                  v23 = (unsigned __int64 *)((char *)v23 + 2);
                }
                while ( v22 < 0x7F );
                v22 = MEMORY[0x1401FC820](v34, (__int64)MEMORY[0x1403022A0], 0xFEu) == 0;
              }
              *(_DWORD *)(v6 + 716) = v22;
              *(_DWORD *)(v6 + 712) = a1[3];
            }
            a1[7] = *(_DWORD *)(v6 + 716);
            break;
          case 1:
            a1[5] = v28;
            break;
          case 5:
            a1[6] = v28;
            break;
        }
        if ( ((unsigned int (__fastcall *)(_DWORD *))*(&off_14028A180 + 3 * v4))(a1) )
        {
          *(_QWORD *)&a1[v8 + 10] = v30;
          free_base(*(void **)&a1[2 * v4 + 74]);
          *(_QWORD *)&a1[2 * v4 + 74] = v31;
          free_base(v13);
          a1[3] = v29;
        }
        else
        {
          if ( v30 != &unk_140302588
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)&a1[v8 + 14], 0xFFFFFFFF) == 1 )
          {
            free_base(*(void **)&a1[v8 + 14]);
            free_base(*(void **)&a1[v8 + 12]);
            free_base(*(void **)&a1[2 * v4 + 74]);
            *(_QWORD *)&a1[v8 + 10] = 0;
            *(_QWORD *)&a1[2 * v4 + 74] = 0;
          }
          *v13 = 1;
          *(_QWORD *)&a1[v8 + 14] = v13;
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v25 ^ v34[32]);
}

