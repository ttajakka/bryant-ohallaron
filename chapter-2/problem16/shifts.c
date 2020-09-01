/* This program includes the solution to Problem 2.16
 * from page 58, and some playing around with shifts.
 * */

#include <stdio.h>
#include "bytes.h"

int main() {
    /* Solution to Problem 2.16 */
    unsigned char x = 0xC3;
    printf("x = %x, ", x);
    show_char_bits(x); /* should print 11000011 */
    unsigned char y = (unsigned char) x << 3;
    printf("x << 3 = %x, ", y); /* 18 */
    show_char_bits(x << 3); /* 00011000 */
    y = (unsigned char) x >> 2;
    printf("logical x >> 2 = %x, ", y); /* 30 */
    show_char_bits(y); /* 00110000 */
    signed char z = (signed char) x >> 2;
    printf("arithmetic x >> 2 = %x, ", z); /* F0 */
    show_char_bits(z); /* 11110000 */
    printf("\n");

    x = 0x75;
    printf("x = %x, ", x);
    show_char_bits(x); /* should print 01110101 */
    y = (unsigned char) x << 3;
    printf("x << 3 = %x, ", y); /* A8 */
    show_char_bits(x << 3); /* 10101000 */
    y = (unsigned char) x >> 2;
    printf("logical x >> 2 = %x, ", y); /* 1D */
    show_char_bits(y); /* 00011101 */
    z = (signed char) x >> 2;
    printf("arithmetic x >> 2 = %x, ", z); /* 1D */
    show_char_bits(z); /* 00011101 */
    printf("\n");

    x = 0x87;
    printf("x = %x, ", x);
    show_char_bits(x); /* should print 10000111 */
    y = (unsigned char) x << 3;
    printf("x << 3 = %x, ", y); /* 38 */
    show_char_bits(x << 3); /* 00111000 */
    y = (unsigned char) x >> 2;
    printf("logical x >> 2 = %x, ", y); /* 21 */
    show_char_bits(y); /* 00100001 */
    z = (signed char) x >> 2;
    printf("arithmetic x >> 2 = %x, ", z); /* E1 */
    show_char_bits(z); /* 00011101 */
    printf("\n");

    x = 0x66;
    printf("x = %x, ", x);
    show_char_bits(x); /* should print 01100110 */
    y = (unsigned char) x << 3;
    printf("x << 3 = %x, ", y); /* 30 */
    show_char_bits(x << 3); /* 00110000 */
    y = (unsigned char) x >> 2;
    printf("logical x >> 2 = %x, ", y); /* 19 */
    show_char_bits(y); /* 00011001 */
    z = (signed char) x >> 2;
    printf("arithmetic x >> 2 = %x, ", z); /* 19 */
    show_char_bits(z); /* 00011001 */
    printf("\n");

    /* First "Aside" on page 59 
     * Doesn't seem to work the way the book showed
     *
    int lval = 0xFEDCBA98 << 32;
    int aval = 0xFEDCBA98 >> 36;
    unsigned uval = 0xFEDCBA98u >> 40;
    printf("%x, %x, %x\n", lval, aval, uval);
    */

    /* Playing aroung with shifts
     * Observation: char is signed and takes values
     * between -127 and 127 (?), so 0x95 overflows.
     * Cast it to (signed char) to prevent overflow.
     *
     * There's something weird about the type casting
     * of the shift operators... It seems to force
     * them into ints, I don't know how to keep the
     * chars.
     *
    unsigned char x = (unsigned char) 0x63; char y = (signed char) 0x95;
    printf("x: %i\n", x);
    show_char_bits(x);
    printf("y: %u\n", y);
    show_char_bits(y);
    printf("\nshifts:\n");
    printf("x >> 1: ");
    show_char_bits(x >> 1);
    printf("x >> 3: ");
    show_char_bits(x >> 3);
    printf("y >> 3: ");
    show_char_bits(y >> 3); */
}
