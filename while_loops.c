#include <stdio.h>

int main () {
    int i, arr[3] = {10, 20, 30};

    i = 0;
    while (i < 3) {
        printf("While arr[%i]  = %i \n", i, arr [i]); i++;
    }


    i = 0;
    do {
        printf("\n Do While arr[%i] = %i \n", i, arr[i], i++);
    }
    while (i < 3);
    return 0;

}