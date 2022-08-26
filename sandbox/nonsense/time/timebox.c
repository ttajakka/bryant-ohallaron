#include <stdio.h>
#include <time.h>

int main() {
    printf("Clocks per second: %li\n", CLOCKS_PER_SEC);
    printf("clock() gives: %li\n", clock());
    printf("time(NULL) gives: %li\n", time(NULL));
}
