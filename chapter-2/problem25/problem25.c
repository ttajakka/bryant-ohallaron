/* Problem 2.25 from page 83 */

#include <stdio.h>

float sum_elements(float a[], unsigned length) {
    int i;
    float result = 0;

    for (i = 0; i <= length-1; i++)
        result += a[i];
    return result;
}

int main() {
    float a[] = {1.2, 2.5};
    float sum = sum_elements(a, 0);
    printf("sum = %f\n", sum);
}
