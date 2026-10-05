/* Address: 0x1400c6210 | Name: sub_1400C6210 | Size: 3867 bytes */
_DWORD *sub_1400C6210()
{
  size_t v0; // rcx
  _DWORD *result; // rax
  int v2; // ebx
  _QWORD *i; // rdi
  int *v4; // rcx
  int v5; // eax
  int *v6; // rcx
  _DWORD *v7; // rcx
  int *v8; // rdx
  int *v9; // rcx
  int *v10; // rcx
  int *v11; // rdx
  int *v12; // rcx
  _DWORD *v13; // rdx
  int *v14; // r8
  int *v15; // rdx
  int v16; // eax
  int *v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  int *v21; // rcx
  int v22; // eax
  int *v23; // rcx
  int v24; // eax
  int *v25; // rdx
  int *v26; // rcx
  int v27; // eax
  int *v28; // rcx
  int v29; // eax
  int *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rax
  int v33; // ecx
  int *v34; // rax
  float v35; // xmm0_4
  _DWORD *v36; // rdx
  int v37; // ecx

  v0 = 138412032;
  if ( dword_191625F50 )
    v0 = 553648128;
  result = malloc(v0);
  qword_196BC59A8 = (__int64)result;
  if ( result )
  {
    v2 = 0;
    for ( i = &unk_18E8E8158; ; i += 1668 )
    {
      result = malloc(0x1004004u);
      *i = result;
      if ( !result )
        break;
      if ( ++v2 >= 64 )
      {
        result = malloc(0x200000u);
        qword_18E9B8950 = (__int64)result;
        if ( result )
        {
          LODWORD(qword_16E67FEF4) = 1;
          dword_16E67FEC4 = 1;
          dword_16D1ED460 = 0x10000000;
          result = malloc(0x10000000u);
          Buffer = result;
          if ( result )
          {
            v4 = (int *)&unk_19153C7A4;
            strcpy(xmmword_191541190, "test2");
            v5 = 0;
            dword_19153C7A0 = 0;
            do
            {
              *v4++ = v5;
              v5 = ++dword_19153C7A0;
            }
            while ( (__int64)v4 < (__int64)dword_19153C824 );
            v6 = (int *)&unk_19153C8A4;
            do
            {
              *v6++ = v5;
              v5 = ++dword_19153C7A0;
            }
            while ( (__int64)v6 < (__int64)dword_19153C924 );
            v7 = &unk_19153C9A8;
            do
            {
              *(v7 - 1) = v5;
              *v7 = ++dword_19153C7A0;
              v7[1] = ++dword_19153C7A0;
              v7[2] = ++dword_19153C7A0;
              v7 += 4;
              v5 = ++dword_19153C7A0;
            }
            while ( (__int64)v7 < (__int64)dword_19153CBA8 );
            v8 = (int *)&unk_19153CDA4;
            v9 = dword_19153D1A4;
            do
            {
              *v8++ = v5;
              v5 = ++dword_19153C7A0;
            }
            while ( (__int64)v8 < (__int64)dword_19153D1A4 );
            do
            {
              *v9++ = v5;
              v5 = ++dword_19153C7A0;
            }
            while ( (__int64)v9 < (__int64)dword_19153D224 );
            v10 = (int *)&unk_19153D2A4;
            do
            {
              *v10++ = v5;
              v5 = ++dword_19153C7A0;
            }
            while ( (__int64)v10 < (__int64)dword_19153D6A4 );
            v11 = dword_19153D824;
            v12 = &dword_19153D924;
            do
            {
              *v11++ = v5;
              v5 = ++dword_19153C7A0;
            }
            while ( (__int64)v11 < (__int64)&dword_19153D924 );
            v13 = &unk_19153D724;
            v14 = dword_19153D7A4;
            do
            {
              *(v13 - 32) = v5;
              *v13++ = ++dword_19153C7A0;
              v5 = ++dword_19153C7A0;
            }
            while ( (__int64)v13 < (__int64)dword_19153D7A4 );
            do
            {
              *v14++ = v5;
              v5 = ++dword_19153C7A0;
            }
            while ( (__int64)v14 < (__int64)dword_19153D824 );
            dword_19153DAAC = v5;
            v15 = &dword_19153D9A4;
            v16 = v5 + 1;
            dword_19153C7A0 = v16;
            do
            {
              *v12++ = v16;
              v16 = ++dword_19153C7A0;
            }
            while ( (__int64)v12 < (__int64)&dword_19153D9A4 );
            do
            {
              *v15++ = v16;
              v16 = ++dword_19153C7A0;
            }
            while ( (__int64)v15 < (__int64)((int *)&qword_19153DA20 + 1) );
            HIDWORD(qword_19153DA20) = v16;
            v17 = (int *)&unk_19153DA2C;
            dword_19153DA28 = v16 + 1;
            v18 = v16 + 2;
            dword_19153C7A0 = v18;
            do
            {
              *v17++ = v18;
              v18 = ++dword_19153C7A0;
            }
            while ( (__int64)v17 < (__int64)&dword_19153DAAC );
            dword_19153DABC = v18;
            v19 = &unk_19153DAE8;
            dword_19153DAC0 = v18 + 1;
            dword_19153DAC4 = v18 + 2;
            dword_19153C7A0 = v18 + 3;
            v20 = 0;
            dword_19153DAE0 = 0;
            do
            {
              *(v19 - 1) = v20;
              *v19 = ++dword_19153DAE0;
              v19[1] = ++dword_19153DAE0;
              v19[2] = ++dword_19153DAE0;
              v19 += 4;
              v20 = ++dword_19153DAE0;
            }
            while ( (__int64)v19 < (__int64)dword_19153EAE8 );
            dword_19153FAE4 = v20;
            v21 = (int *)&unk_19153FF30;
            dword_19153FAE8 = v20 + 1;
            dword_19153FAEC = v20 + 2;
            dword_19153FAF0 = v20 + 3;
            dword_19153FAF4 = v20 + 4;
            dword_19153FAF8 = v20 + 5;
            dword_19153FAFC = v20 + 6;
            dword_19153FB00 = v20 + 7;
            dword_19153FB04 = v20 + 8;
            dword_19153FB08 = v20 + 9;
            dword_19153FB0C = v20 + 10;
            dword_19153FB10 = v20 + 11;
            dword_19153FB18 = v20 + 12;
            dword_19153FB1C = v20 + 13;
            dword_19153FB14 = v20 + 14;
            dword_191540730 = v20 + 15;
            dword_191540734 = v20 + 16;
            dword_191540738 = v20 + 17;
            dword_19154073C = v20 + 18;
            dword_191540740 = v20 + 19;
            dword_191540744 = v20 + 20;
            dword_191540748 = v20 + 21;
            dword_19154074C = v20 + 22;
            v22 = v20 + 23;
            dword_19153DAE0 = v22;
            do
            {
              *v21++ = v22;
              v22 = ++dword_19153DAE0;
            }
            while ( (__int64)v21 < (__int64)dword_191540330 );
            dword_1915407D0 = v22;
            v23 = (int *)&unk_191540750;
            dword_191540814 = v22 + 1;
            dword_191540818 = v22 + 2;
            dword_19154081C = v22 + 3;
            dword_191540820 = v22 + 4;
            dword_191540824 = v22 + 5;
            dword_191540828 = v22 + 6;
            dword_19154082C = v22 + 7;
            dword_191540830 = v22 + 8;
            v24 = v22 + 9;
            dword_19153DAE0 = v24;
            do
            {
              *v23++ = v24;
              v24 = ++dword_19153DAE0;
            }
            while ( (__int64)v23 < (__int64)&dword_1915407D0 );
            dword_1915407D4 = v24;
            v25 = (int *)&unk_191540860;
            v26 = dword_191540C60;
            dword_1915407D8 = v24 + 1;
            dword_1915407DC = v24 + 2;
            dword_1915407E0 = v24 + 3;
            dword_1915407E4 = v24 + 4;
            dword_1915407E8 = v24 + 5;
            dword_1915407EC = v24 + 6;
            dword_1915407F0 = v24 + 7;
            dword_1915407F4 = v24 + 8;
            dword_1915407F8 = v24 + 9;
            dword_1915407FC = v24 + 10;
            dword_191540800 = v24 + 11;
            dword_191540804 = v24 + 12;
            dword_191540808 = v24 + 13;
            dword_19154080C = v24 + 14;
            dword_191540810 = v24 + 15;
            dword_191540834 = v24 + 16;
            dword_191540838 = v24 + 17;
            dword_19154083C = v24 + 18;
            dword_191540840 = v24 + 19;
            dword_191540844 = v24 + 20;
            dword_191540848 = v24 + 21;
            dword_19154084C = v24 + 22;
            dword_191540850 = v24 + 23;
            dword_191540854 = v24 + 24;
            dword_191540858 = v24 + 25;
            dword_19154085C = v24 + 26;
            v27 = v24 + 27;
            dword_19153DAE0 = v27;
            do
            {
              *v25++ = v27;
              v27 = ++dword_19153DAE0;
            }
            while ( (__int64)v25 < (__int64)dword_191540C60 );
            do
            {
              *v26++ = v27;
              v27 = ++dword_19153DAE0;
            }
            while ( (__int64)v26 < (__int64)dword_191540E60 );
            dword_191541060 = v27;
            v28 = (int *)&unk_191541068;
            dword_191541064 = v27 + 1;
            v29 = v27 + 2;
            dword_19153DAE0 = v29;
            do
            {
              *v28++ = v29;
              v29 = ++dword_19153DAE0;
            }
            while ( (__int64)v28 < (__int64)&dword_191541168 );
            dword_191541168 = v29;
            dword_19153DAE0 = v29 + 1;
            strcpy((char *)&qword_15ADC0F98, "concrete");
            dword_15AD76204 = 3;
            dword_15AD75F80 = 4;
            dword_15AD762F0 = 4;
            sub_1400C4AF0();
            dword_1417D95A0[0] = 1008981770;
            dword_1417D95A4[0] = 999649058;
            dword_1417D95C0 = 1001795753;
            xmmword_1417D95C4 = xmmword_1400F7BD0;
            dword_1417D95F8 = 0;
            dword_1417D95D8 = 1007908028;
            dword_1417D95A8 = 1006219569;
            xmmword_1417D95DC = xmmword_1400F7BE0;
            xmmword_1417D95AC = xmmword_1400F7BC0;
            dword_1417D95F0 = 1009948138;
            dword_1417D95BC = 998265388;
            dword_1417D95F4 = 1023611503;
            dword_1417D95D4 = 1006782914;
            dword_1417D95FC = 1069547520;
            dword_1417D95EC = 1002380023;
            sub_1400C7A70();
            v30 = (int *)&unk_191536DD8;
            xmmword_191536C84 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F79C0);
            v31 = 55;
            dword_191536CA4 = 8;
            xmmword_191536CB4 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7A50);
            dword_191536CA8 = 9;
            xmmword_191536D48 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7AB0);
            dword_191536CD4 = 18;
            xmmword_191536C94 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F79F0);
            dword_191536CF8 = 19;
            unk_191536D68 = _mm_load_si128((const __m128i *)&xmmword_1400F7AD0);
            dword_191536CFC = 20;
            xmmword_191536CC4 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7A70);
            dword_191536D08 = 21;
            xmmword_191536DBC = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7AF0);
            dword_191536D0C = 22;
            xmmword_191536D58 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7AC0);
            dword_191536D18 = 23;
            xmmword_191536D28 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7B10);
            dword_191536D1C = 24;
            dword_191536D38 = 25;
            dword_191536D3C = 26;
            dword_191536D8C = 39;
            unk_191536DAC = _mm_load_si128((const __m128i *)&xmmword_1400F7AE0);
            dword_191536DCC = 48;
            dword_191536DD0 = 49;
            dword_191536DD4 = 50;
            dword_191536C80 = 55;
            do
            {
              *v30++ = v31;
              v31 = ++dword_191536C80;
            }
            while ( (__int64)v30 < (__int64)dword_191536E18 );
            dword_191536E58 = v31;
            dword_191536E5C = v31 + 1;
            dword_191536E60 = v31 + 2;
            dword_191536E64 = v31 + 3;
            dword_191536E68 = v31 + 4;
            dword_191536E6C = v31 + 5;
            dword_191536ED8 = v31 + 6;
            dword_191536EDC = v31 + 7;
            dword_191536EE0 = v31 + 8;
            dword_191536EE4 = v31 + 9;
            dword_191536EE8 = v31 + 10;
            dword_191536EEC = v31 + 11;
            dword_191536FD8 = v31 + 12;
            dword_191536FDC = v31 + 13;
            dword_191536FE0 = v31 + 14;
            dword_191536FE4 = v31 + 15;
            dword_191536FE8 = v31 + 16;
            dword_191536FEC = v31 + 17;
            dword_191537058 = v31 + 18;
            dword_19153705C = v31 + 19;
            dword_191537060 = v31 + 20;
            dword_191537064 = v31 + 21;
            dword_191537068 = v31 + 22;
            dword_19153706C = v31 + 23;
            dword_1915370D8 = v31 + 24;
            dword_1915370DC = v31 + 25;
            dword_1915370E0 = v31 + 26;
            dword_1915370E4 = v31 + 27;
            dword_1915370E8 = v31 + 28;
            dword_1915370EC = v31 + 29;
            dword_191536C80 = v31 + 30;
            sub_1400CBEB0(v30, dword_191536E18);
            sub_14002C360(6, 0.0, 2.0, -1.625, 4.0, 4.0, 0.25);
            dword_1405933F0 = 1080033280;
            sub_14002C360(1, 0.0, 0.0, 0.0, 0.375, 6.0, 0.375);
            sub_14002C360(1, 0.0, 3.0, -5.0, 0.25, 0.25, 10.0);
            sub_14002C360(1, 0.0, 3.0, -6.0, 0.3125, 1.0, 0.5);
            sub_14002C360(1, 0.0, 3.0, -10.0, 0.3125, 1.0, 0.5);
            dword_14058A388 = 1078984704;
            dword_14058A38C = -1082130432;
            dword_14058A384 = 0;
            dword_140587F78 = 1077936128;
            sub_14002C360(4, 0.0, 2.625, -8.0, 0.0625, 0.5, 2.0);
            sub_1400C7150();
            v32 = &unk_15ADC0F84;
            do
            {
              *v32 = 1048576000;
              v32[1] = 1048576000;
              v32[2] = 1065353216;
              v32[3] = 1067030938;
              v32 += 46;
            }
            while ( (__int64)v32 < (__int64)dword_15ADCC784 );
            dword_18E9B8940 = -981467136;
            dword_18E9B8944 = 0;
            dword_18E9B8948 = -981467136;
            *((_DWORD *)&unk_15ADC0F94 + 46 * dword_15AD76204) = 1;
            v33 = 0;
            v34 = (int *)&unk_18E8E8150;
            do
            {
              *v34 = v33;
              *(v34 - 1) = 0;
              *(v34 - 4) = -981467136;
              *(v34 - 3) = 0;
              v35 = (float)((float)v33 * 2048.0) - 4096.0;
              *((float *)v34 - 2) = v35;
              v34[3336] = v33;
              v34[3335] = 1;
              *((float *)v34 + 3334) = v35;
              v34[3332] = -989855744;
              v34[3333] = 0;
              v34[6672] = v33;
              v34[6671] = 2;
              *((float *)v34 + 6670) = v35;
              *((_QWORD *)v34 + 3334) = 0;
              v34[10008] = v33;
              v34[10007] = 3;
              *((float *)v34 + 10006) = v35;
              *((_QWORD *)v34 + 5002) = 1157627904;
              v34[13344] = v33;
              v34[13343] = 4;
              *((float *)v34 + 13342) = v35;
              *((_QWORD *)v34 + 6670) = 1166016512;
              v34[16680] = v33;
              v34[16679] = 5;
              *((float *)v34 + 16678) = v35;
              *((_QWORD *)v34 + 8338) = 1170210816;
              v34[20016] = v33;
              v34[20015] = 6;
              *((float *)v34 + 20014) = v35;
              *((_QWORD *)v34 + 10006) = 1174405120;
              v34[23352] = v33++;
              v34[23351] = 7;
              *((float *)v34 + 23350) = v35;
              *((_QWORD *)v34 + 11674) = 1176502272;
              v34 += 26688;
            }
            while ( v33 < 8 );
            v36 = &unk_18E8E8170;
            do
            {
              v37 = 0;
              result = v36;
              do
              {
                *result = v37;
                result[13] = v37;
                result[26] = v37;
                result[39] = v37;
                result[52] = v37;
                result[65] = v37;
                result[78] = v37;
                result[91] = v37;
                result[104] = v37;
                result[117] = v37;
                result[130] = v37;
                result[143] = v37;
                result[156] = v37;
                result[169] = v37;
                result[182] = v37;
                result[195] = v37++;
                *(result - 1) = 0;
                result[12] = 1;
                result[25] = 2;
                result[38] = 3;
                result[51] = 4;
                result[64] = 5;
                result[77] = 6;
                result[90] = 7;
                result[103] = 8;
                result[116] = 9;
                result[129] = 10;
                result[142] = 11;
                result[155] = 12;
                result[168] = 13;
                result[181] = 14;
                result[194] = 15;
                result += 208;
              }
              while ( v37 < 16 );
              v36 += 3336;
            }
            while ( (__int64)v36 < (__int64)dword_18E9B8970 );
          }
        }
        return result;
      }
    }
  }
  return result;
}

