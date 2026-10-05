/* Address: 0x14024502c | Name: sub_14024502C | Size: 386 bytes */
int __cdecl sub_14024502C(unsigned int ExceptionNum, struct #67 *ExceptionPtr)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  void (__fastcall *v8)(__int64); // r8
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx

  v4 = (_QWORD *)sub_140255BEC();
  v5 = v4;
  if ( v4 )
  {
    v6 = *v4;
    v7 = *v4;
    while ( *(_DWORD *)v7 != ExceptionNum )
    {
      v7 += 16;
      if ( v7 == v6 + 192 )
      {
        v7 = 0;
        break;
      }
    }
    if ( v7 )
    {
      v8 = *(void (__fastcall **)(__int64))(v7 + 8);
      if ( v8 )
      {
        if ( v8 == (void (__fastcall *)(__int64))5 )
        {
          *(_QWORD *)(v7 + 8) = 0;
          return 1;
        }
        if ( v8 == (void (__fastcall *)(__int64))1 )
          return -1;
        v10 = v5[1];
        v5[1] = ExceptionPtr;
        if ( *(_DWORD *)(v7 + 4) != 8 )
        {
          v15 = *(unsigned int *)(v7 + 4);
          *(_QWORD *)(v7 + 8) = 0;
          v8(v15);
          goto LABEL_37;
        }
        v11 = v6 + 48;
        v12 = v11 + 144;
        while ( v11 != v12 )
        {
          *(_QWORD *)(v11 + 8) = 0;
          v11 += 16;
        }
        v13 = *((_DWORD *)v5 + 4);
        switch ( *(_DWORD *)v7 )
        {
          case 0xC000008D:
            v14 = 130;
            break;
          case 0xC000008E:
            v14 = 131;
            break;
          case 0xC000008F:
            v14 = 134;
            break;
          case 0xC0000090:
            v14 = 129;
            break;
          case 0xC0000091:
            v14 = 132;
            break;
          case 0xC0000092:
            v14 = 138;
            break;
          case 0xC0000093:
            v14 = 133;
            break;
          case 0xC00002B4:
            v14 = 142;
            break;
          default:
            v14 = v13;
            if ( *(_DWORD *)v7 != -1073741131 )
            {
LABEL_35:
              ((void (__fastcall *)(__int64, __int64, void (__fastcall *)(__int64), _QWORD))v8)(8, v14, v8, 0);
              *((_DWORD *)v5 + 4) = v13;
LABEL_37:
              v5[1] = v10;
              return -1;
            }
            v14 = 141;
            break;
        }
        *((_DWORD *)v5 + 4) = v14;
        goto LABEL_35;
      }
    }
  }
  return 0;
}

