#include <stdio.h>

int main () {
    int true = 1, false = 0;

    printf("AND (false && false): %d \n", false && false);
    printf("AND (true && false): %d \n", true&&false);
    printf("AND (true && true): %d \n", true&&true);

    printf("OR (true || false): %d \n", true||false);
    printf("NOT (true !true): %d %d\n", true, !true);
    return 0;
}