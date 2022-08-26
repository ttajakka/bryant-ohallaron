/* Problem 3.47 from page 286 */

/* A stack-checking code */

#include <stdio.h>

int main() {
    long local;
    printf("%p\n", &local);
    return 0;
}

/* When the authors ran the code 10000 times, the obtained
 * address raing from minimum of 0xffffb754 to 0xffffd754.
 * 
 * A. The range is approximately thedifference of the two: 
 * 
 *  0x2000 = 2*16^3 = 2*(2^4)^3 = 2^13 = 8192
 *
 * or 8 kilobytes.
 *
 * B. With a 128-byte nop slide, we would need to run the 
 * program 2^13/2^7 = 2^6 = 64 times.
 *
 *
 * Comments: I did this on my personal laptop. I obtained
 * a range of around 17178878128 bytes, or 17 gigabytes.
 * With this much range, you would have to run a 128-byte
 * program around 130,000,000 times.
 *  
 *  */
