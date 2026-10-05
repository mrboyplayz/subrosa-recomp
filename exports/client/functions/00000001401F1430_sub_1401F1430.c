/* Address: 0x1401f1430 | Name: sub_1401F1430 | Size: 957 bytes */
__int64 __fastcall sub_1401F1430(_DWORD *a1, int a2, int a3, int a4, int *a5, int *a6, int a7)
{
  __int64 v8; // [rsp+0h] [rbp-188h] BYREF
  __int64 v9; // [rsp+28h] [rbp-160h]
  int v10; // [rsp+40h] [rbp-148h] BYREF
  int i; // [rsp+44h] [rbp-144h]
  int *v12; // [rsp+48h] [rbp-140h]
  int *v13; // [rsp+50h] [rbp-138h]
  int v14; // [rsp+58h] [rbp-130h]
  __int64 v15; // [rsp+60h] [rbp-128h]
  _BYTE v16[256]; // [rsp+70h] [rbp-118h] BYREF
  __int64 v17; // [rsp+170h] [rbp-18h]

  if ( a5 && a6 && !(unsigned int)sub_1401F81E0(a3, a4, (_DWORD)a5, (_DWORD)a6, (__int64)&v10) && a4 == 3 )
  {
    v12 = (int *)sub_1401F8260(a1);
    switch ( v10 )
    {
      case 2:
        LODWORD(v9) = 72;
        sub_1401F21E0((_DWORD)v12, 6, 6, 0, (__int64)&unk_140279C90);
        break;
      case 3:
        LODWORD(v9) = 242;
        sub_1401F21E0((_DWORD)v12, 11, 11, 0, (__int64)&unk_140279CF0);
        break;
      case 4:
        LODWORD(v9) = 648;
        sub_1401F21E0((_DWORD)v12, 18, 18, 0, (__int64)&unk_140279E20);
        break;
      default:
        return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v17);
    }
    *a1 = sub_1401F2140((unsigned int)*v12, (unsigned int)v12[1]);
    if ( *a1 )
    {
      v13 = (int *)sub_1401F8290(a1);
      switch ( v10 )
      {
        case 2:
          LODWORD(v9) = 72;
          sub_1401F21E0((_DWORD)v13, 6, 6, 0, (__int64)&unk_14027A0C0);
          break;
        case 3:
          LODWORD(v9) = 242;
          sub_1401F21E0((_DWORD)v13, 11, 11, 3050, (__int64)&unk_14027A120);
          break;
        case 4:
          LODWORD(v9) = 648;
          sub_1401F21E0((_DWORD)v13, 18, 18, 0, (__int64)&unk_14027A230);
          break;
        default:
          return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v17);
      }
      a1[1] = sub_1401F2140((unsigned int)*v13, (unsigned int)v13[1]);
      if ( a1[1] && *a6 + *a5 <= *v12 && a3 <= v12[1] && a3 <= *v13 && *a6 + *a5 <= v13[1] )
      {
        for ( i = 0; i < a3; ++i )
          v16[i] = i;
        v15 = sub_1401F82D0(a1);
        v14 = sub_1401F0780(v15, a2, a3, *a5, *a6, (__int64)v16, a7);
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v17);
}

