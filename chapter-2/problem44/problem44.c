/* Practice problem 2.44 from page 208 */ 

#include <stdio.h>

int main () {
    // Declare variables
    int x = -2;//, y = 0x80000000;
    //unsigned ux = x, uy = y;
    
    // Part A: (x > 0) || (x - 1 < 0) gives false when
    // x = TMIN32 = -2^31 because then x < 0 but x - 1 = = TMAX32 2^31 - 1
    printf("\nPart A\n");
    x = 0x80000000;
    printf("x = %i, (x > 0) || (x-1 < 0) = %i\n", x, (x > 0) || (x-1 < 0));

    // Part B: (x & 7) != 7 || (x<<29 < 0)
    // (x & 7) != 7 is false if and only the last three bits of x are all 1
    // x<<29 < 0 is true if and only if the 3rd bit of x is 1
    // The expression is always true!
    printf("\nPart B: always true\n");
    /* for (x = 0; x < 10; x++) {
        printf("x = %i, (x & 7) != 7 = || (x<<29 < 0) = %i\n", x, (x & 7) != 7 || (x<<29 < 0));
    }*/

    // Part C: (x * x) >= 0
    // If x = 2^16 - 1 = 0x0000ffff, then
    // x*x = (2^16 - 1)^2 = 2^32 - 2*2^16 + 1 = -2^17 + 1
    printf("\nPart C\n");
    x = 0x0000ffff;
    printf("x = %i, x*x = %i, (x*x) >= 0 = %i\n", x, (x * x), (x*x) >= 0);

    // Part D: x < 0 || -x <= 0 always true
    printf("\nPart D: always true\n");
    
    // Part E: x > 0 || -x >= 0
    // False when x = TMIN32 = 0x80000000
    // Then -x = 0x80000000 also
    printf("\nPart E\n");
    x = 0x80000000;
    printf("x = %i, -x = %i, x > 0 || -x >= 0 = %i\n", x, -x, x > 0 || -x >= 0);

    // Part F: x+y == uy+ux
    // Always true: x = ux mod 2^32, y = uy mod 2^32, so x+y = uy+ux mod 2^32
    // To evaluate x+y == uy+ux, x+y is cast to unsigned first
    printf("\nPart F: always true\n");

    // Part G: x*~y + uy*ux == -x
    // ~y + y = 2^32 - 1, so ~y = -y - 1 mod 2^32, so
    // x*~y + uy*ux = x*(-y - 1) + y*x = -x*y - x + x*y = -x mod 2^32
    printf("\nPart G: always true\n");
}
