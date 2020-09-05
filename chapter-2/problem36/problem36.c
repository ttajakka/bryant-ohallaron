/* Problem 2.36 from page 99 */

#include <stdio.h>
#include <stdint.h>

int tmult_ok(int x, int y) {
    int64_t x64 = (int64_t) x;
    int64_t y64 = (int64_t) y;
    int prod = x*y; 
    int64_t prod64 = (int64_t) prod;
    return (x64*y64 == prod64);
}

int main() {
    int x = 0x00010000;
    int y = 0x00010000;
    int64_t prod64 = ((int64_t) x)*((int64_t) y);
    printf("x = %i, y = %i\n", x, y);
    printf("prod32 = %i\n", x*y);
    printf("prod64 = %li\n", prod64);
    printf("tmult_ok(x,y) = %i\n", tmult_ok(x,y));
}
