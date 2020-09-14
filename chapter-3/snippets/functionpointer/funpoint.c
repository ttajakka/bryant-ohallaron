/* Trying out function pointers */

#include <stdio.h>

int Add(int a, int b) {
    return a+b;
}

int main() {
    int (*p)(int,int);
    p = Add;
    int c = p(2,3);
    printf("Value of c: %x\n", c);
    p = &Add;
    c = (*p)(2,3);
    printf("Value of c: %x\n", c);
}
