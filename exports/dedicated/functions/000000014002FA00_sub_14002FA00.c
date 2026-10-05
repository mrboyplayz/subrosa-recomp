/* Address: 0x14002fa00 | Name: sub_14002FA00 | Size: 2749 bytes */
_UNKNOWN **sub_14002FA00()
{
  _UNKNOWN **result; // rax
  __int64 v1; // r13
  unsigned __int64 v2; // r15
  int v3; // eax
  int v4; // edx
  char *v5; // rcx
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // r8d
  char v10; // r10
  unsigned int v11; // r9d
  int v12; // ecx
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  int v15; // esi
  int v16; // edx
  __int64 v17; // r9
  char *v18; // r8
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  char *v22; // rdx
  char *v23; // rbx
  __int64 v24; // r12
  int v25; // ebp
  int v26; // r15d
  __int64 v27; // rsi
  __int64 v28; // r13
  int v29; // eax
  char v30; // r9
  unsigned int v31; // r10d
  int v32; // ecx
  __int64 v33; // rdi
  size_t v34; // rbx
  int v35; // edx
  int v36; // r9d
  int v37; // r8d
  unsigned int v38; // r10d
  int v39; // ecx
  unsigned int v40; // r9d
  int v41; // ecx
  int v42; // r11d
  int v43; // r9d
  unsigned int v44; // r10d
  int v45; // ecx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( dword_1915FDC20 != -1 )
  {
    v1 = dword_1915FDC20;
    v2 = 14388LL * dword_1915FDC20;
    *(_DWORD *)dword_197BC7264 = dword_140104000;
    *(_QWORD *)&qword_197BC725C = 9;
    byte_197BC7268 = 4;
    dword_197BC7269 = dword_1915413A8;
    sub_1400A8630((char *)&qword_16D67D640 + v2, 24);
    sub_1400A8630((char *)&qword_16D67D640 + v2 + 4, 24);
    sub_1400A8630((char *)&qword_16D67D648 + v2, 24);
    sub_1400A8630((char *)&qword_16D67D648 + v2 + 4, 24);
    sub_1400A8630((char *)&unk_16D67D650 + v2, 24);
    sub_1400A8630((char *)&unk_16D67D654 + v2, 24);
    sub_1400A8630((char *)&unk_16D67D658 + v2, 24);
    sub_1400A8630((char *)&unk_16D67D65C + v2, 24);
    sub_1400A8630((char *)&unk_16D67D660 + v2, 24);
    sub_1400A8630((char *)&unk_16D67D680 + v2, 24);
    sub_1400A8630((char *)&unk_16D67D684 + v2, 24);
    v3 = qword_197BC725C;
    if ( qword_197BC725C < 0x10000 )
    {
      if ( *(&qword_197BC725C + 1) > 0 )
      {
        v3 = ++qword_197BC725C;
        *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
      }
      *(_DWORD *)&dword_197BC7264[v3] = dword_16D67D6C0[v2 / 4];
      qword_197BC725C += 4;
    }
    sub_1400AFDB0((char *)&qword_16D67D6F8 + v2, 8);
    sub_1400AFDB0((char *)&unk_16D67D6D4 + v2, 4);
    sub_1400AFDB0(&dword_196199560, 16);
    v4 = qword_197BC725C;
    if ( qword_197BC725C < 0x10000 )
    {
      if ( *(&qword_197BC725C + 1) > 0 )
      {
        v4 = ++qword_197BC725C;
        *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
      }
      *(_DWORD *)&dword_197BC7264[v4] = dword_163D75FAC;
      v4 = qword_197BC725C + 4;
      qword_197BC725C = v4;
      if ( v4 < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          ++v4;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = v4;
        }
        v5 = &dword_197BC7264[v4];
        v6 = dword_1915FDC2C;
        *(_QWORD *)v5 = qword_1915FDC24;
        *((_DWORD *)v5 + 2) = v6;
        v4 = qword_197BC725C + 12;
        qword_197BC725C += 12;
      }
    }
    v7 = *(_DWORD *)((char *)&unk_16D67D758 + v2);
    v8 = *(_DWORD *)((char *)&unk_16D67D754 + v2) - v7;
    if ( *(_DWORD *)((char *)&unk_16D67D754 + v2) < v7 )
      v8 += 64;
    if ( v8 > 15 )
      v8 = 15;
    v9 = 4;
    if ( v4 < 0x10000 )
    {
      v10 = *((_BYTE *)&qword_197BC725C + 4);
      v11 = v8 & 0xF;
      while ( 1 )
      {
        dword_197BC7264[v4] &= ~(((1 << v9) - 1) << v10);
        dword_197BC7264[qword_197BC725C] |= (_BYTE)v11 << *((char *)&qword_197BC725C + 4);
        v12 = 8 - *(&qword_197BC725C + 1);
        if ( v9 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
          break;
        *(&qword_197BC725C + 1) = 0;
        if ( v9 == v12 )
        {
          ++qword_197BC725C;
          goto LABEL_25;
        }
        v9 -= v12;
        v4 = qword_197BC725C + 1;
        v11 >>= v12;
        ++qword_197BC725C;
        v10 = 0;
        if ( v9 <= 0 )
          goto LABEL_25;
      }
      *(&qword_197BC725C + 1) += v9;
    }
LABEL_25:
    sub_1400AFDB0((char *)&unk_16D67D758 + v2, 8);
    if ( v8 > 0 )
    {
      v13 = (unsigned int)v8;
      while ( 1 )
      {
        v14 = v2 + 84LL * v7;
        sub_1400AFDB0((char *)&unk_16D67D768 + v14, 4);
        v15 = *(_DWORD *)((char *)&unk_16D67D768 + v14);
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            sub_1400AFDB0((char *)&dword_16D67D76C + v14, 6);
            v19 = *(int *)((char *)&dword_16D67D76C + v14);
            if ( v19 > 0 )
            {
              v20 = (unsigned int)v19;
              v21 = qword_197BC725C;
              v22 = &byte_16D67D77C[v14];
              do
              {
                if ( v21 < 0x10000 )
                {
                  if ( *(&qword_197BC725C + 1) > 0 )
                  {
                    ++v21;
                    *(&qword_197BC725C + 1) = 0;
                    qword_197BC725C = v21;
                  }
                  dword_197BC7264[v21] = *v22;
                  v21 = ++qword_197BC725C;
                }
                ++v22;
                --v20;
              }
              while ( v20 );
            }
            v23 = (char *)&dword_16D67D770 + v14;
            sub_1400AFDB0((char *)&dword_16D67D770 + v14, 4);
            v16 = qword_197BC725C;
LABEL_48:
            if ( v15 == 3 )
            {
              sub_1400AFDB0((char *)&dword_16D67D76C + v14, 16);
              sub_1400AFDB0(v23, 16);
              sub_1400AFDB0((char *)&unk_16D67D774 + v14, 16);
              v16 = qword_197BC725C;
            }
            else if ( (unsigned int)(v15 - 4) <= 1 && v16 < 0x10000 )
            {
              if ( *(&qword_197BC725C + 1) > 0 )
              {
                ++v16;
                *(&qword_197BC725C + 1) = 0;
                qword_197BC725C = v16;
              }
              *(_DWORD *)&dword_197BC7264[v16] = *(int *)((char *)&dword_16D67D76C + v14);
              v16 = qword_197BC725C + 4;
              qword_197BC725C = v16;
              if ( v16 < 0x10000 )
              {
                if ( *(&qword_197BC725C + 1) > 0 )
                {
                  ++v16;
                  *(&qword_197BC725C + 1) = 0;
                  qword_197BC725C = v16;
                }
                *(_DWORD *)&dword_197BC7264[v16] = *(int *)((char *)&dword_16D67D770 + v14);
                v16 = qword_197BC725C + 4;
                qword_197BC725C += 4;
              }
            }
            goto LABEL_61;
          }
          v16 = qword_197BC725C;
        }
        else
        {
          sub_1400AFDB0((char *)&dword_16D67D76C + v14, 8);
          v16 = qword_197BC725C;
          if ( qword_197BC725C < 0x10000 )
          {
            if ( *(&qword_197BC725C + 1) > 0 )
            {
              v16 = ++qword_197BC725C;
              *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
            }
            *(_DWORD *)&dword_197BC7264[v16] = *(int *)((char *)&dword_16D67D770 + v14);
            v16 = qword_197BC725C + 4;
            qword_197BC725C += 4;
          }
          v17 = 16;
          v18 = &byte_16D67D77C[v14];
          do
          {
            if ( v16 < 0x10000 )
            {
              if ( *(&qword_197BC725C + 1) > 0 )
              {
                ++v16;
                *(&qword_197BC725C + 1) = 0;
                qword_197BC725C = v16;
              }
              dword_197BC7264[v16] = *v18;
              v16 = ++qword_197BC725C;
            }
            ++v18;
            --v17;
          }
          while ( v17 );
        }
        v23 = (char *)&dword_16D67D770 + v14;
        if ( v15 != 2 )
          goto LABEL_48;
        sub_1400AFDB0((char *)&dword_16D67D76C + v14, 16);
        sub_1400AFDB0((char *)&dword_16D67D770 + v14, 16);
        v16 = qword_197BC725C;
LABEL_61:
        v7 = ((_BYTE)v7 + 1) & 0x3F;
        if ( !--v13 )
          goto LABEL_64;
      }
    }
    v16 = qword_197BC725C;
LABEL_64:
    v24 = 131604 * v1;
    v25 = 11;
    v26 = *((_DWORD *)&unk_1417D9BCC + 32901 * v1) & 0x3F;
    *((_DWORD *)&unk_1417D9BCC + 32901 * v1) = v26;
    v27 = ((_BYTE)v26 - 6) & 0x3F;
    if ( (_DWORD)v27 != v26 )
    {
      v28 = 32901 * v1;
      do
      {
        v29 = 6;
        if ( v16 < 0x10000 )
        {
          v30 = *((_BYTE *)&qword_197BC725C + 4);
          v31 = v27;
          while ( 1 )
          {
            dword_197BC7264[v16] &= ~(((1 << v29) - 1) << v30);
            *(_BYTE *)(qword_197BC725C + 1471967844LL + 0x140000000LL) |= (_BYTE)v31 << *((char *)&qword_197BC725C + 4);
            v32 = 8 - *(&qword_197BC725C + 1);
            if ( v29 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
              break;
            *(&qword_197BC725C + 1) = 0;
            if ( v29 == v32 )
            {
              ++qword_197BC725C;
              goto LABEL_74;
            }
            v29 -= v32;
            v16 = qword_197BC725C + 1;
            v31 >>= v32;
            ++qword_197BC725C;
            v30 = 0;
            if ( v29 <= 0 )
              goto LABEL_74;
          }
          *(&qword_197BC725C + 1) += v29;
        }
LABEL_74:
        v33 = 4 * (v27 + v28);
        sub_1400AFDB0((char *)&unk_1417D9CD4 + v33, 11);
        sub_1400AFDB0((char *)&unk_1417D9BD4 + v33, 2);
        v16 = qword_197BC725C;
        v34 = *(int *)((char *)&unk_1417D9CD4 + v33);
        if ( qword_197BC725C < 0x10000 )
        {
          if ( *(&qword_197BC725C + 1) > 0 )
          {
            v16 = ++qword_197BC725C;
            *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
          }
          memcpy(&dword_197BC7264[v16], (char *)&unk_1417D9DD4 + 2048 * (unsigned __int64)(unsigned int)v27 + v24, v34);
          v16 = v34 + qword_197BC725C;
          qword_197BC725C += v34;
        }
        v27 = ((_BYTE)v27 + 1) & 0x3F;
      }
      while ( (_DWORD)v27 != v26 );
    }
    sub_1400AFDB0(0x140000000LL + v24 + 25009088, 1);
    v35 = qword_197BC725C;
    v36 = 8;
    v37 = *(&qword_197BC725C + 1);
    if ( qword_197BC725C < 0x10000 )
    {
      v38 = (unsigned __int8)dword_1915FB4C4;
      while ( 1 )
      {
        dword_197BC7264[v35] &= ~(((1 << v36) - 1) << v37);
        *(_BYTE *)(qword_197BC725C + 1471967844LL + 0x140000000LL) |= (_BYTE)v38 << *((char *)&qword_197BC725C + 4);
        v39 = 8 - *(&qword_197BC725C + 1);
        v35 = qword_197BC725C;
        if ( v36 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
          break;
        if ( v36 == v39 )
        {
          v35 = ++qword_197BC725C;
          v37 = 0;
          goto LABEL_87;
        }
        v35 = qword_197BC725C + 1;
        v38 >>= v39;
        v37 = 0;
        v36 -= v39;
        *(_QWORD *)&qword_197BC725C = (unsigned int)(qword_197BC725C + 1);
        if ( v36 <= 0 )
          goto LABEL_88;
      }
      v37 = v36 + *(&qword_197BC725C + 1);
LABEL_87:
      *(&qword_197BC725C + 1) = v37;
LABEL_88:
      if ( v35 < 0x10000 )
      {
        v40 = WORD2(qword_197FEB5D4) & 0x7FF;
        while ( 1 )
        {
          dword_197BC7264[v35] &= ~(((1 << v25) - 1) << v37);
          *(_BYTE *)(qword_197BC725C + 1471967844LL + 0x140000000LL) |= (_BYTE)v40 << *((char *)&qword_197BC725C + 4);
          v41 = 8 - *(&qword_197BC725C + 1);
          v35 = qword_197BC725C;
          if ( v25 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
            break;
          if ( v25 == v41 )
          {
            v35 = ++qword_197BC725C;
            v37 = 0;
            goto LABEL_96;
          }
          v35 = qword_197BC725C + 1;
          v40 >>= v41;
          v37 = 0;
          v25 -= v41;
          *(_QWORD *)&qword_197BC725C = (unsigned int)(qword_197BC725C + 1);
          if ( v25 <= 0 )
            goto LABEL_97;
        }
        v37 = v25 + *(&qword_197BC725C + 1);
LABEL_96:
        *(&qword_197BC725C + 1) = v37;
      }
    }
LABEL_97:
    v42 = dword_19A2575F4;
    v43 = 8;
    if ( v35 < 0x10000 )
    {
      v44 = (unsigned __int8)dword_197FF55DC;
      while ( 1 )
      {
        dword_197BC7264[v35] &= ~(((1 << v43) - 1) << v37);
        *(_BYTE *)(qword_197BC725C + 1471967844LL + 0x140000000LL) |= (_BYTE)v44 << *((char *)&qword_197BC725C + 4);
        v45 = 8 - *(&qword_197BC725C + 1);
        v35 = qword_197BC725C;
        if ( v43 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
          break;
        if ( v43 == v45 )
        {
          v35 = ++qword_197BC725C;
          v37 = 0;
          goto LABEL_105;
        }
        v35 = qword_197BC725C + 1;
        v44 >>= v45;
        v37 = 0;
        v43 -= v45;
        *(_QWORD *)&qword_197BC725C = (unsigned int)(qword_197BC725C + 1);
        if ( v43 <= 0 )
          goto LABEL_106;
      }
      v37 = v43 + *(&qword_197BC725C + 1);
LABEL_105:
      *(&qword_197BC725C + 1) = v37;
LABEL_106:
      if ( v35 < 0x10000 )
      {
        if ( v37 > 0 )
        {
          ++v35;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = v35;
        }
        *(_DWORD *)&dword_197BC7264[v35] = v42;
        v37 = *(&qword_197BC725C + 1);
        v35 = qword_197BC725C + 4;
        qword_197BC725C += 4;
      }
    }
    if ( v35 < 0x10000 )
    {
      if ( v37 > 0 )
      {
        ++v35;
        *(&qword_197BC725C + 1) = 0;
        qword_197BC725C = v35;
      }
      *(_DWORD *)&dword_197BC7264[v35] = *(_DWORD *)(4LL * (unsigned __int8)v42 + 1512404472 + 0x140000000LL);
      qword_197BC725C += 4;
    }
    dword_19A2575F4 = v42 + 1;
    return (_UNKNOWN **)sub_1400BC790(hostlong);
  }
  return result;
}

