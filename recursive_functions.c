#include <stdio.h>

void count_down ( int num );

int main () {
    int start;

    printf("Enter a positive integer to count down from: ");
    scanf("%d", &start);

    count_down (start);

    printf("Lift Off! \n");

    return 0;
}

void count_down (int num) {

    printf("%d \n", num);
    --num;

    if (num < 0) return;
    else count_down( num );
}
