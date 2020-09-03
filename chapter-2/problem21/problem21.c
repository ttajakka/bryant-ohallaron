/* Problem 2.21 from page 76  */

#include <stdio.h>

int main() {
    /* -2147483647-1 == 2147483648U evaluates to 1.
     * The second argument is unsigned, so the first
     * is cast to unsigned. 
     * (unsigned int) -2147483647-1 == 2147483648 */
    printf("Expression: -2147483647-1 == 2147483648U\n");
    printf("Type: unsigned\n");
    printf("Evaluation: %i\n\n",-2147483647-1 == 2147483648U); 
    
    /* -2147483647-1 < 2147483647 evaluates to 1.
     * Both arguments are signed, so the comparison
     * is of signed integers. */
    printf("Expression: -2147483647-1 < 2147483647\n");
    printf("Type: signed\n");
    printf("Evaluation: %i\n\n",-2147483647-1 < 2147483647);

    /* -2147483647-1U < 2147483647 evaluates to 0.
     * The first argument is unsigned, so the second
     * is cast to unsigned. 
     * (unsigned int) -2147483647-1U == 2147483648 */
    printf("Expression: -2147483647-1U < 2147483647\n");
    printf("Type: unsigned\n");
    printf("Evaluation: %i\n\n",-2147483647-1U < 2147483647);

    /* -2147483647-1 < -2147483647 evaluates to 1.
     * Both arguments are signed, so the comparison
     * is of signed integers.  */
    printf("Expression: -2147483647-1 < -2147483647\n");
    printf("Type: signed\n");
    printf("Evaluation: %i\n\n",-2147483647-1 < -2147483647);

    /* -2147483647-1U < -2147483647 evaluates to 0.
     * The first argument is cast to unsigned, hence
     * so the second one. 
     * (unsigned int) -2147483647-1U == 2147483648
     * (unsigned int) -2147483647U == 2147483649*/
    printf("Expression: -2147483647-1U < -2147483647\n");
    printf("Type: unsigned\n");
    printf("Evaluation: %i\n",-2147483647-1U < -2147483647);

}
