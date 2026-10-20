#include "shared_client.h"

//----- (0000000140200244) ----------------------------------------------------
__int64            sub_140200244(__int64 a1)
{
  char masked_bits;
  __int64 masked_bits_2;
  __int64 callee_output_word;
  int unrecovered_register_value;
  __int128 call_result;
  __int128 packed_vector;

  call_result = *sub_1401FEC0C(&packed_vector, 0);
  sub_1401FE248((DName *)&callee_output_word, (     struct StringLiteral *)&call_result);
  masked_bits = **(_BYTE **)&crt_undname_cursor;
  if ( !**(_BYTE **)&crt_undname_cursor )
  {
    sub_1401FEABC((__int64)&callee_output_word, 1u);
    goto LABEL_9;
  }
  ++crt_undname_cursor;
  if ( masked_bits == 48 )
  {
    DWORD2(call_result) = 4;
    *(_QWORD *)&call_result = (uint64)(uintptr_t)("void");
    sub_1401FE888((__int64)&callee_output_word, (__int64)&call_result);
    goto LABEL_9;
  }
  if ( masked_bits == 50 )
  {
    masked_bits_2 = sub_140203DE0((__int64)&packed_vector);
    sub_1401FE908((__int64)&callee_output_word, masked_bits_2);
    goto LABEL_9;
  }
  if ( masked_bits != 53 )
  {
LABEL_9:
    DWORD2(call_result) = 2;
    *(_QWORD *)&call_result = (uint64)(uintptr_t)(") ");
    sub_1401FE888((__int64)&callee_output_word, (__int64)&call_result);
    *(_QWORD *)a1 = callee_output_word;
    *(_DWORD *)(a1 + 8) = unrecovered_register_value;
    return a1;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 2;
  return a1;
}

//----- (000000014020033C) ----------------------------------------------------
DName *           sub_14020033C(DName *a1, __int64 a2)
{
  unsigned int masked_bits;
  unsigned __int8 *record_pointer;
  char *literal_text;
  int selection_code;
  unsigned int loaded_word;
  int selection_code_2;
  char *literal_text_2;
  DName *returned_pointer;
  DName *returned_pointer_2;
  __int64 input_value;
       char **state_address;
  __int64 masked_bits_2;
       char *input_byte;
  int loaded_word_2;
  int masked_bits_3;
       char *input_byte_2;
  int loaded_word_3;
  int cached_selection_code;
  int masked_bits_4;
  __int64 masked_bits_5;
  unsigned __int8 integer_difference;
       char *literal_text_3;
  DName *returned_pointer_3;
       char *saved_literal_text;
  int saved_loaded_word;
       char *literal_text_4;
  int selection_code_3;
       char *literal_text_5;
  int saved_loaded_word_2;

  masked_bits = (unsigned __int8)**(_BYTE **)&crt_undname_cursor;
  if ( !(_BYTE)masked_bits )
  {
    saved_loaded_word_2 = 0;
    literal_text_5 = (     char *)&off_1402848D0;
    state_address = &literal_text_5;
    input_value = a2;
    goto LABEL_86;
  }
  saved_literal_text = nullptr;
  record_pointer = (unsigned __int8 *)(crt_undname_cursor + 1LL);
  saved_loaded_word = 0;
  ++crt_undname_cursor;
  if ( masked_bits <= 0x4E )
  {
    if ( masked_bits != 78 )
    {
      if ( masked_bits >= 0x43 )
      {
        if ( masked_bits <= 0x45 )
        {
          selection_code = 4;
          literal_text = "char";
          goto LABEL_12;
        }
        if ( masked_bits <= 0x47 )
        {
          literal_text = "short";
          goto LABEL_11;
        }
        if ( masked_bits <= 0x49 )
        {
          selection_code = 3;
          literal_text = "int";
          goto LABEL_12;
        }
        if ( masked_bits <= 0x4B )
        {
          selection_code = 4;
          literal_text = "long";
          goto LABEL_12;
        }
        if ( masked_bits == 77 )
        {
          literal_text = "float";
LABEL_11:
          selection_code = 5;
LABEL_12:
          sub_1401FDF84((__int64)&saved_literal_text, literal_text, selection_code);
LABEL_74:
          if ( (_BYTE)masked_bits == 67 )
          {
            literal_text_3 = "signed ";
            saved_loaded_word_2 = 7;
            goto LABEL_81;
          }
          if ( (((_BYTE)masked_bits - 69) & 0xF9) != 0 )
            goto LABEL_82;
LABEL_79:
          literal_text_3 = "unsigned ";
          saved_loaded_word_2 = 9;
LABEL_81:
          literal_text_5 = literal_text_3;
          returned_pointer_3 = sub_1401FE248((DName *)&literal_text_4, (     struct StringLiteral *)&literal_text_5);
          sub_1401FE7C0((__int64)returned_pointer_3, (__int64)&literal_text_5, (__int64)&saved_literal_text);
          saved_literal_text = literal_text_5;
          saved_loaded_word = saved_loaded_word_2;
LABEL_82:
          if ( *(_QWORD *)a2 )
          {
            literal_text_5 = nullptr;
            saved_loaded_word_2 = 0;
            sub_1401FFB98((sr_anon_89 *)&literal_text_5, 32);
            sub_1401FE7C0((__int64)&literal_text_5, (__int64)&literal_text_4, a2);
            sub_1401FE908((__int64)&saved_literal_text, (__int64)&literal_text_4);
          }
          *(_QWORD *)a1 = (uint64)(uintptr_t)(saved_literal_text);
          *((_DWORD *)a1 + 2) = saved_loaded_word;
          return a1;
        }
      }
      goto LABEL_70;
    }
LABEL_73:
    saved_loaded_word_2 = 6;
    literal_text_5 = "double";
    sub_1401FE888((__int64)&saved_literal_text, (__int64)&literal_text_5);
    goto LABEL_74;
  }
  if ( masked_bits == 79 )
  {
    sub_1401FDF84((__int64)&saved_literal_text, "long ", 5);
    goto LABEL_73;
  }
  if ( masked_bits <= 0x53 )
  {
    masked_bits_3 = masked_bits & 3;
  }
  else
  {
    if ( masked_bits == 88 )
    {
      selection_code = 4;
      literal_text = "void";
      goto LABEL_12;
    }
    if ( (_BYTE)masked_bits != 95 )
    {
LABEL_70:
      crt_undname_cursor = (uint64)(uintptr_t)(record_pointer - 1);
      masked_bits_5 = sub_14020197C((__int64)&literal_text_5);
      input_byte = *(     char **)masked_bits_5;
      loaded_word_2 = *(_DWORD *)(masked_bits_5 + 8);
      saved_literal_text = input_byte;
      saved_loaded_word = loaded_word_2;
      if ( input_byte )
        goto LABEL_74;
LABEL_47:
      *(_QWORD *)a1 = (uint64)(uintptr_t)(input_byte);
      *((_DWORD *)a1 + 2) = loaded_word_2;
      return a1;
    }
    loaded_word = *record_pointer;
    crt_undname_cursor = (uint64)(uintptr_t)(record_pointer + 1);
    if ( loaded_word <= 0x4E )
    {
      if ( loaded_word == 78 )
      {
        selection_code_2 = 4;
        literal_text_2 = "bool";
        goto LABEL_55;
      }
      if ( loaded_word > 0x47 )
      {
        if ( loaded_word <= 0x49 )
        {
          literal_text_2 = "__int32";
        }
        else
        {
          if ( loaded_word > 0x4B )
          {
            selection_code_2 = 8;
            literal_text_2 = "__int128";
            goto LABEL_55;
          }
          literal_text_2 = "__int64";
        }
      }
      else
      {
        if ( loaded_word < 0x46 )
        {
          if ( (_BYTE)loaded_word )
          {
            if ( loaded_word != 36 )
            {
              if ( loaded_word - 68 <= 1 )
              {
                selection_code_2 = 6;
                literal_text_2 = "__int8";
LABEL_55:
                sub_1401FDF84((__int64)&saved_literal_text, literal_text_2, selection_code_2);
                goto LABEL_77;
              }
LABEL_48:
              literal_text_2 = "UNKNOWN";
              goto LABEL_54;
            }
            saved_loaded_word_2 = 6;
            literal_text_5 = "__w64 ";
            returned_pointer = sub_14020033C((DName *)&literal_text_4, a2);
            returned_pointer_2 = sub_1401FE248((DName *)&saved_literal_text, (     struct StringLiteral *)&literal_text_5);
            input_value = (__int64)returned_pointer;
            state_address = (     char **)returned_pointer_2;
LABEL_86:
            sub_1401FE7C0((__int64)state_address, (__int64)a1, input_value);
            return a1;
          }
          crt_undname_cursor = (uint64)(uintptr_t)(record_pointer);
          saved_literal_text = (     char *)&off_1402848D0;
          saved_loaded_word = 1;
LABEL_77:
          integer_difference = loaded_word - 69;
          if ( integer_difference > 8u || (integer_difference & 1) != 0 )
            goto LABEL_82;
          goto LABEL_79;
        }
        literal_text_2 = "__int16";
      }
LABEL_54:
      selection_code_2 = 7;
      goto LABEL_55;
    }
    if ( loaded_word != 79 )
    {
      switch ( loaded_word )
      {
        case 'Q':
          literal_text_2 = "char8_t";
          goto LABEL_54;
        case 'R':
          selection_code_2 = 9;
          literal_text_2 = "<unknown>";
          goto LABEL_55;
        case 'S':
          selection_code_2 = 8;
          literal_text_2 = "char16_t";
          goto LABEL_55;
        case 'U':
          selection_code_2 = 8;
          literal_text_2 = "char32_t";
          goto LABEL_55;
        case 'W':
          literal_text_2 = "wchar_t";
          goto LABEL_54;
      }
      if ( loaded_word <= 0x57 || (unsigned __int8)loaded_word > 0x59u )
        goto LABEL_48;
      crt_undname_cursor = (uint64)(uintptr_t)(record_pointer);
      masked_bits_2 = sub_14020197C((__int64)&literal_text_5);
      input_byte = *(     char **)masked_bits_2;
      loaded_word_2 = *(_DWORD *)(masked_bits_2 + 8);
      saved_literal_text = input_byte;
      saved_loaded_word = loaded_word_2;
      if ( !input_byte )
        goto LABEL_47;
      goto LABEL_77;
    }
    masked_bits_3 = -2;
  }
  saved_literal_text = nullptr;
  saved_loaded_word = 0;
  input_byte_2 = *(     char **)a2;
  loaded_word_3 = *(_DWORD *)(a2 + 8);
  literal_text_5 = input_byte_2;
  saved_loaded_word_2 = loaded_word_3;
  if ( masked_bits_3 == -2 )
  {
    saved_loaded_word_2 = loaded_word_3 | 0x800;
    sub_14020353C((DName *)&literal_text_4, &saved_literal_text, (__int64)&literal_text_5, 0);
    cached_selection_code = selection_code_3;
    if ( (selection_code_3 & 0x800) == 0 )
    {
      saved_loaded_word_2 = 2;
      literal_text_5 = "[]";
      sub_1401FE888((__int64)&literal_text_4, (__int64)&literal_text_5);
      cached_selection_code = selection_code_3;
    }
    *(_QWORD *)a1 = (uint64)(uintptr_t)(literal_text_4);
    *((_DWORD *)a1 + 2) = cached_selection_code;
  }
  else
  {
    if ( !input_byte_2 )
    {
      masked_bits_4 = masked_bits_3 & 2;
      if ( (masked_bits_3 & 1) != 0 )
      {
        sub_1401FDF84((__int64)&saved_literal_text, "const", 5);
        if ( masked_bits_4 )
        {
          selection_code_3 = 9;
          literal_text_4 = " volatile";
          sub_1401FE888((__int64)&saved_literal_text, (__int64)&literal_text_4);
        }
      }
      else if ( (masked_bits_3 & 2) != 0 )
      {
        sub_1401FDF84((__int64)&saved_literal_text, "volatile", 8);
      }
    }
    sub_14020353C(a1, &saved_literal_text, (__int64)&literal_text_5, 1);
  }
  return a1;
}

// 140200411: conditional instruction was optimized away because esi.4 is in (50..FF)
// 140200502: conditional instruction was optimized away because ebx.4 is in (4C..4D)
// 140200797: conditional instruction was optimized away because si.1 is in (1..42|44..4F|54..5E|>=60u)

//----- (0000000140200880) ----------------------------------------------------
__m128i *           sub_140200880(UnDecorator *this, __m128i *a2, __int64 a3)
{
  unsigned __int64 input_value;
  __m128i *int64_result;
  unsigned __int64 byte_count;
  unsigned __int64 iteration_count;
  unsigned __int64 integer_sum;
  _BYTE scratch_buffer[24];
  int Str2;

  input_value = (int)a3;
  int64_result = a2;
  sub_140205C58((__int64)scratch_buffer, (__int64)a2, a3);
  if ( scratch_buffer[8] )
    return nullptr;
  if ( !g_144CBE638 )
    return nullptr;
  byte_count = -1;
  iteration_count = -1;
  do
    ++iteration_count;
  while ( *(_BYTE *)(g_144CBE620 + iteration_count) );
  if ( g_144CBE638 >= iteration_count )
    return nullptr;
  Str2 = 6824996;
  do
    ++byte_count;
  while ( *((_BYTE *)&Str2 + byte_count) );
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(g_144CBE620 + g_144CBE638), (const char *)(uintptr_t)(&Str2), byte_count) )
    return nullptr;
  integer_sum = byte_count + iteration_count + 1;
  if ( integer_sum < iteration_count )
    return nullptr;
  if ( int64_result )
  {
    if ( integer_sum >= input_value )
      return nullptr;
  }
  else
  {
    int64_result = (__m128i *)(*(__int64 (           **)(unsigned __int64))(unsigned int *)&g_144CBE640)((integer_sum + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !int64_result )
      return nullptr;
  }
  crt_memcpy(int64_result, *(     __m128i **)(unsigned int *)&g_144CBE620, g_144CBE638);
  crt_memcpy((__m128i *)((char *)int64_result + g_144CBE638), (     __m128i *)&Str2, byte_count);
  crt_memcpy(
    (__m128i *)((char *)int64_result + byte_count + g_144CBE638),
    (     __m128i *)(g_144CBE638 + g_144CBE620),
    iteration_count - g_144CBE638 + 1);
  return int64_result;
}

//----- (00000001402009A0) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1402009A0(__int64 a1)
{
  sub_1402017C8(a1, 0);
  return a1;
}

//----- (00000001402009BC) ----------------------------------------------------
__int64            sub_1402009BC(__int64 a1)
{
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  int selection_code;
  _OWORD *returned_pointer;
  __int64 selection_flag;
  int selection_code_2;
  __int128 packed_vector;

  if ( !**(_BYTE **)&crt_undname_cursor )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    return a1;
  }
  masked_bits = (char)**(_BYTE **)&crt_undname_cursor - 65;
  ++crt_undname_cursor;
  if ( masked_bits > 0x14 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
    return a1;
  }
  selection_code_2 = 2;
  selection_flag = 0;
  if ( (~(g_144CBE628 >> 1) & 1) != 0 )
  {
    masked_bits_2 = masked_bits & 0xFFFFFFFE;
    if ( masked_bits_2 > 0xC )
    {
      switch ( masked_bits_2 )
      {
        case 0xEu:
          selection_code = 8;
          goto LABEL_25;
        case 0x10u:
          selection_code = 6;
          goto LABEL_25;
        case 0x12u:
          selection_code = 9;
          goto LABEL_25;
        case 0x14u:
          selection_code = 10;
          goto LABEL_25;
      }
    }
    else
    {
      switch ( masked_bits_2 )
      {
        case 0xCu:
          selection_code = 7;
          goto LABEL_25;
        case 0u:
          selection_code = 1;
          goto LABEL_25;
        case 2u:
          selection_code = 2;
          goto LABEL_25;
        case 4u:
          selection_code = 4;
          goto LABEL_25;
        case 6u:
          selection_code = 3;
          goto LABEL_25;
        case 8u:
          selection_code = 5;
LABEL_25:
          returned_pointer = sub_1401FEC0C(&packed_vector, selection_code);
          selection_code_2 = 0;
          sub_1401FDF84((__int64)&selection_flag, *(char **)returned_pointer, *((_DWORD *)returned_pointer + 2));
          break;
      }
    }
  }
  *(_QWORD *)a1 = selection_flag;
  *(_DWORD *)(a1 + 8) = selection_code_2;
  return a1;
}

//----- (0000000140200AFC) ----------------------------------------------------
__int64            sub_140200AFC(__int64 a1, __int64 a2, int a3, _QWORD *a4, int a5)
{
  int input_value;
  int dword2_result;
  __int64 loaded_word;
  int selection_code;
  int masked_bits;
  __int64 cached_loaded_word;
  unsigned int masked_bits_2;
  int selection_code_2;
  __int64 masked_bits_3;
  char *state_address;
  __int64 masked_bits_4;
  char *state_address_2;
  __int64 masked_bits_5;
  __int64 masked_bits_6;
  __int64 loaded_word_2;
  _OWORD *returned_pointer;
  _OWORD *returned_pointer_2;
  int selection_code_3;
  __int64 masked_bits_7;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  unsigned int dword2_result_2;
  __int64 masked_bits_8;
  __int64 masked_bits_9;
  __int64 masked_bits_10;
  __int64 masked_bits_11;
  DName *returned_pointer_3;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 call_result;
  __int64 masked_bits_12;
  __int64 call_result_2;
  char masked_bits_13;
  int masked_bits_14;
  __int64 call_result_3;
  __int64 masked_bits_15;
  __int64 call_result_4;
  DName *returned_pointer_4;
  DName *returned_pointer_5;
  __int64 masked_bits_16;
  __int64 masked_bits_17;
  __int64 masked_bits_18;
  __int128 *state_address_3;
  _QWORD *input_cursor;
  int option_flags;
  __int64 masked_bits_19;
  _QWORD *input_cursor_2;
  __int128 *state_address_4;
  _BYTE scratch_buffer[8];
  __int128 masked_bits_20;
  __int128 saved_masked_bits;
  __int64 unrecovered_register_value_5;
  __int64 saved_loaded_word;
  __int64 packed_word_bits;
  __int64 saved_loaded_word_2;
  int unused_written_slot;
  _BYTE scratch_buffer_2[16];
  __int64 selection_flag;
  unsigned int selection_flag_2;
  _BYTE scratch_buffer_3[16];
  __int128 packed_vector;
  _BYTE scratch_buffer_4[16];
  char callee_output_word;
  char callee_output_word_2;
  __int128 packed_vector_2;
  _BYTE scratch_buffer_5[16];
  _BYTE scratch_buffer_6[16];
  __int128 packed_vector_3;
  __int128 packed_vector_4;
  _BYTE scratch_buffer_7[24];
  int input_value_2;

  input_value_2 = a3;
  selection_flag = 0;
  selection_flag_2 = 0;
  scratch_buffer[0] = 0;
  if ( !**(_BYTE **)&crt_undname_cursor )
  {
    if ( !a5 )
    {
      if ( *(_QWORD *)a2 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 && *a4 )
        {
          DWORD2(masked_bits_20) = 0;
          *(_QWORD *)&masked_bits_20 = (uint64)(uintptr_t)(&off_1402848D0);
          sub_1401FE7C0((__int64)&masked_bits_20, (__int64)&selection_flag, (__int64)a4);
          masked_bits_19 = sub_1401FE7EC((__int64)&selection_flag, (__int64)scratch_buffer_2, 32);
          input_cursor_2 = (_QWORD *)a2;
          state_address_4 = (__int128 *)masked_bits_19;
LABEL_97:
          sub_1401FE7C0((__int64)state_address_4, a1, (__int64)input_cursor_2);
          return a1;
        }
        input_cursor_2 = (_QWORD *)a2;
LABEL_99:
        DWORD2(masked_bits_20) = 0;
        *(_QWORD *)&masked_bits_20 = (uint64)(uintptr_t)(&off_1402848D0);
        state_address_4 = &masked_bits_20;
        goto LABEL_97;
      }
      if ( *a4 )
      {
        input_cursor_2 = a4;
        goto LABEL_99;
      }
    }
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    return a1;
  }
  input_value = a5;
  if ( **(_BYTE **)&crt_undname_cursor == 36 )
  {
    sub_140201C9C((__int64)&saved_loaded_word, &input_value_2, scratch_buffer, a5);
    if ( saved_loaded_word )
    {
      *(_QWORD *)a1 = saved_loaded_word;
      dword2_result = packed_word_bits;
      goto LABEL_5;
    }
  }
  loaded_word = 0;
  saved_loaded_word_2 = 0;
  unused_written_slot = 0;
  saved_loaded_word = 0;
  selection_code = 22;
  masked_bits = (char)**(_BYTE **)&crt_undname_cursor;
  LODWORD(packed_word_bits) = 0;
  LOWORD(unrecovered_register_value_5) = 0;
  cached_loaded_word = 0;
  if ( (char)masked_bits >= 65 )
    selection_code = 65;
  masked_bits_2 = masked_bits - selection_code;
  while ( 1 )
  {
    switch ( masked_bits_2 )
    {
      case 4u:
        if ( (~((g_144CBE628 | HIWORD(g_144CBE628)) >> 1) & 1) == 0 )
          break;
        selection_code_2 = 11;
        if ( !loaded_word )
        {
          state_address_2 = scratch_buffer_2;
          goto LABEL_31;
        }
        saved_masked_bits = *sub_1401FEC0C(&packed_vector_4, 11);
        masked_bits_3 = sub_1401FE7EC((__int64)&saved_loaded_word_2, (__int64)scratch_buffer_7, 32);
        state_address = scratch_buffer_3;
        goto LABEL_17;
      case 5u:
        if ( (~(g_144CBE628 >> 1) & 1) != 0 )
        {
          if ( cached_loaded_word )
          {
            saved_masked_bits = *sub_1401FEC0C(&packed_vector_2, 13);
            masked_bits_5 = sub_1401FE7EC((__int64)&saved_loaded_word, (__int64)scratch_buffer_5, 32);
            masked_bits_6 = sub_1401FE794(masked_bits_5, (__int64)scratch_buffer_6, (__int64)&saved_masked_bits);
            loaded_word_2 = *(_QWORD *)masked_bits_6;
            LODWORD(masked_bits_6) = *(_DWORD *)(masked_bits_6 + 8);
            saved_loaded_word = loaded_word_2;
            LODWORD(packed_word_bits) = masked_bits_6;
          }
          else
          {
            returned_pointer = sub_1401FEC0C(&packed_vector_3, 13);
            saved_loaded_word = 0;
            LODWORD(packed_word_bits) = 0;
            sub_1401FDF84((__int64)&saved_loaded_word, *(char **)returned_pointer, *((_DWORD *)returned_pointer + 2));
          }
        }
        break;
      case 6u:
        if ( !input_value )
          goto LABEL_57;
        LOBYTE(unrecovered_register_value_5) = 1;
        break;
      case 7u:
        if ( !input_value )
          goto LABEL_57;
        BYTE1(unrecovered_register_value_5) = 1;
        break;
      case 8u:
        if ( (~(g_144CBE628 >> 1) & 1) != 0 )
        {
          selection_code_2 = 12;
          if ( !loaded_word )
          {
            state_address_2 = &callee_output_word_2;
LABEL_31:
            returned_pointer_2 = sub_1401FEC0C(state_address_2, selection_code_2);
            saved_loaded_word_2 = 0;
            unused_written_slot = 0;
            sub_1401FDF84((__int64)&saved_loaded_word_2, *(char **)returned_pointer_2, *((_DWORD *)returned_pointer_2 + 2));
            loaded_word = saved_loaded_word_2;
            break;
          }
          saved_masked_bits = *sub_1401FEC0C(&packed_vector, 12);
          masked_bits_3 = sub_1401FE7EC((__int64)&saved_loaded_word_2, (__int64)scratch_buffer_4, 32);
          state_address = &callee_output_word;
LABEL_17:
          masked_bits_4 = sub_1401FE794(masked_bits_3, (__int64)state_address, (__int64)&saved_masked_bits);
          loaded_word = *(_QWORD *)masked_bits_4;
          LODWORD(masked_bits_4) = *(_DWORD *)(masked_bits_4 + 8);
          saved_loaded_word_2 = loaded_word;
          unused_written_slot = masked_bits_4;
        }
        break;
      default:
        if ( **(_BYTE **)&crt_undname_cursor )
          ++crt_undname_cursor;
        if ( masked_bits_2 > 0x1F )
          goto LABEL_57;
        masked_bits_20 = *((_OWORD *)&off_140283B20 + input_value_2);
        sub_1401FE248((DName *)&saved_masked_bits, (     struct StringLiteral *)&masked_bits_20);
        masked_bits_7 = sub_1401FE7C0((__int64)&selection_flag, (__int64)scratch_buffer_2, (__int64)&saved_masked_bits);
        dword2_result_2 = *(_DWORD *)(masked_bits_7 + 8);
        *(_QWORD *)&saved_masked_bits = *(_QWORD *)masked_bits_7;
        DWORD2(saved_masked_bits) = dword2_result_2;
        if ( loaded_word )
        {
          masked_bits_8 = sub_1401FE7EC((__int64)&saved_masked_bits, (__int64)scratch_buffer_2, 32);
          masked_bits_9 = sub_1401FE7C0(masked_bits_8, (__int64)scratch_buffer_3, (__int64)&saved_loaded_word_2);
          dword2_result_2 = *(_DWORD *)(masked_bits_9 + 8);
          *(_QWORD *)&saved_masked_bits = *(_QWORD *)masked_bits_9;
          DWORD2(saved_masked_bits) = dword2_result_2;
        }
        if ( saved_loaded_word )
        {
          masked_bits_10 = sub_1401FE7EC((__int64)&saved_loaded_word, (__int64)scratch_buffer_2, 32);
          masked_bits_11 = sub_1401FE7C0(masked_bits_10, (__int64)scratch_buffer_3, (__int64)&saved_masked_bits);
          dword2_result_2 = *(_DWORD *)(masked_bits_11 + 8);
          *(_QWORD *)&saved_masked_bits = *(_QWORD *)masked_bits_11;
          DWORD2(saved_masked_bits) = dword2_result_2;
        }
        if ( (masked_bits_2 & 0x10) != 0 )
        {
          if ( input_value )
          {
LABEL_57:
            *(_DWORD *)(a1 + 8) = 0;
            *(_BYTE *)(a1 + 8) = 2;
            *(_QWORD *)a1 = 0;
            return a1;
          }
          if ( SDWORD2(masked_bits_20) > 0 )
          {
            DWORD2(masked_bits_20) = 2;
            *(_QWORD *)&masked_bits_20 = (uint64)(uintptr_t)("::");
            returned_pointer_3 = sub_1401FE248((DName *)scratch_buffer_2, (     struct StringLiteral *)&masked_bits_20);
            sub_1401FE7C0((__int64)returned_pointer_3, (__int64)&masked_bits_20, (__int64)&saved_masked_bits);
            *(_QWORD *)&saved_masked_bits = masked_bits_20;
            DWORD2(saved_masked_bits) = DWORD2(masked_bits_20);
            if ( **(_BYTE **)&crt_undname_cursor )
            {
              call_result = sub_14020392C((__int64)scratch_buffer_2, unrecovered_register_value_3, unrecovered_register_value_4);
              masked_bits_12 = sub_1401FE7C0(call_result, (__int64)scratch_buffer_3, (__int64)&saved_masked_bits);
              dword2_result_2 = *(_DWORD *)(masked_bits_12 + 8);
              *(_QWORD *)&saved_masked_bits = *(_QWORD *)masked_bits_12;
            }
            else
            {
              DWORD2(masked_bits_20) = 0;
              *(_QWORD *)&masked_bits_20 = (uint64)(uintptr_t)(&off_1402848D0);
              sub_1401FE7C0((__int64)&masked_bits_20, (__int64)&selection_flag, (__int64)&saved_masked_bits);
              dword2_result_2 = selection_flag_2;
              *(_QWORD *)&saved_masked_bits = selection_flag;
            }
LABEL_54:
            DWORD2(saved_masked_bits) = dword2_result_2;
            goto LABEL_55;
          }
          if ( !**(_BYTE **)&crt_undname_cursor )
            goto LABEL_58;
          call_result_2 = sub_14020392C((__int64)scratch_buffer_2, unrecovered_register_value, unrecovered_register_value_2);
          if ( BYTE8(saved_masked_bits) != 3 && *(char *)(call_result_2 + 8) > 1 )
          {
            dword2_result_2 = *(unsigned __int8 *)(call_result_2 + 8) | dword2_result_2 & 0xFFFFFF00;
            goto LABEL_54;
          }
LABEL_55:
          masked_bits_13 = **(_BYTE **)&crt_undname_cursor;
          if ( **(_BYTE **)&crt_undname_cursor )
          {
            ++crt_undname_cursor;
            if ( masked_bits_13 != 64 )
              goto LABEL_57;
          }
          else
          {
LABEL_58:
            sub_1401FEABC((__int64)&saved_masked_bits, 1u);
            dword2_result_2 = DWORD2(saved_masked_bits);
          }
        }
        masked_bits_14 = masked_bits_2 & 0xC;
        if ( (~(g_144CBE628 >> 1) & 1) != 0 )
        {
          if ( masked_bits_14 == 12 )
          {
            if ( input_value )
              goto LABEL_57;
            call_result_3 = sub_140200244((__int64)scratch_buffer_2);
            masked_bits_15 = sub_1401FE7C0(call_result_3, (__int64)scratch_buffer_3, (__int64)&saved_masked_bits);
            dword2_result_2 = *(_DWORD *)(masked_bits_15 + 8);
            *(_QWORD *)&saved_masked_bits = *(_QWORD *)masked_bits_15;
LABEL_67:
            DWORD2(saved_masked_bits) = dword2_result_2;
          }
        }
        else if ( masked_bits_14 == 12 )
        {
          call_result_4 = sub_140200244((__int64)scratch_buffer_2);
          if ( BYTE8(saved_masked_bits) != 3 && *(char *)(call_result_4 + 8) > 1 )
          {
            dword2_result_2 = *(unsigned __int8 *)(call_result_4 + 8) | dword2_result_2 & 0xFFFFFF00;
            goto LABEL_67;
          }
        }
        if ( (masked_bits_2 & 2) != 0 )
        {
          DWORD2(masked_bits_20) = 9;
          *(_QWORD *)&masked_bits_20 = (uint64)(uintptr_t)("volatile ");
          returned_pointer_4 = sub_1401FE248((DName *)scratch_buffer_2, (     struct StringLiteral *)&masked_bits_20);
          sub_1401FE7C0((__int64)returned_pointer_4, (__int64)&masked_bits_20, (__int64)&saved_masked_bits);
          dword2_result_2 = DWORD2(masked_bits_20);
          *(_QWORD *)&saved_masked_bits = masked_bits_20;
          DWORD2(saved_masked_bits) = DWORD2(masked_bits_20);
        }
        if ( (masked_bits_2 & 1) != 0 )
        {
          DWORD2(masked_bits_20) = 6;
          *(_QWORD *)&masked_bits_20 = (uint64)(uintptr_t)("const ");
          returned_pointer_5 = sub_1401FE248((DName *)scratch_buffer_2, (     struct StringLiteral *)&masked_bits_20);
          sub_1401FE7C0((__int64)returned_pointer_5, (__int64)&masked_bits_20, (__int64)&saved_masked_bits);
          dword2_result_2 = DWORD2(masked_bits_20);
          *(_QWORD *)&saved_masked_bits = masked_bits_20;
          DWORD2(saved_masked_bits) = DWORD2(masked_bits_20);
        }
        if ( (_BYTE)unrecovered_register_value_5 )
        {
          DWORD2(masked_bits_20) = 2;
          *(_QWORD *)&masked_bits_20 = (uint64)(uintptr_t)("& ");
          masked_bits_16 = sub_1401FE794((__int64)&saved_masked_bits, (__int64)scratch_buffer_2, (__int64)&masked_bits_20);
          dword2_result_2 = *(_DWORD *)(masked_bits_16 + 8);
          *(_QWORD *)&saved_masked_bits = *(_QWORD *)masked_bits_16;
          DWORD2(saved_masked_bits) = dword2_result_2;
        }
        if ( BYTE1(unrecovered_register_value_5) )
        {
          DWORD2(masked_bits_20) = 3;
          *(_QWORD *)&masked_bits_20 = (uint64)(uintptr_t)("&& ");
          masked_bits_17 = sub_1401FE794((__int64)&saved_masked_bits, (__int64)scratch_buffer_2, (__int64)&masked_bits_20);
          dword2_result_2 = *(_DWORD *)(masked_bits_17 + 8);
          *(_QWORD *)&saved_masked_bits = *(_QWORD *)masked_bits_17;
          DWORD2(saved_masked_bits) = dword2_result_2;
        }
        if ( !input_value )
        {
          if ( *(_QWORD *)a2 )
          {
            dword2_result_2 = *(_DWORD *)(a2 + 8);
            if ( (dword2_result_2 & 0x100) == 0 && *a4 )
            {
              saved_loaded_word = 0;
              LODWORD(packed_word_bits) = 0;
              sub_1401FFB98((sr_anon_89 *)&saved_loaded_word, 32);
              sub_1401FE7C0((__int64)&saved_loaded_word, (__int64)&masked_bits_20, (__int64)a4);
              masked_bits_18 = sub_1401FE7EC((__int64)&masked_bits_20, (__int64)scratch_buffer_2, 32);
              state_address_3 = (__int128 *)sub_1401FE7C0(masked_bits_18, (__int64)scratch_buffer_3, a2);
              goto LABEL_87;
            }
            if ( (dword2_result_2 & 0x800) != 0 )
            {
              *(_QWORD *)&saved_masked_bits = *(_QWORD *)a2;
              goto LABEL_88;
            }
            saved_loaded_word = 0;
            LODWORD(packed_word_bits) = 0;
            sub_1401FFB98((sr_anon_89 *)&saved_loaded_word, 32);
            input_cursor = (_QWORD *)a2;
          }
          else
          {
            if ( !*a4 )
              goto LABEL_88;
            saved_loaded_word = 0;
            LODWORD(packed_word_bits) = 0;
            sub_1401FFB98((sr_anon_89 *)&saved_loaded_word, 32);
            input_cursor = a4;
          }
          sub_1401FE7C0((__int64)&saved_loaded_word, (__int64)&masked_bits_20, (__int64)input_cursor);
          state_address_3 = &masked_bits_20;
LABEL_87:
          sub_1401FE908((__int64)&saved_masked_bits, (__int64)state_address_3);
          dword2_result_2 = DWORD2(saved_masked_bits);
        }
LABEL_88:
        option_flags = dword2_result_2 | 0x100;
        if ( scratch_buffer[0] )
          option_flags |= 0x2000u;
        *(_QWORD *)a1 = saved_masked_bits;
        *(_DWORD *)(a1 + 8) = option_flags;
        return a1;
    }
    ++crt_undname_cursor;
    if ( **(_BYTE **)&crt_undname_cursor == 36 )
    {
      sub_140201C9C((__int64)&masked_bits_20, &input_value_2, scratch_buffer, input_value);
      if ( (_QWORD)masked_bits_20 )
        break;
    }
    selection_code_3 = 22;
    if ( (char)**(_BYTE **)&crt_undname_cursor >= 65 )
      selection_code_3 = 65;
    masked_bits_2 = (char)**(_BYTE **)&crt_undname_cursor - selection_code_3;
    cached_loaded_word = saved_loaded_word;
  }
  *(_QWORD *)a1 = masked_bits_20;
  dword2_result = DWORD2(masked_bits_20);
LABEL_5:
  *(_DWORD *)(a1 + 8) = dword2_result;
  return a1;
}

//----- (0000000140201394) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140201394(__int64 a1)
{
  __int64 selection_flag;
  int unused_written_slot;
  __int64 selection_flag_2;
  int unused_written_slot_2;

  selection_flag = 0;
  selection_flag_2 = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  sub_140200AFC(a1, (__int64)&selection_flag_2, 0, &selection_flag, 0);
  return a1;
}

//----- (00000001402013D0) ----------------------------------------------------
DName *           sub_1402013D0(DName *a1, struct DName *a2)
{
       char **state_address;
  __int64 masked_bits;
  __int64 loaded_word;
  int unused_written_slot;
       char *literal_text;
  int unused_written_slot_2;
  _BYTE scratch_buffer[16];

  sub_1401FE2A4((DName *)&loaded_word, a2);
  switch ( **(_BYTE **)&crt_undname_cursor )
  {
    case 0:
      unused_written_slot_2 = 0;
      literal_text = (     char *)&off_1402848D0;
      state_address = &literal_text;
      goto LABEL_10;
    case 0x3F:
      literal_text = nullptr;
      unused_written_slot_2 = 0;
      ++crt_undname_cursor;
      masked_bits = sub_140200AFC((__int64)scratch_buffer, (__int64)&loaded_word, 0, &literal_text, 0);
      loaded_word = *(_QWORD *)masked_bits;
      unused_written_slot = *(_DWORD *)(masked_bits + 8);
      break;
    case 0x58:
      ++crt_undname_cursor;
      if ( !loaded_word )
      {
        unused_written_slot_2 = 4;
        literal_text = "void";
        sub_1401FE248(a1, (     struct StringLiteral *)&literal_text);
        return a1;
      }
      unused_written_slot_2 = 5;
      literal_text = "void ";
      state_address = (     char **)sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&literal_text);
LABEL_10:
      sub_1401FE7C0((__int64)state_address, (__int64)a1, (__int64)&loaded_word);
      return a1;
  }
  sub_1402030E0(a1, (__int64)&loaded_word);
  return a1;
}

//----- (00000001402014E4) ----------------------------------------------------
__int64            sub_1402014E4(__int64 a1, __int64 a2, __int64 a3)
{
  char masked_bits;
  _BYTE *byte_cursor;
  _BYTE *byte_cursor_2;
  _BYTE *i;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  unsigned int option_flags;
  __int64 loaded_word;
  BOOL comparison_result;
  int state_address;
  __int64 masked_bits_2;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 masked_bits_3;
  __int64 masked_bits_4;
  _BYTE *byte_cursor_3;
  __int64 masked_bits_5;
  __int64 loaded_word_2;
  unsigned int saved_option_flags;
  __int64 loaded_word_3;
  int loaded_word_4;
       char *literal_text;
  int unused_written_slot;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[32];

  ++g_144CBE63C;
  if ( (g_144CBE628 & 0x2000) != 0 )
  {
    g_144CBE628 &= ~0x2000u;
    sub_1402013D0((DName *)&loaded_word_3, nullptr);
    g_144CBE628 |= 0x2000u;
LABEL_3:
    *(_QWORD *)a1 = loaded_word_3;
    *(_DWORD *)(a1 + 8) = loaded_word_4;
    goto LABEL_47;
  }
  masked_bits = **(_BYTE **)&crt_undname_cursor;
  LOBYTE(a2) = 63;
  if ( **(_BYTE **)&crt_undname_cursor == 63 )
  {
    byte_cursor = (_BYTE *)(crt_undname_cursor + 1LL);
    crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor);
    if ( *byte_cursor == 63 )
    {
      byte_cursor_2 = byte_cursor + 1;
      if ( *byte_cursor_2 == 63 )
      {
        sub_1402014E4((__int64)&loaded_word_3, a2, a3);
        for ( i = *(_BYTE **)&crt_undname_cursor; *i; crt_undname_cursor = (uint64)(uintptr_t)(i) )
          ++i;
        goto LABEL_3;
      }
      if ( *byte_cursor_2 == 36 )
      {
        sub_1402045BC((__int64)&loaded_word_2, 1);
      }
      else
      {
        crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor_2);
        sub_14020285C(&loaded_word_2, 0, nullptr);
      }
    }
    else
    {
      sub_140205810((__int64)&loaded_word_2, 1, 0);
    }
    option_flags = saved_option_flags;
    loaded_word = loaded_word_2;
    comparison_result = loaded_word_2 && (saved_option_flags & 0x200) != 0;
    state_address = (saved_option_flags >> 15) & 1;
    if ( (char)saved_option_flags > 1 )
    {
LABEL_20:
      *(_QWORD *)a1 = loaded_word;
      *(_DWORD *)(a1 + 8) = option_flags;
      goto LABEL_47;
    }
    if ( (**(_BYTE **)&crt_undname_cursor & 0xBF) != 0 )
    {
      sub_14020392C((__int64)&loaded_word_3, unrecovered_register_value, unrecovered_register_value_2);
      if ( loaded_word_3 )
      {
        if ( !LOBYTE(g_144CBE62C) )
        {
          literal_text = "::";
          unused_written_slot = 2;
          masked_bits_4 = sub_1401FE794((__int64)&loaded_word_3, (__int64)scratch_buffer_2, (__int64)&literal_text);
          byte_cursor_3 = scratch_buffer;
          goto LABEL_27;
        }
        LOBYTE(g_144CBE62C) = 0;
        masked_bits_2 = sub_1401FE7C0((__int64)&loaded_word_2, (__int64)&literal_text, (__int64)&loaded_word_3);
        loaded_word = *(_QWORD *)masked_bits_2;
        loaded_word_2 = *(_QWORD *)masked_bits_2;
        option_flags = *(_DWORD *)(masked_bits_2 + 8);
        saved_option_flags = option_flags;
        if ( **(_BYTE **)&crt_undname_cursor != 64 )
        {
          masked_bits_3 = sub_14020392C((__int64)&literal_text, unrecovered_register_value_3, unrecovered_register_value_4);
          loaded_word_3 = *(_QWORD *)masked_bits_3;
          loaded_word_4 = *(_DWORD *)(masked_bits_3 + 8);
          literal_text = "::";
          unused_written_slot = 2;
          masked_bits_4 = sub_1401FE794((__int64)&loaded_word_3, (__int64)scratch_buffer, (__int64)&literal_text);
          byte_cursor_3 = scratch_buffer_2;
LABEL_27:
          masked_bits_5 = sub_1401FE7C0(masked_bits_4, (__int64)byte_cursor_3, (__int64)&loaded_word_2);
          option_flags = *(_DWORD *)(masked_bits_5 + 8);
          loaded_word = *(_QWORD *)masked_bits_5;
          saved_option_flags = option_flags;
          loaded_word_2 = loaded_word;
        }
      }
    }
    if ( comparison_result && loaded_word )
    {
      option_flags |= 0x200u;
      saved_option_flags = option_flags;
    }
    if ( state_address )
    {
      option_flags |= 0x8000u;
      saved_option_flags = option_flags;
    }
    if ( loaded_word && (option_flags & 0x1000) == 0 )
    {
      if ( **(_BYTE **)&crt_undname_cursor )
      {
        if ( **(_BYTE **)&crt_undname_cursor != 64 )
        {
          *(_DWORD *)(a1 + 8) = 0;
          *(_BYTE *)(a1 + 8) = 2;
          *(_QWORD *)a1 = 0;
          goto LABEL_47;
        }
        ++crt_undname_cursor;
      }
      if ( (g_144CBE628 & 0x1000) == 0 || comparison_result || (option_flags & 0x8000) != 0 )
      {
        sub_1401FEC58(a1, &loaded_word_2);
        goto LABEL_47;
      }
      literal_text = nullptr;
      unused_written_slot = 0;
      sub_1401FEC58((__int64)scratch_buffer_2, (__int64 *)&literal_text);
    }
    goto LABEL_20;
  }
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( masked_bits )
    *(_BYTE *)(a1 + 8) = 2;
  else
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
LABEL_47:
  --g_144CBE63C;
  return a1;
}

//----- (00000001402017C8) ----------------------------------------------------
__int64            sub_1402017C8(__int64 a1, char a2)
{
  char *loaded_record_pointer;
  char selection_flag;
  __int64 loaded_word;
  unsigned __int64 integer_difference;
  DName *record_pointer;
  __int64 call_result;
  __int64 cached_call_result;
  DName *returned_pointer;
  __int64 *state_address;
  DName *record_pointer_2;
  __int64 loaded_word_2;
  int comparison_result;
  _UNKNOWN ***state_address_2;
  char masked_bits;
  unsigned __int64 callee_output_word;
  char unrecovered_register_value;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];
  _BYTE scratch_buffer_3[16];

  loaded_record_pointer = *(char **)&crt_undname_cursor;
  selection_flag = 0;
  if ( **(_BYTE **)&crt_undname_cursor == 81 )
  {
    loaded_record_pointer = (char *)(crt_undname_cursor + 1LL);
    selection_flag = 1;
    ++crt_undname_cursor;
  }
  loaded_word = *loaded_record_pointer;
  if ( (_BYTE)loaded_word )
  {
    if ( (unsigned __int8)(loaded_word - 48) > 9u )
    {
      sub_1402053CC((__int64)&callee_output_word);
      if ( !unrecovered_register_value )
      {
        state_address_2 = &off_1402848D0;
        if ( **(_BYTE **)&crt_undname_cursor )
          state_address_2 = nullptr;
        masked_bits = -**(_BYTE **)&crt_undname_cursor;
        *(_QWORD *)a1 = (uint64)(uintptr_t)(state_address_2);
        comparison_result = masked_bits != 0 ? 2 : 0;
        goto LABEL_24;
      }
      ++crt_undname_cursor;
      integer_difference = callee_output_word;
      if ( a2 )
      {
        if ( !selection_flag )
        {
          state_address = (__int64 *)sub_1401FE364((DName *)scratch_buffer, callee_output_word);
          goto LABEL_12;
        }
        call_result = sub_1401FE364((DName *)scratch_buffer_3, callee_output_word);
        goto LABEL_9;
      }
      if ( selection_flag )
      {
        record_pointer = (DName *)scratch_buffer_3;
        goto LABEL_8;
      }
      record_pointer_2 = (DName *)scratch_buffer;
    }
    else
    {
      crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      if ( selection_flag )
      {
        integer_difference = (int)loaded_word - 47;
        record_pointer = (DName *)scratch_buffer;
LABEL_8:
        call_result = sub_1401FE40C(record_pointer, integer_difference);
LABEL_9:
        cached_call_result = call_result;
        returned_pointer = sub_1401FE248((DName *)scratch_buffer_2, (     struct StringLiteral *)&off_1403020D0);
        sub_1401FE7C0((__int64)returned_pointer, (__int64)&callee_output_word, cached_call_result);
        state_address = (__int64 *)&callee_output_word;
LABEL_12:
        loaded_word_2 = *state_address;
        comparison_result = *((_DWORD *)state_address + 2);
        *(_QWORD *)a1 = loaded_word_2;
LABEL_24:
        *(_DWORD *)(a1 + 8) = comparison_result;
        return a1;
      }
      integer_difference = loaded_word - 47;
      record_pointer_2 = (DName *)scratch_buffer_3;
    }
    state_address = (__int64 *)sub_1401FE40C(record_pointer_2, integer_difference);
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  return a1;
}

//----- (0000000140201914) ----------------------------------------------------
__int64            sub_140201914(__int64 a1)
{
  __int64 cached_crt_undname_cursor;
  unsigned int loaded_word;

  cached_crt_undname_cursor = crt_undname_cursor;
  if ( **(_BYTE **)&crt_undname_cursor == 95
    && *(_BYTE *)(crt_undname_cursor + 1LL) == 95
    && (crt_undname_cursor += 2LL,
        loaded_word = *(char *)(cached_crt_undname_cursor + 2) - 65,
        crt_undname_cursor = cached_crt_undname_cursor + 3,
        loaded_word > 3) )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return a1;
}

//----- (0000000140201960) ----------------------------------------------------
__int64            sub_140201960(__int64 a1)
{
  sub_1402017C8(a1, 1);
  return a1;
}

//----- (000000014020197C) ----------------------------------------------------
__int64            sub_14020197C(__int64 a1)
{
  int masked_bits;
  DName *returned_pointer;
  int selection_code;
  char *literal_text;
  __int64 call_result;
  DName *returned_pointer_2;
  __int64 callee_output_word;
  int dword2_result;
  __int128 packed_vector;
  __int128 packed_vector_2;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];

  masked_bits = (char)**(_BYTE **)&crt_undname_cursor;
  if ( **(_BYTE **)&crt_undname_cursor )
  {
    *(_QWORD *)&packed_vector = 0;
    DWORD2(packed_vector) = 0;
    if ( (_BYTE)masked_bits == 87 )
    {
      if ( (g_144CBE628 & 0x8000) != 0 )
        goto LABEL_5;
    }
    else if ( (~(g_144CBE628 >> 15) & 1) == 0 || (g_144CBE628 & 0x1000) != 0 )
    {
LABEL_5:
      ++crt_undname_cursor;
      if ( (_BYTE)masked_bits == 87 )
        sub_140201B74((__int64)scratch_buffer_2);
      goto LABEL_7;
    }
    callee_output_word = 0;
    dword2_result = 0;
    ++crt_undname_cursor;
    switch ( masked_bits )
    {
      case 'T':
        literal_text = "union ";
        break;
      case 'U':
        selection_code = 7;
        literal_text = "struct ";
        goto LABEL_24;
      case 'V':
        literal_text = "class ";
        break;
      default:
        switch ( masked_bits )
        {
          case 'W':
            DWORD2(packed_vector_2) = 5;
            *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)("enum ");
            call_result = sub_140201B74((__int64)scratch_buffer);
            returned_pointer_2 = sub_1401FE248((DName *)scratch_buffer_2, (     struct StringLiteral *)&packed_vector_2);
            sub_1401FE7C0((__int64)returned_pointer_2, (__int64)&packed_vector_2, call_result);
            callee_output_word = packed_vector_2;
            dword2_result = DWORD2(packed_vector_2);
            break;
          case 'X':
            selection_code = 8;
            literal_text = "coclass ";
            goto LABEL_24;
          case 'Y':
            selection_code = 12;
            literal_text = "cointerface ";
LABEL_24:
            sub_1401FDF84((__int64)&callee_output_word, literal_text, selection_code);
            break;
        }
        *(_QWORD *)&packed_vector = callee_output_word;
        DWORD2(packed_vector) = dword2_result;
LABEL_7:
        sub_140203DE0((__int64)&packed_vector_2);
        sub_1401FE908((__int64)&packed_vector, (__int64)&packed_vector_2);
        *(_QWORD *)a1 = packed_vector;
        *(_DWORD *)(a1 + 8) = DWORD2(packed_vector);
        return a1;
    }
    selection_code = 6;
    goto LABEL_24;
  }
  DWORD2(packed_vector) = 14;
  *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("`unknown ecsu'");
  packed_vector_2 = packed_vector;
  returned_pointer = sub_1401FE248((DName *)&packed_vector, (     struct StringLiteral *)&packed_vector_2);
  sub_1401FE844((__int64)returned_pointer, a1, 1u);
  return a1;
}

//----- (0000000140201B5C) ----------------------------------------------------
__int64            sub_140201B5C(__int64 a1)
{
  sub_140203DE0(a1);
  return a1;
}

//----- (0000000140201B74) ----------------------------------------------------
__int64            sub_140201B74(__int64 a1)
{
  char masked_bits;
  char *literal_text;
  int selection_code;
  char masked_bits_2;
  DName *returned_pointer;
       char *saved_literal_text;
  int cached_selection_code;
       char *literal_text_2;
  int selection_code_2;
  _BYTE scratch_buffer[16];

  saved_literal_text = nullptr;
  cached_selection_code = 0;
  if ( !**(_BYTE **)&crt_undname_cursor )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    return a1;
  }
  masked_bits = **(_BYTE **)&crt_undname_cursor;
  if ( (char)**(_BYTE **)&crt_undname_cursor < 48 )
    goto LABEL_19;
  if ( masked_bits <= 49 )
  {
    literal_text = "char ";
    goto LABEL_12;
  }
  if ( masked_bits <= 51 )
  {
    selection_code = 6;
    literal_text = "short ";
    goto LABEL_13;
  }
  if ( masked_bits != 52 )
  {
    if ( masked_bits != 53 )
    {
      if ( (unsigned __int8)(masked_bits - 54) <= 1u )
      {
        literal_text = "long ";
LABEL_12:
        selection_code = 5;
        goto LABEL_13;
      }
LABEL_19:
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 8) = 2;
      *(_QWORD *)a1 = 0;
      return a1;
    }
    selection_code = 4;
    literal_text = "int ";
LABEL_13:
    sub_1401FDF84((__int64)&saved_literal_text, literal_text, selection_code);
  }
  masked_bits_2 = **(_BYTE **)&crt_undname_cursor;
  ++crt_undname_cursor;
  if ( ((masked_bits_2 - 49) & 0xF9) == 0 && masked_bits_2 != 55 || masked_bits_2 == 55 )
  {
    selection_code_2 = 9;
    literal_text_2 = "unsigned ";
    returned_pointer = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&literal_text_2);
    sub_1401FE7C0((__int64)returned_pointer, (__int64)&literal_text_2, (__int64)&saved_literal_text);
    saved_literal_text = literal_text_2;
    cached_selection_code = selection_code_2;
  }
  *(_QWORD *)a1 = (uint64)(uintptr_t)(saved_literal_text);
  *(_DWORD *)(a1 + 8) = cached_selection_code;
  return a1;
}

//----- (0000000140201C9C) ----------------------------------------------------
__int64            sub_140201C9C(__int64 a1, _DWORD *a2, _BYTE *a3, int a4)
{
  char *loaded_record_pointer;
  unsigned int scaled_index;
  __int64 call_result;
  __int64 masked_bits;
  unsigned __int64 loaded_word;
  __int64 masked_bits_2;
  _UNKNOWN ***state_address;
  int loaded_word_2;
  _BYTE *loaded_record_pointer_2;
  __int64 masked_bits_3;
  __int64 integer_sum;
  _UNKNOWN ***saved_state_address;
  int saved_masked_bits;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];

  saved_state_address = nullptr;
  saved_masked_bits = 0;
  loaded_record_pointer = (char *)(crt_undname_cursor + 1LL);
  crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer);
  switch ( *loaded_record_pointer )
  {
    case 'A':
      if ( !a4 )
      {
        if ( (unsigned int)(*a2 - 2) <= 1 )
        {
          *a2 = 5;
          goto LABEL_30;
        }
        if ( *a2 == 1 )
        {
          *a2 = 4;
LABEL_30:
          loaded_record_pointer = *(char **)&crt_undname_cursor;
        }
      }
      integer_sum = (__int64)(loaded_record_pointer + 1);
      goto LABEL_32;
    case 'B':
      if ( a4 )
        goto LABEL_22;
      *a3 = 1;
      sub_1401FFB98((sr_anon_89 *)&saved_state_address, 62);
      goto LABEL_24;
    case 'C':
      *a2 = 5;
LABEL_24:
      integer_sum = crt_undname_cursor + 1LL;
LABEL_32:
      *(_QWORD *)a1 = 0;
      crt_undname_cursor = integer_sum;
      goto LABEL_33;
  }
  if ( !*loaded_record_pointer || !loaded_record_pointer[1] )
  {
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
LABEL_33:
    *(_DWORD *)(a1 + 8) = 0;
    return a1;
  }
  if ( a4 )
  {
LABEL_22:
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
    return a1;
  }
  scaled_index = 16 * *loaded_record_pointer + loaded_record_pointer[1] - 816;
  crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 2);
  if ( scaled_index > 1 )
  {
    sub_1401FFB98((sr_anon_89 *)&saved_state_address, 44);
    call_result = sub_1401FE40C((DName *)scratch_buffer, scaled_index);
    masked_bits = sub_1401FE7C0((__int64)&saved_state_address, (__int64)scratch_buffer_2, call_result);
    loaded_word = *(_QWORD *)masked_bits;
    LODWORD(masked_bits) = *(_DWORD *)(masked_bits + 8);
    saved_state_address = (_UNKNOWN ***)loaded_word;
    saved_masked_bits = masked_bits;
  }
  masked_bits_2 = sub_1401FE7EC((__int64)&saved_state_address, (__int64)scratch_buffer_2, 62);
  state_address = *(_UNKNOWN ****)masked_bits_2;
  loaded_word_2 = *(_DWORD *)(masked_bits_2 + 8);
  saved_state_address = *(_UNKNOWN ****)masked_bits_2;
  saved_masked_bits = loaded_word_2;
  if ( **(_BYTE **)&crt_undname_cursor == 36 )
  {
    loaded_record_pointer_2 = (_BYTE *)++crt_undname_cursor;
  }
  else
  {
    masked_bits_3 = sub_1401FE7EC((__int64)&saved_state_address, (__int64)scratch_buffer_2, 94);
    state_address = *(_UNKNOWN ****)masked_bits_3;
    loaded_word_2 = *(_DWORD *)(masked_bits_3 + 8);
    loaded_record_pointer_2 = *(_BYTE **)&crt_undname_cursor;
    saved_state_address = state_address;
    saved_masked_bits = loaded_word_2;
  }
  if ( *loaded_record_pointer_2 )
  {
    crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  }
  else if ( (char)saved_masked_bits <= 1 )
  {
    if ( state_address )
    {
      sub_1401FDDF4((unsigned __int64 *)&saved_state_address, (__int64)&off_1402848D0);
      loaded_word_2 = saved_masked_bits;
      state_address = saved_state_address;
    }
    else
    {
      loaded_word_2 = 1;
      state_address = &off_1402848D0;
    }
  }
  *(_QWORD *)a1 = (uint64)(uintptr_t)(state_address);
  *(_DWORD *)(a1 + 8) = loaded_word_2 | 0x4000;
  return a1;
}

//----- (0000000140201EA4) ----------------------------------------------------
DName *           sub_140201EA4(DName *a1, __int64 a2)
{
  unsigned __int64 heap_manager_get_memory_result;
  struct DName *saved_heap_manager_get_memory_result;
  __int64 call_result;
  __int64 call_result_2;
  __int64 selection_flag;
  int unused_written_slot;
  __int64 selection_flag_2;
  int unused_written_slot_2;
  char scratch_buffer[16];
  char scratch_buffer_2[16];
  char scratch_buffer_3[16];

  heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
  saved_heap_manager_get_memory_result = (struct DName *)heap_manager_get_memory_result;
  if ( heap_manager_get_memory_result )
  {
    *(_QWORD *)heap_manager_get_memory_result = 0;
    *(_DWORD *)(heap_manager_get_memory_result + 8) = 0;
  }
  else
  {
    saved_heap_manager_get_memory_result = nullptr;
  }
  sub_1402013D0(a1, saved_heap_manager_get_memory_result);
  selection_flag = 0;
  unused_written_slot = 0;
  selection_flag_2 = 0;
  unused_written_slot_2 = 0;
  sub_140200AFC((__int64)scratch_buffer, (__int64)&selection_flag_2, 0, &selection_flag, 0);
  call_result = sub_1401FE7EC((__int64)scratch_buffer, (__int64)scratch_buffer_2, 32);
  call_result_2 = sub_1401FE7C0(call_result, (__int64)scratch_buffer_3, a2);
  *(_QWORD *)saved_heap_manager_get_memory_result = *(_QWORD *)call_result_2;
  *((_DWORD *)saved_heap_manager_get_memory_result + 2) = *(_DWORD *)(call_result_2 + 8);
  return a1;
}

//----- (0000000140201F64) ----------------------------------------------------
__int64            sub_140201F64(DName *a1, int a2)
{
  int masked_bits;
  long double saved_float_word;
  _UNKNOWN ***state_address;
  char masked_bits_2;
  __int64 unused_local;
  long double float_word;
  char unrecovered_register_value;
  char scratch_buffer[80];
  __int64 unused_local_2;

  if ( !**(_BYTE **)&crt_undname_cursor )
  {
    *((_DWORD *)a1 + 2) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    return 0; /* no caller reads the result */
  }
  if ( (unsigned __int8)(**(_BYTE **)&crt_undname_cursor - 48) <= 9u )
  {
    masked_bits = (char)**(_BYTE **)&crt_undname_cursor - 47;
    ++crt_undname_cursor;
    sub_1401FE40C(a1, masked_bits);
    return 0; /* no caller reads the result */
  }
  sub_1402053CC((__int64)&float_word);
  if ( unrecovered_register_value )
  {
    if ( a2 == 66 )
    {
      saved_float_word = float_word;
LABEL_8:
      sub_140158C70(scratch_buffer, 65, (__int64)"%lf", saved_float_word);
      sub_1401FDBF8((__int64)a1, scratch_buffer);
      return 0; /* no caller reads the result */
    }
    if ( a2 == 65 )
    {
      saved_float_word = *(float *)&float_word;
      goto LABEL_8;
    }
  }
  state_address = &off_1402848D0;
  if ( **(_BYTE **)&crt_undname_cursor )
    state_address = nullptr;
  masked_bits_2 = -**(_BYTE **)&crt_undname_cursor;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(state_address);
  *((_DWORD *)a1 + 2) = masked_bits_2 != 0 ? 2 : 0;
  return 0; /* no caller reads the result */
}

//----- (0000000140202084) ----------------------------------------------------
__int64            sub_140202084(__int64 a1, __int64 *a2)
{
  __int128 *state_address;
  __int64 *state_address_2;
  int masked_bits;
  _BYTE *buffer_cursor;
  _BYTE *saved_buffer_cursor;
  __int64 loaded_word;
  unsigned int masked_bits_2;
  int masked_bits_3;
  DName *returned_pointer;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 masked_bits_4;
  __int64 saved_masked_bits;
  __int64 masked_bits_5;
  _BYTE *loaded_record_pointer;
  int byte8_result;
  __int64 call_result;
  __int64 cached_call_result;
  __int64 masked_bits_6;
  __int64 call_result_2;
  __int64 call_result_3;
  __int64 masked_bits_7;
  __int64 loaded_word_2;
  __int64 call_result_4;
  __int64 masked_bits_8;
  __int64 loaded_word_3;
  unsigned __int64 heap_manager_get_memory_result;
  struct DName *saved_heap_manager_get_memory_result;
  DName *returned_pointer_2;
  __int64 cached_returned_pointer;
  __int64 masked_bits_9;
  unsigned int state_word;
  __int64 call_result_5;
  __int64 call_result_6;
  DName *returned_pointer_3;
  __int64 call_result_7;
  unsigned int saved_dword2_result;
  __int64 call_result_8;
  __int64 loaded_word_4;
  unsigned int dword2_result;
  __int64 callee_output_word;
  int unused_written_slot;
  __int128 packed_vector;
  __int64 selection_flag;
  unsigned int selection_flag_2;
  __int128 packed_vector_2;
  __int64 callee_output_word_2;
  int unrecovered_register_value_3;
  _BYTE scratch_buffer[16];

  if ( !**(_BYTE **)&crt_undname_cursor )
    goto LABEL_2;
  if ( (unsigned __int8)(**(_BYTE **)&crt_undname_cursor - 54) > 3u
    && **(_BYTE **)&crt_undname_cursor != 95 )
  {
    goto LABEL_63;
  }
  masked_bits = (char)**(_BYTE **)&crt_undname_cursor - 54;
  buffer_cursor = (_BYTE *)++crt_undname_cursor;
  if ( masked_bits != 41 )
  {
    if ( masked_bits < 0 )
      goto LABEL_63;
    saved_buffer_cursor = buffer_cursor;
    if ( masked_bits > 3 )
      goto LABEL_63;
    goto LABEL_13;
  }
  if ( *buffer_cursor )
  {
    saved_buffer_cursor = buffer_cursor + 1;
    masked_bits = (char)*buffer_cursor - 61;
    crt_undname_cursor = (uint64)(uintptr_t)(++buffer_cursor);
    if ( (unsigned int)(masked_bits - 4) > 3 )
      masked_bits = -1;
LABEL_13:
    if ( masked_bits != -1 )
    {
      loaded_word = *a2;
      masked_bits_2 = *((_DWORD *)a2 + 2);
      callee_output_word = 0;
      unused_written_slot = 0;
      loaded_word_4 = loaded_word;
      dword2_result = masked_bits_2;
      masked_bits_3 = masked_bits & 2;
      if ( (masked_bits & 2) == 0 )
        goto LABEL_26;
      if ( *buffer_cursor == 64 )
      {
        loaded_record_pointer = saved_buffer_cursor + 1;
        crt_undname_cursor = (uint64)(uintptr_t)(saved_buffer_cursor + 1);
      }
      else
      {
        DWORD2(packed_vector) = 2;
        *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("::");
        packed_vector_2 = packed_vector;
        returned_pointer = sub_1401FE248((DName *)&selection_flag, (     struct StringLiteral *)&packed_vector_2);
        sub_1401FE7C0((__int64)returned_pointer, (__int64)&packed_vector, (__int64)&loaded_word_4);
        loaded_word_4 = packed_vector;
        dword2_result = DWORD2(packed_vector);
        if ( **(_BYTE **)&crt_undname_cursor )
        {
          masked_bits_4 = sub_14020392C((__int64)&selection_flag, unrecovered_register_value, unrecovered_register_value_2);
          *(_QWORD *)&packed_vector = 0;
          DWORD2(packed_vector) = 0;
          saved_masked_bits = masked_bits_4;
          sub_1401FFB98((sr_anon_89 *)&packed_vector, 32);
          sub_1401FE7C0((__int64)&packed_vector, (__int64)&packed_vector_2, saved_masked_bits);
          masked_bits_5 = sub_1401FE7C0((__int64)&packed_vector_2, (__int64)scratch_buffer, (__int64)&loaded_word_4);
          masked_bits_2 = *(_DWORD *)(masked_bits_5 + 8);
          loaded_word_4 = *(_QWORD *)masked_bits_5;
        }
        else
        {
          DWORD2(packed_vector) = 0;
          *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(&off_1402848D0);
          sub_1401FE7C0((__int64)&packed_vector, (__int64)&selection_flag, (__int64)&loaded_word_4);
          masked_bits_2 = selection_flag_2;
          loaded_word_4 = selection_flag;
        }
        loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
        dword2_result = masked_bits_2;
      }
      if ( !*loaded_record_pointer )
      {
        DWORD2(packed_vector_2) = 0;
        state_address_2 = &loaded_word_4;
        *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)(&off_1402848D0);
        state_address = &packed_vector_2;
        goto LABEL_3;
      }
      if ( *loaded_record_pointer == 64 )
      {
        selection_flag = 0;
        crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
        selection_flag_2 = 0;
        if ( (g_144CBE628 & 0x60) == 0x60 )
        {
          *(_QWORD *)&packed_vector_2 = 0;
          DWORD2(packed_vector_2) = 0;
          sub_140200AFC((__int64)&packed_vector, (__int64)&selection_flag, 0, &packed_vector_2, 1);
          if ( SBYTE8(packed_vector) <= 1 )
          {
LABEL_26:
            if ( (masked_bits & 4) == 0 )
              goto LABEL_36;
            if ( (~(g_144CBE628 >> 1) & 1) != 0 )
            {
              call_result = sub_140200244((__int64)scratch_buffer);
              *(_QWORD *)&packed_vector = 0;
              DWORD2(packed_vector) = 0;
              cached_call_result = call_result;
              sub_1401FFB98((sr_anon_89 *)&packed_vector, 32);
              sub_1401FE7C0((__int64)&packed_vector, (__int64)&packed_vector_2, cached_call_result);
              masked_bits_6 = sub_1401FE7C0((__int64)&packed_vector_2, (__int64)&selection_flag, (__int64)&loaded_word_4);
              masked_bits_2 = *(_DWORD *)(masked_bits_6 + 8);
              loaded_word_4 = *(_QWORD *)masked_bits_6;
            }
            else
            {
              call_result_2 = sub_140200244((__int64)scratch_buffer);
              if ( (_BYTE)dword2_result == 3 || *(char *)(call_result_2 + 8) <= 1 )
              {
LABEL_36:
                if ( (~(g_144CBE628 >> 1) & 1) != 0 )
                {
                  call_result_3 = sub_1402009BC((__int64)scratch_buffer);
                  masked_bits_7 = sub_1401FE7C0(call_result_3, (__int64)&packed_vector_2, (__int64)&loaded_word_4);
                  loaded_word_2 = *(_QWORD *)masked_bits_7;
                  LODWORD(masked_bits_7) = *(_DWORD *)(masked_bits_7 + 8);
                  loaded_word_4 = loaded_word_2;
                  dword2_result = masked_bits_7;
                }
                else
                {
                  call_result_4 = sub_1402009BC((__int64)scratch_buffer);
                  if ( (_BYTE)dword2_result != 3 && *(char *)(call_result_4 + 8) > 1 )
                    dword2_result = *(unsigned __int8 *)(call_result_4 + 8) | masked_bits_2 & 0xFFFFFF00;
                }
                if ( *a2 )
                {
                  *(_QWORD *)&packed_vector = 0;
                  DWORD2(packed_vector) = 0;
                  sub_1401FFB98((sr_anon_89 *)&packed_vector, 40);
                  sub_1401FE7C0((__int64)&packed_vector, (__int64)&packed_vector_2, (__int64)&loaded_word_4);
                  masked_bits_8 = sub_1401FE7EC((__int64)&packed_vector_2, (__int64)scratch_buffer, 41);
                  loaded_word_3 = *(_QWORD *)masked_bits_8;
                  LODWORD(masked_bits_8) = *(_DWORD *)(masked_bits_8 + 8);
                  loaded_word_4 = loaded_word_3;
                  dword2_result = masked_bits_8;
                }
                heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
                saved_heap_manager_get_memory_result = (struct DName *)heap_manager_get_memory_result;
                if ( heap_manager_get_memory_result )
                {
                  *(_QWORD *)heap_manager_get_memory_result = 0;
                  *(_DWORD *)(heap_manager_get_memory_result + 8) = 0;
                }
                else
                {
                  saved_heap_manager_get_memory_result = nullptr;
                }
                sub_1402038F8((DName *)&callee_output_word_2, saved_heap_manager_get_memory_result);
                returned_pointer_2 = sub_1401FFDD8((DName *)scratch_buffer);
                *(_QWORD *)&packed_vector = 0;
                DWORD2(packed_vector) = 0;
                cached_returned_pointer = (__int64)returned_pointer_2;
                sub_1401FFB98((sr_anon_89 *)&packed_vector, 40);
                sub_1401FE7C0((__int64)&packed_vector, (__int64)&packed_vector_2, cached_returned_pointer);
                masked_bits_9 = sub_1401FE7EC((__int64)&packed_vector_2, (__int64)&selection_flag, 41);
                sub_1401FE908((__int64)&loaded_word_4, masked_bits_9);
                state_word = g_144CBE628;
                if ( (g_144CBE628 & 0x60) != 0x60 && masked_bits_3 )
                {
                  sub_1401FE908((__int64)&loaded_word_4, (__int64)&callee_output_word);
                  state_word = g_144CBE628;
                }
                if ( (state_word & 0x80000) != 0 )
                {
                  call_result_6 = sub_14020372C((__int64)scratch_buffer);
                  if ( (_BYTE)dword2_result != 3 && *(char *)(call_result_6 + 8) > 1 )
                    dword2_result = *(unsigned __int8 *)(call_result_6 + 8) | dword2_result & 0xFFFFFF00;
                }
                else
                {
                  call_result_5 = sub_14020372C((__int64)scratch_buffer);
                  sub_1401FE908((__int64)&loaded_word_4, call_result_5);
                }
                returned_pointer_3 = sub_140202784((DName *)scratch_buffer);
                sub_1401FE908((__int64)&loaded_word_4, (__int64)returned_pointer_3);
                if ( (~(g_144CBE628 >> 8) & 1) != 0 )
                {
                  call_result_7 = sub_140204E68((__int64)scratch_buffer);
                  sub_1401FE908((__int64)&loaded_word_4, call_result_7);
                }
                else
                {
                  call_result_8 = sub_140204E68((__int64)scratch_buffer);
                  if ( (_BYTE)dword2_result != 3 && *(char *)(call_result_8 + 8) > 1 )
                  {
                    saved_dword2_result = *(unsigned __int8 *)(call_result_8 + 8) | dword2_result & 0xFFFFFF00;
                    goto LABEL_57;
                  }
                }
                saved_dword2_result = dword2_result;
LABEL_57:
                if ( saved_heap_manager_get_memory_result )
                {
                  *(_QWORD *)saved_heap_manager_get_memory_result = loaded_word_4;
                  *((_DWORD *)saved_heap_manager_get_memory_result + 2) = saved_dword2_result;
                  *(_QWORD *)a1 = callee_output_word_2;
                  *(_DWORD *)(a1 + 8) = unrecovered_register_value_3;
                  return a1;
                }
                *(_DWORD *)(a1 + 8) = 0;
                *(_BYTE *)(a1 + 8) = 3;
LABEL_64:
                *(_QWORD *)a1 = 0;
                return a1;
              }
              masked_bits_2 = *(unsigned __int8 *)(call_result_2 + 8) | masked_bits_2 & 0xFFFFFF00;
            }
            dword2_result = masked_bits_2;
            goto LABEL_36;
          }
          byte8_result = BYTE8(packed_vector);
        }
        else
        {
          *(_QWORD *)&packed_vector = 0;
          DWORD2(packed_vector) = 0;
          sub_140200AFC((__int64)&packed_vector_2, (__int64)&packed_vector, 0, &selection_flag, 1);
          callee_output_word = packed_vector_2;
          byte8_result = DWORD2(packed_vector_2);
        }
        unused_written_slot = byte8_result;
        goto LABEL_26;
      }
    }
LABEL_63:
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 2;
    goto LABEL_64;
  }
LABEL_2:
  DWORD2(packed_vector) = 0;
  *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(&off_1402848D0);
  state_address = &packed_vector;
  state_address_2 = a2;
LABEL_3:
  sub_1401FE7C0((__int64)state_address, a1, (__int64)state_address_2);
  return a1;
}

//----- (00000001402025BC) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1402025BC(__int64 a1)
{
  sub_1402017C8(a1, 0);
  return a1;
}

//----- (0000000140202604) ----------------------------------------------------
__int64            sub_140202604(pDNameNode *this)
{
  __int64 *loaded_record_pointer;
  __int64 result;
  __int64 loaded_word;

  loaded_record_pointer = *((__int64 **)this + 1);
  result = 0;
  if ( loaded_record_pointer )
  {
    loaded_word = *loaded_record_pointer;
    if ( loaded_word )
      return (*(__int64 (           **)(__int64))(*(_QWORD *)loaded_word + 16LL))(loaded_word);
  }
  return result;
}

//----- (0000000140202630) ----------------------------------------------------
__int64            sub_140202630(pairNode *this)
{
  __int64 result;

  result = (*(__int64 (           **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
  if ( !(_BYTE)result )
    return (*(__int64 (           **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  return result;
}

//----- (000000014020267C) ----------------------------------------------------
__int64            sub_14020267C(__int64 a1)
{
  __int64 call_result;
  __int64 selection_flag;
  int unused_written_slot;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[24];

  selection_flag = 0;
  unused_written_slot = 0;
  call_result = sub_1402017C8((__int64)scratch_buffer_2, 0);
  sub_1401FFB98((sr_anon_89 *)&selection_flag, 96);
  sub_1401FE7C0((__int64)&selection_flag, (__int64)scratch_buffer, call_result);
  sub_1401FE7EC((__int64)scratch_buffer, a1, 39);
  return a1;
}

//----- (00000001402026E0) ----------------------------------------------------
unsigned __int64            crt_heap_manager_get_memory(_HeapManager *this, __int64 a2)
{
  unsigned __int64 loaded_word;
  unsigned __int64 state_address;
  _QWORD *returned_pointer;
  _QWORD *loaded_record_pointer;
  unsigned __int64 integer_difference;

  loaded_word = *((_QWORD *)this + 4);
  state_address = (a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !state_address )
    state_address = 8;
  if ( loaded_word >= state_address )
    goto LABEL_10;
  loaded_word = 4096;
  if ( state_address <= 0x1000 )
  {
    returned_pointer = (_QWORD *)sub_1401FE568(4104, (struct _HeapManager *)(unsigned int *)&g_144CBE640, 1);
    if ( returned_pointer )
    {
      *returned_pointer = 0;
      loaded_record_pointer = *((_QWORD **)this + 3);
      if ( loaded_record_pointer )
        *loaded_record_pointer = (uint64)(uintptr_t)(returned_pointer);
      else
        *((_QWORD *)this + 2) = (uint64)(uintptr_t)(returned_pointer);
      *((_QWORD *)this + 3) = (uint64)(uintptr_t)(returned_pointer);
LABEL_10:
      integer_difference = loaded_word - state_address;
      *((_QWORD *)this + 4) = integer_difference;
      return integer_difference + *((_QWORD *)this + 3) + 8LL;
    }
  }
  return 0;
}

//----- (0000000140202784) ----------------------------------------------------
DName *           sub_140202784(DName *a1)
{
       char *literal_text;
  int unused_written_slot;

  if ( **(_WORD **)&crt_undname_cursor == 17759 )
  {
    unused_written_slot = 9;
    crt_undname_cursor += 2LL;
    literal_text = " noexcept";
    sub_1401FE248(a1, (     struct StringLiteral *)&literal_text);
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
  }
  return a1;
}

//----- (00000001402027E8) ----------------------------------------------------
__int64 sub_1402027E8()
{
  _BYTE *buffer_cursor;
  int masked_bits;
  unsigned int scaled_index;
  char input_byte;

  buffer_cursor = *(_BYTE **)&crt_undname_cursor;
  masked_bits = (char)**(_BYTE **)&crt_undname_cursor;
  if ( !**(_BYTE **)&crt_undname_cursor )
    return 0;
  if ( (unsigned __int8)(masked_bits - 48) > 9u )
  {
    scaled_index = 0;
    while ( (_BYTE)masked_bits != 64 )
    {
      if ( !(_BYTE)masked_bits )
        return 0;
      if ( (unsigned __int8)(masked_bits - 65) > 0xFu )
        return 0xFFFFFFFFLL;
      scaled_index = (char)masked_bits + 16 * scaled_index - 65;
      crt_undname_cursor = (uint64)(uintptr_t)(++buffer_cursor);
      LOBYTE(masked_bits) = *buffer_cursor;
    }
    input_byte = *buffer_cursor;
    crt_undname_cursor = (uint64)(uintptr_t)(buffer_cursor + 1);
    if ( input_byte != 64 )
      return 0xFFFFFFFFLL;
    return scaled_index;
  }
  else
  {
    ++crt_undname_cursor;
    return (unsigned int)(masked_bits - 47);
  }
}

//----- (000000014020285C) ----------------------------------------------------
_DWORD *           sub_14020285C(_DWORD *a1, __int64 a2, _BYTE *a3)
{
  char masked_bits;
  char *byte_cursor;
  int selection_flag;
  __int64 scaled_index;
  DName *returned_pointer;
  int saved_option_flags;
  unsigned __int64 saved_loaded_word;
  __int64 call_result;
  unsigned __int64 heap_manager_get_memory_result;
  unsigned __int64 heap_manager_get_memory_result_2;
  __int64 packed_word_bits;
       char *input_byte;
  char *byte_cursor_2;
  int loaded_word;
  char *byte_cursor_3;
  int scaled_index_2;
  int combined_flags;
  int selection_flag_2;
  char input_byte_2;
  int integer_difference;
  int integer_difference_2;
  __int64 masked_bits_2;
  char masked_bits_3;
  __int64 integer_sum;
  __int64 call_result_2;
  __int64 masked_bits_4;
  __int64 call_result_3;
  __int64 masked_bits_5;
  __int64 call_result_4;
  __int64 masked_bits_6;
  __int64 call_result_5;
  __int64 masked_bits_7;
  __int64 masked_bits_8;
  _QWORD *state_address;
  _DWORD *returned_pointer_2;
  int table_value;
  char input_byte_3;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 call_result_6;
  _DWORD *returned_pointer_3;
  char masked_bits_9;
  char table_value_2;
       char *saved_literal_text;
  int option_flags;
  unsigned __int64 loaded_word_2;
  int cached_table_value;
  __int64 selection_flag_3;
  int selection_flag_4;
       char *literal_text;
  int selection_code;
  _DWORD scratch_buffer[4];

  saved_literal_text = nullptr;
  option_flags = 0;
  loaded_word_2 = 0;
  masked_bits = **(_BYTE **)&crt_undname_cursor;
  byte_cursor = (char *)(crt_undname_cursor + 1LL);
  cached_table_value = 0;
  selection_flag = 0;
  ++crt_undname_cursor;
  if ( masked_bits <= 65 )
  {
    if ( masked_bits != 65 )
    {
      if ( masked_bits )
      {
        if ( masked_bits <= 47 )
          goto LABEL_66;
        if ( masked_bits > 49 )
        {
          if ( masked_bits <= 57 )
          {
            scaled_index = *(byte_cursor - 1) - 50LL;
LABEL_8:
            sub_1401FDF84((__int64)&saved_literal_text, (&off_1402835A0)[2 * scaled_index], (int)(&off_1402835A0)[2 * scaled_index + 1]);
            goto LABEL_9;
          }
LABEL_66:
          a1[2] = 0;
          *((_BYTE *)a1 + 8) = 2;
          *(_QWORD *)a1 = 0;
          return a1;
        }
        loaded_word_2 = 0;
        saved_loaded_word = 0;
        cached_table_value = 0;
        if ( !(_BYTE)a2 )
        {
LABEL_35:
          packed_word_bits = sub_140205810((__int64)scratch_buffer, 0, 0);
          input_byte = *(     char **)packed_word_bits;
          LODWORD(packed_word_bits) = *(_DWORD *)(packed_word_bits + 8);
          saved_literal_text = input_byte;
          option_flags = packed_word_bits;
          crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor);
          if ( input_byte && *(byte_cursor - 1) == 49 )
          {
            selection_flag_3 = 0;
            selection_flag_4 = 0;
            sub_1401FFB98((sr_anon_89 *)&selection_flag_3, 126);
            sub_1401FE7C0((__int64)&selection_flag_3, (__int64)&literal_text, (__int64)&saved_literal_text);
            saved_literal_text = literal_text;
            option_flags = selection_code;
          }
          if ( saved_loaded_word )
            sub_1401FE908((__int64)&saved_literal_text, (__int64)&loaded_word_2);
          goto LABEL_11;
        }
        selection_flag_3 = 0;
        selection_flag_4 = 0;
        call_result = sub_140204368((__int64)scratch_buffer, a2);
        sub_1401FFB98((sr_anon_89 *)&selection_flag_3, 60);
        sub_1401FE7C0((__int64)&selection_flag_3, (__int64)&literal_text, call_result);
        sub_1401FE908((__int64)&loaded_word_2, (__int64)&literal_text);
        saved_loaded_word = loaded_word_2;
        if ( loaded_word_2 && (*(unsigned __int8 (           **)(unsigned __int64))(*(_QWORD *)loaded_word_2 + 16LL))(loaded_word_2) == 62 )
        {
          if ( (char)cached_table_value > 1 )
          {
LABEL_30:
            if ( a3 )
              *a3 = 1;
            if ( !**(_BYTE **)&crt_undname_cursor )
            {
              saved_option_flags = cached_table_value;
              *(_QWORD *)a1 = saved_loaded_word;
              goto LABEL_12;
            }
            byte_cursor = (char *)++crt_undname_cursor;
            goto LABEL_35;
          }
          heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
          if ( heap_manager_get_memory_result )
          {
            *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(off_1402846F0);
            *(_BYTE *)(heap_manager_get_memory_result + 8) = 32;
          }
          else
          {
            heap_manager_get_memory_result = 0;
          }
          sub_1401FDE58(&loaded_word_2, heap_manager_get_memory_result);
          saved_loaded_word = loaded_word_2;
        }
        if ( (char)cached_table_value <= 1 )
        {
          if ( saved_loaded_word )
          {
            heap_manager_get_memory_result_2 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
            if ( heap_manager_get_memory_result_2 )
            {
              *(_QWORD *)heap_manager_get_memory_result_2 = (uint64)(uintptr_t)(off_1402846F0);
              *(_BYTE *)(heap_manager_get_memory_result_2 + 8) = 62;
            }
            else
            {
              heap_manager_get_memory_result_2 = 0;
            }
            sub_1401FDE58(&loaded_word_2, heap_manager_get_memory_result_2);
          }
          else
          {
            loaded_word_2 = 0;
            cached_table_value = 0;
            sub_1401FFB98((sr_anon_89 *)&loaded_word_2, 62);
          }
          saved_loaded_word = loaded_word_2;
        }
        goto LABEL_30;
      }
      byte_cursor_2 = byte_cursor - 1;
      goto LABEL_41;
    }
LABEL_118:
    sub_1401FDF84((__int64)&saved_literal_text, (&off_1402835A0)[2 * *(byte_cursor - 1) - 114], (int)(&off_1402835A0)[2 * *(byte_cursor - 1) - 113]);
    if ( selection_flag )
    {
      if ( saved_literal_text )
        option_flags |= 0x200u;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( masked_bits == 66 )
  {
    selection_flag = 1;
    goto LABEL_118;
  }
  if ( masked_bits <= 90 )
    goto LABEL_118;
  if ( masked_bits != 95 )
    goto LABEL_66;
  loaded_word = *byte_cursor;
  byte_cursor_3 = byte_cursor + 1;
  crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor + 1);
  if ( loaded_word <= 79 )
  {
    if ( loaded_word < 68 )
    {
      if ( loaded_word <= 57 )
      {
        if ( loaded_word != 57 )
        {
          if ( !loaded_word )
          {
            crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor);
            goto LABEL_42;
          }
          if ( loaded_word <= 47 )
            goto LABEL_66;
          if ( loaded_word <= 54 )
          {
            scaled_index = *byte_cursor - 14LL;
            goto LABEL_8;
          }
          scaled_index_2 = *byte_cursor - 14;
LABEL_54:
          sub_1401FE248((DName *)a1, (     struct StringLiteral *)&(&off_1402835A0)[2 * scaled_index_2]);
          return a1;
        }
        sub_1401FE248((DName *)&literal_text, (     struct StringLiteral *)&(&off_1402835A0)[2 * *byte_cursor - 28]);
        combined_flags = selection_code | 0x8000;
LABEL_58:
        *(_QWORD *)a1 = (uint64)(uintptr_t)(literal_text);
        a1[2] = combined_flags;
        return a1;
      }
      if ( loaded_word == 63 )
      {
        input_byte_2 = *byte_cursor_3;
        crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor + 2);
        if ( !input_byte_2 )
        {
          crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor + 1);
          goto LABEL_42;
        }
        if ( input_byte_2 != 48 )
          goto LABEL_66;
        selection_flag_2 = 1;
        goto LABEL_63;
      }
      if ( loaded_word <= 64 )
        goto LABEL_66;
      if ( loaded_word > 66 )
      {
        selection_flag_2 = 0;
LABEL_63:
        sub_1402041A0((__int64)&literal_text, selection_flag_2);
        combined_flags = selection_code | 0x1000;
        goto LABEL_58;
      }
    }
LABEL_115:
    scaled_index_2 = *byte_cursor - 21;
    goto LABEL_54;
  }
  if ( loaded_word > 84 )
  {
    if ( loaded_word <= 86 )
    {
      scaled_index = *byte_cursor - 21LL;
      goto LABEL_8;
    }
    if ( loaded_word <= 87 )
      goto LABEL_66;
    if ( loaded_word <= 89 )
      goto LABEL_115;
    if ( loaded_word != 95 )
      goto LABEL_66;
    input_byte_3 = *byte_cursor_3;
    crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor + 2);
    if ( input_byte_3 <= 75 )
    {
      if ( input_byte_3 == 75 )
      {
        sub_1401FE248((DName *)&selection_flag_3, (     struct StringLiteral *)&(&off_1402835A0)[2 * byte_cursor[1] + 8]);
        while ( **(_BYTE **)&crt_undname_cursor )
        {
          if ( **(_BYTE **)&crt_undname_cursor == 64 )
          {
            ++crt_undname_cursor;
            break;
          }
          masked_bits_9 = **(_BYTE **)&crt_undname_cursor;
          ++crt_undname_cursor;
          sub_1401FE9BC((__int64)&selection_flag_3, masked_bits_9);
        }
      }
      else
      {
        if ( input_byte_3 < 65 )
          goto LABEL_66;
        if ( input_byte_3 <= 68 || input_byte_3 > 70 )
          goto LABEL_98;
        sub_1401FE248((DName *)&selection_flag_3, (     struct StringLiteral *)&(&off_1402835A0)[2 * byte_cursor[1] + 8]);
        if ( **(_BYTE **)&crt_undname_cursor == 63 )
        {
          call_result_6 = sub_1402014E4((__int64)scratch_buffer, unrecovered_register_value, unrecovered_register_value_2);
          sub_1401FE908((__int64)&selection_flag_3, call_result_6);
          if ( **(_BYTE **)&crt_undname_cursor == 64 )
            ++crt_undname_cursor;
        }
        else
        {
          returned_pointer_3 = sub_14020431C(scratch_buffer);
          sub_1401FE908((__int64)&selection_flag_3, (__int64)returned_pointer_3);
        }
        selection_code = 2;
        literal_text = "''";
        sub_1401FE888((__int64)&selection_flag_3, (__int64)&literal_text);
      }
      *(_QWORD *)a1 = selection_flag_3;
      saved_option_flags = selection_flag_4;
      goto LABEL_12;
    }
    if ( input_byte_3 > 77 )
    {
      if ( input_byte_3 == 78 )
      {
        table_value_2 = byte_cursor[2];
        crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor + 3);
        if ( table_value_2 == 50 )
        {
          sub_140205440((__int64)a1);
          return a1;
        }
      }
      goto LABEL_66;
    }
LABEL_98:
    scaled_index_2 = byte_cursor[1] + 4;
    goto LABEL_54;
  }
  if ( loaded_word >= 83 )
    goto LABEL_115;
  integer_difference = loaded_word - 80;
  if ( !integer_difference )
  {
    sub_1401FDF84((__int64)&saved_literal_text, (&off_1402835A0)[2 * *byte_cursor - 42], (int)(&off_1402835A0)[2 * *byte_cursor - 41]);
    returned_pointer_2 = sub_14020285C(scratch_buffer, 0, nullptr);
    table_value = returned_pointer_2[2];
    loaded_word_2 = *(_QWORD *)returned_pointer_2;
    cached_table_value = table_value;
    if ( loaded_word_2 && (table_value & 0x400) != 0 )
      goto LABEL_66;
    goto LABEL_88;
  }
  integer_difference_2 = integer_difference - 1;
  if ( integer_difference_2 )
  {
    if ( integer_difference_2 != 1 )
      goto LABEL_66;
    sub_1401FDF84((__int64)&saved_literal_text, (&off_1402835A0)[2 * *byte_cursor - 42], (int)(&off_1402835A0)[2 * *byte_cursor - 41]);
    masked_bits_2 = (char)**(_BYTE **)&crt_undname_cursor;
    if ( !(_BYTE)masked_bits_2 )
    {
      sub_1401FE844((__int64)&saved_literal_text, (__int64)a1, 1u);
      return a1;
    }
    if ( (char)masked_bits_2 < 48 || (unsigned __int64)(masked_bits_2 - 48) >= 5 )
      goto LABEL_66;
    sub_1401FDF84((__int64)&loaded_word_2, (&off_140283AD0)[2 * masked_bits_2 - 96], (int)(&off_140283AD0)[2 * masked_bits_2 - 95]);
    masked_bits_3 = **(_BYTE **)&crt_undname_cursor;
    integer_sum = ++crt_undname_cursor;
    if ( masked_bits_3 == 48 )
    {
      sub_1402013D0((DName *)&literal_text, nullptr);
      masked_bits_8 = sub_1401FE7EC((__int64)&literal_text, (__int64)scratch_buffer, 32);
      state_address = (_QWORD *)sub_1401FE7C0(masked_bits_8, (__int64)&selection_flag_3, (__int64)&saved_literal_text);
LABEL_85:
      sub_1401FE7C0((__int64)state_address, (__int64)a1, (__int64)&loaded_word_2);
      return a1;
    }
    if ( masked_bits_3 == 49 )
    {
      sub_1401FE7C0((__int64)&saved_literal_text, (__int64)&selection_flag_3, (__int64)&loaded_word_2);
      call_result_2 = sub_140203F1C((__int64)scratch_buffer);
      masked_bits_4 = sub_1401FE7EC(call_result_2, (__int64)&literal_text, 44);
      sub_1401FE908((__int64)&selection_flag_3, masked_bits_4);
      call_result_3 = sub_140203F1C((__int64)scratch_buffer);
      masked_bits_5 = sub_1401FE7EC(call_result_3, (__int64)&literal_text, 44);
      sub_1401FE908((__int64)&selection_flag_3, masked_bits_5);
      call_result_4 = sub_140203F1C((__int64)scratch_buffer);
      masked_bits_6 = sub_1401FE7EC(call_result_4, (__int64)&literal_text, 44);
      sub_1401FE908((__int64)&selection_flag_3, masked_bits_6);
      call_result_5 = sub_1402017C8((__int64)scratch_buffer, 0);
      masked_bits_7 = sub_1401FE7EC(call_result_5, (__int64)&literal_text, 41);
      sub_1401FE908((__int64)&selection_flag_3, masked_bits_7);
      sub_1401FE7EC((__int64)&selection_flag_3, (__int64)a1, 39);
      return a1;
    }
    if ( masked_bits_3 <= 49 || masked_bits_3 > 52 )
    {
      byte_cursor_2 = (char *)(integer_sum - 1);
LABEL_41:
      crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor_2);
LABEL_42:
      a1[2] = 0;
      *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
      return a1;
    }
LABEL_88:
    state_address = &saved_literal_text;
    goto LABEL_85;
  }
LABEL_9:
  if ( saved_literal_text )
  {
    selection_code = 8;
    literal_text = "operator";
    returned_pointer = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&literal_text);
    sub_1401FE7C0((__int64)returned_pointer, (__int64)&literal_text, (__int64)&saved_literal_text);
    saved_literal_text = literal_text;
    option_flags = selection_code;
  }
LABEL_11:
  *(_QWORD *)a1 = (uint64)(uintptr_t)(saved_literal_text);
  saved_option_flags = option_flags;
LABEL_12:
  a1[2] = saved_option_flags;
  return a1;
}

// 140202B4B: conditional instruction was optimized away because cl.1>=43
// 140202BA3: conditional instruction was optimized away because ecx.4 is in (37..38)
// 140202EFC: conditional instruction was optimized away because al.1 is in (47..4A)

//----- (00000001402030A4) ----------------------------------------------------
DName *           sub_1402030A4(DName *a1, _QWORD *a2, __int64 a3)
{
  sub_14020353C(a1, a2, a3, 1);
  return a1;
}

//----- (00000001402030C4) ----------------------------------------------------
DName *           sub_1402030C4(DName *a1, _QWORD *a2, __int64 a3)
{
  sub_14020353C(a1, a2, a3, 0);
  return a1;
}

//----- (00000001402030E0) ----------------------------------------------------
_DWORD *           sub_1402030E0(_DWORD *a1, __int64 a2)
{
  _BYTE *loaded_record_pointer;
  __int64 masked_bits;
  int selection_code;
  char *literal_text;
  int selection_code_2;
  int loaded_word;
  char loaded_word_2;
       char **state_address;
  int selection_code_3;
  char *literal_text_2;
  __int64 selection_flag;
  int unused_written_slot;
       char *literal_text_3;
  int unused_written_slot_2;

  loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
  selection_flag = 0;
  unused_written_slot = 0;
  switch ( **(_BYTE **)&crt_undname_cursor )
  {
    case 0:
      goto LABEL_15;
    case 0x24:
      loaded_word_2 = *(_BYTE *)(crt_undname_cursor + 1LL);
      if ( loaded_word_2 != 36 )
      {
        if ( !loaded_word_2 )
        {
LABEL_15:
          unused_written_slot_2 = 0;
          literal_text_3 = (     char *)&off_1402848D0;
          state_address = &literal_text_3;
LABEL_16:
          sub_1401FE7C0((__int64)state_address, (__int64)a1, a2);
          return a1;
        }
LABEL_27:
        a1[2] = 0;
        *((_BYTE *)a1 + 8) = 2;
        *(_QWORD *)a1 = 0;
        return a1;
      }
      loaded_record_pointer = (_BYTE *)(crt_undname_cursor + 2LL);
      crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer);
      switch ( *loaded_record_pointer )
      {
        case 0:
          goto LABEL_15;
        case 0x41:
          crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          sub_140202084((__int64)a1, (__int64 *)a2);
          return a1;
        case 0x42:
          crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          sub_140203370((DName *)a1, a2, 1);
          return a1;
        case 0x43:
          literal_text_3 = nullptr;
          crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          unused_written_slot_2 = 0;
          masked_bits = sub_140200AFC((__int64)&selection_flag, a2, 0, &literal_text_3, 0);
          goto LABEL_6;
      }
      if ( *loaded_record_pointer != 81 )
      {
        if ( *loaded_record_pointer != 82 )
        {
          switch ( *loaded_record_pointer )
          {
            case 'S':
              crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
              break;
            case 'T':
              crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
              if ( !*(_QWORD *)a2 )
              {
                unused_written_slot_2 = 14;
                literal_text_3 = "std::nullptr_t";
                sub_1401FE248((DName *)a1, (     struct StringLiteral *)&literal_text_3);
                return a1;
              }
              unused_written_slot_2 = 15;
              literal_text_3 = "std::nullptr_t ";
              state_address = (     char **)sub_1401FE248((DName *)&selection_flag, (     struct StringLiteral *)&literal_text_3);
              goto LABEL_16;
            case 'Y':
              crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
              sub_140203DE0((__int64)a1);
              return a1;
          }
          goto LABEL_27;
        }
        if ( *(_QWORD *)a2 )
        {
          selection_code_3 = 9;
          literal_text_2 = "volatile ";
        }
        else
        {
          selection_code_3 = 8;
          literal_text_2 = "volatile";
        }
        sub_1401FDF84((__int64)&selection_flag, literal_text_2, selection_code_3);
        loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
      }
      selection_code_2 = 3;
      goto LABEL_12;
    case 0x41:
LABEL_11:
      selection_code_2 = 2;
LABEL_12:
      literal_text_3 = *(     char **)a2;
      loaded_word = *(_DWORD *)(a2 + 8) | 0x100;
      crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      unused_written_slot_2 = loaded_word;
      sub_14020353C((DName *)a1, &selection_flag, (__int64)&literal_text_3, selection_code_2);
      return a1;
    case 0x42:
      if ( *(_QWORD *)a2 )
      {
        selection_code = 9;
        literal_text = "volatile ";
      }
      else
      {
        selection_code = 8;
        literal_text = "volatile";
      }
      sub_1401FDF84((__int64)&selection_flag, literal_text, selection_code);
      loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
      goto LABEL_11;
  }
  masked_bits = a2;
LABEL_6:
  sub_14020033C((DName *)a1, masked_bits);
  return a1;
}

//----- (0000000140203370) ----------------------------------------------------
DName *           sub_140203370(DName *a1, __int64 a2, int a3)
{
  _BYTE *loaded_record_pointer;
       char *literal_text;
       char *literal_text_2;
  DName *state_address;
       char *literal_text_3;
  DName *returned_pointer;
  __int64 cached_packed_vector;
  int dword2_result;
  __int128 packed_vector;
  __int128 packed_vector_2;
  _BYTE scratch_buffer[16];

  loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
  if ( !**(_BYTE **)&crt_undname_cursor )
  {
    DWORD2(packed_vector_2) = 0;
    *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)(&off_1402848D0);
    state_address = (DName *)&packed_vector_2;
    goto LABEL_29;
  }
  if ( !a3 )
  {
LABEL_13:
    if ( *loaded_record_pointer == 36 )
    {
      if ( loaded_record_pointer[1] == 36 && loaded_record_pointer[2] == 84 )
      {
        crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 3);
        if ( !*(_QWORD *)a2 )
        {
          literal_text = "std::nullptr_t";
          DWORD2(packed_vector) = 14;
          goto LABEL_6;
        }
        literal_text_2 = "std::nullptr_t ";
        DWORD2(packed_vector) = 15;
        goto LABEL_8;
      }
    }
    else if ( *loaded_record_pointer == 89 )
    {
      crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      sub_1401FFFFC(a1, a2);
      return a1;
    }
    sub_14020033C((DName *)&packed_vector, a2);
    if ( (*(_DWORD *)(a2 + 8) & 0x4000) != 0 )
    {
      literal_text_3 = "cli::array<";
      DWORD2(packed_vector_2) = 11;
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 8) & 0x2000) == 0 )
      {
        dword2_result = DWORD2(packed_vector);
        cached_packed_vector = packed_vector;
        goto LABEL_27;
      }
      literal_text_3 = "cli::pin_ptr<";
      DWORD2(packed_vector_2) = 13;
    }
    *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)(literal_text_3);
    returned_pointer = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector_2);
    sub_1401FE7C0((__int64)returned_pointer, (__int64)&packed_vector_2, (__int64)&packed_vector);
    cached_packed_vector = packed_vector_2;
    dword2_result = DWORD2(packed_vector_2);
LABEL_27:
    *(_QWORD *)a1 = cached_packed_vector;
    *((_DWORD *)a1 + 2) = dword2_result;
    return a1;
  }
  if ( **(_BYTE **)&crt_undname_cursor != 88 )
  {
    if ( **(_BYTE **)&crt_undname_cursor == 95
      && *(_BYTE *)(crt_undname_cursor + 1LL) == 95
      && *(_BYTE *)(crt_undname_cursor + 2LL) == 90 )
    {
      loaded_record_pointer = (_BYTE *)(crt_undname_cursor + 3LL);
      crt_undname_cursor += 3LL;
    }
    goto LABEL_13;
  }
  ++crt_undname_cursor;
  if ( *(_QWORD *)a2 )
  {
    literal_text_2 = "void ";
    DWORD2(packed_vector) = 5;
LABEL_8:
    *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(literal_text_2);
    packed_vector_2 = packed_vector;
    state_address = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector_2);
LABEL_29:
    sub_1401FE7C0((__int64)state_address, (__int64)a1, a2);
    return a1;
  }
  literal_text = "void";
  DWORD2(packed_vector) = 4;
LABEL_6:
  *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(literal_text);
  packed_vector_2 = packed_vector;
  sub_1401FE248(a1, (     struct StringLiteral *)&packed_vector_2);
  return a1;
}

//----- (000000014020353C) ----------------------------------------------------
DName *           sub_14020353C(DName *a1, _QWORD *a2, __int64 a3, int a4)
{
  int selection_flag;
  char masked_bits;
  unsigned __int64 heap_manager_get_memory_result;
  unsigned __int64 heap_manager_get_memory_result_2;
  _UNKNOWN ***state_address;
  int selection_flag_2;
  __int128 masked_bits_2;

  selection_flag = 0;
  masked_bits_2 = *((_OWORD *)&off_140283B20 + a4);
  masked_bits = **(_BYTE **)&crt_undname_cursor;
  if ( **(_BYTE **)&crt_undname_cursor )
  {
    if ( (unsigned __int8)(masked_bits - 54) <= 3u || masked_bits == 95 )
    {
      sub_1401FE248((DName *)&state_address, (     struct StringLiteral *)&masked_bits_2);
      if ( *a2 && (!*(_QWORD *)a3 || (*(_DWORD *)(a3 + 8) & 0x100) == 0) )
        sub_1401FE908((__int64)&state_address, (__int64)a2);
      if ( *(_QWORD *)a3 )
        sub_1401FE908((__int64)&state_address, a3);
      sub_140202084((__int64)a1, (__int64 *)&state_address);
    }
    else
    {
      sub_140200AFC((__int64)&masked_bits_2, a3, a4, a2, 0);
      LOBYTE(selection_flag) = a4 == 1;
      sub_140203370(a1, (__int64)&masked_bits_2, selection_flag);
    }
  }
  else
  {
    state_address = &off_1402848D0;
    selection_flag_2 = 0;
    if ( SDWORD2(masked_bits_2) > 0 )
    {
      heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 24);
      if ( heap_manager_get_memory_result )
      {
        *(_DWORD *)(heap_manager_get_memory_result + 16) = DWORD2(masked_bits_2);
        *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284718);
        *(_QWORD *)(heap_manager_get_memory_result + 8) = masked_bits_2;
      }
      else
      {
        heap_manager_get_memory_result = 0;
      }
      sub_1401FDF20((unsigned __int64 *)&state_address, heap_manager_get_memory_result);
    }
    if ( *a2 )
      sub_1401FE908((__int64)&state_address, (__int64)a2);
    if ( *(_QWORD *)a3 )
    {
      if ( *a2 && (char)selection_flag_2 <= 1 )
      {
        if ( state_address )
        {
          heap_manager_get_memory_result_2 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
          if ( heap_manager_get_memory_result_2 )
          {
            *(_BYTE *)(heap_manager_get_memory_result_2 + 8) = 32;
            *(_QWORD *)heap_manager_get_memory_result_2 = (uint64)(uintptr_t)(off_1402846F0);
          }
          else
          {
            heap_manager_get_memory_result_2 = 0;
          }
          sub_1401FDE58((unsigned __int64 *)&state_address, heap_manager_get_memory_result_2);
        }
        else
        {
          state_address = nullptr;
          selection_flag_2 = 0;
          sub_1401FFB98((sr_anon_89 *)&state_address, 32);
        }
      }
      sub_1401FE908((__int64)&state_address, a3);
    }
    *(_QWORD *)a1 = (uint64)(uintptr_t)(state_address);
    *((_DWORD *)a1 + 2) = selection_flag_2;
  }
  return a1;
}

//----- (0000000140203714) ----------------------------------------------------
DName *           sub_140203714(DName *a1, _QWORD *a2, __int64 a3, int a4)
{
  sub_14020353C(a1, a2, a3, a4);
  return a1;
}

//----- (000000014020372C) ----------------------------------------------------
__int64            sub_14020372C(__int64 a1)
{
  char *byte_cursor;
  unsigned int option_flags;
  __int128 packed_vector;
  unsigned __int64 heap_manager_get_memory_result;
  unsigned __int64 selection_flag;
  int selection_flag_2;
  __int128 packed_vector_2;
  __int128 packed_vector_3;
  __int128 call_result;
  __int128 packed_vector_4;

  if ( **(_BYTE **)&crt_undname_cursor == 95
    && (byte_cursor = (char *)(crt_undname_cursor + 1LL),
        *(_BYTE *)(crt_undname_cursor + 1LL))
    && *byte_cursor <= 68 )
  {
    ++crt_undname_cursor;
    option_flags = *byte_cursor - 65;
    crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor + 1);
    if ( option_flags > 3 )
    {
LABEL_20:
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = 2;
    }
    else
    {
      selection_flag = 0;
      selection_flag_2 = 0;
      if ( (~(g_144CBE628 >> 1) & 1) != 0 )
      {
        sub_1401FFB98((sr_anon_89 *)&selection_flag, 32);
        call_result = *sub_1401FEC0C(&packed_vector_4, 14);
        sub_1401FE888((__int64)&selection_flag, (__int64)&call_result);
        if ( option_flags )
        {
          while ( 1 )
          {
            if ( (option_flags & -option_flags) == 1 )
            {
              DWORD2(packed_vector_3) = 3;
              *(_QWORD *)&packed_vector_3 = (uint64)(uintptr_t)("cpu");
              packed_vector = packed_vector_3;
            }
            else
            {
              if ( (option_flags & -option_flags) != 2 )
                goto LABEL_20;
              DWORD2(packed_vector_2) = 3;
              *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)("amp");
              packed_vector = packed_vector_2;
            }
            packed_vector_4 = packed_vector;
            sub_1401FE888((__int64)&selection_flag, (__int64)&packed_vector_4);
            option_flags &= ~(option_flags & -option_flags);
            if ( !option_flags )
              break;
            DWORD2(call_result) = 2;
            *(_QWORD *)&call_result = (uint64)(uintptr_t)(&word_140274678);
            packed_vector_4 = call_result;
            sub_1401FE888((__int64)&selection_flag, (__int64)&packed_vector_4);
          }
        }
        if ( (char)selection_flag_2 <= 1 )
        {
          if ( selection_flag )
          {
            heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
            if ( heap_manager_get_memory_result )
            {
              *(_BYTE *)(heap_manager_get_memory_result + 8) = 41;
              *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(off_1402846F0);
            }
            sub_1401FDE58(&selection_flag, heap_manager_get_memory_result);
          }
          else
          {
            selection_flag = 0;
            selection_flag_2 = 0;
            sub_1401FFB98((sr_anon_89 *)&selection_flag, 41);
          }
        }
      }
      *(_QWORD *)a1 = selection_flag;
      *(_DWORD *)(a1 + 8) = selection_flag_2;
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return a1;
}

//----- (00000001402038F8) ----------------------------------------------------
DName *           sub_1402038F8(DName *a1, struct DName *a2)
{
  if ( **(_BYTE **)&crt_undname_cursor == 64 )
  {
    ++crt_undname_cursor;
    sub_1401FE2A4(a1, a2);
  }
  else
  {
    sub_1402013D0(a1, a2);
  }
  return a1;
}

//----- (000000014020392C) ----------------------------------------------------
__int64            sub_14020392C(__int64 a1, __int64 a2, __int64 a3)
{
  char selection_flag;
  DName *returned_pointer;
  _BYTE *loaded_record_pointer;
  __int64 integer_sum;
  __int64 call_result;
  char *state_address;
  __int64 loaded_word;
  int loaded_word_2;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 call_result_2;
  __int64 call_result_3;
  __int64 call_result_4;
  __int64 call_result_5;
  _DWORD *returned_pointer_2;
  __int64 call_result_6;
  __int64 call_result_7;
  __int64 cached_call_result;
  DName *returned_pointer_3;
  __int64 masked_bits_3;
  __int64 call_result_8;
  __int64 saved_loaded_word;
  int saved_loaded_word_2;
  __int128 packed_vector;
  __int128 packed_vector_2;
  __int64 selection_flag_2;
  __int64 packed_word_bits;
  __int64 callee_output_word;
  __int64 unrecovered_register_value;
  __int64 selection_flag_3;
  int unused_written_slot;
  __int64 selection_flag_4;
  int unused_written_slot_2;
  __int128 packed_vector_3;
  __int128 packed_vector_4;
  __int64 callee_output_word_2;
  int unrecovered_register_value_2;
  __int64 callee_output_word_3;
  int unrecovered_register_value_3;
  __int128 packed_vector_5;
  __int128 packed_vector_6;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];
  _BYTE scratch_buffer_3[16];
  _BYTE scratch_buffer_4[16];
  _BYTE scratch_buffer_5[16];
  _BYTE scratch_buffer_6[16];
  _BYTE scratch_buffer_7[16];
  _BYTE scratch_buffer_8[16];
  _BYTE scratch_buffer_9[16];
  _BYTE scratch_buffer_10[16];
  _BYTE scratch_buffer_11[16];
  _DWORD scratch_buffer_12[4];
  _BYTE scratch_buffer_13[16];
  _BYTE scratch_buffer_14[16];
  _BYTE scratch_buffer_15[16];
  char callee_output_word_4;
  _BYTE scratch_buffer_16[16];
  _BYTE scratch_buffer_17[16];
  char callee_output_word_5;
  _BYTE scratch_buffer_18[16];
  char callee_output_word_6;

  *(_QWORD *)a1 = 0;
  selection_flag = 0;
  *(_DWORD *)(a1 + 8) = 0;
  while ( (**(_BYTE **)&crt_undname_cursor & 0xBF) != 0 )
  {
    if ( LOBYTE(g_144CBE62C) && !BYTE1(g_144CBE62C) )
      return a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)&packed_vector_4 = (uint64)(uintptr_t)("::");
      DWORD2(packed_vector_4) = 2;
      packed_vector_2 = packed_vector_4;
      returned_pointer = sub_1401FE248((DName *)scratch_buffer_5, (     struct StringLiteral *)&packed_vector_2);
      sub_1401FE7C0((__int64)returned_pointer, (__int64)&callee_output_word_2, a1);
      *(_QWORD *)a1 = callee_output_word_2;
      *(_DWORD *)(a1 + 8) = unrecovered_register_value_2;
      if ( selection_flag )
      {
        selection_flag_2 = 0;
        LODWORD(packed_word_bits) = 0;
        sub_1401FFB98((sr_anon_89 *)&selection_flag_2, 91);
        sub_1401FE7C0((__int64)&selection_flag_2, (__int64)&callee_output_word_3, a1);
        selection_flag = 0;
        *(_QWORD *)a1 = callee_output_word_3;
        *(_DWORD *)(a1 + 8) = unrecovered_register_value_3;
      }
    }
    loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
    if ( **(_BYTE **)&crt_undname_cursor != 63 )
    {
      call_result = sub_140205810((__int64)scratch_buffer_4, 1, 0);
      state_address = scratch_buffer_3;
      goto LABEL_37;
    }
    integer_sum = ++crt_undname_cursor;
    switch ( loaded_record_pointer[1] )
    {
      case '$':
        crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer);
        call_result = sub_140205810((__int64)scratch_buffer_17, 1, 0);
        state_address = &callee_output_word_5;
LABEL_37:
        call_result_5 = sub_1401FE7C0(call_result, (__int64)state_address, a1);
        goto LABEL_38;
      case '%':
        goto LABEL_33;
      case '?':
        if ( loaded_record_pointer[2] == 95 && loaded_record_pointer[3] == 63 )
        {
          crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 2);
          returned_pointer_2 = sub_14020285C(scratch_buffer_12, 0, nullptr);
          call_result_6 = sub_1401FE7C0((__int64)returned_pointer_2, (__int64)scratch_buffer_13, a1);
          *(_QWORD *)a1 = *(_QWORD *)call_result_6;
          *(_DWORD *)(a1 + 8) = *(_DWORD *)(call_result_6 + 8);
          if ( **(_BYTE **)&crt_undname_cursor == 64 )
LABEL_31:
            ++crt_undname_cursor;
          goto LABEL_39;
        }
        call_result_7 = sub_1402014E4((__int64)scratch_buffer_14, integer_sum, a3);
        selection_flag_4 = 0;
        unused_written_slot_2 = 0;
        cached_call_result = call_result_7;
        sub_1401FFB98((sr_anon_89 *)&selection_flag_4, 96);
        sub_1401FE7C0((__int64)&selection_flag_4, (__int64)scratch_buffer_2, cached_call_result);
        call_result = sub_1401FE7EC((__int64)scratch_buffer_2, (__int64)scratch_buffer_15, 39);
        state_address = &callee_output_word_4;
        goto LABEL_37;
      case 'A':
LABEL_33:
        sub_1401FE198((DName *)&packed_vector_3, (char **)(unsigned int *)&crt_undname_cursor, 64);
        DWORD2(packed_vector_6) = 21;
        *(_QWORD *)&packed_vector_6 = (uint64)(uintptr_t)("`anonymous namespace'");
        packed_vector_2 = packed_vector_6;
        returned_pointer_3 = sub_1401FE248((DName *)scratch_buffer_16, (     struct StringLiteral *)&packed_vector_2);
        sub_1401FE7C0((__int64)returned_pointer_3, (__int64)&packed_vector, a1);
        *(_QWORD *)a1 = packed_vector;
        *(_DWORD *)(a1 + 8) = DWORD2(packed_vector);
        if ( **(_DWORD **)&g_144CBE608 != 9 )
          sub_1401FEB28(*(int **)&g_144CBE608, (__int64)&packed_vector_3);
        goto LABEL_39;
    }
    if ( loaded_record_pointer[1] != 73 )
    {
      if ( loaded_record_pointer[1] == 81 )
      {
        loaded_word = 0;
        saved_loaded_word_2 = 0;
        saved_loaded_word = 0;
        crt_undname_cursor = integer_sum + 1;
        while ( 1 )
        {
          sub_140205810((__int64)&callee_output_word, 1, 0);
          loaded_word_2 = unrecovered_register_value;
          if ( (_BYTE)unrecovered_register_value )
          {
            saved_loaded_word_2 = 2;
            loaded_word = 0;
          }
          else
          {
            if ( loaded_word )
            {
              *(_QWORD *)&packed_vector_5 = (uint64)(uintptr_t)("::");
              DWORD2(packed_vector_5) = 2;
              packed_vector_2 = packed_vector_5;
              masked_bits = sub_1401FE794((__int64)&callee_output_word, (__int64)scratch_buffer_18, (__int64)&packed_vector_2);
              masked_bits_2 = sub_1401FE7C0(masked_bits, (__int64)scratch_buffer_7, (__int64)&saved_loaded_word);
              loaded_word = *(_QWORD *)masked_bits_2;
              loaded_word_2 = *(_DWORD *)(masked_bits_2 + 8);
            }
            else
            {
              loaded_word = callee_output_word;
            }
            saved_loaded_word_2 = loaded_word_2;
          }
          saved_loaded_word = loaded_word;
          if ( (_BYTE)saved_loaded_word_2 )
            break;
          if ( **(_BYTE **)&crt_undname_cursor == 64 )
          {
            selection_flag_3 = 0;
            unused_written_slot = 0;
            sub_1401FFB98((sr_anon_89 *)&selection_flag_3, 91);
            sub_1401FE7C0((__int64)&selection_flag_3, (__int64)scratch_buffer, (__int64)&saved_loaded_word);
            call_result_2 = sub_1401FE7EC((__int64)scratch_buffer, (__int64)scratch_buffer_8, 93);
            *(_QWORD *)a1 = *(_QWORD *)call_result_2;
            *(_DWORD *)(a1 + 8) = *(_DWORD *)(call_result_2 + 8);
            goto LABEL_31;
          }
        }
        *(_DWORD *)(a1 + 8) = 0;
        *(_BYTE *)(a1 + 8) = 2;
        *(_QWORD *)a1 = 0;
        goto LABEL_39;
      }
      call_result = sub_14020267C((__int64)scratch_buffer_6);
      state_address = &callee_output_word_6;
      goto LABEL_37;
    }
    crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 2);
    call_result_3 = sub_140205810((__int64)scratch_buffer_9, 1, 0);
    call_result_4 = sub_1401FE7EC(call_result_3, (__int64)scratch_buffer_10, 93);
    call_result_5 = sub_1401FE7C0(call_result_4, (__int64)scratch_buffer_11, a1);
    selection_flag = 1;
LABEL_38:
    *(_QWORD *)a1 = *(_QWORD *)call_result_5;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(call_result_5 + 8);
LABEL_39:
    if ( *(_BYTE *)(a1 + 8) )
      break;
  }
  if ( **(_BYTE **)&crt_undname_cursor )
  {
    if ( **(_BYTE **)&crt_undname_cursor != 64 )
    {
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 8) = 2;
      *(_QWORD *)a1 = 0;
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("::");
    DWORD2(packed_vector) = 2;
    packed_vector_3 = packed_vector;
    DWORD2(packed_vector) = 0;
    *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(&off_1402848D0);
    masked_bits_3 = sub_1401FE794((__int64)&packed_vector, (__int64)scratch_buffer_3, (__int64)&packed_vector_3);
    call_result_8 = sub_1401FE7C0(masked_bits_3, (__int64)scratch_buffer_4, a1);
    *(_QWORD *)a1 = *(_QWORD *)call_result_8;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(call_result_8 + 8);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

//----- (0000000140203DE0) ----------------------------------------------------
__int64            sub_140203DE0(__int64 a1)
{
  __int64 masked_bits;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 loaded_word;
  bool comparison_result;
  _BYTE *loaded_record_pointer;
  __int64 masked_bits_2;
  __int64 masked_bits_3;
  __int64 call_result;
  __int128 packed_vector;
  __int64 masked_bits_4;
  __int64 call_result_2;
  __int128 packed_vector_2;
  __int128 packed_vector_3;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  masked_bits = sub_140205810((__int64)&packed_vector_3, 1, 0);
  loaded_word = *(_QWORD *)masked_bits;
  *(_QWORD *)a1 = *(_QWORD *)masked_bits;
  LODWORD(masked_bits) = *(_DWORD *)(masked_bits + 8);
  comparison_result = (_BYTE)masked_bits == 0;
  *(_DWORD *)(a1 + 8) = masked_bits;
  loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
  if ( comparison_result && **(_BYTE **)&crt_undname_cursor )
  {
    if ( **(_BYTE **)&crt_undname_cursor == 64 )
    {
LABEL_6:
      crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      return a1;
    }
    *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)("::");
    DWORD2(packed_vector_2) = 2;
    masked_bits_2 = sub_14020392C((__int64)&packed_vector_3, unrecovered_register_value, unrecovered_register_value_2);
    masked_bits_3 = sub_1401FE794(masked_bits_2, (__int64)scratch_buffer, (__int64)&packed_vector_2);
    call_result = sub_1401FE7C0(masked_bits_3, (__int64)scratch_buffer_2, a1);
    loaded_word = *(_QWORD *)call_result;
    *(_QWORD *)a1 = *(_QWORD *)call_result;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(call_result + 8);
    loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
  }
  if ( *loaded_record_pointer == 64 )
    goto LABEL_6;
  if ( *loaded_record_pointer )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else if ( loaded_word )
  {
    *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)("::");
    DWORD2(packed_vector_2) = 2;
    packed_vector = packed_vector_2;
    DWORD2(packed_vector_2) = 0;
    packed_vector_3 = packed_vector;
    *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)(&off_1402848D0);
    masked_bits_4 = sub_1401FE794((__int64)&packed_vector_2, (__int64)scratch_buffer_2, (__int64)&packed_vector_3);
    call_result_2 = sub_1401FE7C0(masked_bits_4, (__int64)scratch_buffer, a1);
    *(_QWORD *)a1 = *(_QWORD *)call_result_2;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(call_result_2 + 8);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

//----- (0000000140203F1C) ----------------------------------------------------
__int64            sub_140203F1C(__int64 a1)
{
  __int64 call_result;
  __int64 selection_flag;
  int unused_written_slot;
  _BYTE scratch_buffer[24];

  if ( **(_BYTE **)&crt_undname_cursor )
  {
    if ( **(_BYTE **)&crt_undname_cursor == 63 )
    {
      ++crt_undname_cursor;
      selection_flag = 0;
      unused_written_slot = 0;
      call_result = sub_1402017C8((__int64)scratch_buffer, 0);
      sub_1401FFB98((sr_anon_89 *)&selection_flag, 45);
      sub_1401FE7C0((__int64)&selection_flag, a1, call_result);
    }
    else
    {
      sub_1402017C8(a1, 0);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

//----- (0000000140203FA4) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140203FA4(__int64 a1)
{
  __int64 selection_flag;
  int unused_written_slot;
  __int64 selection_flag_2;
  int unused_written_slot_2;

  selection_flag = 0;
  selection_flag_2 = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  sub_140200AFC(a1, (__int64)&selection_flag_2, 0, &selection_flag, 0);
  return a1;
}

//----- (0000000140203FFC) ----------------------------------------------------
char *           sub_140203FFC(DName *this, char *a2, int a3)
{
  __int64 (           ***int64_result)(_QWORD);
  char *heap_manager_get_memory_result;
  char *unused_written_slot;

  int64_result = *(__int64 (           ****)(_QWORD))this;
  heap_manager_get_memory_result = a2;
  if ( int64_result )
  {
    if ( a2
      || (a3 = (**int64_result)(int64_result) + 1, (heap_manager_get_memory_result = (char *)crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, a3)) != nullptr) )
    {
      if ( *(_QWORD *)this )
        unused_written_slot = (char *)(*(__int64 (           **)(_QWORD, char *, char *))(**(_QWORD **)this + 24LL))(
                       *(_QWORD *)this,
                       heap_manager_get_memory_result,
                       &heap_manager_get_memory_result[a3 - 1]);
      else
        unused_written_slot = heap_manager_get_memory_result;
      *unused_written_slot = 0;
    }
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return heap_manager_get_memory_result;
}

//----- (00000001402040EC) ----------------------------------------------------
char *           sub_1402040EC(pDNameNode *this, char *a2, char *a3)
{
  __int64 *loaded_record_pointer;
  __int64 loaded_word;

  loaded_record_pointer = *((__int64 **)this + 1);
  if ( loaded_record_pointer )
  {
    loaded_word = *loaded_record_pointer;
    if ( loaded_word )
      return (char *)(*(__int64 (           **)(__int64, char *, char *))(*(_QWORD *)loaded_word + 24LL))(loaded_word, a2, a3);
  }
  return a2;
}

//----- (000000014020411C) ----------------------------------------------------
unsigned __int64            sub_14020411C(pairNode *this, char *a2, char *a3)
{
  unsigned __int64 result;

  result = (*(__int64 (           **)(_QWORD, char *))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), a2);
  if ( result < (unsigned __int64)a3 )
    return (*(unsigned __int64 (           **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 2) + 24LL))(
             *((_QWORD *)this + 2),
             result,
             a3);
  return result;
}

//----- (00000001402041A0) ----------------------------------------------------
__int64            sub_1402041A0(__int64 a1, int a2)
{
  char masked_bits;
  char *byte_cursor;
  char input_byte;
  _BYTE *byte_cursor_2;
  _BYTE *i;
  __int64 callee_output_word;
  int unrecovered_register_value;
  _BYTE scratch_buffer[24];

  sub_1401FE248((DName *)&callee_output_word, (     struct StringLiteral *)&(&off_140283B80)[2 * a2]);
  masked_bits = **(_BYTE **)&crt_undname_cursor;
  byte_cursor = (char *)++crt_undname_cursor;
  if ( masked_bits == 64 && (input_byte = *byte_cursor, byte_cursor_2 = byte_cursor + 1, crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor_2), input_byte == 95) )
  {
    crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor_2 + 1);
    sub_1402017C8((__int64)scratch_buffer, 0);
    sub_1402017C8((__int64)scratch_buffer, 0);
    for ( i = *(_BYTE **)&crt_undname_cursor; *i && *i != 64; crt_undname_cursor = (uint64)(uintptr_t)(i) )
      ++i;
    if ( *i )
    {
      crt_undname_cursor = (uint64)(uintptr_t)(i + 1);
      *(_QWORD *)a1 = callee_output_word;
      *(_DWORD *)(a1 + 8) = unrecovered_register_value;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
      crt_undname_cursor = (uint64)(uintptr_t)(i - 1);
      *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  return a1;
}

//----- (00000001402042B4) ----------------------------------------------------
__int64            sub_1402042B4(__int64 a1)
{
  if ( **(_BYTE **)&crt_undname_cursor )
  {
    if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(crt_undname_cursor), (const char *)(uintptr_t)("??_C"), 4) )
    {
      crt_undname_cursor += 4LL;
      sub_1402041A0(a1, 0);
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = 2;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

//----- (000000014020431C) ----------------------------------------------------
_DWORD *           sub_14020431C(_DWORD *a1)
{
  if ( **(_BYTE **)&crt_undname_cursor == 63 )
  {
    if ( *(_BYTE *)(crt_undname_cursor + 1LL) == 36 )
    {
      sub_1402045BC((__int64)a1, 1);
    }
    else
    {
      ++crt_undname_cursor;
      sub_14020285C(a1, 0, nullptr);
    }
  }
  else
  {
    sub_140205810((__int64)a1, 1, 0);
  }
  return a1;
}

//----- (0000000140204368) ----------------------------------------------------
__int64            sub_140204368(__int64 a1, __int64 a2)
{
  char selection_flag;
  char *record_byte_offset;
  int loaded_word;
  char selection_flag_2;
  __int64 integer_difference;
  __int64 masked_bits;
  __int64 loaded_word_2;
  char *saved_record_byte_offset;
  _BYTE *byte_cursor;
  __int64 call_result;
  int loaded_word_3;
  int *loaded_record_pointer;
  unsigned __int64 heap_manager_get_memory_result;
  unsigned __int64 heap_manager_get_memory_result_2;
  __int64 saved_loaded_word;
  int unused_written_slot;
  __int128 packed_vector;
  __int128 packed_vector_2;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];
  _BYTE scratch_buffer_3[16];

  *(_QWORD *)a1 = 0;
  selection_flag = 1;
  *(_DWORD *)(a1 + 8) = 0;
  BYTE1(g_144CBE62C) = 1;
  if ( !*(_BYTE *)(a1 + 8) )
  {
    record_byte_offset = *(char **)&crt_undname_cursor;
    do
    {
      if ( (*record_byte_offset & 0xBF) == 0 )
        break;
      loaded_word = *record_byte_offset;
      selection_flag_2 = 0;
      saved_loaded_word = 0;
      integer_difference = (unsigned int)(loaded_word - 48);
      unused_written_slot = 0;
      if ( (unsigned int)integer_difference <= 9 )
      {
        crt_undname_cursor = (uint64)(uintptr_t)(record_byte_offset + 1);
        masked_bits = sub_1401FE684(*(signed int **)&g_144CBE610, (__int64)scratch_buffer, integer_difference);
        loaded_word_2 = *(_QWORD *)masked_bits;
        LODWORD(masked_bits) = *(_DWORD *)(masked_bits + 8);
        saved_loaded_word = loaded_word_2;
        unused_written_slot = masked_bits;
LABEL_28:
        record_byte_offset = *(char **)&crt_undname_cursor;
LABEL_29:
        if ( loaded_word_2 )
        {
          if ( !selection_flag && *(char *)(a1 + 8) <= 1 )
          {
            if ( *(_QWORD *)a1 )
            {
              heap_manager_get_memory_result_2 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
              if ( heap_manager_get_memory_result_2 )
              {
                *(_BYTE *)(heap_manager_get_memory_result_2 + 8) = 44;
                *(_QWORD *)heap_manager_get_memory_result_2 = (uint64)(uintptr_t)(off_1402846F0);
              }
              sub_1401FDE58((unsigned __int64 *)a1, heap_manager_get_memory_result_2);
            }
            else
            {
              *(_QWORD *)a1 = 0;
              *(_DWORD *)(a1 + 8) = 0;
              sub_1401FFB98((sr_anon_89 *)a1, 44);
            }
          }
          sub_1401FE908(a1, (__int64)&saved_loaded_word);
          if ( selection_flag_2 )
          {
            DWORD2(packed_vector) = 3;
            *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("...");
            packed_vector_2 = packed_vector;
            sub_1401FE888(a1, (__int64)&packed_vector_2);
          }
          record_byte_offset = *(char **)&crt_undname_cursor;
        }
        goto LABEL_40;
      }
      saved_record_byte_offset = record_byte_offset;
      if ( *record_byte_offset != 36 )
      {
LABEL_22:
        call_result = sub_140204CC0((DName *)scratch_buffer_3);
        goto LABEL_23;
      }
      if ( record_byte_offset[1] == 36 )
      {
        a2 = (unsigned int)(record_byte_offset[2] - 36);
        if ( record_byte_offset[2] == 36 )
        {
          if ( record_byte_offset[3] == 86 )
          {
            record_byte_offset += 4;
            goto LABEL_21;
          }
        }
        else
        {
          a2 = (unsigned int)(record_byte_offset[2] - 85);
          if ( record_byte_offset[2] == 85 )
            goto LABEL_17;
          a2 = (unsigned int)(record_byte_offset[2] - 86);
          if ( record_byte_offset[2] == 86 )
            goto LABEL_18;
          a2 = (unsigned int)(record_byte_offset[2] - 87);
          if ( record_byte_offset[2] == 87 )
          {
            selection_flag_2 = 1;
LABEL_17:
            record_byte_offset += 3;
            crt_undname_cursor = (uint64)(uintptr_t)(record_byte_offset);
            goto LABEL_13;
          }
          if ( record_byte_offset[2] == 90 )
          {
LABEL_18:
            record_byte_offset += 3;
LABEL_21:
            crt_undname_cursor = (uint64)(uintptr_t)(record_byte_offset);
            goto LABEL_40;
          }
        }
      }
LABEL_13:
      if ( *record_byte_offset != 36 )
        goto LABEL_22;
      byte_cursor = record_byte_offset + 1;
      if ( *byte_cursor == 36 )
        goto LABEL_22;
      crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor);
      call_result = sub_140204850((DName *)scratch_buffer_2, a2, integer_difference);
LABEL_23:
      loaded_word_3 = *(_DWORD *)(call_result + 8);
      loaded_word_2 = *(_QWORD *)call_result;
      record_byte_offset = *(char **)&crt_undname_cursor;
      unused_written_slot = loaded_word_3;
      saved_loaded_word = loaded_word_2;
      if ( (__int64)(crt_undname_cursor - (_QWORD)saved_record_byte_offset) <= 1 )
        goto LABEL_29;
      loaded_record_pointer = *(int **)&g_144CBE610;
      if ( **(_DWORD **)&g_144CBE610 == 9 )
        goto LABEL_29;
      if ( loaded_word_2 )
      {
        heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
        if ( heap_manager_get_memory_result )
        {
          *(_QWORD *)heap_manager_get_memory_result = loaded_word_2;
          *(_DWORD *)(heap_manager_get_memory_result + 8) = loaded_word_3;
          a2 = *loaded_record_pointer;
          *loaded_record_pointer = a2 + 1;
          *(_QWORD *)&loaded_record_pointer[2 * a2 + 4] = heap_manager_get_memory_result;
        }
        goto LABEL_28;
      }
LABEL_40:
      selection_flag = 0;
    }
    while ( !*(_BYTE *)(a1 + 8) );
  }
  BYTE1(g_144CBE62C) = 0;
  return a1;
}

//----- (00000001402045BC) ----------------------------------------------------
__int64            sub_1402045BC(__int64 a1, char a2)
{
  __int64 state_word;
  _BYTE *byte_cursor;
  char cached_selection_flag;
  bool comparison_result;
  __int64 call_result;
  __int64 unrecovered_register_value;
  unsigned __int64 loaded_word;
  char state_word_2;
  unsigned __int64 heap_manager_get_memory_result;
  __int64 call_result_2;
  unsigned __int64 heap_manager_get_memory_result_2;
  unsigned __int64 heap_manager_get_memory_result_3;
  unsigned __int64 saved_loaded_word;
  int loaded_word_2;
  __int64 state_word_3;
  _DWORD scratch_buffer[6];
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  char selection_flag;
  __int64 state_word_4;

  if ( **(_BYTE **)&crt_undname_cursor != 63 || *(_BYTE *)(crt_undname_cursor + 1LL) != 36 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
    return a1;
  }
  state_word = g_144CBE600;
  byte_cursor = (_BYTE *)(crt_undname_cursor + 2LL);
  state_word_4 = g_144CBE608;
  cached_selection_flag = 0;
  state_word_3 = g_144CBE610;
  integer_difference = -1;
  g_144CBE600 = (uint64)(uintptr_t)(&integer_difference);
  g_144CBE608 = (uint64)(uintptr_t)(&integer_difference_2);
  g_144CBE610 = (uint64)(uintptr_t)(&integer_difference_3);
  integer_difference_2 = -1;
  integer_difference_3 = -1;
  crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor);
  comparison_result = *byte_cursor == 63;
  selection_flag = 0;
  if ( comparison_result )
  {
    crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor + 1);
    call_result = (__int64)sub_14020285C(scratch_buffer, 4294967041LL, &selection_flag);
    cached_selection_flag = selection_flag;
  }
  else
  {
    call_result = sub_140205810((__int64)scratch_buffer, 1, 1);
  }
  loaded_word = *(_QWORD *)call_result;
  loaded_word_2 = *(_DWORD *)(call_result + 8);
  state_word_2 = g_144CBE62C;
  if ( !loaded_word )
    state_word_2 = 1;
  saved_loaded_word = loaded_word;
  LOBYTE(g_144CBE62C) = state_word_2;
  if ( !cached_selection_flag )
  {
    if ( (char)loaded_word_2 <= 1 )
    {
      if ( loaded_word )
      {
        heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
        if ( heap_manager_get_memory_result )
        {
          *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(off_1402846F0);
          *(_BYTE *)(heap_manager_get_memory_result + 8) = 60;
        }
        sub_1401FDE58(&saved_loaded_word, heap_manager_get_memory_result);
      }
      else
      {
        saved_loaded_word = 0;
        loaded_word_2 = 0;
        sub_1401FFB98((sr_anon_89 *)&saved_loaded_word, 60);
      }
    }
    call_result_2 = sub_140204368((__int64)scratch_buffer, unrecovered_register_value);
    sub_1401FE908((__int64)&saved_loaded_word, call_result_2);
    loaded_word = saved_loaded_word;
    if ( saved_loaded_word && (*(unsigned __int8 (           **)(unsigned __int64))(*(_QWORD *)saved_loaded_word + 16LL))(saved_loaded_word) == 62 )
    {
      if ( (char)loaded_word_2 > 1 )
      {
LABEL_28:
        if ( a2 && **(_BYTE **)&crt_undname_cursor )
          ++crt_undname_cursor;
        goto LABEL_31;
      }
      heap_manager_get_memory_result_2 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
      if ( heap_manager_get_memory_result_2 )
      {
        *(_QWORD *)heap_manager_get_memory_result_2 = (uint64)(uintptr_t)(off_1402846F0);
        *(_BYTE *)(heap_manager_get_memory_result_2 + 8) = 32;
      }
      sub_1401FDE58(&saved_loaded_word, heap_manager_get_memory_result_2);
      loaded_word = saved_loaded_word;
    }
    if ( (char)loaded_word_2 <= 1 )
    {
      if ( loaded_word )
      {
        heap_manager_get_memory_result_3 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
        if ( heap_manager_get_memory_result_3 )
        {
          *(_QWORD *)heap_manager_get_memory_result_3 = (uint64)(uintptr_t)(off_1402846F0);
          *(_BYTE *)(heap_manager_get_memory_result_3 + 8) = 62;
        }
        sub_1401FDE58(&saved_loaded_word, heap_manager_get_memory_result_3);
      }
      else
      {
        saved_loaded_word = 0;
        loaded_word_2 = 0;
        sub_1401FFB98((sr_anon_89 *)&saved_loaded_word, 62);
      }
      loaded_word = saved_loaded_word;
    }
    goto LABEL_28;
  }
LABEL_31:
  g_144CBE608 = state_word_4;
  g_144CBE610 = state_word_3;
  *(_DWORD *)(a1 + 8) = loaded_word_2;
  g_144CBE600 = state_word;
  *(_QWORD *)a1 = loaded_word;
  return a1;
}

//----- (0000000140204850) ----------------------------------------------------
__int64            sub_140204850(DName *a1, __int64 a2, __int64 a3)
{
  int masked_bits;
  _BYTE *byte_cursor;
  int saved_masked_bits;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 masked_bits_2;
  __int16 unknown_libname_852_result;
  char *int64_result;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
       char *literal_text;
  DName *returned_pointer;
  char selection_code;
  unsigned __int64 *state_address;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 call_result;
  unsigned __int64 heap_manager_get_memory_result;
  __int64 call_result_2;
  unsigned __int64 heap_manager_get_memory_result_2;
  __int64 call_result_3;
  unsigned __int64 heap_manager_get_memory_result_3;
  __int64 call_result_4;
  __int64 unused_local;
  __int128 packed_vector;
  _BYTE scratch_buffer[16];
  __int128 packed_vector_2;
  unsigned __int64 selection_flag;
  int selection_flag_2;
  char callee_output_word;
  __int64 unused_local_2;

  masked_bits = (char)**(_BYTE **)&crt_undname_cursor;
  byte_cursor = (_BYTE *)++crt_undname_cursor;
  saved_masked_bits = masked_bits;
  if ( (char)masked_bits > 69 )
  {
    if ( (char)masked_bits > 74 )
    {
      if ( (_BYTE)masked_bits == 77 )
      {
        sub_140204CC0((DName *)scratch_buffer);
        sub_140204850(a1, unrecovered_register_value_3, unrecovered_register_value_4);
        return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
      }
      if ( (_BYTE)masked_bits == 81 )
        goto LABEL_24;
      if ( (_BYTE)masked_bits != 82 )
      {
        if ( (_BYTE)masked_bits == 83 )
        {
          *(_QWORD *)a1 = 0;
          *((_DWORD *)a1 + 2) = 0;
          return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
        }
        if ( (unsigned __int8)(masked_bits - 84) > 2u )
          goto LABEL_24;
      }
      sub_140203F1C((__int64)&packed_vector);
      if ( (_QWORD)packed_vector )
        *(_BYTE *)(*(__int64 (           **)(_QWORD, unsigned __int64 *, char *))(*(_QWORD *)packed_vector + 24LL))(
                    packed_vector,
                    &selection_flag,
                    &callee_output_word) = 0;
      else
        LOBYTE(selection_flag) = 0;
      unknown_libname_852_result = unknown_libname_852((__int64)&selection_flag);
      if ( (g_144CBE628 & 0x4000) != 0 )
      {
        if ( g_144CBE630 )
        {
          int64_result = (char *)(*(__int64 (           **)(_QWORD))(unsigned int *)&g_144CBE630)(unknown_libname_852_result & 0xFFF);
          if ( int64_result )
          {
            sub_1401FDCAC((__int64)a1, int64_result);
            return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
          }
        }
      }
      sub_140158C70(&selection_flag, 16, (__int64)"%d", unknown_libname_852_result & 0xFFF);
      sub_1401FDBF8((__int64)&packed_vector_2, (char *)&selection_flag);
      integer_difference = saved_masked_bits - 82;
      if ( integer_difference && (integer_difference_2 = integer_difference - 2) != 0 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          if ( integer_difference_3 != 1 )
            goto LABEL_24;
          literal_text = "`generic-method-parameter-";
          DWORD2(packed_vector) = 26;
          goto LABEL_38;
        }
        literal_text = "`generic-class-parameter-";
      }
      else
      {
        literal_text = "`template-type-parameter-";
      }
      DWORD2(packed_vector) = 25;
LABEL_38:
      *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(literal_text);
      returned_pointer = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector);
      sub_1401FE7C0((__int64)returned_pointer, (__int64)&packed_vector, (__int64)&packed_vector_2);
      selection_code = 39;
      state_address = (unsigned __int64 *)&packed_vector;
LABEL_70:
      sub_1401FE7EC((__int64)state_address, (__int64)a1, selection_code);
      return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
    }
    selection_flag = 0;
    selection_flag_2 = 0;
    sub_1401FFB98((sr_anon_89 *)&selection_flag, 123);
    if ( (unsigned __int8)(masked_bits - 72) <= 2u )
    {
      call_result = sub_1402014E4((__int64)scratch_buffer, unrecovered_register_value_5, unrecovered_register_value_6);
      sub_1401FE908((__int64)&selection_flag, call_result);
      if ( (char)selection_flag_2 <= 1 )
      {
        if ( selection_flag )
        {
          heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
          if ( heap_manager_get_memory_result )
          {
            *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(off_1402846F0);
            *(_BYTE *)(heap_manager_get_memory_result + 8) = 44;
          }
          else
          {
            heap_manager_get_memory_result = 0;
          }
          sub_1401FDE58(&selection_flag, heap_manager_get_memory_result);
        }
        else
        {
          selection_flag = 0;
          selection_flag_2 = 0;
          sub_1401FFB98((sr_anon_89 *)&selection_flag, 44);
        }
      }
    }
    if ( masked_bits != 70 )
    {
      if ( masked_bits == 71 )
        goto LABEL_55;
      if ( masked_bits == 72 )
      {
LABEL_69:
        call_result_4 = sub_140203F1C((__int64)scratch_buffer);
        sub_1401FE908((__int64)&selection_flag, call_result_4);
        selection_code = 125;
        state_address = &selection_flag;
        goto LABEL_70;
      }
      if ( masked_bits != 73 )
      {
LABEL_55:
        call_result_2 = sub_140203F1C((__int64)scratch_buffer);
        sub_1401FE908((__int64)&selection_flag, call_result_2);
        if ( (char)selection_flag_2 <= 1 )
        {
          if ( selection_flag )
          {
            heap_manager_get_memory_result_2 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
            if ( heap_manager_get_memory_result_2 )
            {
              *(_QWORD *)heap_manager_get_memory_result_2 = (uint64)(uintptr_t)(off_1402846F0);
              *(_BYTE *)(heap_manager_get_memory_result_2 + 8) = 44;
            }
            else
            {
              heap_manager_get_memory_result_2 = 0;
            }
            sub_1401FDE58(&selection_flag, heap_manager_get_memory_result_2);
          }
          else
          {
            selection_flag = 0;
            selection_flag_2 = 0;
            sub_1401FFB98((sr_anon_89 *)&selection_flag, 44);
          }
        }
      }
    }
    call_result_3 = sub_140203F1C((__int64)scratch_buffer);
    sub_1401FE908((__int64)&selection_flag, call_result_3);
    if ( (char)selection_flag_2 <= 1 )
    {
      if ( selection_flag )
      {
        heap_manager_get_memory_result_3 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
        if ( heap_manager_get_memory_result_3 )
        {
          *(_QWORD *)heap_manager_get_memory_result_3 = (uint64)(uintptr_t)(off_1402846F0);
          *(_BYTE *)(heap_manager_get_memory_result_3 + 8) = 44;
        }
        else
        {
          heap_manager_get_memory_result_3 = 0;
        }
        sub_1401FDE58(&selection_flag, heap_manager_get_memory_result_3);
      }
      else
      {
        selection_flag = 0;
        selection_flag_2 = 0;
        sub_1401FFB98((sr_anon_89 *)&selection_flag, 44);
      }
    }
    goto LABEL_69;
  }
  switch ( (_BYTE)masked_bits )
  {
    case 0x45:
      sub_1402014E4((__int64)a1, a2, a3);
      return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
    case 0:
      crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor - 1);
      *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
      *((_DWORD *)a1 + 2) = 0;
      return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
    case 0x30:
      sub_140203F1C((__int64)a1);
      return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
  }
  if ( (_BYTE)masked_bits != 49 )
  {
    if ( (_BYTE)masked_bits == 50 )
    {
      sub_140205440((__int64)a1);
      return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
    }
    if ( (_BYTE)masked_bits == 52 )
    {
      sub_1402042B4((__int64)a1);
      return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
    }
    if ( (unsigned __int8)(masked_bits - 65) <= 1u )
    {
      sub_140201F64(a1, masked_bits);
      return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
    }
LABEL_24:
    *((_DWORD *)a1 + 2) = 0;
    *((_BYTE *)a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
    return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
  }
  if ( *byte_cursor == 64 )
  {
    DWORD2(packed_vector_2) = 4;
    crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor + 1);
    *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)("NULL");
    packed_vector = packed_vector_2;
    sub_1401FE248(a1, (     struct StringLiteral *)&packed_vector);
  }
  else
  {
    selection_flag = 0;
    selection_flag_2 = 0;
    sub_1401FFB98((sr_anon_89 *)&selection_flag, 38);
    masked_bits_2 = sub_1402014E4((__int64)&packed_vector, unrecovered_register_value, unrecovered_register_value_2);
    sub_1401FE7C0((__int64)&selection_flag, (__int64)a1, masked_bits_2);
  }
  return (__int64)a1; /* 0x140204C97: mov rax, rdi (rdi = a1) */
}

// 140204BAB: conditional instruction was optimized away because ebx.4==4A

//----- (0000000140204CC0) ----------------------------------------------------
__int64            sub_140204CC0(DName *a1)
{
  __int64 (           *callback_function)(_QWORD);
  unsigned int unknown_libname_852_result;
  char *byte_cursor;
  DName *returned_pointer;
  __int64 unused_local;
  __int128 packed_vector;
  __int128 packed_vector_2;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[15];
  char callee_output_word;
  __int64 unused_local_2;

  if ( **(_BYTE **)&crt_undname_cursor == 88 )
  {
    DWORD2(packed_vector_2) = 4;
    ++crt_undname_cursor;
    *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)("void");
    packed_vector = packed_vector_2;
    sub_1401FE248(a1, (     struct StringLiteral *)&packed_vector);
  }
  else if ( **(_BYTE **)&crt_undname_cursor == 63 )
  {
    sub_140203F1C((__int64)&packed_vector_2);
    if ( (g_144CBE628 & 0x4000) != 0
      && (callback_function = *(__int64 (           **)(_QWORD))(unsigned int *)&g_144CBE630) != nullptr
      && (!(_QWORD)packed_vector_2
        ? (__int64 (           *)(_QWORD))(scratch_buffer_2[0] = 0)
        : (*(_BYTE *)(*(__int64 (           **)(_QWORD, _BYTE *, char *))(*(_QWORD *)packed_vector_2 + 24LL))(packed_vector_2, scratch_buffer_2, &callee_output_word) = 0,
           callback_function = *(__int64 (           **)(_QWORD))(unsigned int *)&g_144CBE630),
          unknown_libname_852_result = unknown_libname_852((__int64)scratch_buffer_2),
          (byte_cursor = (char *)callback_function(unknown_libname_852_result)) != nullptr) )
    {
      sub_1401FDCAC((__int64)a1, byte_cursor);
    }
    else
    {
      DWORD2(packed_vector) = 19;
      *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("`template-parameter");
      returned_pointer = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector);
      sub_1401FE7C0((__int64)returned_pointer, (__int64)&packed_vector, (__int64)&packed_vector_2);
      sub_1401FE7EC((__int64)&packed_vector, (__int64)a1, 39);
    }
  }
  else
  {
    *(_QWORD *)&packed_vector = 0;
    DWORD2(packed_vector) = 0;
    sub_1402030E0(a1, (__int64)&packed_vector);
  }
  return (__int64)a1; /* 0x140204E06: mov rax, rbx (rbx = a1) */
}

//----- (0000000140204E28) ----------------------------------------------------
__int64            sub_140204E28(__int64 a1)
{
  __int64 selection_flag;
  int unused_written_slot;
  __int64 selection_flag_2;
  int unused_written_slot_2;

  selection_flag = 0;
  selection_flag_2 = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  sub_140200AFC(a1, (__int64)&selection_flag_2, 0, &selection_flag, 1);
  return a1;
}

//----- (0000000140204E68) ----------------------------------------------------
__int64            sub_140204E68(__int64 a1)
{
  __int64 cached_crt_undname_cursor;
  char masked_bits;
  bool comparison_result;
  __int64 result;

  cached_crt_undname_cursor = crt_undname_cursor;
  masked_bits = **(_BYTE **)&crt_undname_cursor;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  comparison_result = masked_bits == 90;
  result = a1;
  if ( comparison_result )
    crt_undname_cursor = cached_crt_undname_cursor + 1;
  return result;
}

//----- (0000000140204E8C) ----------------------------------------------------
int sub_140204E8C()
{
  _BYTE *i;
  int selection_code;
  char *text_cursor;
  int loaded_word;
  char *byte_cursor;
  int option_flags;
  int selection_flag;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  char input_byte;
  int shifted_bits;
  int masked_bits;
  int scaled_index;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  int integer_difference_8;
  int integer_difference_9;
  int integer_difference_10;
  int integer_difference_11;
  int scaled_index_2;
  int combined_flags;
  int masked_bits_2;
  int masked_bits_3;

  for ( i = *(_BYTE **)&crt_undname_cursor; ; crt_undname_cursor = (uint64)(uintptr_t)(i) )
  {
    selection_code = 0;
    if ( *i == 95 )
    {
      ++i;
      selection_code = 0x4000;
      crt_undname_cursor = (uint64)(uintptr_t)(i);
    }
    if ( (unsigned __int8)(*i - 65) <= 0x19u )
    {
      scaled_index_2 = (char)*i - 65;
      combined_flags = selection_code | 0x8000;
      crt_undname_cursor = (uint64)(uintptr_t)(i + 1);
      option_flags = selection_code | 0xA000;
      if ( (scaled_index_2 & 1) == 0 )
        option_flags = combined_flags;
      if ( scaled_index_2 < 24 )
      {
        option_flags |= 0x800u;
        masked_bits_2 = scaled_index_2 & 0x18;
        if ( (scaled_index_2 & 0x18) != 0 )
        {
          if ( masked_bits_2 == 8 )
          {
            option_flags |= 0x80u;
          }
          else if ( masked_bits_2 != 16 )
          {
            return 0xFFFF;
          }
        }
        else
        {
          option_flags |= 0x40u;
        }
        masked_bits_3 = scaled_index_2 & 6;
        if ( masked_bits_3 )
        {
          switch ( masked_bits_3 )
          {
            case 2:
              return option_flags | 0x200;
            case 4:
              return option_flags | 0x100;
            case 6:
              return option_flags | 0x400;
            default:
              return 0xFFFF;
          }
        }
      }
      return option_flags;
    }
    if ( *i != 36 )
      break;
    text_cursor = i + 1;
    crt_undname_cursor = (uint64)(uintptr_t)(text_cursor);
    loaded_word = *text_cursor;
    if ( loaded_word > 66 )
    {
      integer_difference = loaded_word - 67;
      if ( integer_difference )
      {
        integer_difference_2 = integer_difference - 1;
        if ( integer_difference_2 )
        {
          integer_difference_3 = integer_difference_2 - 1;
          if ( integer_difference_3 )
          {
            if ( integer_difference_3 != 13 )
              return 0xFFFF;
            crt_undname_cursor = (uint64)(uintptr_t)(++text_cursor);
            input_byte = *text_cursor;
            if ( *text_cursor < 48 )
              return 0xFFFF - (input_byte != 0);
            selection_flag = 1;
            if ( input_byte > 53 )
              return 0xFFFF - (input_byte != 0);
            goto LABEL_39;
          }
          option_flags = selection_code | 0x9200;
        }
        else
        {
          option_flags = selection_code | 0x9100;
        }
      }
      else
      {
        option_flags = 31744;
      }
LABEL_51:
      crt_undname_cursor = (uint64)(uintptr_t)(text_cursor + 1);
      return option_flags;
    }
    if ( loaded_word == 66 )
    {
      option_flags = selection_code | 0x9800;
      goto LABEL_51;
    }
    if ( !*text_cursor )
    {
      option_flags = 65534;
      --text_cursor;
      goto LABEL_51;
    }
    if ( loaded_word != 36 )
    {
      if ( loaded_word <= 47 )
        return 0xFFFF;
      selection_flag = 0;
      if ( loaded_word > 53 )
      {
        if ( loaded_word != 65 )
          return 0xFFFF;
        option_flags = selection_code | 0x9000;
        goto LABEL_51;
      }
LABEL_39:
      shifted_bits = selection_code | ((selection_flag + 5) << 8) | 0x8800;
      option_flags = selection_code | ((selection_flag + 5) << 8) | 0xA800;
      if ( (*text_cursor & 1) == 0 )
        option_flags = shifted_bits;
      masked_bits = *text_cursor & 6;
      if ( (*text_cursor & 6) != 0 )
      {
        if ( masked_bits == 2 )
        {
          option_flags |= 0x80u;
        }
        else if ( masked_bits != 4 )
        {
          return 0xFFFF;
        }
      }
      else
      {
        option_flags |= 0x40u;
      }
      goto LABEL_51;
    }
    if ( text_cursor[1] == 80 )
      ++text_cursor;
    byte_cursor = text_cursor + 1;
    crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor);
    if ( *byte_cursor > 77 )
    {
      if ( *byte_cursor <= 79 )
        goto LABEL_24;
      if ( *byte_cursor != 81 )
      {
        if ( *byte_cursor != 104 )
          return 0xFFFF;
        g_144CBE638 = 0;
      }
    }
    else if ( *byte_cursor < 76 )
    {
      if ( !*byte_cursor )
        return 65534;
      if ( ((*byte_cursor - 70) & 0xFD) != 0 )
      {
        if ( *byte_cursor != 74 )
          return 0xFFFF;
LABEL_24:
        text_cursor = byte_cursor + 1;
        crt_undname_cursor = (uint64)(uintptr_t)(text_cursor);
        if ( (unsigned __int8)(*text_cursor - 48) <= 9u )
        {
          crt_undname_cursor = (uint64)(uintptr_t)(&text_cursor[*text_cursor - 47]);
          return sub_140204E8C() | 0x10000;
        }
        option_flags = 0xFFFF;
        goto LABEL_51;
      }
    }
    i = byte_cursor + 1;
  }
  scaled_index = (char)*i;
  if ( (unsigned __int8)(*i - 48) > 8u )
  {
    if ( (_BYTE)scaled_index == 57 )
    {
      option_flags = 65533;
      crt_undname_cursor = (uint64)(uintptr_t)(i + 1);
    }
    else if ( (_BYTE)scaled_index == 59 )
    {
      option_flags = 27648;
      crt_undname_cursor = (uint64)(uintptr_t)(i + 1);
    }
    else
    {
      return ((_BYTE)scaled_index != 0) + 65534;
    }
  }
  else
  {
    crt_undname_cursor = (uint64)(uintptr_t)(i + 1);
    integer_difference_4 = scaled_index - 48;
    if ( integer_difference_4 )
    {
      integer_difference_5 = integer_difference_4 - 1;
      if ( integer_difference_5 )
      {
        integer_difference_6 = integer_difference_5 - 1;
        if ( integer_difference_6 )
        {
          integer_difference_7 = integer_difference_6 - 1;
          if ( integer_difference_7 )
          {
            integer_difference_8 = integer_difference_7 - 1;
            if ( integer_difference_8 )
            {
              integer_difference_9 = integer_difference_8 - 1;
              if ( integer_difference_9 )
              {
                integer_difference_10 = integer_difference_9 - 1;
                if ( integer_difference_10 )
                {
                  integer_difference_11 = integer_difference_10 - 1;
                  if ( integer_difference_11 )
                  {
                    if ( integer_difference_11 != 1 )
                      return 0xFFFF;
                    return 30720;
                  }
                  else
                  {
                    return 28672;
                  }
                }
                else
                {
                  return 26624;
                }
              }
              else
              {
                return 24576;
              }
            }
            else
            {
              return 0x2000;
            }
          }
          else
          {
            return 0x4000;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 4096;
      }
    }
    else
    {
      return 2048;
    }
  }
  return option_flags;
}

//----- (0000000140205200) ----------------------------------------------------
char *           sub_140205200(UnDecorator *this, char *a2, __int64 a3)
{
  int integer_sum;
  char *int64_result;
  __int64 masked_bits;
  int int64_result_2;
  char input_byte;
  char *text_cursor;
  char *i;
  __int64 callee_output_word;
  char unrecovered_register_value;

  integer_sum = a3;
  int64_result = a2;
  sub_140205C58((__int64)&callee_output_word, (__int64)a2, a3);
  if ( unrecovered_register_value == 3 )
    return nullptr;
  if ( unrecovered_register_value == 2 || (g_144CBE628 & 0x1000) == 0 && **(_BYTE **)&crt_undname_cursor )
    masked_bits = *(_QWORD *)sub_1401FDBA0((__int64)&callee_output_word, *(char **)&g_144CBE620);
  else
    masked_bits = callee_output_word;
  if ( int64_result
    || (masked_bits ? (int64_result_2 = (**(__int64 (           ***)(__int64))masked_bits)(masked_bits)) : (int64_result_2 = 0),
        integer_sum = int64_result_2 + 1,
        (int64_result = (char *)(*(__int64 (           **)(unsigned __int64))(unsigned int *)&g_144CBE640)((int64_result_2 + 1 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)) != nullptr) )
  {
    if ( masked_bits )
      *(_BYTE *)(*(__int64 (           **)(__int64, char *, char *))(*(_QWORD *)masked_bits + 24LL))(masked_bits, int64_result, &int64_result[integer_sum - 1]) = 0;
    else
      *int64_result = 0;
    input_byte = *int64_result;
    text_cursor = int64_result;
    for ( i = int64_result; *text_cursor; ++i )
    {
      ++text_cursor;
      if ( input_byte == 32 )
      {
        *i = 32;
        while ( *text_cursor == 32 )
          ++text_cursor;
      }
      else
      {
        *i = input_byte;
      }
      input_byte = *text_cursor;
    }
    *i = input_byte;
  }
  return int64_result;
}

// 1402052B9: conditional instruction was optimized away because rbx.8!=0

//----- (0000000140205354) ----------------------------------------------------
DName *           sub_140205354(DName *a1)
{
       char *literal_text;
  int unused_written_slot;

  if ( **(_BYTE **)&crt_undname_cursor )
  {
    if ( **(_BYTE **)&crt_undname_cursor == 65 )
    {
      unused_written_slot = 6;
      ++crt_undname_cursor;
      literal_text = "{flat}";
      sub_1401FE248(a1, (     struct StringLiteral *)&literal_text);
    }
    else
    {
      *((_DWORD *)a1 + 2) = 0;
      *((_BYTE *)a1 + 8) = 2;
      *(_QWORD *)a1 = 0;
    }
  }
  else
  {
    *((_DWORD *)a1 + 2) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

//----- (00000001402053CC) ----------------------------------------------------
__int64            sub_1402053CC(__int64 a1)
{
  char *text_cursor;
  __int64 cached_i;
  char input_byte;
  _QWORD *returned_pointer;
  __int64 i;

  text_cursor = *(char **)&crt_undname_cursor;
  cached_i = 0;
  for ( i = 0; ; cached_i = i )
  {
    input_byte = *text_cursor;
    if ( !*text_cursor )
    {
LABEL_6:
      *(_OWORD *)a1 = 0;
      return a1;
    }
    if ( input_byte == 64 )
      break;
    if ( (unsigned __int8)(input_byte - 65) > 0xFu )
      goto LABEL_6;
    ++text_cursor;
    i = 16 * cached_i + input_byte - 65;
    crt_undname_cursor = (uint64)(uintptr_t)(text_cursor);
  }
  returned_pointer = (_QWORD *)sub_1401FE158((__int64)&i);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = *returned_pointer;
  return a1;
}

//----- (0000000140205440) ----------------------------------------------------
__int64            sub_140205440(__int64 a1)
{
  _BYTE *loaded_record_pointer;
  char i;
  __int64 call_result;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 call_result_2;
  __int64 callee_output_word;
  int unrecovered_register_value_3;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];
  _BYTE scratch_buffer_3[16];
  _BYTE scratch_buffer_4[16];
  _BYTE scratch_buffer_5[16];

  if ( **(_BYTE **)&crt_undname_cursor )
  {
    sub_140204CC0((DName *)&callee_output_word);
    sub_1401FE9BC((__int64)&callee_output_word, 123);
    loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
    for ( i = 0; ; i = 1 )
    {
      if ( i )
      {
        sub_1401FE9BC((__int64)&callee_output_word, 44);
        loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
      }
      switch ( *loaded_record_pointer )
      {
        case '2':
          crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          call_result_2 = sub_140205440((__int64)scratch_buffer_5);
          break;
        case '3':
          crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          call_result_2 = sub_1401FFF34((__int64)scratch_buffer_4);
          break;
        case '4':
          crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          call_result_2 = sub_1402042B4((__int64)scratch_buffer_3);
          break;
        default:
          call_result = sub_140204CC0((DName *)scratch_buffer);
          sub_1401FE908((__int64)&callee_output_word, call_result);
          sub_1401FE9BC((__int64)&callee_output_word, 58);
          call_result_2 = sub_140204850((DName *)scratch_buffer_2, unrecovered_register_value, unrecovered_register_value_2);
          break;
      }
      sub_1401FE908((__int64)&callee_output_word, call_result_2);
      loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
      if ( **(_BYTE **)&crt_undname_cursor == 64 )
        break;
    }
    ++crt_undname_cursor;
    sub_1401FE9BC((__int64)&callee_output_word, 125);
    *(_QWORD *)a1 = callee_output_word;
    *(_DWORD *)(a1 + 8) = unrecovered_register_value_3;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

//----- (0000000140205574) ----------------------------------------------------
__int64            sub_140205574(__int64 a1, __int64 a2)
{
  sub_140205608(a1, a2);
  return a1;
}

//----- (000000014020558C) ----------------------------------------------------
__int64            sub_14020558C(__int64 a1, __int64 a2)
{
  int loaded_word;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 masked_bits;
       char *literal_text;
  int unused_written_slot;

  *(_QWORD *)a1 = *(_QWORD *)a2;
  loaded_word = *(_DWORD *)(a2 + 8);
  unused_written_slot = 5;
  *(_DWORD *)(a1 + 8) = loaded_word;
  literal_text = "{for ";
  sub_1401FE888(a1, (__int64)&literal_text);
  masked_bits = sub_14020392C((__int64)&literal_text, unrecovered_register_value, unrecovered_register_value_2);
  sub_1401FE908(a1, masked_bits);
  sub_1401FE9BC(a1, 125);
  if ( **(_BYTE **)&crt_undname_cursor == 64 )
    ++crt_undname_cursor;
  return a1;
}

//----- (0000000140205608) ----------------------------------------------------
__int64            sub_140205608(__int64 a1, __int64 a2)
{
  int loaded_word;
  __int64 masked_bits;
  __int64 packed_word_bits;
  _BYTE *loaded_record_pointer;
  __int128 *state_address;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  char loaded_word_2;
  __int64 call_result;
  __int64 cached_call_result;
  __int64 masked_bits_2;
  __int64 selection_flag;
  int selection_flag_2;
  __int128 packed_vector;
  __int128 packed_vector_2;
  __int128 packed_vector_3;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];

  *(_QWORD *)a1 = *(_QWORD *)a2;
  loaded_word = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = loaded_word;
  if ( (char)loaded_word <= 1 )
  {
    DWORD2(packed_vector) = 0;
    if ( **(_BYTE **)&crt_undname_cursor )
    {
      selection_flag = 0;
      selection_flag_2 = 0;
      *(_QWORD *)&packed_vector = 0;
      sub_140200AFC((__int64)&packed_vector_2, (__int64)&packed_vector, 0, &selection_flag, 0);
      masked_bits = sub_1401FE7EC((__int64)&packed_vector_2, (__int64)&packed_vector_3, 32);
      packed_word_bits = sub_1401FE7C0(masked_bits, (__int64)scratch_buffer, a1);
      *(_QWORD *)a1 = *(_QWORD *)packed_word_bits;
      LODWORD(packed_word_bits) = *(_DWORD *)(packed_word_bits + 8);
      *(_DWORD *)(a1 + 8) = packed_word_bits;
      if ( (char)packed_word_bits <= 1 )
      {
        loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
        if ( **(_BYTE **)&crt_undname_cursor == 64 )
          goto LABEL_19;
        DWORD2(packed_vector) = 5;
        *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("{for ");
        state_address = &packed_vector_2;
        packed_vector_2 = packed_vector;
LABEL_6:
        sub_1401FE888(a1, (__int64)state_address);
        loaded_word_2 = *(_BYTE *)(a1 + 8);
        loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
        while ( loaded_word_2 <= 1 )
        {
          if ( !*loaded_record_pointer )
            goto LABEL_16;
          if ( *loaded_record_pointer == 64 )
          {
            if ( !*loaded_record_pointer )
LABEL_16:
              sub_1401FEABC(a1, 1u);
            sub_1401FE9BC(a1, 125);
            loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
            break;
          }
          call_result = sub_14020392C((__int64)scratch_buffer, unrecovered_register_value, unrecovered_register_value_2);
          selection_flag = 0;
          selection_flag_2 = 0;
          cached_call_result = call_result;
          sub_1401FFB98((sr_anon_89 *)&selection_flag, 96);
          sub_1401FE7C0((__int64)&selection_flag, (__int64)&packed_vector_2, cached_call_result);
          masked_bits_2 = sub_1401FE7EC((__int64)&packed_vector_2, (__int64)scratch_buffer_2, 39);
          sub_1401FE908(a1, masked_bits_2);
          loaded_record_pointer = *(_BYTE **)&crt_undname_cursor;
          if ( **(_BYTE **)&crt_undname_cursor == 64 )
            loaded_record_pointer = (_BYTE *)++crt_undname_cursor;
          loaded_word_2 = *(_BYTE *)(a1 + 8);
          if ( loaded_word_2 > 1 )
            break;
          if ( *loaded_record_pointer != 64 )
          {
            DWORD2(packed_vector) = 2;
            *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("s ");
            state_address = &packed_vector_3;
            packed_vector_3 = packed_vector;
            goto LABEL_6;
          }
        }
        if ( *loaded_record_pointer == 64 )
LABEL_19:
          crt_undname_cursor = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      }
    }
    else
    {
      *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(&off_1402848D0);
      sub_1401FE7C0((__int64)&packed_vector, (__int64)&selection_flag, a1);
      *(_QWORD *)a1 = selection_flag;
      *(_DWORD *)(a1 + 8) = selection_flag_2;
    }
  }
  return a1;
}

// 140205799: conditional instruction was optimized away because cl.1<2

//----- (0000000140205810) ----------------------------------------------------
__int64            sub_140205810(__int64 a1, char a2, char a3)
{
  unsigned int masked_bits;
  __int64 call_result;
  _UNKNOWN ***state_address;
  int comparison_result;
  char masked_bits_2;
  __int64 integer_sum;
       char *literal_text;
  _BYTE *buffer_cursor;
  int remaining_count;
       char *literal_text_2;
  __int64 integer_sum_2;
       char *literal_text_3;
  _BYTE *buffer_cursor_2;
  int remaining_count_2;
  __int64 (           *callback_function)(_QWORD);
  unsigned int unknown_libname_852_result;
  char *byte_cursor;
  __int64 masked_bits_3;
  DName *returned_pointer;
  _BYTE *byte_cursor_2;
  DName *returned_pointer_2;
  int *loaded_record_pointer;
  unsigned __int64 heap_manager_get_memory_result;
  __int64 loaded_word;
  __int64 unused_local;
  _OWORD scratch_buffer[2];
  __int128 table_value;
  _BYTE scratch_buffer_2[16];
  _BYTE scratch_buffer_3[16];
  _BYTE scratch_buffer_4[15];
  char callee_output_word;
  __int64 unused_local_2;

  masked_bits = (char)**(_BYTE **)&crt_undname_cursor - 48;
  if ( masked_bits <= 9 )
  {
    ++crt_undname_cursor;
    sub_1401FE684(*(signed int **)&g_144CBE608, a1, masked_bits);
    return (__int64)a1; /* 0x140205AC9: mov rax, r14 (r14 = a1) */
  }
  if ( **(_BYTE **)&crt_undname_cursor == 63 )
  {
    call_result = sub_1402045BC((__int64)scratch_buffer, 0);
    state_address = *(_UNKNOWN ****)call_result;
    comparison_result = *(_DWORD *)(call_result + 8);
    masked_bits_2 = **(_BYTE **)&crt_undname_cursor;
    integer_sum = ++crt_undname_cursor;
    if ( masked_bits_2 != 64 )
    {
      state_address = &off_1402848D0;
      crt_undname_cursor = integer_sum - 1;
      comparison_result = (*(_BYTE *)(integer_sum - 1) != 0) + 1;
      if ( *(_BYTE *)(integer_sum - 1) )
        state_address = nullptr;
    }
    goto LABEL_35;
  }
  literal_text = "template-parameter-";
  buffer_cursor = *(_BYTE **)&crt_undname_cursor;
  remaining_count = 18;
  do
  {
    if ( !*buffer_cursor )
      break;
    if ( *buffer_cursor != *literal_text )
      break;
    ++buffer_cursor;
    ++literal_text;
    --remaining_count;
  }
  while ( remaining_count );
  if ( *buffer_cursor == *literal_text )
  {
    literal_text_2 = "`template-parameter-";
    DWORD2(scratch_buffer[0]) = 20;
    integer_sum_2 = crt_undname_cursor + 19LL;
LABEL_20:
    *(_QWORD *)&scratch_buffer[0] = (uint64)(uintptr_t)(literal_text_2);
    table_value = scratch_buffer[0];
    crt_undname_cursor = integer_sum_2;
    sub_140203F1C((__int64)scratch_buffer);
    if ( (g_144CBE628 & 0x4000) != 0
      && (callback_function = *(__int64 (           **)(_QWORD))(unsigned int *)&g_144CBE630) != nullptr )
    {
      if ( *(_QWORD *)&scratch_buffer[0] )
      {
        *(_BYTE *)(*(__int64 (           **)(_QWORD, _BYTE *, char *))(**(_QWORD **)&scratch_buffer[0] + 24LL))(
                    *(_QWORD *)&scratch_buffer[0],
                    scratch_buffer_4,
                    &callee_output_word) = 0;
        callback_function = *(__int64 (           **)(_QWORD))(unsigned int *)&g_144CBE630;
      }
      else
      {
        scratch_buffer_4[0] = 0;
      }
      unknown_libname_852_result = unknown_libname_852((__int64)scratch_buffer_4);
      byte_cursor = (char *)callback_function(unknown_libname_852_result);
      if ( byte_cursor )
      {
        masked_bits_3 = sub_1401FDCAC((__int64)scratch_buffer, byte_cursor);
        goto LABEL_34;
      }
      returned_pointer = sub_1401FE248((DName *)scratch_buffer_3, (     struct StringLiteral *)&table_value);
      sub_1401FE7C0((__int64)returned_pointer, (__int64)&table_value, (__int64)scratch_buffer);
      byte_cursor_2 = scratch_buffer_2;
    }
    else
    {
      returned_pointer_2 = sub_1401FE248((DName *)scratch_buffer_2, (     struct StringLiteral *)&table_value);
      sub_1401FE7C0((__int64)returned_pointer_2, (__int64)&table_value, (__int64)scratch_buffer);
      byte_cursor_2 = scratch_buffer_3;
    }
    masked_bits_3 = sub_1401FE7EC((__int64)&table_value, (__int64)byte_cursor_2, 39);
    goto LABEL_34;
  }
  literal_text_3 = "generic-type-";
  buffer_cursor_2 = *(_BYTE **)&crt_undname_cursor;
  remaining_count_2 = 12;
  do
  {
    if ( !*buffer_cursor_2 )
      break;
    if ( *buffer_cursor_2 != *literal_text_3 )
      break;
    ++buffer_cursor_2;
    ++literal_text_3;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  if ( *buffer_cursor_2 == *literal_text_3 )
  {
    literal_text_2 = "`generic-type-";
    DWORD2(scratch_buffer[0]) = 14;
    integer_sum_2 = crt_undname_cursor + 13LL;
    goto LABEL_20;
  }
  if ( a3 && **(_BYTE **)&crt_undname_cursor == 64 )
  {
    state_address = nullptr;
    ++crt_undname_cursor;
    comparison_result = 0;
    goto LABEL_35;
  }
  masked_bits_3 = (__int64)sub_1401FE198((DName *)scratch_buffer_2, (char **)(unsigned int *)&crt_undname_cursor, 64);
LABEL_34:
  state_address = *(_UNKNOWN ****)masked_bits_3;
  comparison_result = *(_DWORD *)(masked_bits_3 + 8);
LABEL_35:
  if ( a2 )
  {
    loaded_record_pointer = *(int **)&g_144CBE608;
    if ( **(_DWORD **)&g_144CBE608 != 9 )
    {
      if ( state_address )
      {
        heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
        if ( heap_manager_get_memory_result )
        {
          *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(state_address);
          *(_DWORD *)(heap_manager_get_memory_result + 8) = comparison_result;
          loaded_word = *loaded_record_pointer;
          *loaded_record_pointer = loaded_word + 1;
          *(_QWORD *)&loaded_record_pointer[2 * loaded_word + 4] = heap_manager_get_memory_result;
        }
      }
    }
  }
  *(_QWORD *)a1 = (uint64)(uintptr_t)(state_address);
  *(_DWORD *)(a1 + 8) = comparison_result;
  return (__int64)a1; /* 0x140205AC9: mov rax, r14 (r14 = a1) */
}

//----- (0000000140205BC4) ----------------------------------------------------
__int64            sub_140205BC4(sr_anon_84 *this)
{
  __int64 (           ****int64_result)(_QWORD);
  __int64 result;
  __int64 (           ***loaded_word)(_QWORD);

  int64_result = *((__int64 (           *****)(_QWORD))this + 1);
  result = 0;
  if ( int64_result )
  {
    loaded_word = *int64_result;
    if ( loaded_word )
      return (**loaded_word)(loaded_word);
  }
  return result;
}

//----- (0000000140205BEC) ----------------------------------------------------
__int64            sub_140205BEC(sr_anon_119 *this)
{
  __int64 result;
  int int64_result;

  result = *((unsigned int *)this + 6);
  if ( (int)result < 0 )
  {
    int64_result = (***((__int64 (           ****)(_QWORD))this + 2))(*((_QWORD *)this + 2));
    result = int64_result + (***((unsigned int (           ****)(_QWORD))this + 1))(*((_QWORD *)this + 1));
    *((_DWORD *)this + 6) = result;
  }
  return result;
}

//----- (0000000140205C58) ----------------------------------------------------
__int64            sub_140205C58(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *loaded_record_pointer;
  __int64 call_result;
  DName *returned_pointer;
  int loaded_word;
  __int64 packed_word_bits;
  __int64 loaded_word_2;
  __int64 call_result_2;
  __int64 loaded_word_3;
       char *literal_text;
  int selection_code;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];

  loaded_record_pointer = *(_BYTE **)&g_144CBE620;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( loaded_record_pointer )
  {
    if ( *loaded_record_pointer != 63 )
    {
LABEL_10:
      call_result_2 = sub_1402014E4((__int64)scratch_buffer_2, a2, a3);
      loaded_word_3 = *(_QWORD *)call_result_2;
      loaded_word = *(_DWORD *)(call_result_2 + 8);
      *(_QWORD *)a1 = loaded_word_3;
      goto LABEL_11;
    }
    if ( loaded_record_pointer[1] == 64 )
    {
      crt_undname_cursor += 2LL;
      literal_text = "CV: ";
      selection_code = 4;
      call_result = sub_1402014E4((__int64)scratch_buffer, a2, a3);
      returned_pointer = sub_1401FE248((DName *)scratch_buffer_2, (     struct StringLiteral *)&literal_text);
      sub_1401FE7C0((__int64)returned_pointer, (__int64)&literal_text, call_result);
      *(_QWORD *)a1 = (uint64)(uintptr_t)(literal_text);
      loaded_word = selection_code;
LABEL_11:
      *(_DWORD *)(a1 + 8) = loaded_word;
      return a1;
    }
    if ( loaded_record_pointer[1] != 36 )
    {
      if ( loaded_record_pointer[1] == 63 && loaded_record_pointer[2] == 64 )
      {
        *(_BYTE *)(a1 + 8) = 2;
        return a1;
      }
      goto LABEL_10;
    }
    packed_word_bits = sub_1402045BC((__int64)scratch_buffer_2, 0);
    loaded_word_2 = *(_QWORD *)packed_word_bits;
    LODWORD(packed_word_bits) = *(_DWORD *)(packed_word_bits + 8);
    *(_QWORD *)a1 = loaded_word_2;
    *(_DWORD *)(a1 + 8) = packed_word_bits;
    if ( (_BYTE)packed_word_bits == 2 || (g_144CBE628 & 0x1000) == 0 && **(_BYTE **)&crt_undname_cursor )
    {
      crt_undname_cursor = g_144CBE620;
      goto LABEL_10;
    }
  }
  return a1;
}

//----- (0000000140205E28) ----------------------------------------------------
char *           sub_140205E28(char *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, unsigned __int16 a6)
{
  return sub_140205E50(a1, a2, a3, a4, a5, 0, a6);
}

//----- (0000000140205E50) ----------------------------------------------------
char *           sub_140205E50(char *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  char *unused_written_slot;
  void (*callback_function)(void);
  _DWORD scratch_buffer[22];
  int integer_difference;

  if ( !a4 )
    return nullptr;
  sub_1401FDA08(0);
  g_144CBE640 = a4;
  g_144CBE648 = a5;
  g_144CBE660 = 0;
  *(_OWORD *)&g_144CBE650 = 0;
  scratch_buffer[0] = -1;
  integer_difference = -1;
  g_144CBE620 = a2;
  crt_undname_cursor = a2;
  g_144CBE608 = (uint64)(uintptr_t)(&integer_difference);
  g_144CBE600 = (uint64)(uintptr_t)(scratch_buffer);
  g_144CBE628 = a7;
  g_144CBE630 = a6;
  LOBYTE(g_144CBE62C) = 0;
  g_144CBE638 = 0;
  g_144CBE63C = 0;
  unused_written_slot = sub_140205200((UnDecorator *)scratch_buffer, a1, a3);
  callback_function = *(void (**)(void))(unsigned int *)&g_144CBE648;
  if ( g_144CBE648 )
  {
    while ( 1 )
    {
      g_144CBE658 = g_144CBE650;
      if ( !g_144CBE650 )
        break;
      g_144CBE650 = **(_QWORD **)&g_144CBE650;
      callback_function();
      callback_function = *(void (**)(void))(unsigned int *)&g_144CBE648;
    }
  }
  sub_1401FDA5C(0);
  return unused_written_slot;
}

//----- (0000000140205F84) ----------------------------------------------------
__m128i *           sub_140205F84(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __m128i *unused_written_slot;
  void (           *callback_function)(__int64);
  _QWORD *loaded_record_pointer;
  __int64 state_word;
  _DWORD scratch_buffer[22];
  int integer_difference;

  if ( !a4 )
    return nullptr;
  g_144CBE660 = 0;
  g_144CBE630 = 0;
  g_144CBE638 = 0;
  g_144CBE63C = 0;
  g_144CBE648 = a5;
  scratch_buffer[0] = -1;
  integer_difference = -1;
  g_144CBE608 = (uint64)(uintptr_t)(&integer_difference);
  g_144CBE620 = a2;
  crt_undname_cursor = a2;
  g_144CBE600 = (uint64)(uintptr_t)(scratch_buffer);
  g_144CBE628 = a6;
  g_144CBE640 = a4;
  *(_OWORD *)&g_144CBE650 = 0;
  LOBYTE(g_144CBE62C) = 0;
  unused_written_slot = sub_140200880((UnDecorator *)scratch_buffer, a1, a3);
  callback_function = *(void (           **)(__int64))(unsigned int *)&g_144CBE648;
  if ( g_144CBE648 )
  {
    loaded_record_pointer = *(_QWORD **)&g_144CBE650;
    g_144CBE658 = g_144CBE650;
    state_word = g_144CBE650;
    if ( g_144CBE650 )
    {
      while ( 1 )
      {
        g_144CBE650 = *loaded_record_pointer;
        callback_function(state_word);
        loaded_record_pointer = *(_QWORD **)&g_144CBE650;
        g_144CBE658 = g_144CBE650;
        state_word = g_144CBE650;
        if ( !g_144CBE650 )
          break;
        callback_function = *(void (           **)(__int64))(unsigned int *)&g_144CBE648;
      }
    }
  }
  return unused_written_slot;
}

//----- (0000000140206150) ----------------------------------------------------
__int64            sub_140206150(unsigned int *a1, unsigned int *a2)
{
  unsigned int *buffer_cursor;
  __int64 loaded_word;
  __int64 int64_result;
  __int16 *table_value;

  buffer_cursor = a1;
  if ( a1 == a2 )
    return 0;
  while ( 1 )
  {
    loaded_word = *buffer_cursor;
    int64_result = *(_QWORD *)&dword_140404A6C[2 * loaded_word + 19064575];
    if ( !int64_result )
      break;
    if ( int64_result != -1 )
      return int64_result;
LABEL_10:
    if ( ++buffer_cursor == a2 )
      return 0;
  }
  table_value = off_140284900[loaded_word];
  int64_result = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(table_value, 0, 2048);
  if ( !int64_result
    && ((unsigned int)((__int64 (*)(void))GetLastError)() != 87
     || !(unsigned int)wcsncmp_sr(table_value, L"api-ms-", 7)
     || (int64_result = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(table_value, 0, 0)) == 0) )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19064575], -1);
    goto LABEL_10;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19064575], int64_result) )
    ((void (           *)(__int64))FreeLibrary)(int64_result);
  return int64_result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (0000000140206244) ----------------------------------------------------
__int64            sub_140206244(unsigned int a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  __int64 input_value;
  unsigned int *buffer_cursor;
  __int64 result;
  bool i;
  __int64 loaded_word;
  __int64 int64_result;
  __int16 *table_value;

  input_value = a1;
  buffer_cursor = a3;
  result = *(_QWORD *)&dword_140404A6C[2 * a1 + 19064581];
  if ( result != -1 )
  {
    if ( result )
      return result;
    for ( i = a3 == a4; !i; i = buffer_cursor == a4 )
    {
      loaded_word = *buffer_cursor;
      int64_result = *(_QWORD *)&dword_140404A6C[2 * loaded_word + 19064575];
      if ( int64_result )
      {
        if ( int64_result != -1 )
          goto LABEL_16;
      }
      else
      {
        table_value = off_140284900[loaded_word];
        int64_result = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(table_value, 0, 2048);
        if ( int64_result
          || (unsigned int)((__int64 (*)(void))GetLastError)() == 87
          && (unsigned int)wcsncmp_sr(table_value, L"api-ms-", 7)
          && (int64_result = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(table_value, 0, 0)) != 0 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19064575], int64_result) )
            ((void (           *)(__int64))FreeLibrary)(int64_result);
LABEL_16:
          result = ((__int64 (           *)(__int64, __int64))GetProcAddress)(int64_result, a2);
          if ( result )
          {
            _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * input_value + 19064581], result);
            return result;
          }
          break;
        }
        _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19064575], -1);
      }
      ++buffer_cursor;
    }
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * input_value + 19064581], -1);
  }
  return 0;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored

//----- (0000000140206390) ----------------------------------------------------
__int64            sub_140206390(unsigned int a1)
{
  __int64 input_value;
  __int64 result;
  __int16 *table_value;
  __int64 int64_result;

  input_value = a1;
  result = *(_QWORD *)&dword_140404A6C[2 * a1 + 19064575];
  if ( result )
  {
    if ( result == -1 )
      return 0;
  }
  else
  {
    table_value = off_140284900[a1];
    int64_result = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(table_value, 0, 2048);
    if ( int64_result
      || (unsigned int)((__int64 (*)(void))GetLastError)() == 87
      && (unsigned int)wcsncmp_sr(table_value, L"api-ms-", 7)
      && (int64_result = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(table_value, 0, 0)) != 0 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * input_value + 19064575], int64_result) )
        ((void (           *)(__int64))FreeLibrary)(int64_result);
      return int64_result;
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * input_value + 19064575], -1);
      return 0;
    }
  }
  return result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (0000000140206474) ----------------------------------------------------
__int64            sub_140206474(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *buffer_cursor;
  __int64 loaded_word;
  __int64 int64_result;
  __int16 *table_value;

  buffer_cursor = a2;
  if ( a2 == a3 )
    return 0;
  while ( 1 )
  {
    loaded_word = *buffer_cursor;
    int64_result = *(_QWORD *)&dword_140404A6C[2 * loaded_word + 19064575];
    if ( !int64_result )
      break;
    if ( int64_result != -1 )
      return ((__int64 (           *)(__int64, __int64))GetProcAddress)(int64_result, a1);
LABEL_10:
    if ( ++buffer_cursor == a3 )
      return 0;
  }
  table_value = off_140284900[loaded_word];
  int64_result = ((__int64 (           *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(table_value, 0, 2048);
  if ( !int64_result
    && ((unsigned int)((__int64 (*)(void))GetLastError)() != 87
     || !(unsigned int)wcsncmp_sr(table_value, L"api-ms-", 7)
     || (int64_result = ((__int64 (           *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(table_value, 0, 0)) == 0) )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19064575], -1);
    goto LABEL_10;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * loaded_word + 19064575], int64_result) )
    ((void (           *)(__int64))FreeLibrary)(int64_result);
  return ((__int64 (           *)(__int64, __int64))GetProcAddress)(int64_result, a1);
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored

//----- (0000000140206580) ----------------------------------------------------
__int64            sub_140206580(_WORD *a1)
{
  __int64 result;

  result = ((__int64 (           *)(_WORD *, _QWORD, __int64))LoadLibraryExW)(a1, 0, 2048);
  if ( !result )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87 || !(unsigned int)wcsncmp_sr(a1, L"api-ms-", 7) )
      return 0;
    else
      return ((__int64 (           *)(_WORD *, _QWORD, _QWORD))LoadLibraryExW)(a1, 0, 0);
  }
  return result;
}

// 14026E210: invalid function type 'HMODULE (__stdcall *LoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)' has been ignored
// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (00000001402065DC) ----------------------------------------------------
__int64            sub_1402065DC(__int64 a1)
{
  __int64 (           *callback_function)(__int64);

  callback_function = (__int64 (           *)(__int64))sub_140206244(
                                          0,
                                          (__int64)"FlsAlloc",
                                          (unsigned int *)&unk_1402849C0,
                                          (unsigned int *)"FlsAlloc");
  if ( callback_function )
    return callback_function(a1);
  else
    return ((__int64 (*)(void))TlsAlloc)();
}

// 14026E230: invalid function type 'DWORD (__stdcall *TlsAlloc)()' has been ignored

//----- (0000000140206624) ----------------------------------------------------
__int64            sub_140206624(unsigned int a1)
{
  __int64 (           *callback_function)(_QWORD);

  callback_function = (__int64 (           *)(_QWORD))sub_140206244(
                                         1u,
                                         (__int64)"FlsFree",
                                         (unsigned int *)&unk_1402849D8,
                                         (unsigned int *)"FlsFree");
  if ( callback_function )
    return callback_function(a1);
  else
    return ((__int64 (           *)(_QWORD))TlsFree)(a1);
}

// 14026E218: invalid function type 'BOOL (__stdcall *TlsFree)(DWORD dwTlsIndex)' has been ignored

//----- (000000014020666C) ----------------------------------------------------
__int64            sub_14020666C(unsigned int a1)
{
  __int64 (           *callback_function)(_QWORD);

  callback_function = (__int64 (           *)(_QWORD))sub_140206244(
                                         2u,
                                         (__int64)"FlsGetValue",
                                         (unsigned int *)&unk_1402849E8,
                                         (unsigned int *)"FlsGetValue");
  if ( callback_function )
    return callback_function(a1);
  else
    return ((__int64 (           *)(_QWORD))TlsGetValue)(a1);
}

// 14026E228: invalid function type 'LPVOID (__stdcall *TlsGetValue)(DWORD dwTlsIndex)' has been ignored

//----- (00000001402066B4) ----------------------------------------------------
__int64            sub_1402066B4(unsigned int a1, __int64 a2)
{
  __int64 (           *callback_function)(_QWORD, __int64);

  callback_function = (__int64 (           *)(_QWORD, __int64))sub_140206244(
                                                  3u,
                                                  (__int64)"FlsSetValue",
                                                  (unsigned int *)&unk_140284A00,
                                                  (unsigned int *)"FlsSetValue");
  if ( callback_function )
    return callback_function(a1, a2);
  else
    return ((__int64 (           *)(_QWORD, __int64))TlsSetValue)(a1, a2);
}

// 14026E220: invalid function type 'BOOL (__stdcall *TlsSetValue)(DWORD dwTlsIndex, LPVOID lpTlsValue)' has been ignored

//----- (0000000140206708) ----------------------------------------------------
__int64            sub_140206708(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 (           *callback_function)(__int64, _QWORD, _QWORD);

  callback_function = (__int64 (           *)(__int64, _QWORD, _QWORD))sub_140206244(
                                                          4u,
                                                          (__int64)"InitializeCriticalSectionEx",
                                                          (unsigned int *)&unk_140284A18,
                                                          (unsigned int *)"InitializeCriticalSectionEx");
  if ( callback_function )
    return callback_function(a1, a2, a3);
  else
    return ((__int64 (           *)(__int64, _QWORD))InitializeCriticalSectionAndSpinCount)(a1, a2);
}

// 14026E238: invalid function type 'BOOL (__stdcall *InitializeCriticalSectionAndSpinCount)(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)' has been ignored

//----- (0000000140206794) ----------------------------------------------------
__int64            sub_140206794(
        struct EHExceptionRecord **a1,
        __int64 a2,
        unsigned __int64 *a3,
        struct CMFCToolBarImages *a4,
        __int64 a5,
        struct _s_FuncInfo *a6,
        int a7,
        _DWORD *a8)
{
  __int64 loaded_word;

  *(_QWORD *)(crt_getptd() + 112) = a2;
  loaded_word = *((_QWORD *)*a1 + 7);
  *(_QWORD *)(crt_getptd() + 104) = loaded_word;
  sub_140209250(*a1, a3, a4, a5, a6, 0, 0, 1);
  *(_QWORD *)(crt_getptd() + 112) = 0;
  *a8 = 1;
  return 1;
}

//----- (000000014020682C) ----------------------------------------------------
__int64            sub_14020682C(
        struct EHExceptionRecord **a1,
        __int64 a2,
        unsigned __int64 *a3,
        struct CMFCToolBarImages *a4,
        __int64 a5,
        struct FH4__FuncInfo4 *a6,
        int a7,
        _DWORD *a8)
{
  __int64 loaded_word;

  *(_QWORD *)(crt_getptd() + 112) = a2;
  loaded_word = *((_QWORD *)*a1 + 7);
  *(_QWORD *)(crt_getptd() + 104) = loaded_word;
  *(_DWORD *)(crt_getptd() + 120) = a7;
  sub_140209488(*a1, a3, a4, a5, a6, 0, 0, 1);
  *(_QWORD *)(crt_getptd() + 112) = 0;
  *a8 = 1;
  return 1;
}

//----- (00000001402068D0) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1402068D0(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 getptd_result;
  _QWORD scratch_buffer[4];

  scratch_buffer[0] = (uint64)(uintptr_t)(a1);
  scratch_buffer[1] = a3;
  getptd_result = crt_getptd();
  (*(void (           **)(_QWORD, _QWORD *))(getptd_result + 16))(*a1, scratch_buffer);
  return 0;
}

//----- (0000000140206924) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140206924(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 getptd_result;
  _QWORD scratch_buffer[4];

  scratch_buffer[0] = (uint64)(uintptr_t)(a1);
  scratch_buffer[1] = a3;
  getptd_result = crt_getptd();
  (*(void (           **)(_QWORD, _QWORD *))(getptd_result + 16))(*a1, scratch_buffer);
  return 0;
}

//----- (0000000140206A78) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140206A78(__int64 a1, int a2)
{
  int remaining_count;
  __int64 result;

  remaining_count = *(_DWORD *)(a1 + 12);
  while ( remaining_count )
  {
    result = *(_QWORD *)(crt_getptd() + 96) + 20LL * (unsigned int)--remaining_count + *(int *)(a1 + 16);
    if ( a2 > *(_DWORD *)(result + 4) && a2 <= *(_DWORD *)(result + 8) )
      return result;
  }
  return 0;
}

//----- (0000000140206ACC) ----------------------------------------------------
__int64            sub_140206ACC(FH4 *this, unsigned __int8 *a2, struct FH4__FuncInfo4 *a3, int a4)
{
  return sub_140206AE0(this, a2, a3, a4, 0);
}

//----- (0000000140206AE0) ----------------------------------------------------
__int64            sub_140206AE0(FH4 *this, unsigned __int8 *a2, struct FH4__FuncInfo4 *a3, int a4, char a5)
{
  unsigned __int8 loaded_word;
  _BYTE *record_byte_offset;
  __int64 masked_bits;
  int loaded_word_2;
  int loaded_word_3;
  __int64 loaded_word_4;
  _BYTE *remaining_amount;
  int iteration_count;
  __int64 masked_bits_2;
  int *running_total;
  unsigned int shifted_bits;
  int loaded_word_5;
  int table_value;
  __int64 masked_bits_3;

  loaded_word = *(_BYTE *)this;
  record_byte_offset = (char *)this + 1;
  *a2 = *(_BYTE *)this;
  if ( (loaded_word & 4) != 0 )
  {
    masked_bits = *record_byte_offset & 0xF;
    record_byte_offset -= byte_140284A40[masked_bits];
    *((_DWORD *)a2 + 1) = *((_DWORD *)record_byte_offset - 1) >> byte_140284A40[masked_bits + 16];
  }
  if ( (loaded_word & 8) != 0 )
  {
    loaded_word_2 = *(_DWORD *)record_byte_offset;
    record_byte_offset += 4;
    *((_DWORD *)a2 + 2) = loaded_word_2;
  }
  if ( (loaded_word & 0x10) != 0 )
  {
    loaded_word_3 = *(_DWORD *)record_byte_offset;
    record_byte_offset += 4;
    *((_DWORD *)a2 + 3) = loaded_word_3;
  }
  loaded_word_4 = *(int *)record_byte_offset;
  remaining_amount = record_byte_offset + 4;
  iteration_count = 0;
  if ( a5 || (loaded_word & 2) == 0 )
  {
    *((_DWORD *)a2 + 4) = loaded_word_4;
  }
  else
  {
    masked_bits_2 = *((_BYTE *)a3 + loaded_word_4) & 0xF;
    running_total = (int *)((char *)a3 + loaded_word_4 - byte_140284A40[masked_bits_2]);
    shifted_bits = (unsigned int)*(running_total - 1) >> byte_140284A40[masked_bits_2 + 16];
    *((_DWORD *)a2 + 4) = 0;
    if ( shifted_bits )
    {
      while ( 1 )
      {
        loaded_word_5 = *running_total;
        table_value = running_total[1];
        running_total += 2;
        if ( loaded_word_5 == a4 )
          break;
        if ( ++iteration_count >= shifted_bits )
          goto LABEL_15;
      }
      *((_DWORD *)a2 + 4) = table_value;
    }
  }
LABEL_15:
  if ( (loaded_word & 1) != 0 )
  {
    masked_bits_3 = *remaining_amount & 0xF;
    remaining_amount -= byte_140284A40[masked_bits_3];
    *((_DWORD *)a2 + 5) = *((_DWORD *)remaining_amount - 1) >> byte_140284A40[masked_bits_3 + 16];
  }
  return remaining_amount - (_BYTE *)this;
}

//----- (0000000140206C98) ----------------------------------------------------
bool            sub_140206C98(struct _xDISPATCHER_CONTEXT *a1,      struct _s_FuncInfo *a2)
{
  int call_result;

  call_result = sub_140207818(a2, a1);
  return sub_140206A78((__int64)a2, call_result) != 0;
}

//----- (0000000140206CC4) ----------------------------------------------------
char            sub_140206CC4(struct _xDISPATCHER_CONTEXT *a1, struct FH4__FuncInfo4 *a2)
{
  return *(_BYTE *)a2 & 1;
}

//----- (0000000140206CCC) ----------------------------------------------------
void            sub_140206CCC(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2,      struct _s_FuncInfo *a3)
{
  unsigned __int64 *returned_pointer;
  int call_result;
  __int64 call_result_2;
  int loaded_word;
  unsigned __int64 callee_output_word;

  returned_pointer = sub_140206D64(a1, a2, a3, &callee_output_word);
  call_result = sub_140207818(a3, a2);
  call_result_2 = sub_140206A78((__int64)a3, call_result);
  if ( call_result_2 )
    loaded_word = *(_DWORD *)(call_result_2 + 4);
  else
    loaded_word = -1;
  sub_14020A2C4(returned_pointer, a2, a3, loaded_word);
}

//----- (0000000140206D30) ----------------------------------------------------
void            sub_140206D30(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, struct FH4__FuncInfo4 *a3)
{
  bool comparison_result;
  unsigned __int64 loaded_word;
  unsigned __int64 saved_loaded_word;

  comparison_result = (*(_BYTE *)a3 & 1) == 0;
  loaded_word = *a1;
  saved_loaded_word = loaded_word;
  if ( !comparison_result )
    saved_loaded_word = *(_QWORD *)(*((unsigned int *)a3 + 5) + loaded_word);
  sub_14020A450(&saved_loaded_word, a2, a3, 0xFFFFFFFF);
}

//----- (0000000140206D64) ----------------------------------------------------
unsigned __int64 *           sub_140206D64(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
             struct _s_FuncInfo *a3,
        unsigned __int64 *a4)
{
  __int64 packed_word_bits;
  int call_result;
  _DWORD *loaded_record_pointer;
  unsigned int *int64_result;
  __int64 integer_sum;
  unsigned __int64 table_value;
  unsigned int table_value_2;
  _DWORD *running_total;
  unsigned __int64 ImageBase;

  LODWORD(packed_word_bits) = *((_DWORD *)a3 + 3);
  call_result = sub_140207818(a3, a2);
  *a4 = *a1;
  while ( (_DWORD)packed_word_bits )
  {
    packed_word_bits = (unsigned int)(packed_word_bits - 1);
    loaded_record_pointer = (_DWORD *)(*((_QWORD *)a2 + 1) + *((int *)a3 + 4) + 20 * packed_word_bits);
    if ( call_result > loaded_record_pointer[1] && call_result <= loaded_record_pointer[2] )
    {
      int64_result = (unsigned int *)((__int64 (           *)(_QWORD, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(
                              *(_QWORD *)a2,
                              &ImageBase,
                              0);
      integer_sum = 0;
      table_value = ImageBase + (int)loaded_record_pointer[4];
      table_value_2 = loaded_record_pointer[3];
      if ( table_value_2 )
      {
        running_total = (_DWORD *)(table_value + 12);
        while ( *running_total != (unsigned __int64)*int64_result )
        {
          integer_sum = (unsigned int)(integer_sum + 1);
          running_total += 5;
          if ( (unsigned int)integer_sum >= table_value_2 )
            goto LABEL_9;
        }
LABEL_10:
        *a4 = *(_QWORD *)(*(int *)(table_value + 20 * integer_sum + 16) + *a1);
        return a4;
      }
LABEL_9:
      if ( (unsigned int)integer_sum < table_value_2 )
        goto LABEL_10;
    }
  }
  return a4;
}

// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored

//----- (0000000140206E30) ----------------------------------------------------
unsigned __int64 *           sub_140206E30(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
        struct FH4__FuncInfo4 *a3,
        unsigned __int64 *a4)
{
  *a4 = *a1;
  if ( (*(_BYTE *)a3 & 1) != 0 )
    *a4 = *(_QWORD *)(*((unsigned int *)a3 + 5) + *a1);
  return a4;
}

//----- (0000000140206E54) ----------------------------------------------------
_OWORD *           sub_140206E54(_OWORD *a1, __int64 a2, int a3, __int64 a4, struct _s_FuncInfo *a5)
{
  unsigned int loaded_word;
  int call_result;
  int integer_sum;
  int callee_output_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  int saved_cached_i;
  int cached_i;
  unsigned int remaining_count;
  __int64 integer_difference;
  __int64 scaled_index;
  __int64 scaled_index_2;
  _DWORD *running_total;
  unsigned int i;
  int cached_i_2;
  int cached_i_3;
  __int128 input_value;
  __int128 input_value_2;

  loaded_word = *((_DWORD *)a5 + 3);
  call_result = sub_140207818(a5, (struct _xDISPATCHER_CONTEXT *)a4);
  integer_sum = 0;
  callee_output_word = call_result;
  if ( !loaded_word )
    abort();
  loaded_word_2 = *(_QWORD *)(a4 + 8);
  loaded_word_3 = *((int *)a5 + 4);
  saved_cached_i = -1;
  cached_i = -1;
  remaining_count = loaded_word;
  while ( 1 )
  {
    integer_difference = remaining_count - 1;
    scaled_index = loaded_word_2 + 20 * integer_difference;
    if ( callee_output_word > *(_DWORD *)(scaled_index + loaded_word_3 + 4) && callee_output_word <= *(_DWORD *)(scaled_index + loaded_word_3 + 8) )
      break;
    --remaining_count;
    if ( !(_DWORD)integer_difference )
    {
      scaled_index_2 = 0;
      goto LABEL_8;
    }
  }
  scaled_index_2 = loaded_word_2 + loaded_word_3 + 20LL * (remaining_count - 1);
LABEL_8:
  running_total = (_DWORD *)(loaded_word_2 + loaded_word_3);
  for ( i = 0; i < loaded_word; ++i )
  {
    if ( (!scaled_index_2 || *running_total > *(_DWORD *)(scaled_index_2 + 4) && running_total[1] <= *(_DWORD *)(scaled_index_2 + 8)) && a3 >= *running_total && a3 <= running_total[1] )
    {
      cached_i_2 = i;
      cached_i = i;
      if ( saved_cached_i != -1 )
        cached_i_2 = saved_cached_i;
      saved_cached_i = cached_i_2;
    }
    running_total += 5;
  }
  *(_QWORD *)&input_value = a2;
  cached_i_3 = 0;
  *(_QWORD *)&input_value_2 = a2;
  if ( saved_cached_i != -1 )
    cached_i_3 = saved_cached_i;
  DWORD2(input_value) = cached_i_3;
  if ( saved_cached_i != -1 )
    integer_sum = cached_i + 1;
  DWORD2(input_value_2) = integer_sum;
  *a1 = input_value;
  a1[1] = input_value_2;
  return a1;
}

//----- (0000000140206F94) ----------------------------------------------------
_OWORD *           sub_140206F94(_OWORD *a1, int *a2, int a3)
{
  __int128 packed_vector;
  int saved_iteration_count;
  int loaded_word;
  int iteration_count;
  __int64 loaded_word_2;
  _BYTE *loaded_record_pointer;
  __int64 masked_bits;
  _BYTE *state_address;
  int shifted_bits;
  __int64 masked_bits_2;
  _BYTE *state_address_2;
  int shifted_bits_2;
  __int64 masked_bits_3;
  _DWORD *state_address_3;
  __int128 packed_vector_2;
  __int128 packed_vector_3;
  __int128 packed_vector_4;

  *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)(a2);
  *(_QWORD *)&packed_vector_3 = (uint64)(uintptr_t)(a2);
  DWORD2(packed_vector_2) = 0;
  packed_vector = packed_vector_2;
  packed_vector_4 = packed_vector_2;
  saved_iteration_count = 0;
  sub_140207378((__int64)a2, (__int64)&packed_vector_4);
  loaded_word = *a2;
  iteration_count = 0;
  if ( *a2 )
  {
    do
    {
      loaded_word_2 = *((_QWORD *)a2 + 3);
      if ( a3 >= (int)loaded_word_2 && a3 <= SHIDWORD(loaded_word_2) )
      {
        saved_iteration_count = iteration_count;
        DWORD2(packed_vector_2) = 0;
      }
      loaded_record_pointer = *((_BYTE **)a2 + 1);
      ++iteration_count;
      masked_bits = *loaded_record_pointer & 0xF;
      state_address = &loaded_record_pointer[-byte_140284A40[masked_bits]];
      shifted_bits = *((_DWORD *)state_address - 1) >> byte_140284A40[masked_bits + 16];
      *((_QWORD *)a2 + 1) = (uint64)(uintptr_t)(state_address);
      a2[6] = shifted_bits;
      masked_bits_2 = *state_address & 0xF;
      state_address_2 = &state_address[-byte_140284A40[masked_bits_2]];
      shifted_bits_2 = *((_DWORD *)state_address_2 - 1) >> byte_140284A40[masked_bits_2 + 16];
      *((_QWORD *)a2 + 1) = (uint64)(uintptr_t)(state_address_2);
      a2[7] = shifted_bits_2;
      masked_bits_3 = *state_address_2 & 0xF;
      state_address_3 = &state_address_2[-byte_140284A40[masked_bits_3]];
      a2[8] = *(state_address_3 - 1) >> byte_140284A40[masked_bits_3 + 16];
      *((_QWORD *)a2 + 1) = (uint64)(uintptr_t)(state_address_3);
      LODWORD(masked_bits_3) = *state_address_3;
      *((_QWORD *)a2 + 1) = (uint64)(uintptr_t)(state_address_3 + 1);
      a2[9] = masked_bits_3;
    }
    while ( iteration_count != loaded_word );
    packed_vector = packed_vector_2;
  }
  packed_vector_4 = packed_vector;
  DWORD2(packed_vector_3) = saved_iteration_count + 1;
  sub_140207378((__int64)a2, (__int64)&packed_vector_4);
  *a1 = packed_vector;
  a1[1] = packed_vector_3;
  return a1;
}

// 14020700D: conditional instruction was optimized away because edi.4==0

//----- (0000000140207130) ----------------------------------------------------
__int64            sub_140207130(
        unsigned __int64 *a1,
        struct EHExceptionRecord *a2,
        struct _CONTEXT *a3,
        unsigned __int64 *a4,
        void *a5,
             struct _s_FuncInfo *a6,
        int a7,
        int a8,
             struct _s_HandlerType *a9,
        struct _xDISPATCHER_CONTEXT *a10,
        unsigned __int8 a11)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 unused_local;
  __int64 HistoryTable;
  _OWORD ExceptionRecord[10];
  __int64 unused_local_2;

  ExceptionRecord[0] = unk_140284B00;
  ExceptionRecord[1] = unk_140284B10;
  ExceptionRecord[2] = unk_140284B20;
  memset(&ExceptionRecord[3], 0, 104);
  loaded_word = *a1;
  *(_QWORD *)&ExceptionRecord[2] = (uintptr_t)sub_140209C48;
  *(_QWORD *)&ExceptionRecord[3] = (uint64)(uintptr_t)(a5);
  *((_QWORD *)&ExceptionRecord[3] + 1) = a7;
  *((_QWORD *)&ExceptionRecord[4] + 1) = (uint64)(uintptr_t)(a6);
  *((_QWORD *)&ExceptionRecord[5] + 1) = a11;
  HistoryTable = *((_QWORD *)a10 + 8);
  loaded_word_2 = *((_QWORD *)a10 + 5);
  *((_QWORD *)&ExceptionRecord[2] + 1) = (uint64)(uintptr_t)(a4);
  *(_QWORD *)&ExceptionRecord[4] = (uint64)(uintptr_t)(a3);
  *(_QWORD *)&ExceptionRecord[5] = (uint64)(uintptr_t)(a2);
  loaded_word_3 = *(_QWORD *)a10;
  *(_QWORD *)&ExceptionRecord[6] = 429065504;
  ((void (           *)(__int64, __int64, _OWORD *, _QWORD, __int64, __int64))RtlUnwindEx)(
    loaded_word,
    loaded_word_3,
    ExceptionRecord,
    0,
    loaded_word_2,
    HistoryTable);
  return 0; /* no result: rax is residue of the RtlUnwindEx call */
}

// 14026E278: invalid function type 'void (__stdcall *RtlUnwindEx)(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored

//----- (0000000140207234) ----------------------------------------------------
__int64            sub_140207234(
        unsigned __int64 *a1,
        struct EHExceptionRecord *a2,
        struct _CONTEXT *a3,
        unsigned __int64 *a4,
        void *a5,
        struct FH4__FuncInfo4 *a6,
        int a7,
        int a8,
        struct FH4__HandlerType4 *a9,
        struct _xDISPATCHER_CONTEXT *a10,
        unsigned __int8 a11)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  __int64 loaded_word_5;
  __int64 unused_local;
  __int64 HistoryTable;
  _OWORD ExceptionRecord[10];
  __int64 unused_local_2;

  ExceptionRecord[0] = unk_140284A60;
  ExceptionRecord[1] = unk_140284A70;
  *((_QWORD *)&ExceptionRecord[2] + 1) = unk_140284A88;
  *((_QWORD *)&ExceptionRecord[4] + 1) = unk_140284AA8;
  *(_QWORD *)&ExceptionRecord[5] = unk_140284AB0;
  memset(&ExceptionRecord[6], 0, 56);
  *(_QWORD *)&ExceptionRecord[2] = (uintptr_t)sub_140209E34;
  *(_QWORD *)&ExceptionRecord[3] = (uint64)(uintptr_t)(a5);
  *(_QWORD *)&ExceptionRecord[4] = (uint64)(uintptr_t)(a3);
  *((_QWORD *)&ExceptionRecord[3] + 1) = a7;
  *((_QWORD *)&ExceptionRecord[5] + 1) = a11;
  loaded_word = *((_QWORD *)a10 + 1) + *((_QWORD *)a9 + 3);
  loaded_word_2 = *((_QWORD *)a10 + 1) + *((_QWORD *)a9 + 4);
  *((_QWORD *)&ExceptionRecord[7] + 1) = a8;
  HistoryTable = *((_QWORD *)a10 + 8);
  loaded_word_3 = *((_QWORD *)a10 + 5);
  *((_QWORD *)&ExceptionRecord[2] + 1) = (uint64)(uintptr_t)(a4);
  *((_QWORD *)&ExceptionRecord[4] + 1) = loaded_word;
  loaded_word_4 = *a1;
  *(_QWORD *)&ExceptionRecord[5] = (uint64)(uintptr_t)(a2);
  loaded_word_5 = *(_QWORD *)a10;
  *((_QWORD *)&ExceptionRecord[6] + 1) = loaded_word_2;
  *(_QWORD *)&ExceptionRecord[6] = 429065504;
  ((void (           *)(__int64, __int64, _OWORD *, _QWORD, __int64, __int64))RtlUnwindEx)(
    loaded_word_4,
    loaded_word_5,
    ExceptionRecord,
    0,
    loaded_word_3,
    HistoryTable);
  return 0; /* no result: rax is residue of the RtlUnwindEx call */
}

// 14026E278: invalid function type 'void (__stdcall *RtlUnwindEx)(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored

//----- (0000000140207378) ----------------------------------------------------
_DWORD *           sub_140207378(__int64 a1, __int64 a2)
{
  _BYTE *loaded_record_pointer;
  __int64 masked_bits;
  __int64 packed_word_bits;
  _BYTE *state_address;
  __int64 masked_bits_2;
  __int64 packed_word_bits_2;
  _BYTE *state_address_2;
  __int64 masked_bits_3;
  __int64 packed_word_bits_3;
  _DWORD *state_address_3;
  _DWORD *result;
  int iteration_count;
  _BYTE *loaded_record_pointer_2;
  __int64 masked_bits_4;
  __int64 packed_word_bits_4;
  _BYTE *state_address_4;
  __int64 masked_bits_5;
  __int64 packed_word_bits_5;
  _BYTE *state_address_5;
  __int64 masked_bits_6;
  __int64 packed_word_bits_6;
  _DWORD *buffer_cursor;
  __int64 masked_bits_7;
  _BYTE *table_value;
  __int64 masked_bits_8;
  _BYTE *state_address_6;
  __int64 masked_bits_9;
  _DWORD *state_address_7;

  loaded_record_pointer = *(_BYTE **)(a1 + 16);
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(loaded_record_pointer);
  masked_bits = *loaded_record_pointer & 0xF;
  packed_word_bits = byte_140284A40[masked_bits];
  LOBYTE(masked_bits) = byte_140284A40[masked_bits + 16];
  state_address = &loaded_record_pointer[-packed_word_bits];
  LODWORD(packed_word_bits) = *((_DWORD *)state_address - 1);
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(state_address);
  *(_DWORD *)(a1 + 24) = (unsigned int)packed_word_bits >> masked_bits;
  masked_bits_2 = *state_address & 0xF;
  packed_word_bits_2 = byte_140284A40[masked_bits_2];
  LOBYTE(masked_bits_2) = byte_140284A40[masked_bits_2 + 16];
  state_address_2 = &state_address[-packed_word_bits_2];
  LODWORD(packed_word_bits_2) = *((_DWORD *)state_address_2 - 1);
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(state_address_2);
  *(_DWORD *)(a1 + 28) = (unsigned int)packed_word_bits_2 >> masked_bits_2;
  masked_bits_3 = *state_address_2 & 0xF;
  packed_word_bits_3 = byte_140284A40[masked_bits_3];
  LOBYTE(masked_bits_3) = byte_140284A40[masked_bits_3 + 16];
  state_address_3 = &state_address_2[-packed_word_bits_3];
  LODWORD(packed_word_bits_3) = *(state_address_3 - 1);
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(state_address_3);
  *(_DWORD *)(a1 + 32) = (unsigned int)packed_word_bits_3 >> masked_bits_3;
  result = state_address_3 + 1;
  LODWORD(masked_bits_3) = *state_address_3;
  iteration_count = 0;
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(result);
  *(_DWORD *)(a1 + 36) = masked_bits_3;
  if ( *(_DWORD *)(a2 + 8) )
  {
    do
    {
      loaded_record_pointer_2 = *(_BYTE **)(a1 + 8);
      ++iteration_count;
      masked_bits_4 = *loaded_record_pointer_2 & 0xF;
      packed_word_bits_4 = byte_140284A40[masked_bits_4];
      LOBYTE(masked_bits_4) = byte_140284A40[masked_bits_4 + 16];
      state_address_4 = &loaded_record_pointer_2[-packed_word_bits_4];
      LODWORD(packed_word_bits_4) = *((_DWORD *)state_address_4 - 1);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(state_address_4);
      *(_DWORD *)(a1 + 24) = (unsigned int)packed_word_bits_4 >> masked_bits_4;
      masked_bits_5 = *state_address_4 & 0xF;
      packed_word_bits_5 = byte_140284A40[masked_bits_5];
      LOBYTE(masked_bits_5) = byte_140284A40[masked_bits_5 + 16];
      state_address_5 = &state_address_4[-packed_word_bits_5];
      LODWORD(packed_word_bits_5) = *((_DWORD *)state_address_5 - 1);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(state_address_5);
      *(_DWORD *)(a1 + 28) = (unsigned int)packed_word_bits_5 >> masked_bits_5;
      masked_bits_6 = *state_address_5 & 0xF;
      packed_word_bits_6 = byte_140284A40[masked_bits_6];
      LOBYTE(masked_bits_6) = byte_140284A40[masked_bits_6 + 16];
      buffer_cursor = &state_address_5[-packed_word_bits_6];
      LODWORD(packed_word_bits_6) = *(buffer_cursor - 1);
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(buffer_cursor);
      *(_DWORD *)(a1 + 32) = (unsigned int)packed_word_bits_6 >> masked_bits_6;
      LODWORD(packed_word_bits_6) = *buffer_cursor++;
      *(_DWORD *)(a1 + 36) = packed_word_bits_6;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(buffer_cursor);
      masked_bits_7 = *(_BYTE *)buffer_cursor & 0xF;
      table_value = (char *)buffer_cursor - byte_140284A40[masked_bits_7];
      LODWORD(packed_word_bits_6) = *((_DWORD *)table_value - 1) >> byte_140284A40[masked_bits_7 + 16];
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(table_value);
      *(_DWORD *)(a1 + 24) = packed_word_bits_6;
      masked_bits_8 = *table_value & 0xF;
      state_address_6 = &table_value[-byte_140284A40[masked_bits_8]];
      LODWORD(packed_word_bits_6) = *((_DWORD *)state_address_6 - 1) >> byte_140284A40[masked_bits_8 + 16];
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(state_address_6);
      *(_DWORD *)(a1 + 28) = packed_word_bits_6;
      masked_bits_9 = *state_address_6 & 0xF;
      state_address_7 = &state_address_6[-byte_140284A40[masked_bits_9]];
      *(_DWORD *)(a1 + 32) = *(state_address_7 - 1) >> byte_140284A40[masked_bits_9 + 16];
      result = state_address_7 + 1;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(state_address_7);
      LODWORD(masked_bits_9) = *state_address_7;
      *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(state_address_7 + 1);
      *(_DWORD *)(a1 + 36) = masked_bits_9;
    }
    while ( iteration_count != *(_DWORD *)(a2 + 8) );
  }
  return result;
}

//----- (000000014020753C) ----------------------------------------------------
_QWORD *           sub_14020753C(_QWORD *a1, __int64 a2)
{
  __int64 getptd_result;

  *a1 = a2;
  if ( (unsigned __int64)a1 >= *(_QWORD *)(crt_getptd() + 88) )
    getptd_result = 0;
  else
    getptd_result = *(_QWORD *)(crt_getptd() + 88);
  a1[1] = getptd_result;
  *(_QWORD *)(crt_getptd() + 88) = (uint64)(uintptr_t)(a1);
  return a1;
}

//----- (0000000140207578) ----------------------------------------------------
__int64            sub_140207578(__int64 a1)
{
  __int64 getptd_result;
  __int64 loaded_word;
  __int64 result;

  if ( a1 != *(_QWORD *)(crt_getptd() + 88) || (getptd_result = *(_QWORD *)(crt_getptd() + 88)) == 0 )
LABEL_7:
    abort();
  while ( 1 )
  {
    loaded_word = *(_QWORD *)(getptd_result + 8);
    if ( a1 == getptd_result )
      break;
    getptd_result = *(_QWORD *)(getptd_result + 8);
    if ( !loaded_word )
      goto LABEL_7;
  }
  result = crt_getptd();
  *(_QWORD *)(result + 88) = loaded_word;
  return result;
}

//----- (00000001402075CC) ----------------------------------------------------
__int64 sub_1402075CC()
{
  return *(_QWORD *)(crt_getptd() + 96);
}

//----- (00000001402075E0) ----------------------------------------------------
__int64 sub_1402075E0()
{
  return *(_QWORD *)(crt_getptd() + 104);
}

//----- (00000001402075F4) ----------------------------------------------------
__int64            sub_1402075F4(__int64 a1)
{
  __int64 result;

  result = crt_getptd();
  *(_QWORD *)(result + 96) = a1;
  return result;
}

//----- (000000014020760C) ----------------------------------------------------
__int64            sub_14020760C(__int64 a1)
{
  __int64 result;

  result = crt_getptd();
  *(_QWORD *)(result + 104) = a1;
  return result;
}

//----- (0000000140207634) ----------------------------------------------------
__int64            sub_140207634(__int64 a1, unsigned __int64 a2, struct CMFCToolBarImages *a3, __int64 a4)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 getptd_result;
  unsigned __int64 input_value;

  loaded_word = *(_QWORD *)(a4 + 8);
  input_value = a2;
  *(_QWORD *)(crt_getptd() + 96) = loaded_word;
  loaded_word_2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(crt_getptd() + 104) = loaded_word_2;
  getptd_result = crt_getptd();
  return sub_140209250(
           (struct EHExceptionRecord *)a1,
           &input_value,
           a3,
           a4,
           (struct _s_FuncInfo *)(*(_QWORD *)(getptd_result + 96) + **(unsigned int **)(a4 + 56)),
           0,
           0,
           0);
}

//----- (00000001402076BC) ----------------------------------------------------
__int64            sub_1402076BC(
        struct EHExceptionRecord *a1,
        unsigned __int64 a2,
        struct CMFCToolBarImages *a3,
        __int64 a4)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 getptd_result;
  unsigned __int8 scratch_buffer[4];
  int unused_written_slot;
  int unused_written_slot_2;
  int unused_written_slot_3;
  int unused_written_slot_4;
  int unused_written_slot_5;
  unsigned __int64 input_value;

  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  unused_written_slot_5 = 0;
  loaded_word = *(_QWORD *)(a4 + 8);
  scratch_buffer[0] = 0;
  input_value = a2;
  *(_QWORD *)(crt_getptd() + 96) = loaded_word;
  loaded_word_2 = *((_QWORD *)a1 + 7);
  *(_QWORD *)(crt_getptd() + 104) = loaded_word_2;
  getptd_result = crt_getptd();
  sub_140206AE0(
    (FH4 *)(*(_QWORD *)(getptd_result + 96) + **(unsigned int **)(a4 + 56)),
    scratch_buffer,
    *(struct FH4__FuncInfo4 **)(a4 + 8),
    **(_DWORD **)(a4 + 16),
    0);
  return sub_140209488(a1, &input_value, a3, a4, (struct FH4__FuncInfo4 *)scratch_buffer, 0, 0, 0);
}

//----- (000000014020777C) ----------------------------------------------------
__int64            sub_14020777C(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2,      struct _s_FuncInfo *a3)
{
  __int64 result;

  result = *(unsigned int *)(*((int *)a3 + 7) + *a1);
  if ( (_DWORD)result == -2 )
    return sub_140207828(a3, a2, *(_QWORD *)a2);
  return result;
}

//----- (00000001402077A4) ----------------------------------------------------
__int64            sub_1402077A4(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2,      struct _s_FuncInfo *a3)
{
  unsigned __int64 call_result;
  __int64 loaded_word;
  unsigned __int64 callee_output_word;

  call_result = *sub_140206D64(a1, a2, a3, &callee_output_word);
  loaded_word = *((int *)a3 + 7);
  callee_output_word = call_result;
  return *(unsigned int *)(loaded_word + call_result + 4);
}

//----- (00000001402077D0) ----------------------------------------------------
void            sub_1402077D0(unsigned __int64 *a1,      struct _s_FuncInfo *a2, int a3)
{
  *(_DWORD *)(*((int *)a2 + 7) + *a1) = a3;
}

//----- (00000001402077DC) ----------------------------------------------------
void            sub_1402077DC(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
             struct _s_FuncInfo *a3,
        int a4)
{
  unsigned __int64 call_result;
  __int64 loaded_word;
  unsigned __int64 callee_output_word;

  call_result = *sub_140206D64(a1, a2, a3, &callee_output_word);
  loaded_word = *((int *)a3 + 7);
  callee_output_word = call_result;
  if ( a4 > *(_DWORD *)(loaded_word + call_result + 4) )
    *(_DWORD *)(loaded_word + call_result + 4) = a4;
}

//----- (0000000140207818) ----------------------------------------------------
__int64            sub_140207818(     struct _s_FuncInfo *a1, struct _xDISPATCHER_CONTEXT *a2)
{
  return sub_140207828(a1, a2, *(_QWORD *)a2);
}

//----- (0000000140207820) ----------------------------------------------------
__int64            sub_140207820(struct FH4__FuncInfo4 *a1, struct _xDISPATCHER_CONTEXT *a2)
{
  return sub_140207890(a1, a2, *(_QWORD *)a2);
}

//----- (0000000140207828) ----------------------------------------------------
__int64            sub_140207828(     struct _s_FuncInfo *a1, struct _xDISPATCHER_CONTEXT *a2, unsigned __int64 a3)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned int loaded_word_3;
  __int64 integer_sum;

  if ( !a1 || (loaded_word = *((int *)a1 + 6), loaded_word_2 = *((_QWORD *)a2 + 1), !(loaded_word + loaded_word_2)) )
    abort();
  loaded_word_3 = *((_DWORD *)a1 + 5);
  integer_sum = 0;
  if ( !loaded_word_3 )
    return 0xFFFFFFFFLL;
  do
  {
    if ( a3 < loaded_word_2 + *(int *)(loaded_word + 8 * integer_sum + loaded_word_2) )
      break;
    integer_sum = (unsigned int)(integer_sum + 1);
  }
  while ( (unsigned int)integer_sum < loaded_word_3 );
  if ( (_DWORD)integer_sum )
    return *(unsigned int *)(loaded_word + 8LL * (unsigned int)(integer_sum - 1) + loaded_word_2 + 4);
  else
    return 0xFFFFFFFFLL;
}

//----- (0000000140207890) ----------------------------------------------------
__int64            sub_140207890(struct FH4__FuncInfo4 *a1, struct _xDISPATCHER_CONTEXT *a2, unsigned __int64 a3)
{
  __int64 loaded_word;
  unsigned int running_total;
  _BYTE *loaded_record_pointer;
  unsigned int unused_written_slot;
  unsigned int iteration_count;
  __int64 masked_bits;
  _BYTE *state_address;
  unsigned int shifted_bits;
  __int64 loaded_word_2;
  __int64 masked_bits_2;
  _BYTE *state_address_2;
  __int64 masked_bits_3;

  if ( !*((_DWORD *)a1 + 4) )
    return 0xFFFFFFFFLL;
  loaded_word = *((_QWORD *)a2 + 1);
  running_total = 0;
  loaded_record_pointer = (_BYTE *)(loaded_word + *((int *)a1 + 4));
  unused_written_slot = -1;
  iteration_count = 0;
  masked_bits = *loaded_record_pointer & 0xF;
  state_address = &loaded_record_pointer[-byte_140284A40[masked_bits]];
  shifted_bits = *((_DWORD *)state_address - 1) >> byte_140284A40[masked_bits + 16];
  if ( !shifted_bits )
    return 0xFFFFFFFFLL;
  loaded_word_2 = **((unsigned int **)a2 + 2);
  do
  {
    masked_bits_2 = *state_address & 0xF;
    state_address_2 = &state_address[-byte_140284A40[masked_bits_2]];
    running_total += *((_DWORD *)state_address_2 - 1) >> byte_140284A40[masked_bits_2 + 16];
    if ( a3 < loaded_word + loaded_word_2 + (unsigned __int64)running_total )
      break;
    ++iteration_count;
    masked_bits_3 = *state_address_2 & 0xF;
    state_address = &state_address_2[-byte_140284A40[masked_bits_3]];
    unused_written_slot = (*((_DWORD *)state_address - 1) >> byte_140284A40[masked_bits_3 + 16]) - 1;
  }
  while ( iteration_count < shifted_bits );
  if ( iteration_count )
    return unused_written_slot;
  else
    return 0xFFFFFFFFLL;
}

//----- (0000000140207994) ----------------------------------------------------
__int64            sub_140207994(__int64 a1, __m128i *a2, int *a3, __int64 a4)
{
  unsigned int unused_written_slot;
  __int64 packed_word_bits;
  __int64 call_result;
  __int64 call_result_2;
  __int64 int64_result;
  __int64 saved_int64_result;
       __m128i *source_buffer;
  __int64 packed_word_bits_2;
  __int64 call_result_3;
  unsigned __int64 byte_count;
       __m128i *source_buffer_2;
  __int64 loaded_word;

  unused_written_slot = 0;
  if ( a3[1] )
  {
    packed_word_bits = a3[1];
    call_result = packed_word_bits + sub_1402075CC();
  }
  else
  {
    call_result = 0;
    LODWORD(packed_word_bits) = 0;
  }
  if ( call_result )
  {
    call_result_2 = (_DWORD)packed_word_bits ? a3[1] + sub_1402075CC() : 0LL;
    if ( *(_BYTE *)(call_result_2 + 16) && (a3[2] || *a3 < 0) )
    {
      if ( *a3 >= 0 )
        a2 = (__m128i *)(SR_VEC_PTR_LANES(128, a2, i64)[0] + a3[2]);
      if ( *(char *)a3 < 0 && (*(_BYTE *)a4 & 0x10) != 0 && g_144CBE540 )
      {
        int64_result = (*(__int64 (**)(void))(unsigned int *)&g_144CBE540)();
        if ( !int64_result || !a2 )
          abort();
        SR_VEC_PTR_LANES(128, a2, i64)[0] = int64_result;
        saved_int64_result = int64_result;
      }
      else if ( (*(_BYTE *)a3 & 8) != 0 )
      {
        saved_int64_result = *(_QWORD *)(a1 + 40);
        if ( !saved_int64_result || !a2 )
          abort();
        SR_VEC_PTR_LANES(128, a2, i64)[0] = saved_int64_result;
      }
      else
      {
        if ( (*(_BYTE *)a4 & 1) == 0 )
        {
          if ( *(_DWORD *)(a4 + 24) )
          {
            packed_word_bits_2 = *(int *)(a4 + 24);
            call_result_3 = packed_word_bits_2 + sub_1402075E0();
          }
          else
          {
            call_result_3 = 0;
            LODWORD(packed_word_bits_2) = 0;
          }
          if ( call_result_3 )
          {
            if ( !*(_QWORD *)(a1 + 40)
              || !a2
              || (!(_DWORD)packed_word_bits_2 ? (loaded_word = 0) : (loaded_word = *(int *)(a4 + 24) + sub_1402075E0()), !loaded_word) )
            {
              abort();
            }
            return (unsigned int)((*(_BYTE *)a4 & 4) != 0) + 1;
          }
          else
          {
            if ( !*(_QWORD *)(a1 + 40) || !a2 )
              abort();
            byte_count = *(int *)(a4 + 20);
            source_buffer_2 = (     __m128i *)sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
            crt_memcpy(a2, source_buffer_2, byte_count);
          }
          return unused_written_slot;
        }
        source_buffer = *(     __m128i **)(a1 + 40);
        if ( !source_buffer || !a2 )
          abort();
        crt_memcpy(a2, source_buffer, *(int *)(a4 + 20));
        if ( *(_DWORD *)(a4 + 20) != 8 || !SR_VEC_PTR_LANES(128, a2, i64)[0] )
          return unused_written_slot;
        saved_int64_result = SR_VEC_PTR_LANES(128, a2, i64)[0];
      }
      SR_VEC_PTR_LANES(128, a2, i64)[0] = sub_1401FD298(saved_int64_result, (int *)(a4 + 8));
      return unused_written_slot;
    }
  }
  return 0;
}

//----- (0000000140207B94) ----------------------------------------------------
__int64            sub_140207B94(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  unsigned int unused_written_slot;
  __int64 packed_word_bits;
  __int64 call_result;
  __int64 loaded_word;
  __int64 int64_result;
  __int64 saved_int64_result;
       __m128i *source_buffer;
  __int64 packed_word_bits_2;
  __int64 call_result_2;
  unsigned __int64 byte_count;
       __m128i *source_buffer_2;
  __int64 loaded_word_2;

  unused_written_slot = 0;
  if ( *(_DWORD *)(a3 + 8) )
  {
    packed_word_bits = *(int *)(a3 + 8);
    call_result = packed_word_bits + sub_1402075CC();
  }
  else
  {
    call_result = 0;
    LODWORD(packed_word_bits) = 0;
  }
  if ( call_result )
  {
    loaded_word = (_DWORD)packed_word_bits ? *(int *)(a3 + 8) + sub_1402075CC() : 0LL;
    if ( *(_BYTE *)(loaded_word + 16) && (*(_DWORD *)(a3 + 12) || *(int *)(a3 + 4) < 0) )
    {
      if ( *(int *)(a3 + 4) >= 0 )
        a2 = (__m128i *)(SR_VEC_PTR_LANES(128, a2, i64)[0] + *(unsigned int *)(a3 + 12));
      if ( *(char *)(a3 + 4) < 0 && (*(_BYTE *)a4 & 0x10) != 0 && g_144CBE540 )
      {
        int64_result = (*(__int64 (**)(void))(unsigned int *)&g_144CBE540)();
        if ( !int64_result || !a2 )
          abort();
        SR_VEC_PTR_LANES(128, a2, i64)[0] = int64_result;
        saved_int64_result = int64_result;
      }
      else if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
      {
        saved_int64_result = *(_QWORD *)(a1 + 40);
        if ( !saved_int64_result || !a2 )
          abort();
        SR_VEC_PTR_LANES(128, a2, i64)[0] = saved_int64_result;
      }
      else
      {
        if ( (*(_BYTE *)a4 & 1) == 0 )
        {
          if ( *(_DWORD *)(a4 + 24) )
          {
            packed_word_bits_2 = *(int *)(a4 + 24);
            call_result_2 = packed_word_bits_2 + sub_1402075E0();
          }
          else
          {
            call_result_2 = 0;
            LODWORD(packed_word_bits_2) = 0;
          }
          if ( call_result_2 )
          {
            if ( !*(_QWORD *)(a1 + 40)
              || !a2
              || (!(_DWORD)packed_word_bits_2 ? (loaded_word_2 = 0) : (loaded_word_2 = *(int *)(a4 + 24) + sub_1402075E0()), !loaded_word_2) )
            {
              abort();
            }
            return (unsigned int)((*(_BYTE *)a4 & 4) != 0) + 1;
          }
          else
          {
            if ( !*(_QWORD *)(a1 + 40) || !a2 )
              abort();
            byte_count = *(int *)(a4 + 20);
            source_buffer_2 = (     __m128i *)sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
            crt_memcpy(a2, source_buffer_2, byte_count);
          }
          return unused_written_slot;
        }
        source_buffer = *(     __m128i **)(a1 + 40);
        if ( !source_buffer || !a2 )
          abort();
        crt_memcpy(a2, source_buffer, *(int *)(a4 + 20));
        if ( *(_DWORD *)(a4 + 20) != 8 || !SR_VEC_PTR_LANES(128, a2, i64)[0] )
          return unused_written_slot;
        saved_int64_result = SR_VEC_PTR_LANES(128, a2, i64)[0];
      }
      SR_VEC_PTR_LANES(128, a2, i64)[0] = sub_1401FD298(saved_int64_result, (int *)(a4 + 8));
      return unused_written_slot;
    }
  }
  return 0;
}

//----- (0000000140207D98) ----------------------------------------------------
__int64            sub_140207D98(__int64 a1, __m128i *a2, int *a3, __int64 a4)
{
  __int64 (           *callback_function)(__int64, __int64);
  __m128i *table_value;
  __int64 result;
  __int64 loaded_word;
  __int64 loaded_word_2;

  callback_function = nullptr;
  if ( *a3 >= 0 )
    table_value = (__m128i *)(SR_VEC_PTR_LANES(128, a2, i64)[0] + a3[2]);
  else
    table_value = a2;
  result = (unsigned int)sub_140207994(a1, a2, a3, a4) - 1;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      loaded_word = sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
      if ( *(_DWORD *)(a4 + 24) )
        callback_function = (__int64 (           *)(__int64, __int64))(sub_1402075E0() + *(int *)(a4 + 24));
      return sub_14020AB20((__int64)table_value, (__int64 (           *)(__int64, __int64, _QWORD))callback_function, loaded_word, 1u);
    }
  }
  else
  {
    loaded_word_2 = sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
    if ( *(_DWORD *)(a4 + 24) )
      callback_function = (__int64 (           *)(__int64, __int64))(sub_1402075E0() + *(int *)(a4 + 24));
    return sub_14020AB14((__int64)table_value, callback_function, loaded_word_2);
  }
  return result;
}

//----- (0000000140207E58) ----------------------------------------------------
__int64            sub_140207E58(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 (           *callback_function)(__int64, __int64);
  __m128i *loaded_record_pointer;
  __int64 result;
  __int64 loaded_word;
  __int64 loaded_word_2;

  callback_function = nullptr;
  if ( *(int *)(a3 + 4) >= 0 )
    loaded_record_pointer = (__m128i *)(SR_VEC_PTR_LANES(128, a2, i64)[0] + *(unsigned int *)(a3 + 12));
  else
    loaded_record_pointer = a2;
  result = (unsigned int)sub_140207B94(a1, a2, a3, a4) - 1;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      loaded_word = sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
      if ( *(_DWORD *)(a4 + 24) )
        callback_function = (__int64 (           *)(__int64, __int64))(sub_1402075E0() + *(int *)(a4 + 24));
      return sub_14020AB20((__int64)loaded_record_pointer, (__int64 (           *)(__int64, __int64, _QWORD))callback_function, loaded_word, 1u);
    }
  }
  else
  {
    loaded_word_2 = sub_1401FD298(*(_QWORD *)(a1 + 40), (int *)(a4 + 8));
    if ( *(_DWORD *)(a4 + 24) )
      callback_function = (__int64 (           *)(__int64, __int64))(sub_1402075E0() + *(int *)(a4 + 24));
    return sub_14020AB14((__int64)loaded_record_pointer, callback_function, loaded_word_2);
  }
  return result;
}

//----- (0000000140207F1C) ----------------------------------------------------
__int64            sub_140207F1C(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        struct _xDISPATCHER_CONTEXT *a4,
        struct _s_FuncInfo *a5,
        struct _s_HandlerType *a6,
        __int64 a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
       struct _s_FuncInfo *input_cursor;
  __m128i *returned_pointer;
  unsigned __int64 *record_pointer;
  struct _s_HandlerType *input_cursor_2;
  int table_value;
  int loaded_word;
  __int64 call_result;
  unsigned __int64 callee_output_word;
  struct CMFCToolBarImages *input_cursor_3;

  input_cursor_3 = a3;
  input_cursor = a5;
  returned_pointer = (__m128i *)sub_140206D64(a2, a4, a5, &callee_output_word);
  record_pointer = (unsigned __int64 *)returned_pointer;
  input_cursor_2 = a6;
  if ( a7 )
    sub_140207D98((__int64)a1, returned_pointer, (int *)a6, a7);
  table_value = a8[2];
  loaded_word = *a8;
  call_result = sub_1402075CC();
  return sub_140207130(a2, a1, input_cursor_3, record_pointer, (void *)(*((int *)input_cursor_2 + 3) + call_result), input_cursor, loaded_word, table_value, input_cursor_2, a4, a12);
}

//----- (0000000140207FF0) ----------------------------------------------------
__int64            sub_140207FF0(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        struct _xDISPATCHER_CONTEXT *a4,
        struct FH4__FuncInfo4 *a5,
        struct sr_anon_94 *a6,
        __int64 a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  struct FH4__FuncInfo4 *input_cursor;
  __m128i *returned_pointer;
  unsigned __int64 *record_pointer;
  struct sr_anon_94 *input_cursor_2;
  int table_value;
  int loaded_word;
  __int64 call_result;
  unsigned __int64 callee_output_word;
  struct CMFCToolBarImages *input_cursor_3;

  input_cursor_3 = a3;
  input_cursor = a5;
  returned_pointer = (__m128i *)sub_140206E30(a2, a4, a5, &callee_output_word);
  record_pointer = (unsigned __int64 *)returned_pointer;
  input_cursor_2 = a6;
  if ( a7 )
    sub_140207E58((__int64)a1, returned_pointer, (__int64)a6, a7);
  table_value = a8[2];
  loaded_word = *a8;
  call_result = sub_1402075CC();
  return sub_140207234(a2, a1, input_cursor_3, record_pointer, (void *)(*((int *)input_cursor_2 + 4) + call_result), input_cursor, loaded_word, table_value, input_cursor_2, a4, a12);
}

//----- (00000001402080C4) ----------------------------------------------------
__int64            sub_1402080C4(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct _s_FuncInfo *a5,
        char a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 *input_cursor;
  struct CMFCToolBarImages *loaded_record_pointer;
  char cached_selection_flag;
  int call_result;
  int callee_output_word;
  __int64 getptd_result;
  __int64 loaded_word;
       struct _s_ESTypeList *getptd_result_2;
  __int64 cached_packed_vector;
  unsigned int dword2_result;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __m128i loaded_word_4;
  __int64 loaded_word_5;
  __int64 loaded_word_6;
  __int64 integer_sum;
  unsigned __int64 table_value;
  __int64 call_result_2;
  _BYTE *loaded_record_pointer_2;
       struct _s_ESTypeList *loaded_record_pointer_3;
  unsigned __int64 *returned_pointer;
  __int64 unused_local;
  struct _s_FuncInfo *packed_word_bits;
  int unrecovered_register_value;
  char selection_flag;
  _BYTE callee_output_word_2[7];
  struct CMFCToolBarImages *saved_loaded_record_pointer;
  int *buffer_cursor;
  __int64 cached_packed_vector_2;
  unsigned __int64 *input_cursor_2;
  int input_value[2];
  unsigned __int64 scaled_index;
  __int64 saved_loaded_word;
  __int64 saved_loaded_word_2[2];
  int unused_written_slot;
  _QWORD scratch_buffer[2];
  __int128 packed_vector;
  __int128 packed_vector_2;
  __int64 unrecovered_register_value_2;
  __int128 pExceptionObject;
  __int64 packed_word_bits_2;
  __int64 unused_local_2;

  input_cursor = a2;
  loaded_record_pointer = a3;
  saved_loaded_record_pointer = a3;
  input_cursor_2 = a2;
  cached_selection_flag = 0;
  *(_QWORD *)input_value = a8;
  callee_output_word_2[0] = 0;
  selection_flag = 0;
  call_result = sub_14020A738(a2, (struct _xDISPATCHER_CONTEXT *)a4, a5);
  callee_output_word = call_result;
  if ( call_result < -1 || call_result >= *((_DWORD *)a5 + 1) )
    goto LABEL_55;
  if ( *(_DWORD *)a1 != -529697949
    || *((_DWORD *)a1 + 6) != 4
    || (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) > 2
    || *((_QWORD *)a1 + 6) )
  {
LABEL_17:
    scratch_buffer[1] = *(_QWORD *)(a4 + 8);
    scratch_buffer[0] = (uint64)(uintptr_t)(a5);
    if ( *(_DWORD *)a1 != -529697949 || *((_DWORD *)a1 + 6) != 4 || (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) > 2 )
    {
      if ( *((_DWORD *)a5 + 3) )
      {
        if ( a6 )
          goto LABEL_55;
        sub_140208AC4(a1, input_cursor, loaded_record_pointer, a4, (__int64)a5, callee_output_word, a7, input_value[0]);
      }
      goto LABEL_51;
    }
    if ( *((_DWORD *)a5 + 3) )
    {
      LODWORD(packed_word_bits) = a7;
      sub_140206E54(&packed_vector_2, (__int64)scratch_buffer, callee_output_word, a4, a5);
      packed_vector = packed_vector_2;
      if ( DWORD2(packed_vector_2) < (unsigned int)unrecovered_register_value_2 )
      {
        cached_packed_vector = packed_vector_2;
        dword2_result = DWORD2(packed_vector);
        cached_packed_vector_2 = packed_vector_2;
        do
        {
          loaded_word_2 = *(_QWORD *)(cached_packed_vector + 8);
          loaded_word_3 = *(int *)(*(_QWORD *)packed_vector + 16LL) + 20LL * dword2_result;
          loaded_word_4 = *(__m128i_u *)(loaded_word_3 + loaded_word_2);
          loaded_word_5 = *(int *)(loaded_word_3 + loaded_word_2 + 16);
          unused_written_slot = *(_DWORD *)(loaded_word_3 + loaded_word_2 + 16);
          *(__m128i_u *)saved_loaded_word_2 = loaded_word_4;
          if ( _mm_cvtsi128_si32(loaded_word_4) <= callee_output_word && callee_output_word <= SHIDWORD(saved_loaded_word_2[0]) )
          {
            loaded_word_6 = *(_QWORD *)(a4 + 8) + loaded_word_5;
            integer_sum = 0;
            table_value = HIDWORD(saved_loaded_word_2[1]);
            saved_loaded_word = loaded_word_6;
            if ( HIDWORD(saved_loaded_word_2[1]) )
            {
              while ( 1 )
              {
                pExceptionObject = *(_OWORD *)(loaded_word_6 + 20 * integer_sum);
                LODWORD(packed_word_bits_2) = *(_DWORD *)(loaded_word_6 + 20 * integer_sum + 16);
                buffer_cursor = (int *)(*(int *)(*((_QWORD *)a1 + 6) + 12LL) + sub_1402075E0() + 4);
                *(_DWORD *)&callee_output_word_2[3] = *(_DWORD *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL));
                if ( *(int *)&callee_output_word_2[3] > 0 )
                  break;
LABEL_29:
                integer_sum = (unsigned int)(integer_sum + 1);
                if ( (_DWORD)integer_sum == (_DWORD)table_value )
                {
                  cached_packed_vector = cached_packed_vector_2;
                  goto LABEL_33;
                }
                loaded_word_6 = saved_loaded_word;
              }
              while ( 1 )
              {
                call_result_2 = sub_1402075E0();
                loaded_record_pointer_2 = *((_BYTE **)a1 + 6);
                scaled_index = *buffer_cursor + call_result_2;
                if ( (unsigned int)sub_140208FCC((__int64)&pExceptionObject, scaled_index, loaded_record_pointer_2) )
                  break;
                ++buffer_cursor;
                --*(_DWORD *)&callee_output_word_2[3];
                if ( *(int *)&callee_output_word_2[3] <= 0 )
                  goto LABEL_29;
              }
              cached_selection_flag = 1;
              LOBYTE(unrecovered_register_value) = callee_output_word_2[0];
              selection_flag = 1;
              sub_140207F1C(
                a1,
                input_cursor_2,
                saved_loaded_record_pointer,
                (struct _xDISPATCHER_CONTEXT *)a4,
                a5,
                (struct _s_HandlerType *)&pExceptionObject,
                scaled_index,
                (int *)saved_loaded_word_2,
                a7,
                input_value[0],
                unrecovered_register_value,
                a6);
              cached_packed_vector = cached_packed_vector_2;
            }
            else
            {
LABEL_33:
              cached_selection_flag = selection_flag;
            }
          }
          ++dword2_result;
        }
        while ( dword2_result < (unsigned int)unrecovered_register_value_2 );
        if ( cached_selection_flag )
        {
LABEL_51:
          if ( !*(_QWORD *)(crt_getptd() + 56) )
            return 0; /* no caller reads the result */
LABEL_55:
          abort();
        }
        input_cursor = input_cursor_2;
      }
    }
    if ( (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930521
      && (*((_DWORD *)a5 + 8) && *((int *)a5 + 8) + sub_1402075CC()
       || (*((_DWORD *)a5 + 9) & 4) != 0 && !sub_140206C98((struct _xDISPATCHER_CONTEXT *)a4, a5)) )
    {
      if ( (*((_DWORD *)a5 + 9) & 4) != 0 )
      {
        *(_QWORD *)(crt_getptd() + 32) = (uint64)(uintptr_t)(a1);
        *(_QWORD *)(crt_getptd() + 40) = (uint64)(uintptr_t)(saved_loaded_record_pointer);
        terminate_sr();
      }
      if ( *((_DWORD *)a5 + 8) )
        loaded_record_pointer_3 = (     struct _s_ESTypeList *)(*((int *)a5 + 8) + sub_1402075CC());
      else
        loaded_record_pointer_3 = nullptr;
      if ( !sub_14020A870(a1, loaded_record_pointer_3) )
      {
        returned_pointer = sub_140206D64(input_cursor, (struct _xDISPATCHER_CONTEXT *)a4, a5, &scaled_index);
        sub_140207130(input_cursor, a1, saved_loaded_record_pointer, returned_pointer, nullptr, a5, -1, -1, nullptr, (struct _xDISPATCHER_CONTEXT *)a4, a6);
      }
    }
    goto LABEL_51;
  }
  if ( *(_QWORD *)(crt_getptd() + 32) )
  {
    a1 = *(struct EHExceptionRecord **)(crt_getptd() + 32);
    getptd_result = crt_getptd();
    loaded_word = *((_QWORD *)a1 + 7);
    callee_output_word_2[0] = 1;
    loaded_record_pointer = *(struct CMFCToolBarImages **)(getptd_result + 40);
    saved_loaded_record_pointer = loaded_record_pointer;
    sub_14020760C(loaded_word);
    if ( *(_DWORD *)a1 == -529697949
      && *((_DWORD *)a1 + 6) == 4
      && (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) <= 2
      && !*((_QWORD *)a1 + 6) )
    {
      goto LABEL_55;
    }
    if ( *(_QWORD *)(crt_getptd() + 56) )
    {
      getptd_result_2 = *(     struct _s_ESTypeList **)(crt_getptd() + 56);
      *(_QWORD *)(crt_getptd() + 56) = 0;
      if ( !sub_14020A870(a1, getptd_result_2) )
      {
        if ( sub_14020A95C(getptd_result_2) )
        {
          sub_1401FD18C((__int64)a1);
          sub_140209928(&pExceptionObject);
          sub_14020B0A4(&pExceptionObject, (_ThrowInfo *)&pThrowInfo);
        }
        terminate_sr();
      }
      loaded_record_pointer = saved_loaded_record_pointer;
    }
    goto LABEL_17;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001402085B4) ----------------------------------------------------
__int64            FindHandler____FrameHandler4(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct FH4__FuncInfo4 *a5,
        char a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 *input_cursor;
  int getptd_result;
  _BYTE *loaded_record_pointer;
  int shifted_bits;
  __int64 getptd_result_2;
  __int64 loaded_word;
       struct _s_ESTypeList *getptd_result_3;
  __int64 cached_packed_vector;
  int iteration_count;
  int remaining_count;
  __int64 call_result;
  _BYTE *loaded_record_pointer_2;
  __int64 masked_bits;
  _BYTE *state_address;
  int shifted_bits_2;
  __int64 masked_bits_2;
  _BYTE *state_address_2;
  int shifted_bits_3;
  __int64 masked_bits_3;
  _DWORD *state_address_3;
  __int64 unused_local;
  struct FH4__FuncInfo4 *unused_written_slot;
  struct sr_anon_94 *packed_word_bits;
  int unrecovered_register_value;
  int unrecovered_register_value_2;
  int integer_sum;
  int saved_masked_bits;
  int table_value;
  int *buffer_cursor;
  unsigned __int64 *input_cursor_2;
  __int64 cached_packed_vector_2;
  int pExceptionObject[6];
  int input_value[2];
  __int128 packed_vector;
  unsigned int unrecovered_register_value_3;
  _OWORD scratch_buffer[2];
  __int64 unused_written_slot_2;
  int scratch_buffer_2[12];
  _DWORD scratch_buffer_3[6];
  __int128 unrecovered_register_value_4;
  __int128 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 unused_local_2;

  input_cursor = a2;
  input_cursor_2 = a2;
  *(_QWORD *)input_value = a8;
  LOWORD(unrecovered_register_value_2) = 0;
  getptd_result = sub_140207820(a5, (struct _xDISPATCHER_CONTEXT *)a4);
  if ( *(_DWORD *)(a4 + 72) )
  {
    if ( *(_DWORD *)(crt_getptd() + 120) != -2 )
      goto LABEL_54;
    getptd_result = *(_DWORD *)(a4 + 72) - 2;
  }
  else if ( *(_DWORD *)(crt_getptd() + 120) != -2 )
  {
    getptd_result = *(_DWORD *)(crt_getptd() + 120);
    *(_DWORD *)(crt_getptd() + 120) = -2;
  }
  if ( getptd_result < -1 )
    goto LABEL_54;
  if ( *((_DWORD *)a5 + 2) )
  {
    loaded_record_pointer = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
    shifted_bits = *(_DWORD *)&loaded_record_pointer[-byte_140284A40[*loaded_record_pointer & 0xF] - 4] >> byte_140284A40[(*loaded_record_pointer & 0xF) + 16];
  }
  else
  {
    shifted_bits = 0;
  }
  if ( getptd_result >= shifted_bits )
    goto LABEL_54;
  if ( *(_DWORD *)a1 != -529697949
    || *((_DWORD *)a1 + 6) != 4
    || (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) > 2
    || *((_QWORD *)a1 + 6) )
  {
LABEL_25:
    sub_1402097C4((FH4__TryBlockMap4 *)scratch_buffer_2, a5, *(_QWORD *)(a4 + 8));
    if ( *(_DWORD *)a1 == -529697949 && *((_DWORD *)a1 + 6) == 4 && (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) <= 2 )
    {
      if ( !scratch_buffer_2[0] )
        goto LABEL_45;
      LODWORD(packed_word_bits) = a7;
      unused_written_slot = a5;
      sub_140206F94(&packed_vector, scratch_buffer_2, getptd_result);
      *(_OWORD *)pExceptionObject = packed_vector;
      if ( DWORD2(packed_vector) >= unrecovered_register_value_3 )
        goto LABEL_45;
      cached_packed_vector = packed_vector;
      cached_packed_vector_2 = packed_vector;
      saved_masked_bits = pExceptionObject[2];
      do
      {
        *(_OWORD *)pExceptionObject = *(_OWORD *)(cached_packed_vector + 24);
        if ( pExceptionObject[0] <= getptd_result && getptd_result <= pExceptionObject[1] )
        {
          sub_14020971C(
            (FH4__HandlerMap4 *)scratch_buffer_3,
            (     struct FH4__TryBlockMapEntry4 *)pExceptionObject,
            *(_QWORD *)(a4 + 8),
            **(_DWORD **)(a4 + 16));
          iteration_count = 0;
          integer_sum = 0;
          table_value = scratch_buffer_3[0];
          if ( scratch_buffer_3[0] )
          {
            while ( 1 )
            {
              scratch_buffer[0] = unrecovered_register_value_4;
              unused_written_slot_2 = unrecovered_register_value_6;
              scratch_buffer[1] = unrecovered_register_value_5;
              buffer_cursor = (int *)(*(int *)(*((_QWORD *)a1 + 6) + 12LL) + sub_1402075E0() + 4);
              remaining_count = *(_DWORD *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL));
              if ( remaining_count > 0 )
                break;
LABEL_38:
              sub_14020A084((FH4__HandlerMap4 *)scratch_buffer_3);
              integer_sum = ++iteration_count;
              if ( iteration_count == table_value )
                goto LABEL_41;
            }
            while ( 1 )
            {
              call_result = *buffer_cursor + sub_1402075E0();
              if ( (unsigned int)sub_14020910C((__int64)scratch_buffer, call_result, *((_BYTE **)a1 + 6)) )
                break;
              ++buffer_cursor;
              if ( --remaining_count <= 0 )
              {
                iteration_count = integer_sum;
                goto LABEL_38;
              }
            }
            LOBYTE(unrecovered_register_value) = unrecovered_register_value_2;
            BYTE1(unrecovered_register_value_2) = 1;
            sub_140207FF0(
              a1,
              input_cursor_2,
              a3,
              (struct _xDISPATCHER_CONTEXT *)a4,
              a5,
              (struct sr_anon_94 *)scratch_buffer,
              call_result,
              pExceptionObject,
              a7,
              input_value[0],
              unrecovered_register_value,
              a6);
LABEL_41:
            cached_packed_vector = cached_packed_vector_2;
          }
        }
        loaded_record_pointer_2 = *(_BYTE **)(cached_packed_vector + 8);
        masked_bits = *loaded_record_pointer_2 & 0xF;
        state_address = &loaded_record_pointer_2[-byte_140284A40[masked_bits]];
        shifted_bits_2 = *((_DWORD *)state_address - 1) >> byte_140284A40[masked_bits + 16];
        *(_QWORD *)(cached_packed_vector + 8) = (uint64)(uintptr_t)(state_address);
        *(_DWORD *)(cached_packed_vector + 24) = shifted_bits_2;
        masked_bits_2 = *state_address & 0xF;
        state_address_2 = &state_address[-byte_140284A40[masked_bits_2]];
        shifted_bits_3 = *((_DWORD *)state_address_2 - 1) >> byte_140284A40[masked_bits_2 + 16];
        *(_QWORD *)(cached_packed_vector + 8) = (uint64)(uintptr_t)(state_address_2);
        *(_DWORD *)(cached_packed_vector + 28) = shifted_bits_3;
        masked_bits_3 = *state_address_2 & 0xF;
        state_address_3 = &state_address_2[-byte_140284A40[masked_bits_3]];
        *(_DWORD *)(cached_packed_vector + 32) = *(state_address_3 - 1) >> byte_140284A40[masked_bits_3 + 16];
        *(_QWORD *)(cached_packed_vector + 8) = (uint64)(uintptr_t)(state_address_3);
        *(_DWORD *)(cached_packed_vector + 36) = *state_address_3;
        LODWORD(masked_bits_3) = saved_masked_bits + 1;
        *(_QWORD *)(cached_packed_vector + 8) = (uint64)(uintptr_t)(state_address_3 + 1);
        saved_masked_bits = masked_bits_3;
      }
      while ( (unsigned int)masked_bits_3 < unrecovered_register_value_3 );
      if ( !BYTE1(unrecovered_register_value_2) )
      {
LABEL_45:
        if ( (*(_BYTE *)a5 & 0x40) != 0 && !sub_140206CC4((struct _xDISPATCHER_CONTEXT *)a4, a5) )
        {
          *(_QWORD *)(crt_getptd() + 32) = (uint64)(uintptr_t)(a1);
          *(_QWORD *)(crt_getptd() + 40) = (uint64)(uintptr_t)(a3);
          terminate_sr();
        }
      }
    }
    else if ( scratch_buffer_2[0] )
    {
      if ( a6 )
        goto LABEL_54;
      sub_140208CDC(a1, input_cursor, a3, a4, a5, getptd_result, a7, a8);
    }
    if ( !*(_QWORD *)(crt_getptd() + 56) )
      return 0; /* no caller reads the result */
LABEL_54:
    abort();
  }
  if ( *(_QWORD *)(crt_getptd() + 32) )
  {
    a1 = *(struct EHExceptionRecord **)(crt_getptd() + 32);
    getptd_result_2 = crt_getptd();
    loaded_word = *((_QWORD *)a1 + 7);
    LOBYTE(unrecovered_register_value_2) = 1;
    a3 = *(struct CMFCToolBarImages **)(getptd_result_2 + 40);
    sub_14020760C(loaded_word);
    if ( *(_DWORD *)a1 == -529697949
      && *((_DWORD *)a1 + 6) == 4
      && (unsigned int)(*((_DWORD *)a1 + 8) - 429065504) <= 2
      && !*((_QWORD *)a1 + 6) )
    {
      goto LABEL_54;
    }
    if ( *(_QWORD *)(crt_getptd() + 56) )
    {
      getptd_result_3 = *(     struct _s_ESTypeList **)(crt_getptd() + 56);
      *(_QWORD *)(crt_getptd() + 56) = 0;
      if ( !sub_14020A870(a1, getptd_result_3) )
      {
        if ( sub_14020A95C(getptd_result_3) )
        {
          sub_1401FD18C((__int64)a1);
          sub_140209928(pExceptionObject);
          sub_14020B0A4(pExceptionObject, (_ThrowInfo *)&pThrowInfo);
        }
        terminate_sr();
      }
      input_cursor = input_cursor_2;
    }
    goto LABEL_25;
  }
  return 0; /* no caller reads the result */
}

//----- (0000000140208AC4) ----------------------------------------------------
__int64            sub_140208AC4(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  __int64 result;
  __int64 int64_result;
  int input_value;
  __int64 cached_packed_vector;
  unsigned int dword2_result;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __m128i loaded_word_3;
  __int64 loaded_word_4;
  unsigned __int64 loaded_word_5;
  __int64 loaded_word_6;
  int unrecovered_register_value;
  _QWORD scratch_buffer[2];
  __int128 packed_vector;
  __int64 saved_loaded_word[2];
  int unused_written_slot;
  __int128 packed_vector_2;
  unsigned int unrecovered_register_value_2;
  __int64 vars8;
  __int64 cached_packed_vector_2;

  result = (__int64)&vars8;
  if ( *(_DWORD *)a1 != -2147483645 )
  {
    if ( !*(_QWORD *)(crt_getptd() + 16)
      || (int64_result = ((__int64 (           *)(_QWORD))EncodePointer)(0), *(_QWORD *)(crt_getptd() + 16) == int64_result)
      || *(_DWORD *)a1 == -532459699 )
    {
      input_value = a7;
    }
    else
    {
      input_value = a7;
      if ( *(_DWORD *)a1 != -532462766 )
      {
        result = sub_1402068D0((unsigned int *)a1, (__int64)a2, (__int64)a3);
        if ( (_DWORD)result )
          return result;
      }
    }
    scratch_buffer[1] = *(_QWORD *)(a4 + 8);
    scratch_buffer[0] = a5;
    if ( !*(_DWORD *)(a5 + 12) )
      abort();
    sub_140206E54(&packed_vector_2, (__int64)scratch_buffer, a6, a4, (struct _s_FuncInfo *)a5);
    packed_vector = packed_vector_2;
    result = DWORD2(packed_vector_2);
    if ( DWORD2(packed_vector_2) < unrecovered_register_value_2 )
    {
      cached_packed_vector = packed_vector_2;
      dword2_result = DWORD2(packed_vector);
      cached_packed_vector_2 = packed_vector_2;
      do
      {
        loaded_word = *(_QWORD *)(cached_packed_vector + 8);
        loaded_word_2 = *(int *)(*(_QWORD *)packed_vector + 16LL) + 20LL * dword2_result;
        loaded_word_3 = *(__m128i_u *)(loaded_word_2 + loaded_word);
        loaded_word_4 = *(int *)(loaded_word_2 + loaded_word + 16);
        unused_written_slot = *(_DWORD *)(loaded_word_2 + loaded_word + 16);
        result = (unsigned int)_mm_cvtsi128_si32(loaded_word_3);
        *(__m128i_u *)saved_loaded_word = loaded_word_3;
        if ( (int)result <= a6 )
        {
          result = HIDWORD(saved_loaded_word[0]);
          if ( a6 <= SHIDWORD(saved_loaded_word[0]) )
          {
            loaded_word_5 = *(_QWORD *)(a4 + 8) + loaded_word_4 + 20 * (HIDWORD(saved_loaded_word[1]) - 1);
            if ( *(_DWORD *)(loaded_word_5 + 4) )
            {
              loaded_word_6 = *(int *)(loaded_word_5 + 4);
              result = loaded_word_6 + sub_1402075CC();
              if ( result )
              {
                result = (_DWORD)loaded_word_6 ? *(int *)(loaded_word_5 + 4) + sub_1402075CC() : 0LL;
                if ( *(_BYTE *)(result + 16) )
                  goto LABEL_23;
              }
              input_value = a7;
            }
            if ( (*(_BYTE *)loaded_word_5 & 0x40) == 0 )
            {
              LOBYTE(unrecovered_register_value) = 1;
              result = sub_140207F1C(
                         a1,
                         a2,
                         a3,
                         (struct _xDISPATCHER_CONTEXT *)a4,
                         (struct _s_FuncInfo *)a5,
                         (struct _s_HandlerType *)loaded_word_5,
                         0,
                         (int *)saved_loaded_word,
                         input_value,
                         a8,
                         unrecovered_register_value,
                         0);
            }
          }
        }
LABEL_23:
        input_value = a7;
        ++dword2_result;
        cached_packed_vector = cached_packed_vector_2;
      }
      while ( dword2_result < unrecovered_register_value_2 );
    }
  }
  return result;
}

// 14026E208: invalid function type 'PVOID (__stdcall *EncodePointer)(PVOID Ptr)' has been ignored

//----- (0000000140208CDC) ----------------------------------------------------
__int64            sub_140208CDC(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct FH4__FuncInfo4 *a5,
        int a6,
        int a7,
        __int64 a8)
{
  bool comparison_result;
  __int64 int64_result;
  __int64 cached_packed_vector;
  int cached_callee_output_word;
  __int64 remaining_count;
  __int64 call_result;
  _BYTE *loaded_record_pointer;
  __int64 masked_bits;
  _BYTE *state_address;
  int shifted_bits;
  __int64 masked_bits_2;
  _BYTE *state_address_2;
  int shifted_bits_2;
  __int64 masked_bits_3;
  _DWORD *state_address_3;
  __int64 unused_local;
  struct FH4__FuncInfo4 *unused_written_slot;
  struct sr_anon_94 *packed_word_bits;
  __int64 unused_written_slot_2;
  __int64 packed_word_bits_2;
  int unrecovered_register_value;
  int saved_masked_bits;
  __int64 cached_packed_vector_2;
  __int64 input_value;
  struct CMFCToolBarImages *input_cursor;
  __int64 loaded_word[2];
  __int128 packed_vector;
  unsigned int unrecovered_register_value_2;
  int callee_output_word;
  __int64 unused_written_slot_3;
  __int64 unrecovered_register_value_3;
  _BYTE scratch_buffer[8];
  int unrecovered_register_value_4;
  int scratch_buffer_2[10];
  __int64 unused_local_2;

  comparison_result = *(_DWORD *)a1 == -2147483645;
  input_value = a8;
  input_cursor = a3;
  if ( !comparison_result )
  {
    if ( !*(_QWORD *)(crt_getptd() + 16)
      || (int64_result = ((__int64 (           *)(_QWORD))EncodePointer)(0), *(_QWORD *)(crt_getptd() + 16) == int64_result)
      || *(_DWORD *)a1 == -532459699
      || *(_DWORD *)a1 == -532462766
      || (LODWORD(packed_word_bits_2) = a6,
          unused_written_slot_2 = input_value,
          LODWORD(packed_word_bits) = a7,
          unused_written_slot = a5,
          !(unsigned int)sub_140206924((unsigned int *)a1, (__int64)a2, (__int64)input_cursor)) )
    {
      sub_1402097C4((FH4__TryBlockMap4 *)scratch_buffer_2, a5, *(_QWORD *)(a4 + 8));
      if ( !scratch_buffer_2[0] )
        abort();
      LODWORD(packed_word_bits) = a7;
      unused_written_slot = a5;
      sub_140206F94(&packed_vector, scratch_buffer_2, a6);
      *(_OWORD *)loaded_word = packed_vector;
      if ( DWORD2(packed_vector) < unrecovered_register_value_2 )
      {
        cached_packed_vector = packed_vector;
        cached_packed_vector_2 = packed_vector;
        saved_masked_bits = loaded_word[1];
        do
        {
          *(_OWORD *)loaded_word = *(_OWORD *)(cached_packed_vector + 24);
          if ( SLODWORD(loaded_word[0]) <= a6 && a6 <= SHIDWORD(loaded_word[0]) )
          {
            sub_14020971C(
              (FH4__HandlerMap4 *)&callee_output_word,
              (     struct FH4__TryBlockMapEntry4 *)loaded_word,
              *(_QWORD *)(a4 + 8),
              **(_DWORD **)(a4 + 16));
            unused_written_slot_3 = unrecovered_register_value_3;
            sub_14020A084((FH4__HandlerMap4 *)&callee_output_word);
            cached_callee_output_word = callee_output_word;
            unused_written_slot_3 = unrecovered_register_value_3;
            sub_14020A084((FH4__HandlerMap4 *)&callee_output_word);
            remaining_count = (unsigned int)(cached_callee_output_word - 1);
            if ( (_DWORD)remaining_count )
            {
              do
              {
                sub_14020A084((FH4__HandlerMap4 *)&callee_output_word);
                --remaining_count;
              }
              while ( remaining_count );
            }
            if ( !unrecovered_register_value_4
              || !(unrecovered_register_value_4 + sub_1402075CC())
              || (!unrecovered_register_value_4 ? (call_result = 0) : (call_result = unrecovered_register_value_4 + sub_1402075CC()), !*(_BYTE *)(call_result + 16)) )
            {
              if ( (scratch_buffer[4] & 0x40) == 0 )
              {
                LOBYTE(unrecovered_register_value) = 1;
                sub_140207FF0(
                  a1,
                  a2,
                  input_cursor,
                  (struct _xDISPATCHER_CONTEXT *)a4,
                  a5,
                  (struct sr_anon_94 *)scratch_buffer,
                  0,
                  (int *)loaded_word,
                  a7,
                  input_value,
                  unrecovered_register_value,
                  0);
              }
            }
            cached_packed_vector = cached_packed_vector_2;
          }
          loaded_record_pointer = *(_BYTE **)(cached_packed_vector + 8);
          masked_bits = *loaded_record_pointer & 0xF;
          state_address = &loaded_record_pointer[-byte_140284A40[masked_bits]];
          shifted_bits = *((_DWORD *)state_address - 1) >> byte_140284A40[masked_bits + 16];
          *(_QWORD *)(cached_packed_vector + 8) = (uint64)(uintptr_t)(state_address);
          *(_DWORD *)(cached_packed_vector + 24) = shifted_bits;
          masked_bits_2 = *state_address & 0xF;
          state_address_2 = &state_address[-byte_140284A40[masked_bits_2]];
          shifted_bits_2 = *((_DWORD *)state_address_2 - 1) >> byte_140284A40[masked_bits_2 + 16];
          *(_QWORD *)(cached_packed_vector + 8) = (uint64)(uintptr_t)(state_address_2);
          *(_DWORD *)(cached_packed_vector + 28) = shifted_bits_2;
          masked_bits_3 = *state_address_2 & 0xF;
          state_address_3 = &state_address_2[-byte_140284A40[masked_bits_3]];
          *(_DWORD *)(cached_packed_vector + 32) = *(state_address_3 - 1) >> byte_140284A40[masked_bits_3 + 16];
          *(_QWORD *)(cached_packed_vector + 8) = (uint64)(uintptr_t)(state_address_3);
          *(_DWORD *)(cached_packed_vector + 36) = *state_address_3;
          LODWORD(masked_bits_3) = saved_masked_bits + 1;
          *(_QWORD *)(cached_packed_vector + 8) = (uint64)(uintptr_t)(state_address_3 + 1);
          saved_masked_bits = masked_bits_3;
        }
        while ( (unsigned int)masked_bits_3 < unrecovered_register_value_2 );
      }
    }
  }
  return 0; /* no caller reads the result */
}

// 14026E208: invalid function type 'PVOID (__stdcall *EncodePointer)(PVOID Ptr)' has been ignored

//----- (0000000140208FCC) ----------------------------------------------------
__int64            sub_140208FCC(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int unused_written_slot;
  __int64 loaded_word;
  __int64 packed_word_bits;
  __int64 call_result;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  unsigned __int8 *buffer_cursor;
  __int64 integer_difference;
  int table_value;
  int scaled_index;

  unused_written_slot = 0;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  loaded_word = *(int *)(a1 + 4);
  if ( !(loaded_word + sub_1402075CC()) )
    return 1;
  if ( (_DWORD)loaded_word )
  {
    packed_word_bits = *(int *)(a1 + 4);
    call_result = packed_word_bits + sub_1402075CC();
  }
  else
  {
    call_result = 0;
    LODWORD(packed_word_bits) = 0;
  }
  if ( !*(_BYTE *)(call_result + 16) || *(char *)a1 < 0 && (*(_BYTE *)a2 & 0x10) != 0 )
    return 1;
  if ( (_DWORD)packed_word_bits )
    loaded_word_2 = *(int *)(a1 + 4) + sub_1402075CC();
  else
    loaded_word_2 = 0;
  if ( loaded_word_2 != *(int *)(a2 + 4) + sub_1402075E0() )
  {
    loaded_word_3 = *(_DWORD *)(a1 + 4) ? *(int *)(a1 + 4) + sub_1402075CC() : 0LL;
    loaded_word_4 = sub_1402075E0() + *(int *)(a2 + 4) + 16LL;
    buffer_cursor = (unsigned __int8 *)(loaded_word_3 + 16);
    integer_difference = loaded_word_4 - (loaded_word_3 + 16);
    do
    {
      table_value = buffer_cursor[integer_difference];
      scaled_index = *buffer_cursor - table_value;
      if ( scaled_index )
        break;
      ++buffer_cursor;
    }
    while ( table_value );
    if ( scaled_index )
      return 0;
  }
  if ( ((*(_BYTE *)a2 & 2) == 0 || (*(_BYTE *)a1 & 8) != 0)
    && ((*a3 & 1) == 0 || (*(_BYTE *)a1 & 1) != 0)
    && ((*a3 & 4) == 0 || (*(_BYTE *)a1 & 4) != 0)
    && ((*a3 & 2) == 0 || (*(_BYTE *)a1 & 2) != 0) )
  {
    return 1;
  }
  return unused_written_slot;
}

//----- (000000014020910C) ----------------------------------------------------
__int64            sub_14020910C(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int unused_written_slot;
  __int64 loaded_word;
  __int64 packed_word_bits;
  __int64 call_result;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  unsigned __int8 *buffer_cursor;
  __int64 integer_difference;
  int table_value;
  int scaled_index;

  unused_written_slot = 0;
  if ( !*(_DWORD *)(a1 + 8) )
    return 1;
  loaded_word = *(int *)(a1 + 8);
  if ( !(loaded_word + sub_1402075CC()) )
    return 1;
  if ( (_DWORD)loaded_word )
  {
    packed_word_bits = *(int *)(a1 + 8);
    call_result = packed_word_bits + sub_1402075CC();
  }
  else
  {
    call_result = 0;
    LODWORD(packed_word_bits) = 0;
  }
  if ( !*(_BYTE *)(call_result + 16) || *(char *)(a1 + 4) < 0 && (*(_BYTE *)a2 & 0x10) != 0 )
    return 1;
  if ( (_DWORD)packed_word_bits )
    loaded_word_2 = *(int *)(a1 + 8) + sub_1402075CC();
  else
    loaded_word_2 = 0;
  if ( loaded_word_2 != *(int *)(a2 + 4) + sub_1402075E0() )
  {
    loaded_word_3 = *(_DWORD *)(a1 + 8) ? *(int *)(a1 + 8) + sub_1402075CC() : 0LL;
    loaded_word_4 = sub_1402075E0() + *(int *)(a2 + 4) + 16LL;
    buffer_cursor = (unsigned __int8 *)(loaded_word_3 + 16);
    integer_difference = loaded_word_4 - (loaded_word_3 + 16);
    do
    {
      table_value = buffer_cursor[integer_difference];
      scaled_index = *buffer_cursor - table_value;
      if ( scaled_index )
        break;
      ++buffer_cursor;
    }
    while ( table_value );
    if ( scaled_index )
      return 0;
  }
  if ( ((*(_BYTE *)a2 & 2) == 0 || (*(_BYTE *)(a1 + 4) & 8) != 0)
    && ((*a3 & 1) == 0 || (*(_BYTE *)(a1 + 4) & 1) != 0)
    && ((*a3 & 4) == 0 || (*(_BYTE *)(a1 + 4) & 4) != 0)
    && ((*a3 & 2) == 0 || (*(_BYTE *)(a1 + 4) & 2) != 0) )
  {
    return 1;
  }
  return unused_written_slot;
}

//----- (0000000140209250) ----------------------------------------------------
__int64            sub_140209250(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct _s_FuncInfo *a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8)
{
  bool comparison_result;
  int loaded_word;
  int loaded_word_2;
  unsigned __int64 *loaded_record_pointer;
  __int64 (           *callback_function)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct _s_FuncInfo *, int, __int64, _DWORD);

  sub_1401FDACC((__int64)a3);
  if ( *(_DWORD *)(crt_getptd() + 64) || *(_DWORD *)a1 == -529697949 )
    goto LABEL_10;
  if ( *(_DWORD *)a1 != -2147483607 )
  {
    comparison_result = *(_DWORD *)a1 == -2147483610;
LABEL_7:
    if ( comparison_result )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( *((_DWORD *)a1 + 6) == 15 )
  {
    comparison_result = *((_QWORD *)a1 + 12) == 429065504;
    goto LABEL_7;
  }
LABEL_8:
  if ( (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930522 && (*((_BYTE *)a5 + 36) & 1) != 0 )
    return 1;
LABEL_10:
  if ( (*((_BYTE *)a1 + 4) & 0x66) != 0 )
  {
    if ( !*((_DWORD *)a5 + 1) || a6 )
      return 1;
    if ( (*((_BYTE *)a1 + 4) & 0x20) != 0 )
    {
      if ( *(_DWORD *)a1 == -2147483610 )
      {
        loaded_word = sub_140207828(a5, (struct _xDISPATCHER_CONTEXT *)a4, *(_QWORD *)(a4 + 32));
        if ( loaded_word >= -1 && loaded_word < *((_DWORD *)a5 + 1) )
        {
          loaded_word_2 = loaded_word;
          loaded_record_pointer = a2;
LABEL_18:
          sub_14020A2C4(loaded_record_pointer, (struct _xDISPATCHER_CONTEXT *)a4, a5, loaded_word_2);
          return 1;
        }
        goto LABEL_38;
      }
      if ( *(_DWORD *)a1 == -2147483607 )
      {
        loaded_word_2 = *((_DWORD *)a1 + 14);
        if ( loaded_word_2 >= -1 && loaded_word_2 < *((_DWORD *)a5 + 1) )
        {
          loaded_record_pointer = *((unsigned __int64 **)a1 + 5);
          goto LABEL_18;
        }
LABEL_38:
        abort();
      }
    }
    sub_140206CCC(a2, (struct _xDISPATCHER_CONTEXT *)a4, a5);
    return 1;
  }
  if ( *((_DWORD *)a5 + 3)
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930521 && *((_DWORD *)a5 + 8) && *((int *)a5 + 8) + sub_1402075CC()
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930522 && (*((_DWORD *)a5 + 9) & 4) != 0 )
  {
    if ( *(_DWORD *)a1 == -529697949 && *((_DWORD *)a1 + 6) >= 3u && *((_DWORD *)a1 + 8) > 0x19930522u )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 6) + 8LL) )
      {
        callback_function = (__int64 (           *)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct _s_FuncInfo *, int, __int64, _DWORD))(*(int *)(*((_QWORD *)a1 + 6) + 8LL) + sub_1402075E0());
        if ( callback_function )
          return callback_function(a1, a2, a3, a4, a5, a6, a7, a8);
      }
    }
    sub_1402080C4(a1, a2, a3, a4, a5, a8, a6, a7);
  }
  return 1;
}

//----- (0000000140209488) ----------------------------------------------------
__int64            sub_140209488(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct FH4__FuncInfo4 *a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8)
{
  signed int shifted_bits;
  _BYTE *loaded_record_pointer;
  signed int loaded_word;
  _BYTE *loaded_record_pointer_2;
  unsigned __int64 *loaded_record_pointer_3;
  _BYTE *loaded_record_pointer_4;
  __int64 (           *callback_function)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct FH4__FuncInfo4 *, int, __int64, _DWORD);
  _DWORD scratch_buffer[12];

  sub_1401FDACC((__int64)a3);
  shifted_bits = 0;
  if ( !*(_DWORD *)(crt_getptd() + 64) && *(_DWORD *)a1 != -529697949 )
  {
    if ( *(_DWORD *)a1 != -2147483607 )
      goto LABEL_6;
    if ( *((_DWORD *)a1 + 6) != 15 )
      goto LABEL_7;
    if ( *((_QWORD *)a1 + 12) != 429065504 )
    {
LABEL_6:
      if ( *(_DWORD *)a1 != -2147483610 )
      {
LABEL_7:
        if ( (*(_BYTE *)a5 & 0x20) != 0 )
          return 1;
      }
    }
  }
  if ( (*((_BYTE *)a1 + 4) & 0x66) != 0 )
  {
    if ( !*((_DWORD *)a5 + 2) )
      return 1;
    loaded_record_pointer = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
    if ( !(*(_DWORD *)&loaded_record_pointer[-byte_140284A40[*loaded_record_pointer & 0xF] - 4] >> byte_140284A40[(*loaded_record_pointer & 0xF) + 16]) || a6 )
      return 1;
    if ( (*((_BYTE *)a1 + 4) & 0x20) != 0 )
    {
      if ( *(_DWORD *)a1 == -2147483610 )
      {
        loaded_word = sub_140207890(a5, (struct _xDISPATCHER_CONTEXT *)a4, *(_QWORD *)(a4 + 32));
        if ( loaded_word >= -1 )
        {
          if ( *((_DWORD *)a5 + 2) )
          {
            loaded_record_pointer_2 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
            shifted_bits = *(_DWORD *)&loaded_record_pointer_2[-byte_140284A40[*loaded_record_pointer_2 & 0xF] - 4] >> byte_140284A40[(*loaded_record_pointer_2 & 0xF) + 16];
          }
          if ( loaded_word < shifted_bits )
          {
            loaded_record_pointer_3 = a2;
LABEL_19:
            sub_14020A450(loaded_record_pointer_3, (struct _xDISPATCHER_CONTEXT *)a4, a5, loaded_word);
            return 1;
          }
        }
        goto LABEL_35;
      }
      if ( *(_DWORD *)a1 == -2147483607 )
      {
        loaded_word = *((_DWORD *)a1 + 14);
        if ( loaded_word >= -1 )
        {
          loaded_record_pointer_4 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
          if ( loaded_word < *(_DWORD *)&loaded_record_pointer_4[-byte_140284A40[*loaded_record_pointer_4 & 0xF] - 4] >> byte_140284A40[(*loaded_record_pointer_4 & 0xF) + 16] )
          {
            loaded_record_pointer_3 = *((unsigned __int64 **)a1 + 5);
            goto LABEL_19;
          }
        }
LABEL_35:
        abort();
      }
    }
    sub_140206D30(a2, (struct _xDISPATCHER_CONTEXT *)a4, a5);
    return 1;
  }
  sub_1402097C4((FH4__TryBlockMap4 *)scratch_buffer, a5, *(_QWORD *)(a4 + 8));
  if ( scratch_buffer[0] || (*(_BYTE *)a5 & 0x40) != 0 )
  {
    if ( *(_DWORD *)a1 == -529697949 && *((_DWORD *)a1 + 6) >= 3u && *((_DWORD *)a1 + 8) > 0x19930522u )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 6) + 8LL) )
      {
        callback_function = (__int64 (           *)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct FH4__FuncInfo4 *, int, __int64, _DWORD))(*(int *)(*((_QWORD *)a1 + 6) + 8LL) + sub_1402075E0());
        if ( callback_function )
          return callback_function(a1, a2, a3, a4, a5, a6, a7, a8);
      }
    }
    FindHandler____FrameHandler4(a1, a2, a3, a4, a5, a8, a6, a7);
  }
  return 1;
}

//----- (000000014020971C) ----------------------------------------------------
FH4__HandlerMap4 *           sub_14020971C(
        FH4__HandlerMap4 *this,
             struct FH4__TryBlockMapEntry4 *a2,
        __int64 a3,
        int a4)
{
  _BYTE *loaded_record_pointer;
  __int64 masked_bits;
  _BYTE *state_address;
  int shifted_bits;

  *((_BYTE *)this + 24) = 0;
  *(_QWORD *)((char *)this + 28) = 0;
  *(_QWORD *)((char *)this + 36) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_QWORD *)this + 8) = a3;
  *((_DWORD *)this + 18) = a4;
  if ( *((_DWORD *)a2 + 3) )
  {
    loaded_record_pointer = (_BYTE *)(a3 + *((int *)a2 + 3));
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(loaded_record_pointer);
    masked_bits = *loaded_record_pointer & 0xF;
    state_address = &loaded_record_pointer[-byte_140284A40[masked_bits]];
    shifted_bits = *((_DWORD *)state_address - 1) >> byte_140284A40[masked_bits + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(state_address);
    *(_DWORD *)this = shifted_bits;
    *((_QWORD *)this + 2) = (uint64)(uintptr_t)(state_address);
    sub_14020A084(this);
  }
  else
  {
    *(_DWORD *)this = 0;
  }
  return this;
}

//----- (00000001402097C4) ----------------------------------------------------
FH4__TryBlockMap4 *           sub_1402097C4(FH4__TryBlockMap4 *this,      struct FH4__FuncInfo4 *a2, __int64 a3)
{
  _BYTE *loaded_record_pointer;
  __int64 masked_bits;
  _BYTE *state_address;
  int shifted_bits;
  __int64 masked_bits_2;
  _BYTE *state_address_2;
  int shifted_bits_2;
  __int64 masked_bits_3;
  _BYTE *state_address_3;
  int shifted_bits_3;
  __int64 masked_bits_4;
  _DWORD *state_address_4;

  if ( *((_DWORD *)a2 + 3) )
  {
    loaded_record_pointer = (_BYTE *)(a3 + *((int *)a2 + 3));
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(loaded_record_pointer);
    masked_bits = *loaded_record_pointer & 0xF;
    state_address = &loaded_record_pointer[-byte_140284A40[masked_bits]];
    shifted_bits = *((_DWORD *)state_address - 1) >> byte_140284A40[masked_bits + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(state_address);
    *(_DWORD *)this = shifted_bits;
    *((_QWORD *)this + 2) = (uint64)(uintptr_t)(state_address);
    masked_bits_2 = *state_address & 0xF;
    state_address_2 = &state_address[-byte_140284A40[masked_bits_2]];
    shifted_bits_2 = *((_DWORD *)state_address_2 - 1) >> byte_140284A40[masked_bits_2 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(state_address_2);
    *((_DWORD *)this + 6) = shifted_bits_2;
    masked_bits_3 = *state_address_2 & 0xF;
    state_address_3 = &state_address_2[-byte_140284A40[masked_bits_3]];
    shifted_bits_3 = *((_DWORD *)state_address_3 - 1) >> byte_140284A40[masked_bits_3 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(state_address_3);
    *((_DWORD *)this + 7) = shifted_bits_3;
    masked_bits_4 = *state_address_3 & 0xF;
    state_address_4 = &state_address_3[-byte_140284A40[masked_bits_4]];
    *((_DWORD *)this + 8) = *(state_address_4 - 1) >> byte_140284A40[masked_bits_4 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(state_address_4);
    LODWORD(masked_bits_4) = *state_address_4;
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(state_address_4 + 1);
    *((_DWORD *)this + 9) = masked_bits_4;
  }
  else
  {
    *(_DWORD *)this = 0;
  }
  return this;
}

//----- (00000001402098EC) ----------------------------------------------------
__int64            sub_1402098EC(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140284BA0);
  *(_OWORD *)(a1 + 8) = 0;
  sub_14020AFEC(a2 + 8, a1 + 8);
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140284BD0);
  return a1;
}

//----- (0000000140209928) ----------------------------------------------------
_QWORD *           sub_140209928(_QWORD *a1)
{
  a1[2] = 0;
  a1[1] = (uint64)(uintptr_t)("bad exception");
  *a1 = (uint64)(uintptr_t)(&off_140284BD0);
  return a1;
}

//----- (0000000140209948) ----------------------------------------------------
std__exception *           sub_140209948(std__exception *this,      struct std__exception *a2)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(&off_140284BA0);
  *(_OWORD *)((char *)this + 8) = 0;
  sub_14020AFEC((__int64)a2 + 8, (__int64)this + 8);
  return this;
}

//----- (0000000140209A18) ----------------------------------------------------
bool            sub_140209A18(__int64 a1, __int64 a2)
{
  return (unsigned int)sub_1401FD570(a1 + 8, a2 + 8) == 0;
}

//----- (0000000140209AC0) ----------------------------------------------------
_OWORD *           sub_140209AC0(__int64 a1, _OWORD *a2)
{
  _QWORD *unused_written_slot;
  __int64 loaded_word;
  FH4__UWMap4 *loaded_word_2;
  __int128 loaded_word_3;

  unused_written_slot = (_QWORD *)(a1 + 8);
  loaded_word = *(_QWORD *)(a1 + 8);
  sub_14020A9E4(*(FH4__UWMap4 **)a1, (unsigned __int8 **)(a1 + 8));
  loaded_word_2 = *(FH4__UWMap4 **)a1;
  *unused_written_slot = loaded_word;
  loaded_word_3 = *((_OWORD *)loaded_word_2 + 1);
  *a2 = loaded_word_3;
  return a2;
}

//----- (0000000140209B14) ----------------------------------------------------
__int64            sub_140209B14(__int64 a1)
{
  sub_14020A084(*(FH4__HandlerMap4 **)a1);
  ++*(_DWORD *)(a1 + 8);
  return a1;
}

//----- (0000000140209B44) ----------------------------------------------------
__int64            sub_140209B44(__int64 a1)
{
  sub_14020A9E4(*(FH4__UWMap4 **)a1, (unsigned __int8 **)(a1 + 8));
  return a1;
}

//----- (0000000140209BA0) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
CMenuHash *           CMenuHash___scalar_deleting_destructor_(CMenuHash *this, char a2)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(&off_140284BA0);
  sub_14020B07C((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    j_j_free(this);
  return this;
}

//----- (0000000140209BE4) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
CMenuHash *           CMenuHash___scalar_deleting_destructor__dup2(CMenuHash *this, char a2)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(&off_140284BA0);
  sub_14020B07C((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    j_j_free(this);
  return this;
}

//----- (0000000140209C48) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_140209C48(_QWORD *a1)
{
  __int64 getptd_result;
  __int64 table_value;
  __int64 table_value_2;
  _QWORD *table_value_3;
  __int64 getptd_result_2;
  _QWORD *loaded_record_pointer;
  __int64 unused_written_slot;
  __int64 table_value_4;
  __int64 table_value_5;
  _QWORD scratch_buffer[9];
  __int64 getptd_result_3;

  getptd_result = *(_QWORD *)(crt_getptd() + 40);
  getptd_result_3 = *(_QWORD *)(crt_getptd() + 32);
  table_value = a1[10];
  table_value_4 = a1[9];
  table_value_2 = a1[8];
  table_value_5 = a1[6];
  table_value_3 = (_QWORD *)a1[5];
  sub_1401FDACC(table_value_2);
  *(_QWORD *)(crt_getptd() + 32) = table_value;
  *(_QWORD *)(crt_getptd() + 40) = table_value_2;
  getptd_result_2 = crt_getptd();
  loaded_record_pointer = sub_14020753C(scratch_buffer, *(_QWORD *)(*(_QWORD *)(getptd_result_2 + 32) + 40LL));
  if ( a1[11] )
    crt_getptd();
  unused_written_slot = sub_14020AE90(table_value_5, table_value_3, 256);
  sub_140207578((__int64)loaded_record_pointer);
  if ( *(_DWORD *)table_value == -529697949
    && *(_DWORD *)(table_value + 24) == 4
    && (unsigned int)(*(_DWORD *)(table_value + 32) - 429065504) <= 2
    && (unsigned int)sub_1401FD260(*(_QWORD *)(table_value + 40)) )
  {
    sub_1401FD18C(table_value);
  }
  *(_QWORD *)(crt_getptd() + 32) = getptd_result_3;
  *(_QWORD *)(crt_getptd() + 40) = getptd_result;
  *(_QWORD *)(*(int *)(table_value_4 + 28) + *table_value_3) = -2;
  return unused_written_slot;
}

// 140209D15: ignored the value written to the shadow area of the succeeding call

//----- (0000000140209E34) ----------------------------------------------------
__int64            sub_140209E34(struct _EXCEPTION_RECORD *a1)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  _QWORD *loaded_record_pointer;
  __int64 getptd_result;
  _QWORD *loaded_record_pointer_2;
  __int64 call_result;
  __int64 table_value;
  __int64 getptd_result_2;
  __int64 getptd_result_3;
  __int64 loaded_word_3;
  _QWORD scratch_buffer[3];
  __int64 scratch_buffer_2[10];
  int loaded_word_4;

  getptd_result_3 = *(_QWORD *)(crt_getptd() + 40);
  getptd_result_2 = *(_QWORD *)(crt_getptd() + 32);
  loaded_word = *((_QWORD *)a1 + 10);
  loaded_word_2 = *((_QWORD *)a1 + 8);
  loaded_word_3 = *((_QWORD *)a1 + 6);
  loaded_record_pointer = *((_QWORD **)a1 + 5);
  scratch_buffer[0] = *((_QWORD *)a1 + 9);
  scratch_buffer[1] = *((_QWORD *)a1 + 13);
  loaded_word_4 = *((_DWORD *)a1 + 14);
  sub_1401FDACC(loaded_word_2);
  *(_QWORD *)(crt_getptd() + 32) = loaded_word;
  *(_QWORD *)(crt_getptd() + 40) = loaded_word_2;
  getptd_result = crt_getptd();
  loaded_record_pointer_2 = sub_14020753C(scratch_buffer_2, *(_QWORD *)(*(_QWORD *)(getptd_result + 32) + 40LL));
  if ( *((_QWORD *)a1 + 11) )
    crt_getptd();
  call_result = sub_14020AEE0(loaded_word_3, loaded_record_pointer, 256);
  table_value = call_result;
  if ( call_result < 2 )
  {
    table_value = scratch_buffer[call_result];
    if ( !table_value )
      abort();
  }
  sub_14020AF10(table_value, loaded_record_pointer);
  sub_140207578((__int64)loaded_record_pointer_2);
  if ( *(_DWORD *)loaded_word == -529697949
    && *(_DWORD *)(loaded_word + 24) == 4
    && (unsigned int)(*(_DWORD *)(loaded_word + 32) - 429065504) <= 2
    && (unsigned int)sub_1401FD260(*(_QWORD *)(loaded_word + 40)) )
  {
    sub_1401FD18C(loaded_word);
  }
  *(_QWORD *)(crt_getptd() + 32) = getptd_result_2;
  *(_QWORD *)(crt_getptd() + 40) = getptd_result_3;
  *(_DWORD *)(crt_getptd() + 120) = loaded_word_4;
  *(_DWORD *)(crt_getptd() + 120) = -2;
  return table_value;
}

// 140209F31: ignored the value written to the shadow area of the succeeding call

//----- (000000014020A084) ----------------------------------------------------
char            sub_14020A084(FH4__HandlerMap4 *this)
{
  char *loaded_record_pointer;
  char input_byte;
  _BYTE *record_byte_offset;
  __int64 masked_bits;
  int loaded_word;
  __int64 masked_bits_2;
  int *record_pointer;
  __int64 shifted_bits;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 masked_bits_3;
  char *table_value;
  int loaded_word_4;
  __int64 masked_bits_4;
  _BYTE *table_value_2;
  int shifted_bits_2;
  __int64 masked_bits_5;
  _BYTE *state_address;

  *((_BYTE *)this + 24) = 0;
  *(_QWORD *)((char *)this + 28) = 0;
  *(_QWORD *)((char *)this + 36) = 0;
  *((_OWORD *)this + 3) = 0;
  loaded_record_pointer = *((char **)this + 1);
  input_byte = *loaded_record_pointer;
  record_byte_offset = loaded_record_pointer + 1;
  *((_BYTE *)this + 24) = *loaded_record_pointer;
  *((_QWORD *)this + 1) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( (input_byte & 1) != 0 )
  {
    masked_bits = *record_byte_offset & 0xF;
    record_byte_offset -= byte_140284A40[masked_bits];
    *((_DWORD *)this + 7) = *((_DWORD *)record_byte_offset - 1) >> byte_140284A40[masked_bits + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(record_byte_offset);
  }
  if ( (input_byte & 2) != 0 )
  {
    loaded_word = *(_DWORD *)record_byte_offset;
    record_byte_offset += 4;
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(record_byte_offset);
    *((_DWORD *)this + 8) = loaded_word;
  }
  if ( (input_byte & 4) != 0 )
  {
    masked_bits_2 = *record_byte_offset & 0xF;
    record_byte_offset -= byte_140284A40[masked_bits_2];
    *((_DWORD *)this + 9) = *((_DWORD *)record_byte_offset - 1) >> byte_140284A40[masked_bits_2 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(record_byte_offset);
  }
  record_pointer = (int *)(record_byte_offset + 4);
  *((_DWORD *)this + 10) = *(_DWORD *)record_byte_offset;
  LOBYTE(shifted_bits) = input_byte & 0x30;
  *((_QWORD *)this + 1) = (uint64)(uintptr_t)(record_byte_offset + 4);
  if ( (input_byte & 8) == 0 )
  {
    if ( (_BYTE)shifted_bits == 16 )
    {
      masked_bits_3 = *(_BYTE *)record_pointer & 0xF;
      table_value = (char *)record_pointer - byte_140284A40[masked_bits_3];
      shifted_bits = (unsigned int)((*((_DWORD *)table_value - 1) >> byte_140284A40[masked_bits_3 + 16]) + *((_DWORD *)this + 18));
      *((_QWORD *)this + 1) = (uint64)(uintptr_t)(table_value);
      *((_QWORD *)this + 6) = shifted_bits;
      return shifted_bits;
    }
    if ( (_BYTE)shifted_bits != 32 )
      return shifted_bits;
    loaded_word_4 = *((_DWORD *)this + 18);
    masked_bits_4 = *(_BYTE *)record_pointer & 0xF;
    table_value_2 = (char *)record_pointer - byte_140284A40[masked_bits_4];
    shifted_bits_2 = *((_DWORD *)table_value_2 - 1) >> byte_140284A40[masked_bits_4 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(table_value_2);
    *((_QWORD *)this + 6) = (unsigned int)(loaded_word_4 + shifted_bits_2);
    masked_bits_5 = *table_value_2 & 0xF;
    state_address = &table_value_2[-byte_140284A40[masked_bits_5]];
    LODWORD(shifted_bits) = *((_DWORD *)state_address - 1) >> byte_140284A40[masked_bits_5 + 16];
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(state_address);
    loaded_word_3 = (unsigned int)(loaded_word_4 + shifted_bits);
    goto LABEL_16;
  }
  if ( (_BYTE)shifted_bits != 16 )
  {
    if ( (_BYTE)shifted_bits != 32 )
      return shifted_bits;
    shifted_bits = *record_pointer;
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(record_byte_offset + 8);
    *((_QWORD *)this + 6) = shifted_bits;
    LOBYTE(shifted_bits) = (_BYTE)record_byte_offset + 12;
    loaded_word_3 = *((int *)record_byte_offset + 2);
    *((_QWORD *)this + 1) = (uint64)(uintptr_t)(record_byte_offset + 12);
LABEL_16:
    *((_QWORD *)this + 7) = loaded_word_3;
    return shifted_bits;
  }
  loaded_word_2 = *record_pointer;
  *((_QWORD *)this + 1) = (uint64)(uintptr_t)(record_byte_offset + 8);
  *((_QWORD *)this + 6) = loaded_word_2;
  LOBYTE(shifted_bits) = (_BYTE)record_byte_offset + 8;
  return shifted_bits;
}

//----- (000000014020A20C) ----------------------------------------------------
__int64            sub_14020A20C(struct _EXCEPTION_POINTERS *a1, struct EHExceptionRecord *a2, int *a3)
{
  __int64 loaded_word;

  loaded_word = *(_QWORD *)a1;
  *a3 = 0;
  if ( *(_DWORD *)loaded_word != -529697949 )
    return 0;
  if ( *(_DWORD *)(loaded_word + 24) != 4 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(loaded_word + 32) - 429065504) <= 2 && *(_QWORD *)(loaded_word + 40) == *((_QWORD *)a2 + 5) )
  {
    *a3 = 1;
    if ( *(_DWORD *)loaded_word != -529697949 )
      return 0;
  }
  if ( *(_DWORD *)(loaded_word + 24) != 4 || (unsigned int)(*(_DWORD *)(loaded_word + 32) - 429065504) > 2 || *(_QWORD *)(loaded_word + 48) )
    return 0;
  *(_DWORD *)(crt_getptd() + 64) = 1;
  *a3 = 1;
  return 1;
}

//----- (000000014020A294) ----------------------------------------------------
__int64            sub_14020A294(struct _EXCEPTION_POINTERS *a1, struct EHExceptionRecord *a2, int a3, int *a4)
{
  unsigned int call_result;

  call_result = sub_14020A20C(a1, a2, a4);
  if ( !call_result )
    *(_DWORD *)(crt_getptd() + 120) = a3;
  return call_result;
}

//----- (000000014020A2C4) ----------------------------------------------------
void            sub_14020A2C4(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
             struct _s_FuncInfo *a3,
        int a4)
{
  __int64 call_result;
  int loaded_word;
  __int64 getptd_result;
  __int64 saved_loaded_word;
  __int64 loaded_word_2;
  __int64 call_result_2;
  __int64 loaded_word_3;
  __int64 call_result_3;
  __int64 getptd_result_2;

  call_result = sub_1402075CC();
  loaded_word = sub_14020777C(a1, a2, a3);
  getptd_result = crt_getptd();
  ++*(_DWORD *)(getptd_result + 48);
  while ( loaded_word != -1 && loaded_word > a4 )
  {
    if ( loaded_word <= -1 || loaded_word >= *((_DWORD *)a3 + 1) )
      abort();
    saved_loaded_word = loaded_word;
    loaded_word = *(_DWORD *)(*((int *)a3 + 2) + sub_1402075CC() + 8LL * loaded_word);
    if ( *(_DWORD *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * saved_loaded_word + 4) )
    {
      loaded_word_2 = *(int *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * saved_loaded_word + 4);
      call_result_2 = loaded_word_2 + sub_1402075CC();
    }
    else
    {
      call_result_2 = 0;
    }
    if ( call_result_2 )
    {
      sub_1402077D0(a1, a3, loaded_word);
      if ( *(_DWORD *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * saved_loaded_word + 4) )
      {
        loaded_word_3 = *(int *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * saved_loaded_word + 4);
        call_result_3 = loaded_word_3 + sub_1402075CC();
      }
      else
      {
        call_result_3 = 0;
      }
      sub_14020AE90(call_result_3, a1, 259);
      sub_1402075F4(call_result);
    }
  }
  if ( *(int *)(crt_getptd() + 48) > 0 )
  {
    getptd_result_2 = crt_getptd();
    --*(_DWORD *)(getptd_result_2 + 48);
  }
  if ( loaded_word != -1 && loaded_word > a4 )
    abort();
  sub_1402077D0(a1, a3, loaded_word);
}

//----- (000000014020A450) ----------------------------------------------------
__int64            sub_14020A450(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
        struct FH4__FuncInfo4 *a3,
        unsigned int a4)
{
  __int64 call_result;
  int getptd_result;
  __int64 getptd_result_2;
  _BYTE *loaded_record_pointer;
  __int64 masked_bits;
  sr_anon_95 *state_address;
  sr_anon_95 *table_value;
  sr_anon_95 *table_value_2;
  __int128 saved_loaded_word;
  int dword2_result;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 getptd_result_3;
  __int64 unused_local;
  sr_anon_95 *scratch_buffer[2];
  int unused_written_slot;
  int unused_written_slot_2;
  unsigned int unused_written_slot_3;
  int *state_address_2;
  sr_anon_95 *saved_state_address;
  __int64 *input_cursor;
  __int64 unused_written_slot_4;
  unsigned __int64 *unused_written_slot_5;
  struct _xDISPATCHER_CONTEXT *unused_written_slot_6;
  __int128 loaded_word_3;
  int *unused_written_slot_7;
  sr_anon_95 *unused_written_slot_8;
  __int128 loaded_word_4;
  int shifted_bits;
  sr_anon_95 *saved_state_address_2;
  __int64 unused_local_2;

  unused_written_slot_5 = a1;
  input_cursor = (__int64 *)a1;
  unused_written_slot_6 = a2;
  unused_written_slot_3 = a4;
  call_result = sub_1402075CC();
  unused_written_slot_4 = call_result;
  getptd_result = sub_140207820(a3, a2);
  if ( *((_DWORD *)a2 + 18) )
  {
    if ( *(_DWORD *)(crt_getptd() + 120) != -2 )
      abort();
    getptd_result = *((_DWORD *)a2 + 18) - 2;
  }
  else if ( *(_DWORD *)(crt_getptd() + 120) != -2 )
  {
    getptd_result = *(_DWORD *)(crt_getptd() + 120);
    *(_DWORD *)(crt_getptd() + 120) = -2;
  }
  getptd_result_2 = crt_getptd();
  ++*(_DWORD *)(getptd_result_2 + 48);
  if ( *((_DWORD *)a3 + 2) )
  {
    loaded_record_pointer = (_BYTE *)(*((_QWORD *)a2 + 1) + *((int *)a3 + 2));
    masked_bits = *loaded_record_pointer & 0xF;
    state_address = (sr_anon_95 *)&loaded_record_pointer[-byte_140284A40[masked_bits]];
    shifted_bits = *((_DWORD *)state_address - 1) >> byte_140284A40[masked_bits + 16];
    saved_state_address_2 = state_address;
  }
  else
  {
    shifted_bits = 0;
    state_address = saved_state_address_2;
  }
  scratch_buffer[0] = (sr_anon_95 *)&shifted_bits;
  scratch_buffer[1] = state_address;
  state_address_2 = &shifted_bits;
  saved_state_address = state_address;
  sub_14020AC30((FH4__UWMap4 *)&shifted_bits, getptd_result, a4, (struct FH4__UWMap4__iterator *)scratch_buffer, (struct FH4__UWMap4__iterator *)&state_address_2);
  while ( 1 )
  {
    unused_written_slot_7 = &shifted_bits;
    unused_written_slot_8 = saved_state_address_2;
    table_value = scratch_buffer[1];
    if ( scratch_buffer[1] < saved_state_address_2 || scratch_buffer[1] <= saved_state_address )
      break;
    sub_14020A9E4(scratch_buffer[0], (unsigned __int8 **)&scratch_buffer[1]);
    scratch_buffer[1] = table_value;
    table_value_2 = scratch_buffer[0];
    loaded_word_3 = *((_OWORD *)scratch_buffer[0] + 1);
    saved_loaded_word = loaded_word_3;
    loaded_word_4 = *(_OWORD *)scratch_buffer;
    sub_14020A9E4(scratch_buffer[0], (unsigned __int8 **)&scratch_buffer[1]);
    scratch_buffer[1] = (sr_anon_95 *)((char *)table_value - *((unsigned int *)table_value_2 + 4));
    getptd_result = sub_14020AD00(
           (     struct FH4__UWMap4__iterator *)&state_address_2,
           a4,
           (     struct FH4__UWMap4__iterator *)&loaded_word_4,
           getptd_result,
           (     struct FH4__UWMap4__iterator *)scratch_buffer);
    unused_written_slot_2 = getptd_result;
    unused_written_slot = 0;
    dword2_result = 0;
    if ( DWORD1(saved_loaded_word) )
      dword2_result = DWORD2(saved_loaded_word);
    unused_written_slot = dword2_result;
    if ( dword2_result )
    {
      *((_DWORD *)a2 + 18) = getptd_result + 2;
      if ( (unsigned int)(DWORD1(saved_loaded_word) - 1) <= 1 )
      {
        loaded_word = *input_cursor;
        if ( DWORD1(saved_loaded_word) == 2 )
          loaded_word_2 = *(_QWORD *)(HIDWORD(loaded_word_3) + loaded_word);
        else
          loaded_word_2 = loaded_word + HIDWORD(loaded_word_3);
        sub_14020AF40(*((_QWORD *)a2 + 1) + dword2_result, loaded_word, loaded_word_2, 0x103u);
      }
      else
      {
        sub_14020AE90(*((_QWORD *)a2 + 1) + dword2_result, a1, 259);
      }
      sub_1402075F4(call_result);
    }
  }
  if ( *(int *)(crt_getptd() + 48) > 0 )
  {
    getptd_result_3 = crt_getptd();
    --*(_DWORD *)(getptd_result_3 + 48);
  }
  return 0; /* no result: rax is residue of the call at 0x14020A6F2 / 0x14020A6FD */
}

//----- (000000014020A738) ----------------------------------------------------
__int64            sub_14020A738(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2,      struct _s_FuncInfo *a3)
{
  int call_result;
  unsigned __int64 callee_output_word;

  call_result = sub_140207818(a3, a2);
  sub_140206D64(a1, a2, a3, &callee_output_word);
  if ( call_result <= (int)sub_1402077A4(a1, a2, a3) )
  {
    return (unsigned int)sub_1402077A4(a1, a2, a3);
  }
  else
  {
    sub_1402077D0(&callee_output_word, a3, call_result);
    sub_1402077DC(a1, a2, a3, call_result);
  }
  return (unsigned int)call_result;
}

//----- (000000014020A7D0) ----------------------------------------------------
__int64            sub_14020A7D0(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, struct FH4__FuncInfo4 *a3)
{
  unsigned int unused_written_slot;

  unused_written_slot = sub_140207820(a3, a2);
  if ( *((_DWORD *)a2 + 18) )
  {
    if ( *(_DWORD *)(crt_getptd() + 120) != -2 )
      abort();
    return (unsigned int)(*((_DWORD *)a2 + 18) - 2);
  }
  else if ( *(_DWORD *)(crt_getptd() + 120) != -2 )
  {
    unused_written_slot = *(_DWORD *)(crt_getptd() + 120);
    *(_DWORD *)(crt_getptd() + 120) = -2;
  }
  return unused_written_slot;
}

//----- (000000014020A870) ----------------------------------------------------
char            sub_14020A870(struct EHExceptionRecord *a1,      struct _s_ESTypeList *a2)
{
  char unused_written_slot;
  __int64 i;
  int *buffer_cursor;
  int remaining_count;
  __int64 call_result;
  _BYTE *loaded_record_pointer;
  __int64 scaled_index;
  __int64 call_result_2;

  if ( !a2 )
    abort();
  unused_written_slot = 0;
  for ( i = 0; (int)i < *(_DWORD *)a2; i = (unsigned int)(i + 1) )
  {
    buffer_cursor = (int *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL) + 4LL);
    remaining_count = *(_DWORD *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL));
    if ( remaining_count > 0 )
    {
      while ( 1 )
      {
        call_result = sub_1402075E0();
        loaded_record_pointer = *((_BYTE **)a1 + 6);
        scaled_index = *buffer_cursor + call_result;
        call_result_2 = sub_1402075CC();
        if ( (unsigned int)sub_140208FCC(call_result_2 + 20 * i + *((int *)a2 + 1), scaled_index, loaded_record_pointer) )
          break;
        --remaining_count;
        ++buffer_cursor;
        if ( remaining_count <= 0 )
          goto LABEL_8;
      }
      unused_written_slot = 1;
    }
LABEL_8:
    ;
  }
  return unused_written_slot;
}

//----- (000000014020A95C) ----------------------------------------------------
char            sub_14020A95C(     struct _s_ESTypeList *a1)
{
  int iteration_count;
  __int64 i;
  __int64 loaded_word;
  __int64 call_result;

  iteration_count = 0;
  if ( *(int *)a1 <= 0 )
    return 0;
  for ( i = 0; ; i += 20 )
  {
    if ( *(_DWORD *)(*((int *)a1 + 1) + i + sub_1402075CC() + 4) )
    {
      loaded_word = *(int *)(*((int *)a1 + 1) + i + sub_1402075CC() + 4);
      call_result = loaded_word + sub_1402075CC();
    }
    else
    {
      call_result = 0;
    }
    if ( !(unsigned int)sub_1401FD570(call_result + 8, (__int64)&qword_140302EE0) )
      break;
    if ( ++iteration_count >= *(_DWORD *)a1 )
      return 0;
  }
  return 1;
}

//----- (000000014020A9E4) ----------------------------------------------------
unsigned __int8 *           sub_14020A9E4(FH4__UWMap4 *this, unsigned __int8 **a2)
{
  __int64 masked_bits;
  unsigned __int8 *table_value;
  unsigned int shifted_bits;
  int masked_bits_2;
  unsigned __int8 *result;
  int loaded_word;
  int loaded_word_2;
  int *record_pointer;
  __int64 masked_bits_3;
  unsigned __int8 *table_value_2;

  masked_bits = **a2 & 0xF;
  table_value = &(*a2)[-byte_140284A40[masked_bits]];
  shifted_bits = *((_DWORD *)table_value - 1) >> byte_140284A40[masked_bits + 16];
  *a2 = table_value;
  masked_bits_2 = shifted_bits & 3;
  result = (unsigned __int8 *)(shifted_bits >> 2);
  *((_DWORD *)this + 5) = masked_bits_2;
  *((_DWORD *)this + 4) = (_DWORD)result;
  if ( masked_bits_2 == 1 || masked_bits_2 == 2 )
  {
    loaded_word_2 = *(_DWORD *)*a2;
    *a2 += 4;
    *((_DWORD *)this + 6) = loaded_word_2;
    record_pointer = (int *)*a2;
    masked_bits_3 = *(_BYTE *)record_pointer & 0xF;
    table_value_2 = (unsigned __int8 *)record_pointer - byte_140284A40[masked_bits_3];
    result = (unsigned __int8 *)(unsigned int)(*((_DWORD *)table_value_2 - 1) >> byte_140284A40[masked_bits_3 + 16]);
    *a2 = table_value_2;
    *((_DWORD *)this + 7) = (_DWORD)result;
  }
  else if ( masked_bits_2 == 3 )
  {
    loaded_word = *(_DWORD *)*a2;
    result = *a2 + 4;
    *a2 = result;
    *((_DWORD *)this + 6) = loaded_word;
  }
  return result;
}

//----- (000000014020AA94) ----------------------------------------------------
__int64            sub_14020AA94(FH4__UWMap4 *this, unsigned __int8 **a2)
{
  unsigned __int8 *loaded_word;
  __int64 result;

  loaded_word = *a2;
  sub_14020A9E4(this, a2);
  result = *((unsigned int *)this + 4);
  *a2 = &loaded_word[-result];
  return result;
}

//----- (000000014020AACC) ----------------------------------------------------
__int64            sub_14020AACC(FH4__UWMap4__iterator *this)
{
  __int64 loaded_word;
  _QWORD *unused_written_slot;
  __int64 loaded_word_2;
  __int64 result;

  loaded_word = *(_QWORD *)this;
  unused_written_slot = (_QWORD *)((char *)this + 8);
  loaded_word_2 = *((_QWORD *)this + 1);
  sub_14020A9E4(*(FH4__UWMap4 **)this, (unsigned __int8 **)this + 1);
  result = *(unsigned int *)(loaded_word + 16);
  *unused_written_slot = loaded_word_2 - result;
  return result;
}

//----- (000000014020AB14) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14020AB14(__int64 a1, __int64 (           *a2)(__int64, __int64), __int64 a3)
{
  return a2(a1, a3);
}

//----- (000000014020AB20) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_14020AB20(
        __int64 a1,
        __int64 (           *a2)(__int64, __int64, _QWORD),
        __int64 a3,
        unsigned int a4)
{
  return a2(a1, a3, a4);
}

//----- (000000014020AB84) ----------------------------------------------------
__int64            sub_14020AB84(     struct _s_FuncInfo *a1)
{
  __int64 unused_written_slot;

  unused_written_slot = 0;
  if ( *((_DWORD *)a1 + 8) )
    return *((int *)a1 + 8) + sub_1402075CC();
  return unused_written_slot;
}

//----- (000000014020ABB0) ----------------------------------------------------
char *           sub_14020ABB0(FH4__HandlerMap4 *this)
{
  int loaded_word;
  __int64 remaining_count;

  *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
  sub_14020A084(this);
  loaded_word = *(_DWORD *)this;
  *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
  sub_14020A084(this);
  remaining_count = (unsigned int)(loaded_word - 1);
  if ( (_DWORD)remaining_count )
  {
    do
    {
      sub_14020A084(this);
      --remaining_count;
    }
    while ( remaining_count );
  }
  return (char *)this + 24;
}

//----- (000000014020AC30) ----------------------------------------------------
struct FH4__UWMap4__iterator *           sub_14020AC30(
        FH4__UWMap4 *this,
        int a2,
        int a3,
        struct FH4__UWMap4__iterator *a4,
        struct FH4__UWMap4__iterator *a5)
{
  unsigned __int8 *loaded_record_pointer;
  char selection_flag;
  char selection_flag_2;
  int iteration_count;
  struct FH4__UWMap4__iterator *input_cursor;
  unsigned __int8 *saved_loaded_record_pointer;
  unsigned __int8 *saved_loaded_record_pointer_2;
  int cached_input_value;
  _OWORD *loaded_word;
  struct FH4__UWMap4__iterator *result;
  _OWORD *loaded_word_2;
  unsigned __int8 *saved_loaded_record_pointer_3;
  int input_value;
  struct FH4__UWMap4__iterator *input_cursor_2;

  input_cursor_2 = a4;
  input_value = a2;
  loaded_record_pointer = *((unsigned __int8 **)this + 1);
  selection_flag = 0;
  selection_flag_2 = 0;
  saved_loaded_record_pointer_3 = loaded_record_pointer;
  iteration_count = 0;
  input_cursor = a4;
  saved_loaded_record_pointer = loaded_record_pointer - 1;
  saved_loaded_record_pointer_2 = loaded_record_pointer - 1;
  if ( *(int *)this > 0 )
  {
    cached_input_value = input_value;
    while ( 1 )
    {
      if ( iteration_count == cached_input_value )
      {
        saved_loaded_record_pointer = loaded_record_pointer;
        selection_flag = 1;
      }
      if ( iteration_count == a3 )
      {
        saved_loaded_record_pointer_2 = loaded_record_pointer;
        selection_flag_2 = 1;
      }
      if ( selection_flag && selection_flag_2 )
        break;
      sub_14020A9E4(this, &saved_loaded_record_pointer_3);
      if ( ++iteration_count >= *(_DWORD *)this )
        break;
      loaded_record_pointer = saved_loaded_record_pointer_3;
    }
    input_cursor = input_cursor_2;
  }
  loaded_word = *(_OWORD **)input_cursor;
  *((_QWORD *)input_cursor + 1) = (uint64)(uintptr_t)(saved_loaded_record_pointer);
  *loaded_word = *(_OWORD *)this;
  loaded_word[1] = *((_OWORD *)this + 1);
  result = a5;
  loaded_word_2 = *(_OWORD **)a5;
  *((_QWORD *)a5 + 1) = (uint64)(uintptr_t)(saved_loaded_record_pointer_2);
  *loaded_word_2 = *(_OWORD *)this;
  loaded_word_2[1] = *((_OWORD *)this + 1);
  return result;
}

//----- (000000014020AD00) ----------------------------------------------------
__int64            sub_14020AD00(
             struct FH4__UWMap4__iterator *a1,
        unsigned int a2,
             struct FH4__UWMap4__iterator *a3,
        unsigned int a4,
             struct FH4__UWMap4__iterator *a5)
{
  unsigned __int64 loaded_word;
  __m128i loaded_word_2;

  loaded_word = *((_QWORD *)a5 + 1);
  if ( loaded_word > *((_QWORD *)a3 + 1) || *((_QWORD *)a1 + 1) > loaded_word )
    return 0xFFFFFFFFLL;
  if ( (__int64)(loaded_word - *((_QWORD *)a1 + 1)) >= (__int64)(*((_QWORD *)a3 + 1) - loaded_word) )
  {
    a2 = a4;
    loaded_word_2 = *(__m128i_u *)a5;
    if ( *((_QWORD *)a3 + 1) > SR_VEC_READ_LANES(128, _mm_srli_si128(loaded_word_2, 8), u64)[0] )
    {
      do
      {
        sub_14020A9E4((FH4__UWMap4 *)SR_VEC_LANES(128, loaded_word_2, i64)[0], (unsigned __int8 **)&SR_VEC_LANES(128, loaded_word_2, i64)[1]);
        --a2;
      }
      while ( *((_QWORD *)a3 + 1) > SR_VEC_LANES(128, loaded_word_2, i64)[1] );
    }
  }
  else
  {
    loaded_word_2 = *(__m128i_u *)a1;
    if ( loaded_word > SR_VEC_READ_LANES(128, _mm_srli_si128(loaded_word_2, 8), u64)[0] )
    {
      do
      {
        sub_14020A9E4((FH4__UWMap4 *)SR_VEC_LANES(128, loaded_word_2, i64)[0], (unsigned __int8 **)&SR_VEC_LANES(128, loaded_word_2, i64)[1]);
        ++a2;
      }
      while ( *((_QWORD *)a5 + 1) > SR_VEC_LANES(128, loaded_word_2, i64)[1] );
    }
  }
  return a2;
}

//----- (000000014020AE10) ----------------------------------------------------
char            sub_14020AE10(FH4__HandlerMap4 *this, unsigned int a2)
{
  __int64 remaining_count;
  char result;

  *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
  remaining_count = a2;
  result = sub_14020A084(this);
  if ( (_DWORD)remaining_count )
  {
    do
    {
      result = sub_14020A084(this);
      --remaining_count;
    }
    while ( remaining_count );
  }
  return result;
}

//----- (000000014020AE90) ----------------------------------------------------
__int64 sub_14020AE90(__int64 a1, _QWORD *a2, int a3)
{
  return (__int64)sr_client_call_funclet((uintptr_t)a1, (const uintptr_t *)a2, (unsigned)a3, 1);
}

//----- (000000014020AEE0) ----------------------------------------------------
__int64 sub_14020AEE0(__int64 a1, _QWORD *a2, int a3)
{
  return (__int64)sr_client_call_funclet((uintptr_t)a1, (const uintptr_t *)a2, (unsigned)a3, 0);
}

//----- (000000014020AF10) ----------------------------------------------------
void            sub_14020AF10(__int64 a1, _QWORD *a2)
{
  sub_1401FDA90();
}

//----- (000000014020AF40) ----------------------------------------------------
void            sub_14020AF40(__int64 a1, __int64 a2, __int64 a3, ...)
{
  void (           *callback_function)(__int64);

  sub_1401FDA90();
  callback_function(a3);
  _NLG_Return2_sr();
  sub_1401FDA90();
}

//----- (000000014020AF98) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1008(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (000000014020AFD0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1009(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (000000014020AFEC) ----------------------------------------------------
void            sub_14020AFEC(__int64 a1, __int64 a2)
{
  __int64 iteration_count;
  __int64 call_result;
  void *allocation_buffer;

  if ( *(_BYTE *)(a1 + 8) && *(_QWORD *)a1 )
  {
    iteration_count = -1;
    do
      ++iteration_count;
    while ( *(_BYTE *)(*(_QWORD *)a1 + iteration_count) );
    call_result = j__malloc_base();
    allocation_buffer = (void *)call_result;
    if ( call_result )
    {
      strcpy_s_sr(call_result, iteration_count + 1, *(_QWORD *)a1);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = (uint64)(uintptr_t)(allocation_buffer);
      allocation_buffer = nullptr;
    }
    free(allocation_buffer);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)a1;
    *(_BYTE *)(a2 + 8) = 0;
  }
}

//----- (000000014020B07C) ----------------------------------------------------
void            sub_14020B07C(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    free(*(void **)a1);
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 0;
}

//----- (000000014020B0A4) ----------------------------------------------------
void           __attribute__((noreturn)) sub_14020B0A4(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _ThrowInfo *cached_pthrowinfo;
  __int64 selection_code;
  __int64 loaded_word;
  __int64 int64_result;
  __int64 BaseOfImage;
  _QWORD Arguments[6];

  cached_pthrowinfo = pThrowInfo;
  selection_code = 429065504;
  if ( pThrowInfo && (*(_BYTE *)pThrowInfo & 0x10) != 0 )
  {
    loaded_word = *(_QWORD *)pExceptionObject - 8LL;
    cached_pthrowinfo = *(_ThrowInfo **)(*(_QWORD *)loaded_word + 48LL);
    (*(void (           **)(__int64))(*(_QWORD *)loaded_word + 64LL))(loaded_word);
  }
  int64_result = ((__int64 (           *)(_ThrowInfo *, __int64 *))RtlPcToFileHeader)(cached_pthrowinfo, &BaseOfImage);
  BaseOfImage = int64_result;
  if ( cached_pthrowinfo && ((*(_BYTE *)cached_pthrowinfo & 8) != 0 || !int64_result) )
    selection_code = 26820608;
  Arguments[0] = selection_code;
  Arguments[1] = (uint64)(uintptr_t)(pExceptionObject);
  Arguments[2] = (uint64)(uintptr_t)(cached_pthrowinfo);
  Arguments[3] = int64_result;
  ((void (           *)(__int64, __int64, __int64, _QWORD *, __int64))RaiseException)(
    3765269347LL,
    1,
    4,
    Arguments,
    BaseOfImage);
}

// 14026E1F8: invalid function type 'PVOID (__stdcall *RtlPcToFileHeader)(PVOID PcValue, PVOID *BaseOfImage)' has been ignored
// 14026E200: invalid function type 'void (__stdcall *RaiseException)(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, const ULONG_PTR *lpArguments)' has been ignored

//----- (000000014020B144) ----------------------------------------------------
double            sub_14020B144(double result, int *a2)
{
  __int64 ctrlfp_result;
  int sptype_sr_result;
  unsigned int selection_code;
  double component_delta;

  if ( !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0.0;
  }
  ctrlfp_result = ctrlfp(8064, 65472);
  if ( (HIWORD(result) & 0x7FF0) == 0x7FF0 )
  {
    *a2 = -1;
    sptype_sr_result = sptype_sr(result) - 1;
    if ( sptype_sr_result && (unsigned int)(sptype_sr_result - 1) >= 2 )
    {
      selection_code = 8;
      component_delta = result + 1.0;
LABEL_7:
      return except1(selection_code, 23, result, component_delta, ctrlfp_result); /* 0x14020B1DD: its result stays in xmm0 */
    }
  }
  else
  {
    if ( result == 0.0 && (unsigned int)sub_14024D0E0(result) )
    {
      *a2 = 0;
      component_delta = -0.0;
      selection_code = 0;
      goto LABEL_7;
    }
    result = decomp_sr(result, a2); /* 0x14020B216: movaps xmm6, xmm0 */
  }
  ctrlfp(ctrlfp_result, 65472);
  return result;
}

//----- (000000014020B23C) ----------------------------------------------------
double            sub_14020B23C(double a1, int a2)
{
  __int64 ctrlfp_result;
  int sptype_sr_result;
  unsigned int selection_code;
  double copysign_result;
  int integer_sum;
  int callee_output_word;

  ctrlfp_result = ctrlfp(8064, 65472);
  if ( (HIWORD(a1) & 0x7FF0) != 0x7FF0 )
  {
    if ( a1 == 0.0 )
    {
      ctrlfp(ctrlfp_result, 65472);
      return a1; /* 0x14020B2B4: movaps xmm0, xmm6 */
    }
    copysign_result = decomp_sr(a1, &callee_output_word); /* the mantissa stays in xmm0 for everything below (0x14020B2EA..0x14020B360) */
    if ( a2 >= 0 )
    {
      if ( callee_output_word > 0x7FFFFFFF - a2 )
        goto LABEL_22;
    }
    else if ( callee_output_word < (int)(0x80000000 - a2) )
    {
      goto LABEL_17;
    }
    integer_sum = callee_output_word + a2;
    if ( callee_output_word + a2 <= 2560 )
    {
      if ( integer_sum > 1024 )
      {
        copysign_result = set_exp_sr(copysign_result, (unsigned __int16)integer_sum - 1536); /* 0x14020B323 */
LABEL_23:
        selection_code = 17;
        return except2(selection_code, 25, a1, (double)a2, copysign_result, ctrlfp_result);
      }
      if ( integer_sum >= -2557 )
      {
        if ( integer_sum >= -1021 )
        {
          copysign_result = set_exp_sr(copysign_result, integer_sum); /* 0x14020B356 -> 0x14020B2A6: movaps xmm6, xmm0 */
          ctrlfp(ctrlfp_result, 65472);
          return copysign_result;
        }
        copysign_result = set_exp_sr(copysign_result, (unsigned __int16)integer_sum + 1536); /* 0x14020B34F */
        goto LABEL_18;
      }
LABEL_17:
      copysign_result = copysign_result * 0.0; /* 0x14020B332: mulsd xmm0, qword ptr [rip + 0x77e6e] */
LABEL_18:
      selection_code = 18;
      return except2(selection_code, 25, a1, (double)a2, copysign_result, ctrlfp_result);
    }
LABEL_22:
    copysign_result = copysign(INFINITY, copysign_result); /* 0x14020B360: movaps xmm1, xmm0 */
    goto LABEL_23;
  }
  sptype_sr_result = sptype_sr(a1);
  if ( sptype_sr_result > 0 )
  {
    if ( sptype_sr_result <= 2 )
    {
      ctrlfp(ctrlfp_result, 65472);
      return a1; /* 0x14020B2B4: movaps xmm0, xmm6 */
    }
    if ( sptype_sr_result == 3 )
    {
      copysign_result = handle_qnan2_sr(a1, (double)a2); /* 0x14020B2A6: movaps xmm6, xmm0 */
      ctrlfp(ctrlfp_result, 65472);
      return copysign_result;
    }
  }
  selection_code = 8;
  copysign_result = a1 + 1.0;
  return except2(selection_code, 25, a1, (double)a2, copysign_result, ctrlfp_result);
}

//----- (000000014020B3C4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1010(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (000000014020B3EC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1011(void **a1)
{
  free_base(*a1);
  *a1 = nullptr;
}

//----- (000000014020B408) ----------------------------------------------------
__int64 sub_14020B408()
{
  signed int element_count;
  __int64 record_byte_offset;
  __int64 remaining_count;
  __int64 element_index;
  _DWORD *state_address;
  char *state_address_2;

  element_count = g_144CBE6A8;
  record_byte_offset = 0;
  remaining_count = 3;
  if ( g_144CBE6A8 )
  {
    if ( (int)g_144CBE6A8 < 3 )
      element_count = 3;
  }
  else
  {
    element_count = 512;
  }
  g_144CBE6A8 = element_count;
  g_144CBE6B0 = sr_directory_calloc(element_count, 8);
  free_base(nullptr);
  if ( !g_144CBE6B0 )
  {
    g_144CBE6A8 = 3;
    g_144CBE6B0 = sr_directory_calloc(3, 8);
    free_base(nullptr);
    if ( !g_144CBE6B0 )
      return 0xFFFFFFFFLL;
  }
  element_index = 0;
  state_address = &unk_1403020F8;
  state_address_2 = (char *)&unk_1403020E0;
  do
  {
    _acrt_InitializeCriticalSectionEx((__int64)(state_address_2 + 48), 0xFA0u, 0);
    *(_QWORD *)(record_byte_offset + g_144CBE6B0) = (uint64)(uintptr_t)(state_address_2);
    if ( *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * (element_index >> 6) + 19065401] + 72 * (element_index & 0x3F) + 40) >= 0xFFFFFFFFFFFFFFFEuLL
      || *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * (element_index >> 6) + 19065401] + 72 * (element_index & 0x3F) + 40) == 0 )
    {
      *state_address = -2;
    }
    ++element_index;
    state_address_2 += 88;
    record_byte_offset += 8;
    state_address += 22;
    --remaining_count;
  }
  while ( remaining_count );
  return 0;
}

//----- (000000014020B528) ----------------------------------------------------
char *           sub_14020B528(unsigned int a1)
{
  return (char *)&unk_1403020E0 + 88 * a1;
}

//----- (000000014020B53C) ----------------------------------------------------
void sub_14020B53C()
{
  __int64 i;

  flushall();
  fcloseall();
  for ( i = 0; i != 24; i += 8 )
  {
    sub_1402502FC(*(_QWORD *)(i + g_144CBE6B0));
    ((void (           *)(__int64))DeleteCriticalSection)(*(_QWORD *)(i + g_144CBE6B0) + 48LL);
  }
  free_base(*(void **)&g_144CBE6B0);
  g_144CBE6B0 = 0;
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (000000014020B598) ----------------------------------------------------
__int64            sub_14020B598(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  if ( a1 )
  {
    if ( a2 )
      *a2 = a1 + 8;
    if ( a3 )
      *a3 = a1;
    if ( a4 )
      *a4 = a1 + 16;
    return 0;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

//----- (000000014020B5E0) ----------------------------------------------------
__int64            crt_lock_file(__int64 a1)
{
  return ((__int64 (           *)(__int64))EnterCriticalSection)(a1 + 48);
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (000000014020B5EC) ----------------------------------------------------
__int64            crt_unlock_file(__int64 a1)
{
  return ((__int64 (           *)(__int64))LeaveCriticalSection)(a1 + 48);
}

// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (000000014020B5F8) ----------------------------------------------------
__int64            common_fopen_s__char(__int64 *a1, char *a2, char *a3)
{
  __int64 file_handle;

  if ( a1 )
  {
    file_handle = crt_fsopen(a2, a3, 128);
    *a1 = file_handle;
    if ( file_handle )
      return 0;
    else
      return (unsigned int)*errno_sr();
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

//----- (000000014020B64C) ----------------------------------------------------
__int64            common_fopen_s__wchar_t(__int64 *a1, sr_anon_49 *a2, __int16 *a3)
{
  __int64 call_result;

  if ( a1 )
  {
    call_result = sub_14020B75C(a2, a3, 128);
    *a1 = call_result;
    if ( call_result )
      return 0;
    else
      return (unsigned int)*errno_sr();
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 22;
  }
}

//----- (000000014020B6A0) ----------------------------------------------------
__int64            crt_fsopen(char *a1, char *a2, int a3)
{
  __int64 call_result;
  __int64 callee_output_word;

  if ( !a1 || !a2 || !*a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( !*a1 )
  {
    *errno_sr() = 22;
    return 0;
  }
  sub_140250604(&callee_output_word);
  if ( !callee_output_word )
  {
    *errno_sr() = 24;
    return 0;
  }
  call_result = sub_140251044(a1, a2, a3, callee_output_word);
  if ( !call_result )
    sub_14025065C(callee_output_word);
  crt_unlock_file(callee_output_word);
  return call_result;
}

//----- (000000014020B75C) ----------------------------------------------------
__int64            sub_14020B75C(sr_anon_49 *a1, __int16 *a2, int a3)
{
  __int64 wopenfile_result;
  __int64 callee_output_word;

  if ( !a1 || !a2 || !*a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( !*(_WORD *)a1 )
  {
    *errno_sr() = 22;
    return 0;
  }
  sub_140250604(&callee_output_word);
  if ( !callee_output_word )
  {
    *errno_sr() = 24;
    return 0;
  }
  wopenfile_result = wopenfile(a1, a2, a3, callee_output_word);
  if ( !wopenfile_result )
    sub_14025065C(callee_output_word);
  crt_unlock_file(callee_output_word);
  return wopenfile_result;
}

//----- (000000014020B878) ----------------------------------------------------
__int64            sub_14020B878(__int64 *a1, sr_anon_49 *a2, __int16 *a3)
{
  unsigned int unused_written_slot;
  __int64 call_result;

  unused_written_slot = 0;
  if ( a1 )
  {
    call_result = sub_14020B75C(a2, a3, 128);
    *a1 = call_result;
    if ( !call_result )
      return (unsigned int)*errno_sr();
  }
  else
  {
    unused_written_slot = 22;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014020B8D8) ----------------------------------------------------
__int64            crt_fopen(char *a1, char *a2)
{
  return crt_fsopen(a1, a2, 64);
}

//----- (000000014020B8E4) ----------------------------------------------------
__int64            sub_14020B8E4(__int64 *a1, char *a2, char *a3)
{
  unsigned int unused_written_slot;
  __int64 file_handle;

  unused_written_slot = 0;
  if ( a1 )
  {
    file_handle = crt_fsopen(a2, a3, 128);
    *a1 = file_handle;
    if ( !file_handle )
      return (unsigned int)*errno_sr();
  }
  else
  {
    unused_written_slot = 22;
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
  }
  return unused_written_slot;
}

//----- (000000014020B964) ----------------------------------------------------
__int64            sub_14020B964(FILE *Stream)
{
  unsigned int unused_written_slot;
  int fileno_result;
  void *loaded_record_pointer;

  if ( Stream )
  {
    unused_written_slot = -1;
    if ( (*((_DWORD *)Stream + 5) & 0x2000) != 0 )
    {
      unused_written_slot = sub_1402501C4(Stream);
      sub_1402502FC((__int64)Stream);
      fileno_result = fileno(Stream);
      if ( (int)sub_14025130C(fileno_result) >= 0 )
      {
        loaded_record_pointer = *((void **)Stream + 5);
        if ( loaded_record_pointer )
        {
          free_base(loaded_record_pointer);
          *((_QWORD *)Stream + 5) = 0;
        }
      }
      else
      {
        unused_written_slot = -1;
      }
    }
    sub_14025065C((__int64)Stream);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020B9E8) ----------------------------------------------------
__int64            crt_fclose(__int64 a1)
{
  unsigned int unused_written_slot;

  if ( !a1 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x1000) != 0 )
  {
    sub_14025065C(a1);
    return 0xFFFFFFFFLL;
  }
  crt_lock_file(a1);
  unused_written_slot = sub_14020B964((FILE *)a1);
  crt_unlock_file(a1);
  return unused_written_slot;
}

//----- (000000014020BA70) ----------------------------------------------------
__int64            sub_14020BA70(__int64 a1)
{
  if ( a1 )
    return (*(_DWORD *)(a1 + 20) >> 3) & 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (000000014020BA9C) ----------------------------------------------------
__int64            sub_14020BA9C(__int64 a1)
{
  if ( a1 )
    return (*(_DWORD *)(a1 + 20) >> 4) & 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (000000014020BAC8) ----------------------------------------------------
__int64            getc_nolock_0(FILE *a1)
{
  unsigned __int8 *loaded_word;
  unsigned int unused_written_slot;

  if ( a1 )
  {
    if ( (int32_t)(*((_DWORD *)a1 + 4) -= 1u) < 0 )
    {
      return sub_140251818(a1);
    }
    else
    {
      loaded_word = *(unsigned __int8 **)a1;
      unused_written_slot = **(unsigned __int8 **)a1;
      *(_QWORD *)a1 = (uint64)(uintptr_t)(loaded_word + 1);
      return unused_written_slot;
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020BB0C) ----------------------------------------------------
int         fgetchar_0()
{
  char *returned_pointer;

  returned_pointer = sub_14020B528(0);
  return sub_14020BB2C((FILE *)returned_pointer);
}

//----- (000000014020BB24) ----------------------------------------------------
// attributes: thunk
int         getc_nolock(FILE *Stream)
{
  return getc_nolock_0(Stream);
}

//----- (000000014020BB2C) ----------------------------------------------------
__int64            sub_14020BB2C(FILE *Stream)
{
  int fileno_result;
  _BYTE *state_address;
  _BYTE *state_address_2;
  unsigned int unused_written_slot;
  __int64 callee_output_word;
  __int64 *state_address_3;

  state_address_3 = &callee_output_word;
  if ( Stream )
  {
    crt_lock_file((__int64)Stream);
    if ( (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
      goto LABEL_12;
    fileno_result = fileno(Stream);
    if ( (unsigned int)(fileno_result + 2) <= 1 )
    {
      state_address_2 = &unk_1403022C0;
      state_address = &unk_1403022C0;
    }
    else
    {
      state_address = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
      state_address_2 = &unk_1403022C0;
    }
    if ( state_address[57] )
      goto LABEL_11;
    if ( (unsigned int)(fileno_result + 2) > 1 )
      state_address_2 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
    if ( (state_address_2[61] & 1) != 0 )
    {
LABEL_11:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      sub_14026CD20((__int64)state_address_3, (__int64)&loc_14020BC13);
      return 0xFFFFFFFFLL;
    }
    else
    {
LABEL_12:
      unused_written_slot = getc_nolock_0(Stream);
      crt_unlock_file((__int64)Stream);
      return unused_written_slot;
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020BC3C) ----------------------------------------------------
__int64 sub_14020BC3C()
{
  char *returned_pointer;

  returned_pointer = sub_14020B528(0);
  return sub_14020BB2C((FILE *)returned_pointer);
}

//----- (000000014020BC54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_207(unsigned __int8 a1, __int64 a2)
{
  if ( (int32_t)(*(_DWORD *)(a2 + 16) -= 1u) < 0 )
    return sub_140251DA8(a1, a2);
  *(_BYTE *)(*(_QWORD *)a2)++ = a1;
  return a1;
}

//----- (000000014020BC6C) ----------------------------------------------------
__int64            sub_14020BC6C(char a1)
{
  char *returned_pointer;

  returned_pointer = sub_14020B528(1u);
  return sub_14020BCA8(a1, (__int64)returned_pointer);
}

//----- (000000014020BCA8) ----------------------------------------------------
__int64            sub_14020BCA8(char a1, __int64 a2)
{
  unsigned int call_result;
  int fileno_result;
  _BYTE *state_address;
  _BYTE *state_address_2;
  __int64 callee_output_word;
  __int64 *state_address_3;

  state_address_3 = &callee_output_word;
  LOBYTE(call_result) = a1;
  if ( a2 )
  {
    crt_lock_file(a2);
    if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
      goto LABEL_12;
    fileno_result = fileno((FILE *)a2);
    if ( (unsigned int)(fileno_result + 2) <= 1 )
    {
      state_address_2 = &unk_1403022C0;
      state_address = &unk_1403022C0;
    }
    else
    {
      state_address = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
      state_address_2 = &unk_1403022C0;
    }
    if ( state_address[57] )
      goto LABEL_11;
    if ( (unsigned int)(fileno_result + 2) > 1 )
      state_address_2 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
    if ( (state_address_2[61] & 1) != 0 )
    {
LABEL_11:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      sub_14026CD20((__int64)state_address_3, (__int64)&loc_14020BD94);
      return 0xFFFFFFFFLL;
    }
    else
    {
LABEL_12:
      if ( --*(_DWORD *)(a2 + 16) < 0 )
      {
        call_result = sub_140251DA8(call_result, a2);
      }
      else
      {
        *(_BYTE *)(*(_QWORD *)a2)++ = call_result;
        call_result = (unsigned __int8)call_result;
      }
      crt_unlock_file(a2);
      return call_result;
    }
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020BE18) ----------------------------------------------------
unsigned __int64            fread_nolock(__m128i *a1, unsigned __int64 a2, unsigned __int64 a3, FILE *a4)
{
  return sub_14020BE38(a1, 0xFFFFFFFFFFFFFFFFuLL, a2, a3, a4);
}

// 14020BE18: invalid function type '#66 __cdecl fread_nolock(void *Buffer, #66 ElementSize, #66 ElementCount, FILE *Stream)' has been ignored

//----- (000000014020BE38) ----------------------------------------------------
unsigned __int64            sub_14020BE38(
        __m128i *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        FILE *Stream)
{
  unsigned int cached_streama;
  unsigned __int64 scaled_index;
  __m128i *destination_buffer;
  unsigned __int64 remaining_count;
  unsigned __int64 byte_count;
  unsigned __int64 byte_count_2;
       __m128i *source_buffer;
  unsigned int saved_remaining_count;
  __int64 loaded_word;
  int fileno_result;
  int nolock;
  int call_result;
  __m128i *saved_destination_buffer;
  __int64 loaded_word_2;
  unsigned __int64 input_value;
  unsigned int Streama;

  input_value = a4;
  if ( !a3 || !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( !Stream || a4 > 0xFFFFFFFFFFFFFFFFuLL / a3 )
  {
    if ( a2 != -1 )
    {
      crt_memset((void *)(uintptr_t)(a1), 0, a2);
      a4 = input_value;
    }
    if ( !Stream || a4 > 0xFFFFFFFFFFFFFFFFuLL / a3 )
    {
LABEL_4:
      *errno_sr() = 22;
      goto LABEL_5;
    }
  }
  if ( (*((_DWORD *)Stream + 5) & 0x4C0) != 0 )
    cached_streama = *((_DWORD *)Stream + 8);
  else
    cached_streama = 4096;
  Streama = cached_streama;
  scaled_index = a4 * a3;
  destination_buffer = a1;
  saved_destination_buffer = a1;
  remaining_count = a4 * a3;
  byte_count = a2;
  if ( !(a4 * a3) )
    return a4;
  while ( 1 )
  {
    if ( (*((_DWORD *)Stream + 5) & 0x4C0) != 0 )
    {
      byte_count_2 = *((int *)Stream + 4);
      if ( (_DWORD)byte_count_2 )
      {
        if ( (byte_count_2 & 0x80000000) != 0LL )
          goto LABEL_53;
        if ( remaining_count < byte_count_2 )
          byte_count_2 = (unsigned int)remaining_count;
        if ( byte_count_2 > byte_count )
          goto LABEL_50;
        source_buffer = *(     __m128i **)Stream;
        loaded_word_2 = *(_QWORD *)Stream;
        if ( !byte_count_2 )
          goto LABEL_34;
        if ( !destination_buffer )
          goto LABEL_25;
        if ( source_buffer && byte_count >= byte_count_2 )
        {
          crt_memcpy(destination_buffer, source_buffer, byte_count_2);
        }
        else
        {
          crt_memset((void *)(uintptr_t)(destination_buffer), 0, byte_count);
          if ( !loaded_word_2 )
          {
LABEL_25:
            *errno_sr() = 22;
LABEL_32:
            crt_invalid_parameter_noinfo();
            goto LABEL_33;
          }
          if ( byte_count < byte_count_2 )
          {
            *errno_sr() = 34;
            goto LABEL_32;
          }
        }
LABEL_33:
        destination_buffer = saved_destination_buffer;
LABEL_34:
        *((_DWORD *)Stream + 4) -= byte_count_2;
        remaining_count -= byte_count_2;
        *(_QWORD *)Stream += byte_count_2;
        cached_streama = Streama;
        byte_count -= byte_count_2;
        goto LABEL_47;
      }
    }
    if ( remaining_count < cached_streama )
      break;
    saved_remaining_count = remaining_count;
    if ( remaining_count > 0x7FFFFFFF )
      saved_remaining_count = 0x7FFFFFFF;
    if ( cached_streama )
      saved_remaining_count -= saved_remaining_count % cached_streama;
    if ( saved_remaining_count > byte_count )
      goto LABEL_50;
    loaded_word = *((_QWORD *)Stream + 1);
    *((_DWORD *)Stream + 4) = 0;
    *(_QWORD *)Stream = loaded_word;
    fileno_result = fileno(Stream);
    nolock = read_nolock(fileno_result, SR_VEC_PTR_LANES(128, saved_destination_buffer, i16), saved_remaining_count);
    if ( !nolock )
    {
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 8u);
      return (scaled_index - remaining_count) / a3;
    }
    if ( nolock < 0 )
    {
LABEL_53:
      _InterlockedOr((volatile signed __int32 *)Stream + 5, 0x10u);
      return (scaled_index - remaining_count) / a3;
    }
    cached_streama = Streama;
    destination_buffer = saved_destination_buffer;
    byte_count_2 = nolock;
    remaining_count -= nolock;
    byte_count -= nolock;
LABEL_47:
    destination_buffer = (__m128i *)((char *)destination_buffer + byte_count_2);
    saved_destination_buffer = destination_buffer;
    if ( !remaining_count )
      return input_value;
  }
  call_result = sub_140251818(Stream);
  if ( call_result == -1 )
    return (scaled_index - remaining_count) / a3;
  if ( byte_count )
  {
    destination_buffer = saved_destination_buffer;
    --remaining_count;
    --byte_count;
    byte_count_2 = 1;
    SR_VEC_PTR_LANES(128, saved_destination_buffer, i8)[0] = call_result;
    cached_streama = *((_DWORD *)Stream + 8);
    Streama = cached_streama;
    goto LABEL_47;
  }
LABEL_50:
  if ( a2 != -1 )
    crt_memset((void *)(uintptr_t)(a1), 0, a2);
  *errno_sr() = 34;
LABEL_5:
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (000000014020C0C8) ----------------------------------------------------
unsigned __int64            fread_sr(void *a1, unsigned __int64 a2, unsigned __int64 a3, FILE *a4)
{
  return sub_14020C0E8(a1, 0xFFFFFFFFFFFFFFFFuLL, a2, a3, a4);
}

// 14020C0C8: invalid function type '#66 __cdecl fread(void *Buffer, #66 ElementSize, #66 ElementCount, FILE *Stream)' has been ignored

//----- (000000014020C0E8) ----------------------------------------------------
unsigned __int64            sub_14020C0E8(
        __m128i *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        FILE *a5)
{
  unsigned __int64 unused_written_slot;

  if ( !a3 || !a4 )
    return 0;
  if ( !a5 )
  {
    if ( a2 != -1 )
      crt_memset((void *)(uintptr_t)(a1), 0, a2);
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  crt_lock_file((__int64)a5);
  unused_written_slot = sub_14020BE38(a1, a2, a3, a4, a5);
  crt_unlock_file((__int64)a5);
  return unused_written_slot;
}

//----- (000000014020C190) ----------------------------------------------------
__int64            sub_14020C190(__m128i *a1, unsigned __int64 a2,      __m128i *a3, unsigned __int64 a4)
{
  int *unused_written_slot;
  unsigned int selection_code;

  if ( !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    crt_memcpy(a1, a3, a4);
    return 0;
  }
  crt_memset((void *)(uintptr_t)(a1), 0, a2);
  if ( !a3 )
  {
LABEL_4:
    unused_written_slot = errno_sr();
    selection_code = 22;
LABEL_5:
    *unused_written_slot = selection_code;
    crt_invalid_parameter_noinfo();
    return selection_code;
  }
  if ( a2 < a4 )
  {
    unused_written_slot = errno_sr();
    selection_code = 34;
    goto LABEL_5;
  }
  return 22;
}

//----- (000000014020C248) ----------------------------------------------------
__int64            sub_14020C248(__int64 a1, signed __int64 a2, unsigned int a3)
{
  unsigned int unused_written_slot;

  if ( a1 && a3 <= 2 )
  {
    crt_lock_file(a1);
    unused_written_slot = sub_14020C398(a1, a2, a3);
    crt_unlock_file(a1);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020C2B4) ----------------------------------------------------
char            sub_14020C2B4(__int64 a1, signed __int64 a2, int a3)
{
  __int64 loaded_word;
  __int64 masked_bits;
  __int64 shifted_bits;
  __int64 lseeki64_nolock_result;
  __int64 input_value;
  unsigned __int64 loaded_word_2;
  unsigned __int64 shifted_bits_2;
  unsigned __int64 integer_difference;

  if ( a3 == 2 )
    return 0;
  if ( (*(_DWORD *)(a1 + 20) & 0x4C0) == 0 )
    return 0;
  if ( (*(_DWORD *)(a1 + 20) & 6) != 0 )
    return 0;
  if ( *(int *)(a1 + 16) <= 0 )
    return 0;
  loaded_word = *(int *)(a1 + 24);
  masked_bits = *(_DWORD *)(a1 + 24) & 0x3F;
  shifted_bits = *(_QWORD *)&dword_140404A6C[2 * (loaded_word >> 6) + 19065401];
  if ( *(char *)(shifted_bits + 72 * masked_bits + 56) < 0 || *(_BYTE *)(shifted_bits + 72 * masked_bits + 57) )
    return 0;
  if ( !a3 )
  {
    lseeki64_nolock_result = lseeki64_nolock(loaded_word, 0, 1u);
    if ( lseeki64_nolock_result < 0 )
      return 0;
    input_value = a2;
    loaded_word_2 = lseeki64_nolock_result - *(int *)(a1 + 16);
    shifted_bits_2 = (unsigned __int64)a2 >> 63;
    integer_difference = input_value - loaded_word_2;
    if ( (_DWORD)shifted_bits_2 != loaded_word_2 >> 63 && (_DWORD)shifted_bits_2 != integer_difference >> 63 )
      return 0;
    a2 = integer_difference;
  }
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 <= a2 && a2 <= *(int *)(a1 + 16) )
  {
    *(_QWORD *)a1 += a2;
    *(_DWORD *)(a1 + 16) -= a2;
    return 1;
  }
  return 0;
}

//----- (000000014020C398) ----------------------------------------------------
__int64            sub_14020C398(__int64 a1, signed __int64 a2, int a3)
{
  unsigned int input_value;
  __int64 running_total;
  __int64 loaded_word;

  input_value = a3;
  running_total = a2;
  if ( (*(_DWORD *)(a1 + 20) & 0x2000) == 0 )
  {
    *errno_sr() = 22;
    return 0xFFFFFFFFLL;
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFFF7);
  if ( !sub_14020C2B4(a1, a2, a3) )
  {
    if ( input_value == 1 )
    {
      running_total += ftelli64_nolock_sr((FILE *)a1);
      input_value = 0;
    }
    sub_1402501C4((FILE *)a1);
    loaded_word = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)a1 = loaded_word;
    if ( (*(_DWORD *)(a1 + 20) & 4) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFFFC);
    }
    else if ( (*(_BYTE *)(a1 + 20) & 0x41) == 0x41 && (*(_DWORD *)(a1 + 20) & 0x100) == 0 )
    {
      *(_DWORD *)(a1 + 32) = 512;
    }
    if ( lseeki64_nolock(*(_DWORD *)(a1 + 24), running_total, input_value) == -1 )
      return 0xFFFFFFFFLL;
  }
  return 0;
}

//----- (000000014020C4A8) ----------------------------------------------------
__int64            sub_14020C4A8(__int64 a1, int a2, unsigned int a3)
{
  return sub_14020C248(a1, a2, a3);
}

//----- (000000014020C4B0) ----------------------------------------------------
int         ftell_0(FILE *Stream)
{
  signed __int64 ftelli64_nolock_0_result;
  int unused_written_slot;

  if ( Stream )
  {
    crt_lock_file((__int64)Stream);
    ftelli64_nolock_0_result = ftelli64_nolock_0(Stream);
    unused_written_slot = ftelli64_nolock_0_result;
    if ( ftelli64_nolock_0_result > 0x7FFFFFFF )
    {
      *errno_sr() = 22;
      unused_written_slot = -1;
    }
    crt_unlock_file((__int64)Stream);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return -1;
  }
}

//----- (000000014020C520) ----------------------------------------------------
unsigned __int64            sub_14020C520(FILE *a1)
{
  unsigned __int64 unused_written_slot;

  if ( a1 )
  {
    crt_lock_file((__int64)a1);
    unused_written_slot = ftelli64_nolock_0(a1);
    crt_unlock_file((__int64)a1);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return -1;
  }
}

//----- (000000014020C574) ----------------------------------------------------
int         sub_14020C574(FILE *Stream)
{
  signed __int64 ftelli64_nolock_0_result;

  ftelli64_nolock_0_result = ftelli64_nolock_0(Stream);
  if ( ftelli64_nolock_0_result > 0x7FFFFFFF )
  {
    *errno_sr() = 22;
    LODWORD(ftelli64_nolock_0_result) = -1;
  }
  return ftelli64_nolock_0_result;
}

//----- (000000014020C598) ----------------------------------------------------
__int64            ftelli64_nolock_0(FILE *a1)
{
  int fileno_result;
  __int64 saved_fileno_result;
  __int64 lseeki64_sr_result;
  __int64 shifted_bits;
  unsigned __int64 remaining_bits;
  __int64 masked_bits;
  char shifted_bits_2;
  __int64 loaded_word;
  __int64 unrecovered_register_value;

  if ( !a1 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return -1;
  }
  fileno_result = fileno(a1);
  saved_fileno_result = fileno_result;
  if ( *((int *)a1 + 4) < 0 )
    *((_DWORD *)a1 + 4) = 0;
  lseeki64_sr_result = lseeki64_sr(fileno_result, 0, 1);
  if ( lseeki64_sr_result < 0 )
    return -1;
  if ( (*((_DWORD *)a1 + 5) & 0xC0) == 0 )
    return lseeki64_sr_result - *((int *)a1 + 4);
  shifted_bits = saved_fileno_result >> 6;
  remaining_bits = *(_QWORD *)a1 - *((_QWORD *)a1 + 1);
  masked_bits = 9 * (saved_fileno_result & 0x3F);
  shifted_bits_2 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (saved_fileno_result >> 6) + 19065401] + 72 * (saved_fileno_result & 0x3F) + 57);
  if ( (*((_DWORD *)a1 + 5) & 3) != 0 )
  {
    if ( shifted_bits_2 == 1 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * masked_bits + 61) & 2) != 0 )
      return sub_14020C8A8((__int64)a1, lseeki64_sr_result);
    if ( *(char *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * masked_bits + 56) < 0 )
    {
      loaded_word = sub_14020CA24(*((_WORD **)a1 + 1), *(_QWORD *)a1, shifted_bits_2);
      remaining_bits = loaded_word + unrecovered_register_value;
    }
  }
  else if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
  {
    *errno_sr() = 22;
    return -1;
  }
  if ( !lseeki64_sr_result )
    return remaining_bits;
  if ( (*((_DWORD *)a1 + 5) & 1) != 0 )
    return sub_14020C75C((__int64)a1, lseeki64_sr_result, remaining_bits);
  if ( shifted_bits_2 == 1 )
    remaining_bits >>= 1;
  return remaining_bits + lseeki64_sr_result;
}

//----- (000000014020C75C) ----------------------------------------------------
__int64            sub_14020C75C(__int64 a1, __int64 a2, __int64 a3)
{
  int fileno_result;
  __int64 selection_flag;
  __int64 masked_bits;
  __int64 scaled_index;
  __int64 masked_bits_2;
  char loaded_word;
  __int64 result;
  __int64 loaded_word_2;
  __int64 saved_running_total;
  __int64 running_total;
  bool state_address;
  __int64 shifted_bits;

  fileno_result = fileno((FILE *)a1);
  selection_flag = 0;
  masked_bits = fileno_result & 0x3F;
  shifted_bits = (__int64)fileno_result >> 6;
  scaled_index = 9 * masked_bits;
  masked_bits_2 = *(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401];
  loaded_word = *(_BYTE *)(masked_bits_2 + 72 * masked_bits + 57);
  if ( !*(_DWORD *)(a1 + 16) )
    return a2;
  loaded_word_2 = *(_QWORD *)a1 + *(int *)(a1 + 16) - *(_QWORD *)(a1 + 8);
  if ( *(char *)(masked_bits_2 + 72 * masked_bits + 56) < 0 )
  {
    if ( lseeki64_sr(fileno_result, 0, 2) == a2 )
    {
      running_total = sub_14020CA24(*(_WORD **)(a1 + 8), *(_QWORD *)(a1 + 8) + loaded_word_2, loaded_word) + loaded_word_2;
      state_address = (*(_DWORD *)(a1 + 20) & 0x20) == 0;
    }
    else
    {
      result = lseeki64_sr(fileno_result, a2, 0);
      if ( result == -1 )
        return result;
      running_total = 512;
      if ( loaded_word_2 > 512 || (*(_DWORD *)(a1 + 20) & 0x40) == 0 || (*(_DWORD *)(a1 + 20) & 0x100) != 0 )
        running_total = *(int *)(a1 + 32);
      state_address = (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * shifted_bits + 19065401] + 8 * scaled_index + 56) & 4) == 0;
    }
    if ( !state_address )
    {
      LOBYTE(selection_flag) = (unsigned __int8)(loaded_word - 1) <= 1u;
      running_total += selection_flag + 1;
    }
    saved_running_total = running_total;
  }
  else
  {
    saved_running_total = *(_QWORD *)a1 + *(int *)(a1 + 16) - *(_QWORD *)(a1 + 8);
  }
  return a2 + a3 / ((loaded_word == 1) + 1LL) - saved_running_total / ((loaded_word == 1) + 1LL);
}

//----- (000000014020C8A8) ----------------------------------------------------
__int64            sub_14020C8A8(__int64 a1, __int64 a2)
{
  __int64 iteration_count;
  __int64 fileno_result;
  __int64 loaded_word;
  __int64 lseeki64_sr_result;
  __int64 shifted_bits;
  unsigned __int8 *state_address;
  unsigned __int8 *buffer_cursor;
  __int64 unused_local;
  _DWORD lookup_index[4];
  _BYTE callee_output_word[4096];
  __int64 unused_local_2;

  iteration_count = 0;
  fileno_result = fileno((FILE *)a1);
  if ( !*(_DWORD *)(a1 + 16) )
    return a2; /* 0x14020C8F4: mov rax, rsi */
  {
    loaded_word = (*(_QWORD *)a1 - *(_QWORD *)(a1 + 8)) / 2LL;
    lseeki64_sr_result = lseeki64_sr(fileno_result, *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * (fileno_result >> 6) + 19065401] + 72 * (fileno_result & 0x3F) + 48), 0);
    shifted_bits = *(_QWORD *)&dword_140404A6C[2 * (fileno_result >> 6) + 19065401];
    if ( lseeki64_sr_result == *(_QWORD *)(shifted_bits + 72 * (fileno_result & 0x3F) + 48) )
    {
      if ( (unsigned int)((__int64 (           *)(_QWORD, _BYTE *, __int64, _DWORD *, _QWORD))ReadFile)(
                           *(_QWORD *)(shifted_bits + 72 * (fileno_result & 0x3F) + 40),
                           callee_output_word,
                           4096,
                           lookup_index,
                           0) )
      {
        if ( lseeki64_sr(fileno_result, a2, 0) >= 0 && loaded_word <= lookup_index[0] )
        {
          state_address = &callee_output_word[lookup_index[0]];
          buffer_cursor = callee_output_word;
          if ( loaded_word )
          {
            do
            {
              if ( buffer_cursor >= state_address )
                break;
              if ( *buffer_cursor == 13 )
              {
                if ( buffer_cursor < state_address - 1 && buffer_cursor[1] == 10 )
                  ++buffer_cursor;
              }
              else
              {
                buffer_cursor += byte_140302310[*buffer_cursor];
              }
              ++iteration_count;
              ++buffer_cursor;
            }
            while ( iteration_count != loaded_word );
          }
          return lseeki64_sr_result + (buffer_cursor - (unsigned __int8 *)callee_output_word); /* 0x14020C9E6: lea rax, [r12 + rcx] */
        }
      }
    }
  }
  return -1; /* 0x14020C9EC: or rax, 0xffffffffffffffff */
}

// 14026E1F0: invalid function type 'BOOL (__stdcall *ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)' has been ignored

//----- (000000014020CA24) ----------------------------------------------------
__int64            sub_14020CA24(_WORD *a1, unsigned __int64 a2, char a3)
{
  _WORD *buffer_cursor;
  __int64 record_pointer;
  __int64 iteration_count;
  unsigned __int64 shifted_bits;
  bool comparison_result;
  __int64 integer_sum;
  __int64 return_value;
  __int64 integer_difference;
  _BYTE *buffer_cursor_2;
  __int64 integer_sum_2;

  buffer_cursor = a1;
  if ( (unsigned __int8)(a3 - 1) > 1u )
  {
    return_value = 0;
    integer_difference = a2 - (_QWORD)a1;
    buffer_cursor_2 = a1;
    if ( (unsigned __int64)a1 > a2 )
      integer_difference = 0;
    if ( integer_difference )
    {
      do
      {
        integer_sum_2 = return_value + 1;
        if ( *buffer_cursor_2 != 10 )
          integer_sum_2 = return_value;
        ++buffer_cursor_2;
        return_value = integer_sum_2;
      }
      while ( buffer_cursor_2 - (_BYTE *)buffer_cursor != integer_difference );
    }
    return return_value;
  }
  else
  {
    record_pointer = 0;
    iteration_count = 0;
    shifted_bits = (a2 - (unsigned __int64)a1 + 1) >> 1;
    if ( (unsigned __int64)buffer_cursor > a2 )
      shifted_bits = 0;
    if ( shifted_bits )
    {
      do
      {
        comparison_result = *buffer_cursor == 10;
        integer_sum = record_pointer + 1;
        ++buffer_cursor;
        if ( !comparison_result )
          integer_sum = record_pointer;
        ++iteration_count;
        record_pointer = integer_sum;
      }
      while ( iteration_count != shifted_bits );
    }
    return 2 * record_pointer;
  }
}

//----- (000000014020CADC) ----------------------------------------------------
int         sub_14020CADC(FILE *Stream)
{
  __int64 ftelli64_nolock_0_result;

  ftelli64_nolock_0_result = ftelli64_nolock_0(Stream);
  if ( ftelli64_nolock_0_result > 0x7FFFFFFF )
  {
    *errno_sr() = 22;
    LODWORD(ftelli64_nolock_0_result) = -1;
  }
  return ftelli64_nolock_0_result;
}

//----- (000000014020CB08) ----------------------------------------------------
// attributes: thunk
__int64         ftelli64_nolock_sr(FILE *Stream)
{
  return ftelli64_nolock_0(Stream);
}

//----- (000000014020CB20) ----------------------------------------------------
// attributes: thunk
int         ftell_sr(FILE *Stream)
{
  return ftell_0(Stream);
}

//----- (000000014020CB28) ----------------------------------------------------
unsigned __int64            sub_14020CB28(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  unsigned __int64 unused_written_slot;

  crt_lock_file(*a2);
  unused_written_slot = _lambda_532e024f4337e6fc7ad266c2bef9f4ed___operator_call(a3);
  crt_unlock_file(*a4);
  return unused_written_slot;
}

//----- (000000014020CB68) ----------------------------------------------------
unsigned __int64            sub_14020CB68(__int64 a1, __int64 **a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14020CB28((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014020CBC0) ----------------------------------------------------
__acrt_stdio_temporary_buffering_guard *           sub_14020CBC0(
        __acrt_stdio_temporary_buffering_guard *this,
        struct _iobuf *     a2)
{
  *(_QWORD *)this = (uint64)(uintptr_t)(a2);
  *((_BYTE *)this + 8) = sub_140253DEC((__int64)a2);
  return this;
}

//----- (000000014020CBFC) ----------------------------------------------------
unsigned __int64            _lambda_532e024f4337e6fc7ad266c2bef9f4ed___operator_call(__int64 **a1)
{
  __int64 scaled_index;
  char call_result;
  unsigned __int64 unused_written_slot;

  scaled_index = **a1;
  call_result = sub_140253DEC(scaled_index);
  unused_written_slot = sub_14020CC60((     __m128i *)*a1[1], *a1[2], *a1[3], **a1);
  sub_140253EBC(call_result, scaled_index);
  return unused_written_slot;
}

//----- (000000014020CC60) ----------------------------------------------------
unsigned __int64            sub_14020CC60(     __m128i *Buf, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
       __m128i *source_buffer;
  int loaded_word;
  unsigned __int64 scaled_index;
  unsigned __int64 remaining_count;
  bool i;
  int loaded_word_2;
  unsigned __int64 byte_count;
  unsigned __int64 saved_remaining_count;
  unsigned int integer_difference;
  int fileno_result;
  unsigned int write_result;
  unsigned int saved_write_result;
  unsigned int cached_integer_difference;

  source_buffer = Buf;
  if ( !a2 || !a3 )
    return 0;
  if ( !a4 || !Buf || a3 > 0xFFFFFFFFFFFFFFFFuLL / a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  if ( (*(_DWORD *)(a4 + 20) & 0x4C0) != 0 )
    loaded_word = *(_DWORD *)(a4 + 32);
  else
    loaded_word = 4096;
  scaled_index = a3 * a2;
  remaining_count = a3 * a2;
  for ( i = a3 * a2 == 0; !i; i = remaining_count == 0 )
  {
    if ( (*(_DWORD *)(a4 + 20) & 0xC0) != 0 && (loaded_word_2 = *(_DWORD *)(a4 + 16)) != 0 )
    {
      if ( loaded_word_2 < 0 )
        goto LABEL_31;
      if ( (*(_DWORD *)(a4 + 20) & 1) != 0 )
        return (scaled_index - remaining_count) / a2;
      byte_count = remaining_count;
      if ( remaining_count >= *(int *)(a4 + 16) )
        byte_count = *(int *)(a4 + 16);
      crt_memcpy(*(__m128i **)a4, source_buffer, byte_count);
      *(_DWORD *)(a4 + 16) -= byte_count;
      remaining_count -= byte_count;
      *(_QWORD *)a4 += byte_count;
    }
    else if ( remaining_count < (unsigned int)loaded_word )
    {
      if ( (unsigned int)sub_140251DA8(SR_VEC_PTR_LANES(128, source_buffer, i8)[0], a4) == -1 )
        return (scaled_index - remaining_count) / a2;
      loaded_word = *(_DWORD *)(a4 + 32);
      --remaining_count;
      byte_count = 1;
      if ( loaded_word <= 0 )
        loaded_word = 1;
    }
    else
    {
      if ( (*(_DWORD *)(a4 + 20) & 0xC0) != 0 && (unsigned int)sub_1402501C4((FILE *)a4) )
        return (scaled_index - remaining_count) / a2;
      saved_remaining_count = remaining_count;
      if ( loaded_word )
        saved_remaining_count = remaining_count - remaining_count % (unsigned int)loaded_word;
      integer_difference = -2;
      if ( saved_remaining_count < 0xFFFFFFFE )
        integer_difference = saved_remaining_count;
      cached_integer_difference = integer_difference;
      fileno_result = fileno((FILE *)a4);
      write_result = write(fileno_result, source_buffer, integer_difference);
      if ( write_result == -1 )
        goto LABEL_31;
      saved_write_result = write_result;
      if ( write_result > integer_difference )
        saved_write_result = integer_difference;
      byte_count = saved_write_result;
      remaining_count -= saved_write_result;
      if ( write_result < cached_integer_difference )
      {
LABEL_31:
        _InterlockedOr((volatile signed __int32 *)(a4 + 20), 0x10u);
        return (scaled_index - remaining_count) / a2;
      }
    }
    source_buffer = (     __m128i *)((char *)source_buffer + byte_count);
  }
  return a3;
}

//----- (000000014020CE0C) ----------------------------------------------------
unsigned __int64            crt_fread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE scratch_buffer[8];
  __int64 input_value;
  __int64 input_value_2;
  __int64 *scratch_buffer_2[5];
  __int64 input_value_3;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;

  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value_3 = a1;
  if ( !a2 || !a3 )
    return 0;
  if ( !a4 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
  input_value = a4;
  scratch_buffer_2[0] = &input_value_6;
  input_value_2 = a4;
  scratch_buffer_2[1] = &input_value_3;
  scratch_buffer_2[2] = &input_value_4;
  scratch_buffer_2[3] = &input_value_5;
  return sub_14020CB28((__int64)scratch_buffer, &input_value_2, scratch_buffer_2, &input_value);
}

//----- (000000014020CE90) ----------------------------------------------------
__int64            sub_14020CE90(int a1, __int64 a2)
{
  int fileno_result;
  _BYTE *state_address;
  _BYTE *comparison_result;
  int loaded_word;
  __int64 loaded_word_2;
  _BYTE *loaded_record_pointer;
  int shifted_bits;

  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
  {
    fileno_result = fileno((FILE *)a2);
    state_address = &unk_1403022C0;
    comparison_result = (unsigned int)(fileno_result + 2) <= 1
       ? &unk_1403022C0
       : (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
    if ( comparison_result[57] )
      goto LABEL_9;
    if ( (unsigned int)(fileno_result + 2) > 1 )
      state_address = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)fileno_result >> 6) + 19065401] + 72LL * (fileno_result & 0x3F));
    if ( (state_address[61] & 1) != 0 )
    {
LABEL_9:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
  }
  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  loaded_word = *(_DWORD *)(a2 + 20);
  if ( (loaded_word & 1) == 0 && (loaded_word & 6) != 6 )
    return 0xFFFFFFFFLL;
  loaded_word_2 = *(_QWORD *)(a2 + 8);
  if ( !loaded_word_2 )
  {
    sub_140253EF8(a2);
    loaded_word_2 = *(_QWORD *)(a2 + 8);
  }
  if ( *(_QWORD *)a2 == loaded_word_2 )
  {
    if ( *(_DWORD *)(a2 + 16) )
      return 0xFFFFFFFFLL;
    ++*(_QWORD *)a2;
  }
  loaded_record_pointer = (_BYTE *)(*(_QWORD *)a2 - 1LL);
  shifted_bits = *(_DWORD *)(a2 + 20) >> 12;
  *(_QWORD *)a2 = (uint64)(uintptr_t)(loaded_record_pointer);
  if ( (shifted_bits & 1) != 0 )
  {
    if ( *loaded_record_pointer != (_BYTE)a1 )
    {
      *(_QWORD *)a2 = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *loaded_record_pointer = a1;
  }
  ++*(_DWORD *)(a2 + 16);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 1u);
  return (unsigned __int8)a1;
}

//----- (000000014020CFB8) ----------------------------------------------------
int         sub_14020CFB8(int Character, FILE *Stream)
{
  int unused_written_slot;

  if ( Stream )
  {
    crt_lock_file((__int64)Stream);
    unused_written_slot = sub_14020CE90(Character, (__int64)Stream);
    crt_unlock_file((__int64)Stream);
    return unused_written_slot;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return -1;
  }
}

//----- (000000014020D010) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_210(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}

//----- (000000014020D094) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_211(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_DWORD *)(a1 + 3560) = -1;
  *(_DWORD *)(a1 + 3564) = -1;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_QWORD *)(a1 + 1152) = loaded_word;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  return a1;
}

//----- (000000014020D134) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_212(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}

//----- (000000014020D1B8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_213(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}

//----- (000000014020D240) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_214(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_DWORD *)(a1 + 3560) = -1;
  *(_DWORD *)(a1 + 3564) = -1;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_QWORD *)(a1 + 1152) = loaded_word;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  return a1;
}

//----- (000000014020D2E4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_215(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}

//----- (000000014020D36C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_216(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}

//----- (000000014020D3F0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_217(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_DWORD *)(a1 + 3560) = -1;
  *(_DWORD *)(a1 + 3564) = -1;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_QWORD *)(a1 + 1152) = loaded_word;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  return a1;
}

//----- (000000014020D490) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_218(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}

//----- (000000014020D514) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_219(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}

//----- (000000014020D59C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_220(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_DWORD *)(a1 + 3560) = -1;
  *(_DWORD *)(a1 + 3564) = -1;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_QWORD *)(a1 + 1152) = loaded_word;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  return a1;
}

//----- (000000014020D640) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_221(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  loaded_word = *a4;
  loaded_word_2 = *a3;
  loaded_word_3 = *a6;
  loaded_word_4 = *a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = *a2;
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_QWORD *)a1 = loaded_word_2;
  *(_QWORD *)(a1 + 8) = loaded_word_4;
  *(_QWORD *)(a1 + 24) = loaded_word;
  *(_DWORD *)(a1 + 1136) = 0;
  return a1;
}

//----- (000000014020D6C8) ----------------------------------------------------
__int64            sub_14020D6C8(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = _lambda_7e489fec146d5348dbc86d3cce37c1b5___operator_call(a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (000000014020D708) ----------------------------------------------------
__int64            sub_14020D708(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = sub_140213FD0(a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (000000014020D748) ----------------------------------------------------
__int64            sub_14020D748(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = _lambda_ee59099aa97e0ff6f003b984c1584058___operator_call(a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (000000014020D788) ----------------------------------------------------
__int64            sub_14020D788(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = _lambda_32f117a32e8f8eb613cbf2ca819ed45e___operator_call(a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (000000014020D7C8) ----------------------------------------------------
__int64            sub_14020D7C8(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = _lambda_a2288fdbbd702c8f223b438290af01a4___operator_call(a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (000000014020D808) ----------------------------------------------------
__int64            sub_14020D808(__int64 a1, __int64 *a2, __int64 **a3, __int64 *a4)
{
  crt_lock_file(*a2);
  LODWORD(a3) = sub_140213BD4(a3);
  crt_unlock_file(*a4);
  return (unsigned int)a3;
}

//----- (000000014020D848) ----------------------------------------------------
__int64            sub_14020D848(__int64 a1, __int64 **a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14020D808((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014020D870) ----------------------------------------------------
__int64            sub_14020D870(__int64 a1, __int64 **a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14020D748((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014020D898) ----------------------------------------------------
__int64            sub_14020D898(__int64 a1, __int64 **a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14020D7C8((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014020D8C0) ----------------------------------------------------
__int64            sub_14020D8C0(__int64 a1, __int64 **a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14020D708((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014020D8E8) ----------------------------------------------------
__int64            sub_14020D8E8(__int64 a1, __int64 **a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14020D6C8((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014020D910) ----------------------------------------------------
__int64            sub_14020D910(__int64 a1, __int64 **a2)
{
  __int64 callee_output_word;
  __int64 input_value;
  __int64 input_value_2;

  input_value = a1;
  input_value_2 = a1;
  return sub_14020D788((__int64)&callee_output_word, &input_value_2, a2, &input_value);
}

//----- (000000014020D938) ----------------------------------------------------
__int64 sub_14020D938(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE scratch_buffer[8];
  __int64 input_value;
  __int64 input_value_2;
  __int64 *scratch_buffer_2[5];
  __int64 input_value_3;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  va_list va;

  va_start(va, a4);
  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value_3 = a1;
  if ( a2 && a3 )
  {
    input_value = a2;
    scratch_buffer_2[0] = &input_value_4;
    input_value_2 = a2;
    scratch_buffer_2[1] = &input_value_6;
    scratch_buffer_2[2] = &input_value_3;
    scratch_buffer_2[3] = &input_value_5;
    memcpy(&scratch_buffer_2[4], &va, sizeof(va));
    return sub_14020D788((__int64)scratch_buffer, &input_value_2, scratch_buffer_2, &input_value);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020D9C0) ----------------------------------------------------
__int64 sub_14020D9C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE scratch_buffer[8];
  __int64 input_value;
  __int64 input_value_2;
  __int64 *scratch_buffer_2[5];
  __int64 input_value_3;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  va_list va;

  va_start(va, a4);
  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value_3 = a1;
  if ( a2 && a3 )
  {
    input_value = a2;
    scratch_buffer_2[0] = &input_value_4;
    input_value_2 = a2;
    scratch_buffer_2[1] = &input_value_6;
    scratch_buffer_2[2] = &input_value_3;
    scratch_buffer_2[3] = &input_value_5;
    memcpy(&scratch_buffer_2[4], &va, sizeof(va));
    return sub_14020D6C8((__int64)scratch_buffer, &input_value_2, scratch_buffer_2, &input_value);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020DA48) ----------------------------------------------------
__int64 sub_14020DA48(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE scratch_buffer[8];
  __int64 input_value;
  __int64 input_value_2;
  __int64 *scratch_buffer_2[5];
  __int64 input_value_3;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  va_list va;

  va_start(va, a4);
  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value_3 = a1;
  if ( a2 && a3 )
  {
    input_value = a2;
    scratch_buffer_2[0] = &input_value_4;
    input_value_2 = a2;
    scratch_buffer_2[1] = &input_value_6;
    scratch_buffer_2[2] = &input_value_3;
    scratch_buffer_2[3] = &input_value_5;
    memcpy(&scratch_buffer_2[4], &va, sizeof(va));
    return sub_14020D7C8((__int64)scratch_buffer, &input_value_2, scratch_buffer_2, &input_value);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020DAD0) ----------------------------------------------------
__int64 sub_14020DAD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE scratch_buffer[8];
  __int64 input_value;
  __int64 input_value_2;
  __int64 *scratch_buffer_2[5];
  __int64 input_value_3;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  va_list va;

  va_start(va, a4);
  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value_3 = a1;
  if ( a2 && a3 )
  {
    input_value = a2;
    scratch_buffer_2[0] = &input_value_4;
    input_value_2 = a2;
    scratch_buffer_2[1] = &input_value_6;
    scratch_buffer_2[2] = &input_value_3;
    scratch_buffer_2[3] = &input_value_5;
    memcpy(&scratch_buffer_2[4], &va, sizeof(va));
    return sub_14020D748((__int64)scratch_buffer, &input_value_2, scratch_buffer_2, &input_value);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020DB58) ----------------------------------------------------
__int64 sub_14020DB58(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE scratch_buffer[8];
  __int64 input_value;
  __int64 input_value_2;
  __int64 *scratch_buffer_2[5];
  __int64 input_value_3;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  va_list va;

  va_start(va, a4);
  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value_3 = a1;
  if ( a2 && a3 )
  {
    input_value = a2;
    scratch_buffer_2[0] = &input_value_4;
    input_value_2 = a2;
    scratch_buffer_2[1] = &input_value_6;
    scratch_buffer_2[2] = &input_value_3;
    scratch_buffer_2[3] = &input_value_5;
    memcpy(&scratch_buffer_2[4], &va, sizeof(va));
    return sub_14020D808((__int64)scratch_buffer, &input_value_2, scratch_buffer_2, &input_value);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020DBE0) ----------------------------------------------------
__int64 sub_14020DBE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  _BYTE scratch_buffer[8];
  __int64 input_value;
  __int64 input_value_2;
  __int64 *scratch_buffer_2[5];
  __int64 input_value_3;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 input_value_6;
  va_list va;

  va_start(va, a4);
  input_value_6 = a4;
  input_value_5 = a3;
  input_value_4 = a2;
  input_value_3 = a1;
  if ( a2 && a3 )
  {
    input_value = a2;
    scratch_buffer_2[0] = &input_value_4;
    input_value_2 = a2;
    scratch_buffer_2[1] = &input_value_6;
    scratch_buffer_2[2] = &input_value_3;
    scratch_buffer_2[3] = &input_value_5;
    memcpy(&scratch_buffer_2[4], &va, sizeof(va));
    return sub_14020D708((__int64)scratch_buffer, &input_value_2, scratch_buffer_2, &input_value);
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014020DC68) ----------------------------------------------------
__int64            sub_14020DC68(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        struct __crt_locale_pointers *a6,
        __int64 a7)
{
  int *errno_sr_result;
  __int64 result;
  int selection_flag;
  int loaded_word;

  if ( !a5 )
  {
    errno_sr_result = errno_sr();
LABEL_3:
    *errno_sr_result = 22;
    goto LABEL_4;
  }
  if ( a4 )
  {
    if ( !a2 )
      goto LABEL_14;
  }
  else if ( !a2 )
  {
    if ( !a3 )
      return 0;
    goto LABEL_14;
  }
  if ( a3 )
  {
    selection_flag = 1;
    goto LABEL_15;
  }
LABEL_14:
  selection_flag = 0;
LABEL_15:
  errno_sr_result = errno_sr();
  if ( !selection_flag )
    goto LABEL_3;
  loaded_word = *errno_sr_result;
  if ( a3 > a4 )
  {
    result = sub_14020DE94(a1, a2, a4 + 1, a5, a6, a7);
    if ( (_DWORD)result != -2 )
      goto LABEL_18;
LABEL_23:
    if ( *errno_sr() == 34 )
      *errno_sr() = loaded_word;
    return 0xFFFFFFFFLL;
  }
  result = sub_14020DE94(a1, a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( (_DWORD)result == -2 )
  {
    if ( a4 != -1 )
      goto LABEL_19;
    goto LABEL_23;
  }
LABEL_18:
  if ( (int)result < 0 )
  {
LABEL_19:
    *a2 = 0;
    if ( (_DWORD)result != -2 )
      return 0xFFFFFFFFLL;
    *errno_sr() = 34;
LABEL_4:
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  return result;
}

//----- (000000014020DD7C) ----------------------------------------------------
__int64            sub_14020DD7C(
        __int64 a1,
        _WORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        struct __crt_locale_pointers *a6,
        __int64 a7)
{
  int *errno_sr_result;
  __int64 result;
  int selection_flag;
  int loaded_word;

  if ( !a5 )
  {
    errno_sr_result = errno_sr();
LABEL_3:
    *errno_sr_result = 22;
    goto LABEL_4;
  }
  if ( !a4 )
  {
    if ( !a2 )
    {
      if ( !a3 )
        return 0;
      goto LABEL_13;
    }
LABEL_12:
    selection_flag = 1;
    if ( a3 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( a2 )
    goto LABEL_12;
LABEL_13:
  selection_flag = 0;
LABEL_14:
  errno_sr_result = errno_sr();
  if ( !selection_flag )
    goto LABEL_3;
  loaded_word = *errno_sr_result;
  if ( a3 > a4 )
  {
    result = sub_14020E060(a1, a2, a4 + 1, a5, a6, a7);
    if ( (_DWORD)result != -2 )
      goto LABEL_17;
LABEL_22:
    if ( *errno_sr() == 34 )
      *errno_sr() = loaded_word;
    return 0xFFFFFFFFLL;
  }
  result = sub_14020E060(a1, a2, a3, a5, a6, a7);
  a2[a3 - 1] = 0;
  if ( (_DWORD)result == -2 )
  {
    if ( a4 != -1 )
      goto LABEL_18;
    goto LABEL_22;
  }
LABEL_17:
  if ( (int)result < 0 )
  {
LABEL_18:
    *a2 = 0;
    if ( (_DWORD)result != -2 )
      return 0xFFFFFFFFLL;
    *errno_sr() = 34;
LABEL_4:
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  return result;
}

//----- (000000014020DE94) ----------------------------------------------------
__int64            sub_14020DE94(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  int call_result;
  __int64 lookup_index;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  __int64 selection_flag;
  char unused_written_slot;
  int unused_written_slot_2;
  __int16 unused_written_slot_3;
  char unused_written_slot_4;
  __int64 callee_output_word;
  _BYTE scratch_buffer_2[24];
  _QWORD scratch_buffer_3[7];
  int unused_written_slot_5;
  __int16 unused_written_slot_6;
  int unused_written_slot_7;
  char unused_written_slot_8;
  __int64 unused_written_slot_9;
  void *Block;
  _QWORD *unused_written_slot_10;
  int unused_written_slot_11;
  __int64 unused_local_2;

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return (unsigned int)-1; /* 0x14020DEE3: or eax, 0xffffffff */
  }
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a5);
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  scratch_buffer[0] = (uint64)(uintptr_t)(a2);
  scratch_buffer[1] = a3;
  selection_flag = 0;
  if ( (a1 & 2) != 0 || (unused_written_slot = 0, !a2) )
    unused_written_slot = 1;
  scratch_buffer_3[2] = 0;
  unused_written_slot_10 = scratch_buffer;
  scratch_buffer_3[5] = 0;
  scratch_buffer_3[1] = (uint64)(uintptr_t)(scratch_buffer_2);
  scratch_buffer_3[4] = a6;
  scratch_buffer_3[6] = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  unused_written_slot_7 = 0;
  unused_written_slot_8 = 0;
  unused_written_slot_9 = 0;
  Block = nullptr;
  scratch_buffer_3[0] = a1;
  scratch_buffer_3[3] = a4;
  unused_written_slot_11 = 0;
  call_result = sub_1402161BC((__int64)scratch_buffer_3, unrecovered_register_value, unrecovered_register_value_2);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && call_result )
      {
        call_result = -1; /* or ebx, 0xffffffff in the chunk after the ret */
        goto LABEL_20;
      }
      lookup_index = selection_flag;
      if ( selection_flag == a3 )
      {
        if ( call_result >= 0 && (unsigned __int64)call_result > (unsigned __int64)a3 )
          call_result = -1; /* cmp rbx, rdi; ja -> or ebx, 0xffffffff */
        goto LABEL_20;
      }
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( call_result < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
      {
LABEL_19:
        a2[lookup_index] = 0;
        goto LABEL_20;
      }
      call_result = -2; /* mov ebx, 0xfffffffe: the output was truncated */
      goto LABEL_26;
    }
    call_result = -1; /* no room at all: or ebx, 0xffffffff */
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer_2[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return (unsigned int)call_result; /* 0x14020E01C: mov eax, ebx */
}

//----- (000000014020E060) ----------------------------------------------------
__int64            sub_14020E060(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  int call_result;
  __int64 lookup_index;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  __int64 selection_flag;
  char unused_written_slot;
  int unused_written_slot_2;
  __int16 unused_written_slot_3;
  char unused_written_slot_4;
  __int64 callee_output_word;
  _BYTE scratch_buffer_2[24];
  _QWORD scratch_buffer_3[7];
  int unused_written_slot_5;
  char unused_written_slot_6;
  __int16 unused_written_slot_7;
  int unused_written_slot_8;
  char unused_written_slot_9;
  __int64 unused_written_slot_10;
  void *Block;
  _QWORD *unused_written_slot_11;
  int unused_written_slot_12;
  __int64 unused_local_2;

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return (unsigned int)-1; /* 0x14020E0AF: or eax, 0xffffffff */
  }
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a5);
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  scratch_buffer[0] = (uint64)(uintptr_t)(a2);
  scratch_buffer[1] = a3;
  selection_flag = 0;
  if ( (a1 & 2) != 0 || (unused_written_slot = 0, !a2) )
    unused_written_slot = 1;
  scratch_buffer_3[2] = 0;
  unused_written_slot_11 = scratch_buffer;
  scratch_buffer_3[5] = 0;
  scratch_buffer_3[1] = (uint64)(uintptr_t)(scratch_buffer_2);
  scratch_buffer_3[4] = a6;
  scratch_buffer_3[6] = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  unused_written_slot_7 = 0;
  unused_written_slot_8 = 0;
  unused_written_slot_9 = 0;
  unused_written_slot_10 = 0;
  Block = nullptr;
  scratch_buffer_3[0] = a1;
  scratch_buffer_3[3] = a4;
  unused_written_slot_12 = 0;
  call_result = sub_140217010((__int64)scratch_buffer_3, unrecovered_register_value, unrecovered_register_value_2);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && call_result )
      {
        call_result = -1; /* or ebx, 0xffffffff in the chunk after the ret */
        goto LABEL_20;
      }
      lookup_index = selection_flag;
      if ( selection_flag == a3 )
      {
        if ( call_result >= 0 && (unsigned __int64)call_result > (unsigned __int64)a3 )
          call_result = -1; /* cmp rbx, rdi; ja -> or ebx, 0xffffffff */
        goto LABEL_20;
      }
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( call_result < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
      {
LABEL_19:
        a2[lookup_index] = 0;
        goto LABEL_20;
      }
      call_result = -2; /* mov ebx, 0xfffffffe: the output was truncated */
      goto LABEL_26;
    }
    call_result = -1; /* no room at all: or ebx, 0xffffffff */
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer_2[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return (unsigned int)call_result; /* 0x14020E1EE: mov eax, ebx */
}

//----- (000000014020E234) ----------------------------------------------------
__int64            sub_14020E234(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  int call_result;
  __int64 lookup_index;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  __int64 selection_flag;
  char unused_written_slot;
  int unused_written_slot_2;
  __int16 unused_written_slot_3;
  char unused_written_slot_4;
  __int64 callee_output_word;
  _BYTE scratch_buffer_2[24];
  _QWORD scratch_buffer_3[7];
  int unused_written_slot_5;
  __int16 unused_written_slot_6;
  int unused_written_slot_7;
  char unused_written_slot_8;
  __int64 unused_written_slot_9;
  void *Block;
  _QWORD *unused_written_slot_10;
  int unused_written_slot_11;
  __int64 unused_written_slot_12;
  __int64 unused_written_slot_13;
  int unused_written_slot_14;
  int unused_written_slot_15;
  __int64 unused_local_2;

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0; /* the function has no caller */
  }
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a5);
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  scratch_buffer[0] = (uint64)(uintptr_t)(a2);
  scratch_buffer[1] = a3;
  selection_flag = 0;
  if ( (a1 & 2) != 0 || (unused_written_slot = 0, !a2) )
    unused_written_slot = 1;
  unused_written_slot_14 = -1;
  unused_written_slot_15 = -1;
  unused_written_slot_10 = scratch_buffer;
  scratch_buffer_3[1] = (uint64)(uintptr_t)(scratch_buffer_2);
  scratch_buffer_3[4] = a6;
  scratch_buffer_3[2] = 0;
  scratch_buffer_3[5] = 0;
  scratch_buffer_3[6] = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  unused_written_slot_7 = 0;
  unused_written_slot_8 = 0;
  unused_written_slot_9 = 0;
  Block = nullptr;
  scratch_buffer_3[0] = a1;
  scratch_buffer_3[3] = a4;
  unused_written_slot_11 = 0;
  unused_written_slot_12 = 0;
  unused_written_slot_13 = a4;
  call_result = sub_1402163D4((__int64)scratch_buffer_3);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && call_result )
        goto LABEL_20;
      lookup_index = selection_flag;
      if ( selection_flag == a3 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( call_result < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
      {
LABEL_19:
        a2[lookup_index] = 0;
        goto LABEL_20;
      }
      goto LABEL_26;
    }
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer_2[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return 0; /* the function has no caller */
}

//----- (000000014020E41C) ----------------------------------------------------
__int64            sub_14020E41C(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, struct sr_anon_68 *a5, __int64 a6)
{
  int call_result;
  __int64 lookup_index;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  __int64 selection_flag;
  char unused_written_slot;
  int unused_written_slot_2;
  __int16 unused_written_slot_3;
  char unused_written_slot_4;
  __int64 callee_output_word;
  _BYTE scratch_buffer_2[24];
  _QWORD scratch_buffer_3[7];
  int unused_written_slot_5;
  char unused_written_slot_6;
  __int16 unused_written_slot_7;
  int unused_written_slot_8;
  char unused_written_slot_9;
  __int64 unused_written_slot_10;
  void *Block;
  _QWORD *unused_written_slot_11;
  int unused_written_slot_12;
  __int64 unused_written_slot_13;
  __int64 unused_written_slot_14;
  int unused_written_slot_15;
  int unused_written_slot_16;
  __int64 unused_local_2;

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0; /* the function has no caller */
  }
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a5);
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  scratch_buffer[0] = (uint64)(uintptr_t)(a2);
  scratch_buffer[1] = a3;
  selection_flag = 0;
  if ( (a1 & 2) != 0 || (unused_written_slot = 0, !a2) )
    unused_written_slot = 1;
  unused_written_slot_15 = -1;
  unused_written_slot_16 = -1;
  unused_written_slot_11 = scratch_buffer;
  scratch_buffer_3[1] = (uint64)(uintptr_t)(scratch_buffer_2);
  scratch_buffer_3[4] = a6;
  scratch_buffer_3[2] = 0;
  scratch_buffer_3[5] = 0;
  scratch_buffer_3[6] = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  unused_written_slot_7 = 0;
  unused_written_slot_8 = 0;
  unused_written_slot_9 = 0;
  unused_written_slot_10 = 0;
  Block = nullptr;
  scratch_buffer_3[0] = a1;
  scratch_buffer_3[3] = a4;
  unused_written_slot_12 = 0;
  unused_written_slot_13 = 0;
  unused_written_slot_14 = a4;
  call_result = sub_140217298((__int64)scratch_buffer_3);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && call_result )
        goto LABEL_20;
      lookup_index = selection_flag;
      if ( selection_flag == a3 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( call_result < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
      {
LABEL_19:
        a2[lookup_index] = 0;
        goto LABEL_20;
      }
      goto LABEL_26;
    }
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer_2[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return 0; /* the function has no caller */
}

__int64 sub_14020E60C(__int64 options, _BYTE *destination, __int64 capacity,
                     __int64 format, struct __crt_locale_pointers *provided_locale,
                     __int64 arguments)
{
  sr_format_locale locale;
  sr_format_output output;
  sr_format_processor processor;
  int result;
  if (!format || (capacity && !destination))
  {
    *errno_sr()=22;
    crt_invalid_parameter_noinfo();
    return UINT32_MAX;
  }
  crt_locale_update((_LocaleUpdate *)(void *)&locale, provided_locale);
  output.destination=(unsigned char *)destination;
  output.capacity=(uint64_t)capacity;
  output.used=0;
  output.count_only=(options&2)!=0 || !destination;
  memset(output.padding,0,sizeof output.padding);
  /* Initialize precisely the fields written by the original constructor. */
  processor.options=options;
  processor.locale=locale.pair;
  processor.reserved16=0;
  processor.format=(const char *)(uintptr_t)format;
  processor.arguments=arguments;
  processor.result=processor.state=0;
  processor.flags=processor.width=0;
  processor.precision=0;
  processor.character=0;
  processor.error_flags=0;
  processor.error_tail=0;
  processor.scratch_capacity=0;
  processor.allocation=NULL;
  processor.output=&output;
  processor.passes=0;
  /* The extra exported registers only reach helpers that ignore them. */
  result=(int)sub_14021666C((__int64)(uintptr_t)&processor,0,0);
  if (destination)
  {
    if (options&1)
    {
      if (!capacity && result) result=-1;
      else if (output.used!=(uint64_t)capacity) destination[output.used]=0;
      else if (result>=0 && (uint64_t)result>(uint64_t)capacity) result=-1;
    }
    else if (options&2)
    {
      if (capacity)
      {
        if (result<0) destination[0]=0;
        else if (output.used!=(uint64_t)capacity) destination[output.used]=0;
        else destination[(uint64_t)capacity-1]=0;
      }
    }
    else if (!capacity) result=-1;
    else if (output.used!=(uint64_t)capacity) destination[output.used]=0;
    else
    {
      result=-2;
      destination[(uint64_t)capacity-1]=0;
    }
  }
  free_base(processor.allocation);
  if (locale.changed) *(_DWORD *)(locale.thread+936)&=~2u;
  /* Native EAX return is zero-extended even for negative signed int results. */
  return (unsigned int)result;
}

//----- (000000014020E7D8) ----------------------------------------------------
__int64            sub_14020E7D8(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  int call_result;
  __int64 lookup_index;
  __int64 unused_local;
  _QWORD scratch_buffer[2];
  __int64 selection_flag;
  char unused_written_slot;
  int unused_written_slot_2;
  __int16 unused_written_slot_3;
  char unused_written_slot_4;
  __int64 callee_output_word;
  _BYTE scratch_buffer_2[24];
  _QWORD scratch_buffer_3[7];
  int unused_written_slot_5;
  char unused_written_slot_6;
  __int16 unused_written_slot_7;
  int unused_written_slot_8;
  char unused_written_slot_9;
  __int64 unused_written_slot_10;
  void *Block;
  _QWORD *unused_written_slot_11;
  int unused_written_slot_12;
  __int64 unused_local_2;

  if ( !a4 || a3 && !a2 )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return (unsigned int)-1; /* 0x14020E827: or eax, 0xffffffff */
  }
  crt_locale_update((_LocaleUpdate *)&callee_output_word, a5);
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  scratch_buffer[0] = (uint64)(uintptr_t)(a2);
  scratch_buffer[1] = a3;
  selection_flag = 0;
  if ( (a1 & 2) != 0 || (unused_written_slot = 0, !a2) )
    unused_written_slot = 1;
  scratch_buffer_3[2] = 0;
  unused_written_slot_11 = scratch_buffer;
  scratch_buffer_3[5] = 0;
  scratch_buffer_3[1] = (uint64)(uintptr_t)(scratch_buffer_2);
  scratch_buffer_3[4] = a6;
  scratch_buffer_3[6] = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  unused_written_slot_7 = 0;
  unused_written_slot_8 = 0;
  unused_written_slot_9 = 0;
  unused_written_slot_10 = 0;
  Block = nullptr;
  scratch_buffer_3[0] = a1;
  scratch_buffer_3[3] = a4;
  unused_written_slot_12 = 0;
  call_result = sub_14021754C((__int64)scratch_buffer_3, unrecovered_register_value, unrecovered_register_value_2);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && call_result )
      {
        call_result = -1; /* or ebx, 0xffffffff in the chunk after the ret */
        goto LABEL_20;
      }
      lookup_index = selection_flag;
      if ( selection_flag == a3 )
      {
        if ( call_result >= 0 && (unsigned __int64)call_result > (unsigned __int64)a3 )
          call_result = -1; /* cmp rbx, rdi; ja -> or ebx, 0xffffffff */
        goto LABEL_20;
      }
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( call_result < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      lookup_index = selection_flag;
      if ( selection_flag != a3 )
      {
LABEL_19:
        a2[lookup_index] = 0;
        goto LABEL_20;
      }
      call_result = -2; /* mov ebx, 0xfffffffe: the output was truncated */
      goto LABEL_26;
    }
    call_result = -1; /* no room at all: or ebx, 0xffffffff */
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer_2[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  return (unsigned int)call_result; /* 0x14020E966: mov eax, ebx */
}

//----- (000000014020E9AC) ----------------------------------------------------
__int64            sub_14020E9AC(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 result;

  if ( !a4 || !a2 || !a3 )
  {
    *errno_sr() = 22;
    goto LABEL_9;
  }
  result = sub_14020DE94(a1, a2, a3, a4, a5, a6);
  if ( (int)result < 0 )
    *a2 = 0;
  if ( (_DWORD)result == -2 )
  {
    *errno_sr() = 34;
LABEL_9:
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  return result;
}

//----- (000000014020EA10) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_222(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 result;

  if ( !a4 || !a2 || !a3 )
  {
    *errno_sr() = 22;
    goto LABEL_9;
  }
  result = sub_14020E060(a1, a2, a3, a4, a5, a6);
  if ( (int)result < 0 )
    *a2 = 0;
  if ( (_DWORD)result == -2 )
  {
    *errno_sr() = 34;
LABEL_9:
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  return result;
}

//----- (000000014020EAD8) ----------------------------------------------------
char            sub_14020EAD8(__int64 a1, unsigned __int64 a2)
{
  char unused_written_slot;
  unsigned __int64 record_word_offset;
  __int64 malloc_base_result;

  if ( a2 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    unused_written_slot = 0;
    record_word_offset = 2 * a2;
    if ( (*(_QWORD *)(a1 + 1032) || record_word_offset > 0x400) && record_word_offset > *(_QWORD *)(a1 + 1024) )
    {
      malloc_base_result = malloc_base(2 * a2);
      if ( malloc_base_result )
      {
        free_base(*(void **)(a1 + 1032));
        *(_QWORD *)(a1 + 1032) = malloc_base_result;
        unused_written_slot = 1;
        *(_QWORD *)(a1 + 1024) = record_word_offset;
      }
      free_base(nullptr);
      return unused_written_slot;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *errno_sr() = 12;
    return 0;
  }
}

//----- (000000014020EB80) ----------------------------------------------------
char            sub_14020EB80(__int64 a1, unsigned __int64 a2)
{
  char unused_written_slot;
  unsigned __int64 record_word_offset;
  __int64 malloc_base_result;

  if ( a2 <= 0x3FFFFFFFFFFFFFFFLL )
  {
    unused_written_slot = 0;
    record_word_offset = 4 * a2;
    if ( (*(_QWORD *)(a1 + 1032) || record_word_offset > 0x400) && record_word_offset > *(_QWORD *)(a1 + 1024) )
    {
      malloc_base_result = malloc_base(4 * a2);
      if ( malloc_base_result )
      {
        free_base(*(void **)(a1 + 1032));
        *(_QWORD *)(a1 + 1032) = malloc_base_result;
        unused_written_slot = 1;
        *(_QWORD *)(a1 + 1024) = record_word_offset;
      }
      free_base(nullptr);
      return unused_written_slot;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *errno_sr() = 12;
    return 0;
  }
}

//----- (000000014020EC2C) ----------------------------------------------------
char            sub_14020EC2C(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(char **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(char *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020ECE8) ----------------------------------------------------
char            sub_14020ECE8(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(char **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(char *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020EDA4) ----------------------------------------------------
char            sub_14020EDA4(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(char **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(char *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020EE64) ----------------------------------------------------
char            sub_14020EE64(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(char **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(char *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020EF74) ----------------------------------------------------
char            sub_14020EF74(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int8 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F030) ----------------------------------------------------
char            sub_14020F030(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int8 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F0EC) ----------------------------------------------------
char            sub_14020F0EC(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int8 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F1AC) ----------------------------------------------------
char            sub_14020F1AC(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int8 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F2BC) ----------------------------------------------------
char            sub_14020F2BC(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(__int16 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(__int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F378) ----------------------------------------------------
char            sub_14020F378(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(__int16 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(__int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F434) ----------------------------------------------------
char            sub_14020F434(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(__int16 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(__int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F4F4) ----------------------------------------------------
char            sub_14020F4F4(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(__int16 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(__int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F604) ----------------------------------------------------
char            sub_14020F604(__int64 a1, _BYTE *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_BYTE **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F6BC) ----------------------------------------------------
char            sub_14020F6BC(__int64 a1, _BYTE *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_BYTE **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F79C) ----------------------------------------------------
char            sub_14020F79C(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int16 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F858) ----------------------------------------------------
char            sub_14020F858(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int16 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F914) ----------------------------------------------------
char            sub_14020F914(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int16 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020F9D4) ----------------------------------------------------
char            sub_14020F9D4(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned __int16 **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020FAE4) ----------------------------------------------------
char            sub_14020FAE4(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(int **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020FBA0) ----------------------------------------------------
char            sub_14020FBA0(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(int **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020FC5C) ----------------------------------------------------
char            sub_14020FC5C(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(int **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020FD18) ----------------------------------------------------
char            sub_14020FD18(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(int **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020FDD4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_244(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020FE24) ----------------------------------------------------
char            sub_14020FE24(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned int **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020FEE0) ----------------------------------------------------
char            sub_14020FEE0(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned int **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014020FF9C) ----------------------------------------------------
char            sub_14020FF9C(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned int **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210058) ----------------------------------------------------
char            sub_140210058(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(unsigned int **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(unsigned int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210164) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_252(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210220) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_253(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402102DC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_254(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210398) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_255(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402104B8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_261(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402105B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_265(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402106A8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_269(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402107A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_273(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210884) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_276(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210940) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_277(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402109FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_278(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210AB8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_279(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 3, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 3;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210BC4) ----------------------------------------------------
char            sub_140210BC4(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 scaled_index;
  int loaded_word_3;
  char loaded_word_4;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word_2 = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word_2 > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word_2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      loaded_word = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      goto LABEL_13;
    }
    loaded_word_3 = *(_DWORD *)(a1 + 60);
    loaded_word_4 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 4, loaded_word_4, loaded_word_3) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 4;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_4;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_3;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_13:
  *a2 = loaded_word;
  return 1;
}

//----- (0000000140210C80) ----------------------------------------------------
char            sub_140210C80(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 scaled_index;
  int loaded_word_3;
  char loaded_word_4;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word_2 = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word_2 > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word_2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      loaded_word = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      goto LABEL_13;
    }
    loaded_word_3 = *(_DWORD *)(a1 + 60);
    loaded_word_4 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 4, loaded_word_4, loaded_word_3) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 4;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_4;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_3;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_13:
  *a2 = loaded_word;
  return 1;
}

//----- (0000000140210D3C) ----------------------------------------------------
char            sub_140210D3C(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 scaled_index;
  unsigned int loaded_word_3;
  unsigned __int16 loaded_word_4;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word_2 = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word_2 > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word_2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      loaded_word = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      goto LABEL_13;
    }
    loaded_word_3 = *(_DWORD *)(a1 + 60);
    loaded_word_4 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 4, loaded_word_4, loaded_word_3) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 4;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_4;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_3;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_13:
  *a2 = loaded_word;
  return 1;
}

//----- (0000000140210DF8) ----------------------------------------------------
char            sub_140210DF8(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 scaled_index;
  unsigned int loaded_word_3;
  unsigned __int16 loaded_word_4;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word_2 = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word_2 > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word_2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      loaded_word = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      goto LABEL_13;
    }
    loaded_word_3 = *(_DWORD *)(a1 + 60);
    loaded_word_4 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 4, loaded_word_4, loaded_word_3) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 4;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_4;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_3;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_13:
  *a2 = loaded_word;
  return 1;
}

//----- (0000000140210EB4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_284(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210F14) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_288(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 2, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 2;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140210FD0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_289(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 2, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 2;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014021108C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_290(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 2, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 2;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140211148) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_291(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 2, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 2;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140211254) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_296(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 2, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 2;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140211310) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_297(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 2, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 2;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402113CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_298(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 2, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 2;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140211488) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_299(__int64 a1, _QWORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_QWORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 2, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 2;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140211594) ----------------------------------------------------
char            sub_140211594(__int64 a1, _WORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_WORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214A64(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140211650) ----------------------------------------------------
char            sub_140211650(__int64 a1, _WORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  int loaded_word_2;
  char loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_WORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214C94(a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_BYTE *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (000000014021170C) ----------------------------------------------------
char            sub_14021170C(__int64 a1, _WORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_WORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_140214EC4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (00000001402117CC) ----------------------------------------------------
char            sub_1402117CC(__int64 a1, _WORD *a2)
{
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int loaded_word_2;
  unsigned __int16 loaded_word_3;
  __int64 scaled_index_2;
  char unused_written_slot;

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(_WORD **)(a1 + 8 * scaled_index + 1168);
      return 1;
    }
    loaded_word_2 = *(_DWORD *)(a1 + 60);
    loaded_word_3 = *(_WORD *)(a1 + 66);
    scaled_index_2 = a1 + 1160 + 8 * scaled_index;
    unused_written_slot = 0;
    if ( *(_DWORD *)scaled_index_2 )
    {
      if ( !sub_1402150C4((_QWORD *)a1, scaled_index_2, 1, loaded_word_3, loaded_word_2) )
      {
        *errno_sr() = 22;
        crt_invalid_parameter_noinfo();
        return unused_written_slot;
      }
    }
    else
    {
      *(_DWORD *)scaled_index_2 = 1;
      *(_WORD *)(scaled_index_2 + 4) = loaded_word_3;
      *(_DWORD *)(scaled_index_2 + 16) = loaded_word_2;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

//----- (0000000140211A94) ----------------------------------------------------
bool            sub_140211A94(char a1, __int16 a2, int a3)
{
  __int64 masked_bits;
  bool result;

  if ( a3 == 2 )
    return 0;
  if ( a3 == 3 || a3 == 12 || a3 == 13 )
    return 1;
  masked_bits = a1 & 4;
  result = (_DWORD)masked_bits != 0;
  if ( ((a2 - 99) & 0xFFEF) != 0 )
    return masked_bits == 0;
  return result;
}

//----- (0000000140211CCC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_347(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    loaded_word = *(_QWORD *)(a1 + 1120);
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % a3 + 48;
    a2 /= a3;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140211D54) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_348(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    loaded_word = *(_QWORD *)(a1 + 1120);
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % a3 + 48;
    a2 /= a3;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140211DDC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_349(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    loaded_word = *(_QWORD *)(a1 + 1120);
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % a3 + 48;
    a2 /= a3;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140211E64) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_350(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    loaded_word = *(_QWORD *)(a1 + 1120);
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % a3 + 48;
    a2 /= a3;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140211EEC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_351(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    loaded_word = *(_QWORD *)(a1 + 1120);
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % a3 + 48;
    a2 /= a3;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140211F74) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_352(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    loaded_word = *(_QWORD *)(a1 + 1120);
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % a3 + 48;
    a2 /= a3;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140211FFC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_353(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % a3 + 48;
    a2 /= a3;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (00000001402120A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_354(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % a3 + 48;
    a2 /= a3;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (0000000140212144) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_355(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % a3 + 48;
    a2 /= a3;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (00000001402121E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_356(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % a3 + 48;
    a2 /= a3;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (000000014021228C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_357(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % a3 + 48;
    a2 /= a3;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (0000000140212330) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_358(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % a3 + 48;
    a2 /= a3;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (00000001402123D4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_359(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + saved_loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % input_value + 48;
    a2 /= input_value;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140212464) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_360(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + saved_loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % input_value + 48;
    a2 /= input_value;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (00000001402124F4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_361(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + saved_loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % input_value + 48;
    a2 /= input_value;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140212584) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_362(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + saved_loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % input_value + 48;
    a2 /= input_value;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140212614) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_363(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + saved_loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % input_value + 48;
    a2 /= input_value;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (00000001402126A4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_364(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 integer_difference;
  __int64 result;
  char record_byte_offset;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits = 512;
  }
  integer_difference = shifted_bits + saved_loaded_word - 1;
  for ( *(_QWORD *)(a1 + 72) = integer_difference; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    record_byte_offset = a2 % input_value + 48;
    a2 /= input_value;
    if ( record_byte_offset > 57 )
      record_byte_offset += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = record_byte_offset;
  }
  *(_DWORD *)(a1 + 80) = integer_difference - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

//----- (0000000140212734) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_365(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % input_value + 48;
    a2 /= input_value;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (00000001402127D8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_366(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % input_value + 48;
    a2 /= input_value;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (000000014021287C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_367(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % input_value + 48;
    a2 /= input_value;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (0000000140212920) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_368(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % input_value + 48;
    a2 /= input_value;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (00000001402129C4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_369(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % input_value + 48;
    a2 /= input_value;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (0000000140212A68) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_370(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned __int64 input_value;
  __int64 shifted_bits;
  __int64 scaled_index;
  __int64 result;
  int loaded_word_2;
  unsigned __int16 integer_sum;

  loaded_word = *(_QWORD *)(a1 + 1120);
  saved_loaded_word = a1 + 88;
  input_value = a3;
  if ( loaded_word )
  {
    saved_loaded_word = loaded_word;
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    shifted_bits = 256;
  }
  scaled_index = saved_loaded_word + 2 * (shifted_bits - 1);
  *(_QWORD *)(a1 + 72) = scaled_index;
  for ( result = scaled_index; ; result = *(_QWORD *)(a1 + 72) )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 56);
    if ( loaded_word_2 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = loaded_word_2 - 1;
    integer_sum = a2 % input_value + 48;
    a2 /= input_value;
    if ( integer_sum > 0x39u )
      LOBYTE(integer_sum) = integer_sum + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)integer_sum;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (scaled_index - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

//----- (0000000140212B0C) ----------------------------------------------------
void            sub_140212B0C(__int64 *a1, unsigned __int8 a2, int a3, _DWORD *a4)
{
  int i;
  int scaled_index;

  if ( a3 > 0 )
  {
    for ( i = 0; i < a3; ++i )
    {
      if ( ((*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8))
        && (unsigned int)unknown_libname_207(a2, *a1) == -1 )
      {
        *a4 = -1;
        scaled_index = -1;
      }
      else
      {
        scaled_index = ++*a4;
      }
      if ( scaled_index == -1 )
        break;
    }
  }
}

//----- (0000000140212B98) ----------------------------------------------------
void            sub_140212B98(__int64 *a1, char a2, int a3, _DWORD *a4)
{
  unsigned __int16 input_value;
  int i;
  int scaled_index;

  if ( a3 > 0 )
  {
    input_value = a2;
    for ( i = 0; i < a3; ++i )
    {
      if ( ((*(_DWORD *)(*a1 + 20) & 0x1000) == 0 || *(_QWORD *)(*a1 + 8))
        && (unsigned __int16)sub_140256B38(input_value, *a1) == 0xFFFF )
      {
        *a4 = -1;
        scaled_index = -1;
      }
      else
      {
        scaled_index = ++*a4;
      }
      if ( scaled_index == -1 )
        break;
    }
  }
}

//----- (0000000140212C2C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64            unknown_libname_371(__int64 *a1, char a2, int a3, int *a4)
{
  int iteration_count;
  int i;
  __int64 result;

  if ( a3 > 0 )
  {
    iteration_count = *a4;
    for ( i = 0; i < a3; ++i )
    {
      result = *(_QWORD *)(*a1 + 8);
      if ( *(_QWORD *)(*a1 + 16) == result )
      {
        if ( *(_BYTE *)(*a1 + 24) )
          ++iteration_count;
        else
          iteration_count = -1;
        *a4 = iteration_count;
      }
      else
      {
        *a4 = iteration_count + 1;
        ++*(_QWORD *)(*a1 + 16);
        **(_BYTE **)*a1 = a2;
        result = *a1;
        ++*(_QWORD *)*a1;
        iteration_count = *a4;
      }
      if ( iteration_count == -1 )
        break;
    }
  }
  return result;
}

//----- (0000000140212CA4) ----------------------------------------------------
__int64            sub_140212CA4(__int64 *a1, char a2, int a3, int *a4)
{
  int iteration_count;
  int i;
  __int64 result;

  if ( a3 > 0 )
  {
    iteration_count = *a4;
    for ( i = 0; i < a3; ++i )
    {
      result = *(_QWORD *)(*a1 + 8);
      if ( *(_QWORD *)(*a1 + 16) == result )
      {
        if ( *(_BYTE *)(*a1 + 24) )
          ++iteration_count;
        else
          iteration_count = -1;
        *a4 = iteration_count;
      }
      else
      {
        *a4 = iteration_count + 1;
        ++*(_QWORD *)(*a1 + 16);
        **(_WORD **)*a1 = a2;
        result = *a1;
        *(_QWORD *)*a1 += 2LL;
        iteration_count = *a4;
      }
      if ( iteration_count == -1 )
        break;
    }
  }
  return result;
}

//----- (0000000140213644) ----------------------------------------------------
_LocaleUpdate *           crt_locale_update(_LocaleUpdate *this, struct __crt_locale_pointers *     a2)
{
  __int64 *saved_masked_bits;
  __int128 masked_bits;
  unsigned __int64 call_result;
  int loaded_word;

  *((_BYTE *)this + 24) = 0;
  saved_masked_bits = (__int64 *)((char *)this + 8);
  if ( a2 )
  {
    masked_bits = *(_OWORD *)a2;
LABEL_5:
    *(_OWORD *)saved_masked_bits = masked_bits;
    return this;
  }
  if ( !g_144CBF178 )
  {
    masked_bits = *(_OWORD *)&off_140302578;
    goto LABEL_5;
  }
  call_result = sub_140255A70();
  *(_QWORD *)this = call_result;
  *saved_masked_bits = *(_QWORD *)(call_result + 144);
  *((_QWORD *)this + 2) = *(_QWORD *)(call_result + 136);
  sub_140255D2C(call_result, saved_masked_bits);
  sub_140255D60(*(_QWORD *)this, (__int64 *)this + 2);
  loaded_word = *(_DWORD *)(*(_QWORD *)this + 936LL);
  if ( (loaded_word & 2) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)this + 936LL) = loaded_word | 2;
    *((_BYTE *)this + 24) = 1;
  }
  return this;
}

//----- (000000014021370C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_394(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213730) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_395(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213754) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_396(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213778) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_397(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (000000014021379C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_398(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (00000001402137C0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_399(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (00000001402137E4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_400(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213808) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_401(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (000000014021382C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_402(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213850) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_403(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213874) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_404(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213898) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_405(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (00000001402138BC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_406(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (00000001402138E0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_407(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213904) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_408(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213928) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_409(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (000000014021394C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_410(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213970) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_411(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213994) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_412(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (00000001402139B8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_413(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (00000001402139DC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_414(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213A00) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_415(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213A24) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_416(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213A48) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_417(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213A6C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_418(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213A90) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_419(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213AB4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_420(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213AD8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_421(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213AFC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_422(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213B20) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void            unknown_libname_423(__int64 a1)
{
  free_base(*(void **)(a1 + 1120));
  *(_QWORD *)(a1 + 1120) = 0;
}

//----- (0000000140213B6C) ----------------------------------------------------
void            sub_140213B6C(void **this)
{
  free_base(*(this + 129));
  *(this + 129) = nullptr;
}

//----- (0000000140213B90) ----------------------------------------------------
void **           __crt_unique_heap_ptr__wchar_t____crt_internal_free_policy__operator_assign(void **a1, void **a2)
{
  free_base(*a1);
  *a1 = nullptr;
  *a1 = *a2;
  *a2 = nullptr;
  return a1;
}

//----- (0000000140213BD4)
__int64 sub_140213BD4(__int64 **a1)
{
  struct {uintptr_t thread,locale,multibyte;unsigned char changed;} locale;
  uint64_t context[143]={0};
  __int64 stream=**a1;
  char buffering=sub_140253DEC(stream);
  crt_locale_update((_LocaleUpdate *)(void *)&locale,(struct __crt_locale_pointers *)(uintptr_t)*a1[1]);
  context[0]=*a1[2];
  context[1]=(uintptr_t)&locale.locale;
  context[3]=*a1[3];
  context[4]=*a1[4];
  context[141]=stream;
  unsigned int result=(unsigned int)sub_140215FA4((__int64)(uintptr_t)context);
  free_base((void *)(uintptr_t)context[140]);
  context[140]=0;
  if(locale.changed)*(_DWORD *)(locale.thread+936)&=~2u;
  sub_140253EBC(buffering,stream);
  return result;
}

//----- (0000000140213D1C) ----------------------------------------------------
__int64            _lambda_ee59099aa97e0ff6f003b984c1584058___operator_call(__int64 **a1)
{
  __int64 scaled_index;
  char call_result;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 unused_local;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];
  _QWORD scratch_buffer_2[7];
  int unused_written_slot;
  char unused_written_slot_2;
  __int16 unused_written_slot_3;
  int unused_written_slot_4;
  char unused_written_slot_5;
  __int64 unused_written_slot_6;
  void *Block;
  __int64 unused_written_slot_7;
  int unused_written_slot_8;
  __int64 unused_written_slot_9;
  __int64 unused_written_slot_10;
  int unused_written_slot_11;
  int unused_written_slot_12;
  __int64 unused_local_2;

  scaled_index = **a1;
  call_result = sub_140253DEC(scaled_index);
  crt_locale_update((_LocaleUpdate *)&callee_output_word, (struct __crt_locale_pointers *    )*a1[1]);
  scaled_index_2 = *a1[4];
  scaled_index_3 = **a1;
  scaled_index_4 = *a1[3];
  scaled_index_5 = *a1[2];
  scratch_buffer_2[1] = (uint64)(uintptr_t)(scratch_buffer);
  unused_written_slot_7 = scaled_index_3;
  unused_written_slot_11 = -1;
  unused_written_slot_12 = -1;
  scratch_buffer_2[2] = 0;
  scratch_buffer_2[5] = 0;
  scratch_buffer_2[6] = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  Block = nullptr;
  scratch_buffer_2[0] = scaled_index_5;
  scratch_buffer_2[3] = scaled_index_4;
  scratch_buffer_2[4] = scaled_index_2;
  unused_written_slot_8 = 0;
  unused_written_slot_9 = 0;
  unused_written_slot_10 = scaled_index_4;
  int sr_result = (int)sub_140216AF0((__int64)scratch_buffer_2); /* mov ebx, eax */
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  sub_140253EBC(call_result, scaled_index);
  return (unsigned int)sr_result; /* mov eax, ebx */
}

//----- (0000000140213E84) ----------------------------------------------------
__int64            _lambda_a2288fdbbd702c8f223b438290af01a4___operator_call(__int64 **a1)
{
  __int64 scaled_index;
  char call_result;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 unused_local;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];
  _QWORD scratch_buffer_2[7];
  int unused_written_slot;
  __int16 unused_written_slot_2;
  int unused_written_slot_3;
  char unused_written_slot_4;
  __int64 unused_written_slot_5;
  void *Block;
  __int64 unused_written_slot_6;
  int unused_written_slot_7;
  __int64 unused_written_slot_8;
  __int64 unused_written_slot_9;
  int unused_written_slot_10;
  int unused_written_slot_11;
  __int64 unused_local_2;

  scaled_index = **a1;
  call_result = sub_140253DEC(scaled_index);
  crt_locale_update((_LocaleUpdate *)&callee_output_word, (struct __crt_locale_pointers *    )*a1[1]);
  scaled_index_2 = *a1[4];
  scaled_index_3 = **a1;
  scaled_index_4 = *a1[3];
  scaled_index_5 = *a1[2];
  scratch_buffer_2[1] = (uint64)(uintptr_t)(scratch_buffer);
  unused_written_slot_6 = scaled_index_3;
  unused_written_slot_10 = -1;
  unused_written_slot_11 = -1;
  scratch_buffer_2[2] = 0;
  scratch_buffer_2[5] = 0;
  scratch_buffer_2[6] = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  unused_written_slot_5 = 0;
  Block = nullptr;
  scratch_buffer_2[0] = scaled_index_5;
  scratch_buffer_2[3] = scaled_index_4;
  scratch_buffer_2[4] = scaled_index_2;
  unused_written_slot_7 = 0;
  unused_written_slot_8 = 0;
  unused_written_slot_9 = scaled_index_4;
  int sr_result = (int)sub_140215CFC((__int64)scratch_buffer_2); /* mov ebx, eax */
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  sub_140253EBC(call_result, scaled_index);
  return (unsigned int)sr_result; /* mov eax, ebx */
}

//----- (0000000140213FD0) ----------------------------------------------------
__int64            sub_140213FD0(__int64 **a1)
{
  __int64 scaled_index;
  char call_result;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 *table_value;
  __int64 loaded_word;
  __int64 unused_local;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];
  _QWORD scratch_buffer_2[7];
  int unused_written_slot;
  char unused_written_slot_2;
  __int16 unused_written_slot_3;
  int unused_written_slot_4;
  char unused_written_slot_5;
  __int64 unused_written_slot_6;
  void *Block;
  __int64 unused_written_slot_7;
  int unused_written_slot_8;
  __int64 unused_local_2;

  scaled_index = **a1;
  call_result = sub_140253DEC(scaled_index);
  crt_locale_update((_LocaleUpdate *)&callee_output_word, (struct __crt_locale_pointers *    )*a1[1]);
  scaled_index_2 = *a1[4];
  scaled_index_3 = *a1[3];
  table_value = a1[2];
  loaded_word = *table_value;
  unused_written_slot_7 = **a1;
  scratch_buffer_2[2] = 0;
  scratch_buffer_2[5] = 0;
  scratch_buffer_2[6] = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  Block = nullptr;
  scratch_buffer_2[0] = loaded_word;
  scratch_buffer_2[1] = (uint64)(uintptr_t)(scratch_buffer);
  scratch_buffer_2[3] = scaled_index_3;
  scratch_buffer_2[4] = scaled_index_2;
  unused_written_slot_8 = 0;
  int sr_result = (int)sub_140216DA4((__int64)scratch_buffer_2, (__int64)table_value, loaded_word); /* 0x1402140AC: mov ebx, eax */
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  sub_140253EBC(call_result, scaled_index);
  return (unsigned int)sr_result; /* 0x1402140D8: mov eax, ebx */
}

//----- (0000000140214114) ----------------------------------------------------
__int64            _lambda_7e489fec146d5348dbc86d3cce37c1b5___operator_call(__int64 **a1)
{
  __int64 scaled_index;
  char call_result;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 *table_value;
  __int64 loaded_word;
  __int64 unused_local;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];
  _QWORD scratch_buffer_2[7];
  int unused_written_slot;
  char unused_written_slot_2;
  __int16 unused_written_slot_3;
  int unused_written_slot_4;
  char unused_written_slot_5;
  __int64 unused_written_slot_6;
  void *Block;
  __int64 unused_written_slot_7;
  int unused_written_slot_8;
  __int64 unused_local_2;

  scaled_index = **a1;
  call_result = sub_140253DEC(scaled_index);
  crt_locale_update((_LocaleUpdate *)&callee_output_word, (struct __crt_locale_pointers *    )*a1[1]);
  scaled_index_2 = *a1[4];
  scaled_index_3 = *a1[3];
  table_value = a1[2];
  loaded_word = *table_value;
  unused_written_slot_7 = **a1;
  scratch_buffer_2[2] = 0;
  scratch_buffer_2[5] = 0;
  scratch_buffer_2[6] = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 0;
  Block = nullptr;
  scratch_buffer_2[0] = loaded_word;
  scratch_buffer_2[1] = (uint64)(uintptr_t)(scratch_buffer);
  scratch_buffer_2[3] = scaled_index_3;
  scratch_buffer_2[4] = scaled_index_2;
  unused_written_slot_8 = 0;
  int sr_result = (int)sub_140216878((__int64)scratch_buffer_2, (__int64)table_value, loaded_word); /* mov ebx, eax */
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  sub_140253EBC(call_result, scaled_index);
  return (unsigned int)sr_result; /* mov eax, ebx */
}

//----- (0000000140214248) ----------------------------------------------------
__int64            _lambda_32f117a32e8f8eb613cbf2ca819ed45e___operator_call(__int64 **a1)
{
  __int64 scaled_index;
  char call_result;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 unused_local;
  __int64 callee_output_word;
  _BYTE scratch_buffer[24];
  _QWORD scratch_buffer_2[7];
  int unused_written_slot;
  __int16 unused_written_slot_2;
  int unused_written_slot_3;
  char unused_written_slot_4;
  __int64 unused_written_slot_5;
  void *Block;
  __int64 unused_written_slot_6;
  int unused_written_slot_7;
  __int64 unused_local_2;

  scaled_index = **a1;
  call_result = sub_140253DEC(scaled_index);
  crt_locale_update((_LocaleUpdate *)&callee_output_word, (struct __crt_locale_pointers *    )*a1[1]);
  scaled_index_2 = *a1[4];
  scaled_index_3 = *a1[3];
  scaled_index_4 = *a1[2];
  unused_written_slot_6 = **a1;
  scratch_buffer_2[2] = 0;
  scratch_buffer_2[5] = 0;
  scratch_buffer_2[6] = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  unused_written_slot_5 = 0;
  Block = nullptr;
  scratch_buffer_2[0] = scaled_index_4;
  scratch_buffer_2[1] = (uint64)(uintptr_t)(scratch_buffer);
  scratch_buffer_2[3] = scaled_index_3;
  scratch_buffer_2[4] = scaled_index_2;
  unused_written_slot_7 = 0;
  int sr_result = (int)sub_140215AD4((__int64)scratch_buffer_2); /* mov ebx, eax */
  free_base(Block);
  Block = nullptr;
  if ( scratch_buffer[16] )
    *(_DWORD *)(callee_output_word + 936) &= ~2u;
  sub_140253EBC(call_result, scaled_index);
  return (unsigned int)sr_result; /* mov eax, ebx */
}

//----- (00000001402145B0) ----------------------------------------------------
void            sub_1402145B0(sr_anon_105 *this, char *a2, struct sr_anon_68 *     a3)
{
  char loaded_word;
  char loaded_word_2;
  char loaded_word_3;
  char *text_cursor;
  char *text_cursor_2;
  char *text_cursor_3;
  char input_byte;

  loaded_word = ***(_BYTE ***)(*(_QWORD *)a2 + 248LL);
  loaded_word_2 = *(_BYTE *)this;
  if ( *(_BYTE *)this )
  {
    loaded_word_3 = *(_BYTE *)this;
    do
    {
      loaded_word_2 = loaded_word_3;
      if ( loaded_word_3 == loaded_word )
        break;
      this = (sr_anon_105 *)((char *)this + 1);
      loaded_word_2 = *(_BYTE *)this;
      loaded_word_3 = *(_BYTE *)this;
    }
    while ( *(_BYTE *)this );
  }
  text_cursor = (char *)this + 1;
  if ( loaded_word_2 )
  {
    while ( *text_cursor && ((*text_cursor - 69) & 0xDF) != 0 )
      ++text_cursor;
    text_cursor_2 = text_cursor;
    do
      --text_cursor;
    while ( *text_cursor == 48 );
    text_cursor_3 = text_cursor - 1;
    if ( *text_cursor != loaded_word )
      text_cursor_3 = text_cursor;
    do
    {
      input_byte = *text_cursor_2;
      ++text_cursor_3;
      ++text_cursor_2;
      *text_cursor_3 = input_byte;
    }
    while ( input_byte );
  }
}

//----- (00000001402148E4) ----------------------------------------------------
int *           sub_1402148E4(int **this)
{
  int *result;

  result = *this;
  if ( !*this )
  {
    result = errno_sr();
    *this = result;
  }
  return result;
}

//----- (0000000140214A64) ----------------------------------------------------
bool            sub_140214A64(__int64 a1, __int64 a2, int a3, char a4, int a5)
{
  char loaded_word;
  bool comparison_result;
  char state_address;
  __int64 selection_code;
  char selection_flag;
  char selection_flag_2;
  int loaded_word_2;
  __int64 selection_code_2;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  int loaded_word_3;
  char state_address_2;

  loaded_word = *(_BYTE *)(a2 + 4);
  if ( loaded_word == 112 )
  {
    comparison_result = a4 == 112;
  }
  else
  {
    comparison_result = a4 == 112;
    if ( a4 != 112 )
    {
      state_address = 0;
      if ( ((loaded_word - 83) & 0xDF) != 0 )
      {
        if ( ((a4 - 83) & 0xDF) == 0 )
          return 0;
        if ( ((loaded_word - 67) & 0xDF) != 0 )
        {
          if ( ((a4 - 67) & 0xDF) != 0 )
          {
            selection_code = 0x120821001LL;
            if ( (unsigned __int8)(loaded_word - 88) <= 0x20u && _bittest64(&selection_code, (char)(loaded_word - 88))
              || (comparison_result = loaded_word == 42, selection_flag = 0, comparison_result) )
            {
              selection_flag = 1;
            }
            if ( (unsigned __int8)(a4 - 88) <= 0x20u && _bittest64(&selection_code, (char)(a4 - 88)) || (selection_flag_2 = 0, a4 == 42) )
              selection_flag_2 = 1;
            if ( !selection_flag )
            {
              if ( !selection_flag_2 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( selection_flag == selection_flag_2 )
            {
              loaded_word_2 = *(_DWORD *)(a2 + 16);
              if ( (loaded_word_2 == 9) == (a5 == 9) )
              {
                selection_code_2 = 8;
                if ( loaded_word_2 > 5 )
                {
                  integer_difference_6 = loaded_word_2 - 6;
                  if ( !integer_difference_6 )
                    goto LABEL_27;
                  integer_difference_7 = integer_difference_6 - 1;
                  if ( !integer_difference_7 )
                    goto LABEL_27;
                  integer_difference_2 = integer_difference_7 - 2;
                  if ( !integer_difference_2 )
                    goto LABEL_27;
                }
                else
                {
                  if ( loaded_word_2 == 5 )
                  {
LABEL_27:
                    selection_code_3 = 8;
                    goto LABEL_28;
                  }
                  if ( !loaded_word_2 )
                    goto LABEL_36;
                  integer_difference = loaded_word_2 - 1;
                  if ( !integer_difference )
                  {
                    selection_code_3 = 1;
                    goto LABEL_28;
                  }
                  integer_difference_2 = integer_difference - 1;
                  if ( !integer_difference_2 )
                  {
                    selection_code_3 = 2;
                    goto LABEL_28;
                  }
                }
                integer_difference_3 = integer_difference_2 - 1;
                if ( integer_difference_3 )
                {
                  if ( integer_difference_3 == 1 )
                    goto LABEL_27;
                  selection_code_3 = 0;
LABEL_28:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_50:
                        selection_code_2 = 4;
                        return selection_code_3 == selection_code_2;
                      }
                      if ( a5 == 1 )
                      {
                        selection_code_2 = 1;
                      }
                      else
                      {
                        integer_difference_4 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_33;
                        selection_code_2 = 2;
                      }
                    }
                    return selection_code_3 == selection_code_2;
                  }
                  if ( a5 == 6 )
                    return selection_code_3 == selection_code_2;
                  if ( a5 == 7 )
                    return selection_code_3 == selection_code_2;
                  integer_difference_4 = a5 - 9;
                  if ( a5 == 9 )
                    return selection_code_3 == selection_code_2;
LABEL_33:
                  integer_difference_5 = integer_difference_4 - 1;
                  if ( integer_difference_5 )
                  {
                    if ( integer_difference_5 != 1 )
                      selection_code_2 = 0;
                    return selection_code_3 == selection_code_2;
                  }
                  goto LABEL_50;
                }
LABEL_36:
                selection_code_3 = 4;
                goto LABEL_28;
              }
            }
          }
          return 0;
        }
      }
      else if ( (((loaded_word - 83) & 0xDF) == 0) != (((a4 - 83) & 0xDF) == 0) )
      {
        return 0;
      }
      if ( (((loaded_word - 67) & 0xDF) == 0) != (((a4 - 67) & 0xDF) == 0) )
        return 0;
      loaded_word_3 = *(_DWORD *)(a2 + 16);
      if ( loaded_word_3 != 2 )
      {
        if ( loaded_word_3 == 3 || loaded_word_3 == 12 )
        {
          state_address_2 = 1;
          goto LABEL_62;
        }
        if ( loaded_word_3 != 13 )
        {
          state_address_2 = ((loaded_word - 99) & 0xEF) != 0;
          goto LABEL_62;
        }
      }
      state_address_2 = 0;
LABEL_62:
      if ( a5 != 2 )
      {
        if ( a5 == 3 || a5 == 12 )
        {
          state_address = 1;
        }
        else if ( a5 != 13 )
        {
          state_address = ((a4 - 99) & 0xEF) != 0;
        }
      }
      return state_address_2 == state_address;
    }
  }
  return (loaded_word == 112) ^ !comparison_result;
}

//----- (0000000140214C94) ----------------------------------------------------
bool            sub_140214C94(__int64 a1, __int64 a2, int a3, char a4, int a5)
{
  char loaded_word;
  bool comparison_result;
  char state_address;
  __int64 selection_code;
  char selection_flag;
  char selection_flag_2;
  int loaded_word_2;
  __int64 selection_code_2;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  int loaded_word_3;
  char state_address_2;

  loaded_word = *(_BYTE *)(a2 + 4);
  if ( loaded_word == 112 )
  {
    comparison_result = a4 == 112;
  }
  else
  {
    comparison_result = a4 == 112;
    if ( a4 != 112 )
    {
      state_address = 0;
      if ( ((loaded_word - 83) & 0xDF) != 0 )
      {
        if ( ((a4 - 83) & 0xDF) == 0 )
          return 0;
        if ( ((loaded_word - 67) & 0xDF) != 0 )
        {
          if ( ((a4 - 67) & 0xDF) != 0 )
          {
            selection_code = 0x120821001LL;
            if ( (unsigned __int8)(loaded_word - 88) <= 0x20u && _bittest64(&selection_code, (char)(loaded_word - 88))
              || (comparison_result = loaded_word == 42, selection_flag = 0, comparison_result) )
            {
              selection_flag = 1;
            }
            if ( (unsigned __int8)(a4 - 88) <= 0x20u && _bittest64(&selection_code, (char)(a4 - 88)) || (selection_flag_2 = 0, a4 == 42) )
              selection_flag_2 = 1;
            if ( !selection_flag )
            {
              if ( !selection_flag_2 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( selection_flag == selection_flag_2 )
            {
              loaded_word_2 = *(_DWORD *)(a2 + 16);
              if ( (loaded_word_2 == 9) == (a5 == 9) )
              {
                selection_code_2 = 8;
                if ( loaded_word_2 > 5 )
                {
                  integer_difference_6 = loaded_word_2 - 6;
                  if ( !integer_difference_6 )
                    goto LABEL_27;
                  integer_difference_7 = integer_difference_6 - 1;
                  if ( !integer_difference_7 )
                    goto LABEL_27;
                  integer_difference_2 = integer_difference_7 - 2;
                  if ( !integer_difference_2 )
                    goto LABEL_27;
                }
                else
                {
                  if ( loaded_word_2 == 5 )
                  {
LABEL_27:
                    selection_code_3 = 8;
                    goto LABEL_28;
                  }
                  if ( !loaded_word_2 )
                    goto LABEL_36;
                  integer_difference = loaded_word_2 - 1;
                  if ( !integer_difference )
                  {
                    selection_code_3 = 1;
                    goto LABEL_28;
                  }
                  integer_difference_2 = integer_difference - 1;
                  if ( !integer_difference_2 )
                  {
                    selection_code_3 = 2;
                    goto LABEL_28;
                  }
                }
                integer_difference_3 = integer_difference_2 - 1;
                if ( integer_difference_3 )
                {
                  if ( integer_difference_3 == 1 )
                    goto LABEL_27;
                  selection_code_3 = 0;
LABEL_28:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_50:
                        selection_code_2 = 4;
                        return selection_code_3 == selection_code_2;
                      }
                      if ( a5 == 1 )
                      {
                        selection_code_2 = 1;
                      }
                      else
                      {
                        integer_difference_4 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_33;
                        selection_code_2 = 2;
                      }
                    }
                    return selection_code_3 == selection_code_2;
                  }
                  if ( a5 == 6 )
                    return selection_code_3 == selection_code_2;
                  if ( a5 == 7 )
                    return selection_code_3 == selection_code_2;
                  integer_difference_4 = a5 - 9;
                  if ( a5 == 9 )
                    return selection_code_3 == selection_code_2;
LABEL_33:
                  integer_difference_5 = integer_difference_4 - 1;
                  if ( integer_difference_5 )
                  {
                    if ( integer_difference_5 != 1 )
                      selection_code_2 = 0;
                    return selection_code_3 == selection_code_2;
                  }
                  goto LABEL_50;
                }
LABEL_36:
                selection_code_3 = 4;
                goto LABEL_28;
              }
            }
          }
          return 0;
        }
      }
      else if ( (((loaded_word - 83) & 0xDF) == 0) != (((a4 - 83) & 0xDF) == 0) )
      {
        return 0;
      }
      if ( (((loaded_word - 67) & 0xDF) == 0) != (((a4 - 67) & 0xDF) == 0) )
        return 0;
      loaded_word_3 = *(_DWORD *)(a2 + 16);
      if ( loaded_word_3 != 2 )
      {
        if ( loaded_word_3 == 3 || loaded_word_3 == 12 )
        {
          state_address_2 = 1;
          goto LABEL_62;
        }
        if ( loaded_word_3 != 13 )
        {
          state_address_2 = ((loaded_word - 99) & 0xEF) != 0;
          goto LABEL_62;
        }
      }
      state_address_2 = 0;
LABEL_62:
      if ( a5 != 2 )
      {
        if ( a5 == 3 || a5 == 12 )
        {
          state_address = 1;
        }
        else if ( a5 != 13 )
        {
          state_address = ((a4 - 99) & 0xEF) != 0;
        }
      }
      return state_address_2 == state_address;
    }
  }
  return (loaded_word == 112) ^ !comparison_result;
}

//----- (0000000140214EC4) ----------------------------------------------------
char            sub_140214EC4(_QWORD *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  __int16 loaded_word;
  bool comparison_result;
  __int64 selection_code;
  char bit_test_result;
  char bit_test_result_2;
  int loaded_word_2;
  __int64 selection_code_2;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  bool loaded_word_3;

  loaded_word = *(_WORD *)(a2 + 4);
  if ( loaded_word == 112 )
  {
    comparison_result = a4 == 112;
  }
  else
  {
    comparison_result = a4 == 112;
    if ( a4 != 112 )
    {
      if ( ((loaded_word - 83) & 0xFFDF) != 0 )
      {
        if ( ((a4 - 83) & 0xFFDF) == 0 )
          return 0;
        if ( ((loaded_word - 67) & 0xFFDF) != 0 )
        {
          if ( ((a4 - 67) & 0xFFDF) != 0 )
          {
            selection_code = 0x120821001LL;
            bit_test_result = (unsigned __int16)(loaded_word - 88) <= 0x20u && _bittest64(&selection_code, (unsigned __int16)(loaded_word - 88)) || loaded_word == 42;
            bit_test_result_2 = (unsigned __int16)(a4 - 88) <= 0x20u && _bittest64(&selection_code, (unsigned __int16)(a4 - 88)) || a4 == 42;
            if ( !bit_test_result )
            {
              if ( !bit_test_result_2 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( bit_test_result == bit_test_result_2 )
            {
              loaded_word_2 = *(_DWORD *)(a2 + 16);
              if ( (loaded_word_2 == 9) == (a5 == 9) )
              {
                selection_code_2 = 8;
                if ( loaded_word_2 > 5 )
                {
                  integer_difference_6 = loaded_word_2 - 6;
                  if ( !integer_difference_6 )
                    goto LABEL_29;
                  integer_difference_7 = integer_difference_6 - 1;
                  if ( !integer_difference_7 )
                    goto LABEL_29;
                  integer_difference_2 = integer_difference_7 - 2;
                  if ( !integer_difference_2 )
                    goto LABEL_29;
                }
                else
                {
                  if ( loaded_word_2 == 5 )
                  {
LABEL_29:
                    selection_code_3 = 8;
                    goto LABEL_30;
                  }
                  if ( !loaded_word_2 )
                    goto LABEL_38;
                  integer_difference = loaded_word_2 - 1;
                  if ( !integer_difference )
                  {
                    selection_code_3 = 1;
                    goto LABEL_30;
                  }
                  integer_difference_2 = integer_difference - 1;
                  if ( !integer_difference_2 )
                  {
                    selection_code_3 = 2;
                    goto LABEL_30;
                  }
                }
                integer_difference_3 = integer_difference_2 - 1;
                if ( integer_difference_3 )
                {
                  if ( integer_difference_3 == 1 )
                    goto LABEL_29;
                  selection_code_3 = 0;
LABEL_30:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_52:
                        selection_code_2 = 4;
                        return selection_code_3 == selection_code_2;
                      }
                      if ( a5 == 1 )
                      {
                        selection_code_2 = 1;
                      }
                      else
                      {
                        integer_difference_4 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_35;
                        selection_code_2 = 2;
                      }
                    }
                    return selection_code_3 == selection_code_2;
                  }
                  if ( a5 == 6 )
                    return selection_code_3 == selection_code_2;
                  if ( a5 == 7 )
                    return selection_code_3 == selection_code_2;
                  integer_difference_4 = a5 - 9;
                  if ( a5 == 9 )
                    return selection_code_3 == selection_code_2;
LABEL_35:
                  integer_difference_5 = integer_difference_4 - 1;
                  if ( integer_difference_5 )
                  {
                    if ( integer_difference_5 != 1 )
                      selection_code_2 = 0;
                    return selection_code_3 == selection_code_2;
                  }
                  goto LABEL_52;
                }
LABEL_38:
                selection_code_3 = 4;
                goto LABEL_30;
              }
            }
          }
          return 0;
        }
      }
      else if ( (((loaded_word - 83) & 0xFFDF) == 0) != (((a4 - 83) & 0xFFDF) == 0) )
      {
        return 0;
      }
      if ( (((loaded_word - 67) & 0xFFDF) == 0) == (((a4 - 67) & 0xFFDF) == 0) )
      {
        loaded_word_3 = sub_140211A94(*a1, loaded_word, *(_DWORD *)(a2 + 16));
        if ( loaded_word_3 == sub_140211A94(*a1, a4, a5) )
          return 1;
      }
      return 0;
    }
  }
  return (loaded_word == 112) ^ !comparison_result;
}

//----- (00000001402150C4) ----------------------------------------------------
char            sub_1402150C4(_QWORD *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  __int16 loaded_word;
  bool comparison_result;
  __int64 selection_code;
  char bit_test_result;
  char bit_test_result_2;
  int loaded_word_2;
  __int64 selection_code_2;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  bool loaded_word_3;

  loaded_word = *(_WORD *)(a2 + 4);
  if ( loaded_word == 112 )
  {
    comparison_result = a4 == 112;
  }
  else
  {
    comparison_result = a4 == 112;
    if ( a4 != 112 )
    {
      if ( ((loaded_word - 83) & 0xFFDF) != 0 )
      {
        if ( ((a4 - 83) & 0xFFDF) == 0 )
          return 0;
        if ( ((loaded_word - 67) & 0xFFDF) != 0 )
        {
          if ( ((a4 - 67) & 0xFFDF) != 0 )
          {
            selection_code = 0x120821001LL;
            bit_test_result = (unsigned __int16)(loaded_word - 88) <= 0x20u && _bittest64(&selection_code, (unsigned __int16)(loaded_word - 88)) || loaded_word == 42;
            bit_test_result_2 = (unsigned __int16)(a4 - 88) <= 0x20u && _bittest64(&selection_code, (unsigned __int16)(a4 - 88)) || a4 == 42;
            if ( !bit_test_result )
            {
              if ( !bit_test_result_2 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( bit_test_result == bit_test_result_2 )
            {
              loaded_word_2 = *(_DWORD *)(a2 + 16);
              if ( (loaded_word_2 == 9) == (a5 == 9) )
              {
                selection_code_2 = 8;
                if ( loaded_word_2 > 5 )
                {
                  integer_difference_6 = loaded_word_2 - 6;
                  if ( !integer_difference_6 )
                    goto LABEL_29;
                  integer_difference_7 = integer_difference_6 - 1;
                  if ( !integer_difference_7 )
                    goto LABEL_29;
                  integer_difference_2 = integer_difference_7 - 2;
                  if ( !integer_difference_2 )
                    goto LABEL_29;
                }
                else
                {
                  if ( loaded_word_2 == 5 )
                  {
LABEL_29:
                    selection_code_3 = 8;
                    goto LABEL_30;
                  }
                  if ( !loaded_word_2 )
                    goto LABEL_38;
                  integer_difference = loaded_word_2 - 1;
                  if ( !integer_difference )
                  {
                    selection_code_3 = 1;
                    goto LABEL_30;
                  }
                  integer_difference_2 = integer_difference - 1;
                  if ( !integer_difference_2 )
                  {
                    selection_code_3 = 2;
                    goto LABEL_30;
                  }
                }
                integer_difference_3 = integer_difference_2 - 1;
                if ( integer_difference_3 )
                {
                  if ( integer_difference_3 == 1 )
                    goto LABEL_29;
                  selection_code_3 = 0;
LABEL_30:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_52:
                        selection_code_2 = 4;
                        return selection_code_3 == selection_code_2;
                      }
                      if ( a5 == 1 )
                      {
                        selection_code_2 = 1;
                      }
                      else
                      {
                        integer_difference_4 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_35;
                        selection_code_2 = 2;
                      }
                    }
                    return selection_code_3 == selection_code_2;
                  }
                  if ( a5 == 6 )
                    return selection_code_3 == selection_code_2;
                  if ( a5 == 7 )
                    return selection_code_3 == selection_code_2;
                  integer_difference_4 = a5 - 9;
                  if ( a5 == 9 )
                    return selection_code_3 == selection_code_2;
LABEL_35:
                  integer_difference_5 = integer_difference_4 - 1;
                  if ( integer_difference_5 )
                  {
                    if ( integer_difference_5 != 1 )
                      selection_code_2 = 0;
                    return selection_code_3 == selection_code_2;
                  }
                  goto LABEL_52;
                }
LABEL_38:
                selection_code_3 = 4;
                goto LABEL_30;
              }
            }
          }
          return 0;
        }
      }
      else if ( (((loaded_word - 83) & 0xFFDF) == 0) != (((a4 - 83) & 0xFFDF) == 0) )
      {
        return 0;
      }
      if ( (((loaded_word - 67) & 0xFFDF) == 0) == (((a4 - 67) & 0xFFDF) == 0) )
      {
        loaded_word_3 = sub_140211A94(*a1, loaded_word, *(_DWORD *)(a2 + 16));
        if ( loaded_word_3 == sub_140211A94(*a1, a4, a5) )
          return 1;
      }
      return 0;
    }
  }
  return (loaded_word == 112) ^ !comparison_result;
}

//----- (0000000140215324) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_450(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  char unused_written_slot;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  unused_written_slot = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CCCC(loaded_word_2 - 1, (__int64 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
    unused_written_slot = 0;
  else
    *(_QWORD *)(a1 + 24) = selection_flag;
  if ( !*errno_sr_result && loaded_word )
    *errno_sr_result = loaded_word;
  return unused_written_slot;
}

//----- (00000001402153C8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_451(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  char unused_written_slot;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  unused_written_slot = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CCCC(loaded_word_2 - 1, (__int64 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
    unused_written_slot = 0;
  else
    *(_QWORD *)(a1 + 24) = selection_flag;
  if ( !*errno_sr_result && loaded_word )
    *errno_sr_result = loaded_word;
  return unused_written_slot;
}

//----- (000000014021546C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_452(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  char unused_written_slot;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  unused_written_slot = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CCCC(loaded_word_2 - 1, (__int64 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
    unused_written_slot = 0;
  else
    *(_QWORD *)(a1 + 24) = selection_flag;
  if ( !*errno_sr_result && loaded_word )
    *errno_sr_result = loaded_word;
  return unused_written_slot;
}

//----- (0000000140215510) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_453(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  char unused_written_slot;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  unused_written_slot = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CCCC(loaded_word_2 - 1, (__int64 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
    unused_written_slot = 0;
  else
    *(_QWORD *)(a1 + 24) = selection_flag;
  if ( !*errno_sr_result && loaded_word )
    *errno_sr_result = loaded_word;
  return unused_written_slot;
}

//----- (00000001402155B4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_454(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  char unused_written_slot;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  unused_written_slot = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CCCC(loaded_word_2 - 1, (__int64 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
    unused_written_slot = 0;
  else
    *(_QWORD *)(a1 + 24) = selection_flag;
  if ( !*errno_sr_result && loaded_word )
    *errno_sr_result = loaded_word;
  return unused_written_slot;
}

//----- (0000000140215658) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_455(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  char unused_written_slot;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  unused_written_slot = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CCCC(loaded_word_2 - 1, (__int64 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
    unused_written_slot = 0;
  else
    *(_QWORD *)(a1 + 24) = selection_flag;
  if ( !*errno_sr_result && loaded_word )
    *errno_sr_result = loaded_word;
  return unused_written_slot;
}

//----- (00000001402156FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_456(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  char result;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(loaded_word_2 - 2), (unsigned __int16 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = selection_flag;
    result = 1;
  }
  if ( !*errno_sr_result )
  {
    if ( loaded_word )
      *errno_sr_result = loaded_word;
  }
  return result;
}

//----- (00000001402157A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_457(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  char result;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(loaded_word_2 - 2), (unsigned __int16 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = selection_flag;
    result = 1;
  }
  if ( !*errno_sr_result )
  {
    if ( loaded_word )
      *errno_sr_result = loaded_word;
  }
  return result;
}

//----- (0000000140215844) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_458(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  char result;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(loaded_word_2 - 2), (unsigned __int16 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = selection_flag;
    result = 1;
  }
  if ( !*errno_sr_result )
  {
    if ( loaded_word )
      *errno_sr_result = loaded_word;
  }
  return result;
}

//----- (00000001402158E8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_459(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  char result;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(loaded_word_2 - 2), (unsigned __int16 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = selection_flag;
    result = 1;
  }
  if ( !*errno_sr_result )
  {
    if ( loaded_word )
      *errno_sr_result = loaded_word;
  }
  return result;
}

//----- (000000014021598C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_460(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  char result;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(loaded_word_2 - 2), (unsigned __int16 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = selection_flag;
    result = 1;
  }
  if ( !*errno_sr_result )
  {
    if ( loaded_word )
      *errno_sr_result = loaded_word;
  }
  return result;
}

//----- (0000000140215A30) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_461(__int64 a1, _DWORD *a2)
{
  int *errno_sr_result;
  int loaded_word;
  __int64 loaded_word_2;
  int *errno_sr_result_2;
  char result;
  unsigned __int64 selection_flag;

  errno_sr_result = *(int **)(a1 + 16);
  if ( !errno_sr_result )
  {
    errno_sr_result = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result);
  }
  loaded_word = *errno_sr_result;
  *errno_sr_result = 0;
  loaded_word_2 = *(_QWORD *)(a1 + 24);
  selection_flag = 0;
  *a2 = sub_14023CDD4((unsigned __int16 *)(loaded_word_2 - 2), (unsigned __int16 *)&selection_flag, 0xAu);
  errno_sr_result_2 = *(int **)(a1 + 16);
  if ( !errno_sr_result_2 )
  {
    errno_sr_result_2 = errno_sr();
    *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(errno_sr_result_2);
  }
  if ( *errno_sr_result_2 == 34 || selection_flag < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = selection_flag;
    result = 1;
  }
  if ( !*errno_sr_result )
  {
    if ( loaded_word )
      *errno_sr_result = loaded_word;
  }
  return result;
}

//----- (0000000140215AD4) ----------------------------------------------------
__int64            sub_140215AD4(__int64 a1)
{
  __int64 loaded_word;
  __int64 unrecovered_register_value;
  char loaded_word_2;
  __int64 loaded_word_3;
  int integer_difference;
  int shifted_bits;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_450_result;
  _DWORD *record_pointer;
  int loaded_word_4;
  int loaded_word_5;
  char loaded_word_6;
  char *loaded_record_pointer;
  char input_byte;

  loaded_word = *(_QWORD *)(a1 + 1128);
  if ( !loaded_word )
    goto LABEL_53;
  if ( sub_14022389C(loaded_word) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
LABEL_6:
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            loaded_record_pointer = *(char **)(a1 + 24);
            input_byte = *loaded_record_pointer;
            *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
            if ( !input_byte )
            {
              ++*(_QWORD *)(a1 + 24);
LABEL_49:
              if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
              {
                if ( ++*(_DWORD *)(a1 + 1136) == 2 )
                  return *(unsigned int *)(a1 + 40);
                goto LABEL_6;
              }
LABEL_53:
              *errno_sr() = 22;
              crt_invalid_parameter_noinfo();
              return 0xFFFFFFFFLL;
            }
            ++*(_QWORD *)(a1 + 24);
            if ( *(int *)(a1 + 40) < 0 )
              goto LABEL_49;
            loaded_word_2 = *(_BYTE *)(a1 + 65);
            loaded_word_3 = *(unsigned int *)(a1 + 44);
            if ( (unsigned __int8)(loaded_word_2 - 32) > 0x5Au )
            {
              integer_difference = 0;
            }
            else
            {
              _mm_lfence();
              integer_difference = byte_140284C60[loaded_word_2 - 32] & 0xF;
            }
            shifted_bits = byte_140284C60[(unsigned int)(loaded_word_3 + 8 * integer_difference + integer_difference)] >> 4;
            *(_DWORD *)(a1 + 44) = shifted_bits;
            if ( shifted_bits == 8 )
              goto LABEL_53;
            if ( !shifted_bits )
            {
              unknown_libname_450_result = sub_140217CE0(a1);
              goto LABEL_46;
            }
            integer_difference_2 = shifted_bits - 1;
            if ( integer_difference_2 )
              break;
            *(_DWORD *)(a1 + 52) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 56) = -1;
            *(_BYTE *)(a1 + 84) = 0;
          }
          integer_difference_3 = integer_difference_2 - 1;
          if ( integer_difference_3 )
            break;
          loaded_word_6 = *(_BYTE *)(a1 + 65);
          switch ( loaded_word_6 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
        integer_difference_4 = integer_difference_3 - 1;
        if ( integer_difference_4 )
          break;
        if ( *(_BYTE *)(a1 + 65) == 42 )
        {
          *(_QWORD *)(a1 + 32) += 8LL;
          loaded_word_5 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
          *(_DWORD *)(a1 + 52) = loaded_word_5;
          if ( loaded_word_5 < 0 )
          {
            *(_DWORD *)(a1 + 48) |= 4u;
            *(_DWORD *)(a1 + 52) = -loaded_word_5;
          }
          goto LABEL_33;
        }
        record_pointer = (_DWORD *)(a1 + 52);
LABEL_24:
        unknown_libname_450_result = unknown_libname_450(a1, record_pointer);
LABEL_46:
        if ( !unknown_libname_450_result )
          return 0xFFFFFFFFLL;
      }
      integer_difference_5 = integer_difference_4 - 1;
      if ( integer_difference_5 )
      {
        integer_difference_6 = integer_difference_5 - 1;
        if ( integer_difference_6 )
        {
          integer_difference_7 = integer_difference_6 - 1;
          if ( integer_difference_7 )
          {
            if ( integer_difference_7 != 1 )
              return 0xFFFFFFFFLL;
            unknown_libname_450_result = sub_14021A044(a1, loaded_word_3, unrecovered_register_value);
          }
          else
          {
            unknown_libname_450_result = sub_140218DFC(a1, loaded_word_3, unrecovered_register_value);
          }
          goto LABEL_46;
        }
        if ( *(_BYTE *)(a1 + 65) == 42 )
        {
          *(_QWORD *)(a1 + 32) += 8LL;
          loaded_word_4 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
          if ( loaded_word_4 < 0 )
            loaded_word_4 = -1;
          *(_DWORD *)(a1 + 56) = loaded_word_4;
LABEL_33:
          unknown_libname_450_result = 1;
          goto LABEL_46;
        }
        record_pointer = (_DWORD *)(a1 + 56);
        goto LABEL_24;
      }
      *(_DWORD *)(a1 + 56) = 0;
    }
  }
  return 0xFFFFFFFFLL;
}

//----- (0000000140215CFC) ----------------------------------------------------
__int64            sub_140215CFC(__int64 a1)
{
  __int64 loaded_word;
  int loaded_word_2;
  _BYTE *loaded_record_pointer;
  int *record_pointer;
  int *record_pointer_2;
  char loaded_word_3;
  int integer_difference;
  int loaded_word_4;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_451_result;
  __int64 input_value;
  _DWORD *record_pointer_3;
  int loaded_word_5;
  char loaded_word_6;
  char *loaded_record_pointer_2;
  char input_byte;

  loaded_word = *(_QWORD *)(a1 + 1128);
  if ( !loaded_word )
  {
LABEL_2:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( !sub_14022389C(loaded_word) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    loaded_word_2 = ++*(_DWORD *)(a1 + 1144);
    if ( loaded_word_2 == 3 || loaded_word_2 == 2 && *(_DWORD *)(a1 + 1148) == 1 )
      return *(unsigned int *)(a1 + 40);
    loaded_record_pointer = *(_BYTE **)(a1 + 1152);
    record_pointer = (int *)(a1 + 52);
    record_pointer_2 = (int *)(a1 + 56);
    *(_DWORD *)(a1 + 1148) = 0;
    *(_DWORD *)(a1 + 3560) = -1;
    *(_DWORD *)(a1 + 3564) = -1;
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer);
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    LOBYTE(loaded_record_pointer) = *loaded_record_pointer;
    *(_BYTE *)(a1 + 65) = (_BYTE)loaded_record_pointer;
    if ( (_BYTE)loaded_record_pointer )
    {
      do
      {
        ++*(_QWORD *)(a1 + 24);
        if ( *(int *)(a1 + 40) < 0 )
          goto LABEL_59;
        loaded_word_3 = *(_BYTE *)(a1 + 65);
        if ( (unsigned __int8)(loaded_word_3 - 32) > 0x5Au )
        {
          integer_difference = 0;
        }
        else
        {
          _mm_lfence();
          integer_difference = byte_140284C60[loaded_word_3 - 32] & 0xF;
        }
        *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * integer_difference + integer_difference] >> 4;
        if ( !unknown_libname_567(a1) )
          return 0xFFFFFFFFLL;
        loaded_word_4 = *(_DWORD *)(a1 + 44);
        if ( loaded_word_4 == 8 )
          goto LABEL_2;
        if ( !loaded_word_4 )
        {
          unknown_libname_451_result = sub_140217D50(a1);
          goto LABEL_56;
        }
        integer_difference_2 = loaded_word_4 - 1;
        if ( integer_difference_2 )
        {
          integer_difference_3 = integer_difference_2 - 1;
          if ( integer_difference_3 )
          {
            integer_difference_4 = integer_difference_3 - 1;
            if ( integer_difference_4 )
            {
              integer_difference_5 = integer_difference_4 - 1;
              if ( integer_difference_5 )
              {
                integer_difference_6 = integer_difference_5 - 1;
                if ( integer_difference_6 )
                {
                  integer_difference_7 = integer_difference_6 - 1;
                  if ( integer_difference_7 )
                  {
                    if ( integer_difference_7 != 1 )
                      return 0xFFFFFFFFLL;
                    unknown_libname_451_result = sub_14021A2C8(a1);
                  }
                  else
                  {
                    unknown_libname_451_result = sub_140218F70(a1);
                  }
                  goto LABEL_56;
                }
                input_value = a1;
                if ( *(_BYTE *)(a1 + 65) != 42 )
                {
                  record_pointer_3 = (_DWORD *)(a1 + 56);
LABEL_29:
                  unknown_libname_451_result = unknown_libname_451(input_value, record_pointer_3);
                  goto LABEL_56;
                }
                if ( !sub_140222840(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  if ( *record_pointer_2 < 0 )
                    *record_pointer_2 = -1;
                  goto LABEL_43;
                }
              }
              else
              {
                *record_pointer_2 = 0;
              }
            }
            else
            {
              input_value = a1;
              if ( *(_BYTE *)(a1 + 65) != 42 )
              {
                record_pointer_3 = (_DWORD *)(a1 + 52);
                goto LABEL_29;
              }
              if ( !sub_140222390(a1) )
                return 0xFFFFFFFFLL;
              if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
              {
                loaded_word_5 = *record_pointer;
                if ( *record_pointer < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *record_pointer = -loaded_word_5;
                }
LABEL_43:
                unknown_libname_451_result = 1;
LABEL_56:
                if ( !unknown_libname_451_result )
                  return 0xFFFFFFFFLL;
              }
            }
          }
          else
          {
            loaded_word_6 = *(_BYTE *)(a1 + 65);
            switch ( loaded_word_6 )
            {
              case ' ':
                *(_DWORD *)(a1 + 48) |= 2u;
                break;
              case '#':
                *(_DWORD *)(a1 + 48) |= 0x20u;
                break;
              case '+':
                *(_DWORD *)(a1 + 48) |= 1u;
                break;
              case '-':
                *(_DWORD *)(a1 + 48) |= 4u;
                break;
              case '0':
                *(_DWORD *)(a1 + 48) |= 8u;
                break;
            }
          }
        }
        else
        {
          *record_pointer = 0;
          *(_BYTE *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 48) = 0;
          *record_pointer_2 = -1;
          *(_DWORD *)(a1 + 60) = 0;
          *(_BYTE *)(a1 + 84) = 0;
        }
        loaded_record_pointer_2 = *(char **)(a1 + 24);
        input_byte = *loaded_record_pointer_2;
        *(_BYTE *)(a1 + 65) = *loaded_record_pointer_2;
      }
      while ( input_byte );
    }
    ++*(_QWORD *)(a1 + 24);
LABEL_59:
    if ( !unknown_libname_575(a1) )
      return 0xFFFFFFFFLL;
  }
}

//----- (0000000140215FA4) ----------------------------------------------------
__int64            sub_140215FA4(__int64 a1)
{
  __int64 loaded_word;
  __int64 unrecovered_register_value;
  char loaded_word_2;
  __int64 loaded_word_3;
  int integer_difference;
  int shifted_bits;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_452_result;
  _DWORD *record_pointer;
  int loaded_word_4;
  int loaded_word_5;
  char loaded_word_6;
  char *loaded_record_pointer;
  char input_byte;

  loaded_word = *(_QWORD *)(a1 + 1128);
  if ( !loaded_word )
  {
LABEL_2:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( !sub_14022389C(loaded_word) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  do
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      loaded_record_pointer = *(char **)(a1 + 24);
      input_byte = *loaded_record_pointer;
      *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
      if ( !input_byte )
        break;
      ++*(_QWORD *)(a1 + 24);
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_51;
      loaded_word_2 = *(_BYTE *)(a1 + 65);
      loaded_word_3 = *(unsigned int *)(a1 + 44);
      if ( (unsigned __int8)(loaded_word_2 - 32) > 0x5Au )
      {
        integer_difference = 0;
      }
      else
      {
        _mm_lfence();
        integer_difference = byte_140284C00[loaded_word_2 - 32] & 0xF;
      }
      shifted_bits = byte_140284C00[(unsigned int)(loaded_word_3 + 8 * integer_difference)] >> 4;
      *(_DWORD *)(a1 + 44) = shifted_bits;
      if ( shifted_bits == 8 )
        goto LABEL_2;
      if ( !shifted_bits )
      {
        unknown_libname_452_result = sub_140217DE4(a1);
        goto LABEL_48;
      }
      integer_difference_2 = shifted_bits - 1;
      if ( integer_difference_2 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          integer_difference_4 = integer_difference_3 - 1;
          if ( integer_difference_4 )
          {
            integer_difference_5 = integer_difference_4 - 1;
            if ( integer_difference_5 )
            {
              integer_difference_6 = integer_difference_5 - 1;
              if ( integer_difference_6 )
              {
                integer_difference_7 = integer_difference_6 - 1;
                if ( integer_difference_7 )
                {
                  if ( integer_difference_7 != 1 )
                    return 0xFFFFFFFFLL;
                  unknown_libname_452_result = sub_14021A564(a1, loaded_word_3, unrecovered_register_value);
                }
                else
                {
                  unknown_libname_452_result = sub_1402190E4(a1, loaded_word_3, unrecovered_register_value);
                }
                goto LABEL_48;
              }
              if ( *(_BYTE *)(a1 + 65) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                loaded_word_4 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                if ( loaded_word_4 < 0 )
                  loaded_word_4 = -1;
                *(_DWORD *)(a1 + 56) = loaded_word_4;
LABEL_35:
                unknown_libname_452_result = 1;
                goto LABEL_48;
              }
              record_pointer = (_DWORD *)(a1 + 56);
              goto LABEL_26;
            }
            *(_DWORD *)(a1 + 56) = 0;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 65) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              loaded_word_5 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              *(_DWORD *)(a1 + 52) = loaded_word_5;
              if ( loaded_word_5 < 0 )
              {
                *(_DWORD *)(a1 + 48) |= 4u;
                *(_DWORD *)(a1 + 52) = -loaded_word_5;
              }
              goto LABEL_35;
            }
            record_pointer = (_DWORD *)(a1 + 52);
LABEL_26:
            unknown_libname_452_result = unknown_libname_452(a1, record_pointer);
LABEL_48:
            if ( !unknown_libname_452_result )
              return 0xFFFFFFFFLL;
          }
        }
        else
        {
          loaded_word_6 = *(_BYTE *)(a1 + 65);
          switch ( loaded_word_6 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 52) = 0;
        *(_DWORD *)(a1 + 48) = 0;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    ++*(_QWORD *)(a1 + 24);
LABEL_51:
    ++*(_DWORD *)(a1 + 1136);
  }
  while ( *(_DWORD *)(a1 + 1136) != 2 );
  return *(unsigned int *)(a1 + 40);
}

//----- (00000001402161BC) ----------------------------------------------------
__int64            sub_1402161BC(__int64 a1, __int64 a2, __int64 a3)
{
  char loaded_word;
  __int64 loaded_word_2;
  int integer_difference;
  int shifted_bits;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_453_result;
  _DWORD *record_pointer;
  int loaded_word_3;
  int loaded_word_4;
  char loaded_word_5;
  char *loaded_record_pointer;
  char input_byte;

  if ( !*(_QWORD *)(a1 + 1128) )
    goto LABEL_52;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  while ( 2 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      loaded_record_pointer = *(char **)(a1 + 24);
      input_byte = *loaded_record_pointer;
      *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
      if ( !input_byte )
        break;
      ++*(_QWORD *)(a1 + 24);
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_48;
      loaded_word = *(_BYTE *)(a1 + 65);
      loaded_word_2 = *(unsigned int *)(a1 + 44);
      if ( (unsigned __int8)(loaded_word - 32) > 0x5Au )
      {
        integer_difference = 0;
      }
      else
      {
        _mm_lfence();
        integer_difference = byte_140284C60[loaded_word - 32] & 0xF;
      }
      shifted_bits = byte_140284C60[(unsigned int)(loaded_word_2 + 8 * integer_difference + integer_difference)] >> 4;
      *(_DWORD *)(a1 + 44) = shifted_bits;
      if ( shifted_bits == 8 )
        goto LABEL_52;
      if ( !shifted_bits )
      {
        unknown_libname_453_result = sub_140217E54(a1);
        goto LABEL_45;
      }
      integer_difference_2 = shifted_bits - 1;
      if ( integer_difference_2 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          integer_difference_4 = integer_difference_3 - 1;
          if ( integer_difference_4 )
          {
            integer_difference_5 = integer_difference_4 - 1;
            if ( integer_difference_5 )
            {
              integer_difference_6 = integer_difference_5 - 1;
              if ( integer_difference_6 )
              {
                integer_difference_7 = integer_difference_6 - 1;
                if ( integer_difference_7 )
                {
                  if ( integer_difference_7 != 1 )
                    return 0xFFFFFFFFLL;
                  unknown_libname_453_result = sub_14021A7E8(a1, loaded_word_2, a3);
                }
                else
                {
                  unknown_libname_453_result = sub_140219258(a1, loaded_word_2, a3);
                }
                goto LABEL_45;
              }
              if ( *(_BYTE *)(a1 + 65) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                loaded_word_3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                if ( loaded_word_3 < 0 )
                  loaded_word_3 = -1;
                *(_DWORD *)(a1 + 56) = loaded_word_3;
LABEL_32:
                unknown_libname_453_result = 1;
                goto LABEL_45;
              }
              record_pointer = (_DWORD *)(a1 + 56);
              goto LABEL_23;
            }
            *(_DWORD *)(a1 + 56) = 0;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 65) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              loaded_word_4 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              *(_DWORD *)(a1 + 52) = loaded_word_4;
              if ( loaded_word_4 < 0 )
              {
                *(_DWORD *)(a1 + 48) |= 4u;
                *(_DWORD *)(a1 + 52) = -loaded_word_4;
              }
              goto LABEL_32;
            }
            record_pointer = (_DWORD *)(a1 + 52);
LABEL_23:
            unknown_libname_453_result = unknown_libname_453(a1, record_pointer);
LABEL_45:
            if ( !unknown_libname_453_result )
              return 0xFFFFFFFFLL;
          }
        }
        else
        {
          loaded_word_5 = *(_BYTE *)(a1 + 65);
          switch ( loaded_word_5 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    ++*(_QWORD *)(a1 + 24);
LABEL_48:
    if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    {
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
      continue;
    }
    break;
  }
LABEL_52:
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0xFFFFFFFFLL;
}

//----- (00000001402163D4) ----------------------------------------------------
__int64            sub_1402163D4(__int64 a1)
{
  int loaded_word;
  _BYTE *loaded_record_pointer;
  int *record_pointer;
  int *record_pointer_2;
  char loaded_word_2;
  int integer_difference;
  int loaded_word_3;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_454_result;
  __int64 input_value;
  _DWORD *record_pointer_3;
  int loaded_word_4;
  char loaded_word_5;
  char *loaded_record_pointer_2;
  char input_byte;

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      loaded_word = ++*(_DWORD *)(a1 + 1144);
      if ( loaded_word == 3 || loaded_word == 2 && *(_DWORD *)(a1 + 1148) == 1 )
        return *(unsigned int *)(a1 + 40);
      loaded_record_pointer = *(_BYTE **)(a1 + 1152);
      record_pointer = (int *)(a1 + 52);
      record_pointer_2 = (int *)(a1 + 56);
      *(_DWORD *)(a1 + 1148) = 0;
      *(_DWORD *)(a1 + 3560) = -1;
      *(_DWORD *)(a1 + 3564) = -1;
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer);
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      LOBYTE(loaded_record_pointer) = *loaded_record_pointer;
      *(_BYTE *)(a1 + 65) = (_BYTE)loaded_record_pointer;
      if ( (_BYTE)loaded_record_pointer )
      {
        do
        {
          ++*(_QWORD *)(a1 + 24);
          if ( *(int *)(a1 + 40) < 0 )
            goto LABEL_56;
          loaded_word_2 = *(_BYTE *)(a1 + 65);
          if ( (unsigned __int8)(loaded_word_2 - 32) > 0x5Au )
          {
            integer_difference = 0;
          }
          else
          {
            _mm_lfence();
            integer_difference = byte_140284C60[loaded_word_2 - 32] & 0xF;
          }
          *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * integer_difference + integer_difference] >> 4;
          if ( !unknown_libname_568(a1) )
            return 0xFFFFFFFFLL;
          loaded_word_3 = *(_DWORD *)(a1 + 44);
          if ( loaded_word_3 == 8 )
            goto LABEL_58;
          if ( !loaded_word_3 )
          {
            unknown_libname_454_result = sub_140217EC8(a1);
            goto LABEL_53;
          }
          integer_difference_2 = loaded_word_3 - 1;
          if ( integer_difference_2 )
          {
            integer_difference_3 = integer_difference_2 - 1;
            if ( integer_difference_3 )
            {
              integer_difference_4 = integer_difference_3 - 1;
              if ( integer_difference_4 )
              {
                integer_difference_5 = integer_difference_4 - 1;
                if ( integer_difference_5 )
                {
                  integer_difference_6 = integer_difference_5 - 1;
                  if ( integer_difference_6 )
                  {
                    integer_difference_7 = integer_difference_6 - 1;
                    if ( integer_difference_7 )
                    {
                      if ( integer_difference_7 != 1 )
                        return 0xFFFFFFFFLL;
                      unknown_libname_454_result = sub_14021AA50(a1);
                    }
                    else
                    {
                      unknown_libname_454_result = sub_1402193CC(a1);
                    }
                    goto LABEL_53;
                  }
                  input_value = a1;
                  if ( *(_BYTE *)(a1 + 65) != 42 )
                  {
                    record_pointer_3 = (_DWORD *)(a1 + 56);
LABEL_26:
                    unknown_libname_454_result = unknown_libname_454(input_value, record_pointer_3);
                    goto LABEL_53;
                  }
                  if ( !sub_140222958(a1) )
                    return 0xFFFFFFFFLL;
                  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                  {
                    if ( *record_pointer_2 < 0 )
                      *record_pointer_2 = -1;
                    goto LABEL_40;
                  }
                }
                else
                {
                  *record_pointer_2 = 0;
                }
              }
              else
              {
                input_value = a1;
                if ( *(_BYTE *)(a1 + 65) != 42 )
                {
                  record_pointer_3 = (_DWORD *)(a1 + 52);
                  goto LABEL_26;
                }
                if ( !sub_1402224A8(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  loaded_word_4 = *record_pointer;
                  if ( *record_pointer < 0 )
                  {
                    *(_DWORD *)(a1 + 48) |= 4u;
                    *record_pointer = -loaded_word_4;
                  }
LABEL_40:
                  unknown_libname_454_result = 1;
LABEL_53:
                  if ( !unknown_libname_454_result )
                    return 0xFFFFFFFFLL;
                }
              }
            }
            else
            {
              loaded_word_5 = *(_BYTE *)(a1 + 65);
              switch ( loaded_word_5 )
              {
                case ' ':
                  *(_DWORD *)(a1 + 48) |= 2u;
                  break;
                case '#':
                  *(_DWORD *)(a1 + 48) |= 0x20u;
                  break;
                case '+':
                  *(_DWORD *)(a1 + 48) |= 1u;
                  break;
                case '-':
                  *(_DWORD *)(a1 + 48) |= 4u;
                  break;
                case '0':
                  *(_DWORD *)(a1 + 48) |= 8u;
                  break;
              }
            }
          }
          else
          {
            *record_pointer = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *record_pointer_2 = -1;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 84) = 0;
          }
          loaded_record_pointer_2 = *(char **)(a1 + 24);
          input_byte = *loaded_record_pointer_2;
          *(_BYTE *)(a1 + 65) = *loaded_record_pointer_2;
        }
        while ( input_byte );
      }
      ++*(_QWORD *)(a1 + 24);
LABEL_56:
      if ( !unknown_libname_576(a1) )
        return 0xFFFFFFFFLL;
    }
  }
  else
  {
LABEL_58:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014021666C) ----------------------------------------------------
__int64            sub_14021666C(__int64 a1, __int64 a2, __int64 a3)
{
  char loaded_word;
  __int64 loaded_word_2;
  int integer_difference;
  int shifted_bits;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_455_result;
  _DWORD *record_pointer;
  int loaded_word_3;
  int loaded_word_4;
  char loaded_word_5;
  char *loaded_record_pointer;
  char input_byte;

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
    while ( 1 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      while ( 1 )
      {
        loaded_record_pointer = *(char **)(a1 + 24);
        input_byte = *loaded_record_pointer;
        *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
        if ( !input_byte )
          break;
        ++*(_QWORD *)(a1 + 24);
        if ( *(int *)(a1 + 40) < 0 )
          goto LABEL_48;
        loaded_word = *(_BYTE *)(a1 + 65);
        loaded_word_2 = *(unsigned int *)(a1 + 44);
        if ( (unsigned __int8)(loaded_word - 32) > 0x5Au )
        {
          integer_difference = 0;
        }
        else
        {
          _mm_lfence();
          integer_difference = byte_140284C00[loaded_word - 32] & 0xF;
        }
        shifted_bits = byte_140284C00[(unsigned int)(loaded_word_2 + 8 * integer_difference)] >> 4;
        *(_DWORD *)(a1 + 44) = shifted_bits;
        if ( shifted_bits == 8 )
          goto LABEL_50;
        if ( !shifted_bits )
        {
          unknown_libname_455_result = sub_140217F60(a1);
          goto LABEL_45;
        }
        integer_difference_2 = shifted_bits - 1;
        if ( integer_difference_2 )
        {
          integer_difference_3 = integer_difference_2 - 1;
          if ( integer_difference_3 )
          {
            integer_difference_4 = integer_difference_3 - 1;
            if ( integer_difference_4 )
            {
              integer_difference_5 = integer_difference_4 - 1;
              if ( integer_difference_5 )
              {
                integer_difference_6 = integer_difference_5 - 1;
                if ( integer_difference_6 )
                {
                  integer_difference_7 = integer_difference_6 - 1;
                  if ( integer_difference_7 )
                  {
                    if ( integer_difference_7 != 1 )
                      return 0xFFFFFFFFLL;
                    unknown_libname_455_result = sub_14021ACCC(a1, loaded_word_2, a3);
                  }
                  else
                  {
                    unknown_libname_455_result = sub_140219540(a1, loaded_word_2, a3);
                  }
                  goto LABEL_45;
                }
                if ( *(_BYTE *)(a1 + 65) == 42 )
                {
                  *(_QWORD *)(a1 + 32) += 8LL;
                  loaded_word_3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                  if ( loaded_word_3 < 0 )
                    loaded_word_3 = -1;
                  *(_DWORD *)(a1 + 56) = loaded_word_3;
LABEL_32:
                  unknown_libname_455_result = 1;
                  goto LABEL_45;
                }
                record_pointer = (_DWORD *)(a1 + 56);
                goto LABEL_23;
              }
              *(_DWORD *)(a1 + 56) = 0;
            }
            else
            {
              if ( *(_BYTE *)(a1 + 65) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                loaded_word_4 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                *(_DWORD *)(a1 + 52) = loaded_word_4;
                if ( loaded_word_4 < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *(_DWORD *)(a1 + 52) = -loaded_word_4;
                }
                goto LABEL_32;
              }
              record_pointer = (_DWORD *)(a1 + 52);
LABEL_23:
              unknown_libname_455_result = unknown_libname_455(a1, record_pointer);
LABEL_45:
              if ( !unknown_libname_455_result )
                return 0xFFFFFFFFLL;
            }
          }
          else
          {
            loaded_word_5 = *(_BYTE *)(a1 + 65);
            switch ( loaded_word_5 )
            {
              case ' ':
                *(_DWORD *)(a1 + 48) |= 2u;
                break;
              case '#':
                *(_DWORD *)(a1 + 48) |= 0x20u;
                break;
              case '+':
                *(_DWORD *)(a1 + 48) |= 1u;
                break;
              case '-':
                *(_DWORD *)(a1 + 48) |= 4u;
                break;
              case '0':
                *(_DWORD *)(a1 + 48) |= 8u;
                break;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 52) = 0;
          *(_DWORD *)(a1 + 48) = 0;
          *(_DWORD *)(a1 + 60) = 0;
          *(_BYTE *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 56) = -1;
          *(_BYTE *)(a1 + 84) = 0;
        }
      }
      ++*(_QWORD *)(a1 + 24);
LABEL_48:
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
    }
  }
LABEL_50:
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0xFFFFFFFFLL;
}

//----- (0000000140216878) ----------------------------------------------------
__int64            sub_140216878(__int64 a1, ...)
{
  unsigned __int16 loaded_word;
  int integer_difference;
  int shifted_bits;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_456_result;
  _DWORD *record_pointer;
  int loaded_word_2;
  int loaded_word_3;
  __int16 loaded_word_4;
  unsigned __int16 loaded_word_5;
  __int16 loaded_word_6;

  if ( !*(_QWORD *)(a1 + 1128) )
    goto LABEL_56;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  while ( 2 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      loaded_word_6 = **(_WORD **)(a1 + 24);
      *(_WORD *)(a1 + 66) = loaded_word_6;
      if ( !loaded_word_6 )
        break;
      *(_QWORD *)(a1 + 24) += 2LL;
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_52;
      loaded_word = *(_WORD *)(a1 + 66);
      if ( (unsigned __int16)(loaded_word - 32) > 0x5Au )
      {
        integer_difference = 0;
      }
      else
      {
        _mm_lfence();
        integer_difference = byte_140284C60[loaded_word - 32] & 0xF;
      }
      shifted_bits = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * integer_difference + integer_difference] >> 4;
      *(_DWORD *)(a1 + 44) = shifted_bits;
      if ( shifted_bits == 8 )
        goto LABEL_56;
      if ( !shifted_bits )
      {
        loaded_word_5 = *(_WORD *)(a1 + 66);
        *(_BYTE *)(a1 + 84) = 1;
        if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
          && (unsigned __int16)sub_140256B38(loaded_word_5, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
        {
          *(_DWORD *)(a1 + 40) = -1;
        }
        else
        {
          ++*(_DWORD *)(a1 + 40);
        }
        goto LABEL_48;
      }
      integer_difference_2 = shifted_bits - 1;
      if ( integer_difference_2 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          integer_difference_4 = integer_difference_3 - 1;
          if ( !integer_difference_4 )
          {
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              loaded_word_3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              *(_DWORD *)(a1 + 52) = loaded_word_3;
              if ( loaded_word_3 < 0 )
              {
                *(_DWORD *)(a1 + 48) |= 4u;
                *(_DWORD *)(a1 + 52) = -loaded_word_3;
              }
              goto LABEL_48;
            }
            record_pointer = (_DWORD *)(a1 + 52);
            goto LABEL_23;
          }
          integer_difference_5 = integer_difference_4 - 1;
          if ( integer_difference_5 )
          {
            integer_difference_6 = integer_difference_5 - 1;
            if ( integer_difference_6 )
            {
              integer_difference_7 = integer_difference_6 - 1;
              if ( integer_difference_7 )
              {
                if ( integer_difference_7 != 1 )
                  return 0xFFFFFFFFLL;
                unknown_libname_456_result = sub_14021AF34(a1);
              }
              else
              {
                unknown_libname_456_result = sub_1402196B4(a1);
              }
              goto LABEL_49;
            }
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              loaded_word_2 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              if ( loaded_word_2 < 0 )
                loaded_word_2 = -1;
              *(_DWORD *)(a1 + 56) = loaded_word_2;
LABEL_48:
              unknown_libname_456_result = 1;
              goto LABEL_49;
            }
            record_pointer = (_DWORD *)(a1 + 56);
LABEL_23:
            unknown_libname_456_result = unknown_libname_456(a1, record_pointer);
LABEL_49:
            if ( !unknown_libname_456_result )
              return 0xFFFFFFFFLL;
          }
          else
          {
            *(_DWORD *)(a1 + 56) = 0;
          }
        }
        else
        {
          loaded_word_4 = *(_WORD *)(a1 + 66);
          switch ( loaded_word_4 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    *(_QWORD *)(a1 + 24) += 2LL;
LABEL_52:
    if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    {
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
      continue;
    }
    break;
  }
LABEL_56:
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0xFFFFFFFFLL;
}

//----- (0000000140216AF0) ----------------------------------------------------
__int64            sub_140216AF0(__int64 a1)
{
  int loaded_word;
  _WORD *loaded_record_pointer;
  int *record_pointer;
  int *record_pointer_2;
  unsigned __int16 loaded_word_2;
  int integer_difference;
  int loaded_word_3;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_457_result;
  __int64 input_value;
  _DWORD *record_pointer_3;
  int loaded_word_4;
  __int16 loaded_word_5;
  __int16 loaded_word_6;

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      loaded_word = ++*(_DWORD *)(a1 + 1144);
      if ( loaded_word == 3 || loaded_word == 2 && *(_DWORD *)(a1 + 1148) == 1 )
        return *(unsigned int *)(a1 + 40);
      loaded_record_pointer = *(_WORD **)(a1 + 1152);
      record_pointer = (int *)(a1 + 52);
      record_pointer_2 = (int *)(a1 + 56);
      *(_DWORD *)(a1 + 1148) = 0;
      *(_DWORD *)(a1 + 3560) = -1;
      *(_DWORD *)(a1 + 3564) = -1;
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer);
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      LOWORD(loaded_record_pointer) = *loaded_record_pointer;
      *(_WORD *)(a1 + 66) = (_WORD)loaded_record_pointer;
      if ( (_WORD)loaded_record_pointer )
      {
        do
        {
          *(_QWORD *)(a1 + 24) += 2LL;
          if ( *(int *)(a1 + 40) < 0 )
            goto LABEL_56;
          loaded_word_2 = *(_WORD *)(a1 + 66);
          if ( (unsigned __int16)(loaded_word_2 - 32) > 0x5Au )
          {
            integer_difference = 0;
          }
          else
          {
            _mm_lfence();
            integer_difference = byte_140284C60[loaded_word_2 - 32] & 0xF;
          }
          *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * integer_difference + integer_difference] >> 4;
          if ( !unknown_libname_569(a1) )
            return 0xFFFFFFFFLL;
          loaded_word_3 = *(_DWORD *)(a1 + 44);
          if ( loaded_word_3 == 8 )
            goto LABEL_58;
          if ( !loaded_word_3 )
          {
            unknown_libname_457_result = sub_14021802C(a1);
            goto LABEL_53;
          }
          integer_difference_2 = loaded_word_3 - 1;
          if ( integer_difference_2 )
          {
            integer_difference_3 = integer_difference_2 - 1;
            if ( integer_difference_3 )
            {
              integer_difference_4 = integer_difference_3 - 1;
              if ( integer_difference_4 )
              {
                integer_difference_5 = integer_difference_4 - 1;
                if ( integer_difference_5 )
                {
                  integer_difference_6 = integer_difference_5 - 1;
                  if ( integer_difference_6 )
                  {
                    integer_difference_7 = integer_difference_6 - 1;
                    if ( integer_difference_7 )
                    {
                      if ( integer_difference_7 != 1 )
                        return 0xFFFFFFFFLL;
                      unknown_libname_457_result = sub_14021B214(a1);
                    }
                    else
                    {
                      unknown_libname_457_result = sub_14021984C(a1);
                    }
                    goto LABEL_53;
                  }
                  input_value = a1;
                  if ( *(_WORD *)(a1 + 66) != 42 )
                  {
                    record_pointer_3 = (_DWORD *)(a1 + 56);
LABEL_26:
                    unknown_libname_457_result = unknown_libname_457(input_value, record_pointer_3);
                    goto LABEL_53;
                  }
                  if ( !sub_140222A70(a1) )
                    return 0xFFFFFFFFLL;
                  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                  {
                    if ( *record_pointer_2 < 0 )
                      *record_pointer_2 = -1;
                    goto LABEL_40;
                  }
                }
                else
                {
                  *record_pointer_2 = 0;
                }
              }
              else
              {
                input_value = a1;
                if ( *(_WORD *)(a1 + 66) != 42 )
                {
                  record_pointer_3 = (_DWORD *)(a1 + 52);
                  goto LABEL_26;
                }
                if ( !sub_1402225C0(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  loaded_word_4 = *record_pointer;
                  if ( *record_pointer < 0 )
                  {
                    *(_DWORD *)(a1 + 48) |= 4u;
                    *record_pointer = -loaded_word_4;
                  }
LABEL_40:
                  unknown_libname_457_result = 1;
LABEL_53:
                  if ( !unknown_libname_457_result )
                    return 0xFFFFFFFFLL;
                }
              }
            }
            else
            {
              loaded_word_5 = *(_WORD *)(a1 + 66);
              switch ( loaded_word_5 )
              {
                case ' ':
                  *(_DWORD *)(a1 + 48) |= 2u;
                  break;
                case '#':
                  *(_DWORD *)(a1 + 48) |= 0x20u;
                  break;
                case '+':
                  *(_DWORD *)(a1 + 48) |= 1u;
                  break;
                case '-':
                  *(_DWORD *)(a1 + 48) |= 4u;
                  break;
                case '0':
                  *(_DWORD *)(a1 + 48) |= 8u;
                  break;
              }
            }
          }
          else
          {
            *record_pointer = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *record_pointer_2 = -1;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 84) = 0;
          }
          loaded_word_6 = **(_WORD **)(a1 + 24);
          *(_WORD *)(a1 + 66) = loaded_word_6;
        }
        while ( loaded_word_6 );
      }
      *(_QWORD *)(a1 + 24) += 2LL;
LABEL_56:
      if ( !unknown_libname_577(a1) )
        return 0xFFFFFFFFLL;
    }
  }
  else
  {
LABEL_58:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (0000000140216DA4) ----------------------------------------------------
__int64            sub_140216DA4(__int64 a1, ...)
{
  unsigned __int16 loaded_word;
  int integer_difference;
  int shifted_bits;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_458_result;
  _DWORD *record_pointer;
  int loaded_word_2;
  int loaded_word_3;
  __int16 loaded_word_4;
  unsigned __int16 loaded_word_5;
  __int16 loaded_word_6;

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
    while ( 1 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      while ( 1 )
      {
        loaded_word_6 = **(_WORD **)(a1 + 24);
        *(_WORD *)(a1 + 66) = loaded_word_6;
        if ( !loaded_word_6 )
          break;
        *(_QWORD *)(a1 + 24) += 2LL;
        if ( *(int *)(a1 + 40) < 0 )
          goto LABEL_52;
        loaded_word = *(_WORD *)(a1 + 66);
        if ( (unsigned __int16)(loaded_word - 32) > 0x5Au )
        {
          integer_difference = 0;
        }
        else
        {
          _mm_lfence();
          integer_difference = byte_140284C00[loaded_word - 32] & 0xF;
        }
        shifted_bits = byte_140284C00[*(_DWORD *)(a1 + 44) + 8 * integer_difference] >> 4;
        *(_DWORD *)(a1 + 44) = shifted_bits;
        if ( shifted_bits == 8 )
          goto LABEL_54;
        if ( !shifted_bits )
        {
          loaded_word_5 = *(_WORD *)(a1 + 66);
          *(_BYTE *)(a1 + 84) = 1;
          if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
            && (unsigned __int16)sub_140256B38(loaded_word_5, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
          {
            *(_DWORD *)(a1 + 40) = -1;
          }
          else
          {
            ++*(_DWORD *)(a1 + 40);
          }
          goto LABEL_48;
        }
        integer_difference_2 = shifted_bits - 1;
        if ( integer_difference_2 )
        {
          integer_difference_3 = integer_difference_2 - 1;
          if ( integer_difference_3 )
          {
            integer_difference_4 = integer_difference_3 - 1;
            if ( integer_difference_4 )
            {
              integer_difference_5 = integer_difference_4 - 1;
              if ( integer_difference_5 )
              {
                integer_difference_6 = integer_difference_5 - 1;
                if ( integer_difference_6 )
                {
                  integer_difference_7 = integer_difference_6 - 1;
                  if ( integer_difference_7 )
                  {
                    if ( integer_difference_7 != 1 )
                      return 0xFFFFFFFFLL;
                    unknown_libname_458_result = sub_14021B508(a1);
                  }
                  else
                  {
                    unknown_libname_458_result = sub_1402199E4(a1);
                  }
                  goto LABEL_49;
                }
                if ( *(_WORD *)(a1 + 66) == 42 )
                {
                  *(_QWORD *)(a1 + 32) += 8LL;
                  loaded_word_2 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                  if ( loaded_word_2 < 0 )
                    loaded_word_2 = -1;
                  *(_DWORD *)(a1 + 56) = loaded_word_2;
LABEL_48:
                  unknown_libname_458_result = 1;
                  goto LABEL_49;
                }
                record_pointer = (_DWORD *)(a1 + 56);
                goto LABEL_23;
              }
              *(_DWORD *)(a1 + 56) = 0;
            }
            else
            {
              if ( *(_WORD *)(a1 + 66) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                loaded_word_3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                *(_DWORD *)(a1 + 52) = loaded_word_3;
                if ( loaded_word_3 < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *(_DWORD *)(a1 + 52) = -loaded_word_3;
                }
                goto LABEL_48;
              }
              record_pointer = (_DWORD *)(a1 + 52);
LABEL_23:
              unknown_libname_458_result = unknown_libname_458(a1, record_pointer);
LABEL_49:
              if ( !unknown_libname_458_result )
                return 0xFFFFFFFFLL;
            }
          }
          else
          {
            loaded_word_4 = *(_WORD *)(a1 + 66);
            switch ( loaded_word_4 )
            {
              case ' ':
                *(_DWORD *)(a1 + 48) |= 2u;
                break;
              case '#':
                *(_DWORD *)(a1 + 48) |= 0x20u;
                break;
              case '+':
                *(_DWORD *)(a1 + 48) |= 1u;
                break;
              case '-':
                *(_DWORD *)(a1 + 48) |= 4u;
                break;
              case '0':
                *(_DWORD *)(a1 + 48) |= 8u;
                break;
            }
          }
        }
        else
        {
          *(_QWORD *)(a1 + 48) = 0;
          *(_BYTE *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 56) = -1;
          *(_DWORD *)(a1 + 60) = 0;
          *(_BYTE *)(a1 + 84) = 0;
        }
      }
      *(_QWORD *)(a1 + 24) += 2LL;
LABEL_52:
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
    }
  }
LABEL_54:
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0xFFFFFFFFLL;
}

//----- (0000000140217010) ----------------------------------------------------
__int64            sub_140217010(__int64 a1, ...)
{
  unsigned __int16 loaded_word;
  int integer_difference;
  int shifted_bits;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_459_result;
  _DWORD *record_pointer;
  int loaded_word_2;
  int loaded_word_3;
  __int16 loaded_word_4;
  __int16 loaded_word_5;
  __int64 loaded_word_6;
  __int16 loaded_word_7;

  if ( !*(_QWORD *)(a1 + 1128) )
    goto LABEL_56;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  while ( 2 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      loaded_word_7 = **(_WORD **)(a1 + 24);
      *(_WORD *)(a1 + 66) = loaded_word_7;
      if ( !loaded_word_7 )
        break;
      *(_QWORD *)(a1 + 24) += 2LL;
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_52;
      loaded_word = *(_WORD *)(a1 + 66);
      if ( (unsigned __int16)(loaded_word - 32) > 0x5Au )
      {
        integer_difference = 0;
      }
      else
      {
        _mm_lfence();
        integer_difference = byte_140284C60[loaded_word - 32] & 0xF;
      }
      shifted_bits = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * integer_difference + integer_difference] >> 4;
      *(_DWORD *)(a1 + 44) = shifted_bits;
      if ( shifted_bits == 8 )
        goto LABEL_56;
      if ( !shifted_bits )
      {
        loaded_word_5 = *(_WORD *)(a1 + 66);
        *(_BYTE *)(a1 + 84) = 1;
        loaded_word_6 = *(_QWORD *)(a1 + 1128);
        if ( *(_QWORD *)(loaded_word_6 + 16) == *(_QWORD *)(loaded_word_6 + 8) )
        {
          if ( *(_BYTE *)(loaded_word_6 + 24) )
            ++*(_DWORD *)(a1 + 40);
          else
            *(_DWORD *)(a1 + 40) = -1;
        }
        else
        {
          ++*(_DWORD *)(a1 + 40);
          ++*(_QWORD *)(*(_QWORD *)(a1 + 1128) + 16LL);
          ***(_WORD ***)(a1 + 1128) = loaded_word_5;
          **(_QWORD **)(a1 + 1128) += 2LL;
        }
LABEL_48:
        unknown_libname_459_result = 1;
        goto LABEL_49;
      }
      integer_difference_2 = shifted_bits - 1;
      if ( integer_difference_2 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          integer_difference_4 = integer_difference_3 - 1;
          if ( !integer_difference_4 )
          {
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              loaded_word_3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              *(_DWORD *)(a1 + 52) = loaded_word_3;
              if ( loaded_word_3 < 0 )
              {
                *(_DWORD *)(a1 + 48) |= 4u;
                *(_DWORD *)(a1 + 52) = -loaded_word_3;
              }
              goto LABEL_48;
            }
            record_pointer = (_DWORD *)(a1 + 52);
            goto LABEL_23;
          }
          integer_difference_5 = integer_difference_4 - 1;
          if ( integer_difference_5 )
          {
            integer_difference_6 = integer_difference_5 - 1;
            if ( integer_difference_6 )
            {
              integer_difference_7 = integer_difference_6 - 1;
              if ( integer_difference_7 )
              {
                if ( integer_difference_7 != 1 )
                  return 0xFFFFFFFFLL;
                unknown_libname_459_result = sub_14021B7E8(a1);
              }
              else
              {
                unknown_libname_459_result = sub_140219B7C(a1);
              }
              goto LABEL_49;
            }
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              loaded_word_2 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              if ( loaded_word_2 < 0 )
                loaded_word_2 = -1;
              *(_DWORD *)(a1 + 56) = loaded_word_2;
              goto LABEL_48;
            }
            record_pointer = (_DWORD *)(a1 + 56);
LABEL_23:
            unknown_libname_459_result = unknown_libname_459(a1, record_pointer);
LABEL_49:
            if ( !unknown_libname_459_result )
              return 0xFFFFFFFFLL;
          }
          else
          {
            *(_DWORD *)(a1 + 56) = 0;
          }
        }
        else
        {
          loaded_word_4 = *(_WORD *)(a1 + 66);
          switch ( loaded_word_4 )
          {
            case ' ':
              *(_DWORD *)(a1 + 48) |= 2u;
              break;
            case '#':
              *(_DWORD *)(a1 + 48) |= 0x20u;
              break;
            case '+':
              *(_DWORD *)(a1 + 48) |= 1u;
              break;
            case '-':
              *(_DWORD *)(a1 + 48) |= 4u;
              break;
            case '0':
              *(_DWORD *)(a1 + 48) |= 8u;
              break;
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    *(_QWORD *)(a1 + 24) += 2LL;
LABEL_52:
    if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    {
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
      continue;
    }
    break;
  }
LABEL_56:
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0xFFFFFFFFLL;
}

//----- (0000000140217298) ----------------------------------------------------
__int64            sub_140217298(__int64 a1)
{
  int loaded_word;
  _WORD *loaded_record_pointer;
  int *record_pointer;
  int *record_pointer_2;
  unsigned __int16 loaded_word_2;
  int integer_difference;
  int loaded_word_3;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_460_result;
  __int64 input_value;
  _DWORD *record_pointer_3;
  int loaded_word_4;
  __int16 loaded_word_5;
  __int16 loaded_word_6;

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      loaded_word = ++*(_DWORD *)(a1 + 1144);
      if ( loaded_word == 3 || loaded_word == 2 && *(_DWORD *)(a1 + 1148) == 1 )
        return *(unsigned int *)(a1 + 40);
      loaded_record_pointer = *(_WORD **)(a1 + 1152);
      record_pointer = (int *)(a1 + 52);
      record_pointer_2 = (int *)(a1 + 56);
      *(_DWORD *)(a1 + 1148) = 0;
      *(_DWORD *)(a1 + 3560) = -1;
      *(_DWORD *)(a1 + 3564) = -1;
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer);
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      LOWORD(loaded_record_pointer) = *loaded_record_pointer;
      *(_WORD *)(a1 + 66) = (_WORD)loaded_record_pointer;
      if ( (_WORD)loaded_record_pointer )
      {
        do
        {
          *(_QWORD *)(a1 + 24) += 2LL;
          if ( *(int *)(a1 + 40) < 0 )
            goto LABEL_56;
          loaded_word_2 = *(_WORD *)(a1 + 66);
          if ( (unsigned __int16)(loaded_word_2 - 32) > 0x5Au )
          {
            integer_difference = 0;
          }
          else
          {
            _mm_lfence();
            integer_difference = byte_140284C60[loaded_word_2 - 32] & 0xF;
          }
          *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * integer_difference + integer_difference] >> 4;
          if ( !unknown_libname_570(a1) )
            return 0xFFFFFFFFLL;
          loaded_word_3 = *(_DWORD *)(a1 + 44);
          if ( loaded_word_3 == 8 )
            goto LABEL_58;
          if ( !loaded_word_3 )
          {
            unknown_libname_460_result = sub_140218154(a1);
            goto LABEL_53;
          }
          integer_difference_2 = loaded_word_3 - 1;
          if ( integer_difference_2 )
          {
            integer_difference_3 = integer_difference_2 - 1;
            if ( integer_difference_3 )
            {
              integer_difference_4 = integer_difference_3 - 1;
              if ( integer_difference_4 )
              {
                integer_difference_5 = integer_difference_4 - 1;
                if ( integer_difference_5 )
                {
                  integer_difference_6 = integer_difference_5 - 1;
                  if ( integer_difference_6 )
                  {
                    integer_difference_7 = integer_difference_6 - 1;
                    if ( integer_difference_7 )
                    {
                      if ( integer_difference_7 != 1 )
                        return 0xFFFFFFFFLL;
                      unknown_libname_460_result = sub_14021BAB4(a1);
                    }
                    else
                    {
                      unknown_libname_460_result = sub_140219D14(a1);
                    }
                    goto LABEL_53;
                  }
                  input_value = a1;
                  if ( *(_WORD *)(a1 + 66) != 42 )
                  {
                    record_pointer_3 = (_DWORD *)(a1 + 56);
LABEL_26:
                    unknown_libname_460_result = unknown_libname_460(input_value, record_pointer_3);
                    goto LABEL_53;
                  }
                  if ( !sub_140222B88(a1) )
                    return 0xFFFFFFFFLL;
                  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                  {
                    if ( *record_pointer_2 < 0 )
                      *record_pointer_2 = -1;
                    goto LABEL_40;
                  }
                }
                else
                {
                  *record_pointer_2 = 0;
                }
              }
              else
              {
                input_value = a1;
                if ( *(_WORD *)(a1 + 66) != 42 )
                {
                  record_pointer_3 = (_DWORD *)(a1 + 52);
                  goto LABEL_26;
                }
                if ( !sub_1402226D8(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  loaded_word_4 = *record_pointer;
                  if ( *record_pointer < 0 )
                  {
                    *(_DWORD *)(a1 + 48) |= 4u;
                    *record_pointer = -loaded_word_4;
                  }
LABEL_40:
                  unknown_libname_460_result = 1;
LABEL_53:
                  if ( !unknown_libname_460_result )
                    return 0xFFFFFFFFLL;
                }
              }
            }
            else
            {
              loaded_word_5 = *(_WORD *)(a1 + 66);
              switch ( loaded_word_5 )
              {
                case ' ':
                  *(_DWORD *)(a1 + 48) |= 2u;
                  break;
                case '#':
                  *(_DWORD *)(a1 + 48) |= 0x20u;
                  break;
                case '+':
                  *(_DWORD *)(a1 + 48) |= 1u;
                  break;
                case '-':
                  *(_DWORD *)(a1 + 48) |= 4u;
                  break;
                case '0':
                  *(_DWORD *)(a1 + 48) |= 8u;
                  break;
              }
            }
          }
          else
          {
            *record_pointer = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *record_pointer_2 = -1;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 84) = 0;
          }
          loaded_word_6 = **(_WORD **)(a1 + 24);
          *(_WORD *)(a1 + 66) = loaded_word_6;
        }
        while ( loaded_word_6 );
      }
      *(_QWORD *)(a1 + 24) += 2LL;
LABEL_56:
      if ( !unknown_libname_578(a1) )
        return 0xFFFFFFFFLL;
    }
  }
  else
  {
LABEL_58:
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0xFFFFFFFFLL;
  }
}

//----- (000000014021754C) ----------------------------------------------------
__int64            sub_14021754C(__int64 a1, ...)
{
  unsigned __int16 loaded_word;
  int integer_difference;
  int shifted_bits;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  int integer_difference_6;
  int integer_difference_7;
  char unknown_libname_461_result;
  _DWORD *record_pointer;
  int loaded_word_2;
  int loaded_word_3;
  __int16 loaded_word_4;
  __int16 loaded_word_5;
  __int64 loaded_word_6;
  __int16 loaded_word_7;

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
    while ( 1 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      while ( 1 )
      {
        loaded_word_7 = **(_WORD **)(a1 + 24);
        *(_WORD *)(a1 + 66) = loaded_word_7;
        if ( !loaded_word_7 )
          break;
        *(_QWORD *)(a1 + 24) += 2LL;
        if ( *(int *)(a1 + 40) < 0 )
          goto LABEL_52;
        loaded_word = *(_WORD *)(a1 + 66);
        if ( (unsigned __int16)(loaded_word - 32) > 0x5Au )
        {
          integer_difference = 0;
        }
        else
        {
          _mm_lfence();
          integer_difference = byte_140284C00[loaded_word - 32] & 0xF;
        }
        shifted_bits = byte_140284C00[*(_DWORD *)(a1 + 44) + 8 * integer_difference] >> 4;
        *(_DWORD *)(a1 + 44) = shifted_bits;
        if ( shifted_bits == 8 )
          goto LABEL_54;
        if ( !shifted_bits )
        {
          loaded_word_5 = *(_WORD *)(a1 + 66);
          *(_BYTE *)(a1 + 84) = 1;
          loaded_word_6 = *(_QWORD *)(a1 + 1128);
          if ( *(_QWORD *)(loaded_word_6 + 16) == *(_QWORD *)(loaded_word_6 + 8) )
          {
            if ( *(_BYTE *)(loaded_word_6 + 24) )
              ++*(_DWORD *)(a1 + 40);
            else
              *(_DWORD *)(a1 + 40) = -1;
          }
          else
          {
            ++*(_DWORD *)(a1 + 40);
            ++*(_QWORD *)(*(_QWORD *)(a1 + 1128) + 16LL);
            ***(_WORD ***)(a1 + 1128) = loaded_word_5;
            **(_QWORD **)(a1 + 1128) += 2LL;
          }
LABEL_48:
          unknown_libname_461_result = 1;
          goto LABEL_49;
        }
        integer_difference_2 = shifted_bits - 1;
        if ( integer_difference_2 )
        {
          integer_difference_3 = integer_difference_2 - 1;
          if ( integer_difference_3 )
          {
            integer_difference_4 = integer_difference_3 - 1;
            if ( !integer_difference_4 )
            {
              if ( *(_WORD *)(a1 + 66) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                loaded_word_3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                *(_DWORD *)(a1 + 52) = loaded_word_3;
                if ( loaded_word_3 < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *(_DWORD *)(a1 + 52) = -loaded_word_3;
                }
                goto LABEL_48;
              }
              record_pointer = (_DWORD *)(a1 + 52);
              goto LABEL_23;
            }
            integer_difference_5 = integer_difference_4 - 1;
            if ( integer_difference_5 )
            {
              integer_difference_6 = integer_difference_5 - 1;
              if ( integer_difference_6 )
              {
                integer_difference_7 = integer_difference_6 - 1;
                if ( integer_difference_7 )
                {
                  if ( integer_difference_7 != 1 )
                    return 0xFFFFFFFFLL;
                  unknown_libname_461_result = sub_14021BD94(a1);
                }
                else
                {
                  unknown_libname_461_result = sub_140219EAC(a1);
                }
                goto LABEL_49;
              }
              if ( *(_WORD *)(a1 + 66) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                loaded_word_2 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                if ( loaded_word_2 < 0 )
                  loaded_word_2 = -1;
                *(_DWORD *)(a1 + 56) = loaded_word_2;
                goto LABEL_48;
              }
              record_pointer = (_DWORD *)(a1 + 56);
LABEL_23:
              unknown_libname_461_result = unknown_libname_461(a1, record_pointer);
LABEL_49:
              if ( !unknown_libname_461_result )
                return 0xFFFFFFFFLL;
            }
            else
            {
              *(_DWORD *)(a1 + 56) = 0;
            }
          }
          else
          {
            loaded_word_4 = *(_WORD *)(a1 + 66);
            switch ( loaded_word_4 )
            {
              case ' ':
                *(_DWORD *)(a1 + 48) |= 2u;
                break;
              case '#':
                *(_DWORD *)(a1 + 48) |= 0x20u;
                break;
              case '+':
                *(_DWORD *)(a1 + 48) |= 1u;
                break;
              case '-':
                *(_DWORD *)(a1 + 48) |= 4u;
                break;
              case '0':
                *(_DWORD *)(a1 + 48) |= 8u;
                break;
            }
          }
        }
        else
        {
          *(_QWORD *)(a1 + 48) = 0;
          *(_BYTE *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 56) = -1;
          *(_DWORD *)(a1 + 60) = 0;
          *(_BYTE *)(a1 + 84) = 0;
        }
      }
      *(_QWORD *)(a1 + 24) += 2LL;
LABEL_52:
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
    }
  }
LABEL_54:
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0xFFFFFFFFLL;
}

//----- (0000000140217CE0) ----------------------------------------------------
char            sub_140217CE0(__int64 a1)
{
  if ( unknown_libname_496(a1) )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (0000000140217D50) ----------------------------------------------------
char            sub_140217D50(__int64 a1)
{
  int loaded_word;

  loaded_word = *(_DWORD *)(a1 + 1144);
  if ( loaded_word == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
  }
  else if ( loaded_word == 2 && !*(_DWORD *)(a1 + 1148) )
  {
    return 1;
  }
  if ( unknown_libname_497(a1) )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140217DE4) ----------------------------------------------------
char            sub_140217DE4(__int64 a1)
{
  if ( unknown_libname_498(a1) )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (0000000140217E54) ----------------------------------------------------
char            sub_140217E54(__int64 a1)
{
  __int64 loaded_word;
  char loaded_word_2;

  if ( sub_140218844(a1) )
  {
    loaded_word = *(_QWORD *)(a1 + 1128);
    loaded_word_2 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(loaded_word + 16) == *(_QWORD *)(loaded_word + 8) )
    {
      if ( *(_BYTE *)(loaded_word + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(loaded_word + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = loaded_word_2;
    }
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (0000000140217EC8) ----------------------------------------------------
char            sub_140217EC8(__int64 a1)
{
  int loaded_word;
  __int64 loaded_word_2;
  char loaded_word_3;

  loaded_word = *(_DWORD *)(a1 + 1144);
  if ( loaded_word == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
  }
  else if ( loaded_word == 2 && !*(_DWORD *)(a1 + 1148) )
  {
    return 1;
  }
  if ( sub_1402188EC(a1) )
  {
    loaded_word_2 = *(_QWORD *)(a1 + 1128);
    loaded_word_3 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(loaded_word_2 + 16) == *(_QWORD *)(loaded_word_2 + 8) )
    {
      if ( *(_BYTE *)(loaded_word_2 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(loaded_word_2 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = loaded_word_3;
    }
    return 1;
  }
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140217F60) ----------------------------------------------------
char            sub_140217F60(__int64 a1)
{
  __int64 loaded_word;
  char loaded_word_2;

  if ( sub_140218994(a1) )
  {
    loaded_word = *(_QWORD *)(a1 + 1128);
    loaded_word_2 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(loaded_word + 16) == *(_QWORD *)(loaded_word + 8) )
    {
      if ( *(_BYTE *)(loaded_word + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(loaded_word + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = loaded_word_2;
    }
    return 1;
  }
  else
  {
    *errno_sr() = 22;
    crt_invalid_parameter_noinfo();
    return 0;
  }
}

//----- (0000000140217FD4) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_486(__int64 a1)
{
  unsigned __int16 loaded_word;

  *(_BYTE *)(a1 + 84) = 1;
  loaded_word = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(loaded_word, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}

//----- (000000014021802C) ----------------------------------------------------
char            sub_14021802C(__int64 a1)
{
  int loaded_word;
  __int64 loaded_word_2;
  unsigned __int16 loaded_word_3;

  loaded_word = *(_DWORD *)(a1 + 1144);
  if ( loaded_word == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
  }
  else if ( loaded_word == 2 && !*(_DWORD *)(a1 + 1148) )
  {
    return 1;
  }
  *(_BYTE *)(a1 + 84) = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1128);
  loaded_word_3 = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(loaded_word_2 + 20) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(loaded_word_3, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}

//----- (00000001402180A8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_487(__int64 a1)
{
  unsigned __int16 loaded_word;

  *(_BYTE *)(a1 + 84) = 1;
  loaded_word = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(loaded_word, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}

//----- (0000000140218100) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_488(__int64 a1)
{
  __int16 loaded_word;
  __int64 loaded_word_2;

  loaded_word = *(_WORD *)(a1 + 66);
  *(_BYTE *)(a1 + 84) = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(loaded_word_2 + 16) == *(_QWORD *)(loaded_word_2 + 8) )
  {
    if ( *(_BYTE *)(loaded_word_2 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(loaded_word_2 + 16);
    ***(_WORD ***)(a1 + 1128) = loaded_word;
    **(_QWORD **)(a1 + 1128) += 2LL;
  }
  return 1;
}

//----- (0000000140218154) ----------------------------------------------------
char            sub_140218154(__int64 a1)
{
  int loaded_word;
  __int16 loaded_word_2;
  __int64 loaded_word_3;

  loaded_word = *(_DWORD *)(a1 + 1144);
  if ( loaded_word == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
    goto LABEL_6;
  }
  if ( loaded_word != 2 || *(_DWORD *)(a1 + 1148) )
  {
LABEL_6:
    loaded_word_2 = *(_WORD *)(a1 + 66);
    *(_BYTE *)(a1 + 84) = 1;
    loaded_word_3 = *(_QWORD *)(a1 + 1128);
    if ( *(_QWORD *)(loaded_word_3 + 16) == *(_QWORD *)(loaded_word_3 + 8) )
    {
      if ( *(_BYTE *)(loaded_word_3 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(loaded_word_3 + 16);
      ***(_WORD ***)(a1 + 1128) = loaded_word_2;
      **(_QWORD **)(a1 + 1128) += 2LL;
    }
  }
  return 1;
}

//----- (0000000140218220) ----------------------------------------------------
char            sub_140218220(__int64 a1)
{
  char result;

  result = unknown_libname_496(a1);
  if ( result )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  return result;
}

//----- (000000014021827C) ----------------------------------------------------
char            sub_14021827C(__int64 a1)
{
  char result;

  result = unknown_libname_497(a1);
  if ( result )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  return result;
}

//----- (00000001402182D8) ----------------------------------------------------
char            sub_1402182D8(__int64 a1)
{
  char result;

  result = unknown_libname_498(a1);
  if ( result )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207(*(_BYTE *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  return result;
}

//----- (0000000140218334) ----------------------------------------------------
char            sub_140218334(__int64 a1)
{
  char result;
  __int64 loaded_word;
  char loaded_word_2;

  result = sub_140218844(a1);
  if ( result )
  {
    loaded_word = *(_QWORD *)(a1 + 1128);
    loaded_word_2 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(loaded_word + 16) == *(_QWORD *)(loaded_word + 8) )
    {
      if ( *(_BYTE *)(loaded_word + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(loaded_word + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = loaded_word_2;
    }
    return 1;
  }
  return result;
}

//----- (0000000140218394) ----------------------------------------------------
char            sub_140218394(__int64 a1)
{
  char result;
  __int64 loaded_word;
  char loaded_word_2;

  result = sub_1402188EC(a1);
  if ( result )
  {
    loaded_word = *(_QWORD *)(a1 + 1128);
    loaded_word_2 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(loaded_word + 16) == *(_QWORD *)(loaded_word + 8) )
    {
      if ( *(_BYTE *)(loaded_word + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(loaded_word + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = loaded_word_2;
    }
    return 1;
  }
  return result;
}

//----- (00000001402183F4) ----------------------------------------------------
char            sub_1402183F4(__int64 a1)
{
  char result;
  __int64 loaded_word;
  char loaded_word_2;

  result = sub_140218994(a1);
  if ( result )
  {
    loaded_word = *(_QWORD *)(a1 + 1128);
    loaded_word_2 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(loaded_word + 16) == *(_QWORD *)(loaded_word + 8) )
    {
      if ( *(_BYTE *)(loaded_word + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(loaded_word + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = loaded_word_2;
    }
    return 1;
  }
  return result;
}

//----- (0000000140218454) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_490(__int64 a1)
{
  unsigned __int16 loaded_word;

  *(_BYTE *)(a1 + 84) = 1;
  loaded_word = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(loaded_word, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}

//----- (00000001402184AC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_491(__int64 a1)
{
  unsigned __int16 loaded_word;

  *(_BYTE *)(a1 + 84) = 1;
  loaded_word = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(loaded_word, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}

//----- (0000000140218504) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_492(__int64 a1)
{
  unsigned __int16 loaded_word;

  *(_BYTE *)(a1 + 84) = 1;
  loaded_word = *(_WORD *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(loaded_word, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}

//----- (000000014021855C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_493(__int64 a1)
{
  __int16 loaded_word;
  __int64 loaded_word_2;

  loaded_word = *(_WORD *)(a1 + 66);
  *(_BYTE *)(a1 + 84) = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(loaded_word_2 + 16) == *(_QWORD *)(loaded_word_2 + 8) )
  {
    if ( *(_BYTE *)(loaded_word_2 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(loaded_word_2 + 16);
    ***(_WORD ***)(a1 + 1128) = loaded_word;
    **(_QWORD **)(a1 + 1128) += 2LL;
  }
  return 1;
}

//----- (0000000140218658) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_496(__int64 a1)
{
  __int64 loaded_word;
  int masked_bits;
  char *loaded_record_pointer;
  char input_byte;

  loaded_word = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)loaded_word < -1 )
    masked_bits = 0;
  else
    masked_bits = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * loaded_word) & 0x8000;
  if ( !masked_bits )
    return 1;
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned int)unknown_libname_207(loaded_word, *(_QWORD *)(a1 + 1128)) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  loaded_record_pointer = *(char **)(a1 + 24);
  input_byte = *loaded_record_pointer;
  *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( input_byte )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402186FC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_497(__int64 a1)
{
  __int64 loaded_word;
  int masked_bits;
  char *loaded_record_pointer;
  char input_byte;

  loaded_word = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)loaded_word < -1 )
    masked_bits = 0;
  else
    masked_bits = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * loaded_word) & 0x8000;
  if ( !masked_bits )
    return 1;
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned int)unknown_libname_207(loaded_word, *(_QWORD *)(a1 + 1128)) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  loaded_record_pointer = *(char **)(a1 + 24);
  input_byte = *loaded_record_pointer;
  *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( input_byte )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402187A0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_498(__int64 a1)
{
  __int64 loaded_word;
  int masked_bits;
  char *loaded_record_pointer;
  char input_byte;

  loaded_word = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)loaded_word < -1 )
    masked_bits = 0;
  else
    masked_bits = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * loaded_word) & 0x8000;
  if ( !masked_bits )
    return 1;
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned int)unknown_libname_207(loaded_word, *(_QWORD *)(a1 + 1128)) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  loaded_record_pointer = *(char **)(a1 + 24);
  input_byte = *loaded_record_pointer;
  *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( input_byte )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140218844) ----------------------------------------------------
char            sub_140218844(__int64 a1)
{
  __int64 loaded_word;
  int masked_bits;
  __int64 loaded_word_2;
  char *loaded_record_pointer;
  char input_byte;

  loaded_word = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)loaded_word < -1 )
    masked_bits = 0;
  else
    masked_bits = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * loaded_word) & 0x8000;
  if ( !masked_bits )
    return 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(loaded_word_2 + 16) == *(_QWORD *)(loaded_word_2 + 8) )
  {
    if ( *(_BYTE *)(loaded_word_2 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(loaded_word_2 + 16);
    *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = loaded_word;
  }
  loaded_record_pointer = *(char **)(a1 + 24);
  input_byte = *loaded_record_pointer;
  *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( input_byte )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (00000001402188EC) ----------------------------------------------------
char            sub_1402188EC(__int64 a1)
{
  __int64 loaded_word;
  int masked_bits;
  __int64 loaded_word_2;
  char *loaded_record_pointer;
  char input_byte;

  loaded_word = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)loaded_word < -1 )
    masked_bits = 0;
  else
    masked_bits = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * loaded_word) & 0x8000;
  if ( !masked_bits )
    return 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(loaded_word_2 + 16) == *(_QWORD *)(loaded_word_2 + 8) )
  {
    if ( *(_BYTE *)(loaded_word_2 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(loaded_word_2 + 16);
    *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = loaded_word;
  }
  loaded_record_pointer = *(char **)(a1 + 24);
  input_byte = *loaded_record_pointer;
  *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( input_byte )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140218994) ----------------------------------------------------
char            sub_140218994(__int64 a1)
{
  __int64 loaded_word;
  int masked_bits;
  __int64 loaded_word_2;
  char *loaded_record_pointer;
  char input_byte;

  loaded_word = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)loaded_word < -1 )
    masked_bits = 0;
  else
    masked_bits = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * loaded_word) & 0x8000;
  if ( !masked_bits )
    return 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(loaded_word_2 + 16) == *(_QWORD *)(loaded_word_2 + 8) )
  {
    if ( *(_BYTE *)(loaded_word_2 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(loaded_word_2 + 16);
    *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = loaded_word;
  }
  loaded_record_pointer = *(char **)(a1 + 24);
  input_byte = *loaded_record_pointer;
  *(_BYTE *)(a1 + 65) = *loaded_record_pointer;
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( input_byte )
    return 1;
  *errno_sr() = 22;
  crt_invalid_parameter_noinfo();
  return 0;
}

//----- (0000000140218BB4) ----------------------------------------------------
char            sub_140218BB4(__int64 a1)
{
  char result;

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_451(a1, (_DWORD *)(a1 + 56));
  result = sub_140222840(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}

//----- (0000000140218C50) ----------------------------------------------------
char            sub_140218C50(__int64 a1)
{
  char result;

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_454(a1, (_DWORD *)(a1 + 56));
  result = sub_140222958(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}

//----- (0000000140218CEC) ----------------------------------------------------
char            sub_140218CEC(__int64 a1)
{
  char result;

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_457(a1, (_DWORD *)(a1 + 56));
  result = sub_140222A70(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}

//----- (0000000140218D88) ----------------------------------------------------
char            sub_140218D88(__int64 a1)
{
  char result;

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_460(a1, (_DWORD *)(a1 + 56));
  result = sub_140222B88(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}

//----- (0000000140218DFC) ----------------------------------------------------
char            sub_140218DFC(__int64 a1, __int64 a2, __int64 a3)
{
  char loaded_word;
  _BYTE *loaded_record_pointer;
  int selection_code;
  _BYTE *loaded_record_pointer_2;
  char *loaded_record_pointer_3;
  char input_byte;
  unsigned __int8 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_BYTE *)(a1 + 65);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021A044(a1, a2, a3);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(char **)(a1 + 24);
        input_byte = *loaded_record_pointer_3;
        if ( *loaded_record_pointer_3 == 51 && loaded_record_pointer_3[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( input_byte == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = input_byte - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, (char)integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (0000000140218F70) ----------------------------------------------------
char            sub_140218F70(__int64 a1)
{
  char loaded_word;
  _BYTE *loaded_record_pointer;
  int selection_code;
  _BYTE *loaded_record_pointer_2;
  char *loaded_record_pointer_3;
  char input_byte;
  unsigned __int8 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_BYTE *)(a1 + 65);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021A2C8(a1);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(char **)(a1 + 24);
        input_byte = *loaded_record_pointer_3;
        if ( *loaded_record_pointer_3 == 51 && loaded_record_pointer_3[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( input_byte == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = input_byte - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, (char)integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (00000001402190E4) ----------------------------------------------------
char            sub_1402190E4(__int64 a1, __int64 a2, __int64 a3)
{
  char loaded_word;
  _BYTE *loaded_record_pointer;
  int selection_code;
  _BYTE *loaded_record_pointer_2;
  char *loaded_record_pointer_3;
  char input_byte;
  unsigned __int8 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_BYTE *)(a1 + 65);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021A564(a1, a2, a3);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(char **)(a1 + 24);
        input_byte = *loaded_record_pointer_3;
        if ( *loaded_record_pointer_3 == 51 && loaded_record_pointer_3[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( input_byte == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = input_byte - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, (char)integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (0000000140219258) ----------------------------------------------------
char            sub_140219258(__int64 a1, __int64 a2, __int64 a3)
{
  char loaded_word;
  _BYTE *loaded_record_pointer;
  int selection_code;
  _BYTE *loaded_record_pointer_2;
  char *loaded_record_pointer_3;
  char input_byte;
  unsigned __int8 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_BYTE *)(a1 + 65);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021A7E8(a1, a2, a3);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(char **)(a1 + 24);
        input_byte = *loaded_record_pointer_3;
        if ( *loaded_record_pointer_3 == 51 && loaded_record_pointer_3[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( input_byte == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = input_byte - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, (char)integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (00000001402193CC) ----------------------------------------------------
char            sub_1402193CC(__int64 a1)
{
  char loaded_word;
  _BYTE *loaded_record_pointer;
  int selection_code;
  _BYTE *loaded_record_pointer_2;
  char *loaded_record_pointer_3;
  char input_byte;
  unsigned __int8 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_BYTE *)(a1 + 65);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021AA50(a1);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(char **)(a1 + 24);
        input_byte = *loaded_record_pointer_3;
        if ( *loaded_record_pointer_3 == 51 && loaded_record_pointer_3[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( input_byte == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = input_byte - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, (char)integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (0000000140219540) ----------------------------------------------------
char            sub_140219540(__int64 a1, __int64 a2, __int64 a3)
{
  char loaded_word;
  _BYTE *loaded_record_pointer;
  int selection_code;
  _BYTE *loaded_record_pointer_2;
  char *loaded_record_pointer_3;
  char input_byte;
  unsigned __int8 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_BYTE *)(a1 + 65);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021ACCC(a1, a2, a3);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(char **)(a1 + 24);
        input_byte = *loaded_record_pointer_3;
        if ( *loaded_record_pointer_3 == 51 && loaded_record_pointer_3[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( input_byte == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = input_byte - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, (char)integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_BYTE **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (00000001402196B4) ----------------------------------------------------
char            sub_1402196B4(__int64 a1)
{
  __int16 loaded_word;
  _WORD *loaded_record_pointer;
  int selection_code;
  _WORD *loaded_record_pointer_2;
  __int16 *loaded_record_pointer_3;
  __int16 loaded_word_2;
  unsigned __int16 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_WORD *)(a1 + 66);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021AF34(a1);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(__int16 **)(a1 + 24);
        loaded_word_2 = *loaded_record_pointer_3;
        if ( *(_DWORD *)loaded_record_pointer_3 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( loaded_word_2 == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = loaded_word_2 - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (000000014021984C) ----------------------------------------------------
char            sub_14021984C(__int64 a1)
{
  __int16 loaded_word;
  _WORD *loaded_record_pointer;
  int selection_code;
  _WORD *loaded_record_pointer_2;
  __int16 *loaded_record_pointer_3;
  __int16 loaded_word_2;
  unsigned __int16 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_WORD *)(a1 + 66);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021B214(a1);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(__int16 **)(a1 + 24);
        loaded_word_2 = *loaded_record_pointer_3;
        if ( *(_DWORD *)loaded_record_pointer_3 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( loaded_word_2 == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = loaded_word_2 - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (00000001402199E4) ----------------------------------------------------
char            sub_1402199E4(__int64 a1)
{
  __int16 loaded_word;
  _WORD *loaded_record_pointer;
  int selection_code;
  _WORD *loaded_record_pointer_2;
  __int16 *loaded_record_pointer_3;
  __int16 loaded_word_2;
  unsigned __int16 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_WORD *)(a1 + 66);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021B508(a1);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(__int16 **)(a1 + 24);
        loaded_word_2 = *loaded_record_pointer_3;
        if ( *(_DWORD *)loaded_record_pointer_3 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( loaded_word_2 == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = loaded_word_2 - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (0000000140219B7C) ----------------------------------------------------
char            sub_140219B7C(__int64 a1)
{
  __int16 loaded_word;
  _WORD *loaded_record_pointer;
  int selection_code;
  _WORD *loaded_record_pointer_2;
  __int16 *loaded_record_pointer_3;
  __int16 loaded_word_2;
  unsigned __int16 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_WORD *)(a1 + 66);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021B7E8(a1);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(__int16 **)(a1 + 24);
        loaded_word_2 = *loaded_record_pointer_3;
        if ( *(_DWORD *)loaded_record_pointer_3 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( loaded_word_2 == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = loaded_word_2 - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (0000000140219D14) ----------------------------------------------------
char            sub_140219D14(__int64 a1)
{
  __int16 loaded_word;
  _WORD *loaded_record_pointer;
  int selection_code;
  _WORD *loaded_record_pointer_2;
  __int16 *loaded_record_pointer_3;
  __int16 loaded_word_2;
  unsigned __int16 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_WORD *)(a1 + 66);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021BAB4(a1);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(__int16 **)(a1 + 24);
        loaded_word_2 = *loaded_record_pointer_3;
        if ( *(_DWORD *)loaded_record_pointer_3 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( loaded_word_2 == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = loaded_word_2 - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (0000000140219EAC) ----------------------------------------------------
char            sub_140219EAC(__int64 a1)
{
  __int16 loaded_word;
  _WORD *loaded_record_pointer;
  int selection_code;
  _WORD *loaded_record_pointer_2;
  __int16 *loaded_record_pointer_3;
  __int16 loaded_word_2;
  unsigned __int16 integer_difference;
  __int64 selection_code_2;

  loaded_word = *(_WORD *)(a1 + 66);
  if ( loaded_word == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021BD94(a1);
    }
    return 1;
  }
  if ( loaded_word == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( loaded_word )
    {
      case 'I':
        loaded_record_pointer_3 = *(__int16 **)(a1 + 24);
        loaded_word_2 = *loaded_record_pointer_3;
        if ( *(_DWORD *)loaded_record_pointer_3 == 3276851 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else if ( loaded_word_2 == 54 && loaded_record_pointer_3[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 2);
        }
        else
        {
          integer_difference = loaded_word_2 - 88;
          if ( integer_difference <= 0x20u )
          {
            selection_code_2 = 0x120821001LL;
            if ( _bittest64(&selection_code_2, integer_difference) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        loaded_record_pointer_2 = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer_2 == 104 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          selection_code = 1;
        }
        else
        {
          selection_code = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        loaded_record_pointer = *(_WORD **)(a1 + 24);
        if ( *loaded_record_pointer == 108 )
        {
          *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
          selection_code = 4;
        }
        else
        {
          selection_code = 3;
        }
        break;
      default:
        switch ( loaded_word )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = selection_code;
  }
  return 1;
}

//----- (000000014021A044) ----------------------------------------------------
char            sub_14021A044(__int64 a1, ...)
{
  char loaded_word;
  __int64 input_value;
  char selection_code;
  char unknown_libname_527_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  char loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int *running_total;
  int loaded_word_6;
  __int16 selection_flag_2;
  char unused_written_slot;

  loaded_word = *(_BYTE *)(a1 + 65);
  input_value = a1;
  selection_code = 120;
  if ( loaded_word > 100 )
  {
    if ( loaded_word <= 103 )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          unknown_libname_527_result = unknown_libname_527(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          unknown_libname_527_result = sub_14021F310(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          unknown_libname_527_result = unknown_libname_535(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0;
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word != 65 )
  {
    if ( loaded_word == 67 )
    {
LABEL_12:
      unknown_libname_527_result = sub_14021E928(a1);
      goto LABEL_35;
    }
    if ( loaded_word <= 68 )
      return 0;
    if ( loaded_word > 71 )
    {
      if ( loaded_word != 83 )
      {
        if ( loaded_word != 88 )
        {
          if ( loaded_word == 90 )
          {
            unknown_libname_527_result = sub_14021C4F0(a1);
            goto LABEL_35;
          }
          if ( loaded_word != 97 )
          {
            if ( loaded_word == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  unknown_libname_527_result = unknown_libname_515(a1);
LABEL_35:
  if ( !unknown_libname_527_result )
    return 0;
  if ( !*(_BYTE *)(input_value + 64) )
  {
    loaded_word_3 = *(_DWORD *)(input_value + 48);
    selection_flag_2 = 0;
    packed_word_bits = 0;
    unused_written_slot = 0;
    if ( (loaded_word_3 & 0x10) == 0 )
      goto LABEL_46;
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      LOBYTE(selection_flag_2) = 45;
    }
    else if ( (loaded_word_3 & 1) != 0 )
    {
      LOBYTE(selection_flag_2) = 43;
    }
    else
    {
      if ( (loaded_word_3 & 2) == 0 )
        goto LABEL_46;
      LOBYTE(selection_flag_2) = 32;
    }
    packed_word_bits = 1;
LABEL_46:
    loaded_word_4 = *(_BYTE *)(input_value + 65);
    state_address = ((loaded_word_4 - 88) & 0xDF) == 0 && (loaded_word_3 & 0x20) != 0;
    if ( state_address || ((loaded_word_4 - 65) & 0xDF) == 0 )
    {
      *((_BYTE *)&selection_flag_2 + packed_word_bits) = 48;
      if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
        selection_code = 88;
      *((_BYTE *)&selection_flag_2 + packed_word_bits + 1) = selection_code;
      LODWORD(packed_word_bits) = packed_word_bits + 2;
    }
    loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
    if ( (loaded_word_3 & 0xC) == 0 )
      sub_140212B0C((__int64 *)(input_value + 1128), 0x20u, loaded_word_5, (_DWORD *)(input_value + 40));
    running_total = (int *)(input_value + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(input_value + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(input_value + 1128) + 8LL) )
      sub_1402248A8((int **)(input_value + 1128), (char *)&selection_flag_2, packed_word_bits, (_DWORD *)(input_value + 40), (int **)(input_value + 16));
    else
      *running_total += packed_word_bits;
    loaded_word_6 = *(_DWORD *)(input_value + 48);
    if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
      sub_140212B0C((__int64 *)(input_value + 1128), 0x30u, loaded_word_5, (_DWORD *)(input_value + 40));
    unknown_libname_581(input_value);
    if ( *running_total >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
      sub_140212B0C((__int64 *)(input_value + 1128), 0x20u, loaded_word_5, (_DWORD *)(input_value + 40));
  }
  return 1;
}

//----- (000000014021A2C8) ----------------------------------------------------
char            sub_14021A2C8(__int64 a1)
{
  char loaded_word;
  __int64 input_value;
  char selection_code;
  char call_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  char loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int *running_total;
  int loaded_word_6;
  __int16 selection_flag_2;
  char unused_written_slot;

  loaded_word = *(_BYTE *)(a1 + 65);
  input_value = a1;
  selection_code = 120;
  if ( loaded_word > 100 )
  {
    if ( loaded_word <= 103 )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          call_result = sub_140220A54(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          call_result = sub_14021F4D8(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          call_result = sub_1402217A0(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0;
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word != 65 )
  {
    if ( loaded_word == 67 )
    {
LABEL_12:
      call_result = sub_14021E9E4(a1);
      goto LABEL_35;
    }
    if ( loaded_word <= 68 )
      return 0;
    if ( loaded_word > 71 )
    {
      if ( loaded_word != 83 )
      {
        if ( loaded_word != 88 )
        {
          if ( loaded_word == 90 )
          {
            call_result = sub_14021C564(a1);
            goto LABEL_35;
          }
          if ( loaded_word != 97 )
          {
            if ( loaded_word == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  call_result = sub_14021CFF8(a1);
LABEL_35:
  if ( !call_result )
    return 0;
  if ( (*(_DWORD *)(input_value + 1148) != 2 || *(_DWORD *)(input_value + 1144) != 1) && !*(_BYTE *)(input_value + 64) )
  {
    loaded_word_3 = *(_DWORD *)(input_value + 48);
    selection_flag_2 = 0;
    packed_word_bits = 0;
    unused_written_slot = 0;
    if ( (loaded_word_3 & 0x10) == 0 )
      goto LABEL_48;
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      LOBYTE(selection_flag_2) = 45;
    }
    else if ( (loaded_word_3 & 1) != 0 )
    {
      LOBYTE(selection_flag_2) = 43;
    }
    else
    {
      if ( (loaded_word_3 & 2) == 0 )
        goto LABEL_48;
      LOBYTE(selection_flag_2) = 32;
    }
    packed_word_bits = 1;
LABEL_48:
    loaded_word_4 = *(_BYTE *)(input_value + 65);
    state_address = ((loaded_word_4 - 88) & 0xDF) == 0 && (loaded_word_3 & 0x20) != 0;
    if ( state_address || ((loaded_word_4 - 65) & 0xDF) == 0 )
    {
      *((_BYTE *)&selection_flag_2 + packed_word_bits) = 48;
      if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
        selection_code = 88;
      *((_BYTE *)&selection_flag_2 + packed_word_bits + 1) = selection_code;
      LODWORD(packed_word_bits) = packed_word_bits + 2;
    }
    loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
    if ( (loaded_word_3 & 0xC) == 0 )
      sub_140212B0C((__int64 *)(input_value + 1128), 0x20u, loaded_word_5, (_DWORD *)(input_value + 40));
    running_total = (int *)(input_value + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(input_value + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(input_value + 1128) + 8LL) )
      sub_1402248A8((int **)(input_value + 1128), (char *)&selection_flag_2, packed_word_bits, (_DWORD *)(input_value + 40), (int **)(input_value + 16));
    else
      *running_total += packed_word_bits;
    loaded_word_6 = *(_DWORD *)(input_value + 48);
    if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
      sub_140212B0C((__int64 *)(input_value + 1128), 0x30u, loaded_word_5, (_DWORD *)(input_value + 40));
    unknown_libname_582(input_value);
    if ( *running_total >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
      sub_140212B0C((__int64 *)(input_value + 1128), 0x20u, loaded_word_5, (_DWORD *)(input_value + 40));
  }
  return 1;
}

//----- (000000014021A564) ----------------------------------------------------
char            sub_14021A564(__int64 a1, ...)
{
  char loaded_word;
  __int64 input_value;
  char selection_code;
  char unknown_libname_528_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  char loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int *running_total;
  int loaded_word_6;
  __int16 selection_flag_2;
  char unused_written_slot;

  loaded_word = *(_BYTE *)(a1 + 65);
  input_value = a1;
  selection_code = 120;
  if ( loaded_word > 100 )
  {
    if ( loaded_word <= 103 )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          unknown_libname_528_result = unknown_libname_528(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          unknown_libname_528_result = sub_14021F6DC(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          unknown_libname_528_result = unknown_libname_536(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0;
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word != 65 )
  {
    if ( loaded_word == 67 )
    {
LABEL_12:
      unknown_libname_528_result = sub_14021EAE4(a1);
      goto LABEL_35;
    }
    if ( loaded_word <= 68 )
      return 0;
    if ( loaded_word > 71 )
    {
      if ( loaded_word != 83 )
      {
        if ( loaded_word != 88 )
        {
          if ( loaded_word == 90 )
          {
            unknown_libname_528_result = sub_14021C6BC(a1);
            goto LABEL_35;
          }
          if ( loaded_word != 97 )
          {
            if ( loaded_word == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  unknown_libname_528_result = unknown_libname_516(a1);
LABEL_35:
  if ( !unknown_libname_528_result )
    return 0;
  if ( !*(_BYTE *)(input_value + 64) )
  {
    loaded_word_3 = *(_DWORD *)(input_value + 48);
    selection_flag_2 = 0;
    packed_word_bits = 0;
    unused_written_slot = 0;
    if ( (loaded_word_3 & 0x10) == 0 )
      goto LABEL_46;
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      LOBYTE(selection_flag_2) = 45;
    }
    else if ( (loaded_word_3 & 1) != 0 )
    {
      LOBYTE(selection_flag_2) = 43;
    }
    else
    {
      if ( (loaded_word_3 & 2) == 0 )
        goto LABEL_46;
      LOBYTE(selection_flag_2) = 32;
    }
    packed_word_bits = 1;
LABEL_46:
    loaded_word_4 = *(_BYTE *)(input_value + 65);
    state_address = ((loaded_word_4 - 88) & 0xDF) == 0 && (loaded_word_3 & 0x20) != 0;
    if ( state_address || ((loaded_word_4 - 65) & 0xDF) == 0 )
    {
      *((_BYTE *)&selection_flag_2 + packed_word_bits) = 48;
      if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
        selection_code = 88;
      *((_BYTE *)&selection_flag_2 + packed_word_bits + 1) = selection_code;
      LODWORD(packed_word_bits) = packed_word_bits + 2;
    }
    loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
    if ( (loaded_word_3 & 0xC) == 0 )
      sub_140212B0C((__int64 *)(input_value + 1128), 0x20u, loaded_word_5, (_DWORD *)(input_value + 40));
    running_total = (int *)(input_value + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(input_value + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(input_value + 1128) + 8LL) )
      sub_1402248A8((int **)(input_value + 1128), (char *)&selection_flag_2, packed_word_bits, (_DWORD *)(input_value + 40), (int **)(input_value + 16));
    else
      *running_total += packed_word_bits;
    loaded_word_6 = *(_DWORD *)(input_value + 48);
    if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
      sub_140212B0C((__int64 *)(input_value + 1128), 0x30u, loaded_word_5, (_DWORD *)(input_value + 40));
    unknown_libname_583(input_value);
    if ( *running_total >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
      sub_140212B0C((__int64 *)(input_value + 1128), 0x20u, loaded_word_5, (_DWORD *)(input_value + 40));
  }
  return 1;
}

//----- (000000014021A7E8) ----------------------------------------------------
char            sub_14021A7E8(__int64 a1, ...)
{
  char loaded_word;
  __int64 input_value;
  __int8 selection_code;
  char unknown_libname_529_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  char loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int loaded_word_6;
  __m128i packed_vector;

  loaded_word = *(_BYTE *)(a1 + 65);
  input_value = a1;
  selection_code = 120;
  if ( loaded_word > 100 )
  {
    if ( loaded_word <= 103 )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          unknown_libname_529_result = unknown_libname_529(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          unknown_libname_529_result = sub_14021F8A4(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          unknown_libname_529_result = unknown_libname_537(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0;
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word != 65 )
  {
    if ( loaded_word == 67 )
    {
LABEL_12:
      unknown_libname_529_result = sub_14021EBA0(a1);
      goto LABEL_35;
    }
    if ( loaded_word <= 68 )
      return 0;
    if ( loaded_word > 71 )
    {
      if ( loaded_word != 83 )
      {
        if ( loaded_word != 88 )
        {
          if ( loaded_word == 90 )
          {
            unknown_libname_529_result = sub_14021C730(a1);
            goto LABEL_35;
          }
          if ( loaded_word != 97 )
          {
            if ( loaded_word == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  unknown_libname_529_result = unknown_libname_517(a1);
LABEL_35:
  if ( !unknown_libname_529_result )
    return 0;
  if ( !*(_BYTE *)(input_value + 64) )
  {
    loaded_word_3 = *(_DWORD *)(input_value + 48);
    SR_VEC_LANES(128, packed_vector, i16)[0] = 0;
    packed_word_bits = 0;
    SR_VEC_LANES(128, packed_vector, i8)[2] = 0;
    if ( (loaded_word_3 & 0x10) == 0 )
      goto LABEL_46;
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      SR_VEC_LANES(128, packed_vector, i8)[0] = 45;
    }
    else if ( (loaded_word_3 & 1) != 0 )
    {
      SR_VEC_LANES(128, packed_vector, i8)[0] = 43;
    }
    else
    {
      if ( (loaded_word_3 & 2) == 0 )
        goto LABEL_46;
      SR_VEC_LANES(128, packed_vector, i8)[0] = 32;
    }
    packed_word_bits = 1;
LABEL_46:
    loaded_word_4 = *(_BYTE *)(input_value + 65);
    state_address = ((loaded_word_4 - 88) & 0xDF) == 0 && (loaded_word_3 & 0x20) != 0;
    if ( state_address || ((loaded_word_4 - 65) & 0xDF) == 0 )
    {
      SR_VEC_LANES(128, packed_vector, i8)[packed_word_bits] = 48;
      if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
        selection_code = 88;
      SR_VEC_LANES(128, packed_vector, i8)[packed_word_bits + 1] = selection_code;
      LODWORD(packed_word_bits) = packed_word_bits + 2;
    }
    loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
    if ( (loaded_word_3 & 0xC) == 0 )
      unknown_libname_371((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
    unknown_libname_593(input_value + 1128, &packed_vector, packed_word_bits, (_DWORD *)(input_value + 40));
    loaded_word_6 = *(_DWORD *)(input_value + 48);
    if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
      unknown_libname_371((__int64 *)(input_value + 1128), 48, loaded_word_5, (int *)(input_value + 40));
    unknown_libname_584(input_value);
    if ( *(int *)(input_value + 40) >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
      unknown_libname_371((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
  }
  return 1;
}

//----- (000000014021AA50) ----------------------------------------------------
char            sub_14021AA50(__int64 a1)
{
  char loaded_word;
  __int64 input_value;
  __int8 selection_code;
  char call_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  char loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int loaded_word_6;
  __m128i packed_vector;

  loaded_word = *(_BYTE *)(a1 + 65);
  input_value = a1;
  selection_code = 120;
  if ( loaded_word > 100 )
  {
    if ( loaded_word <= 103 )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          call_result = sub_140220D10(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          call_result = sub_14021FA6C(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          call_result = sub_140221988(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0;
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word != 65 )
  {
    if ( loaded_word == 67 )
    {
LABEL_12:
      call_result = sub_14021EC5C(a1);
      goto LABEL_35;
    }
    if ( loaded_word <= 68 )
      return 0;
    if ( loaded_word > 71 )
    {
      if ( loaded_word != 83 )
      {
        if ( loaded_word != 88 )
        {
          if ( loaded_word == 90 )
          {
            call_result = sub_14021C7A4(a1);
            goto LABEL_35;
          }
          if ( loaded_word != 97 )
          {
            if ( loaded_word == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  call_result = sub_14021D67C(a1);
LABEL_35:
  if ( !call_result )
    return 0;
  if ( (*(_DWORD *)(input_value + 1148) != 2 || *(_DWORD *)(input_value + 1144) != 1) && !*(_BYTE *)(input_value + 64) )
  {
    loaded_word_3 = *(_DWORD *)(input_value + 48);
    SR_VEC_LANES(128, packed_vector, i16)[0] = 0;
    packed_word_bits = 0;
    SR_VEC_LANES(128, packed_vector, i8)[2] = 0;
    if ( (loaded_word_3 & 0x10) == 0 )
      goto LABEL_48;
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      SR_VEC_LANES(128, packed_vector, i8)[0] = 45;
    }
    else if ( (loaded_word_3 & 1) != 0 )
    {
      SR_VEC_LANES(128, packed_vector, i8)[0] = 43;
    }
    else
    {
      if ( (loaded_word_3 & 2) == 0 )
        goto LABEL_48;
      SR_VEC_LANES(128, packed_vector, i8)[0] = 32;
    }
    packed_word_bits = 1;
LABEL_48:
    loaded_word_4 = *(_BYTE *)(input_value + 65);
    state_address = ((loaded_word_4 - 88) & 0xDF) == 0 && (loaded_word_3 & 0x20) != 0;
    if ( state_address || ((loaded_word_4 - 65) & 0xDF) == 0 )
    {
      SR_VEC_LANES(128, packed_vector, i8)[packed_word_bits] = 48;
      if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
        selection_code = 88;
      SR_VEC_LANES(128, packed_vector, i8)[packed_word_bits + 1] = selection_code;
      LODWORD(packed_word_bits) = packed_word_bits + 2;
    }
    loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
    if ( (loaded_word_3 & 0xC) == 0 )
      unknown_libname_371((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
    unknown_libname_593(input_value + 1128, &packed_vector, packed_word_bits, (_DWORD *)(input_value + 40));
    loaded_word_6 = *(_DWORD *)(input_value + 48);
    if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
      unknown_libname_371((__int64 *)(input_value + 1128), 48, loaded_word_5, (int *)(input_value + 40));
    unknown_libname_585(input_value);
    if ( *(int *)(input_value + 40) >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
      unknown_libname_371((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
  }
  return 1;
}

//----- (000000014021ACCC) ----------------------------------------------------
char            sub_14021ACCC(__int64 a1, ...)
{
  char loaded_word;
  __int64 input_value;
  __int8 selection_code;
  char unknown_libname_530_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  char loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int loaded_word_6;
  __m128i packed_vector;

  loaded_word = *(_BYTE *)(a1 + 65);
  input_value = a1;
  selection_code = 120;
  if ( loaded_word > 100 )
  {
    if ( loaded_word <= 103 )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          unknown_libname_530_result = unknown_libname_530(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          unknown_libname_530_result = sub_14021FC70(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          unknown_libname_530_result = unknown_libname_538(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0;
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word != 65 )
  {
    if ( loaded_word == 67 )
    {
LABEL_12:
      unknown_libname_530_result = sub_14021ED5C(a1);
      goto LABEL_35;
    }
    if ( loaded_word <= 68 )
      return 0;
    if ( loaded_word > 71 )
    {
      if ( loaded_word != 83 )
      {
        if ( loaded_word != 88 )
        {
          if ( loaded_word == 90 )
          {
            unknown_libname_530_result = sub_14021C8FC(a1);
            goto LABEL_35;
          }
          if ( loaded_word != 97 )
          {
            if ( loaded_word == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  unknown_libname_530_result = unknown_libname_518(a1);
LABEL_35:
  if ( !unknown_libname_530_result )
    return 0;
  if ( !*(_BYTE *)(input_value + 64) )
  {
    loaded_word_3 = *(_DWORD *)(input_value + 48);
    SR_VEC_LANES(128, packed_vector, i16)[0] = 0;
    packed_word_bits = 0;
    SR_VEC_LANES(128, packed_vector, i8)[2] = 0;
    if ( (loaded_word_3 & 0x10) == 0 )
      goto LABEL_46;
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      SR_VEC_LANES(128, packed_vector, i8)[0] = 45;
    }
    else if ( (loaded_word_3 & 1) != 0 )
    {
      SR_VEC_LANES(128, packed_vector, i8)[0] = 43;
    }
    else
    {
      if ( (loaded_word_3 & 2) == 0 )
        goto LABEL_46;
      SR_VEC_LANES(128, packed_vector, i8)[0] = 32;
    }
    packed_word_bits = 1;
LABEL_46:
    loaded_word_4 = *(_BYTE *)(input_value + 65);
    state_address = ((loaded_word_4 - 88) & 0xDF) == 0 && (loaded_word_3 & 0x20) != 0;
    if ( state_address || ((loaded_word_4 - 65) & 0xDF) == 0 )
    {
      SR_VEC_LANES(128, packed_vector, i8)[packed_word_bits] = 48;
      if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
        selection_code = 88;
      SR_VEC_LANES(128, packed_vector, i8)[packed_word_bits + 1] = selection_code;
      LODWORD(packed_word_bits) = packed_word_bits + 2;
    }
    loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
    if ( (loaded_word_3 & 0xC) == 0 )
      unknown_libname_371((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
    unknown_libname_593(input_value + 1128, &packed_vector, packed_word_bits, (_DWORD *)(input_value + 40));
    loaded_word_6 = *(_DWORD *)(input_value + 48);
    if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
      unknown_libname_371((__int64 *)(input_value + 1128), 48, loaded_word_5, (int *)(input_value + 40));
    unknown_libname_586(input_value);
    if ( *(int *)(input_value + 40) >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
      unknown_libname_371((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
  }
  return 1;
}

//----- (000000014021AF34) ----------------------------------------------------
__int64            sub_14021AF34(__int64 a1)
{
  unsigned __int16 loaded_word;
  __int16 selection_code;
  __int64 input_value;
  char unknown_libname_531_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  __int16 selection_code_3;
  __int16 loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int *running_total;
  int loaded_word_6;
  __int64 unused_local;
  int selection_flag_2;
  __int16 unused_written_slot;
  __int64 unused_local_2;

  loaded_word = *(_WORD *)(a1 + 66);
  selection_code = 120;
  input_value = a1;
  if ( loaded_word > 0x64u )
  {
    if ( loaded_word <= 0x67u )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          unknown_libname_531_result = unknown_libname_531(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          unknown_libname_531_result = sub_14021FE38(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          unknown_libname_531_result = unknown_libname_539(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0; /* 0x14021B071: xor al, al */
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word == 65 )
    goto LABEL_34;
  if ( loaded_word != 67 )
  {
    if ( loaded_word <= 0x44u )
      return 0; /* 0x14021B071: xor al, al */
    if ( loaded_word <= 0x47u )
      goto LABEL_34;
    if ( loaded_word != 83 )
    {
      if ( loaded_word != 88 )
      {
        if ( loaded_word == 90 )
        {
          unknown_libname_531_result = unknown_libname_511(a1);
          goto LABEL_35;
        }
        if ( loaded_word != 97 )
        {
          if ( loaded_word != 99 )
            return 0; /* 0x14021B071: xor al, al */
          goto LABEL_12;
        }
LABEL_34:
        unknown_libname_531_result = unknown_libname_519(a1);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_12:
  unknown_libname_531_result = unknown_libname_523(a1);
LABEL_35:
  if ( !unknown_libname_531_result || *(_BYTE *)(input_value + 64) )
    return unknown_libname_531_result != 0; /* 0x14021B06D: test al, al -> xor al, al; otherwise 0x14021B1E8: mov al, r15b (1) */
  loaded_word_3 = *(_DWORD *)(input_value + 48);
  selection_flag_2 = 0;
  packed_word_bits = 0;
  unused_written_slot = 0;
  if ( (loaded_word_3 & 0x10) != 0 )
  {
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      selection_code_3 = 45;
    }
    else
    {
      if ( (loaded_word_3 & 1) == 0 )
      {
        if ( (loaded_word_3 & 2) == 0 )
          goto LABEL_47;
        LOWORD(selection_flag_2) = 32;
        goto LABEL_46;
      }
      selection_code_3 = 43;
    }
    LOWORD(selection_flag_2) = selection_code_3;
LABEL_46:
    packed_word_bits = 1;
  }
LABEL_47:
  loaded_word_4 = *(_WORD *)(input_value + 66);
  state_address = ((loaded_word_4 - 88) & 0xFFDF) == 0 && (loaded_word_3 & 0x20) != 0;
  if ( state_address || ((loaded_word_4 - 65) & 0xFFDF) == 0 )
  {
    *((_WORD *)&selection_flag_2 + packed_word_bits) = 48;
    if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
      selection_code = 88;
    *((_WORD *)&selection_flag_2 + packed_word_bits + 1) = selection_code;
    LODWORD(packed_word_bits) = packed_word_bits + 2;
  }
  loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
  if ( (loaded_word_3 & 0xC) == 0 )
    sub_140212B98((__int64 *)(input_value + 1128), 32, loaded_word_5, (_DWORD *)(input_value + 40));
  running_total = (int *)(input_value + 40);
  if ( (*(_DWORD *)(*(_QWORD *)(input_value + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(input_value + 1128) + 8LL) )
    sub_1402249A0((int **)(input_value + 1128), (unsigned __int16 *)&selection_flag_2, packed_word_bits, (_DWORD *)(input_value + 40), (int **)(input_value + 16));
  else
    *running_total += packed_word_bits;
  loaded_word_6 = *(_DWORD *)(input_value + 48);
  if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
    sub_140212B98((__int64 *)(input_value + 1128), 48, loaded_word_5, (_DWORD *)(input_value + 40));
  unknown_libname_587(input_value);
  if ( *running_total >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
    sub_140212B98((__int64 *)(input_value + 1128), 32, loaded_word_5, (_DWORD *)(input_value + 40));
  return 1; /* 0x14021B1E8: mov al, r15b (1) */
}

//----- (000000014021B214) ----------------------------------------------------
__int64            sub_14021B214(__int64 a1)
{
  unsigned __int16 loaded_word;
  __int16 selection_code;
  __int64 input_value;
  char call_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  __int16 selection_code_3;
  __int16 loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int *running_total;
  int loaded_word_6;
  __int64 unused_local;
  int selection_flag_2;
  __int16 unused_written_slot;
  __int64 unused_local_2;

  loaded_word = *(_WORD *)(a1 + 66);
  selection_code = 120;
  input_value = a1;
  if ( loaded_word > 0x64u )
  {
    if ( loaded_word <= 0x67u )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          call_result = sub_140220FCC(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          call_result = sub_140220004(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          call_result = sub_140221BA0(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0; /* xor al, al */
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word != 65 )
  {
    if ( loaded_word == 67 )
    {
LABEL_12:
      call_result = sub_14021EEC0(a1);
      goto LABEL_35;
    }
    if ( loaded_word <= 0x44u )
      return 0; /* xor al, al */
    if ( loaded_word > 0x47u )
    {
      if ( loaded_word != 83 )
      {
        if ( loaded_word != 88 )
        {
          if ( loaded_word == 90 )
          {
            call_result = sub_14021C9EC((_QWORD *)a1);
            goto LABEL_35;
          }
          if ( loaded_word != 97 )
          {
            if ( loaded_word != 99 )
              return 0; /* xor al, al */
            goto LABEL_12;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  call_result = sub_14021DD24(a1);
LABEL_35:
  if ( !call_result || *(_DWORD *)(input_value + 1148) == 2 && *(_DWORD *)(input_value + 1144) == 1 || *(_BYTE *)(input_value + 64) )
    return call_result != 0; /* test al, al -> xor al, al; otherwise 0x14021B4DE: mov al, r15b (1) */
  loaded_word_3 = *(_DWORD *)(input_value + 48);
  selection_flag_2 = 0;
  packed_word_bits = 0;
  unused_written_slot = 0;
  if ( (loaded_word_3 & 0x10) != 0 )
  {
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      selection_code_3 = 45;
    }
    else
    {
      if ( (loaded_word_3 & 1) == 0 )
      {
        if ( (loaded_word_3 & 2) == 0 )
          goto LABEL_49;
        LOWORD(selection_flag_2) = 32;
        goto LABEL_48;
      }
      selection_code_3 = 43;
    }
    LOWORD(selection_flag_2) = selection_code_3;
LABEL_48:
    packed_word_bits = 1;
  }
LABEL_49:
  loaded_word_4 = *(_WORD *)(input_value + 66);
  state_address = ((loaded_word_4 - 88) & 0xFFDF) == 0 && (loaded_word_3 & 0x20) != 0;
  if ( state_address || ((loaded_word_4 - 65) & 0xFFDF) == 0 )
  {
    *((_WORD *)&selection_flag_2 + packed_word_bits) = 48;
    if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
      selection_code = 88;
    *((_WORD *)&selection_flag_2 + packed_word_bits + 1) = selection_code;
    LODWORD(packed_word_bits) = packed_word_bits + 2;
  }
  loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
  if ( (loaded_word_3 & 0xC) == 0 )
    sub_140212B98((__int64 *)(input_value + 1128), 32, loaded_word_5, (_DWORD *)(input_value + 40));
  running_total = (int *)(input_value + 40);
  if ( (*(_DWORD *)(*(_QWORD *)(input_value + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(input_value + 1128) + 8LL) )
    sub_1402249A0((int **)(input_value + 1128), (unsigned __int16 *)&selection_flag_2, packed_word_bits, (_DWORD *)(input_value + 40), (int **)(input_value + 16));
  else
    *running_total += packed_word_bits;
  loaded_word_6 = *(_DWORD *)(input_value + 48);
  if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
    sub_140212B98((__int64 *)(input_value + 1128), 48, loaded_word_5, (_DWORD *)(input_value + 40));
  unknown_libname_588(input_value);
  if ( *running_total >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
    sub_140212B98((__int64 *)(input_value + 1128), 32, loaded_word_5, (_DWORD *)(input_value + 40));
  return 1; /* 0x14021B4DE: mov al, r15b (1) */
}

//----- (000000014021B508) ----------------------------------------------------
__int64            sub_14021B508(__int64 a1)
{
  unsigned __int16 loaded_word;
  __int16 selection_code;
  __int64 input_value;
  char unknown_libname_532_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  __int16 selection_code_3;
  __int16 loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int *running_total;
  int loaded_word_6;
  __int64 unused_local;
  int selection_flag_2;
  __int16 unused_written_slot;
  __int64 unused_local_2;

  loaded_word = *(_WORD *)(a1 + 66);
  selection_code = 120;
  input_value = a1;
  if ( loaded_word > 0x64u )
  {
    if ( loaded_word <= 0x67u )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          unknown_libname_532_result = unknown_libname_532(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          unknown_libname_532_result = sub_14022020C(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          unknown_libname_532_result = unknown_libname_540(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0; /* 0x14021B645: xor al, al */
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word == 65 )
    goto LABEL_34;
  if ( loaded_word != 67 )
  {
    if ( loaded_word <= 0x44u )
      return 0; /* 0x14021B645: xor al, al */
    if ( loaded_word <= 0x47u )
      goto LABEL_34;
    if ( loaded_word != 83 )
    {
      if ( loaded_word != 88 )
      {
        if ( loaded_word == 90 )
        {
          unknown_libname_532_result = unknown_libname_512(a1);
          goto LABEL_35;
        }
        if ( loaded_word != 97 )
        {
          if ( loaded_word != 99 )
            return 0; /* 0x14021B645: xor al, al */
          goto LABEL_12;
        }
LABEL_34:
        unknown_libname_532_result = unknown_libname_520(a1);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_12:
  unknown_libname_532_result = unknown_libname_524(a1);
LABEL_35:
  if ( !unknown_libname_532_result || *(_BYTE *)(input_value + 64) )
    return unknown_libname_532_result != 0; /* 0x14021B641: test al, al -> xor al, al; otherwise 0x14021B7BC: mov al, r15b (1) */
  loaded_word_3 = *(_DWORD *)(input_value + 48);
  selection_flag_2 = 0;
  packed_word_bits = 0;
  unused_written_slot = 0;
  if ( (loaded_word_3 & 0x10) != 0 )
  {
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      selection_code_3 = 45;
    }
    else
    {
      if ( (loaded_word_3 & 1) == 0 )
      {
        if ( (loaded_word_3 & 2) == 0 )
          goto LABEL_47;
        LOWORD(selection_flag_2) = 32;
        goto LABEL_46;
      }
      selection_code_3 = 43;
    }
    LOWORD(selection_flag_2) = selection_code_3;
LABEL_46:
    packed_word_bits = 1;
  }
LABEL_47:
  loaded_word_4 = *(_WORD *)(input_value + 66);
  state_address = ((loaded_word_4 - 88) & 0xFFDF) == 0 && (loaded_word_3 & 0x20) != 0;
  if ( state_address || ((loaded_word_4 - 65) & 0xFFDF) == 0 )
  {
    *((_WORD *)&selection_flag_2 + packed_word_bits) = 48;
    if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
      selection_code = 88;
    *((_WORD *)&selection_flag_2 + packed_word_bits + 1) = selection_code;
    LODWORD(packed_word_bits) = packed_word_bits + 2;
  }
  loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
  if ( (loaded_word_3 & 0xC) == 0 )
    sub_140212B98((__int64 *)(input_value + 1128), 32, loaded_word_5, (_DWORD *)(input_value + 40));
  running_total = (int *)(input_value + 40);
  if ( (*(_DWORD *)(*(_QWORD *)(input_value + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(input_value + 1128) + 8LL) )
    sub_1402249A0((int **)(input_value + 1128), (unsigned __int16 *)&selection_flag_2, packed_word_bits, (_DWORD *)(input_value + 40), (int **)(input_value + 16));
  else
    *running_total += packed_word_bits;
  loaded_word_6 = *(_DWORD *)(input_value + 48);
  if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
    sub_140212B98((__int64 *)(input_value + 1128), 48, loaded_word_5, (_DWORD *)(input_value + 40));
  unknown_libname_589(input_value);
  if ( *running_total >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
    sub_140212B98((__int64 *)(input_value + 1128), 32, loaded_word_5, (_DWORD *)(input_value + 40));
  return 1; /* 0x14021B7BC: mov al, r15b (1) */
}

//----- (000000014021B7E8) ----------------------------------------------------
__int64            sub_14021B7E8(__int64 a1)
{
  unsigned __int16 loaded_word;
  __int16 selection_code;
  __int64 input_value;
  char unknown_libname_533_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  __int16 selection_code_3;
  __int16 loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int loaded_word_6;
  _QWORD scratch_buffer[6];
  __m128i packed_vector;

  loaded_word = *(_WORD *)(a1 + 66);
  selection_code = 120;
  input_value = a1;
  if ( loaded_word > 0x64u )
  {
    if ( loaded_word <= 0x67u )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          unknown_libname_533_result = unknown_libname_533(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          unknown_libname_533_result = sub_1402203D8(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          unknown_libname_533_result = unknown_libname_541(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0; /* xor al, al */
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word == 65 )
    goto LABEL_34;
  if ( loaded_word != 67 )
  {
    if ( loaded_word <= 0x44u )
      return 0; /* xor al, al */
    if ( loaded_word <= 0x47u )
      goto LABEL_34;
    if ( loaded_word != 83 )
    {
      if ( loaded_word != 88 )
      {
        if ( loaded_word == 90 )
        {
          unknown_libname_533_result = unknown_libname_513(a1);
          goto LABEL_35;
        }
        if ( loaded_word != 97 )
        {
          if ( loaded_word != 99 )
            return 0; /* xor al, al */
          goto LABEL_12;
        }
LABEL_34:
        unknown_libname_533_result = unknown_libname_521(a1);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_12:
  unknown_libname_533_result = unknown_libname_525(a1);
LABEL_35:
  if ( !unknown_libname_533_result || *(_BYTE *)(input_value + 64) )
    return unknown_libname_533_result != 0; /* test al, al -> xor al, al; otherwise 0x14021BA84: mov al, r15b (1) */
  loaded_word_3 = *(_DWORD *)(input_value + 48);
  SR_VEC_LANES(128, packed_vector, i32)[0] = 0;
  packed_word_bits = 0;
  SR_VEC_LANES(128, packed_vector, i16)[2] = 0;
  if ( (loaded_word_3 & 0x10) != 0 )
  {
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      selection_code_3 = 45;
    }
    else
    {
      if ( (loaded_word_3 & 1) == 0 )
      {
        if ( (loaded_word_3 & 2) == 0 )
          goto LABEL_47;
        SR_VEC_LANES(128, packed_vector, i16)[0] = 32;
        goto LABEL_46;
      }
      selection_code_3 = 43;
    }
    SR_VEC_LANES(128, packed_vector, i16)[0] = selection_code_3;
LABEL_46:
    packed_word_bits = 1;
  }
LABEL_47:
  loaded_word_4 = *(_WORD *)(input_value + 66);
  state_address = ((loaded_word_4 - 88) & 0xFFDF) == 0 && (loaded_word_3 & 0x20) != 0;
  if ( state_address || ((loaded_word_4 - 65) & 0xFFDF) == 0 )
  {
    SR_VEC_LANES(128, packed_vector, i16)[packed_word_bits] = 48;
    if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
      selection_code = 88;
    SR_VEC_LANES(128, packed_vector, i16)[packed_word_bits + 1] = selection_code;
    LODWORD(packed_word_bits) = packed_word_bits + 2;
  }
  loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
  if ( (loaded_word_3 & 0xC) == 0 )
    sub_140212CA4((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
  scratch_buffer[4] = input_value + 16;
  unknown_libname_594(input_value + 1128, &packed_vector, packed_word_bits, (_DWORD *)(input_value + 40));
  loaded_word_6 = *(_DWORD *)(input_value + 48);
  if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
    sub_140212CA4((__int64 *)(input_value + 1128), 48, loaded_word_5, (int *)(input_value + 40));
  unknown_libname_590(input_value);
  if ( *(int *)(input_value + 40) >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
    sub_140212CA4((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
  return 1; /* 0x14021BA84: mov al, r15b (1) */
}

//----- (000000014021BAB4) ----------------------------------------------------
__int64            sub_14021BAB4(__int64 a1)
{
  unsigned __int16 loaded_word;
  __int16 selection_code;
  __int64 input_value;
  char call_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  __int16 selection_code_3;
  __int16 loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int loaded_word_6;
  _QWORD scratch_buffer[6];
  __m128i packed_vector;

  loaded_word = *(_WORD *)(a1 + 66);
  selection_code = 120;
  input_value = a1;
  if ( loaded_word > 0x64u )
  {
    if ( loaded_word <= 0x67u )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          call_result = sub_140221288(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          call_result = sub_1402205A4(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          call_result = sub_140221E1C(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0; /* xor al, al */
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word != 65 )
  {
    if ( loaded_word == 67 )
    {
LABEL_12:
      call_result = sub_14021F0DC(a1);
      goto LABEL_35;
    }
    if ( loaded_word <= 0x44u )
      return 0; /* xor al, al */
    if ( loaded_word > 0x47u )
    {
      if ( loaded_word != 83 )
      {
        if ( loaded_word != 88 )
        {
          if ( loaded_word == 90 )
          {
            call_result = sub_14021CC24((_QWORD *)a1);
            goto LABEL_35;
          }
          if ( loaded_word != 97 )
          {
            if ( loaded_word != 99 )
              return 0; /* xor al, al */
            goto LABEL_12;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  call_result = sub_14021E414(a1);
LABEL_35:
  if ( !call_result || *(_DWORD *)(input_value + 1148) == 2 && *(_DWORD *)(input_value + 1144) == 1 || *(_BYTE *)(input_value + 64) )
    return call_result != 0; /* test al, al -> xor al, al; otherwise 0x14021BD66: mov al, r15b (1) */
  loaded_word_3 = *(_DWORD *)(input_value + 48);
  SR_VEC_LANES(128, packed_vector, i32)[0] = 0;
  packed_word_bits = 0;
  SR_VEC_LANES(128, packed_vector, i16)[2] = 0;
  if ( (loaded_word_3 & 0x10) != 0 )
  {
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      selection_code_3 = 45;
    }
    else
    {
      if ( (loaded_word_3 & 1) == 0 )
      {
        if ( (loaded_word_3 & 2) == 0 )
          goto LABEL_49;
        SR_VEC_LANES(128, packed_vector, i16)[0] = 32;
        goto LABEL_48;
      }
      selection_code_3 = 43;
    }
    SR_VEC_LANES(128, packed_vector, i16)[0] = selection_code_3;
LABEL_48:
    packed_word_bits = 1;
  }
LABEL_49:
  loaded_word_4 = *(_WORD *)(input_value + 66);
  state_address = ((loaded_word_4 - 88) & 0xFFDF) == 0 && (loaded_word_3 & 0x20) != 0;
  if ( state_address || ((loaded_word_4 - 65) & 0xFFDF) == 0 )
  {
    SR_VEC_LANES(128, packed_vector, i16)[packed_word_bits] = 48;
    if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
      selection_code = 88;
    SR_VEC_LANES(128, packed_vector, i16)[packed_word_bits + 1] = selection_code;
    LODWORD(packed_word_bits) = packed_word_bits + 2;
  }
  loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
  if ( (loaded_word_3 & 0xC) == 0 )
    sub_140212CA4((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
  scratch_buffer[4] = input_value + 16;
  unknown_libname_594(input_value + 1128, &packed_vector, packed_word_bits, (_DWORD *)(input_value + 40));
  loaded_word_6 = *(_DWORD *)(input_value + 48);
  if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
    sub_140212CA4((__int64 *)(input_value + 1128), 48, loaded_word_5, (int *)(input_value + 40));
  unknown_libname_591(input_value);
  if ( *(int *)(input_value + 40) >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
    sub_140212CA4((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
  return 1; /* 0x14021BD66: mov al, r15b (1) */
}

//----- (000000014021BD94) ----------------------------------------------------
__int64            sub_14021BD94(__int64 a1)
{
  unsigned __int16 loaded_word;
  __int16 selection_code;
  __int64 input_value;
  char unknown_libname_534_result;
  unsigned int selection_code_2;
  char selection_flag;
  int loaded_word_2;
  int loaded_word_3;
  __int64 packed_word_bits;
  __int16 selection_code_3;
  __int16 loaded_word_4;
  bool state_address;
  int loaded_word_5;
  int loaded_word_6;
  _QWORD scratch_buffer[6];
  __m128i packed_vector;

  loaded_word = *(_WORD *)(a1 + 66);
  selection_code = 120;
  input_value = a1;
  if ( loaded_word > 0x64u )
  {
    if ( loaded_word <= 0x67u )
      goto LABEL_34;
    if ( loaded_word != 105 )
    {
      switch ( loaded_word )
      {
        case 'n':
          unknown_libname_534_result = unknown_libname_534(a1);
          goto LABEL_35;
        case 'o':
          loaded_word_2 = *(_DWORD *)(a1 + 48);
          if ( (loaded_word_2 & 0x20) != 0 )
            *(_DWORD *)(input_value + 48) = loaded_word_2 | 0x80;
          selection_code_2 = 8;
          a1 = input_value;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          selection_flag = 1;
          selection_code_2 = 16;
LABEL_33:
          unknown_libname_534_result = sub_1402207AC(a1, selection_code_2, selection_flag);
          goto LABEL_35;
        case 's':
LABEL_23:
          unknown_libname_534_result = unknown_libname_542(a1);
          goto LABEL_35;
      }
      if ( loaded_word != 117 )
      {
        if ( loaded_word != 120 )
          return 0; /* xor al, al */
        selection_code_2 = 16;
        goto LABEL_32;
      }
LABEL_31:
      selection_code_2 = 10;
LABEL_32:
      selection_flag = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( loaded_word == 100 )
    goto LABEL_30;
  if ( loaded_word == 65 )
    goto LABEL_34;
  if ( loaded_word != 67 )
  {
    if ( loaded_word <= 0x44u )
      return 0; /* xor al, al */
    if ( loaded_word <= 0x47u )
      goto LABEL_34;
    if ( loaded_word != 83 )
    {
      if ( loaded_word != 88 )
      {
        if ( loaded_word == 90 )
        {
          unknown_libname_534_result = unknown_libname_514(a1);
          goto LABEL_35;
        }
        if ( loaded_word != 97 )
        {
          if ( loaded_word != 99 )
            return 0; /* xor al, al */
          goto LABEL_12;
        }
LABEL_34:
        unknown_libname_534_result = unknown_libname_522(a1);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_12:
  unknown_libname_534_result = unknown_libname_526(a1);
LABEL_35:
  if ( !unknown_libname_534_result || *(_BYTE *)(input_value + 64) )
    return unknown_libname_534_result != 0; /* test al, al -> xor al, al; otherwise 0x14021C030: mov al, r15b (1) */
  loaded_word_3 = *(_DWORD *)(input_value + 48);
  SR_VEC_LANES(128, packed_vector, i32)[0] = 0;
  packed_word_bits = 0;
  SR_VEC_LANES(128, packed_vector, i16)[2] = 0;
  if ( (loaded_word_3 & 0x10) != 0 )
  {
    if ( (loaded_word_3 & 0x40) != 0 )
    {
      selection_code_3 = 45;
    }
    else
    {
      if ( (loaded_word_3 & 1) == 0 )
      {
        if ( (loaded_word_3 & 2) == 0 )
          goto LABEL_47;
        SR_VEC_LANES(128, packed_vector, i16)[0] = 32;
        goto LABEL_46;
      }
      selection_code_3 = 43;
    }
    SR_VEC_LANES(128, packed_vector, i16)[0] = selection_code_3;
LABEL_46:
    packed_word_bits = 1;
  }
LABEL_47:
  loaded_word_4 = *(_WORD *)(input_value + 66);
  state_address = ((loaded_word_4 - 88) & 0xFFDF) == 0 && (loaded_word_3 & 0x20) != 0;
  if ( state_address || ((loaded_word_4 - 65) & 0xFFDF) == 0 )
  {
    SR_VEC_LANES(128, packed_vector, i16)[packed_word_bits] = 48;
    if ( loaded_word_4 == 88 || loaded_word_4 == 65 )
      selection_code = 88;
    SR_VEC_LANES(128, packed_vector, i16)[packed_word_bits + 1] = selection_code;
    LODWORD(packed_word_bits) = packed_word_bits + 2;
  }
  loaded_word_5 = *(_DWORD *)(input_value + 52) - *(_DWORD *)(input_value + 80) - packed_word_bits;
  if ( (loaded_word_3 & 0xC) == 0 )
    sub_140212CA4((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
  scratch_buffer[4] = input_value + 16;
  unknown_libname_594(input_value + 1128, &packed_vector, packed_word_bits, (_DWORD *)(input_value + 40));
  loaded_word_6 = *(_DWORD *)(input_value + 48);
  if ( (loaded_word_6 & 8) != 0 && (loaded_word_6 & 4) == 0 )
    sub_140212CA4((__int64 *)(input_value + 1128), 48, loaded_word_5, (int *)(input_value + 40));
  unknown_libname_592(input_value);
  if ( *(int *)(input_value + 40) >= 0 && (*(_DWORD *)(input_value + 48) & 4) != 0 )
    sub_140212CA4((__int64 *)(input_value + 1128), 32, loaded_word_5, (int *)(input_value + 40));
  return 1; /* 0x14021C030: mov al, r15b (1) */
}

//----- (000000014021C094) ----------------------------------------------------
char            sub_14021C094(__int64 a1)
{
  char result;
  int loaded_word;

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_451(a1, (_DWORD *)(a1 + 52));
  result = sub_140222390(a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      loaded_word = *(_DWORD *)(a1 + 52);
      if ( loaded_word < 0 )
      {
        *(_DWORD *)(a1 + 48) |= 4u;
        *(_DWORD *)(a1 + 52) = -loaded_word;
      }
    }
    return 1;
  }
  return result;
}

//----- (000000014021C14C) ----------------------------------------------------
char            sub_14021C14C(__int64 a1)
{
  char result;
  int loaded_word;

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_454(a1, (_DWORD *)(a1 + 52));
  result = sub_1402224A8(a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      loaded_word = *(_DWORD *)(a1 + 52);
      if ( loaded_word < 0 )
      {
        *(_DWORD *)(a1 + 48) |= 4u;
        *(_DWORD *)(a1 + 52) = -loaded_word;
      }
    }
    return 1;
  }
  return result;
}

//----- (000000014021C204) ----------------------------------------------------
char            sub_14021C204(__int64 a1)
{
  char result;
  int loaded_word;

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_457(a1, (_DWORD *)(a1 + 52));
  result = sub_1402225C0(a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      loaded_word = *(_DWORD *)(a1 + 52);
      if ( loaded_word < 0 )
      {
        *(_DWORD *)(a1 + 48) |= 4u;
        *(_DWORD *)(a1 + 52) = -loaded_word;
      }
    }
    return 1;
  }
  return result;
}

//----- (000000014021C2C0) ----------------------------------------------------
char            sub_14021C2C0(__int64 a1)
{
  char result;
  int loaded_word;

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_460(a1, (_DWORD *)(a1 + 52));
  result = sub_1402226D8(a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      loaded_word = *(_DWORD *)(a1 + 52);
      if ( loaded_word < 0 )
      {
        *(_DWORD *)(a1 + 48) |= 4u;
        *(_DWORD *)(a1 + 52) = -loaded_word;
      }
    }
    return 1;
  }
  return result;
}

//----- (000000014021C4F0) ----------------------------------------------------
char            sub_14021C4F0(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool comparison_result;
  unsigned int remaining_bits;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    remaining_bits = 6;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      comparison_result = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_10;
    }
  }
  comparison_result = 0;
LABEL_10:
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !comparison_result )
  {
LABEL_13:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_14:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021C564) ----------------------------------------------------
char            sub_14021C564(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool comparison_result;
  __int64 loaded_word_2;
  __int64 scaled_index;
  int loaded_word_3;
  char loaded_word_4;
  __int64 scaled_index_2;
  char selection_flag;
  unsigned int remaining_bits;

  loaded_record_pointer = nullptr;
  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word_2 = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word_2 > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word_2;
    if ( *(_DWORD *)(a1 + 1144) == 1 )
    {
      loaded_word_3 = *(_DWORD *)(a1 + 60);
      loaded_word_4 = *(_BYTE *)(a1 + 65);
      scaled_index_2 = a1 + 1160 + 8 * scaled_index;
      if ( *(_DWORD *)scaled_index_2 )
      {
        if ( !sub_140214A64(a1, scaled_index_2, 3, loaded_word_4, loaded_word_3) )
        {
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          selection_flag = 0;
          goto LABEL_21;
        }
      }
      else
      {
        *(_DWORD *)scaled_index_2 = 3;
        *(_BYTE *)(scaled_index_2 + 4) = loaded_word_4;
        *(_DWORD *)(scaled_index_2 + 16) = loaded_word_3;
      }
    }
    else
    {
      loaded_record_pointer = **(unsigned __int16 ***)(a1 + 8 * scaled_index + 1168);
    }
    selection_flag = 1;
LABEL_21:
    if ( selection_flag )
      goto LABEL_3;
    return 0;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_3:
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    remaining_bits = 6;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      comparison_result = 1;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_25;
    }
  }
  comparison_result = 0;
LABEL_25:
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !comparison_result )
  {
LABEL_28:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_29;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_29:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021C6BC) ----------------------------------------------------
char            sub_14021C6BC(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool comparison_result;
  unsigned int remaining_bits;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    remaining_bits = 6;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      comparison_result = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_10;
    }
  }
  comparison_result = 0;
LABEL_10:
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !comparison_result )
  {
LABEL_13:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_14:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021C730) ----------------------------------------------------
char            sub_14021C730(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool comparison_result;
  unsigned int remaining_bits;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    remaining_bits = 6;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      comparison_result = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_10;
    }
  }
  comparison_result = 0;
LABEL_10:
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !comparison_result )
  {
LABEL_13:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_14:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021C7A4) ----------------------------------------------------
char            sub_14021C7A4(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool comparison_result;
  __int64 loaded_word_2;
  __int64 scaled_index;
  int loaded_word_3;
  char loaded_word_4;
  __int64 scaled_index_2;
  char selection_flag;
  unsigned int remaining_bits;

  loaded_record_pointer = nullptr;
  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    loaded_word_2 = *(int *)(a1 + 3564);
    if ( (unsigned int)loaded_word_2 > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word_2;
    if ( *(_DWORD *)(a1 + 1144) == 1 )
    {
      loaded_word_3 = *(_DWORD *)(a1 + 60);
      loaded_word_4 = *(_BYTE *)(a1 + 65);
      scaled_index_2 = a1 + 1160 + 8 * scaled_index;
      if ( *(_DWORD *)scaled_index_2 )
      {
        if ( !sub_140214C94(a1, scaled_index_2, 3, loaded_word_4, loaded_word_3) )
        {
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          selection_flag = 0;
          goto LABEL_21;
        }
      }
      else
      {
        *(_DWORD *)scaled_index_2 = 3;
        *(_BYTE *)(scaled_index_2 + 4) = loaded_word_4;
        *(_DWORD *)(scaled_index_2 + 16) = loaded_word_3;
      }
    }
    else
    {
      loaded_record_pointer = **(unsigned __int16 ***)(a1 + 8 * scaled_index + 1168);
    }
    selection_flag = 1;
LABEL_21:
    if ( selection_flag )
      goto LABEL_3;
    return 0;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_3:
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    remaining_bits = 6;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      comparison_result = 1;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_25;
    }
  }
  comparison_result = 0;
LABEL_25:
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !comparison_result )
  {
LABEL_28:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_29;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_29:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021C8FC) ----------------------------------------------------
char            sub_14021C8FC(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool comparison_result;
  unsigned int remaining_bits;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    remaining_bits = 6;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      comparison_result = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_10;
    }
  }
  comparison_result = 0;
LABEL_10:
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !comparison_result )
  {
LABEL_13:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_14:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021C970) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_511(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool loaded_word_2;
  unsigned int remaining_bits;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    remaining_bits = 6;
    goto LABEL_6;
  }
  loaded_word_2 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !loaded_word_2 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_7:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021C9EC) ----------------------------------------------------
char            sub_14021C9EC(_QWORD *a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool loaded_word_2;
  unsigned int remaining_bits;
  __int64 loaded_word_3;
  __int64 scaled_index;
  int loaded_word_4;
  __int16 loaded_word_5;
  _QWORD *state_address;
  char selection_flag;

  loaded_record_pointer = nullptr;
  if ( *((_DWORD *)a1 + 287) != 1 )
  {
    loaded_word_3 = *((int *)a1 + 891);
    if ( (unsigned int)loaded_word_3 > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word_3;
    if ( *((_DWORD *)a1 + 286) == 1 )
    {
      loaded_word_4 = *((_DWORD *)a1 + 15);
      loaded_word_5 = *((_WORD *)a1 + 33);
      state_address = &a1[scaled_index + 145];
      if ( *(_DWORD *)state_address )
      {
        if ( !sub_140214EC4(a1, (__int64)state_address, 3, loaded_word_5, loaded_word_4) )
        {
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          selection_flag = 0;
          goto LABEL_18;
        }
      }
      else
      {
        *(_DWORD *)state_address = 3;
        *((_WORD *)state_address + 2) = loaded_word_5;
        *((_DWORD *)state_address + 4) = loaded_word_4;
      }
    }
    else
    {
      loaded_record_pointer = *(unsigned __int16 **)a1[scaled_index + 146];
    }
    selection_flag = 1;
LABEL_18:
    if ( selection_flag )
      goto LABEL_3;
    return 0;
  }
  a1[4] += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(a1[4] - 8LL);
LABEL_3:
  if ( *((_DWORD *)a1 + 286) == 1 && *((_DWORD *)a1 + 287) != 1 )
    return 1;
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    remaining_bits = 6;
    a1[9] = (uint64)(uintptr_t)("(null)");
    goto LABEL_21;
  }
  loaded_word_2 = sub_140211A94(*a1, *((_WORD *)a1 + 33), *((_DWORD *)a1 + 15));
  a1[9] = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !loaded_word_2 )
  {
LABEL_21:
    *((_BYTE *)a1 + 84) = 0;
    goto LABEL_22;
  }
  *((_BYTE *)a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_22:
  *((_DWORD *)a1 + 20) = remaining_bits;
  return 1;
}

//----- (000000014021CB2C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_512(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool loaded_word_2;
  unsigned int remaining_bits;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    remaining_bits = 6;
    goto LABEL_6;
  }
  loaded_word_2 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !loaded_word_2 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_7:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021CBA8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_513(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool loaded_word_2;
  unsigned int remaining_bits;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    remaining_bits = 6;
    goto LABEL_6;
  }
  loaded_word_2 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !loaded_word_2 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_7:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021CC24) ----------------------------------------------------
char            sub_14021CC24(_QWORD *a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool loaded_word_2;
  unsigned int remaining_bits;
  __int64 loaded_word_3;
  __int64 scaled_index;
  int loaded_word_4;
  __int16 loaded_word_5;
  _QWORD *state_address;
  char selection_flag;

  loaded_record_pointer = nullptr;
  if ( *((_DWORD *)a1 + 287) != 1 )
  {
    loaded_word_3 = *((int *)a1 + 891);
    if ( (unsigned int)loaded_word_3 > 0x63 )
    {
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
    }
    scaled_index = 3 * loaded_word_3;
    if ( *((_DWORD *)a1 + 286) == 1 )
    {
      loaded_word_4 = *((_DWORD *)a1 + 15);
      loaded_word_5 = *((_WORD *)a1 + 33);
      state_address = &a1[scaled_index + 145];
      if ( *(_DWORD *)state_address )
      {
        if ( !sub_1402150C4(a1, (__int64)state_address, 3, loaded_word_5, loaded_word_4) )
        {
          *errno_sr() = 22;
          crt_invalid_parameter_noinfo();
          selection_flag = 0;
          goto LABEL_18;
        }
      }
      else
      {
        *(_DWORD *)state_address = 3;
        *((_WORD *)state_address + 2) = loaded_word_5;
        *((_DWORD *)state_address + 4) = loaded_word_4;
      }
    }
    else
    {
      loaded_record_pointer = *(unsigned __int16 **)a1[scaled_index + 146];
    }
    selection_flag = 1;
LABEL_18:
    if ( selection_flag )
      goto LABEL_3;
    return 0;
  }
  a1[4] += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(a1[4] - 8LL);
LABEL_3:
  if ( *((_DWORD *)a1 + 286) == 1 && *((_DWORD *)a1 + 287) != 1 )
    return 1;
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    remaining_bits = 6;
    a1[9] = (uint64)(uintptr_t)("(null)");
    goto LABEL_21;
  }
  loaded_word_2 = sub_140211A94(*a1, *((_WORD *)a1 + 33), *((_DWORD *)a1 + 15));
  a1[9] = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !loaded_word_2 )
  {
LABEL_21:
    *((_BYTE *)a1 + 84) = 0;
    goto LABEL_22;
  }
  *((_BYTE *)a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_22:
  *((_DWORD *)a1 + 20) = remaining_bits;
  return 1;
}

//----- (000000014021CD64) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_514(__int64 a1)
{
  unsigned __int16 *loaded_record_pointer;
  __int64 loaded_word;
  bool loaded_word_2;
  unsigned int remaining_bits;

  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_record_pointer = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !loaded_record_pointer || (loaded_word = *((_QWORD *)loaded_record_pointer + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)("(null)");
    remaining_bits = 6;
    goto LABEL_6;
  }
  loaded_word_2 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  *(_QWORD *)(a1 + 72) = loaded_word;
  remaining_bits = *loaded_record_pointer;
  if ( !loaded_word_2 )
  {
LABEL_6:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 84) = 1;
  remaining_bits >>= 1;
LABEL_7:
  *(_DWORD *)(a1 + 80) = remaining_bits;
  return 1;
}

//----- (000000014021CDE0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_515(__int64 a1)
{
  int comparison_result;
  __int64 saved_loaded_word;
  char call_result;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  unsigned __int64 shifted_bits_5;
  __int64 loaded_word_4;
  unsigned __int8 *buffer_cursor;
  _QWORD *loaded_word_5;
  __int64 loaded_word_6;
  char loaded_word_7;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word_2;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 loaded_word_8;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  comparison_result = *(_DWORD *)(a1 + 56);
  if ( comparison_result >= 0 )
  {
    if ( !comparison_result )
    {
      if ( *(_BYTE *)(a1 + 65) == 103 || (comparison_result = 0, *(_BYTE *)(a1 + 65) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        comparison_result = 1;
      }
    }
  }
  else
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = comparison_result;
  }
  saved_loaded_word = a1 + 88;
  call_result = sub_14020EAD8(a1 + 88, comparison_result + 349);
  shifted_bits = 512;
  if ( !call_result )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(shifted_bits_2) = 512;
    *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
  }
  loaded_word = *(_QWORD *)(saved_loaded_word + 1032);
  if ( !loaded_word )
    loaded_word = saved_loaded_word;
  *(_QWORD *)(a1 + 72) = loaded_word;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  loaded_word_8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( loaded_word_2 )
    shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    shifted_bits_3 = 512;
  if ( loaded_word_2 )
  {
    saved_loaded_word = loaded_word_2;
    shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits_4 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&loaded_word_8,
    (char *)saved_loaded_word,
    shifted_bits,
    shifted_bits_4,
    shifted_bits_3,
    *(char *)(a1 + 65),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    loaded_word_4 = *(_QWORD *)(a1 + 8);
    buffer_cursor = *(unsigned __int8 **)(a1 + 72);
    loaded_word_5 = *(_QWORD **)loaded_word_4;
    loaded_word_3 = *buffer_cursor;
    loaded_word_6 = *(_QWORD *)(*(_QWORD *)loaded_word_4 + 272LL);
    if ( *(_BYTE *)(loaded_word_3 + loaded_word_6) != 101 )
    {
      do
        loaded_word_3 = *++buffer_cursor;
      while ( (*(_BYTE *)(*loaded_word_5 + 2 * loaded_word_3) & 4) != 0 );
    }
    loaded_word_7 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_6);
    if ( loaded_word_7 == 120 )
      LOBYTE(loaded_word_3) = buffer_cursor[2];
    shifted_bits_5 = loaded_word_5[31];
    saved_buffer_cursor = buffer_cursor + 2;
    if ( loaded_word_7 != 120 )
      saved_buffer_cursor = buffer_cursor;
    *saved_buffer_cursor = **(_BYTE **)shifted_bits_5;
    text_cursor = saved_buffer_cursor + 1;
    do
    {
      input_byte = *text_cursor;
      saved_loaded_word_2 = loaded_word_3;
      *text_cursor++ = loaded_word_3;
      LOBYTE(loaded_word_3) = input_byte;
    }
    while ( saved_loaded_word_2 );
  }
  if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
  {
    shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
  }
  text_cursor_2 = *(char **)(a1 + 72);
  input_byte_2 = *text_cursor_2;
  if ( *text_cursor_2 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
    input_byte_2 = *text_cursor_2;
  }
  LOBYTE(shifted_bits_5) = input_byte_2 - 73;
  if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
  {
    selection_code = 0x2100000021LL;
    if ( _bittest64(&selection_code, shifted_bits_5) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_BYTE *)(a1 + 65) = 115;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( text_cursor_2[element_index] );
  *(_DWORD *)(a1 + 80) = element_index;
  return 1;
}

//----- (000000014021CFF8) ----------------------------------------------------
char            sub_14021CFF8(__int64 a1)
{
  int comparison_result;
  char *loaded_record_pointer;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  unsigned __int64 shifted_bits_5;
  __int64 loaded_word_4;
  unsigned __int8 *buffer_cursor;
  _QWORD *loaded_word_5;
  __int64 loaded_word_6;
  char loaded_word_7;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 selection_flag;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  if ( sub_140223614(a1) )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    comparison_result = *(_DWORD *)(a1 + 56);
    if ( comparison_result >= 0 )
    {
      if ( !comparison_result )
      {
        if ( *(_BYTE *)(a1 + 65) == 103 || (comparison_result = 0, *(_BYTE *)(a1 + 65) == 71) )
        {
          *(_DWORD *)(a1 + 56) = 1;
          comparison_result = 1;
        }
      }
    }
    else
    {
      comparison_result = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
      *(_DWORD *)(a1 + 56) = comparison_result;
    }
    loaded_record_pointer = (char *)(a1 + 88);
    shifted_bits = 512;
    if ( !sub_14020EAD8(a1 + 88, comparison_result + 349) )
    {
      if ( *(_QWORD *)(a1 + 1120) )
        shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        LODWORD(shifted_bits_2) = 512;
      *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
    }
    loaded_word = *(_QWORD *)(a1 + 1120);
    if ( !loaded_word )
      loaded_word = a1 + 88;
    selection_flag = 0;
    *(_QWORD *)(a1 + 72) = loaded_word;
    if ( sub_140210BC4(a1, &selection_flag) )
    {
      loaded_word_2 = *(_QWORD *)(a1 + 1120);
      if ( loaded_word_2 )
        shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        shifted_bits_3 = 512;
      if ( loaded_word_2 )
      {
        loaded_record_pointer = *(char **)(a1 + 1120);
        shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
        shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        shifted_bits_4 = (char *)(a1 + 600);
      }
      sub_140256818(
        (double *)&selection_flag,
        loaded_record_pointer,
        shifted_bits,
        shifted_bits_4,
        shifted_bits_3,
        *(char *)(a1 + 65),
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)a1,
        *(struct sr_anon_68 **)(a1 + 8));
      shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
      {
        loaded_word_4 = *(_QWORD *)(a1 + 8);
        buffer_cursor = *(unsigned __int8 **)(a1 + 72);
        loaded_word_5 = *(_QWORD **)loaded_word_4;
        loaded_word_3 = *buffer_cursor;
        loaded_word_6 = *(_QWORD *)(*(_QWORD *)loaded_word_4 + 272LL);
        if ( *(_BYTE *)(loaded_word_3 + loaded_word_6) != 101 )
        {
          do
            loaded_word_3 = *++buffer_cursor;
          while ( (*(_BYTE *)(*loaded_word_5 + 2 * loaded_word_3) & 4) != 0 );
        }
        loaded_word_7 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_6);
        if ( loaded_word_7 == 120 )
          LOBYTE(loaded_word_3) = buffer_cursor[2];
        shifted_bits_5 = loaded_word_5[31];
        saved_buffer_cursor = buffer_cursor + 2;
        if ( loaded_word_7 != 120 )
          saved_buffer_cursor = buffer_cursor;
        *saved_buffer_cursor = **(_BYTE **)shifted_bits_5;
        text_cursor = saved_buffer_cursor + 1;
        do
        {
          input_byte = *text_cursor;
          saved_loaded_word = loaded_word_3;
          *text_cursor++ = loaded_word_3;
          LOBYTE(loaded_word_3) = input_byte;
        }
        while ( saved_loaded_word );
      }
      if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
      {
        shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
        if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
          sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
      }
      text_cursor_2 = *(char **)(a1 + 72);
      input_byte_2 = *text_cursor_2;
      if ( *text_cursor_2 == 45 )
      {
        *(_DWORD *)(a1 + 48) |= 0x40u;
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
        input_byte_2 = *text_cursor_2;
      }
      LOBYTE(shifted_bits_5) = input_byte_2 - 73;
      if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
      {
        selection_code = 0x2100000021LL;
        if ( _bittest64(&selection_code, shifted_bits_5) )
        {
          *(_DWORD *)(a1 + 48) &= ~8u;
          *(_BYTE *)(a1 + 65) = 115;
        }
      }
      element_index = -1;
      do
        ++element_index;
      while ( text_cursor_2[element_index] );
      *(_DWORD *)(a1 + 80) = element_index;
      return 1;
    }
  }
  return 0;
}

//----- (000000014021D24C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_516(__int64 a1)
{
  int comparison_result;
  __int64 saved_loaded_word;
  char call_result;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  unsigned __int64 shifted_bits_5;
  __int64 loaded_word_4;
  unsigned __int8 *buffer_cursor;
  _QWORD *loaded_word_5;
  __int64 loaded_word_6;
  char loaded_word_7;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word_2;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 loaded_word_8;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  comparison_result = *(_DWORD *)(a1 + 56);
  if ( comparison_result >= 0 )
  {
    if ( !comparison_result )
    {
      if ( *(_BYTE *)(a1 + 65) == 103 || (comparison_result = 0, *(_BYTE *)(a1 + 65) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        comparison_result = 1;
      }
    }
  }
  else
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = comparison_result;
  }
  saved_loaded_word = a1 + 88;
  call_result = sub_14020EAD8(a1 + 88, comparison_result + 349);
  shifted_bits = 512;
  if ( !call_result )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(shifted_bits_2) = 512;
    *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
  }
  loaded_word = *(_QWORD *)(saved_loaded_word + 1032);
  if ( !loaded_word )
    loaded_word = saved_loaded_word;
  *(_QWORD *)(a1 + 72) = loaded_word;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  loaded_word_8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( loaded_word_2 )
    shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    shifted_bits_3 = 512;
  if ( loaded_word_2 )
  {
    saved_loaded_word = loaded_word_2;
    shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits_4 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&loaded_word_8,
    (char *)saved_loaded_word,
    shifted_bits,
    shifted_bits_4,
    shifted_bits_3,
    *(char *)(a1 + 65),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    loaded_word_4 = *(_QWORD *)(a1 + 8);
    buffer_cursor = *(unsigned __int8 **)(a1 + 72);
    loaded_word_5 = *(_QWORD **)loaded_word_4;
    loaded_word_3 = *buffer_cursor;
    loaded_word_6 = *(_QWORD *)(*(_QWORD *)loaded_word_4 + 272LL);
    if ( *(_BYTE *)(loaded_word_3 + loaded_word_6) != 101 )
    {
      do
        loaded_word_3 = *++buffer_cursor;
      while ( (*(_BYTE *)(*loaded_word_5 + 2 * loaded_word_3) & 4) != 0 );
    }
    loaded_word_7 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_6);
    if ( loaded_word_7 == 120 )
      LOBYTE(loaded_word_3) = buffer_cursor[2];
    shifted_bits_5 = loaded_word_5[31];
    saved_buffer_cursor = buffer_cursor + 2;
    if ( loaded_word_7 != 120 )
      saved_buffer_cursor = buffer_cursor;
    *saved_buffer_cursor = **(_BYTE **)shifted_bits_5;
    text_cursor = saved_buffer_cursor + 1;
    do
    {
      input_byte = *text_cursor;
      saved_loaded_word_2 = loaded_word_3;
      *text_cursor++ = loaded_word_3;
      LOBYTE(loaded_word_3) = input_byte;
    }
    while ( saved_loaded_word_2 );
  }
  if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
  {
    shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
  }
  text_cursor_2 = *(char **)(a1 + 72);
  input_byte_2 = *text_cursor_2;
  if ( *text_cursor_2 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
    input_byte_2 = *text_cursor_2;
  }
  LOBYTE(shifted_bits_5) = input_byte_2 - 73;
  if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
  {
    selection_code = 0x2100000021LL;
    if ( _bittest64(&selection_code, shifted_bits_5) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_BYTE *)(a1 + 65) = 115;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( text_cursor_2[element_index] );
  *(_DWORD *)(a1 + 80) = element_index;
  return 1;
}

//----- (000000014021D464) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_517(__int64 a1)
{
  int comparison_result;
  __int64 saved_loaded_word;
  char call_result;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  unsigned __int64 shifted_bits_5;
  __int64 loaded_word_4;
  unsigned __int8 *buffer_cursor;
  _QWORD *loaded_word_5;
  __int64 loaded_word_6;
  char loaded_word_7;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word_2;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 loaded_word_8;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  comparison_result = *(_DWORD *)(a1 + 56);
  if ( comparison_result >= 0 )
  {
    if ( !comparison_result )
    {
      if ( *(_BYTE *)(a1 + 65) == 103 || (comparison_result = 0, *(_BYTE *)(a1 + 65) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        comparison_result = 1;
      }
    }
  }
  else
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = comparison_result;
  }
  saved_loaded_word = a1 + 88;
  call_result = sub_14020EAD8(a1 + 88, comparison_result + 349);
  shifted_bits = 512;
  if ( !call_result )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(shifted_bits_2) = 512;
    *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
  }
  loaded_word = *(_QWORD *)(saved_loaded_word + 1032);
  if ( !loaded_word )
    loaded_word = saved_loaded_word;
  *(_QWORD *)(a1 + 72) = loaded_word;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  loaded_word_8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( loaded_word_2 )
    shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    shifted_bits_3 = 512;
  if ( loaded_word_2 )
  {
    saved_loaded_word = loaded_word_2;
    shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits_4 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&loaded_word_8,
    (char *)saved_loaded_word,
    shifted_bits,
    shifted_bits_4,
    shifted_bits_3,
    *(char *)(a1 + 65),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    loaded_word_4 = *(_QWORD *)(a1 + 8);
    buffer_cursor = *(unsigned __int8 **)(a1 + 72);
    loaded_word_5 = *(_QWORD **)loaded_word_4;
    loaded_word_3 = *buffer_cursor;
    loaded_word_6 = *(_QWORD *)(*(_QWORD *)loaded_word_4 + 272LL);
    if ( *(_BYTE *)(loaded_word_3 + loaded_word_6) != 101 )
    {
      do
        loaded_word_3 = *++buffer_cursor;
      while ( (*(_BYTE *)(*loaded_word_5 + 2 * loaded_word_3) & 4) != 0 );
    }
    loaded_word_7 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_6);
    if ( loaded_word_7 == 120 )
      LOBYTE(loaded_word_3) = buffer_cursor[2];
    shifted_bits_5 = loaded_word_5[31];
    saved_buffer_cursor = buffer_cursor + 2;
    if ( loaded_word_7 != 120 )
      saved_buffer_cursor = buffer_cursor;
    *saved_buffer_cursor = **(_BYTE **)shifted_bits_5;
    text_cursor = saved_buffer_cursor + 1;
    do
    {
      input_byte = *text_cursor;
      saved_loaded_word_2 = loaded_word_3;
      *text_cursor++ = loaded_word_3;
      LOBYTE(loaded_word_3) = input_byte;
    }
    while ( saved_loaded_word_2 );
  }
  if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
  {
    shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
  }
  text_cursor_2 = *(char **)(a1 + 72);
  input_byte_2 = *text_cursor_2;
  if ( *text_cursor_2 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
    input_byte_2 = *text_cursor_2;
  }
  LOBYTE(shifted_bits_5) = input_byte_2 - 73;
  if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
  {
    selection_code = 0x2100000021LL;
    if ( _bittest64(&selection_code, shifted_bits_5) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_BYTE *)(a1 + 65) = 115;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( text_cursor_2[element_index] );
  *(_DWORD *)(a1 + 80) = element_index;
  return 1;
}

//----- (000000014021D67C) ----------------------------------------------------
char            sub_14021D67C(__int64 a1)
{
  int comparison_result;
  char *loaded_record_pointer;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  unsigned __int64 shifted_bits_5;
  __int64 loaded_word_4;
  unsigned __int8 *buffer_cursor;
  _QWORD *loaded_word_5;
  __int64 loaded_word_6;
  char loaded_word_7;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 selection_flag;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  if ( sub_1402236B0(a1) )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    comparison_result = *(_DWORD *)(a1 + 56);
    if ( comparison_result >= 0 )
    {
      if ( !comparison_result )
      {
        if ( *(_BYTE *)(a1 + 65) == 103 || (comparison_result = 0, *(_BYTE *)(a1 + 65) == 71) )
        {
          *(_DWORD *)(a1 + 56) = 1;
          comparison_result = 1;
        }
      }
    }
    else
    {
      comparison_result = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
      *(_DWORD *)(a1 + 56) = comparison_result;
    }
    loaded_record_pointer = (char *)(a1 + 88);
    shifted_bits = 512;
    if ( !sub_14020EAD8(a1 + 88, comparison_result + 349) )
    {
      if ( *(_QWORD *)(a1 + 1120) )
        shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        LODWORD(shifted_bits_2) = 512;
      *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
    }
    loaded_word = *(_QWORD *)(a1 + 1120);
    if ( !loaded_word )
      loaded_word = a1 + 88;
    selection_flag = 0;
    *(_QWORD *)(a1 + 72) = loaded_word;
    if ( sub_140210C80(a1, &selection_flag) )
    {
      loaded_word_2 = *(_QWORD *)(a1 + 1120);
      if ( loaded_word_2 )
        shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        shifted_bits_3 = 512;
      if ( loaded_word_2 )
      {
        loaded_record_pointer = *(char **)(a1 + 1120);
        shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
        shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        shifted_bits_4 = (char *)(a1 + 600);
      }
      sub_140256818(
        (double *)&selection_flag,
        loaded_record_pointer,
        shifted_bits,
        shifted_bits_4,
        shifted_bits_3,
        *(char *)(a1 + 65),
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)a1,
        *(struct sr_anon_68 **)(a1 + 8));
      shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
      {
        loaded_word_4 = *(_QWORD *)(a1 + 8);
        buffer_cursor = *(unsigned __int8 **)(a1 + 72);
        loaded_word_5 = *(_QWORD **)loaded_word_4;
        loaded_word_3 = *buffer_cursor;
        loaded_word_6 = *(_QWORD *)(*(_QWORD *)loaded_word_4 + 272LL);
        if ( *(_BYTE *)(loaded_word_3 + loaded_word_6) != 101 )
        {
          do
            loaded_word_3 = *++buffer_cursor;
          while ( (*(_BYTE *)(*loaded_word_5 + 2 * loaded_word_3) & 4) != 0 );
        }
        loaded_word_7 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_6);
        if ( loaded_word_7 == 120 )
          LOBYTE(loaded_word_3) = buffer_cursor[2];
        shifted_bits_5 = loaded_word_5[31];
        saved_buffer_cursor = buffer_cursor + 2;
        if ( loaded_word_7 != 120 )
          saved_buffer_cursor = buffer_cursor;
        *saved_buffer_cursor = **(_BYTE **)shifted_bits_5;
        text_cursor = saved_buffer_cursor + 1;
        do
        {
          input_byte = *text_cursor;
          saved_loaded_word = loaded_word_3;
          *text_cursor++ = loaded_word_3;
          LOBYTE(loaded_word_3) = input_byte;
        }
        while ( saved_loaded_word );
      }
      if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
      {
        shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
        if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
          sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
      }
      text_cursor_2 = *(char **)(a1 + 72);
      input_byte_2 = *text_cursor_2;
      if ( *text_cursor_2 == 45 )
      {
        *(_DWORD *)(a1 + 48) |= 0x40u;
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
        input_byte_2 = *text_cursor_2;
      }
      LOBYTE(shifted_bits_5) = input_byte_2 - 73;
      if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
      {
        selection_code = 0x2100000021LL;
        if ( _bittest64(&selection_code, shifted_bits_5) )
        {
          *(_DWORD *)(a1 + 48) &= ~8u;
          *(_BYTE *)(a1 + 65) = 115;
        }
      }
      element_index = -1;
      do
        ++element_index;
      while ( text_cursor_2[element_index] );
      *(_DWORD *)(a1 + 80) = element_index;
      return 1;
    }
  }
  return 0;
}

//----- (000000014021D8D0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_518(__int64 a1)
{
  int comparison_result;
  __int64 saved_loaded_word;
  char call_result;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  unsigned __int64 shifted_bits_5;
  __int64 loaded_word_4;
  unsigned __int8 *buffer_cursor;
  _QWORD *loaded_word_5;
  __int64 loaded_word_6;
  char loaded_word_7;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word_2;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 loaded_word_8;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  comparison_result = *(_DWORD *)(a1 + 56);
  if ( comparison_result >= 0 )
  {
    if ( !comparison_result )
    {
      if ( *(_BYTE *)(a1 + 65) == 103 || (comparison_result = 0, *(_BYTE *)(a1 + 65) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        comparison_result = 1;
      }
    }
  }
  else
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = comparison_result;
  }
  saved_loaded_word = a1 + 88;
  call_result = sub_14020EAD8(a1 + 88, comparison_result + 349);
  shifted_bits = 512;
  if ( !call_result )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(shifted_bits_2) = 512;
    *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
  }
  loaded_word = *(_QWORD *)(saved_loaded_word + 1032);
  if ( !loaded_word )
    loaded_word = saved_loaded_word;
  *(_QWORD *)(a1 + 72) = loaded_word;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  loaded_word_8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( loaded_word_2 )
    shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    shifted_bits_3 = 512;
  if ( loaded_word_2 )
  {
    saved_loaded_word = loaded_word_2;
    shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits_4 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&loaded_word_8,
    (char *)saved_loaded_word,
    shifted_bits,
    shifted_bits_4,
    shifted_bits_3,
    *(char *)(a1 + 65),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    loaded_word_4 = *(_QWORD *)(a1 + 8);
    buffer_cursor = *(unsigned __int8 **)(a1 + 72);
    loaded_word_5 = *(_QWORD **)loaded_word_4;
    loaded_word_3 = *buffer_cursor;
    loaded_word_6 = *(_QWORD *)(*(_QWORD *)loaded_word_4 + 272LL);
    if ( *(_BYTE *)(loaded_word_3 + loaded_word_6) != 101 )
    {
      do
        loaded_word_3 = *++buffer_cursor;
      while ( (*(_BYTE *)(*loaded_word_5 + 2 * loaded_word_3) & 4) != 0 );
    }
    loaded_word_7 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_6);
    if ( loaded_word_7 == 120 )
      LOBYTE(loaded_word_3) = buffer_cursor[2];
    shifted_bits_5 = loaded_word_5[31];
    saved_buffer_cursor = buffer_cursor + 2;
    if ( loaded_word_7 != 120 )
      saved_buffer_cursor = buffer_cursor;
    *saved_buffer_cursor = **(_BYTE **)shifted_bits_5;
    text_cursor = saved_buffer_cursor + 1;
    do
    {
      input_byte = *text_cursor;
      saved_loaded_word_2 = loaded_word_3;
      *text_cursor++ = loaded_word_3;
      LOBYTE(loaded_word_3) = input_byte;
    }
    while ( saved_loaded_word_2 );
  }
  if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
  {
    shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
  }
  text_cursor_2 = *(char **)(a1 + 72);
  input_byte_2 = *text_cursor_2;
  if ( *text_cursor_2 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
    input_byte_2 = *text_cursor_2;
  }
  LOBYTE(shifted_bits_5) = input_byte_2 - 73;
  if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
  {
    selection_code = 0x2100000021LL;
    if ( _bittest64(&selection_code, shifted_bits_5) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_BYTE *)(a1 + 65) = 115;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( text_cursor_2[element_index] );
  *(_DWORD *)(a1 + 80) = element_index;
  return 1;
}

//----- (000000014021DAE8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_519(__int64 a1)
{
  int comparison_result;
  __int64 saved_loaded_word;
  char call_result;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  __int64 *loaded_record_pointer;
  unsigned __int8 *buffer_cursor;
  __int64 loaded_word_4;
  __int64 loaded_word_5;
  char loaded_word_6;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word_2;
  unsigned __int64 shifted_bits_5;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 loaded_word_7;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  comparison_result = *(_DWORD *)(a1 + 56);
  if ( comparison_result >= 0 )
  {
    if ( !comparison_result )
    {
      if ( *(_WORD *)(a1 + 66) == 103 || (comparison_result = 0, *(_WORD *)(a1 + 66) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        comparison_result = 1;
      }
    }
  }
  else
  {
    comparison_result = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = comparison_result;
  }
  saved_loaded_word = a1 + 88;
  call_result = sub_14020EAD8(a1 + 88, comparison_result + 349);
  shifted_bits = 512;
  if ( !call_result )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(shifted_bits_2) = 512;
    *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
  }
  loaded_word = *(_QWORD *)(saved_loaded_word + 1032);
  if ( !loaded_word )
    loaded_word = saved_loaded_word;
  *(_QWORD *)(a1 + 72) = loaded_word;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  loaded_word_7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( loaded_word_2 )
    shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    shifted_bits_3 = 512;
  if ( loaded_word_2 )
  {
    saved_loaded_word = loaded_word_2;
    shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits_4 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&loaded_word_7,
    (char *)saved_loaded_word,
    shifted_bits,
    shifted_bits_4,
    shifted_bits_3,
    *(char *)(a1 + 66),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    loaded_record_pointer = *(__int64 **)(a1 + 8);
    buffer_cursor = *(unsigned __int8 **)(a1 + 72);
    loaded_word_4 = *loaded_record_pointer;
    loaded_word_3 = *buffer_cursor;
    loaded_word_5 = *(_QWORD *)(*loaded_record_pointer + 272);
    if ( *(_BYTE *)(loaded_word_3 + loaded_word_5) != 101 )
    {
      do
        loaded_word_3 = *++buffer_cursor;
      while ( (*(_BYTE *)(*(_QWORD *)loaded_word_4 + 2 * loaded_word_3) & 4) != 0 );
    }
    loaded_word_6 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_5);
    if ( loaded_word_6 == 120 )
      LOBYTE(loaded_word_3) = buffer_cursor[2];
    saved_buffer_cursor = buffer_cursor + 2;
    if ( loaded_word_6 != 120 )
      saved_buffer_cursor = buffer_cursor;
    *saved_buffer_cursor = ***(_BYTE ***)(loaded_word_4 + 248);
    text_cursor = saved_buffer_cursor + 1;
    do
    {
      input_byte = *text_cursor;
      saved_loaded_word_2 = loaded_word_3;
      *text_cursor++ = loaded_word_3;
      LOBYTE(loaded_word_3) = input_byte;
    }
    while ( saved_loaded_word_2 );
  }
  shifted_bits_5 = *(unsigned __int16 *)(a1 + 66);
  LOWORD(shifted_bits_5) = shifted_bits_5 - 71;
  if ( (shifted_bits_5 & 0xFFDF) == 0 )
  {
    shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
  }
  text_cursor_2 = *(char **)(a1 + 72);
  input_byte_2 = *text_cursor_2;
  if ( *text_cursor_2 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
    input_byte_2 = *text_cursor_2;
  }
  LOBYTE(shifted_bits_5) = input_byte_2 - 73;
  if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
  {
    selection_code = 0x2100000021LL;
    if ( _bittest64(&selection_code, shifted_bits_5) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_WORD *)(a1 + 66) = 115;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( text_cursor_2[element_index] );
  *(_DWORD *)(a1 + 80) = element_index;
  return 1;
}

//----- (000000014021DD24) ----------------------------------------------------
char            sub_14021DD24(__int64 a1)
{
  int comparison_result;
  char *loaded_record_pointer;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  __int64 *loaded_record_pointer_2;
  unsigned __int8 *buffer_cursor;
  __int64 loaded_word_4;
  __int64 loaded_word_5;
  char loaded_word_6;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word;
  unsigned __int64 shifted_bits_5;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 selection_flag;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  if ( sub_14022374C(a1) )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    comparison_result = *(_DWORD *)(a1 + 56);
    if ( comparison_result >= 0 )
    {
      if ( !comparison_result )
      {
        if ( *(_WORD *)(a1 + 66) == 103 || (comparison_result = 0, *(_WORD *)(a1 + 66) == 71) )
        {
          *(_DWORD *)(a1 + 56) = 1;
          comparison_result = 1;
        }
      }
    }
    else
    {
      comparison_result = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
      *(_DWORD *)(a1 + 56) = comparison_result;
    }
    loaded_record_pointer = (char *)(a1 + 88);
    shifted_bits = 512;
    if ( !sub_14020EAD8(a1 + 88, comparison_result + 349) )
    {
      if ( *(_QWORD *)(a1 + 1120) )
        shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        LODWORD(shifted_bits_2) = 512;
      *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
    }
    loaded_word = *(_QWORD *)(a1 + 1120);
    if ( !loaded_word )
      loaded_word = a1 + 88;
    selection_flag = 0;
    *(_QWORD *)(a1 + 72) = loaded_word;
    if ( sub_140210D3C(a1, &selection_flag) )
    {
      loaded_word_2 = *(_QWORD *)(a1 + 1120);
      if ( loaded_word_2 )
        shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        shifted_bits_3 = 512;
      if ( loaded_word_2 )
      {
        loaded_record_pointer = *(char **)(a1 + 1120);
        shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
        shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        shifted_bits_4 = (char *)(a1 + 600);
      }
      sub_140256818(
        (double *)&selection_flag,
        loaded_record_pointer,
        shifted_bits,
        shifted_bits_4,
        shifted_bits_3,
        *(char *)(a1 + 66),
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)a1,
        *(struct sr_anon_68 **)(a1 + 8));
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
      {
        loaded_record_pointer_2 = *(__int64 **)(a1 + 8);
        buffer_cursor = *(unsigned __int8 **)(a1 + 72);
        loaded_word_4 = *loaded_record_pointer_2;
        loaded_word_3 = *buffer_cursor;
        loaded_word_5 = *(_QWORD *)(*loaded_record_pointer_2 + 272);
        if ( *(_BYTE *)(loaded_word_3 + loaded_word_5) != 101 )
        {
          do
            loaded_word_3 = *++buffer_cursor;
          while ( (*(_BYTE *)(*(_QWORD *)loaded_word_4 + 2 * loaded_word_3) & 4) != 0 );
        }
        loaded_word_6 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_5);
        if ( loaded_word_6 == 120 )
          LOBYTE(loaded_word_3) = buffer_cursor[2];
        saved_buffer_cursor = buffer_cursor + 2;
        if ( loaded_word_6 != 120 )
          saved_buffer_cursor = buffer_cursor;
        *saved_buffer_cursor = ***(_BYTE ***)(loaded_word_4 + 248);
        text_cursor = saved_buffer_cursor + 1;
        do
        {
          input_byte = *text_cursor;
          saved_loaded_word = loaded_word_3;
          *text_cursor++ = loaded_word_3;
          LOBYTE(loaded_word_3) = input_byte;
        }
        while ( saved_loaded_word );
      }
      shifted_bits_5 = *(unsigned __int16 *)(a1 + 66);
      LOWORD(shifted_bits_5) = shifted_bits_5 - 71;
      if ( (shifted_bits_5 & 0xFFDF) == 0 )
      {
        shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
        if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
          sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
      }
      text_cursor_2 = *(char **)(a1 + 72);
      input_byte_2 = *text_cursor_2;
      if ( *text_cursor_2 == 45 )
      {
        *(_DWORD *)(a1 + 48) |= 0x40u;
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
        input_byte_2 = *text_cursor_2;
      }
      LOBYTE(shifted_bits_5) = input_byte_2 - 73;
      if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
      {
        selection_code = 0x2100000021LL;
        if ( _bittest64(&selection_code, shifted_bits_5) )
        {
          *(_DWORD *)(a1 + 48) &= ~8u;
          *(_WORD *)(a1 + 66) = 115;
        }
      }
      element_index = -1;
      do
        ++element_index;
      while ( text_cursor_2[element_index] );
      *(_DWORD *)(a1 + 80) = element_index;
      return 1;
    }
  }
  return 0;
}

//----- (000000014021DF9C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_520(__int64 a1)
{
  int comparison_result;
  __int64 saved_loaded_word;
  char call_result;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  __int64 *loaded_record_pointer;
  unsigned __int8 *buffer_cursor;
  __int64 loaded_word_4;
  __int64 loaded_word_5;
  char loaded_word_6;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word_2;
  unsigned __int64 shifted_bits_5;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 loaded_word_7;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  comparison_result = *(_DWORD *)(a1 + 56);
  if ( comparison_result >= 0 )
  {
    if ( !comparison_result )
    {
      if ( *(_WORD *)(a1 + 66) == 103 || (comparison_result = 0, *(_WORD *)(a1 + 66) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        comparison_result = 1;
      }
    }
  }
  else
  {
    comparison_result = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = comparison_result;
  }
  saved_loaded_word = a1 + 88;
  call_result = sub_14020EAD8(a1 + 88, comparison_result + 349);
  shifted_bits = 512;
  if ( !call_result )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(shifted_bits_2) = 512;
    *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
  }
  loaded_word = *(_QWORD *)(saved_loaded_word + 1032);
  if ( !loaded_word )
    loaded_word = saved_loaded_word;
  *(_QWORD *)(a1 + 72) = loaded_word;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  loaded_word_7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( loaded_word_2 )
    shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    shifted_bits_3 = 512;
  if ( loaded_word_2 )
  {
    saved_loaded_word = loaded_word_2;
    shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits_4 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&loaded_word_7,
    (char *)saved_loaded_word,
    shifted_bits,
    shifted_bits_4,
    shifted_bits_3,
    *(char *)(a1 + 66),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    loaded_record_pointer = *(__int64 **)(a1 + 8);
    buffer_cursor = *(unsigned __int8 **)(a1 + 72);
    loaded_word_4 = *loaded_record_pointer;
    loaded_word_3 = *buffer_cursor;
    loaded_word_5 = *(_QWORD *)(*loaded_record_pointer + 272);
    if ( *(_BYTE *)(loaded_word_3 + loaded_word_5) != 101 )
    {
      do
        loaded_word_3 = *++buffer_cursor;
      while ( (*(_BYTE *)(*(_QWORD *)loaded_word_4 + 2 * loaded_word_3) & 4) != 0 );
    }
    loaded_word_6 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_5);
    if ( loaded_word_6 == 120 )
      LOBYTE(loaded_word_3) = buffer_cursor[2];
    saved_buffer_cursor = buffer_cursor + 2;
    if ( loaded_word_6 != 120 )
      saved_buffer_cursor = buffer_cursor;
    *saved_buffer_cursor = ***(_BYTE ***)(loaded_word_4 + 248);
    text_cursor = saved_buffer_cursor + 1;
    do
    {
      input_byte = *text_cursor;
      saved_loaded_word_2 = loaded_word_3;
      *text_cursor++ = loaded_word_3;
      LOBYTE(loaded_word_3) = input_byte;
    }
    while ( saved_loaded_word_2 );
  }
  shifted_bits_5 = *(unsigned __int16 *)(a1 + 66);
  LOWORD(shifted_bits_5) = shifted_bits_5 - 71;
  if ( (shifted_bits_5 & 0xFFDF) == 0 )
  {
    shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
  }
  text_cursor_2 = *(char **)(a1 + 72);
  input_byte_2 = *text_cursor_2;
  if ( *text_cursor_2 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
    input_byte_2 = *text_cursor_2;
  }
  LOBYTE(shifted_bits_5) = input_byte_2 - 73;
  if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
  {
    selection_code = 0x2100000021LL;
    if ( _bittest64(&selection_code, shifted_bits_5) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_WORD *)(a1 + 66) = 115;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( text_cursor_2[element_index] );
  *(_DWORD *)(a1 + 80) = element_index;
  return 1;
}

//----- (000000014021E1D8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_521(__int64 a1)
{
  int comparison_result;
  __int64 saved_loaded_word;
  char call_result;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  __int64 *loaded_record_pointer;
  unsigned __int8 *buffer_cursor;
  __int64 loaded_word_4;
  __int64 loaded_word_5;
  char loaded_word_6;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word_2;
  unsigned __int64 shifted_bits_5;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 loaded_word_7;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  comparison_result = *(_DWORD *)(a1 + 56);
  if ( comparison_result >= 0 )
  {
    if ( !comparison_result )
    {
      if ( *(_WORD *)(a1 + 66) == 103 || (comparison_result = 0, *(_WORD *)(a1 + 66) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        comparison_result = 1;
      }
    }
  }
  else
  {
    comparison_result = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = comparison_result;
  }
  saved_loaded_word = a1 + 88;
  call_result = sub_14020EAD8(a1 + 88, comparison_result + 349);
  shifted_bits = 512;
  if ( !call_result )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(shifted_bits_2) = 512;
    *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
  }
  loaded_word = *(_QWORD *)(saved_loaded_word + 1032);
  if ( !loaded_word )
    loaded_word = saved_loaded_word;
  *(_QWORD *)(a1 + 72) = loaded_word;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  loaded_word_7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( loaded_word_2 )
    shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    shifted_bits_3 = 512;
  if ( loaded_word_2 )
  {
    saved_loaded_word = loaded_word_2;
    shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits_4 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&loaded_word_7,
    (char *)saved_loaded_word,
    shifted_bits,
    shifted_bits_4,
    shifted_bits_3,
    *(char *)(a1 + 66),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    loaded_record_pointer = *(__int64 **)(a1 + 8);
    buffer_cursor = *(unsigned __int8 **)(a1 + 72);
    loaded_word_4 = *loaded_record_pointer;
    loaded_word_3 = *buffer_cursor;
    loaded_word_5 = *(_QWORD *)(*loaded_record_pointer + 272);
    if ( *(_BYTE *)(loaded_word_3 + loaded_word_5) != 101 )
    {
      do
        loaded_word_3 = *++buffer_cursor;
      while ( (*(_BYTE *)(*(_QWORD *)loaded_word_4 + 2 * loaded_word_3) & 4) != 0 );
    }
    loaded_word_6 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_5);
    if ( loaded_word_6 == 120 )
      LOBYTE(loaded_word_3) = buffer_cursor[2];
    saved_buffer_cursor = buffer_cursor + 2;
    if ( loaded_word_6 != 120 )
      saved_buffer_cursor = buffer_cursor;
    *saved_buffer_cursor = ***(_BYTE ***)(loaded_word_4 + 248);
    text_cursor = saved_buffer_cursor + 1;
    do
    {
      input_byte = *text_cursor;
      saved_loaded_word_2 = loaded_word_3;
      *text_cursor++ = loaded_word_3;
      LOBYTE(loaded_word_3) = input_byte;
    }
    while ( saved_loaded_word_2 );
  }
  shifted_bits_5 = *(unsigned __int16 *)(a1 + 66);
  LOWORD(shifted_bits_5) = shifted_bits_5 - 71;
  if ( (shifted_bits_5 & 0xFFDF) == 0 )
  {
    shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
  }
  text_cursor_2 = *(char **)(a1 + 72);
  input_byte_2 = *text_cursor_2;
  if ( *text_cursor_2 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
    input_byte_2 = *text_cursor_2;
  }
  LOBYTE(shifted_bits_5) = input_byte_2 - 73;
  if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
  {
    selection_code = 0x2100000021LL;
    if ( _bittest64(&selection_code, shifted_bits_5) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_WORD *)(a1 + 66) = 115;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( text_cursor_2[element_index] );
  *(_DWORD *)(a1 + 80) = element_index;
  return 1;
}

//----- (000000014021E414) ----------------------------------------------------
char            sub_14021E414(__int64 a1)
{
  int comparison_result;
  char *loaded_record_pointer;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  __int64 *loaded_record_pointer_2;
  unsigned __int8 *buffer_cursor;
  __int64 loaded_word_4;
  __int64 loaded_word_5;
  char loaded_word_6;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word;
  unsigned __int64 shifted_bits_5;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 selection_flag;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  if ( sub_1402237EC(a1) )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    comparison_result = *(_DWORD *)(a1 + 56);
    if ( comparison_result >= 0 )
    {
      if ( !comparison_result )
      {
        if ( *(_WORD *)(a1 + 66) == 103 || (comparison_result = 0, *(_WORD *)(a1 + 66) == 71) )
        {
          *(_DWORD *)(a1 + 56) = 1;
          comparison_result = 1;
        }
      }
    }
    else
    {
      comparison_result = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
      *(_DWORD *)(a1 + 56) = comparison_result;
    }
    loaded_record_pointer = (char *)(a1 + 88);
    shifted_bits = 512;
    if ( !sub_14020EAD8(a1 + 88, comparison_result + 349) )
    {
      if ( *(_QWORD *)(a1 + 1120) )
        shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        LODWORD(shifted_bits_2) = 512;
      *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
    }
    loaded_word = *(_QWORD *)(a1 + 1120);
    if ( !loaded_word )
      loaded_word = a1 + 88;
    selection_flag = 0;
    *(_QWORD *)(a1 + 72) = loaded_word;
    if ( sub_140210DF8(a1, &selection_flag) )
    {
      loaded_word_2 = *(_QWORD *)(a1 + 1120);
      if ( loaded_word_2 )
        shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        shifted_bits_3 = 512;
      if ( loaded_word_2 )
      {
        loaded_record_pointer = *(char **)(a1 + 1120);
        shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
        shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        shifted_bits_4 = (char *)(a1 + 600);
      }
      sub_140256818(
        (double *)&selection_flag,
        loaded_record_pointer,
        shifted_bits,
        shifted_bits_4,
        shifted_bits_3,
        *(char *)(a1 + 66),
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)a1,
        *(struct sr_anon_68 **)(a1 + 8));
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
      {
        loaded_record_pointer_2 = *(__int64 **)(a1 + 8);
        buffer_cursor = *(unsigned __int8 **)(a1 + 72);
        loaded_word_4 = *loaded_record_pointer_2;
        loaded_word_3 = *buffer_cursor;
        loaded_word_5 = *(_QWORD *)(*loaded_record_pointer_2 + 272);
        if ( *(_BYTE *)(loaded_word_3 + loaded_word_5) != 101 )
        {
          do
            loaded_word_3 = *++buffer_cursor;
          while ( (*(_BYTE *)(*(_QWORD *)loaded_word_4 + 2 * loaded_word_3) & 4) != 0 );
        }
        loaded_word_6 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_5);
        if ( loaded_word_6 == 120 )
          LOBYTE(loaded_word_3) = buffer_cursor[2];
        saved_buffer_cursor = buffer_cursor + 2;
        if ( loaded_word_6 != 120 )
          saved_buffer_cursor = buffer_cursor;
        *saved_buffer_cursor = ***(_BYTE ***)(loaded_word_4 + 248);
        text_cursor = saved_buffer_cursor + 1;
        do
        {
          input_byte = *text_cursor;
          saved_loaded_word = loaded_word_3;
          *text_cursor++ = loaded_word_3;
          LOBYTE(loaded_word_3) = input_byte;
        }
        while ( saved_loaded_word );
      }
      shifted_bits_5 = *(unsigned __int16 *)(a1 + 66);
      LOWORD(shifted_bits_5) = shifted_bits_5 - 71;
      if ( (shifted_bits_5 & 0xFFDF) == 0 )
      {
        shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
        if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
          sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
      }
      text_cursor_2 = *(char **)(a1 + 72);
      input_byte_2 = *text_cursor_2;
      if ( *text_cursor_2 == 45 )
      {
        *(_DWORD *)(a1 + 48) |= 0x40u;
        *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
        input_byte_2 = *text_cursor_2;
      }
      LOBYTE(shifted_bits_5) = input_byte_2 - 73;
      if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
      {
        selection_code = 0x2100000021LL;
        if ( _bittest64(&selection_code, shifted_bits_5) )
        {
          *(_DWORD *)(a1 + 48) &= ~8u;
          *(_WORD *)(a1 + 66) = 115;
        }
      }
      element_index = -1;
      do
        ++element_index;
      while ( text_cursor_2[element_index] );
      *(_DWORD *)(a1 + 80) = element_index;
      return 1;
    }
  }
  return 0;
}

//----- (000000014021E68C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_522(__int64 a1)
{
  int comparison_result;
  __int64 saved_loaded_word;
  char call_result;
  unsigned __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 loaded_word;
  __int64 loaded_word_2;
  unsigned __int64 shifted_bits_3;
  char *shifted_bits_4;
  unsigned __int64 loaded_word_3;
  __int64 *loaded_record_pointer;
  unsigned __int8 *buffer_cursor;
  __int64 loaded_word_4;
  __int64 loaded_word_5;
  char loaded_word_6;
  _BYTE *saved_buffer_cursor;
  char *text_cursor;
  char input_byte;
  char saved_loaded_word_2;
  unsigned __int64 shifted_bits_5;
  char *text_cursor_2;
  char input_byte_2;
  __int64 selection_code;
  __int64 element_index;
  __int64 loaded_word_7;

  *(_DWORD *)(a1 + 48) |= 0x10u;
  comparison_result = *(_DWORD *)(a1 + 56);
  if ( comparison_result >= 0 )
  {
    if ( !comparison_result )
    {
      if ( *(_WORD *)(a1 + 66) == 103 || (comparison_result = 0, *(_WORD *)(a1 + 66) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        comparison_result = 1;
      }
    }
  }
  else
  {
    comparison_result = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = comparison_result;
  }
  saved_loaded_word = a1 + 88;
  call_result = sub_14020EAD8(a1 + 88, comparison_result + 349);
  shifted_bits = 512;
  if ( !call_result )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      shifted_bits_2 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(shifted_bits_2) = 512;
    *(_DWORD *)(a1 + 56) = shifted_bits_2 - 349;
  }
  loaded_word = *(_QWORD *)(saved_loaded_word + 1032);
  if ( !loaded_word )
    loaded_word = saved_loaded_word;
  *(_QWORD *)(a1 + 72) = loaded_word;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  loaded_word_7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( loaded_word_2 )
    shifted_bits_3 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    shifted_bits_3 = 512;
  if ( loaded_word_2 )
  {
    saved_loaded_word = loaded_word_2;
    shifted_bits_4 = (char *)(loaded_word_2 + (*(_QWORD *)(a1 + 1112) >> 1));
    shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    shifted_bits_4 = (char *)(a1 + 600);
  }
  sub_140256818(
    (double *)&loaded_word_7,
    (char *)saved_loaded_word,
    shifted_bits,
    shifted_bits_4,
    shifted_bits_3,
    *(char *)(a1 + 66),
    *(_DWORD *)(a1 + 56),
    *(_QWORD *)a1,
    *(struct sr_anon_68 **)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    loaded_record_pointer = *(__int64 **)(a1 + 8);
    buffer_cursor = *(unsigned __int8 **)(a1 + 72);
    loaded_word_4 = *loaded_record_pointer;
    loaded_word_3 = *buffer_cursor;
    loaded_word_5 = *(_QWORD *)(*loaded_record_pointer + 272);
    if ( *(_BYTE *)(loaded_word_3 + loaded_word_5) != 101 )
    {
      do
        loaded_word_3 = *++buffer_cursor;
      while ( (*(_BYTE *)(*(_QWORD *)loaded_word_4 + 2 * loaded_word_3) & 4) != 0 );
    }
    loaded_word_6 = *(_BYTE *)((unsigned __int8)loaded_word_3 + loaded_word_5);
    if ( loaded_word_6 == 120 )
      LOBYTE(loaded_word_3) = buffer_cursor[2];
    saved_buffer_cursor = buffer_cursor + 2;
    if ( loaded_word_6 != 120 )
      saved_buffer_cursor = buffer_cursor;
    *saved_buffer_cursor = ***(_BYTE ***)(loaded_word_4 + 248);
    text_cursor = saved_buffer_cursor + 1;
    do
    {
      input_byte = *text_cursor;
      saved_loaded_word_2 = loaded_word_3;
      *text_cursor++ = loaded_word_3;
      LOBYTE(loaded_word_3) = input_byte;
    }
    while ( saved_loaded_word_2 );
  }
  shifted_bits_5 = *(unsigned __int16 *)(a1 + 66);
  LOWORD(shifted_bits_5) = shifted_bits_5 - 71;
  if ( (shifted_bits_5 & 0xFFDF) == 0 )
  {
    shifted_bits_5 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      sub_1402145B0(*(sr_anon_105 **)(a1 + 72), *(char **)(a1 + 8), (struct sr_anon_68 *    )loaded_word_3);
  }
  text_cursor_2 = *(char **)(a1 + 72);
  input_byte_2 = *text_cursor_2;
  if ( *text_cursor_2 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(++text_cursor_2);
    input_byte_2 = *text_cursor_2;
  }
  LOBYTE(shifted_bits_5) = input_byte_2 - 73;
  if ( (unsigned __int8)shifted_bits_5 <= 0x25u )
  {
    selection_code = 0x2100000021LL;
    if ( _bittest64(&selection_code, shifted_bits_5) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_WORD *)(a1 + 66) = 115;
    }
  }
  element_index = -1;
  do
    ++element_index;
  while ( text_cursor_2[element_index] );
  *(_DWORD *)(a1 + 80) = element_index;
  return 1;
}

//----- (000000014021E928) ----------------------------------------------------
char            sub_14021E928(__int64 a1)
{
  int loaded_word;
  int integer_difference;
  bool comparison_result;
       struct DLGTEMPLATE *loaded_record_pointer;
  __int64 shifted_bits;
  _BYTE *loaded_record_pointer_2;
  char result;
  __int64 loaded_word_2;

  loaded_word = *(_DWORD *)(a1 + 60) - 2;
  if ( !loaded_word )
  {
    comparison_result = 0;
LABEL_7:
    if ( comparison_result )
    {
LABEL_8:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_record_pointer = *(     struct DLGTEMPLATE **)(a1 + 1120);
      if ( loaded_record_pointer )
      {
        shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        shifted_bits = 512;
        loaded_record_pointer = (     struct DLGTEMPLATE *)(a1 + 88);
      }
      if ( (unsigned int)CDialog__CreateIndirect(
                           (CDialog *)(a1 + 80),
                           loaded_record_pointer,
                           (struct CWnd *)shifted_bits,
                           (void *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL)) )
        *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  integer_difference = loaded_word - 1;
  if ( !integer_difference || integer_difference == 9 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_13:
  loaded_record_pointer_2 = *(_BYTE **)(a1 + 1120);
  if ( !loaded_record_pointer_2 )
    loaded_record_pointer_2 = (_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 32) += 8LL;
  *loaded_record_pointer_2 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_DWORD *)(a1 + 80) = 1;
LABEL_16:
  result = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  if ( !loaded_word_2 )
    loaded_word_2 = a1 + 88;
  *(_QWORD *)(a1 + 72) = loaded_word_2;
  return result;
}

//----- (000000014021E9E4) ----------------------------------------------------
char            sub_14021E9E4(__int64 a1)
{
  int loaded_word;
  int integer_difference;
  bool comparison_result;
       struct DLGTEMPLATE *loaded_record_pointer;
  __int64 shifted_bits;
  _BYTE *loaded_record_pointer_2;
  __int64 loaded_word_2;
  unsigned __int16 selection_flag;

  loaded_word = *(_DWORD *)(a1 + 60) - 2;
  if ( !loaded_word )
  {
    comparison_result = 0;
LABEL_7:
    if ( comparison_result )
      goto LABEL_8;
    goto LABEL_16;
  }
  integer_difference = loaded_word - 1;
  if ( !integer_difference || integer_difference == 9 )
  {
LABEL_8:
    selection_flag = 0;
    if ( sub_140211594(a1, &selection_flag) )
    {
      if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
      {
        loaded_record_pointer = *(     struct DLGTEMPLATE **)(a1 + 1120);
        if ( loaded_record_pointer )
        {
          shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
        }
        else
        {
          shifted_bits = 512;
          loaded_record_pointer = (     struct DLGTEMPLATE *)(a1 + 88);
        }
        if ( (unsigned int)CDialog__CreateIndirect((CDialog *)(a1 + 80), loaded_record_pointer, (struct CWnd *)shifted_bits, (void *)selection_flag) )
          *(_BYTE *)(a1 + 64) = 1;
        goto LABEL_23;
      }
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_16:
  loaded_record_pointer_2 = *(_BYTE **)(a1 + 1120);
  if ( !loaded_record_pointer_2 )
    loaded_record_pointer_2 = (_BYTE *)(a1 + 88);
  if ( !sub_14020F604(a1, loaded_record_pointer_2) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    *(_DWORD *)(a1 + 80) = 1;
LABEL_23:
    loaded_word_2 = *(_QWORD *)(a1 + 1120);
    if ( !loaded_word_2 )
      loaded_word_2 = a1 + 88;
    *(_QWORD *)(a1 + 72) = loaded_word_2;
  }
  return 1;
}

//----- (000000014021EAE4) ----------------------------------------------------
char            sub_14021EAE4(__int64 a1)
{
  int loaded_word;
  int integer_difference;
  bool comparison_result;
       struct DLGTEMPLATE *loaded_record_pointer;
  __int64 shifted_bits;
  _BYTE *loaded_record_pointer_2;
  char result;
  __int64 loaded_word_2;

  loaded_word = *(_DWORD *)(a1 + 60) - 2;
  if ( !loaded_word )
  {
    comparison_result = 0;
LABEL_7:
    if ( comparison_result )
    {
LABEL_8:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_record_pointer = *(     struct DLGTEMPLATE **)(a1 + 1120);
      if ( loaded_record_pointer )
      {
        shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        shifted_bits = 512;
        loaded_record_pointer = (     struct DLGTEMPLATE *)(a1 + 88);
      }
      if ( (unsigned int)CDialog__CreateIndirect(
                           (CDialog *)(a1 + 80),
                           loaded_record_pointer,
                           (struct CWnd *)shifted_bits,
                           (void *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL)) )
        *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  integer_difference = loaded_word - 1;
  if ( !integer_difference || integer_difference == 9 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_13:
  loaded_record_pointer_2 = *(_BYTE **)(a1 + 1120);
  if ( !loaded_record_pointer_2 )
    loaded_record_pointer_2 = (_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 32) += 8LL;
  *loaded_record_pointer_2 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_DWORD *)(a1 + 80) = 1;
LABEL_16:
  result = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  if ( !loaded_word_2 )
    loaded_word_2 = a1 + 88;
  *(_QWORD *)(a1 + 72) = loaded_word_2;
  return result;
}

//----- (000000014021EBA0) ----------------------------------------------------
char            sub_14021EBA0(__int64 a1)
{
  int loaded_word;
  int integer_difference;
  bool comparison_result;
       struct DLGTEMPLATE *loaded_record_pointer;
  __int64 shifted_bits;
  _BYTE *loaded_record_pointer_2;
  char result;
  __int64 loaded_word_2;

  loaded_word = *(_DWORD *)(a1 + 60) - 2;
  if ( !loaded_word )
  {
    comparison_result = 0;
LABEL_7:
    if ( comparison_result )
    {
LABEL_8:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_record_pointer = *(     struct DLGTEMPLATE **)(a1 + 1120);
      if ( loaded_record_pointer )
      {
        shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        shifted_bits = 512;
        loaded_record_pointer = (     struct DLGTEMPLATE *)(a1 + 88);
      }
      if ( (unsigned int)CDialog__CreateIndirect(
                           (CDialog *)(a1 + 80),
                           loaded_record_pointer,
                           (struct CWnd *)shifted_bits,
                           (void *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL)) )
        *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  integer_difference = loaded_word - 1;
  if ( !integer_difference || integer_difference == 9 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_13:
  loaded_record_pointer_2 = *(_BYTE **)(a1 + 1120);
  if ( !loaded_record_pointer_2 )
    loaded_record_pointer_2 = (_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 32) += 8LL;
  *loaded_record_pointer_2 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_DWORD *)(a1 + 80) = 1;
LABEL_16:
  result = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  if ( !loaded_word_2 )
    loaded_word_2 = a1 + 88;
  *(_QWORD *)(a1 + 72) = loaded_word_2;
  return result;
}

//----- (000000014021EC5C) ----------------------------------------------------
char            sub_14021EC5C(__int64 a1)
{
  int loaded_word;
  int integer_difference;
  bool comparison_result;
       struct DLGTEMPLATE *loaded_record_pointer;
  __int64 shifted_bits;
  _BYTE *loaded_record_pointer_2;
  __int64 loaded_word_2;
  unsigned __int16 selection_flag;

  loaded_word = *(_DWORD *)(a1 + 60) - 2;
  if ( !loaded_word )
  {
    comparison_result = 0;
LABEL_7:
    if ( comparison_result )
      goto LABEL_8;
    goto LABEL_16;
  }
  integer_difference = loaded_word - 1;
  if ( !integer_difference || integer_difference == 9 )
  {
LABEL_8:
    selection_flag = 0;
    if ( sub_140211650(a1, &selection_flag) )
    {
      if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
      {
        loaded_record_pointer = *(     struct DLGTEMPLATE **)(a1 + 1120);
        if ( loaded_record_pointer )
        {
          shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
        }
        else
        {
          shifted_bits = 512;
          loaded_record_pointer = (     struct DLGTEMPLATE *)(a1 + 88);
        }
        if ( (unsigned int)CDialog__CreateIndirect((CDialog *)(a1 + 80), loaded_record_pointer, (struct CWnd *)shifted_bits, (void *)selection_flag) )
          *(_BYTE *)(a1 + 64) = 1;
        goto LABEL_23;
      }
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_16:
  loaded_record_pointer_2 = *(_BYTE **)(a1 + 1120);
  if ( !loaded_record_pointer_2 )
    loaded_record_pointer_2 = (_BYTE *)(a1 + 88);
  if ( !sub_14020F6BC(a1, loaded_record_pointer_2) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    *(_DWORD *)(a1 + 80) = 1;
LABEL_23:
    loaded_word_2 = *(_QWORD *)(a1 + 1120);
    if ( !loaded_word_2 )
      loaded_word_2 = a1 + 88;
    *(_QWORD *)(a1 + 72) = loaded_word_2;
  }
  return 1;
}

//----- (000000014021ED5C) ----------------------------------------------------
char            sub_14021ED5C(__int64 a1)
{
  int loaded_word;
  int integer_difference;
  bool comparison_result;
       struct DLGTEMPLATE *loaded_record_pointer;
  __int64 shifted_bits;
  _BYTE *loaded_record_pointer_2;
  char result;
  __int64 loaded_word_2;

  loaded_word = *(_DWORD *)(a1 + 60) - 2;
  if ( !loaded_word )
  {
    comparison_result = 0;
LABEL_7:
    if ( comparison_result )
    {
LABEL_8:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_record_pointer = *(     struct DLGTEMPLATE **)(a1 + 1120);
      if ( loaded_record_pointer )
      {
        shifted_bits = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        shifted_bits = 512;
        loaded_record_pointer = (     struct DLGTEMPLATE *)(a1 + 88);
      }
      if ( (unsigned int)CDialog__CreateIndirect(
                           (CDialog *)(a1 + 80),
                           loaded_record_pointer,
                           (struct CWnd *)shifted_bits,
                           (void *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) - 8LL)) )
        *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  integer_difference = loaded_word - 1;
  if ( !integer_difference || integer_difference == 9 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    comparison_result = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_13:
  loaded_record_pointer_2 = *(_BYTE **)(a1 + 1120);
  if ( !loaded_record_pointer_2 )
    loaded_record_pointer_2 = (_BYTE *)(a1 + 88);
  *(_QWORD *)(a1 + 32) += 8LL;
  *loaded_record_pointer_2 = *(_BYTE *)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_DWORD *)(a1 + 80) = 1;
LABEL_16:
  result = 1;
  loaded_word_2 = *(_QWORD *)(a1 + 1120);
  if ( !loaded_word_2 )
    loaded_word_2 = a1 + 88;
  *(_QWORD *)(a1 + 72) = loaded_word_2;
  return result;
}

//----- (000000014021EE18) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_523(__int64 a1)
{
  __int64 integer_sum;
  __int16 loaded_word;
  bool loaded_word_2;
  sr_anon_115 *loaded_record_pointer;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  char result;
  char saved_loaded_word;
  char unused_written_slot;

  *(_BYTE *)(a1 + 84) = 1;
  integer_sum = a1 + 88;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  loaded_word_2 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  loaded_record_pointer = *(sr_anon_115 **)(integer_sum + 1032);
  if ( loaded_word_2 )
  {
    if ( !loaded_record_pointer )
      loaded_record_pointer = (sr_anon_115 *)integer_sum;
    *(_WORD *)loaded_record_pointer = loaded_word;
  }
  else
  {
    loaded_word_3 = *(_QWORD *)(a1 + 8);
    saved_loaded_word = loaded_word;
    unused_written_slot = 0;
    if ( !loaded_record_pointer )
      loaded_record_pointer = (sr_anon_115 *)integer_sum;
    if ( (int)mbtowc_l(loaded_record_pointer, (sr_anon_49 *)&saved_loaded_word, (char *)*(int *)(*(_QWORD *)loaded_word_3 + 8LL), (struct __crt_locale_pointers *)loaded_word_3) < 0 )
      *(_BYTE *)(a1 + 64) = 1;
  }
  loaded_word_4 = *(_QWORD *)(integer_sum + 1032);
  result = 1;
  *(_DWORD *)(a1 + 80) = 1;
  if ( !loaded_word_4 )
    loaded_word_4 = integer_sum;
  *(_QWORD *)(a1 + 72) = loaded_word_4;
  return result;
}

//----- (000000014021EEC0) ----------------------------------------------------
char            sub_14021EEC0(__int64 a1)
{
  char result;
  bool loaded_word;
  sr_anon_115 *loaded_record_pointer;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int16 selection_flag;

  *(_BYTE *)(a1 + 84) = 1;
  selection_flag = 0;
  result = sub_14021170C(a1, &selection_flag);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      loaded_word = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
      loaded_record_pointer = *(sr_anon_115 **)(a1 + 1120);
      if ( loaded_word )
      {
        if ( !loaded_record_pointer )
          loaded_record_pointer = (sr_anon_115 *)(a1 + 88);
        *(_WORD *)loaded_record_pointer = selection_flag;
      }
      else
      {
        loaded_word_2 = *(_QWORD *)(a1 + 8);
        HIBYTE(selection_flag) = 0;
        if ( !loaded_record_pointer )
          loaded_record_pointer = (sr_anon_115 *)(a1 + 88);
        if ( (int)mbtowc_l(loaded_record_pointer, (sr_anon_49 *)&selection_flag, (char *)*(int *)(*(_QWORD *)loaded_word_2 + 8LL), (struct __crt_locale_pointers *)loaded_word_2) < 0 )
          *(_BYTE *)(a1 + 64) = 1;
      }
      loaded_word_3 = *(_QWORD *)(a1 + 1120);
      *(_DWORD *)(a1 + 80) = 1;
      if ( !loaded_word_3 )
        loaded_word_3 = a1 + 88;
      *(_QWORD *)(a1 + 72) = loaded_word_3;
    }
    return 1;
  }
  return result;
}

//----- (000000014021EF8C) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_524(__int64 a1)
{
  __int64 integer_sum;
  __int16 loaded_word;
  bool loaded_word_2;
  sr_anon_115 *loaded_record_pointer;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  char result;
  char saved_loaded_word;
  char unused_written_slot;

  *(_BYTE *)(a1 + 84) = 1;
  integer_sum = a1 + 88;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  loaded_word_2 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  loaded_record_pointer = *(sr_anon_115 **)(integer_sum + 1032);
  if ( loaded_word_2 )
  {
    if ( !loaded_record_pointer )
      loaded_record_pointer = (sr_anon_115 *)integer_sum;
    *(_WORD *)loaded_record_pointer = loaded_word;
  }
  else
  {
    loaded_word_3 = *(_QWORD *)(a1 + 8);
    saved_loaded_word = loaded_word;
    unused_written_slot = 0;
    if ( !loaded_record_pointer )
      loaded_record_pointer = (sr_anon_115 *)integer_sum;
    if ( (int)mbtowc_l(loaded_record_pointer, (sr_anon_49 *)&saved_loaded_word, (char *)*(int *)(*(_QWORD *)loaded_word_3 + 8LL), (struct __crt_locale_pointers *)loaded_word_3) < 0 )
      *(_BYTE *)(a1 + 64) = 1;
  }
  loaded_word_4 = *(_QWORD *)(integer_sum + 1032);
  result = 1;
  *(_DWORD *)(a1 + 80) = 1;
  if ( !loaded_word_4 )
    loaded_word_4 = integer_sum;
  *(_QWORD *)(a1 + 72) = loaded_word_4;
  return result;
}

//----- (000000014021F034) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_525(__int64 a1)
{
  __int64 integer_sum;
  __int16 loaded_word;
  bool loaded_word_2;
  sr_anon_115 *loaded_record_pointer;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  char result;
  char saved_loaded_word;
  char unused_written_slot;

  *(_BYTE *)(a1 + 84) = 1;
  integer_sum = a1 + 88;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  loaded_word_2 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  loaded_record_pointer = *(sr_anon_115 **)(integer_sum + 1032);
  if ( loaded_word_2 )
  {
    if ( !loaded_record_pointer )
      loaded_record_pointer = (sr_anon_115 *)integer_sum;
    *(_WORD *)loaded_record_pointer = loaded_word;
  }
  else
  {
    loaded_word_3 = *(_QWORD *)(a1 + 8);
    saved_loaded_word = loaded_word;
    unused_written_slot = 0;
    if ( !loaded_record_pointer )
      loaded_record_pointer = (sr_anon_115 *)integer_sum;
    if ( (int)mbtowc_l(loaded_record_pointer, (sr_anon_49 *)&saved_loaded_word, (char *)*(int *)(*(_QWORD *)loaded_word_3 + 8LL), (struct __crt_locale_pointers *)loaded_word_3) < 0 )
      *(_BYTE *)(a1 + 64) = 1;
  }
  loaded_word_4 = *(_QWORD *)(integer_sum + 1032);
  result = 1;
  *(_DWORD *)(a1 + 80) = 1;
  if ( !loaded_word_4 )
    loaded_word_4 = integer_sum;
  *(_QWORD *)(a1 + 72) = loaded_word_4;
  return result;
}

//----- (000000014021F0DC) ----------------------------------------------------
char            sub_14021F0DC(__int64 a1)
{
  char result;
  bool loaded_word;
  sr_anon_115 *loaded_record_pointer;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int16 selection_flag;

  *(_BYTE *)(a1 + 84) = 1;
  selection_flag = 0;
  result = sub_1402117CC(a1, &selection_flag);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      loaded_word = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
      loaded_record_pointer = *(sr_anon_115 **)(a1 + 1120);
      if ( loaded_word )
      {
        if ( !loaded_record_pointer )
          loaded_record_pointer = (sr_anon_115 *)(a1 + 88);
        *(_WORD *)loaded_record_pointer = selection_flag;
      }
      else
      {
        loaded_word_2 = *(_QWORD *)(a1 + 8);
        HIBYTE(selection_flag) = 0;
        if ( !loaded_record_pointer )
          loaded_record_pointer = (sr_anon_115 *)(a1 + 88);
        if ( (int)mbtowc_l(loaded_record_pointer, (sr_anon_49 *)&selection_flag, (char *)*(int *)(*(_QWORD *)loaded_word_2 + 8LL), (struct __crt_locale_pointers *)loaded_word_2) < 0 )
          *(_BYTE *)(a1 + 64) = 1;
      }
      loaded_word_3 = *(_QWORD *)(a1 + 1120);
      *(_DWORD *)(a1 + 80) = 1;
      if ( !loaded_word_3 )
        loaded_word_3 = a1 + 88;
      *(_QWORD *)(a1 + 72) = loaded_word_3;
    }
    return 1;
  }
  return result;
}

//----- (000000014021F1A8) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char            unknown_libname_526(__int64 a1)
{
  __int64 integer_sum;
  __int16 loaded_word;
  bool loaded_word_2;
  sr_anon_115 *loaded_record_pointer;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  char result;
  char saved_loaded_word;
  char unused_written_slot;

  *(_BYTE *)(a1 + 84) = 1;
  integer_sum = a1 + 88;
  *(_QWORD *)(a1 + 32) += 8LL;
  loaded_word = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  loaded_word_2 = sub_140211A94(*(_QWORD *)a1, *(_WORD *)(a1 + 66), *(_DWORD *)(a1 + 60));
  loaded_record_pointer = *(sr_anon_115 **)(integer_sum + 1032);
  if ( loaded_word_2 )
  {
    if ( !loaded_record_pointer )
      loaded_record_pointer = (sr_anon_115 *)integer_sum;
    *(_WORD *)loaded_record_pointer = loaded_word;
  }
  else
  {
    loaded_word_3 = *(_QWORD *)(a1 + 8);
    saved_loaded_word = loaded_word;
    unused_written_slot = 0;
    if ( !loaded_record_pointer )
      loaded_record_pointer = (sr_anon_115 *)integer_sum;
    if ( (int)mbtowc_l(loaded_record_pointer, (sr_anon_49 *)&saved_loaded_word, (char *)*(int *)(*(_QWORD *)loaded_word_3 + 8LL), (struct __crt_locale_pointers *)loaded_word_3) < 0 )
      *(_BYTE *)(a1 + 64) = 1;
  }
  loaded_word_4 = *(_QWORD *)(integer_sum + 1032);
  result = 1;
  *(_DWORD *)(a1 + 80) = 1;
  if ( !loaded_word_4 )
    loaded_word_4 = integer_sum;
  *(_QWORD *)(a1 + 72) = loaded_word_4;
  return result;
}

//----- (000000014021F310) ----------------------------------------------------
char            sub_14021F310(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  __int64 loaded_word_2;
  int loaded_word_3;
  bool comparison_result;
  __int64 loaded_word_4;
  int loaded_word_5;
  __int64 loaded_word_6;
  int loaded_word_7;
  __int64 loaded_word_8;
  int option_flags;
  unsigned __int64 loaded_word_9;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_14;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_14:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  switch ( selection_code )
  {
    case 1LL:
      loaded_word_7 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_7 & 0x10) == 0;
      loaded_word_8 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int8 *)(loaded_word_8 - 8);
      else
        loaded_word_2 = *(char *)(loaded_word_8 - 8);
      break;
    case 2LL:
      loaded_word_5 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_5 & 0x10) == 0;
      loaded_word_6 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int16 *)(loaded_word_6 - 8);
      else
        loaded_word_2 = *(__int16 *)(loaded_word_6 - 8);
      break;
    case 4LL:
      loaded_word_3 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_3 & 0x10) == 0;
      loaded_word_4 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned int *)(loaded_word_4 - 8);
      else
        loaded_word_2 = *(int *)(loaded_word_4 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_word_2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  option_flags = *(_DWORD *)(a1 + 48);
  if ( (option_flags & 0x10) != 0 && loaded_word_2 < 0 )
  {
    loaded_word_2 = -loaded_word_2;
    option_flags |= 0x40u;
    *(_DWORD *)(a1 + 48) = option_flags;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    loaded_word_9 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
    sub_14020EAD8(a1 + 88, loaded_word_9);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !loaded_word_2 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 0;
  if ( selection_code == 8 )
    unknown_libname_359(a1, loaded_word_2, a2, a3);
  else
    unknown_libname_347(a1, loaded_word_2, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
  {
    *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}

//----- (000000014021F4D8) ----------------------------------------------------
char            sub_14021F4D8(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  char unknown_libname_288_result;
  int option_flags;
  unsigned __int64 integer_difference_6;
  unsigned __int64 loaded_word_2;
  __int64 selection_flag;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_15;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_15:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  selection_flag = 0;
  switch ( selection_code )
  {
    case 1LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_288_result = sub_14020EC2C(a1, &selection_flag);
      else
        unknown_libname_288_result = sub_14020EF74(a1, &selection_flag);
      break;
    case 2LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_288_result = sub_14020F2BC(a1, &selection_flag);
      else
        unknown_libname_288_result = sub_14020F79C(a1, &selection_flag);
      break;
    case 4LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_288_result = sub_14020FAE4(a1, &selection_flag);
      else
        unknown_libname_288_result = sub_14020FE24(a1, &selection_flag);
      break;
    case 8LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_288_result = unknown_libname_288(a1, &selection_flag);
      else
        unknown_libname_288_result = unknown_libname_296(a1, &selection_flag);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  if ( !unknown_libname_288_result )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    option_flags = *(_DWORD *)(a1 + 48);
    integer_difference_6 = selection_flag;
    if ( (option_flags & 0x10) != 0 && selection_flag < 0 )
    {
      integer_difference_6 = -selection_flag;
      option_flags |= 0x40u;
      *(_DWORD *)(a1 + 48) = option_flags;
    }
    if ( *(int *)(a1 + 56) >= 0 )
    {
      loaded_word_2 = *(int *)(a1 + 56);
      *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
      sub_14020EAD8(a1 + 88, loaded_word_2);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    if ( !integer_difference_6 )
      *(_DWORD *)(a1 + 48) &= ~0x20u;
    *(_BYTE *)(a1 + 84) = 0;
    if ( selection_code == 8 )
      unknown_libname_360(a1, integer_difference_6, a2, a3);
    else
      unknown_libname_348(a1, integer_difference_6, a2, a3);
    if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
    {
      *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
      ++*(_DWORD *)(a1 + 80);
    }
  }
  return 1;
}

//----- (000000014021F6DC) ----------------------------------------------------
char            sub_14021F6DC(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  __int64 loaded_word_2;
  int loaded_word_3;
  bool comparison_result;
  __int64 loaded_word_4;
  int loaded_word_5;
  __int64 loaded_word_6;
  int loaded_word_7;
  __int64 loaded_word_8;
  int option_flags;
  unsigned __int64 loaded_word_9;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_14;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_14:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  switch ( selection_code )
  {
    case 1LL:
      loaded_word_7 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_7 & 0x10) == 0;
      loaded_word_8 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int8 *)(loaded_word_8 - 8);
      else
        loaded_word_2 = *(char *)(loaded_word_8 - 8);
      break;
    case 2LL:
      loaded_word_5 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_5 & 0x10) == 0;
      loaded_word_6 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int16 *)(loaded_word_6 - 8);
      else
        loaded_word_2 = *(__int16 *)(loaded_word_6 - 8);
      break;
    case 4LL:
      loaded_word_3 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_3 & 0x10) == 0;
      loaded_word_4 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned int *)(loaded_word_4 - 8);
      else
        loaded_word_2 = *(int *)(loaded_word_4 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_word_2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  option_flags = *(_DWORD *)(a1 + 48);
  if ( (option_flags & 0x10) != 0 && loaded_word_2 < 0 )
  {
    loaded_word_2 = -loaded_word_2;
    option_flags |= 0x40u;
    *(_DWORD *)(a1 + 48) = option_flags;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    loaded_word_9 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
    sub_14020EAD8(a1 + 88, loaded_word_9);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !loaded_word_2 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 0;
  if ( selection_code == 8 )
    unknown_libname_361(a1, loaded_word_2, a2, a3);
  else
    unknown_libname_349(a1, loaded_word_2, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
  {
    *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}

//----- (000000014021F8A4) ----------------------------------------------------
char            sub_14021F8A4(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  __int64 loaded_word_2;
  int loaded_word_3;
  bool comparison_result;
  __int64 loaded_word_4;
  int loaded_word_5;
  __int64 loaded_word_6;
  int loaded_word_7;
  __int64 loaded_word_8;
  int option_flags;
  unsigned __int64 loaded_word_9;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_14;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_14:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  switch ( selection_code )
  {
    case 1LL:
      loaded_word_7 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_7 & 0x10) == 0;
      loaded_word_8 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int8 *)(loaded_word_8 - 8);
      else
        loaded_word_2 = *(char *)(loaded_word_8 - 8);
      break;
    case 2LL:
      loaded_word_5 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_5 & 0x10) == 0;
      loaded_word_6 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int16 *)(loaded_word_6 - 8);
      else
        loaded_word_2 = *(__int16 *)(loaded_word_6 - 8);
      break;
    case 4LL:
      loaded_word_3 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_3 & 0x10) == 0;
      loaded_word_4 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned int *)(loaded_word_4 - 8);
      else
        loaded_word_2 = *(int *)(loaded_word_4 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_word_2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  option_flags = *(_DWORD *)(a1 + 48);
  if ( (option_flags & 0x10) != 0 && loaded_word_2 < 0 )
  {
    loaded_word_2 = -loaded_word_2;
    option_flags |= 0x40u;
    *(_DWORD *)(a1 + 48) = option_flags;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    loaded_word_9 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
    sub_14020EAD8(a1 + 88, loaded_word_9);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !loaded_word_2 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 0;
  if ( selection_code == 8 )
    unknown_libname_362(a1, loaded_word_2, a2, a3);
  else
    unknown_libname_350(a1, loaded_word_2, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
  {
    *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}

//----- (000000014021FA6C) ----------------------------------------------------
char            sub_14021FA6C(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  char unknown_libname_289_result;
  int option_flags;
  unsigned __int64 integer_difference_6;
  unsigned __int64 loaded_word_2;
  __int64 selection_flag;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_15;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_15:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  selection_flag = 0;
  switch ( selection_code )
  {
    case 1LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_289_result = sub_14020ECE8(a1, &selection_flag);
      else
        unknown_libname_289_result = sub_14020F030(a1, &selection_flag);
      break;
    case 2LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_289_result = sub_14020F378(a1, &selection_flag);
      else
        unknown_libname_289_result = sub_14020F858(a1, &selection_flag);
      break;
    case 4LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_289_result = sub_14020FBA0(a1, &selection_flag);
      else
        unknown_libname_289_result = sub_14020FEE0(a1, &selection_flag);
      break;
    case 8LL:
      if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
        unknown_libname_289_result = unknown_libname_289(a1, &selection_flag);
      else
        unknown_libname_289_result = unknown_libname_297(a1, &selection_flag);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  if ( !unknown_libname_289_result )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    option_flags = *(_DWORD *)(a1 + 48);
    integer_difference_6 = selection_flag;
    if ( (option_flags & 0x10) != 0 && selection_flag < 0 )
    {
      integer_difference_6 = -selection_flag;
      option_flags |= 0x40u;
      *(_DWORD *)(a1 + 48) = option_flags;
    }
    if ( *(int *)(a1 + 56) >= 0 )
    {
      loaded_word_2 = *(int *)(a1 + 56);
      *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
      sub_14020EAD8(a1 + 88, loaded_word_2);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
    }
    if ( !integer_difference_6 )
      *(_DWORD *)(a1 + 48) &= ~0x20u;
    *(_BYTE *)(a1 + 84) = 0;
    if ( selection_code == 8 )
      unknown_libname_363(a1, integer_difference_6, a2, a3);
    else
      unknown_libname_351(a1, integer_difference_6, a2, a3);
    if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
    {
      *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
      ++*(_DWORD *)(a1 + 80);
    }
  }
  return 1;
}

//----- (000000014021FC70) ----------------------------------------------------
char            sub_14021FC70(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  __int64 loaded_word_2;
  int loaded_word_3;
  bool comparison_result;
  __int64 loaded_word_4;
  int loaded_word_5;
  __int64 loaded_word_6;
  int loaded_word_7;
  __int64 loaded_word_8;
  int option_flags;
  unsigned __int64 loaded_word_9;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_14;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_14:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  switch ( selection_code )
  {
    case 1LL:
      loaded_word_7 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_7 & 0x10) == 0;
      loaded_word_8 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int8 *)(loaded_word_8 - 8);
      else
        loaded_word_2 = *(char *)(loaded_word_8 - 8);
      break;
    case 2LL:
      loaded_word_5 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_5 & 0x10) == 0;
      loaded_word_6 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int16 *)(loaded_word_6 - 8);
      else
        loaded_word_2 = *(__int16 *)(loaded_word_6 - 8);
      break;
    case 4LL:
      loaded_word_3 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_3 & 0x10) == 0;
      loaded_word_4 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned int *)(loaded_word_4 - 8);
      else
        loaded_word_2 = *(int *)(loaded_word_4 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_word_2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  option_flags = *(_DWORD *)(a1 + 48);
  if ( (option_flags & 0x10) != 0 && loaded_word_2 < 0 )
  {
    loaded_word_2 = -loaded_word_2;
    option_flags |= 0x40u;
    *(_DWORD *)(a1 + 48) = option_flags;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    loaded_word_9 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
    sub_14020EAD8(a1 + 88, loaded_word_9);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !loaded_word_2 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 0;
  if ( selection_code == 8 )
    unknown_libname_364(a1, loaded_word_2, a2, a3);
  else
    unknown_libname_352(a1, loaded_word_2, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
  {
    *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}

//----- (000000014021FE38) ----------------------------------------------------
char            sub_14021FE38(__int64 a1, unsigned int a2, char a3)
{
  int loaded_word;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  __int64 selection_code;
  int integer_difference_4;
  int integer_difference_5;
  __int64 loaded_word_2;
  int loaded_word_3;
  bool comparison_result;
  __int64 loaded_word_4;
  int loaded_word_5;
  __int64 loaded_word_6;
  int loaded_word_7;
  __int64 loaded_word_8;
  int option_flags;
  unsigned __int64 loaded_word_9;

  loaded_word = *(_DWORD *)(a1 + 60);
  if ( loaded_word > 5 )
  {
    integer_difference_4 = loaded_word - 6;
    if ( !integer_difference_4 )
      goto LABEL_8;
    integer_difference_5 = integer_difference_4 - 1;
    if ( !integer_difference_5 )
      goto LABEL_8;
    integer_difference_2 = integer_difference_5 - 2;
    if ( !integer_difference_2 )
      goto LABEL_8;
  }
  else
  {
    if ( loaded_word == 5 )
    {
LABEL_8:
      selection_code = 8;
      goto LABEL_9;
    }
    if ( !loaded_word )
      goto LABEL_14;
    integer_difference = loaded_word - 1;
    if ( !integer_difference )
    {
      selection_code = 1;
      goto LABEL_9;
    }
    integer_difference_2 = integer_difference - 1;
    if ( !integer_difference_2 )
    {
      selection_code = 2;
      goto LABEL_9;
    }
  }
  integer_difference_3 = integer_difference_2 - 1;
  if ( !integer_difference_3 )
  {
LABEL_14:
    selection_code = 4;
    goto LABEL_9;
  }
  if ( integer_difference_3 == 1 )
    goto LABEL_8;
  selection_code = 0;
LABEL_9:
  switch ( selection_code )
  {
    case 1LL:
      loaded_word_7 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_7 & 0x10) == 0;
      loaded_word_8 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int8 *)(loaded_word_8 - 8);
      else
        loaded_word_2 = *(char *)(loaded_word_8 - 8);
      break;
    case 2LL:
      loaded_word_5 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_5 & 0x10) == 0;
      loaded_word_6 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned __int16 *)(loaded_word_6 - 8);
      else
        loaded_word_2 = *(__int16 *)(loaded_word_6 - 8);
      break;
    case 4LL:
      loaded_word_3 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      comparison_result = (loaded_word_3 & 0x10) == 0;
      loaded_word_4 = *(_QWORD *)(a1 + 32);
      if ( comparison_result )
        loaded_word_2 = *(unsigned int *)(loaded_word_4 - 8);
      else
        loaded_word_2 = *(int *)(loaded_word_4 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      loaded_word_2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno_sr() = 22;
      crt_invalid_parameter_noinfo();
      return 0;
  }
  option_flags = *(_DWORD *)(a1 + 48);
  if ( (option_flags & 0x10) != 0 && loaded_word_2 < 0 )
  {
    loaded_word_2 = -loaded_word_2;
    option_flags |= 0x40u;
    *(_DWORD *)(a1 + 48) = option_flags;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    loaded_word_9 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = option_flags & 0xFFFFFFF7;
    sub_14020EB80(a1 + 88, loaded_word_9);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !loaded_word_2 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 1;
  if ( selection_code == 8 )
    unknown_libname_365(a1, loaded_word_2, a2, a3);
  else
    unknown_libname_353(a1, loaded_word_2, a2, a3);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_WORD **)(a1 + 72) != 48) )
  {
    *(_QWORD *)(a1 + 72) -= 2LL;
    **(_WORD **)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}
