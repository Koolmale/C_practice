#include <stdio.h>

void first();
int cube5();

void first() {
    printf("This is the first sentence in the main function");
}

int cube5() {
    int cube = 5*5*5;
    return cube;
}

int main () {
    first();
    printf("\n This is a second function -- 5*5*5 = %i", cube5());

    return 0;
}