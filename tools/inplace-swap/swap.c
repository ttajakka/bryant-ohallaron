/* Inspired by Practice Problem 2.10 and 2.11 */

#include <stdio.h>

/* Interchanges to integers without creating a temporary third integer */
void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt-1; first < last; first++, last--)
        inplace_swap(&a[first], &a[last]);
}

void printarray(int a[], int cnt) {
    for (int i = 0; i < cnt; i++)
        printf(" %i", a[i]);
    printf("\n");
}

int main() {
    /* Test out inplace_swap
    int x = 3, y = 5;
    printf("Values before swapping: x = %i, y = %i\n", x, y);
    inplace_swap(&x, &y);
    printf("Values after swapping: x = %i, y = %i\n", x, y);
    */

    int a[5] = {1,2,3,4,5};
    printarray(a,5);
    reverse_array(a, 5);
    printarray(a,5);

}
