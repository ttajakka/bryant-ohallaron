/* Testing the enum keyword */
#include <stdio.h>

enum week{MON=1, TUE, WED, THU, FRI, SAT, SUN};

int main() {
    printf("Days: ");
    for (int i = MON; i <= SUN+1; i++)
        printf("%i ", i);
    printf("\n");
}
