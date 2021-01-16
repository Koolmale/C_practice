#include <stdio.h>

int main () {
    int num = 6;

    (num % 2 != 0) ? printf("number is odd, %d \n", num) : printf("number is even, %d \n", num);

    printf("There %s", (num ==1) ? "is" : "are");
    printf("%d %s \n", num, (num ==1) ? "apple" : "apples");

    num = 1;
    printf("There %s ", (num ==1) ? "is" : "are");
    printf(" %d %s \n", num, (num==1) ? "apple" : "apples");
    return 0;
}