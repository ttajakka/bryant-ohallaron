/* Problem 3.22 from page 221 
 *
 * Conclusion: 
 *
 * Largest positive int is INT32_MAX = 2^31 - 1 ~= 2.147*10^8
 * 12! ~= 4.79*10^8 < INT32_MAX
 * 13! ~= 6.23*10^9 > INT32_MAX
 * so the largest n such that n! can be expressed as a 32-bit int
 * is n = 12.
 * 
 * Largest positive long is INT64_MAX = 2^63 - 1 ~= 9.223*10^18
 * 20! ~= 2.43*10^18 < INT64_MAX
 * 21! ~= 5.11*10^19 > INT64_MAX
 * so the largest n such that n! can be expressed as a 64-bit long
 * is n = 20.
 *
 * */

#include <stdio.h>
#include "../../tools/int_tools.h"

// Computes factorial of n
long fact_do(long n)
{
    long result = 1;
    do {
        result *= n;
        n = n-1;
    } while (n > 1);
    return result;
}

// Test fact_do for various integers
int main() {
    long n = 1;
    long fact = 1;
    int no_overflow = 1;
    while (n <= 21) { 
        no_overflow = ltmult_ok(fact, n); // check if fact_do(n) will overflow
        fact = fact_do(n);
        printf("n = %ld, n! = %ld = %lx, tmult_ok? %d\n",
                n, fact, (unsigned long) fact, no_overflow);  
        n++;
    }
}
