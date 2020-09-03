/* Problem 2.27 from page 89 */

#include <stdio.h>

/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;
    return sum >= x;    
}

int main() {
    unsigned x = 0xfffffffeu, y = 0x00000001u;
    printf("x = %u, y = %u, can add: ", x, y);
    if (uadd_ok(x,y)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}
