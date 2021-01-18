#include <stdio.h>

int main () {
    int i, j;

    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if(i == 2 && j == 1) {goto end ;}
            printf("Statement - i = %i, j = %i \n", i, j);

        }
    } end:

    return 0;
}