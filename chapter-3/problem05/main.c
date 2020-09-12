#include <stdio.h>

void decode1(long*, long*, long*);

int main() {
    long x = 1, y = 2, z = 3;
    printf("before: x = %li, y = %li, z = %li\n", x, y, z);
    decode1(&x, &y, &z);
    printf("after: x = %li, y = %li, z = %li\n", x, y, z);

}
