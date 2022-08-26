#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void fitprint(int i, int width) {
    printf("%d", i);
    for (int j = 0; j < width-((int)log10(i)+1); j++) {
        printf(" ");
    }
}
int main() {
    srand((unsigned) time(NULL));
    int N = 4; //depth of the tree
    int width = 5; //space of node at last row
    for (int i = 0; i <= N; i++) {
        // print symbols above numbers
        for (int j = 0; j < pow(2,i-1); j++) {
            if (i == 0) break;
            printf(" '");
            for (int w = 0; w < width-2; w++) printf(" ");
            for (int u = 0; u < pow(2,N-i)-1; u++)
                for (int w = 0; w < width; w++)
                    printf(" ");
            printf(" `");
            for (int w = 0; w < width-2; w++) printf(" ");
            for (int u = 0; u < pow(2,N-i)-1; u++)
                for (int w = 0; w < width; w++)
                    printf(" ");
            if (j == pow(2,i-1)-1) printf("\n");
        }
        // print numbers and their spacing
        for (int j = 0; j < pow(2,i); j++) {
            fitprint(rand() % 1000, width);
            for (int u = 0; u < pow(2,N-i)-1; u++) 
                for (int w = 0; w < width; w++)
                    printf(" ");
            if (j == pow(2,i)-1) printf("\n");
        }
        if (i == N)
            break;
        // print symbols below numbers
        for (int j = 0; j < pow(2,i); j++) {
            printf(" :.");
            for (int w = 0; w < width-3; w++) printf(" ");
            for (int u = 0; u < pow(2,N-i)-1; u++)
                for (int w = 0; w < width; w++)
                    printf(" ");
            if (j == pow(2,i)-1) printf("\n");
        }
        // print horizontal connectors and their spacing
        for (int j = 0; j < pow(2,i); j++) {
            printf(" : '");
            for (int w = 0; w < width-4; w++) printf("-");
            for (int u = 0; u < pow(2,N-i-1)-1; u++)
                for (int w = 0; w < width; w++)
                    printf("-");
            printf(".");
            for (int w = 0; w < width-1; w++) printf(" ");
            for (int u = 0; u < pow(2,N-i-1)-1; u++)
                for (int w = 0; w < width; w++)
                    printf(" ");
            if (j == pow(2,i)-1) printf("\n");
        }
    }
    //printf("\n");
    
/*
    for (int i = 1; i < 257; i++) {
        printf("%d", i);
        for (int j = 0; j < 5-((int)log10(i)+1); j++) {
            printf(" ");
        }
        if (!(i%32)) printf("\n");
    }  
*/
}

/*
*
|'-------------.
*               *
|'-----.        |'-----.
*       *       *       *
|'-.    |'-.    |'-.    |'-.
*   *   *   *   *   *   *   *

*/
