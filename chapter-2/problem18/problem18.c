/* Solution to Problem 2.18 on page 69 
 *
 * The goal is to turn numbers in 32-
 * bit two's complement hexadecimal
 * representations into decimal re-
 * presentation 
 *
 * */

#include <stdio.h>

int main() {
    int list[] = {0x2e0, -0x58, 0x28, -0x30,
        0x78, 0x88, 0x1f8, 0x8, 0xc0, -0x48};
    for (int i = 0; i < 10; i++)
        printf("hex: %x, dec = %d\n", list[i], list[i]);
}
