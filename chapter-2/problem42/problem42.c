/* Practice problem 2.42 from page 107 */

#include <stdio.h>

/* Divide by 16 without divison, modulus,
 * multiplication, conditionals, or comparisons 
 * */
int div16(int x) {
    int bias = !!(x & 0x80000000);
    return ( x + (bias << 4) - bias) >> 4; // 16 = 2^4
}

int main() {
    for (int x = 1; x < 100; x = x + 3) {
        printf("x = %i, x/16 = %i vs %f\n", -x, div16(-x), -x/16.0);
    }
}
