/* Address: 0x140232b30 | Name: sub_140232B30 | Size: 936 bytes */
__int64 __fastcall sub_140232B30(
        #107 *this,
        struct __crt_strtox::big_integer *a2,
        const struct __crt_strtox::big_integer *a3)
{
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // r11d
  char *v7; // rbx
  unsigned __int64 v8; // r8
  unsigned int v9; // r10d
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int *v14; // r12
  unsigned int v15; // r15d
  __int64 v16; // rbx
  unsigned int v17; // r11d
  unsigned __int64 v18; // r8
  unsigned int v19; // r10d
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r11d
  #107 *v24; // r8
  #107 *v25; // rax
  char *v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // ebx
  char *v29; // r13
  __int64 v30; // r14
  unsigned __int64 v31; // r10
  unsigned int v32; // eax
  __int64 v33; // r11
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v39; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v40; // [rsp+20h] [rbp-E0h]
  char *v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h]
  char v43[460]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v44; // [rsp+200h] [rbp+100h]
  _DWORD Source[115]; // [rsp+204h] [rbp+104h] BYREF
  __int64 v46; // [rsp+3D0h] [rbp+2D0h]

  v4 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 1u )
  {
    v14 = (unsigned int *)((char *)this + 4);
    v15 = *(_DWORD *)this;
    if ( *(_DWORD *)this > 1u )
    {
      v23 = *(_DWORD *)a2;
      v24 = a2;
      v25 = this;
      if ( v4 >= v15 )
        v24 = this;
      v26 = (char *)v24 + 4;
      v41 = v26;
      if ( v4 >= v15 )
      {
        v23 = v15;
        v25 = a2;
        v15 = v4;
      }
      v40 = v23;
      v27 = 0;
      v28 = 0;
      v44 = 0;
      v29 = (char *)v25 + 4;
      if ( v23 )
      {
        do
        {
          v30 = *(unsigned int *)&v26[4 * v28];
          if ( (_DWORD)v30 )
          {
            LODWORD(v31) = 0;
            v32 = v28;
            if ( v15 )
            {
              do
              {
                if ( v32 == 115 )
                  break;
                v33 = v32;
                if ( v32 == v27 )
                {
                  Source[v32] = 0;
                  v44 = v32 + 1;
                }
                v34 = v32 - v28;
                ++v32;
                v35 = (unsigned int)Source[v33] + (unsigned int)v31 + v30 * *(unsigned int *)&v29[4 * v34];
                Source[v33] = v35;
                v31 = HIDWORD(v35);
                v27 = v44;
              }
              while ( v32 - v28 != v15 );
              if ( (_DWORD)v31 )
              {
                do
                {
                  if ( v32 == 115 )
                    break;
                  v36 = v32;
                  if ( v32 == v27 )
                  {
                    Source[v32] = 0;
                    v44 = v32 + 1;
                  }
                  ++v32;
                  v37 = (unsigned int)v31 + (unsigned __int64)(unsigned int)Source[v36];
                  Source[v36] = v37;
                  v27 = v44;
                  LODWORD(v31) = HIDWORD(v37);
                }
                while ( HIDWORD(v37) );
              }
              v23 = v40;
            }
            if ( v32 == 115 )
            {
              v42 = 0;
              *(_DWORD *)this = 0;
              sub_140236F50((char *)this + 4, 460, v43, 0);
              return MEMORY[0x1401F8B20]((unsigned __int64)&v39 ^ v46);
            }
            v26 = v41;
          }
          else if ( v28 == v27 )
          {
            v27 = v28 + 1;
            Source[v28] = 0;
            v44 = v28 + 1;
          }
          ++v28;
        }
        while ( v28 != v23 );
      }
      *(_DWORD *)this = v27;
      sub_140236F50((char *)this + 4, 460, Source, 4LL * v27);
    }
    else
    {
      v16 = *v14;
      *(_DWORD *)this = v4;
      sub_140236F50((char *)this + 4, 460, (char *)a2 + 4, 4LL * *(unsigned int *)a2);
      if ( !(_DWORD)v16 )
      {
        v44 = 0;
        *(_DWORD *)this = 0;
        sub_140236F50((char *)this + 4, 460, Source, 0);
        return MEMORY[0x1401F8B20]((unsigned __int64)&v39 ^ v46);
      }
      if ( (_DWORD)v16 != 1 )
      {
        v17 = *(_DWORD *)this;
        if ( *(_DWORD *)this )
        {
          LODWORD(v18) = 0;
          v19 = 0;
          do
          {
            v20 = v19++;
            v21 = (unsigned int)v18 + v16 * v14[v20];
            v14[v20] = v21;
            v18 = HIDWORD(v21);
          }
          while ( v19 != v17 );
          if ( HIDWORD(v21) )
          {
            v22 = *(unsigned int *)this;
            if ( (unsigned int)v22 < 0x73 )
            {
              *((_DWORD *)this + v22 + 1) = HIDWORD(v21);
              ++*(_DWORD *)this;
              return MEMORY[0x1401F8B20]((unsigned __int64)&v39 ^ v46);
            }
            goto LABEL_12;
          }
        }
      }
    }
  }
  else
  {
    v5 = *((_DWORD *)a2 + 1);
    if ( !v5 )
    {
      v44 = 0;
      *(_DWORD *)this = 0;
      sub_140236F50((char *)this + 4, 460, Source, 0);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v39 ^ v46);
    }
    if ( v5 != 1 )
    {
      v6 = *(_DWORD *)this;
      if ( *(_DWORD *)this )
      {
        v7 = (char *)this + 4;
        LODWORD(v8) = 0;
        v9 = 0;
        v10 = *((unsigned int *)a2 + 1);
        do
        {
          v11 = v9++;
          v12 = (unsigned int)v8 + v10 * *(unsigned int *)&v7[4 * v11];
          *(_DWORD *)&v7[4 * v11] = v12;
          v8 = HIDWORD(v12);
        }
        while ( v9 != v6 );
        if ( HIDWORD(v12) )
        {
          v13 = *(unsigned int *)this;
          if ( (unsigned int)v13 < 0x73 )
          {
            *((_DWORD *)this + v13 + 1) = HIDWORD(v12);
            ++*(_DWORD *)this;
            return MEMORY[0x1401F8B20]((unsigned __int64)&v39 ^ v46);
          }
LABEL_12:
          v44 = 0;
          *(_DWORD *)this = 0;
          sub_140236F50((char *)this + 4, 460, Source, 0);
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v39 ^ v46);
}

