/* Decimal digits to a float or double, correctly rounded (0x14023023C).
 *
 * The run-time library's string-to-number functions first reduce their input
 * to a string of decimal digits and a power of ten, then call this. It is the
 * library's convert_decimal_string_to_floating_type_common with the big
 * integer arithmetic it uses written out: the integer part of the number is
 * built exactly, and, when that leaves fewer bits than the result needs, the
 * rest come from an exact division of the fractional part.
 */
#include <string.h>
#include "crt.h"
#include "crt_strtod_tables.h"

/* ---- unsigned integers of up to 3,680 bits --------------------------------- */

#define BIG_WORDS 115

typedef struct BigInteger {
    uint32_t used;                       /* words in use; the top one is not zero */
    uint32_t data[BIG_WORDS];            /* low word first */
} BigInteger;

/* Still in src/client/ (the library's assemble_floating_point_value,
   assemble_floating_point_value_from_big_integer and divide). */
extern long long sub_14022FC68(unsigned long long mantissa, int exponent, unsigned char is_negative,
                               char has_zero_tail, long long result);
extern long long sub_140230010(unsigned int *integer, unsigned int bits, unsigned char is_negative,
                               char has_nonzero_fraction, long long result);
extern long long sub_1402320F0(void *numerator, void *denominator, void *unused);

static void big_clear(BigInteger *x)
{
    x->used = 0;
}

static void big_copy(BigInteger *to, const BigInteger *from)
{
    to->used = from->used;
    memcpy(to->data, from->data, from->used * sizeof(uint32_t));
}

/* Position of the highest set bit counted from 1; 0 for zero. */
static uint32_t bit_length(uint32_t value)
{
    return value == 0 ? 0 : 32 - (uint32_t)__builtin_clz(value);
}

static uint32_t bit_length_64(uint64_t value)
{
    return value > 0xFFFFFFFFu ? bit_length((uint32_t)(value >> 32)) + 32 : bit_length((uint32_t)value);
}

static uint32_t big_bit_length(const BigInteger *x)
{
    return x->used == 0 ? 0 : (x->used - 1) * 32 + bit_length(x->data[x->used - 1]);
}

/* Appends a carry word. On overflow x becomes zero and the result is 0. */
static int big_append(BigInteger *x, uint32_t carry)
{
    if (x->used < BIG_WORDS) {
        x->data[x->used] = carry;
        x->used++;
        return 1;
    }
    big_clear(x);
    return 0;
}

static int big_add_small(BigInteger *x, uint32_t value)
{
    uint32_t carry = value;

    if (value == 0)
        return 1;
    for (uint32_t i = 0; i != x->used; i++) {
        uint64_t sum = (uint64_t)x->data[i] + carry;

        x->data[i] = (uint32_t)sum;
        carry = (uint32_t)(sum >> 32);
    }
    return carry == 0 || big_append(x, carry);
}

static int big_multiply_small(BigInteger *x, uint32_t multiplier)
{
    uint32_t carry = 0;

    if (multiplier == 0) {
        big_clear(x);
        return 1;
    }
    if (multiplier == 1 || x->used == 0)
        return 1;
    for (uint32_t i = 0; i != x->used; i++) {
        uint64_t product = (uint64_t)x->data[i] * multiplier + carry;

        x->data[i] = (uint32_t)product;
        carry = (uint32_t)(product >> 32);
    }
    return carry == 0 || big_append(x, carry);
}

/* On overflow x becomes zero and the result is 0. */
static int big_multiply(BigInteger *x, const BigInteger *multiplier)
{
    const uint32_t *shorter, *longer;
    uint32_t shorter_count, longer_count;
    BigInteger result;

    if (multiplier->used <= 1)
        return big_multiply_small(x, multiplier->data[0]);
    if (x->used <= 1) {
        uint32_t small = x->data[0];

        big_copy(x, multiplier);
        return big_multiply_small(x, small);
    }

    /* The shorter operand drives the outer loop. */
    if (multiplier->used < x->used) {
        shorter = multiplier->data, shorter_count = multiplier->used;
        longer = x->data, longer_count = x->used;
    } else {
        shorter = x->data, shorter_count = x->used;
        longer = multiplier->data, longer_count = multiplier->used;
    }

    result.used = 0;
    for (uint32_t i = 0; i != shorter_count; i++) {
        uint32_t word = shorter[i];
        uint32_t carry = 0;
        uint32_t at = i;

        if (word == 0) {
            if (i == result.used) {
                result.data[i] = 0;
                result.used = i + 1;
            }
            continue;
        }
        for (uint32_t j = 0; j != longer_count && at != BIG_WORDS; j++, at++) {
            uint64_t sum;

            if (at == result.used) {
                result.data[at] = 0;
                result.used = at + 1;
            }
            sum = (uint64_t)word * longer[j] + result.data[at] + carry;
            result.data[at] = (uint32_t)sum;
            carry = (uint32_t)(sum >> 32);
        }
        while (carry != 0 && at != BIG_WORDS) {
            uint64_t sum;

            if (at == result.used) {
                result.data[at] = 0;
                result.used = at + 1;
            }
            sum = (uint64_t)result.data[at] + carry;
            result.data[at++] = (uint32_t)sum;
            carry = (uint32_t)(sum >> 32);
        }
        if (at == BIG_WORDS) {
            big_clear(x);
            return 0;
        }
    }
    big_copy(x, &result);
    return 1;
}

/* x *= 10^power, by the tabled powers 10^10 ... 10^380 and then one below 10^10. */
static int big_multiply_power_of_ten(BigInteger *x, uint32_t power)
{
    static const uint32_t small_powers[9] = {
        10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000
    };
    uint32_t large = power / 10;
    uint32_t small = power % 10;

    while (large != 0) {
        uint32_t step = large > 38 ? 38 : large;
        uint32_t zeroes = large_power_indices[step - 1].zeroes;
        uint32_t size = large_power_indices[step - 1].size;
        BigInteger multiplier;

        multiplier.used = size + zeroes;
        memset(multiplier.data, 0, zeroes * sizeof(uint32_t));
        memcpy(multiplier.data + zeroes, large_power_data + large_power_indices[step - 1].offset,
               size * sizeof(uint32_t));
        if (!big_multiply(x, &multiplier)) {
            big_clear(x);
            return 0;
        }
        large -= step;
    }
    if (small != 0)
        return big_multiply_small(x, small_powers[small - 1]);
    return 1;
}

/* x <<= bits. On overflow x becomes zero and the result is 0. */
static int big_shift_left(BigInteger *x, uint32_t bits)
{
    uint32_t word_shift = bits / 32;
    uint32_t bit_shift = bits % 32;
    uint32_t low_bits = 32 - bit_shift;
    uint32_t low_mask = (uint32_t)(((uint64_t)1 << low_bits) - 1);
    uint32_t high_mask = ~low_mask;
    /* (The original reads the word below the first when x is zero; it is never called so.) */
    uint32_t top = x->used != 0 ? x->data[x->used - 1] : 0;
    int spills = bit_shift > 32 - bit_length(top);
    uint32_t highest;

    if (x->used + word_shift > BIG_WORDS || (x->used + word_shift == BIG_WORDS && spills)) {
        big_clear(x);
        return 0;
    }

    highest = x->used + word_shift < BIG_WORDS - 1 ? x->used + word_shift : BIG_WORDS - 1;
    for (uint32_t to = highest; to != 0xFFFFFFFFu && to >= word_shift; to--) {
        uint32_t upper_index = to - word_shift;
        uint32_t lower_index = to - word_shift - 1;
        uint32_t upper = upper_index < x->used ? x->data[upper_index] : 0;
        uint32_t lower = lower_index < x->used ? x->data[lower_index] : 0;

        /* (64-bit so that a shift of 32, when there is no bit shift, gives zero.) */
        x->data[to] = ((upper & low_mask) << bit_shift) | (uint32_t)((uint64_t)(lower & high_mask) >> low_bits);
    }
    for (uint32_t to = 0; to != word_shift; to++)
        x->data[to] = 0;
    x->used = spills ? highest + 1 : highest;
    return 1;
}

static int big_less(const BigInteger *a, const BigInteger *b)
{
    uint32_t i;

    if (a->used > b->used)
        return 0;
    if (a->used < b->used)
        return 1;
    for (i = a->used - 1; i != 0xFFFFFFFFu && a->data[i] == b->data[i]; i--)
        ;
    if (i == 0xFFFFFFFFu)
        return 0;
    return a->data[i] <= b->data[i];
}

/* ---- the conversion ------------------------------------------------------------- */

/* The digits of a number: 0.d1 d2 d3 ... x 10^exponent. */
typedef struct DecimalNumber {
    int32_t exponent;
    uint32_t digit_count;
    uint8_t digits[768];                 /* values 0-9 */
    uint8_t is_negative;
} DecimalNumber;

/* Where the result goes. */
typedef struct FloatTarget {
    void *value;                         /* double or float */
    uint8_t is_double;
} FloatTarget;

enum { CONVERT_UNDERFLOW = 2, CONVERT_OVERFLOW = 3 };

/* Adds the digits to `x`, nine at a time. */
static void accumulate_digits(BigInteger *x, const uint8_t *first, const uint8_t *last)
{
    uint32_t chunk = 0;
    uint32_t chunk_digits = 0;

    for (const uint8_t *digit = first; digit != last; digit++) {
        if (chunk_digits == 9) {
            big_multiply_small(x, 1000000000);
            big_add_small(x, chunk);
            chunk = 0;
            chunk_digits = 0;
        }
        chunk = chunk * 10 + *digit;
        chunk_digits++;
    }
    if (chunk_digits != 0) {
        big_multiply_power_of_ten(x, chunk_digits);
        big_add_small(x, chunk);
    }
}

long long crt_convert_decimal(const void *number_, const void *target_)
{
    const DecimalNumber *number = number_;
    const FloatTarget *target = target_;
    /* One bit more than the result's mantissa, to round by. */
    uint32_t required_bits = target->is_double ? 54 : 25;
    uint32_t positive_exponent = number->exponent < 0 ? 0 : (uint32_t)number->exponent;
    uint32_t integer_digits = positive_exponent < number->digit_count ? positive_exponent : number->digit_count;
    uint32_t integer_digits_missing = positive_exponent - integer_digits;
    const uint8_t *fraction_first = number->digits + integer_digits;
    const uint8_t *fraction_last = number->digits + number->digit_count;
    uint32_t fraction_digits = (uint32_t)(fraction_last - fraction_first);
    BigInteger integer, numerator, denominator;
    uint32_t integer_bits, numerator_bits, denominator_bits, fraction_shift, fraction_bits, remaining_bits;
    uint32_t fraction_exponent, quotient_bits, low, high;
    uint64_t quotient;
    int has_zero_tail;

    big_clear(&integer);
    accumulate_digits(&integer, number->digits, fraction_first);
    if (integer_digits_missing > 0 && !big_multiply_power_of_ten(&integer, integer_digits_missing)) {
        if (target->is_double) {
            uint64_t *value = target->value;

            *value = number->is_negative ? 0xFFF0000000000000ULL : 0x7FF0000000000000ULL;
        } else {
            uint32_t *value = target->value;

            *value = number->is_negative ? 0xFF800000u : 0x7F800000u;
        }
        return CONVERT_OVERFLOW;
    }

    /* Enough bits from the integer part, or nothing after it. */
    integer_bits = big_bit_length(&integer);
    if (integer_bits >= required_bits || fraction_digits == 0)
        return sub_140230010(&integer.used, integer_bits, number->is_negative, fraction_digits != 0,
                             (long long)(intptr_t)target);

    /* The fraction as numerator / 10^n. */
    big_clear(&numerator);
    accumulate_digits(&numerator, fraction_first, fraction_last);
    denominator.used = 1;
    denominator.data[0] = 1;
    if (!big_multiply_power_of_ten(&denominator, number->exponent < 0
                                                     ? fraction_digits + (uint32_t)-(uint32_t)number->exponent
                                                     : fraction_digits)) {
        if (target->is_double) {
            uint64_t *value = target->value;

            *value = number->is_negative ? 0x8000000000000000ULL : 0;
        } else {
            uint32_t *value = target->value;

            *value = number->is_negative ? 0x80000000u : 0;
        }
        return CONVERT_UNDERFLOW;
    }

    /* Line the numerator's top bit up with the denominator's, so that each further bit of shift
       gives one bit of quotient. */
    numerator_bits = big_bit_length(&numerator);
    denominator_bits = big_bit_length(&denominator);
    fraction_shift = denominator_bits > numerator_bits ? denominator_bits - numerator_bits : 0;
    if (fraction_shift > 0)
        big_shift_left(&numerator, fraction_shift);

    fraction_bits = required_bits - integer_bits;
    remaining_bits = fraction_bits;
    if (integer_bits > 0) {
        /* The fraction starts too far down to reach the result or its rounding. */
        if (fraction_shift > remaining_bits)
            return sub_140230010(&integer.used, integer_bits, number->is_negative, 1, (long long)(intptr_t)target);
        remaining_bits -= fraction_shift;
    }

    /* Power of two that brings the fraction into [1, 2). */
    fraction_exponent = big_less(&numerator, &denominator) ? fraction_shift + 1 : fraction_shift;

    big_shift_left(&numerator, remaining_bits);
    quotient = (uint64_t)sub_1402320F0(&numerator, &denominator, NULL);
    has_zero_tail = numerator.used == 0;

    quotient_bits = bit_length_64(quotient);
    if (quotient_bits > fraction_bits) {
        uint32_t extra = quotient_bits - fraction_bits;

        has_zero_tail = has_zero_tail && (quotient & (((uint64_t)1 << extra) - 1)) == 0;
        quotient >>= extra;
    }

    low = integer.used > 0 ? integer.data[0] : 0;
    high = integer.used > 1 ? integer.data[1] : 0;
    return sub_14022FC68(((low + ((uint64_t)high << 32)) << fraction_bits) + quotient,
                         integer_bits > 0 ? (int)(integer_bits - 2) : (int)~fraction_exponent,
                         number->is_negative, (char)has_zero_tail, (long long)(intptr_t)target);
}
