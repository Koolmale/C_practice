#include <stdio.h>

int main () {
    int i, j;

    for (i=1; i < 4; i++) {
        printf("Outer loop interation %i \n", i);

        for (j=1; j<4; j++) {
            printf("\tInner loop iteration %i \n", j);
        }
    }

    return 0;
}