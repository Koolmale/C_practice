#include <stdio.h>

int main () {
    int i, j;

    for (i = 1; i < 4; i++) {
        for (j = 1; j < 4; j++) {
            
            if ( i == 1 && j == 1) {
            printf("Statement continues when i = %i and j = %i \n", i, j);
            continue;
        }

            if (i==2 && j==1) {
                printf("Statement breaks when i = %i, and j = %i \n", i, j);
                break;
            }
            printf("Running i = %i, j = %i \n", i, j);
        }
    }
}