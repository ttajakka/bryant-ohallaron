/* Playing around with integers */

#include <stdio.h>
#include "../../bytes/bytes.h"

int main() {
    short x = 12345;
    short mx = -x;

    printf("x: ");
    show_short(x);
    show_short_bits(x);
    printf("\n");
    printf("-x: ");
    show_short(mx);
    show_short_bits(mx);
}
