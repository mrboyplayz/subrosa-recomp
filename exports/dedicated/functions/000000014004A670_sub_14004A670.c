/* Address: 0x14004a670 | Name: sub_14004A670 | Size: 703 bytes */
int __fastcall sub_14004A670(int a1, int a2, u_long a3, u_short a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v8; // ebx
  __int64 v9; // rbx
  u_short v10; // ax
  SOCKET v11; // rcx
  int v12; // r8d
  signed int v13; // esi
  __int64 v14; // rax
  signed int v15; // ebp
  __int64 v16; // rax
  _DWORD *v17; // r14
  __int16 *v18; // r15
  char *v19; // rdi
  u_short v20; // ax
  int v21; // r8d
  u_long *v23; // [rsp+30h] [rbp-58h]
  u_short *v24; // [rsp+38h] [rbp-50h]
  int *v25; // [rsp+40h] [rbp-48h]
  int *v26; // [rsp+48h] [rbp-40h]
  struct sockaddr *to; // [rsp+50h] [rbp-38h]
  __int64 v28; // [rsp+58h] [rbp-30h]

  LODWORD(v4) = a2;
  v5 = 65548LL * a2;
  if ( *(int *)((char *)&unk_1962BCCE4 + v5) > 0 )
  {
    ++*(_DWORD *)((char *)&unk_1962BCCE0 + v5);
    *(_DWORD *)((char *)&unk_1962BCCE4 + v5) = 0;
  }
  v8 = *(_DWORD *)((char *)&unk_1962BCCE0 + v5);
  if ( v8 > 1400 )
  {
    if ( v8 <= 0x10000 )
    {
      v13 = 0;
      v14 = a1;
      v28 = a1;
      v15 = ((int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 9)
          + ((unsigned int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 31)
          + 1;
      if ( v15 > 0 )
      {
        v16 = 4195128LL * a1;
        v17 = &byte_191625F64[v16];
        v23 = (u_long *)((char *)&unk_191625F74 + v16);
        v18 = (__int16 *)((char *)&unk_191625F8E + v16);
        v24 = (u_short *)((char *)&unk_191625F72 + v16);
        v26 = (int *)((char *)&unk_191625F80 + v16);
        to = (struct sockaddr *)((char *)&unk_191625F70 + v16);
        v25 = (int *)(0x140000000LL + v16 + 1365401452);
        v19 = (char *)(0x140000000LL + v5 + 1445711084);
        do
        {
          *(_DWORD *)buf = *v17;
          word_19633CD50 = *v18;
          *(_QWORD *)len = 8;
          buf[3] = 102;
          byte_19633CD52 = v13;
          byte_19633CD53 = v15;
          if ( v8 <= 1400 )
          {
            if ( v8 + 8 < 0x10000 )
            {
              memcpy(&unk_19633CD54, v19, v8);
              len[0] += v8;
            }
            v8 = 0;
          }
          else
          {
            memcpy(&unk_19633CD54, v19, 0x578u);
            v8 -= 1400;
            len[0] = 1408;
          }
          *v23 = htonl(a3);
          v20 = htons(a4);
          v21 = len[0];
          *v24 = v20;
          sendto(*v25, buf, v21, 0, to, *v26);
          ++v13;
          v19 += 1400;
        }
        while ( v13 < v15 );
        v14 = v28;
      }
      v4 = 4195128 * v14;
      ++*(_WORD *)((char *)&unk_191625F8E + v4);
    }
  }
  else
  {
    v9 = 4195128LL * a1;
    byte_1962BCCEC[v5 + 3] = 80;
    *(_DWORD *)((char *)&unk_191625F74 + v9) = htonl(a3);
    v10 = htons(a4);
    v11 = *(int *)&byte_191625F64[v9 + 8];
    v12 = *(_DWORD *)((char *)&unk_1962BCCE0 + v5);
    *(_WORD *)((char *)&unk_191625F72 + v9) = v10;
    LODWORD(v4) = sendto(
                    v11,
                    &byte_1962BCCEC[v5],
                    v12,
                    0,
                    (const struct sockaddr *)((char *)&unk_191625F70 + v9),
                    *(_DWORD *)((char *)&unk_191625F80 + v9));
  }
  return v4;
}

