/* Playing around with integers */

#include <stdio.h>
#include "../../bytes/bytes.h"

int main() {
    // Find out if char is signed or unsigned
    char c = 0xff;
    printf("(char) c = %i\n", (int) c);
    printf("(unsigned char) c = %i\n", (int) (unsigned char) c);

    /* page 70 */
    /* short int v = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv); */
    
    /* page 70-71 */
    /* unsigned u = 4294967295u;  UMax
    int tu = (int) u;  -1(!)
    printf("u = %u, tu = %d\n", u, tu);*/

    /* page 76 */
    /*int x = -1;
    unsigned t = 2147483648; 2^31
    printf("x = %u = %d\n", x, x);
    printf("u = %u = %d\n", t, t);*/
    
    /* page 77-78 */
    /* short sx = -12345;
    unsigned short usx = sx;
    int x = sx;
    unsigned ux = usx;

    printf("sx  = %d:\t", sx);
    show_short(sx);
    printf("usx = %u:\t", usx);
    show_short(usx);
    printf("x   = %d:\t", x);
    show_int(x);
    printf("ux  = %u:\t", ux);
    show_int(ux); */

    /* page 80 */
    /* printf("\n");
    short sy = -12345;
    unsigned uy = sy;
    printf("uy  = %u:\t", uy);
    show_int(uy); */
    
    /* bottom of page 68 */
    /*
    short x = 12345;
    short mx = -x;

    printf("x: ");
    show_short(x);
    show_short_bits(x);
    printf("\n");
    printf("-x: ");
    show_short(mx);
    show_short_bits(mx);
    */
}
