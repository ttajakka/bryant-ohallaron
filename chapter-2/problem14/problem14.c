/* Problem 2.14 from page 57 */

#include <stdio.h>
#include "bytes.h"

/* Two comments:
 * 1) sizeof() outputs an unsigned int, so it should 
 *    be formatted with %lu inside printf
 * 2) For some reason, even if x is a char, ~x is an int.
 *    It would be good to understand this behavior.
 */

int main() {
    char x = 0x66, y = 0x39;
    printf("x = %x, y = %x\n", x, y);
    printf("~x = %x, ~y = %x\n", ~x, ~y); /* Should print ffffffdf */
    printf("size of x = %lu, size of ~x = %lu\n", sizeof(x), sizeof(~x));
    printf("x & y = %x\n", x&y); /* Should print 20 */
    printf("x | y = %x\n", x|y); /* Should print 7f */
    printf("~x | ~y = %x\n", ~x|~y); /* Should print ffffffdf */
    printf("x & !y = %x\n", x&!y); /* Should print 0 */
    printf("x && y = %x\n", x&&y); /* Should print 1 */
    printf("x || y = %x\n", x||y); /* Should print 1 */
    printf("!x || !y = %x\n", !x||!y); /* Should print 0 */
    printf("x && ~y = %x\n", x&&~y); /* Should print 1 */
}
