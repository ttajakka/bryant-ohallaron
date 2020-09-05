/* Problem 2.40 from page 103 */

#include <stdio.h>

int mult_6(int x) {
    // allowed: 2 shifts, 1 add/subs
    // 6 = [110]
    return (x << 2) + (x << 1);
}

int mult_31(int x) {
    // allowed: 1 shift, 1 add/subs
    // 31 = [11111]
    return (x << 5) - x;
}

int mult_neg6(int x) {
    // allowed: 2 shifts, 1 add/subs
    // -6 = 2 - 8
    return (x << 1) - (x << 3); // not correct
}

int mult_55(int x) {
    // allowed: 2 shifts, 2 add/subs
    // 55 = [110111] = [111000] - 1;
    return (x << 6) - (x << 3) - x;
}

int main() {
    for (int x = 2; x < 20; x = x + 3) {
        printf("x =\t%i\n", x);
        printf("6*x:\t%i\t%i\n", 6*x, mult_6(x));
        printf("31*x:\t%i\t%i\n", 31*x, mult_31(x));
        printf("-6*x:\t%i\t%i\n", -6*x, mult_neg6(x));
        printf("55*x:\t%i\t%i\n", 55*x, mult_55(x));
        printf("\n");
    }
}
