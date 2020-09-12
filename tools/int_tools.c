/* A collection of tools to manipulate integer data */

// TODO: 1) test long_tmlt_ok 
//       2) make versions for different sizes and signedness of data
//        

// Returns 0 if the multiplication x*y overflows, 1 if it doesn't
int tmult_ok(int x, int y) {
    int p = x*y;
    /* Either x is zero, or dividing p by x gives y */
    return !x || p/x == y;
}

// Returns 0 if the multiplication x*y overflows, 1 if it doesn't
int ltmult_ok(long x, long y) {
    long p = x*y;
    return !x || p/x == y;
}
