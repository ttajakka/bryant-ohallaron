/* Solution to Practice Problem 2.12 on page 55  */

#include <stdio.h>
#include "bytes.h"

int part_a(int x) {
    int y[1];
    *y = x & 0xFF;
    return *y; 
}

int part_b(int x) {
    return x ^ ~0xFF;
}

int part_c(int x) {
    return x | 0xFF;
}

int main() {
    int x = 0x87654321;
    show_int(x);
    show_int_bits(x);
    show_int(part_a(x));
    show_int_bits(part_a(x));
    show_int(part_b(x));
    show_int_bits(part_b(x));
    show_int(part_c(x));
    show_int_bits(part_c(x));
    return 0;
}
