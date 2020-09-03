/* Problem 2.23 from page 80 */

#include <stdio.h>

int fun1(unsigned word) {
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word) {
    return ((int) word << 24) >> 24;
}

int main() {
    printf("w\t\tfun1(w)\t\tfun2(w)\n");
    printf("0x00000076\t%x\t\t%x\n", fun1(0x00000076), fun2(0x00000076));
    printf("0x87654321\t%x\t\t%x\n", fun1(0x87654321), fun2(0x87654321));
    printf("0x000000C9\t%x\t\t%x\n", fun1(0x000000C9), fun2(0x000000C9));
    printf("0xEDCBA987\t%x\t\t%x\n", fun1(0xEDCBA987), fun2(0xEDCBA987));
    return 0;
}
