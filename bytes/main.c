#include <stdio.h>
#include "bytes.h"

int main() {
    /* print ASCII symbols */
    for (char i = 48; i < 123; i++) {
        printf("%i: %c = ", i, i);
        show_char_bits(i);
    }

    /*
    const char *m = "Shelby";
    printf(" Byte representation of Shelby:");
    show_bytes((byte_pointer) m, strlen(m));
    printf("\n");*/
    
    /* page 46
    test_show_bytes(12345);
     */
    
    /* Practice problem 2.5 
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer) &val;
    show_bytes(valp,1);
    show_bytes(valp,2);
    show_bytes(valp,3);
    */
    
    /*const char* s = "12345";
    show_bytes((byte_pointer) s, 6);
    */

    /* Practice problem 2.7 */
    /* const char *s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s)+1); */ /* use strlen(s)+1 to print the final 00 */
    
    return 0;
    
}
