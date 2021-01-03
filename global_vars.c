/*declaring external-global vars using the extern and static key words*/
#include <stdio.h>
#include <limits.h>

static int sum = 100;

int main() {
  extern int sum;
  printf("Sum is %d \n", sum);
  return 0;
}
