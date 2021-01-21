#include <stdio.h>
#include "utils.h"

void getnum() ;

int main () {
    getnum();
    return 0;
}

void getnum() {
    int num;
    char again;

    printf("Enter a number to be squared: ");
    scanf("%i", &num);

    printf("%i squared is %i \n", num, square(num));

    printf("Square another number? Y or N: ");
    scanf("%c", &again);

    if (again == 'Y') || (again == 'y') getnum();
    else return;
}