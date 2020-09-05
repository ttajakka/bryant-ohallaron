// Practice problem 2.54 from page 125

#include <stdio.h>

int main () {
    // Part A: x == (int)(double) x
    // Always true: int to double can preserve the exact value
    printf("\nPart A: always true\n");

    // Part B: x == (int)(float) x
    printf("\nPart B\n");
    int x = 0x7fffffff;
    printf("x = %i, (float) x = %f, x == (int)(float) x: %i\n", x, (float)x , x == (int)(float) x);

    // Part C: d == (double)(float) d
    printf("\nPart C\n");
    long l = 0x0000000000000001;
    long* lp = &l;
    double* dp = (double*) lp;
    double d = *dp;
    printf("d = %.1080f, (float) d = %.1080f, d == (double)(float) d: %i\n", d, (float) d, d == (double)(float) d);

    // Part D: f == (float)(double) f
    printf("\nPart D: always true\n");

    // Part E: f == -(-f)
    printf("\nPart E: always true\n");

    // Part F: 1.0/2 == 1/2.0
    printf("\nPart F: true\n1.0/2 == 1/2.0: %i\n", 1.0/2 == 1/2.0);

    // Part G: d*d >= 0.0
    printf("\nPart G: always true\n");

    // Part H: (f+d)-f == d
    printf("\nPart H\n");
    float f = 1.0e20;
    d = 1.0;
    printf("f = %f, d = %f, (f+d) = %f, (f+d)-f = %f, (f+d)-f == f: %i\n", f, d, f+d, (f+d)-f, (f+d)-f == f);
}
