/* Many exercises in Chapter 2 require to write a function
 * that performs bit operations on the argument. We collect
 * those functions in this file. */

#include <stdio.h>
#include "../../bytes/bytes.h"

/* Exercise 2.59
 * Return unsigned consisting of the least significant byte of x
 * and the remaining bytes of y. */
unsigned replace_last_byte(unsigned x, unsigned y) {
    return ((x & 0x000000ff) | (y & 0xffffff00));
}

/* Exercise 2.64
 * Return 1 when any odd bit of x equals 1; 0 otherwise */
int any_odd_one(unsigned x) {
    return !!(x & 0x55555555);
}

/* Exercise 2.65
 * Return 1 when x contains an odd number of 1s; 0 otherwise */
int odd_ones(unsigned x) {
    unsigned y = (x >> 1) ^ x; // add bits x_i and x_{i+1}, save in x_i, i odd
    y = (y >> 2) ^ y;
    y = (y >> 4) ^ y;
    y = (y >> 8) ^ y;
    y = (y >> 16) ^ y;
    return (y & 1);
}


/* Exercise 2.66
 * Generate mask indicating the leftmost 1 in x */
int leftmost_one(unsigned x) {
    unsigned mask = x;
    mask = mask | (mask >> 1);
    mask = mask | (mask >> 2);
    mask = mask | (mask >> 4);
    mask = mask | (mask >> 8);
    mask = mask | (mask >> 16);
    mask = (mask >> 1) + 1;
    return (int) mask;
}
