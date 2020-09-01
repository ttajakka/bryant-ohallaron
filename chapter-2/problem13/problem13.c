/* Problem 2.13 from page 56 */

#include <stdio.h>
#include "bytes.h"

int bis(int x, int m) {
    return x | m; /* sets each bit of x to 1 where m has 1, same as | */
}

int bic(int x, int m) {
    return x & ~m; /* sets each bit of x to 0 where m has 1 */
}

void test(int*, int*, int);

void test2(int*, int*, int);

int main() {
    int list1[4] = {0x75736493, 0x18538953, 0x68307214, 0x57561970};
    int list2[4] = {0xffff0000, 0x00004000, 0xaaaaaaaa, 0x01010101};
    test2(list1, list2, 4);
}

void test2(int* list1, int* list2, int len) {
    for (int i = 0; i < len; i++) {
        int x = list1[i], y = list2[i];
        printf("x = %x, y = %x\n", x, y);
        show_int_bits(x);
        show_int_bits(y);
        printf("\n");
        show_int_bits(x|y);
        show_int_bits(bis(x,y));
        show_int_bits(x^y);
        show_int_bits(bis(bic(x,y),bic(y,x)));
        printf("\n");
    }
}

void test(int* list1, int* list2, int len) {
    for (int i = 0; i < len; i++) {
        int x = list1[i], m = list2[i];
        printf("x = %x\n", x);
        show_int_bits(x);
        printf("m = %x\n", m);
        show_int_bits(m);
        printf("\n");
        show_int_bits(bis(x, m));
        show_int_bits(bic(x, m));
        printf("\n");
    }
}
