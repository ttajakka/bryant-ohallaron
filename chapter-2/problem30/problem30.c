/* Problem 2.30 from page 94 */

#include <stdio.h>

/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y) {
    int sum = x + y;
    if (x > 0 && y > 0 && sum <= 0) {
        return 0;
    } else if (x < 0 && y < 0 && sum > 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int x = 0x80000000, y = 0xf0000001;
    printf("x = %i, y = %i, x+y = %i, can add: ", x, y, x+y);
    if (tadd_ok(x,y)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}
