#include <stdio.h>

int main() {
    int a, b;

    printf("Assigned: \n");

    printf("\t Variable a= %d \n", a = 8);
    printf("\t Variable b= %d \n", b = 4);
    
    printf("Math: And a gets assigned every time\n");

    printf("\t Variable a + b = %d \n", a+b );
    printf("\t Variable a+=b (8+=4) = %d \n", a+=b);
    printf("\t Variable a-=b (8-=4) = %d \n", a-=b);
    printf("\t Variable a*=b (8*=4) = %d \n", a*=b);
    printf("\t Variable a/=b (8/=4) = %d \n", a/=b);
    return 0;
}