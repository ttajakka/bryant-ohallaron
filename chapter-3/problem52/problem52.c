/* Problem 3.52 from page 301 */

// A.
double g1(double a, long b, float c, int d);
// a in %xmm0, b in %rdi, c in %xmm1, d in %esi


// B.
double g2(int a, double *b, float *c, long d);
// a in %edi, b in %rsi, c in %rdx, d in %rcx


// C.
double g3(double *a, double b, int c, float d);
// a in %rdi, b in xmm0, c in %esi, d in %xmm1


// D.
double g4(float a, int *b, float c, double d);
// a in %xmm0, b in %rdi, c in %xmm1, d in %xmm2
