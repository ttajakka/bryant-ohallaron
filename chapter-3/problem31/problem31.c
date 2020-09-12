/* Problem 3.31 on page 237
 *
 * The following C code generates the assembly found in
 * problem31.s */

void switcher(long a, long b, long c, long *dest)
{
    long val;
    switch(a) {
    case 5:           // Case A, .L7
        c = b ^ 15;
        /* Fall through */
    case 0:           // Case B, .L3
        val = c + 112;
        break;
    case 2:           // Case C, .L5
    case 7:           // Case D, .L5
        val = (b+c)<<2;
        break;
    case 4:           // Case E, .L6
        val = a;
        break;
    default:
        val = b;
    }
    *dest = val;
}
